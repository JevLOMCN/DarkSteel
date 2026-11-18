// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 10

// FGeometrySelectionReplaceChange @ 14cb61580

FGeometrySelectionReplaceChange * __thiscall
FGeometrySelectionReplaceChange::FGeometrySelectionReplaceChange
          (FGeometrySelectionReplaceChange *this)

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
  (this->Before).ElementType = Face;
  (this->Before).TopologyType = Triangle;
  *(undefined8 *)&(this->Before).Selection.Elements = 0;
  *(undefined8 *)&(this->Before).Selection.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Before).Selection.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Before).Selection.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Before).Selection.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Before).Selection.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Before).Selection.Elements.field_0x34 = 0;
  (this->Before).Selection.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Before).Selection.HashSize = 0;
  (this->After).ElementType = Face;
  (this->After).TopologyType = Triangle;
  *(undefined8 *)&(this->After).Selection.Elements = 0;
  *(undefined8 *)&(this->After).Selection.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->After).Selection.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->After).Selection.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->After).Selection.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->After).Selection.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->After).Selection.Elements.field_0x34 = 0;
  (this->After).Selection.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->After).Selection.HashSize = 0;
  return this;
}

// Apply @ 14cb74170

void __thiscall
FGeometrySelectionReplaceChange::Apply(FGeometrySelectionReplaceChange *this,UObject *param_1)

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
        &pUVar3->_padding_)) goto LAB_14cb741c0;
  }
  bVar2 = `FGeometrySelectionReplaceChange::Apply'::__l3::<lambda_1>::operator()(local_res10);
  param_1 = (UObject *)0x0;
  if (!bVar2) {
    return;
  }
LAB_14cb741c0:
  pUVar4 = (UObject *)&this->_padding_;
  if (this == (FGeometrySelectionReplaceChange *)0x0) {
    pUVar4 = (UObject *)0x0;
  }
  (**(code **)(*(longlong *)param_1 + 0x3e0))(param_1,pUVar4);
  return;
}

// ApplyChange @ 14cb742f0

void __thiscall
FGeometrySelectionReplaceChange::ApplyChange
          (FGeometrySelectionReplaceChange *this,FGeometrySelectionEditor *param_1,
          FGeometrySelectionDelta *param_2)

{
  UE::Geometry::FGeometrySelectionEditor::Replace
            (param_1,(FGeometrySelection *)&(this->Before).Selection.HashSize,param_2);
  return;
}

// GetIdentifier @ 14cb97450

FGeometryIdentifier * __thiscall
FGeometrySelectionReplaceChange::GetIdentifier
          (FGeometrySelectionReplaceChange *this,FGeometryIdentifier *__return_storage_ptr__)

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

// HasExpired @ 14cba0fe0

bool __thiscall
FGeometrySelectionReplaceChange::HasExpired(FGeometrySelectionReplaceChange *this,UObject *param_1)

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

// Revert @ 14cbadd60

void __thiscall
FGeometrySelectionReplaceChange::Revert(FGeometrySelectionReplaceChange *this,UObject *param_1)

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
        &pUVar3->_padding_)) goto LAB_14cbaddb0;
  }
  bVar2 = `FGeometrySelectionReplaceChange::Revert'::__l3::<lambda_1>::operator()(local_res10);
  param_1 = (UObject *)0x0;
  if (!bVar2) {
    return;
  }
LAB_14cbaddb0:
  pUVar4 = (UObject *)&this->_padding_;
  if (this == (FGeometrySelectionReplaceChange *)0x0) {
    pUVar4 = (UObject *)0x0;
  }
  (**(code **)(*(longlong *)param_1 + 1000))(param_1,pUVar4);
  return;
}

// RevertChange @ 14cbadee0

void __thiscall
FGeometrySelectionReplaceChange::RevertChange
          (FGeometrySelectionReplaceChange *this,FGeometrySelectionEditor *param_1,
          FGeometrySelectionDelta *param_2)

{
  UE::Geometry::FGeometrySelectionEditor::Replace
            (param_1,(FGeometrySelection *)&(this->Identifier).TargetObject,param_2);
  return;
}

// ToString @ 14cbb4ba0

FString * __thiscall
FGeometrySelectionReplaceChange::ToString
          (FGeometrySelectionReplaceChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FGeometrySelectionReplaceChange");
  return __return_storage_ptr__;
}

// operator() @ 150576cb0

bool __thiscall `FGeometrySelectionReplaceChange::Apply'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2134419083335040951>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2134419083335040951>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150576d70

bool __thiscall `FGeometrySelectionReplaceChange::Revert'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2134419083335040942>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2134419083335040942>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

