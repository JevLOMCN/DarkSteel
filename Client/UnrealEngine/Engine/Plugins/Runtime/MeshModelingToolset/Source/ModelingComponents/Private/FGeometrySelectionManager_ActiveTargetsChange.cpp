// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 4

// Apply @ 14cb73f30

void __thiscall
FGeometrySelectionManager_ActiveTargetsChange::Apply
          (FGeometrySelectionManager_ActiveTargetsChange *this,UObject *param_1)

{
  uint uVar1;
  UGeometrySelectionManager *this_00;
  ulonglong uVar2;
  ForAnyElementType FVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  ForAnyElementType local_28;
  uint local_20;
  int local_1c;
  FGeometryIdentifier local_18;
  
  this_00 = CastChecked<UGeometrySelectionManager,UObject>(param_1);
  local_20 = (this->TargetsAfter).ArrayNum;
  lVar4 = (longlong)(int)local_20;
  pFVar5 = (this->TargetsAfter).AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  if (local_20 == 0) {
    local_1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,pFVar5,lVar4 << 4);
  }
  UGeometrySelectionManager::ClearActiveTargets(this_00);
  uVar1 = local_20;
  uVar2 = (ulonglong)(int)local_20;
  pFVar5 = local_28.Data + uVar2 * 0x10;
  FVar3.Data = local_28.Data;
  while( true ) {
    if ((uint)uVar2 != uVar1) {
      `TCheckedPointerIterator<FGeometryIdentifier,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar3.Data == pFVar5) break;
    local_18._0_8_ = *(undefined8 *)FVar3.Data;
    local_18.TargetObject.WeakPtr = *(FWeakObjectPtr *)(FVar3.Data + 8);
    UGeometrySelectionManager::AddActiveTarget(this_00,&local_18);
    uVar2 = (ulonglong)local_20;
    FVar3.Data = FVar3.Data + 0x10;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// HasExpired @ 14cba0ec0

bool __thiscall
FGeometrySelectionManager_ActiveTargetsChange::HasExpired
          (FGeometrySelectionManager_ActiveTargetsChange *this,UObject *param_1)

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

// Revert @ 14cbadb20

void __thiscall
FGeometrySelectionManager_ActiveTargetsChange::Revert
          (FGeometrySelectionManager_ActiveTargetsChange *this,UObject *param_1)

{
  uint uVar1;
  UGeometrySelectionManager *this_00;
  ulonglong uVar2;
  ForAnyElementType FVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  ForAnyElementType local_28;
  uint local_20;
  int local_1c;
  FGeometryIdentifier local_18;
  
  this_00 = CastChecked<UGeometrySelectionManager,UObject>(param_1);
  local_20 = (this->TargetsBefore).ArrayNum;
  lVar4 = (longlong)(int)local_20;
  pFVar5 = (this->TargetsBefore).AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  if (local_20 == 0) {
    local_1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,pFVar5,lVar4 << 4);
  }
  UGeometrySelectionManager::ClearActiveTargets(this_00);
  uVar1 = local_20;
  uVar2 = (ulonglong)(int)local_20;
  pFVar5 = local_28.Data + uVar2 * 0x10;
  FVar3.Data = local_28.Data;
  while( true ) {
    if ((uint)uVar2 != uVar1) {
      `TCheckedPointerIterator<FGeometryIdentifier,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar3.Data == pFVar5) break;
    local_18._0_8_ = *(undefined8 *)FVar3.Data;
    local_18.TargetObject.WeakPtr = *(FWeakObjectPtr *)(FVar3.Data + 8);
    UGeometrySelectionManager::AddActiveTarget(this_00,&local_18);
    uVar2 = (ulonglong)local_20;
    FVar3.Data = FVar3.Data + 0x10;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// ToString @ 14cbb4b10

FString * __thiscall
FGeometrySelectionManager_ActiveTargetsChange::ToString
          (FGeometrySelectionManager_ActiveTargetsChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FGeometrySelectionManager_ActiveTargetsChange");
  return __return_storage_ptr__;
}

