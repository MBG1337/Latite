#pragma once
#include "util/LMath.h"

namespace SDK {
	class LevelRendererPlayer {
	private:
		MVCLASS_FIELD(class MaterialPtr*, selectionOverlayMaterial , 0xEF0, 0x14E0, 0x1538);
		MVCLASS_FIELD(class MaterialPtr*, selectionBoxMaterial, 0xF50, 0x15A0, 0x1598);
	public:

		Vec3& getOrigin();
		float& getFovX();
		float& getFovY();

		class MaterialPtr* getSelectionBoxMaterial() { return selectionBoxMaterial; };
		class MaterialPtr* getSelectionOverlayMaterial() { return selectionOverlayMaterial; };
	};
}