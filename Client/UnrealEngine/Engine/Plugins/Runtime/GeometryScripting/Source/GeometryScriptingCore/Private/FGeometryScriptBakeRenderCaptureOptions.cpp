// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 2

// StaticStruct @ 14cd942c0

UScriptStruct * __cdecl FGeometryScriptBakeRenderCaptureOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions,
                         (UObject *)pUVar1,L"GeometryScriptBakeRenderCaptureOptions");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryScriptBakeRenderCaptureOptions.OuterSingleton;
}

// FGeometryScriptBakeRenderCaptureOptions @ 14cda5150

FGeometryScriptBakeRenderCaptureOptions * __thiscall
FGeometryScriptBakeRenderCaptureOptions::FGeometryScriptBakeRenderCaptureOptions
          (FGeometryScriptBakeRenderCaptureOptions *this,
          FGeometryScriptBakeRenderCaptureOptions *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->Cameras).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Cameras).ArrayMax;
  iVar2 = (param_1->Cameras).ArrayNum;
  _Src = (param_1->Cameras).AllocatorInstance.Data;
  (this->Cameras).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->Cameras).AllocatorInstance.Data,_Src,(longlong)iVar2 * 0x48);
  }
  this->RenderCaptureResolution = param_1->RenderCaptureResolution;
  this->FieldOfViewDegrees = param_1->FieldOfViewDegrees;
  this->NearPlaneDist = param_1->NearPlaneDist;
  this->Resolution = param_1->Resolution;
  this->SamplesPerPixel = param_1->SamplesPerPixel;
  this->bRenderCaptureAntiAliasing = param_1->bRenderCaptureAntiAliasing;
  this->CleanupTolerance = param_1->CleanupTolerance;
  this->bBaseColorMap = param_1->bBaseColorMap;
  this->bNormalMap = param_1->bNormalMap;
  this->bPackedMRSMap = param_1->bPackedMRSMap;
  this->bMetallicMap = param_1->bMetallicMap;
  this->bRoughnessMap = param_1->bRoughnessMap;
  this->bSpecularMap = param_1->bSpecularMap;
  this->bEmissiveMap = param_1->bEmissiveMap;
  this->bOpacityMap = param_1->bOpacityMap;
  this->bSubsurfaceColorMap = param_1->bSubsurfaceColorMap;
  return this;
}

