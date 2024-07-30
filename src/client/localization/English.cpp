#include "pch.h"
#include "English.h"

// {} is a placeholder for a variable, similar to std::format (but I had to implement it myself).
// When using {}, the LocalizeString::get call must be inside a util::FormatWString call to actually format it.

// & is a placeholder for the format character Minecraft uses
// When using &, the LocalizeString::get call must be inside a util::WFormat call to actually format it.

English::English() {
    English::strings = {
        // misc.

        { "client.intro.welcome", L"Welcome to Latite Client!" },
        { "client.intro.menubutton", L"Press {} in a world or server to open the mod menu." },

        { "client.settings.menuKey.name", L"Menu Key" },
        { "client.settings.ejectKey.name", L"Eject Key" },
        { "client.settings.language.name", L"Language" },
        { "client.settings.menuBlurEnabled.name", L"Menu Blur" },
        { "client.settings.useDX11.name", L"Use DX11" },
        { "client.settings.commandPrefix.name", L"Command Prefix" },
        { "client.settings.menuIntensity.name", L"Blur Intensity" },
        { "client.settings.accentColor.name", L"Accent Color" },
        { "client.settings.minecraftRenderer.name", L"Use Minecraft Renderer" },
        { "client.settings.textShadow.name", L"Minecraft Text Shadows" },
        { "client.settings.secondaryFont.name", L"HUD font" },
        { "client.settings.mcRendererFont.name", L"Minecraft HUD font" },
        { "client.settings.centerCursor.name", L"Center cursor when opening UIs" },
        { "client.settings.snapLines.name", L"Snap Lines" },
        { "client.settings.menuKey.desc", L"The key used to open the menu" },
        { "client.settings.ejectKey.desc", L"The key used to uninject the client" },
        { "client.settings.language.desc", L"Language selection" },
        { "client.settings.menuBlurEnabled.desc", L"Whether blur is enabled or disabled for the menu" },
        { "client.settings.useDX11.desc", L"Causes an FPS boost for some systems and may degrade performance for more high-end systems, but may cause issues.\nRestart your game upon disabling this setting." },
        { "client.settings.commandPrefix.desc", L"Command Prefix" },
        { "client.settings.menuIntensity.desc", L"The intensity of the menu blur" },
        { "client.settings.accentColor.desc", L"Accent Color" },
        { "client.settings.minecraftRenderer.desc", L"Use the Minecraft renderer for all HUD modules." },
        { "client.settings.textShadow.desc", L"Whether to have text shadows or not with Minecraft renderer." },
        { "client.settings.secondaryFont.desc", L"HUD Font when using non-minecraft renderer" },
        { "client.settings.mcRendererFont.desc", L"Minecraft HUD font" },
        { "client.settings.centerCursor.desc", L"Crosshair will be centered when you open the menu." },
        { "client.settings.snapLines.desc", L"Snap lines to help you align modules" },

        { "client.settings.mcRendererFont.default.name", L"Default" },
        { "client.settings.mcRendererFont.notoSans.name", L"Noto Sans" },
        { "client.settings.mcRendererFont.default.desc", L"The default UI font (Mojangles by default)" },
        { "client.settings.mcRendererFont.notoSans.desc", L"The smooth font (Noto Sans MS)" },

        { "client.settings.dx11EnabledMsg.name", L"&7Please restart your game to use DX12 again!" },

        // Text Modules

        { "client.textmodule.props.background.name", L"Background" },
        { "client.textmodule.props.customSize.name", L"Fixed Size" },
        { "client.textmodule.props.bgX.name", L"BG X" },
        { "client.textmodule.props.bgY.name", L"BG Y" },
        { "client.textmodule.props.padX.name", L"Pad X" },
        { "client.textmodule.props.padY.name", L"Pad Y" },
        { "client.textmodule.props.prefix.name", L"Prefix" },
        { "client.textmodule.props.suffix.name", L"Suffix" },
        { "client.textmodule.props.textSize.name", L"Text Size" },
        { "client.textmodule.props.textColor.name", L"Text" },
        { "client.textmodule.props.bgColor.name", L"Background" },
        { "client.textmodule.props.alignment.name", L"Alignment" },
        { "client.textmodule.props.alignmentCenter.name", L"Center" },
        { "client.textmodule.props.alignmentLeft.name", L"Left" },
        { "client.textmodule.props.alignmentRight.name", L"Right" },
        { "client.textmodule.props.showOutline.name", L"Outline" },
        { "client.textmodule.props.outlineThickness.name", L"Thickness" },
        { "client.textmodule.props.outlineColor.name", L"Outline Color" },
        { "client.textmodule.props.radius.name", L"Radius" },
        { "client.textmodule.props.customSize.desc", L"Use a custom size instead of padding" },
        { "client.textmodule.props.bgX.desc", L"Background size (only if Fixed Size is enabled)" },
        { "client.textmodule.props.bgY.desc", L"Background size (only if Fixed Size is enabled)" },
        { "client.textmodule.props.padX.desc", L"Padding" },
        { "client.textmodule.props.padY.desc", L"Padding" },
        { "client.textmodule.props.prefix.desc", L"The text before the value" },
        { "client.textmodule.props.suffix.desc", L"The text after the value" },
        { "client.textmodule.props.alignment.desc", L"How the text is aligned/expands" },

        { "client.textmodule.comboCounter.name", L"Combo Counter" },
        { "client.textmodule.comboCounter.desc", L"Shows how many combos you have." },
        { "client.textmodule.comboCounter.count.name", L"Combo: " },

        { "client.textmodule.reachDisplay.name", L"Reach Display" },
        { "client.textmodule.reachDisplay.desc", L"Displays your reach when attacking an entity." },
        { "client.textmodule.reachDisplay.decimals.name", L"Decimals" },
        { "client.textmodule.reachDisplay.decimals.desc", L"The number of decimals in the reach number" },

        { "client.textmodule.breakIndicator.name", L"Break Indicator" },
        { "client.textmodule.breakIndicator.desc", L"Shows the break progress of the block you're breaking." },
        { "client.textmodule.breakIndicator.lastProgress.name", L"Last Progress" },
        { "client.textmodule.breakIndicator.lastProgress.desc", L"Whether to save the progress after breaking is interrupted or not" },

        { "client.textmodule.customCoordinates.name", L"Custom Coordinates" },
        { "client.textmodule.customCoordinates.showDimension.name", L"Show Dimension" },
        { "client.textmodule.customCoordinates.dimension.name", L"Dimension: " },
        { "client.textmodule.customCoordinates.dimensionDisplay.overworld.name", L"Overworld" },
        { "client.textmodule.customCoordinates.dimensionDisplay.nether.name", L"Nether" },
        { "client.textmodule.customCoordinates.dimensionDisplay.theEnd.name", L"The End" },
        { "client.textmodule.customCoordinates.desc", L"Shows player position and other info" },
        { "client.textmodule.customCoordinates.showDimension.desc", L"Show the dimension the player is currently in" },

        // HUD Modules

        { "client.hudmodule.movableBossbar.name", L"Movable Bossbar" },
        { "client.hudmodule.movableBossbar.hideBossbar.name", L"Hide bossbar" },
        { "client.hudmodule.movableBossbar.desc", L"Makes the in-game bossbar movable." },

        { "client.hudmodule.movableCoordinates.name", L"Movable Coordinates" },
        { "client.hudmodule.movableCoordinates.hideVanillaCoordinates.name", L"Hide vanilla coordinates" },
        { "client.hudmodule.movableCoordinates.desc", L"Makes the vanilla coordinates display movable." },

        { "client.hudmodule.props.pos.name", L"Position" },
        { "client.hudmodule.props.snapX.name", L"Snap X" },
        { "client.hudmodule.props.snapY.name", L"Snap Y" },
        { "client.hudmodule.props.size.name", L"Size" },
        { "client.hudmodule.props.forceMcRend.name", L"Force Minecraft Renderer" },
        { "client.hudmodule.props.forceMcRend.desc", L"Whether or not to use the Minecraft renderer for this module." },

        { "client.hudmodule.itemCounter.name", L"Item Counter" },
        { "client.hudmodule.itemCounter.desc", L"Counts certain items in your inventory." },
        { "client.hudmodule.itemCounter.alwaysShow.name", L"Always Show" },
        { "client.hudmodule.itemCounter.potions.name", L"Potions" },
        { "client.hudmodule.itemCounter.arrows.name", L"Arrows" },
        { "client.hudmodule.itemCounter.crystals.name", L"Crystals" },
        { "client.hudmodule.itemCounter.totems.name", L"Totems" },
        { "client.hudmodule.itemCounter.xpBottles.name", L"XP Bottles" },

        { "client.hudmodule.armorHud.name", L"Armor HUD" },
        { "client.hudmodule.armorHud.modeVertical.name", L"Vertical" },
        { "client.hudmodule.armorHud.modeHorizontal.name", L"Horizontal" },
        { "client.hudmodule.armorHud.mode.name", L"Mode" },
        { "client.hudmodule.armorHud.durability.name", L"Show Durability" },
        { "client.hudmodule.armorHud.percent.name", L"Durability %" },
        { "client.hudmodule.armorHud.textColor.name", L"Text Color" },
        { "client.hudmodule.armorHud.desc", L"Shows your armor and held items." },
        { "client.hudmodule.armorHud.mode.desc", L"Mode" },
        { "client.hudmodule.armorHud.durability.desc", L"Show Durability" },
        { "client.hudmodule.armorHud.percent.desc", L"The durability percent" },
        { "client.hudmodule.armorHud.textColor.desc", L"The text color" },

        { "client.hudmodule.keystrokes.name", L"Keystrokes" },
        { "client.hudmodule.keystrokes.mouseButtons.name", L"Mouse Buttons" },
        { "client.hudmodule.keystrokes.showCps.name", L"CPS" },
        { "client.hudmodule.keystrokes.spaceBar.name", L"Space Bar" },
        { "client.hudmodule.keystrokes.border.name", L"Border" },
        { "client.hudmodule.keystrokes.showSneak.name", L"Sneak Key" },
        { "client.hudmodule.keystrokes.radius.name", L"Radius" },
        { "client.hudmodule.keystrokes.textSize.name", L"Text Size" },
        { "client.hudmodule.keystrokes.keySize.name", L"Key Size" },
        { "client.hudmodule.keystrokes.spaceSize.name", L"Space Bar" },
        { "client.hudmodule.keystrokes.mouseButtonHeight.name", L"Mouse Button Height" },
        { "client.hudmodule.keystrokes.padding.name", L"Padding" },
        { "client.hudmodule.keystrokes.borderLength.name", L"Border Length" },
        { "client.hudmodule.keystrokes.transition.name", L"Transition (0 = No Transition)" },
        { "client.hudmodule.keystrokes.borderCol.name", L"Border Color" },
        { "client.hudmodule.keystrokes.pressedCol.name", L"Pressed Color" },
        { "client.hudmodule.keystrokes.unpressedCol.name", L"Unpressed Color" },
        { "client.hudmodule.keystrokes.ptCol.name", L"Pressed Text Color" },
        { "client.hudmodule.keystrokes.uptCol.name", L"Unpressed Text Color" },
        { "client.hudmodule.keystrokes.desc", L"Shows movement keys and states." },
        { "client.hudmodule.keystrokes.mouseButtons.desc", L"Show mouse buttons" },
        { "client.hudmodule.keystrokes.showCps.desc", L"Show clicks per second" },
        { "client.hudmodule.keystrokes.spaceBar.desc", L"Space bar" },
        { "client.hudmodule.keystrokes.border.desc", L"Border" },
        { "client.hudmodule.keystrokes.showSneak.desc", L"Shows the sneak key" },
        { "client.hudmodule.keystrokes.radius.desc", L"How round the buttons are" },
        { "client.hudmodule.keystrokes.textSize.desc", L"Text Size" },
        { "client.hudmodule.keystrokes.keySize.desc", L"Key Size" },
        { "client.hudmodule.keystrokes.spaceSize.desc", L"Spacebar Size" },
        { "client.hudmodule.keystrokes.mouseButtonHeight.desc", L"Mouse Button Height" },
        { "client.hudmodule.keystrokes.padding.desc", L"Padding between keys" },
        { "client.hudmodule.keystrokes.borderLength.desc", L"The border length" },
        { "client.hudmodule.keystrokes.transition.desc", L"The smooth color transition (0 for no transition)" },
        { "client.hudmodule.keystrokes.borderCol.desc", L"The color of the border" },
        { "client.hudmodule.keystrokes.pressedCol.desc", L"The key color when pressed" },
        { "client.hudmodule.keystrokes.unpressedCol.desc", L"The key color when not pressed" },
        { "client.hudmodule.keystrokes.ptCol.desc", L"The text color when pressed" },
        { "client.hudmodule.keystrokes.uptCol.desc", L"The text color when not pressed" },

        // Regular modules

        { "client.module.props.enabled.name", L"Enabled" },
        { "client.module.props.key.name", L"Key" },
        { "client.module.props.enabled.desc", L"Whether the module is on or not" },
        { "client.module.props.key.desc", L"The keybind of the module" },

        { "client.module.freelook.name", L"Freelook" },
        { "client.module.freelook.desc", L"Look around freely." },

        { "client.module.thirdPersonNametag.name", L"Third Person Nametag" },
        { "client.module.thirdPersonNametag.desc", L"Shows your nametag in third person view." },

        { "client.module.cinematicCamera.name", L"Cinematic Camera" },
        { "client.module.cinematicCamera.desc", L"Makes your camera smooth and cinematic. Useful for video shots." },

        { "client.module.movableScoreboard.name", L"Movable Scoreboard" },
        { "client.module.movableScoreboard.desc", L"Makes the scoreboard movable." },

        { "client.module.commandShortcuts.name", L"Command Shortcuts" },
        { "client.module.commandShortcuts.desc", L"Shortcuts for commands like /gmc, /gms, etc." },

        { "client.module.nickname.name", L"Nickname" },
        { "client.module.nickname.desc", L"Makes your username appear as something else in Minecraft chat" },
        { "client.module.nickname.newNick.desc", L"Your new nickname." },

        { "client.module.itemTweaks.name", L"Item Tweaks" },
        { "client.module.itemTweaks.disableFlyingItem.name", L"Disable flying item animation" },
        { "client.module.itemTweaks.desc", L"Tweaks/settings related to item rendering." },
        { "client.module.itemTweaks.disableFlyingItem.desc", L"Disables the animation when you shift click an item" },

        { "client.module.behindYou.name", L"Behind You!" },
        { "client.module.behindYouState0.name", L"Third Person Front" },
        { "client.module.behindYouState1.name", L"Third Person Back" },
        { "client.module.behindYouState2.name", L"First Person" },
        { "client.module.behindYou.perspective.name", L"Perspective" },
        { "client.module.behindYou.bind.name", L"Bind" },
        { "client.module.behindYou.desc", L"Bind a perspective to a key." },
        { "client.module.behindYou.bind.desc", L"What to bind the perspective to" },
        { "client.module.behindYou.perspective.desc", L"The perspective" },

        { "client.module.environmentChanger.name", L"Environment Changer" },
        { "client.module.environmentChanger.setFogColor.name", L"Set Fog Color" },
        { "client.module.environmentChanger.fogColor.name", L"Fog Color" },
        { "client.module.environmentChanger.setTime.name", L"Set Time" },
        { "client.module.environmentChanger.timeToSet.name", L"Time" },
        { "client.module.environmentChanger.showWeather.name", L"Show Weather" },
        { "client.module.environmentChanger.desc", L"Changes visual features in the environment." },
        { "client.module.environmentChanger.fogColor.desc", L"The new fog color" },
        { "client.module.environmentChanger.setTime.desc", L"Whether or not to set the time" },
        { "client.module.environmentChanger.timeToSet.desc", L"The new time of day to set" },
        { "client.module.environmentChanger.showWeather.desc", L"Whether or not to show the weather" },

        { "client.module.blockOutline.name", L"Block Overlay" },
        { "client.module.blockOutline.renderThrough.name", L"Render Through" },
        { "client.module.blockOutline.transparent.name", L"Transparent" },
        { "client.module.blockOutline.vanillaOutline.name", L"Vanilla Outline" },
        { "client.module.blockOutline.outline.name", L"Outline" },
        { "client.module.blockOutline.outlineColor.name", L"Outline Color" },
        { "client.module.blockOutline.overlay.name", L"Overlay" },
        { "client.module.blockOutline.faceOverlay.name", L"Face Overlay" },
        { "client.module.blockOutline.overlayColor.name", L"Overlay Color" },
        { "client.module.blockOutline.desc", L"Changes the overlay in blocks!" },
        { "client.module.blockOutline.renderThrough.desc", L"Whether to render the outline through blocks or not" },
        { "client.module.blockOutline.transparent.desc", L"Whether or not to have a transparent overlay" },
        { "client.module.blockOutline.vanillaOutline.desc", L"Keep the vanilla outline." },
        { "client.module.blockOutline.outline.desc", L"Render an outline" },
        { "client.module.blockOutline.outlineColor.desc", L"The outline color" },
        { "client.module.blockOutline.overlay.desc", L"Render an overlay" },
        { "client.module.blockOutline.faceOverlay.desc", L"Render the selected face of the block." },
        { "client.module.blockOutline.overlayColor.desc", L"The overlay color" },


        // todo: check if this displays diacritics correctly (or even works at all)
        { "client.commands.config.desc", L"Perform actions related to profiles/configs" },
        { "client.commands.config.savedConfig.name", L"Saved current config!" },
        { "client.commands.config.savedConfigPath.name", L"Successfully saved config to &7{}.json" },
        { "client.commands.config.saveDuringLoadingError.name", L"Could not save current config before loading!" },
        { "client.commands.config.configNotFound.name", L"Could not find config &7{}" },
        { "client.commands.config.loadedConfig.name", L"Successfully loaded config &7{}" },
        { "client.commands.config.genericError.name", L"Something went wrong!" },

        { "client.commands.eject.desc", L"Removes Latite from the game." },
        { "client.commands.eject.ejectMsg.name", L"Unloaded the client." },

        { "client.commands.help.desc", L"Shows all commands and descriptions." },
    };
}

std::wstring English::getString(std::string id) {
    return English::strings.at(id);
}