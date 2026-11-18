// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 4

// FSpaceCurveDeformationMechanicMovementChange @ 14caca510

FSpaceCurveDeformationMechanicMovementChange * __thiscall
FSpaceCurveDeformationMechanicMovementChange::FSpaceCurveDeformationMechanicMovementChange
          (FSpaceCurveDeformationMechanicMovementChange *this,
          TArray<UE::Geometry::TFrame3<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Geometry::TFrame3<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  this->_padding_ = (longlong)&___7FSpaceCurveDeformationMechanicMovementChange__6B_;
  (this->To).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->To).ArrayNum = 0;
  (this->To).ArrayMax = 0;
  (this->From).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->From).ArrayNum = 0;
  (this->From).ArrayMax = 0;
  TArray<UE::Geometry::TFrame3<double>,TSizedDefaultAllocator<32>_>::operator=(&this->From,param_1);
  TArray<UE::Geometry::TFrame3<double>,TSizedDefaultAllocator<32>_>::operator=(&this->To,param_2);
  return this;
}

// Apply @ 14caeb0b0

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
FSpaceCurveDeformationMechanicMovementChange::Apply
          (FSpaceCurveDeformationMechanicMovementChange *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = USpaceCurveDeformationMechanic::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14caeb0ea;
  }
  param_1 = (UObject *)0x0;
LAB_14caeb0ea:
  TArray<UE::Geometry::TFrame3<double>,TSizedDefaultAllocator<32>_>::operator=
            (&((USpaceCurveDeformationMechanic *)param_1)->CurvePoints,&this->To);
  ((USpaceCurveDeformationMechanic *)param_1)->bSpatialValid = false;
  ((USpaceCurveDeformationMechanic *)param_1)->bRenderGeometryValid = false;
  USpaceCurveDeformationMechanic::UpdateGizmoLocation((USpaceCurveDeformationMechanic *)param_1);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&((USpaceCurveDeformationMechanic *)param_1)->OnPointsChanged);
  return;
}

// Revert @ 14cb32e00

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
FSpaceCurveDeformationMechanicMovementChange::Revert
          (FSpaceCurveDeformationMechanicMovementChange *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = USpaceCurveDeformationMechanic::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14cb32e3a;
  }
  param_1 = (UObject *)0x0;
LAB_14cb32e3a:
  TArray<UE::Geometry::TFrame3<double>,TSizedDefaultAllocator<32>_>::operator=
            (&((USpaceCurveDeformationMechanic *)param_1)->CurvePoints,&this->From);
  ((USpaceCurveDeformationMechanic *)param_1)->bSpatialValid = false;
  ((USpaceCurveDeformationMechanic *)param_1)->bRenderGeometryValid = false;
  USpaceCurveDeformationMechanic::UpdateGizmoLocation((USpaceCurveDeformationMechanic *)param_1);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&((USpaceCurveDeformationMechanic *)param_1)->OnPointsChanged);
  return;
}

// ToString @ 14cb411b0

FString * __thiscall
FSpaceCurveDeformationMechanicMovementChange::ToString
          (FSpaceCurveDeformationMechanicMovementChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FSpaceCurveDeformationMechanicMovementChange");
  return __return_storage_ptr__;
}

