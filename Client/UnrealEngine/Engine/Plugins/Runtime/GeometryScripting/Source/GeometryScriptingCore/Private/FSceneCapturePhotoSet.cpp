// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 1

// ~FSceneCapturePhotoSet @ 14cda67b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Geometry::FSceneCapturePhotoSet::~FSceneCapturePhotoSet(FSceneCapturePhotoSet *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DebugImagesFolderName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PhotoSetParams).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<UE::Geometry::TSpatialPhoto<float>,1>,int>
            ((TSharedPtr<UE::Geometry::TSpatialPhoto<float>,1> *)
             (this->DeviceDepthPhotoSet).Photos.AllocatorInstance.Data,
             (this->DeviceDepthPhotoSet).Photos.ArrayNum);
  pFVar1 = (this->DeviceDepthPhotoSet).Photos.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<UE::Geometry::TSpatialPhoto<UE::Math::TVector<float>_>,1>,int>
            ((TSharedPtr<UE::Geometry::TSpatialPhoto<UE::Math::TVector<float>_>,1> *)
             (this->SubsurfaceColorPhotoSet).Photos.AllocatorInstance.Data,
             (this->SubsurfaceColorPhotoSet).Photos.ArrayNum);
  pFVar1 = (this->SubsurfaceColorPhotoSet).Photos.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<UE::Geometry::TSpatialPhoto<float>,1>,int>
            ((TSharedPtr<UE::Geometry::TSpatialPhoto<float>,1> *)
             (this->OpacityPhotoSet).Photos.AllocatorInstance.Data,
             (this->OpacityPhotoSet).Photos.ArrayNum);
  pFVar1 = (this->OpacityPhotoSet).Photos.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<UE::Geometry::TSpatialPhoto<UE::Math::TVector<float>_>,1>,int>
            ((TSharedPtr<UE::Geometry::TSpatialPhoto<UE::Math::TVector<float>_>,1> *)
             (this->EmissivePhotoSet).Photos.AllocatorInstance.Data,
             (this->EmissivePhotoSet).Photos.ArrayNum);
  pFVar1 = (this->EmissivePhotoSet).Photos.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<UE::Geometry::TSpatialPhoto<UE::Math::TVector<float>_>,1>,int>
            ((TSharedPtr<UE::Geometry::TSpatialPhoto<UE::Math::TVector<float>_>,1> *)
             (this->WorldNormalPhotoSet).Photos.AllocatorInstance.Data,
             (this->WorldNormalPhotoSet).Photos.ArrayNum);
  pFVar1 = (this->WorldNormalPhotoSet).Photos.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<UE::Geometry::TSpatialPhoto<UE::Math::TVector<float>_>,1>,int>
            ((TSharedPtr<UE::Geometry::TSpatialPhoto<UE::Math::TVector<float>_>,1> *)
             (this->PackedMRSPhotoSet).Photos.AllocatorInstance.Data,
             (this->PackedMRSPhotoSet).Photos.ArrayNum);
  pFVar1 = (this->PackedMRSPhotoSet).Photos.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<UE::Geometry::TSpatialPhoto<float>,1>,int>
            ((TSharedPtr<UE::Geometry::TSpatialPhoto<float>,1> *)
             (this->MetallicPhotoSet).Photos.AllocatorInstance.Data,
             (this->MetallicPhotoSet).Photos.ArrayNum);
  pFVar1 = (this->MetallicPhotoSet).Photos.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<UE::Geometry::TSpatialPhoto<float>,1>,int>
            ((TSharedPtr<UE::Geometry::TSpatialPhoto<float>,1> *)
             (this->SpecularPhotoSet).Photos.AllocatorInstance.Data,
             (this->SpecularPhotoSet).Photos.ArrayNum);
  pFVar1 = (this->SpecularPhotoSet).Photos.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<UE::Geometry::TSpatialPhoto<float>,1>,int>
            ((TSharedPtr<UE::Geometry::TSpatialPhoto<float>,1> *)
             (this->RoughnessPhotoSet).Photos.AllocatorInstance.Data,
             (this->RoughnessPhotoSet).Photos.ArrayNum);
  pFVar1 = (this->RoughnessPhotoSet).Photos.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<UE::Geometry::TSpatialPhoto<UE::Math::TVector<float>_>,1>,int>
            ((TSharedPtr<UE::Geometry::TSpatialPhoto<UE::Math::TVector<float>_>,1> *)
             (this->BaseColorPhotoSet).Photos.AllocatorInstance.Data,
             (this->BaseColorPhotoSet).Photos.ArrayNum);
  pFVar1 = (this->BaseColorPhotoSet).Photos.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VisibleComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VisibleActors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

