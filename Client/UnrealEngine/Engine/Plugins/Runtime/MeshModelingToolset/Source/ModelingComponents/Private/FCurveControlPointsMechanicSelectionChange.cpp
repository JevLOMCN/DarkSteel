// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 5

// FCurveControlPointsMechanicSelectionChange @ 14cac9590

FCurveControlPointsMechanicSelectionChange * __thiscall
FCurveControlPointsMechanicSelectionChange::FCurveControlPointsMechanicSelectionChange
          (FCurveControlPointsMechanicSelectionChange *this,int param_1,bool param_2,int param_3)

{
  this->PointID = param_1;
  this->_padding_ = (longlong)&___7FCurveControlPointsMechanicSelectionChange__6B_;
  this->Added = param_2;
  this->ChangeStamp = param_3;
  return this;
}

// Apply @ 14caead10

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
FCurveControlPointsMechanicSelectionChange::Apply
          (FCurveControlPointsMechanicSelectionChange *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UCurveControlPointsMechanic::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14caead4a;
  }
  param_1 = (UObject *)0x0;
LAB_14caead4a:
  if (this->Added != false) {
    UCurveControlPointsMechanic::SelectPoint((UCurveControlPointsMechanic *)param_1,this->PointID);
    UCurveControlPointsMechanic::UpdateGizmoLocation((UCurveControlPointsMechanic *)param_1);
    return;
  }
  UCurveControlPointsMechanic::DeselectPoint((UCurveControlPointsMechanic *)param_1,this->PointID);
  UCurveControlPointsMechanic::UpdateGizmoLocation((UCurveControlPointsMechanic *)param_1);
  return;
}

// HasExpired @ 14cb1a780

bool __thiscall
FCurveControlPointsMechanicSelectionChange::HasExpired
          (FCurveControlPointsMechanicSelectionChange *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UCurveControlPointsMechanic::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14cb1a7ba;
  }
  param_1 = (UObject *)0x0;
LAB_14cb1a7ba:
  return *(int *)&param_1[0x29].field_0x8 != this->ChangeStamp;
}

// Revert @ 14cb32a70

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
FCurveControlPointsMechanicSelectionChange::Revert
          (FCurveControlPointsMechanicSelectionChange *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UCurveControlPointsMechanic::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14cb32aaa;
  }
  param_1 = (UObject *)0x0;
LAB_14cb32aaa:
  if (this->Added != false) {
    UCurveControlPointsMechanic::DeselectPoint((UCurveControlPointsMechanic *)param_1,this->PointID)
    ;
    UCurveControlPointsMechanic::UpdateGizmoLocation((UCurveControlPointsMechanic *)param_1);
    return;
  }
  UCurveControlPointsMechanic::SelectPoint((UCurveControlPointsMechanic *)param_1,this->PointID);
  UCurveControlPointsMechanic::UpdateGizmoLocation((UCurveControlPointsMechanic *)param_1);
  return;
}

// ToString @ 14cb41120

FString * __thiscall
FCurveControlPointsMechanicSelectionChange::ToString
          (FCurveControlPointsMechanicSelectionChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FCurveControlPointsMechanicSelectionChange");
  return __return_storage_ptr__;
}

