// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 10

// FGeometrySelectionDeltaChange @ 14cb61510

FGeometrySelectionDeltaChange * __thiscall
FGeometrySelectionDeltaChange::FGeometrySelectionDeltaChange(FGeometrySelectionDeltaChange *this)

{
  TWeakObjectPtr<UObject,FWeakObjectPtr> *this_00;
  undefined8 local_res8;
  
  (this->Identifier).TargetType = PrimitiveComponent;
  (this->Identifier).ObjectType = Unknown;
  this->_padding_ = (longlong)&_vftable__for__FToolCommandChange__;
  this->_padding_ = (longlong)&_vftable__for__IGeometrySelectionChange__;
  this_00 = &(this->Identifier).TargetObject;
  local_res8 = 0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  (this->Delta).Removed.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Delta).Removed.ArrayNum = 0;
  (this->Delta).Removed.ArrayMax = 0;
  (this->Delta).Added.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Delta).Added.ArrayNum = 0;
  (this->Delta).Added.ArrayMax = 0;
  return this;
}

// Apply @ 14cb73eb0

void __thiscall
FGeometrySelectionDeltaChange::Apply(FGeometrySelectionDeltaChange *this,UObject *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  undefined1 local_res10 [8];
  
  if (param_1 != (UObject *)0x0) {
    pUVar3 = UGeometrySelectionManager::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14cb73f00;
  }
  bVar2 = `FGeometrySelectionDeltaChange::Apply'::__l3::<lambda_1>::operator()(local_res10);
  param_1 = (UObject *)0x0;
  if (!bVar2) {
    return;
  }
LAB_14cb73f00:
  pUVar4 = (UObject *)&this->_padding_;
  if (this == (FGeometrySelectionDeltaChange *)0x0) {
    pUVar4 = (UObject *)0x0;
  }
  (**(code **)(*(longlong *)param_1 + 0x3e0))(param_1,pUVar4);
  return;
}

// ApplyChange @ 14cb74290

void __thiscall
FGeometrySelectionDeltaChange::ApplyChange
          (FGeometrySelectionDeltaChange *this,FGeometrySelectionEditor *param_1,
          FGeometrySelectionDelta *param_2)

{
  if (0 < *(int *)&(this->Delta).Removed.AllocatorInstance.Data) {
    UE::Geometry::UpdateSelectionWithNewElements
              (param_1,Remove,
               (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)
               &(this->Identifier).TargetObject,param_2);
  }
  if (0 < *(int *)&(this->Delta).Added.AllocatorInstance.Data) {
    UE::Geometry::UpdateSelectionWithNewElements
              (param_1,Add,
               (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)
               &(this->Delta).Removed.ArrayNum,param_2);
  }
  return;
}

// GetIdentifier @ 14cb97430

FGeometryIdentifier * __thiscall
FGeometrySelectionDeltaChange::GetIdentifier
          (FGeometrySelectionDeltaChange *this,FGeometryIdentifier *__return_storage_ptr__)

{
  FWeakObjectPtr FVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  FVar1 = *(FWeakObjectPtr *)&this->Identifier;
  __return_storage_ptr__->TargetType = *(undefined4 *)&this->_padding_;
  __return_storage_ptr__->ObjectType = uVar2;
  (__return_storage_ptr__->TargetObject).WeakPtr = FVar1;
  return __return_storage_ptr__;
}

// HasExpired @ 14cba0e60

bool __thiscall
FGeometrySelectionDeltaChange::HasExpired(FGeometrySelectionDeltaChange *this,UObject *param_1)

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

// Revert @ 14cbadaa0

void __thiscall
FGeometrySelectionDeltaChange::Revert(FGeometrySelectionDeltaChange *this,UObject *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  undefined1 local_res10 [8];
  
  if (param_1 != (UObject *)0x0) {
    pUVar3 = UGeometrySelectionManager::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14cbadaf0;
  }
  bVar2 = `FGeometrySelectionDeltaChange::Revert'::__l3::<lambda_1>::operator()(local_res10);
  param_1 = (UObject *)0x0;
  if (!bVar2) {
    return;
  }
LAB_14cbadaf0:
  pUVar4 = (UObject *)&this->_padding_;
  if (this == (FGeometrySelectionDeltaChange *)0x0) {
    pUVar4 = (UObject *)0x0;
  }
  (**(code **)(*(longlong *)param_1 + 1000))(param_1,pUVar4);
  return;
}

// RevertChange @ 14cbade80

void __thiscall
FGeometrySelectionDeltaChange::RevertChange
          (FGeometrySelectionDeltaChange *this,FGeometrySelectionEditor *param_1,
          FGeometrySelectionDelta *param_2)

{
  if (0 < *(int *)&(this->Delta).Added.AllocatorInstance.Data) {
    UE::Geometry::UpdateSelectionWithNewElements
              (param_1,Remove,
               (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)
               &(this->Delta).Removed.ArrayNum,param_2);
  }
  if (0 < *(int *)&(this->Delta).Removed.AllocatorInstance.Data) {
    UE::Geometry::UpdateSelectionWithNewElements
              (param_1,Add,
               (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)
               &(this->Identifier).TargetObject,param_2);
  }
  return;
}

// ToString @ 14cbb4ae0

FString * __thiscall
FGeometrySelectionDeltaChange::ToString
          (FGeometrySelectionDeltaChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FGeometrySelectionDeltaChange");
  return __return_storage_ptr__;
}

// operator() @ 150576c70

bool __thiscall `FGeometrySelectionDeltaChange::Apply'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2134419083335041009>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2134419083335041009>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150576d30

bool __thiscall `FGeometrySelectionDeltaChange::Revert'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2134419083335041000>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2134419083335041000>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

