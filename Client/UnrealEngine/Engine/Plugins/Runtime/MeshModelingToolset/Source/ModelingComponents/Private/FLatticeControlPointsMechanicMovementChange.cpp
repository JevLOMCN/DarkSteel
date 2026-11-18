// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 5

// FLatticeControlPointsMechanicMovementChange @ 14cac9870

FLatticeControlPointsMechanicMovementChange * __thiscall
FLatticeControlPointsMechanicMovementChange::FLatticeControlPointsMechanicMovementChange
          (FLatticeControlPointsMechanicMovementChange *this,
          TMap<int,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>_>
          *param_1,TMap<int,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>_>
                   *param_2,int param_3,bool param_4)

{
  this->_padding_ = (longlong)&___7FLatticeControlPointsMechanicMovementChange__6B_;
  *(undefined8 *)&(this->OriginalPositions).field_0x0 = 0;
  *(undefined8 *)&(this->OriginalPositions).field_0x8 = 0;
  *(undefined8 *)&(this->OriginalPositions).field_0x20 = 0;
  *(undefined4 *)&(this->OriginalPositions).field_0x28 = 0;
  *(undefined4 *)&(this->OriginalPositions).field_0x2c = 0x80;
  *(undefined4 *)&(this->OriginalPositions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OriginalPositions).field_0x34 = 0;
  *(undefined8 *)&(this->OriginalPositions).field_0x40 = 0;
  *(undefined4 *)&(this->OriginalPositions).field_0x48 = 0;
  TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
               *)&this->OriginalPositions,
              (TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
               *)param_1);
  *(undefined8 *)&(this->NewPositions).field_0x0 = 0;
  *(undefined8 *)&(this->NewPositions).field_0x8 = 0;
  *(undefined8 *)&(this->NewPositions).field_0x20 = 0;
  *(undefined4 *)&(this->NewPositions).field_0x28 = 0;
  *(undefined4 *)&(this->NewPositions).field_0x2c = 0x80;
  *(undefined4 *)&(this->NewPositions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NewPositions).field_0x34 = 0;
  *(undefined8 *)&(this->NewPositions).field_0x40 = 0;
  *(undefined4 *)&(this->NewPositions).field_0x48 = 0;
  TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
               *)&this->NewPositions,
              (TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
               *)param_2);
  this->bFirstMovement = param_4;
  this->ChangeStamp = param_3;
  return this;
}

// Apply @ 14caead90

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
FLatticeControlPointsMechanicMovementChange::Apply
          (FLatticeControlPointsMechanicMovementChange *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = ULatticeControlPointsMechanic::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14caeadca;
  }
  param_1 = (UObject *)0x0;
LAB_14caeadca:
  ULatticeControlPointsMechanic::UpdatePointLocations
            ((ULatticeControlPointsMechanic *)param_1,&this->NewPositions);
  ((ULatticeControlPointsMechanic *)param_1)->bHasChanged = true;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&((ULatticeControlPointsMechanic *)param_1)->OnPointsChanged);
  return;
}

// HasExpired @ 14cb1a7e0

bool __thiscall
FLatticeControlPointsMechanicMovementChange::HasExpired
          (FLatticeControlPointsMechanicMovementChange *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = ULatticeControlPointsMechanic::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14cb1a81a;
  }
  param_1 = (UObject *)0x0;
LAB_14cb1a81a:
  return *(int *)&param_1[0x1d].field_0x10 != this->ChangeStamp;
}

// Revert @ 14cb32af0

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
FLatticeControlPointsMechanicMovementChange::Revert
          (FLatticeControlPointsMechanicMovementChange *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = ULatticeControlPointsMechanic::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14cb32b2a;
  }
  param_1 = (UObject *)0x0;
LAB_14cb32b2a:
  ULatticeControlPointsMechanic::UpdatePointLocations
            ((ULatticeControlPointsMechanic *)param_1,&this->OriginalPositions);
  if (this->bFirstMovement != false) {
    ((ULatticeControlPointsMechanic *)param_1)->bHasChanged = false;
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&((ULatticeControlPointsMechanic *)param_1)->OnPointsChanged);
  return;
}

// ToString @ 14cb41150

FString * __thiscall
FLatticeControlPointsMechanicMovementChange::ToString
          (FLatticeControlPointsMechanicMovementChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FLatticeControlPointsMechanicMovementChange");
  return __return_storage_ptr__;
}

