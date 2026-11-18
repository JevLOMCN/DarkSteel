// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// operator<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_> @ 14a207020

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
* __thiscall
TPairInitializer<FRigElementKey_&&,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_&&>
::
operator<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
          (TPairInitializer<FRigElementKey_&&,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_&&>
           *this,TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                 *__return_storage_ptr__)

{
  FRigElementKey *pFVar1;
  TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *_Src;
  undefined3 uVar2;
  FNameEntryId FVar3;
  
  pFVar1 = this->Key;
  _Src = this->Value;
  uVar2 = *(undefined3 *)&pFVar1->field_0x1;
  FVar3.Value = (pFVar1->Name).ComparisonIndex.Value;
  __return_storage_ptr__->field_0x0 = pFVar1->Type;
  *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar2;
  *(uint *)&__return_storage_ptr__->field_0x4 = FVar3.Value;
  *(uint *)&__return_storage_ptr__->field_0x8 = (pFVar1->Name).Number;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  if ((_Src->AllocatorInstance).SecondaryData == (ForElementType<FRigElementKey>)0x0) {
    memmove(&__return_storage_ptr__->field_0x10,_Src,0xc);
  }
  if (*(void **)&__return_storage_ptr__->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&__return_storage_ptr__->field_0x20);
  }
  *(ForElementType<FRigElementKey> *)&__return_storage_ptr__->field_0x20 =
       (_Src->AllocatorInstance).SecondaryData;
  (_Src->AllocatorInstance).SecondaryData = (ForElementType<FRigElementKey>)0x0;
  *(int *)&__return_storage_ptr__->field_0x28 = _Src->ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x2c = _Src->ArrayMax;
  _Src->ArrayNum = 0;
  _Src->ArrayMax = 1;
  return __return_storage_ptr__;
}

// operator<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_> @ 14a2070c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
* __thiscall
TPairInitializer<FRigElementKey_const_&,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_const_&>
::
operator<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
          (TPairInitializer<FRigElementKey_const_&,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_const_&>
           *this,TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                 *__return_storage_ptr__)

{
  int iVar1;
  FRigElementKey *pFVar2;
  ForElementType<FRigElementKey> FVar3;
  undefined3 uVar4;
  FNameEntryId FVar5;
  void *_Dst;
  ForElementType<FRigElementKey> _Src;
  
  pFVar2 = this->Key;
  FVar3 = (ForElementType<FRigElementKey>)this->Value;
  uVar4 = *(undefined3 *)&pFVar2->field_0x1;
  FVar5.Value = (pFVar2->Name).ComparisonIndex.Value;
  __return_storage_ptr__->field_0x0 = pFVar2->Type;
  *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar4;
  *(uint *)&__return_storage_ptr__->field_0x4 = FVar5.Value;
  *(uint *)&__return_storage_ptr__->field_0x8 = (pFVar2->Name).Number;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  _Src = *(ForElementType<FRigElementKey> *)((longlong)FVar3 + 0x10);
  iVar1 = *(int *)((longlong)FVar3 + 0x18);
  *(int *)&__return_storage_ptr__->field_0x28 = iVar1;
  if (_Src == (ForElementType<FRigElementKey>)0x0) {
    _Src = FVar3;
  }
  if (iVar1 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x2c = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigElementKey>_>
              (0xc,4,iVar1,0,(ForElementType<FRigElementKey> *)&__return_storage_ptr__->field_0x10,
               iVar1,(int *)&__return_storage_ptr__->field_0x2c);
    _Dst = *(void **)&__return_storage_ptr__->field_0x20;
    if (*(void **)&__return_storage_ptr__->field_0x20 == (void *)0x0) {
      _Dst = &__return_storage_ptr__->field_0x10;
    }
    memcpy(_Dst,(void *)_Src,(longlong)iVar1 * 0xc);
  }
  return __return_storage_ptr__;
}

// operator<FRigElementKey,URigHierarchy::FMetadataStorage>_TTuple<FRigElementKey,URigHierarchy::FMetadataStorage> @ 14a2cbbb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TTuple<FRigElementKey,URigHierarchy::FMetadataStorage> * __thiscall
TPairInitializer<FRigElementKey_const_&,URigHierarchy::FMetadataStorage_const_&>::
operator<FRigElementKey,URigHierarchy::FMetadataStorage>_TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>
          (TPairInitializer<FRigElementKey_const_&,URigHierarchy::FMetadataStorage_const_&> *this,
          TTuple<FRigElementKey,URigHierarchy::FMetadataStorage> *__return_storage_ptr__)

{
  FRigElementKey *pFVar1;
  FMetadataStorage *pFVar2;
  undefined3 uVar3;
  FNameEntryId FVar4;
  uint uVar5;
  
  pFVar1 = this->Key;
  pFVar2 = this->Value;
  uVar3 = *(undefined3 *)&pFVar1->field_0x1;
  FVar4.Value = (pFVar1->Name).ComparisonIndex.Value;
  __return_storage_ptr__->field_0x0 = pFVar1->Type;
  *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar3;
  *(uint *)&__return_storage_ptr__->field_0x4 = FVar4.Value;
  *(uint *)&__return_storage_ptr__->field_0x8 = (pFVar1->Name).Number;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x40 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x44 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = 0;
  TSet<TTuple<FName,FRigBaseMetadata_*>,TDefaultMapHashableKeyFuncs<FName,FRigBaseMetadata_*,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,FRigBaseMetadata_*>,TDefaultMapHashableKeyFuncs<FName,FRigBaseMetadata_*,0>,FDefaultSetAllocator>
               *)&__return_storage_ptr__->field_0x10,
              (TSet<TTuple<FName,FRigBaseMetadata_*>,TDefaultMapHashableKeyFuncs<FName,FRigBaseMetadata_*,0>,FDefaultSetAllocator>
               *)pFVar2);
  uVar5 = (pFVar2->LastAccessName).Number;
  *(uint *)&__return_storage_ptr__->field_0x60 = (pFVar2->LastAccessName).ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x64 = uVar5;
  *(FRigBaseMetadata **)&__return_storage_ptr__->field_0x68 = pFVar2->LastAccessMetadata;
  return __return_storage_ptr__;
}

// operator<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_> @ 14a2cbc40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
* __thiscall
TPairInitializer<FRigElementKey_const_&,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_const_&>
::
operator<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
          (TPairInitializer<FRigElementKey_const_&,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_const_&>
           *this,TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                 *__return_storage_ptr__)

{
  int iVar1;
  FRigElementKey *pFVar2;
  ForElementType<FCachedRigElement> FVar3;
  undefined3 uVar4;
  FNameEntryId FVar5;
  void *_Dst;
  ForElementType<FCachedRigElement> _Src;
  
  pFVar2 = this->Key;
  FVar3 = (ForElementType<FCachedRigElement>)this->Value;
  uVar4 = *(undefined3 *)&pFVar2->field_0x1;
  FVar5.Value = (pFVar2->Name).ComparisonIndex.Value;
  __return_storage_ptr__->field_0x0 = pFVar2->Type;
  *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar4;
  *(uint *)&__return_storage_ptr__->field_0x4 = FVar5.Value;
  *(uint *)&__return_storage_ptr__->field_0x8 = (pFVar2->Name).Number;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  _Src = *(ForElementType<FCachedRigElement> *)((longlong)FVar3 + 0x20);
  iVar1 = *(int *)((longlong)FVar3 + 0x28);
  *(int *)&__return_storage_ptr__->field_0x38 = iVar1;
  if (_Src == (ForElementType<FCachedRigElement>)0x0) {
    _Src = FVar3;
  }
  if (iVar1 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x3c = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FCachedRigElement>_>
              (0x20,8,iVar1,0,
               (ForElementType<FCachedRigElement> *)&__return_storage_ptr__->field_0x10,iVar1,
               (int *)&__return_storage_ptr__->field_0x3c);
    _Dst = *(void **)&__return_storage_ptr__->field_0x30;
    if (*(void **)&__return_storage_ptr__->field_0x30 == (void *)0x0) {
      _Dst = &__return_storage_ptr__->field_0x10;
    }
    memcpy(_Dst,(void *)_Src,(longlong)iVar1 << 5);
  }
  return __return_storage_ptr__;
}

// operator<FRigHierarchyKey,FRigHierarchyKey>_TTuple<FRigHierarchyKey,FRigHierarchyKey> @ 14a2cbd00

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TTuple<FRigHierarchyKey,FRigHierarchyKey> * __thiscall
TPairInitializer<FRigHierarchyKey_const_&,FRigHierarchyKey_const_&>::
operator<FRigHierarchyKey,FRigHierarchyKey>_TTuple<FRigHierarchyKey,FRigHierarchyKey>
          (TPairInitializer<FRigHierarchyKey_const_&,FRigHierarchyKey_const_&> *this,
          TTuple<FRigHierarchyKey,FRigHierarchyKey> *__return_storage_ptr__)

{
  bool bVar1;
  FRigHierarchyKey *pFVar2;
  FRigHierarchyKey *pFVar3;
  undefined8 uVar4;
  undefined3 uVar5;
  FNameEntryId FVar6;
  
  pFVar2 = this->Key;
  pFVar3 = this->Value;
  __return_storage_ptr__->field_0xc = 0;
  bVar1 = (pFVar2->Element).bIsSet;
  __return_storage_ptr__->field_0xc = bVar1;
  if (bVar1 != false) {
    uVar5 = *(undefined3 *)&(pFVar2->Element).TypedValue.field_0x1;
    FVar6.Value = (pFVar2->Element).TypedValue.Name.ComparisonIndex.Value;
    __return_storage_ptr__->field_0x0 = (pFVar2->Element).TypedValue.Type;
    *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar5;
    *(uint *)&__return_storage_ptr__->field_0x4 = FVar6.Value;
    *(uint *)&__return_storage_ptr__->field_0x8 = (pFVar2->Element).TypedValue.Name.Number;
  }
  __return_storage_ptr__->field_0x24 = 0;
  bVar1 = (pFVar2->Component).bIsSet;
  __return_storage_ptr__->field_0x24 = bVar1;
  if (bVar1 != false) {
    uVar5 = *(undefined3 *)&(pFVar2->Component).TypedValue.ElementKey.field_0x1;
    FVar6.Value = (pFVar2->Component).TypedValue.ElementKey.Name.ComparisonIndex.Value;
    uVar4 = *(undefined8 *)&(pFVar2->Component).TypedValue.ElementKey.Name.Number;
    __return_storage_ptr__->field_0x10 = (pFVar2->Component).TypedValue.ElementKey.Type;
    *(undefined3 *)&__return_storage_ptr__->field_0x11 = uVar5;
    *(uint *)&__return_storage_ptr__->field_0x14 = FVar6.Value;
    *(undefined8 *)&__return_storage_ptr__->field_0x18 = uVar4;
    *(uint *)&__return_storage_ptr__->field_0x20 = (pFVar2->Component).TypedValue.Name.Number;
  }
  __return_storage_ptr__->field_0x34 = 0;
  bVar1 = (pFVar3->Element).bIsSet;
  __return_storage_ptr__->field_0x34 = bVar1;
  if (bVar1 != false) {
    uVar5 = *(undefined3 *)&(pFVar3->Element).TypedValue.field_0x1;
    FVar6.Value = (pFVar3->Element).TypedValue.Name.ComparisonIndex.Value;
    __return_storage_ptr__->field_0x28 = (pFVar3->Element).TypedValue.Type;
    *(undefined3 *)&__return_storage_ptr__->field_0x29 = uVar5;
    *(uint *)&__return_storage_ptr__->field_0x2c = FVar6.Value;
    *(uint *)&__return_storage_ptr__->field_0x30 = (pFVar3->Element).TypedValue.Name.Number;
  }
  __return_storage_ptr__->field_0x4c = 0;
  bVar1 = (pFVar3->Component).bIsSet;
  __return_storage_ptr__->field_0x4c = bVar1;
  if (bVar1 != false) {
    uVar5 = *(undefined3 *)&(pFVar3->Component).TypedValue.ElementKey.field_0x1;
    FVar6.Value = (pFVar3->Component).TypedValue.ElementKey.Name.ComparisonIndex.Value;
    uVar4 = *(undefined8 *)&(pFVar3->Component).TypedValue.ElementKey.Name.Number;
    __return_storage_ptr__->field_0x38 = (pFVar3->Component).TypedValue.ElementKey.Type;
    *(undefined3 *)&__return_storage_ptr__->field_0x39 = uVar5;
    *(uint *)&__return_storage_ptr__->field_0x3c = FVar6.Value;
    *(undefined8 *)&__return_storage_ptr__->field_0x40 = uVar4;
    *(uint *)&__return_storage_ptr__->field_0x48 = (pFVar3->Component).TypedValue.Name.Number;
  }
  return __return_storage_ptr__;
}

// operator<unsigned_int,FRigElementKeyCollection>_TTuple<unsigned_int,FRigElementKeyCollection> @ 14a4fe9f0

TTuple<unsigned_int,FRigElementKeyCollection> * __thiscall
TPairInitializer<unsigned_int_const_&,FRigElementKeyCollection_const_&>::
operator<unsigned_int,FRigElementKeyCollection>_TTuple<unsigned_int,FRigElementKeyCollection>
          (TPairInitializer<unsigned_int_const_&,FRigElementKeyCollection_const_&> *this,
          TTuple<unsigned_int,FRigElementKeyCollection> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  FRigElementKeyCollection *pFVar3;
  FScriptContainerElement *_Src;
  
  pFVar3 = this->Value;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(uint *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)puVar1 = 0;
  iVar2 = (pFVar3->Keys).ArrayNum;
  _Src = (pFVar3->Keys).AllocatorInstance.Data;
  *(int *)&__return_storage_ptr__->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x14);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 * 0xc);
  }
  return __return_storage_ptr__;
}

