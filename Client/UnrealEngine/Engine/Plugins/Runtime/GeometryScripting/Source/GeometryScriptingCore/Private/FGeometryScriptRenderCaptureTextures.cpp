// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 2

// StaticStruct @ 14cd94cd0

UScriptStruct * __cdecl FGeometryScriptRenderCaptureTextures::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptRenderCaptureTextures.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UScriptStruct_FGeometryScriptRenderCaptureTextures.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptRenderCaptureTextures,
                         (UObject *)pUVar1,L"GeometryScriptRenderCaptureTextures");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryScriptRenderCaptureTextures.OuterSingleton;
}

// operator= @ 14cda6cc0

FGeometryScriptRenderCaptureTextures * __thiscall
FGeometryScriptRenderCaptureTextures::operator=
          (FGeometryScriptRenderCaptureTextures *this,FGeometryScriptRenderCaptureTextures *param_1)

{
  UTexture2D *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->BaseColorMap).field0_0x0.DebugPtr, pUVar1 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->BaseColorMap).field0_0x0 = (param_1->BaseColorMap).field0_0x0;
  this->bHasBaseColorMap = param_1->bHasBaseColorMap;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->NormalMap).field0_0x0.DebugPtr, pUVar1 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->NormalMap).field0_0x0 = (param_1->NormalMap).field0_0x0;
  this->bHasNormalMap = param_1->bHasNormalMap;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->PackedMRSMap).field0_0x0.DebugPtr, pUVar1 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->PackedMRSMap).field0_0x0 = (param_1->PackedMRSMap).field0_0x0;
  this->bHasPackedMRSMap = param_1->bHasPackedMRSMap;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->MetallicMap).field0_0x0.DebugPtr, pUVar1 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->MetallicMap).field0_0x0 = (param_1->MetallicMap).field0_0x0;
  this->bHasMetallicMap = param_1->bHasMetallicMap;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->RoughnessMap).field0_0x0.DebugPtr, pUVar1 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->RoughnessMap).field0_0x0 = (param_1->RoughnessMap).field0_0x0;
  this->bHasRoughnessMap = param_1->bHasRoughnessMap;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->SpecularMap).field0_0x0.DebugPtr, pUVar1 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->SpecularMap).field0_0x0 = (param_1->SpecularMap).field0_0x0;
  this->bHasSpecularMap = param_1->bHasSpecularMap;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->EmissiveMap).field0_0x0.DebugPtr, pUVar1 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->EmissiveMap).field0_0x0 = (param_1->EmissiveMap).field0_0x0;
  this->bHasEmissiveMap = param_1->bHasEmissiveMap;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->OpacityMap).field0_0x0.DebugPtr, pUVar1 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->OpacityMap).field0_0x0 = (param_1->OpacityMap).field0_0x0;
  this->bHasOpacityMap = param_1->bHasOpacityMap;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->SubsurfaceColorMap).field0_0x0.DebugPtr, pUVar1 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->SubsurfaceColorMap).field0_0x0 = (param_1->SubsurfaceColorMap).field0_0x0;
  this->bHasSubsurfaceColorMap = param_1->bHasSubsurfaceColorMap;
  return this;
}

