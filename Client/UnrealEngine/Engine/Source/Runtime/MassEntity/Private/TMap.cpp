// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 3

// TMap<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>_> @ 1471d54d0

TMap<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall
TMap<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>_>
::
TMap<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>_>
          (TMap<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>_>
           *this)

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

// ~TMap<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>_> @ 1471de680

void __thiscall
TMap<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>_>
::
~TMap<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>_>
          (TMap<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// FindAndRemoveChecked @ 14721a400

int __thiscall
TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::FindAndRemoveChecked
          (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this,
          int param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar5 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar5 = &this->field_0x38;
    }
    uVar6 = *(uint *)(puVar5 + (ulonglong)(*(int *)&this->field_0x48 - 1U & param_1) * 4);
    if (uVar6 != 0xffffffff) {
      do {
        if (*(int *)(*(longlong *)this + (longlong)(int)uVar6 * 0x10) == param_1) {
          if (uVar6 == 0xffffffff) goto LAB_14721a46d;
          goto LAB_14721a493;
        }
        uVar6 = *(uint *)(*(longlong *)this + 8 + (longlong)(int)uVar6 * 0x10);
      } while (uVar6 != 0xffffffff);
    }
  }
  uVar6 = 0xffffffff;
LAB_14721a46d:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("PairId.IsValidId()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x556,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
LAB_14721a493:
  iVar4 = *(int *)((longlong)(int)uVar6 * 0x10 + 4 + *(longlong *)this);
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&this->field_0x28)) {
    puVar5 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar5 = &this->field_0x10;
    }
    if ((*(uint *)(puVar5 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14721a4fc;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
LAB_14721a4fc:
  lVar7 = *(longlong *)this + (longlong)(int)uVar6 * 0x10;
  puVar5 = *(undefined1 **)&this->field_0x40;
  if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
    puVar5 = &this->field_0x38;
  }
  puVar8 = (uint *)(puVar5 + (longlong)*(int *)(lVar7 + 0xc) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar8 = *(uint *)(lVar7 + 8);
      TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return iVar4;
    }
    puVar8 = (uint *)(*(longlong *)this + 8 + (longlong)(int)uVar1 * 0x10);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

