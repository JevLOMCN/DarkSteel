// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ~FUpdate @ 1487806e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FSimpleStreamableAssetManager::FUpdate::~FUpdate(FUpdate *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ObjectRegistrationIndex).SharedReferenceCount.ReferenceController);
  return;
}

// operator= @ 148780da0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FUpdate * __thiscall
FSimpleStreamableAssetManager::FUpdate::operator=(FUpdate *this,FUpdate *param_1)

{
  undefined1 uVar1;
  double dVar2;
  
  if (this != param_1) {
    (this->ObjectRegistrationIndex).Object = (param_1->ObjectRegistrationIndex).Object;
    (param_1->ObjectRegistrationIndex).Object = (int *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ObjectRegistrationIndex).SharedReferenceCount,
               &(param_1->ObjectRegistrationIndex).SharedReferenceCount);
  }
  dVar2 = (param_1->ObjectBounds).Origin.field0_0x0._s_0.Y;
  (this->ObjectBounds).Origin.field0_0x0._s_0.X = (param_1->ObjectBounds).Origin.field0_0x0._s_0.X;
  (this->ObjectBounds).Origin.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->ObjectBounds).BoxExtent.field0_0x0._s_0.X;
  (this->ObjectBounds).Origin.field0_0x0._s_0.Z = (param_1->ObjectBounds).Origin.field0_0x0._s_0.Z;
  (this->ObjectBounds).BoxExtent.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->ObjectBounds).BoxExtent.field0_0x0._s_0.Z;
  (this->ObjectBounds).BoxExtent.field0_0x0._s_0.Y =
       (param_1->ObjectBounds).BoxExtent.field0_0x0._s_0.Y;
  (this->ObjectBounds).BoxExtent.field0_0x0._s_0.Z = dVar2;
  (this->ObjectBounds).SphereRadius = (param_1->ObjectBounds).SphereRadius;
  this->field2_0x48 = param_1->field2_0x48;
  this->field2_0x48 = param_1->field2_0x48;
  this->StreamingScaleFactor = param_1->StreamingScaleFactor;
  this->MinDistance = param_1->MinDistance;
  this->MaxDistance = param_1->MaxDistance;
  this->LastRenderedTime = param_1->LastRenderedTime;
  this->field_0x60 = this->field_0x60 ^ (this->bForceMipStreaming ^ param_1->bForceMipStreaming) & 1
  ;
  return this;
}

