// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 8

// FindOrAddImpl<TRefCountPtr<FD3D12QueryHeap>_const_&> @ 1459a3830

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<TRefCountPtr<FD3D12QueryHeap>_const_&>
          (TMapBase<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,TRefCountPtr<FD3D12QueryHeap> *param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  TRefCountPtr<FD3D12QueryHeap> *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((FD3D12QueryHeap *)*plVar2 == param_2->Reference) {
          if (plVar2 != (longlong *)0x0) {
            return (TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_> *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TRefCountPtr<FD3D12QueryHeap>_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TRefCountPtr<FD3D12QueryHeap>_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 1459a3d40

void __thiscall
TMapBase<FD3D12ResourceLocation_*,FD3D12Adapter::FTrackedAllocationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FD3D12ResourceLocation_*,FD3D12Adapter::FTrackedAllocationData,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FD3D12ResourceLocation_*,FD3D12Adapter::FTrackedAllocationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FD3D12ResourceLocation_*,FD3D12Adapter::FTrackedAllocationData,0>_>
           *this,TArray<FD3D12Adapter::FTrackedAllocationData,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar14 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  iVar12 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x108,8,uVar14,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar5 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar14 = 1;
  iVar15 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar5 != 0) {
    puVar16 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)TStack_40.Array;
    }
    uVar6 = *puVar16;
    while (uVar6 == 0) {
      lVar10 = (longlong)iVar12;
      iVar15 = iVar15 + 0x20;
      iVar12 = iVar12 + 1;
      TStack_40.CurrentBitIndex = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1459a3e22;
      uVar6 = puVar16[lVar10 + 1];
    }
    uVar14 = -uVar6 & uVar6;
    uVar4 = (ulonglong)uVar14 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar10 + -1 + iVar15;
    if (iVar5 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar5;
    }
  }
LAB_1459a3e22:
  TStack_40._padding_ = CONCAT44(uVar14,iVar12);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar15;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar11 = (param_1->AllocatorInstance).Data;
      pFVar13 = (FScriptContainerElement *)
                (*(longlong *)&(this->Pairs).Elements + 8 +
                (longlong)TStack_40.CurrentBitIndex * 0x118);
      if (((pFVar11 <= pFVar13) && (pFVar13 < pFVar11 + (longlong)*piVar1 * 0x108)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar12 = param_1->ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x108,8,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar12 + 1;
      lVar10 = 2;
      pFVar11 = (param_1->AllocatorInstance).Data + (longlong)iVar12 * 0x108;
      do {
        pFVar2 = pFVar11 + 0x80;
        uVar8 = *(undefined8 *)(pFVar13 + 8);
        pFVar3 = pFVar13 + 0x80;
        *(undefined8 *)pFVar11 = *(undefined8 *)pFVar13;
        *(undefined8 *)(pFVar11 + 8) = uVar8;
        uVar8 = *(undefined8 *)(pFVar13 + 0x18);
        *(undefined8 *)(pFVar11 + 0x10) = *(undefined8 *)(pFVar13 + 0x10);
        *(undefined8 *)(pFVar11 + 0x18) = uVar8;
        uVar8 = *(undefined8 *)(pFVar13 + 0x28);
        *(undefined8 *)(pFVar11 + 0x20) = *(undefined8 *)(pFVar13 + 0x20);
        *(undefined8 *)(pFVar11 + 0x28) = uVar8;
        uVar8 = *(undefined8 *)(pFVar13 + 0x38);
        *(undefined8 *)(pFVar11 + 0x30) = *(undefined8 *)(pFVar13 + 0x30);
        *(undefined8 *)(pFVar11 + 0x38) = uVar8;
        uVar8 = *(undefined8 *)(pFVar13 + 0x48);
        *(undefined8 *)(pFVar11 + 0x40) = *(undefined8 *)(pFVar13 + 0x40);
        *(undefined8 *)(pFVar11 + 0x48) = uVar8;
        uVar8 = *(undefined8 *)(pFVar13 + 0x58);
        *(undefined8 *)(pFVar11 + 0x50) = *(undefined8 *)(pFVar13 + 0x50);
        *(undefined8 *)(pFVar11 + 0x58) = uVar8;
        uVar8 = *(undefined8 *)(pFVar13 + 0x68);
        *(undefined8 *)(pFVar11 + 0x60) = *(undefined8 *)(pFVar13 + 0x60);
        *(undefined8 *)(pFVar11 + 0x68) = uVar8;
        uVar8 = *(undefined8 *)(pFVar13 + 0x78);
        *(undefined8 *)(pFVar11 + 0x70) = *(undefined8 *)(pFVar13 + 0x70);
        *(undefined8 *)(pFVar11 + 0x78) = uVar8;
        lVar10 = lVar10 + -1;
        pFVar11 = pFVar2;
        pFVar13 = pFVar3;
      } while (lVar10 != 0);
      *(undefined8 *)pFVar2 = *(undefined8 *)pFVar3;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 145a15800

D3D12_RESOURCE_ALLOCATION_INFO * __thiscall
TMapBase<unsigned___int64,D3D12_RESOURCE_ALLOCATION_INFO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,D3D12_RESOURCE_ALLOCATION_INFO,0>_>
::Find(TMapBase<unsigned___int64,D3D12_RESOURCE_ALLOCATION_INFO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,D3D12_RESOURCE_ALLOCATION_INFO,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  D3D12_RESOURCE_ALLOCATION_INFO *pDVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pDVar3 = (D3D12_RESOURCE_ALLOCATION_INFO *)0x0;
          if (puVar2 != (ulong64 *)0x0) {
            pDVar3 = (D3D12_RESOURCE_ALLOCATION_INFO *)(puVar2 + 1);
          }
          return pDVar3;
        }
        iVar1 = (int)puVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (D3D12_RESOURCE_ALLOCATION_INFO *)0x0;
}

// Emplace<unsigned_int_&,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>_> @ 145a39a70

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_> * __thiscall
TMapBase<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,0>_>
::Emplace<unsigned_int_&,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>_>
          (TMapBase<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,0>_>
           *this,uint *param_1,
          TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_> *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  void *pvVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  FSparseArrayAllocationInfo local_38;
  
  iVar7 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar7 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar7 = iVar7 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x18);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>_>_>
       *)0x0) {
    *(uint *)local_38.Pointer = *param_1;
    *(FD3D12LockedResource **)((longlong)local_38.Pointer + 8) = param_2->Ptr;
    param_2->Ptr = (FD3D12LockedResource *)0x0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  iVar7 = *(int *)&(this->Pairs).Elements.field_0x8;
  iVar5 = *(int *)&(this->Pairs).Elements.field_0x34;
  uVar2 = *(uint *)local_38.Pointer;
  if ((iVar7 - iVar5 != 1) && (iVar7 != iVar5)) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar7 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & uVar2) * 4);
    if (iVar7 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        if (*(uint *)(lVar3 + (longlong)iVar7 * 0x18) == uVar2) {
          if (iVar7 != -1) {
            pvVar4 = *(void **)(lVar3 + 8 + (longlong)iVar7 * 0x18);
            if (pvVar4 != (void *)0x0) {
              FD3D12ResourceLocation::ReleaseResource
                        ((FD3D12ResourceLocation *)((longlong)pvVar4 + 8));
              ::operator_delete(pvVar4,0xa0);
            }
            memmove((void *)(lVar3 + (longlong)iVar7 * 0x18),local_38.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar7;
          }
          if (iVar7 != -1) goto LAB_145a39c0f;
          break;
        }
        iVar7 = *(int *)(lVar3 + 0x10 + (longlong)iVar7 * 0x18);
      } while (iVar7 != -1);
    }
  }
  TSet<TTuple<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,0>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,uVar2,local_38.Pointer,local_38.Index);
LAB_145a39c0f:
  return (TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_38.Index * 0x18 + 8);
}

// Emplace<unsigned_int_const_&,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>_> @ 145a39c50

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_> * __thiscall
TMapBase<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,0>_>
::
Emplace<unsigned_int_const_&,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>_>
          (TMapBase<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,0>_>
           *this,uint *param_1,
          TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_> *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  void *pvVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  FSparseArrayAllocationInfo local_38;
  
  iVar7 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar7 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar7 = iVar7 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x18);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>_>_>
       *)0x0) {
    *(uint *)local_38.Pointer = *param_1;
    *(FD3D12LockedResource **)((longlong)local_38.Pointer + 8) = param_2->Ptr;
    param_2->Ptr = (FD3D12LockedResource *)0x0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  iVar7 = *(int *)&(this->Pairs).Elements.field_0x8;
  iVar5 = *(int *)&(this->Pairs).Elements.field_0x34;
  uVar2 = *(uint *)local_38.Pointer;
  if ((iVar7 - iVar5 != 1) && (iVar7 != iVar5)) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar7 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & uVar2) * 4);
    if (iVar7 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        if (*(uint *)(lVar3 + (longlong)iVar7 * 0x18) == uVar2) {
          if (iVar7 != -1) {
            pvVar4 = *(void **)(lVar3 + 8 + (longlong)iVar7 * 0x18);
            if (pvVar4 != (void *)0x0) {
              FD3D12ResourceLocation::ReleaseResource
                        ((FD3D12ResourceLocation *)((longlong)pvVar4 + 8));
              ::operator_delete(pvVar4,0xa0);
            }
            memmove((void *)(lVar3 + (longlong)iVar7 * 0x18),local_38.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar7;
          }
          if (iVar7 != -1) goto LAB_145a39def;
          break;
        }
        iVar7 = *(int *)(lVar3 + 0x10 + (longlong)iVar7 * 0x18);
      } while (iVar7 != -1);
    }
  }
  TSet<TTuple<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,0>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,uVar2,local_38.Pointer,local_38.Index);
LAB_145a39def:
  return (TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_38.Index * 0x18 + 8);
}

// Find @ 145a678c0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_> * __thiscall
TMapBase<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,0>_>
::Find(TMapBase<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,0>_>
       *this,uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(uint *)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          pTVar4 = (TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_> *)0x0;
          if (lVar1 != 0) {
            pTVar4 = (TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_> *)
                     (lVar1 + 8);
          }
          return pTVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_> *)0x0;
}

// Emplace<FD3D12VertexDeclarationKey_const_&,TRefCountPtr<FRHIVertexDeclaration>_> @ 145a87e60

TRefCountPtr<FRHIVertexDeclaration> * __thiscall
TMapBase<FD3D12VertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FD3D12VertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>,0>_>
::Emplace<FD3D12VertexDeclarationKey_const_&,TRefCountPtr<FRHIVertexDeclaration>_>
          (TMapBase<FD3D12VertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FD3D12VertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>,0>_>
           *this,FD3D12VertexDeclarationKey *param_1,TRefCountPtr<FRHIVertexDeclaration> *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x268,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x268 + 4 + lVar6);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x268 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<616,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<616,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer ==
      (TSparseSetElement<TTuple<FD3D12VertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>_> *
      )0x0) {
    local_18.Pointer =
         (TSparseSetElement<TTuple<FD3D12VertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>_>
          *)0x0;
  }
  else {
    UE::Core::Private::Tuple::TTupleBaseElement<FD3D12VertexDeclarationKey,0,2>::
    TTupleBaseElement<FD3D12VertexDeclarationKey,0,2><FD3D12VertexDeclarationKey_const_&>
              (local_18.Pointer,ForwardingConstructor,param_1);
    *(undefined8 *)((longlong)local_18.Pointer + 600) = 0;
    *(FRHIVertexDeclaration **)((longlong)local_18.Pointer + 600) = param_2->Reference;
    param_2->Reference = (FRHIVertexDeclaration *)0x0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x260) = 0xffffffff;
  }
  uVar3 = *(uint *)&((TSparseSetElement<TTuple<FD3D12VertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>_>
                      *)local_18.Pointer)->field_0x228;
  local_res8[0] = local_18.Index;
  bVar4 = TSet<TTuple<FD3D12VertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>,TDefaultMapHashableKeyFuncs<FD3D12VertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar3,local_18.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FD3D12VertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>,TDefaultMapHashableKeyFuncs<FD3D12VertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar3,local_18.Pointer,local_res8[0]);
  }
  return (TRefCountPtr<FRHIVertexDeclaration> *)
         (*(longlong *)&(this->Pairs).Elements + lVar6 * 0x268 + 600);
}

// FindOrAddImpl<FString_const_&> @ 145a89200

uint * __thiscall
TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (uint *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (uint *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 0x10);
}

