// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 5

// FCurveControlPointsMechanicInsertionChange @ 14cac94e0

FCurveControlPointsMechanicInsertionChange * __thiscall
FCurveControlPointsMechanicInsertionChange::FCurveControlPointsMechanicInsertionChange
          (FCurveControlPointsMechanicInsertionChange *this,int param_1,int param_2,
          TVector<double> *param_3,bool param_4,int param_5)

{
  double dVar1;
  
  this->SequencePosition = param_1;
  this->_padding_ = (longlong)&___7FCurveControlPointsMechanicInsertionChange__6B_;
  this->PointID = param_2;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  (this->Coordinates).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  (this->Coordinates).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  this->Added = param_4;
  this->ChangeStamp = param_5;
  (this->Coordinates).field0_0x0._s_0.Z = dVar1;
  return this;
}

// Apply @ 14caeaa60

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
FCurveControlPointsMechanicInsertionChange::Apply
          (FCurveControlPointsMechanicInsertionChange *this,UObject *param_1)

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
        &pUVar2->_padding_)) goto LAB_14caeaa9a;
  }
  param_1 = (UObject *)0x0;
LAB_14caeaa9a:
  if (this->Added == false) {
    UCurveControlPointsMechanic::DeletePoint((UCurveControlPointsMechanic *)param_1,this->PointID);
  }
  else {
    UCurveControlPointsMechanic::InsertPointAt
              ((UCurveControlPointsMechanic *)param_1,this->SequencePosition,&this->Coordinates,
               &this->PointID);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&((UCurveControlPointsMechanic *)param_1)->OnPointsChanged);
  return;
}

// HasExpired @ 14cb1a660

bool __thiscall
FCurveControlPointsMechanicInsertionChange::HasExpired
          (FCurveControlPointsMechanicInsertionChange *this,UObject *param_1)

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
        &pUVar2->_padding_)) goto LAB_14cb1a69a;
  }
  param_1 = (UObject *)0x0;
LAB_14cb1a69a:
  return *(int *)&param_1[0x29].field_0x8 != this->ChangeStamp;
}

// Revert @ 14cb327c0

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
FCurveControlPointsMechanicInsertionChange::Revert
          (FCurveControlPointsMechanicInsertionChange *this,UObject *param_1)

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
        &pUVar2->_padding_)) goto LAB_14cb327fa;
  }
  param_1 = (UObject *)0x0;
LAB_14cb327fa:
  if (this->Added == false) {
    UCurveControlPointsMechanic::InsertPointAt
              ((UCurveControlPointsMechanic *)param_1,this->SequencePosition,&this->Coordinates,
               &this->PointID);
  }
  else {
    UCurveControlPointsMechanic::DeletePoint((UCurveControlPointsMechanic *)param_1,this->PointID);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&((UCurveControlPointsMechanic *)param_1)->OnPointsChanged);
  return;
}

// ToString @ 14cb41090

FString * __thiscall
FCurveControlPointsMechanicInsertionChange::ToString
          (FCurveControlPointsMechanicInsertionChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FCurveControlPointsMechanicSelectionChange");
  return __return_storage_ptr__;
}

