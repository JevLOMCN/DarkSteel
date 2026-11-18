// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// operator= @ 145a49120

TMap<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall
TMap<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>_>
::operator=(TMap<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>_>
            *this,TMap<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>_>
                  *param_1)

{
  if (this != param_1) {
    TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this,0,*(int *)&this->field_0x8);
    if (*(void **)this != (void *)0x0) {
      FMemory::Free(*(void **)this);
    }
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
    *(undefined4 *)&this->field_0xc = *(undefined4 *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
    if (&this->field_0x10 != &param_1->field_0x10) {
      if (*(longlong *)&param_1->field_0x20 == 0) {
        memmove(&this->field_0x10,&param_1->field_0x10,0x10);
      }
      if (*(void **)&this->field_0x20 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x20);
      }
      *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
      *(undefined8 *)&param_1->field_0x20 = 0;
      *(undefined4 *)&this->field_0x28 = *(undefined4 *)&param_1->field_0x28;
      *(undefined4 *)&this->field_0x2c = *(undefined4 *)&param_1->field_0x2c;
      *(undefined8 *)&param_1->field_0x28 = 0;
    }
    *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->field_0x34 = 0;
    if (*(longlong *)&param_1->field_0x40 == 0) {
      *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
    }
    if (*(void **)&this->field_0x40 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x40);
    }
    *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
    *(undefined8 *)&param_1->field_0x40 = 0;
    *(undefined4 *)&this->field_0x48 = *(undefined4 *)&param_1->field_0x48;
    *(undefined4 *)&param_1->field_0x48 = 0;
  }
  return this;
}

// FindAndRemoveChecked @ 145a679a0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_> __thiscall
TMap<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,0>_>
::FindAndRemoveChecked
          (TMap<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,0>_>
           *this,uint param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_> TVar6;
  undefined1 *puVar7;
  undefined4 in_register_00000014;
  uint uVar8;
  uint in_R8D;
  uint *puVar9;
  
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar7 = *(undefined1 **)&this->field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &this->field_0x38;
    }
    uVar8 = *(uint *)(puVar7 + (ulonglong)(*(int *)&this->field_0x48 - 1U & in_R8D) * 4);
    if (uVar8 != 0xffffffff) {
      do {
        if (*(uint *)(*(longlong *)this + (longlong)(int)uVar8 * 0x18) == in_R8D) {
          if (uVar8 == 0xffffffff) goto LAB_145a67a1f;
          goto LAB_145a67a4b;
        }
        uVar8 = *(uint *)(*(longlong *)this + 0x10 + (longlong)(int)uVar8 * 0x18);
      } while (uVar8 != 0xffffffff);
    }
  }
  uVar8 = 0xffffffff;
LAB_145a67a1f:
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("PairId.IsValidId()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x556,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    TVar6.Ptr = (FD3D12LockedResource *)(*pcVar4)();
    return (TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>)TVar6.Ptr;
  }
LAB_145a67a4b:
  lVar1 = (longlong)(int)uVar8 * 0x18;
  lVar3 = *(longlong *)this;
  ((FD3D12LockedResource *)CONCAT44(in_register_00000014,param_1))->_padding_ =
       *(longlong *)(lVar3 + 8 + lVar1);
  *(undefined8 *)(lVar3 + 8 + lVar1) = 0;
  if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)&this->field_0x28)) {
    puVar7 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar7 = &this->field_0x10;
    }
    if ((*(uint *)(puVar7 + (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar8 & 0x1f) & 1) != 0) goto LAB_145a67ac9;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    TVar6.Ptr = (FD3D12LockedResource *)(*pcVar4)();
    return (TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>)TVar6.Ptr;
  }
LAB_145a67ac9:
  puVar7 = *(undefined1 **)&this->field_0x40;
  lVar3 = *(longlong *)this;
  if (puVar7 == (undefined1 *)0x0) {
    puVar7 = &this->field_0x38;
  }
  puVar9 = (uint *)(puVar7 + (longlong)*(int *)(lVar3 + lVar1 + 0x14) * 4);
  while( true ) {
    uVar2 = *puVar9;
    if ((uVar2 == 0xffffffff) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar5)) break;
    if (uVar2 == uVar8) {
      *puVar9 = *(uint *)(lVar3 + lVar1 + 0x10);
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this,uVar8,1);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar8,1);
      return (TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>)
             (FD3D12LockedResource *)CONCAT44(in_register_00000014,param_1);
    }
    puVar9 = (uint *)(*(longlong *)this + (longlong)(int)uVar2 * 0x18 + 0x10);
  }
  pcVar4 = (code *)swi(3);
  TVar6.Ptr = (FD3D12LockedResource *)(*pcVar4)();
  return (TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>)TVar6.Ptr;
}

