// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 4

// FSpaceCurveDeformationMechanicSelectionChange @ 14caca570

FSpaceCurveDeformationMechanicSelectionChange * __thiscall
FSpaceCurveDeformationMechanicSelectionChange::FSpaceCurveDeformationMechanicSelectionChange
          (FSpaceCurveDeformationMechanicSelectionChange *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  this->_padding_ = (longlong)&___7FSpaceCurveDeformationMechanicSelectionChange__6B_;
  (this->To).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->To).ArrayNum = 0;
  (this->To).ArrayMax = 0;
  (this->From).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->From).ArrayNum = 0;
  (this->From).ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->From,param_1);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->To,param_2);
  return this;
}

// Apply @ 14caeb130

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
FSpaceCurveDeformationMechanicSelectionChange::Apply
          (FSpaceCurveDeformationMechanicSelectionChange *this,UObject *param_1)

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
        &pUVar2->_padding_)) goto LAB_14caeb16a;
  }
  param_1 = (UObject *)0x0;
LAB_14caeb16a:
  USpaceCurveDeformationMechanic::UpdateSelection
            ((USpaceCurveDeformationMechanic *)param_1,&this->To);
  return;
}

// Revert @ 14cb32e80

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
FSpaceCurveDeformationMechanicSelectionChange::Revert
          (FSpaceCurveDeformationMechanicSelectionChange *this,UObject *param_1)

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
        &pUVar2->_padding_)) goto LAB_14cb32eba;
  }
  param_1 = (UObject *)0x0;
LAB_14cb32eba:
  USpaceCurveDeformationMechanic::UpdateSelection
            ((USpaceCurveDeformationMechanic *)param_1,&this->From);
  return;
}

// ToString @ 14cb411e0

FString * __thiscall
FSpaceCurveDeformationMechanicSelectionChange::ToString
          (FSpaceCurveDeformationMechanicSelectionChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FSpaceCurveDeformationMechanicSelectionChange");
  return __return_storage_ptr__;
}

