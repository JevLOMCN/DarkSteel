// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// ShouldIgnoreScreenPercentage @ 1454bb1a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
USceneCaptureComponent2D::ShouldIgnoreScreenPercentage(USceneCaptureComponent2D *this)

{
  byte bVar1;
  
  if ((this->bRenderInMainRenderer != false) &&
     ((bVar1 = this->field_0x251, bVar1 == 4 ||
      ((bVar1 < 8 && ((0xebU >> (bVar1 & 0x1f) & 1) != 0)))))) {
    if ((((this->bIgnoreScreenPercentage != 0) && (this->UserSceneTextureBaseColor == (FName)0x0))
        && (this->UserSceneTextureNormal == (FName)0x0)) &&
       (this->UserSceneTextureSceneColor == (FName)0x0)) {
      return true;
    }
    return false;
  }
  return this->bIgnoreScreenPercentage;
}

// ShouldRenderWithMainViewResolution @ 1454bb2b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
USceneCaptureComponent2D::ShouldRenderWithMainViewResolution(USceneCaptureComponent2D *this)

{
  byte bVar1;
  
  if ((this->bMainViewResolution == 0 && this->bMainViewCamera == 0) &&
     (((this->bRenderInMainRenderer == false ||
       ((bVar1 = this->field_0x251, bVar1 != 4 &&
        ((7 < bVar1 || ((0xebU >> (bVar1 & 0x1f) & 1) == 0)))))) ||
      ((this->UserSceneTextureBaseColor == (FName)0x0 &&
       ((this->UserSceneTextureNormal == (FName)0x0 &&
        (this->UserSceneTextureSceneColor == (FName)0x0)))))))) {
    return false;
  }
  return true;
}

