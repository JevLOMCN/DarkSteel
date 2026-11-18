// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 4

// Apply @ 14cb74130

void __thiscall
FGeometrySelectionManager_TargetLockStateChange::Apply
          (FGeometrySelectionManager_TargetLockStateChange *this,UObject *param_1)

{
  UGeometrySelectionManager *this_00;
  FGeometryIdentifier local_18;
  
  this_00 = CastChecked<UGeometrySelectionManager,UObject>(param_1);
  local_18.TargetType = (this->TargetIdentifier).TargetType;
  local_18.ObjectType = (this->TargetIdentifier).ObjectType;
  local_18.TargetObject.WeakPtr = (this->TargetIdentifier).TargetObject.WeakPtr;
  UGeometrySelectionManager::SetTargetLockStateOnUndoRedo(this_00,&local_18,this->bToState);
  return;
}

// HasExpired @ 14cba0f80

bool __thiscall
FGeometrySelectionManager_TargetLockStateChange::HasExpired
          (FGeometrySelectionManager_TargetLockStateChange *this,UObject *param_1)

{
  int iVar1;
  char cVar2;
  UClass *pUVar3;
  
  if (param_1 != (UObject *)0x0) {
    pUVar3 = UGeometrySelectionManager::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar3->_padding_)) && ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) == 0)) {
      cVar2 = (**(code **)(*(longlong *)param_1 + 0x2d0))(param_1);
      if (cVar2 == '\0') {
        return false;
      }
    }
  }
  return true;
}

// Revert @ 14cbadd20

void __thiscall
FGeometrySelectionManager_TargetLockStateChange::Revert
          (FGeometrySelectionManager_TargetLockStateChange *this,UObject *param_1)

{
  UGeometrySelectionManager *this_00;
  FGeometryIdentifier local_18;
  
  this_00 = CastChecked<UGeometrySelectionManager,UObject>(param_1);
  local_18.TargetType = (this->TargetIdentifier).TargetType;
  local_18.ObjectType = (this->TargetIdentifier).ObjectType;
  local_18.TargetObject.WeakPtr = (this->TargetIdentifier).TargetObject.WeakPtr;
  UGeometrySelectionManager::SetTargetLockStateOnUndoRedo(this_00,&local_18,this->bToState == false)
  ;
  return;
}

// ToString @ 14cbb4b70

FString * __thiscall
FGeometrySelectionManager_TargetLockStateChange::ToString
          (FGeometrySelectionManager_TargetLockStateChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FGeometrySelectionManager_TargetLockStateChange");
  return __return_storage_ptr__;
}

