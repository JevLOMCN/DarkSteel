// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 4

// FindAndRemoveChecked @ 14339f2a0

TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TMap<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
::FindAndRemoveChecked
          (TMap<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
           *this,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                 *__return_storage_ptr__,int param_1)

{
  uint uVar1;
  ForElementType<int> FVar2;
  code *pcVar3;
  bool bVar4;
  TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  undefined1 *puVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar6 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar6 = &this->field_0x38;
    }
    uVar7 = *(uint *)(puVar6 + (ulonglong)(*(int *)&this->field_0x48 - 1U & param_1) * 4);
    if (uVar7 != 0xffffffff) {
      do {
        if (*(int *)((longlong)(int)uVar7 * 0x60 + *(longlong *)this) == param_1) {
          if (uVar7 == 0xffffffff) goto LAB_14339f313;
          goto LAB_14339f339;
        }
        uVar7 = *(uint *)((longlong)(int)uVar7 * 0x60 + 0x58 + *(longlong *)this);
      } while (uVar7 != 0xffffffff);
    }
  }
  uVar7 = 0xffffffff;
LAB_14339f313:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("PairId.IsValidId()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x556,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)(*pcVar3)();
    return pTVar5;
  }
LAB_14339f339:
  lVar8 = *(longlong *)this;
  (__return_storage_ptr__->AllocatorInstance).SecondaryData = (ForElementType<int>)0x0;
  lVar8 = lVar8 + (longlong)(int)uVar7 * 0x60;
  if (*(longlong *)(lVar8 + 0x48) == 0) {
    memmove(__return_storage_ptr__,(void *)(lVar8 + 8),0x40);
  }
  FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (__return_storage_ptr__->AllocatorInstance).SecondaryData = *(ForElementType<int> *)(lVar8 + 0x48)
  ;
  *(undefined8 *)(lVar8 + 0x48) = 0;
  __return_storage_ptr__->ArrayNum = *(int *)(lVar8 + 0x50);
  __return_storage_ptr__->ArrayMax = *(int *)(lVar8 + 0x54);
  *(undefined4 *)(lVar8 + 0x50) = 0;
  *(undefined4 *)(lVar8 + 0x54) = 0x10;
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&this->field_0x28)) {
    puVar6 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar6 = &this->field_0x10;
    }
    if ((*(uint *)(puVar6 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_14339f3f4;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)(*pcVar3)();
    return pTVar5;
  }
LAB_14339f3f4:
  lVar8 = *(longlong *)this + (longlong)(int)uVar7 * 0x60;
  puVar6 = *(undefined1 **)&this->field_0x40;
  if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
    puVar6 = &this->field_0x38;
  }
  puVar9 = (uint *)(puVar6 + (longlong)*(int *)(lVar8 + 0x5c) * 4);
  while( true ) {
    uVar1 = *puVar9;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar7) {
      *puVar9 = *(uint *)(lVar8 + 0x58);
      TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this,uVar7,1);
      TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return __return_storage_ptr__;
    }
    puVar9 = (uint *)(*(longlong *)this + 0x58 + (longlong)(int)uVar1 * 0x60);
  }
  pcVar3 = (code *)swi(3);
  pTVar5 = (TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)(*pcVar3)();
  return pTVar5;
}

// TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> @ 143566ae0

TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> * __thiscall
TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
          (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  return this;
}

// ~TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> @ 143568880

void __thiscall
TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
~TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
          (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// operator= @ 143569640

TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> * __thiscall
TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::operator=
          (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_1)

{
  int iVar1;
  
  if (this != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&this->field_0x38,(int *)&this->field_0x48,
               (ForElementType<FSetElementId> *)&param_1->field_0x38,*(int *)&param_1->field_0x48);
    iVar1 = *(int *)&param_1->field_0x8;
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,iVar1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar1,(ForAnyElementType *)this,(int *)&this->field_0x8,
               (int *)&this->field_0xc);
    *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
    if (&this->field_0x10 != &param_1->field_0x10) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,
                 (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10);
    }
    if (iVar1 != 0) {
      memcpy(*(void **)this,*(void **)param_1,(longlong)iVar1 << 4);
    }
    return this;
  }
  return this;
}

