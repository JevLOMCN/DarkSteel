// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// GetInstancedStereoViewport @ 145771510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FScreenPassTextureViewport * __thiscall
FSeparateTranslucencyDimensions::GetInstancedStereoViewport
          (FSeparateTranslucencyDimensions *this,FScreenPassTextureViewport *__return_storage_ptr__,
          FViewInfo *param_1)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  TIntPoint<int>_u_0 TVar5;
  int iVar6;
  TIntPoint<int>_u_0 local_18;
  
  fVar1 = this->Scale;
  uVar2 = *(undefined8 *)&(param_1->ViewRectWithSecondaryViews).field0_0x0;
  uVar3 = *(undefined8 *)((longlong)&(param_1->ViewRectWithSecondaryViews).field0_0x0 + 8);
  local_18._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_18._s_0.Y = (int)((float)(int)local_18._4_4_ * fVar1);
  local_18._s_0.X = (int)((float)(int)uVar2 * fVar1);
  (__return_storage_ptr__->Extent).field0_0x0 = (this->Extent).field0_0x0;
  iVar6 = (int)((float)(int)uVar3 * fVar1);
  (__return_storage_ptr__->Rect).field0_0x0._s_0.Min.field0_0x0 = local_18;
  iVar4 = (int)((float)(int)((ulonglong)uVar3 >> 0x20) * fVar1);
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  if (iVar6 < 1) {
    iVar6 = 1;
  }
  TVar5._s_0.Y = iVar4;
  TVar5._s_0.X = iVar6;
  (__return_storage_ptr__->Rect).field0_0x0._s_0.Max.field0_0x0 = TVar5;
  return __return_storage_ptr__;
}

