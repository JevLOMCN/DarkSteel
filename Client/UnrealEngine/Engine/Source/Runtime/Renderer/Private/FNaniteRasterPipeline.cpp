// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// GetFallbackPipeline @ 145063750

bool __thiscall
FNaniteRasterPipeline::GetFallbackPipeline
          (FNaniteRasterPipeline *this,FNaniteRasterPipeline *param_1)

{
  undefined1 *puVar1;
  FDisplacementScaling FVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  FDisplacementFadeRange FVar6;
  FNaniteRasterPipeline *pFVar7;
  byte bVar8;
  FNaniteRasterPipeline local_28;
  
  puVar1 = &this->field_0x18;
  uVar3 = *puVar1;
  uVar4 = this->field_0x19;
  bVar8 = (byte)(((byte)uVar3 >> 1 & 0x18 | (byte)uVar3 & 0x40) >> 2) | uVar4 & 8 |
          this->bIsTwoSided;
  if (((this->bPerPixelEval) && (this->bHasPixelDistance)) ||
     ((this->bDisplacementEnabled && (this->bHasDisplacementFadeOut)))) {
    if (this->bWPOEnabled) {
      FVar2 = this->DisplacementScaling;
      param_1->RasterMaterial = this->RasterMaterial;
      param_1->DisplacementScaling = FVar2;
      uVar5 = *(undefined8 *)&this->field_0x18;
      param_1->DisplacementFadeRange = this->DisplacementFadeRange;
      *(undefined8 *)&param_1->field_0x18 = uVar5;
      param_1->bDisplacementEnabled = false;
      param_1->bHasWPODistance = false;
      param_1->bPerPixelEval = false;
      param_1->bHasPixelDistance = false;
      param_1->bVertexUVs = false;
      param_1->bHasDisplacementFadeOut = false;
    }
    else {
      pFVar7 = GetFixedFunctionPipeline(&local_28,bVar8);
      FVar2 = pFVar7->DisplacementScaling;
      FVar6 = pFVar7->DisplacementFadeRange;
      uVar5 = *(undefined8 *)&pFVar7->field_0x18;
      param_1->RasterMaterial = pFVar7->RasterMaterial;
      param_1->DisplacementScaling = FVar2;
      param_1->DisplacementFadeRange = FVar6;
      *(undefined8 *)&param_1->field_0x18 = uVar5;
    }
    if (!this->bDisplacementEnabled) {
      return true;
    }
    param_1->field_0x19 =
         param_1->field_0x19 ^ (~(this->field_0x18 * '\x02') ^ param_1->field_0x19) & 4U;
  }
  else {
    if (!this->bHasWPODistance) {
      return false;
    }
    if ((bool)this->bDisplacementEnabled || (bool)this->bPerPixelEval) {
      FVar2 = this->DisplacementScaling;
      param_1->RasterMaterial = this->RasterMaterial;
      param_1->DisplacementScaling = FVar2;
      uVar5 = *(undefined8 *)&this->field_0x18;
      param_1->DisplacementFadeRange = this->DisplacementFadeRange;
      *(undefined8 *)&param_1->field_0x18 = uVar5;
      param_1->bWPOEnabled = false;
      param_1->bHasWPODistance = false;
    }
    else {
      pFVar7 = GetFixedFunctionPipeline(&local_28,bVar8);
      FVar2 = pFVar7->DisplacementScaling;
      FVar6 = pFVar7->DisplacementFadeRange;
      uVar5 = *(undefined8 *)&pFVar7->field_0x18;
      param_1->RasterMaterial = pFVar7->RasterMaterial;
      param_1->DisplacementScaling = FVar2;
      param_1->DisplacementFadeRange = FVar6;
      *(undefined8 *)&param_1->field_0x18 = uVar5;
    }
    if (!this->bDisplacementEnabled) {
      return true;
    }
  }
  FVar2 = this->DisplacementScaling;
  (param_1->DisplacementFadeRange).StartSizePixels = 0.0;
  (param_1->DisplacementFadeRange).EndSizePixels = 0.0;
  param_1->DisplacementScaling = FVar2;
  return true;
}

// GetFixedFunctionPipeline @ 145063880

FNaniteRasterPipeline * __cdecl
FNaniteRasterPipeline::GetFixedFunctionPipeline
          (FNaniteRasterPipeline *__return_storage_ptr__,uchar param_1)

{
  undefined1 *puVar1;
  UMaterial *pUVar2;
  FMaterialRenderProxy *pFVar3;
  byte bVar4;
  
  __return_storage_ptr__->RasterMaterial = (FMaterialRenderProxy *)0x0;
  (__return_storage_ptr__->DisplacementScaling).Magnitude = 4.0;
  (__return_storage_ptr__->DisplacementScaling).Center = 0.5;
  (__return_storage_ptr__->DisplacementFadeRange).StartSizePixels = 4.0;
  (__return_storage_ptr__->DisplacementFadeRange).EndSizePixels = 1.0;
  __return_storage_ptr__->bHasPixelDistance = false;
  __return_storage_ptr__->bFirstPersonLerp = false;
  __return_storage_ptr__->bVertexUVs = false;
  __return_storage_ptr__->bCastShadow = false;
  __return_storage_ptr__->bFixedDisplacementFallback = false;
  __return_storage_ptr__->bHasDisplacementFadeOut = false;
  puVar1 = &__return_storage_ptr__->field_0x18;
  __return_storage_ptr__->bIsTwoSided = false;
  __return_storage_ptr__->bHasWPODistance = false;
  __return_storage_ptr__->bVoxel = false;
  __return_storage_ptr__->bSkinnedMesh = false;
  __return_storage_ptr__->bSplineMesh = false;
  __return_storage_ptr__->bPerPixelEval = false;
  __return_storage_ptr__->bDisplacementEnabled = false;
  __return_storage_ptr__->bWPOEnabled = false;
  pUVar2 = UMaterial::GetDefaultMaterial(MD_Surface);
  pFVar3 = (FMaterialRenderProxy *)(**(code **)(pUVar2->_padding_ + 0x310))(pUVar2);
  __return_storage_ptr__->RasterMaterial = pFVar3;
  bVar4 = __return_storage_ptr__->field_0x18 & 0xf0 ^ param_1 & 1;
  bVar4 = (param_1 << 2 ^ bVar4) & 0x40 ^ bVar4;
  __return_storage_ptr__->field_0x18 =
       ((bVar4 ^ param_1 << 3) & 0x10 ^ bVar4) & 0x5f ^ param_1 << 3 & 0x20;
  __return_storage_ptr__->field_0x19 = __return_storage_ptr__->field_0x19 & 0xe4 ^ param_1 & 8;
  return __return_storage_ptr__;
}

// GetPipelineHash @ 145063e50

uint __thiscall FNaniteRasterPipeline::GetPipelineHash(FNaniteRasterPipeline *this)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  ulong64 uVar4;
  uint local_28;
  undefined4 local_24;
  FDisplacementScaling local_20;
  FDisplacementFadeRange FStack_18;
  
  uVar1 = this->field_0x19;
  uVar2 = this->field_0x18;
  local_28 = ((((byte)uVar1 & 0x24) * 2 | (byte)uVar1 & 0x10) * 2 | (byte)uVar2 & 0x40 |
             (byte)uVar1 & 8) << 3 | (byte)uVar2 & 0x3f;
  local_24 = (undefined4)((ulonglong)this->RasterMaterial >> 4);
  local_20.Magnitude = 0.0;
  local_20.Center = 0.0;
  FStack_18.StartSizePixels = 0.0;
  FStack_18.EndSizePixels = 0.0;
  if (this->bDisplacementEnabled) {
    local_20 = this->DisplacementScaling;
    if (this->bHasDisplacementFadeOut) {
      FStack_18 = this->DisplacementFadeRange;
    }
  }
  uVar4 = CityHash64((char *)&local_28,0x18);
  uVar3 = (uint)uVar4;
  return (uVar3 >> 2) + 0x9e3779b9 + (int)(uVar4 >> 0x20) + uVar3 * 0x40 ^ uVar3;
}

