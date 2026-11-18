// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147335900

UScriptStruct * __cdecl FStreamingRenderAssetPrimitiveInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStreamingRenderAssetPrimitiveInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FStreamingRenderAssetPrimitiveInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo,
                         (UObject *)pUVar1,L"StreamingRenderAssetPrimitiveInfo");
  }
  return Z_Registration_Info_UScriptStruct_FStreamingRenderAssetPrimitiveInfo.OuterSingleton;
}

// FStreamingRenderAssetPrimitiveInfo @ 1483e7640

FStreamingRenderAssetPrimitiveInfo * __thiscall
FStreamingRenderAssetPrimitiveInfo::FStreamingRenderAssetPrimitiveInfo
          (FStreamingRenderAssetPrimitiveInfo *this,FStreamingRenderAssetPrimitiveInfo *param_1)

{
  undefined4 uVar1;
  UStreamableRenderAsset *pUVar2;
  double dVar3;
  uint uVar4;
  
  pUVar2 = (param_1->RenderAsset).field0_0x0.DebugPtr;
  (this->RenderAsset).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UStreamableRenderAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  dVar3 = (param_1->Bounds).Origin.field0_0x0._s_0.Y;
  (this->Bounds).Origin.field0_0x0._s_0.X = (param_1->Bounds).Origin.field0_0x0._s_0.X;
  (this->Bounds).Origin.field0_0x0._s_0.Y = dVar3;
  dVar3 = (param_1->Bounds).BoxExtent.field0_0x0._s_0.X;
  (this->Bounds).Origin.field0_0x0._s_0.Z = (param_1->Bounds).Origin.field0_0x0._s_0.Z;
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = dVar3;
  dVar3 = (param_1->Bounds).BoxExtent.field0_0x0._s_0.Z;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Y = (param_1->Bounds).BoxExtent.field0_0x0._s_0.Y;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar3;
  (this->Bounds).SphereRadius = (param_1->Bounds).SphereRadius;
  this->TexelFactor = param_1->TexelFactor;
  this->PackedRelativeBox = param_1->PackedRelativeBox;
  uVar4 = (this->bAllowInvalidTexelFactorWhenUnregistered ^
          param_1->bAllowInvalidTexelFactorWhenUnregistered) & 1 ^ *(uint *)&this->field_0x48;
  *(uint *)&this->field_0x48 = uVar4;
  *(uint *)&this->field_0x48 = (uVar4 ^ *(uint *)&param_1->field_0x48) & 2 ^ uVar4;
  return this;
}

