// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// Allocate @ 1459b1130

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12QueryLocation * __thiscall
FD3D12QueryAllocator::Allocate
          (FD3D12QueryAllocator *this,FD3D12QueryLocation *__return_storage_ptr__,
          ED3D12QueryType param_1,void *param_2)

{
  FD3D12QueryRange *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FD3D12QueryLocation *pFVar5;
  FD3D12QueryHeap *pFVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  FD3D12QueryHeap *local_res8;
  int local_res18 [2];
  FD3D12QueryHeap **local_28 [2];
  
  if ((param_1 == None) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ED3D12QueryType::None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                         ,0x1fb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FD3D12QueryLocation *)(*pcVar2)();
    return pFVar5;
  }
  if ((this->CurrentRange == (FD3D12QueryRange *)0x0) ||
     (this->CurrentHeap->NumQueries <= this->CurrentRange->End)) {
    FD3D12Device::ObtainQueryHeap(this->Device,(ED3D12QueueType)&local_res8,this->QueueType);
    if (local_res8 == (FD3D12QueryHeap *)0x0) {
      pFVar6 = (FD3D12QueryHeap *)0x0;
      __return_storage_ptr__->Index = 0;
      __return_storage_ptr__->Type = None;
      __return_storage_ptr__->Target = (void *)0x0;
      goto LAB_1459b12ae;
    }
    this->CurrentHeap = local_res8;
    uVar8 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
            -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    uVar8 = uVar8 >> 0x10 ^ uVar8;
    if (*(int *)&(this->Heaps).field_0x8 != *(int *)&(this->Heaps).field_0x34) {
      puVar9 = *(undefined1 **)&(this->Heaps).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &(this->Heaps).field_0x38;
      }
      iVar4 = *(int *)(puVar9 + (ulonglong)(*(int *)&(this->Heaps).field_0x48 - 1U & uVar8) * 4);
      if (iVar4 != -1) {
        do {
          lVar7 = *(longlong *)&this->Heaps + (longlong)iVar4 * 0x18;
          if (*(FD3D12QueryHeap **)(*(longlong *)&this->Heaps + (longlong)iVar4 * 0x18) ==
              local_res8) {
            if (lVar7 != 0) goto LAB_1459b127c;
            break;
          }
          iVar4 = *(int *)(lVar7 + 0x10);
        } while (iVar4 != -1);
      }
    }
    local_28[0] = &local_res8;
    TSet<TTuple<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<TRefCountPtr<FD3D12QueryHeap>_&&>_>
              ((TSet<TTuple<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange,0>,FDefaultSetAllocator>
                *)&this->Heaps,(uint)local_res18,
               (TKeyInitializer<TRefCountPtr<FD3D12QueryHeap>_&&> *)(ulonglong)uVar8,
               (bool *)local_28);
    lVar7 = *(longlong *)&this->Heaps + (longlong)local_res18[0] * 0x18;
LAB_1459b127c:
    this->CurrentRange = (FD3D12QueryRange *)(lVar7 + 8);
    if (local_res8 != (FD3D12QueryHeap *)0x0) {
      FD3D12QueryHeap::Release(local_res8);
    }
  }
  pFVar1 = this->CurrentRange;
  __return_storage_ptr__->Type = param_1;
  __return_storage_ptr__->Target = param_2;
  uVar8 = pFVar1->End;
  __return_storage_ptr__->Index = uVar8;
  pFVar1->End = uVar8 + 1;
  pFVar6 = this->CurrentHeap;
LAB_1459b12ae:
  __return_storage_ptr__->Heap = pFVar6;
  return __return_storage_ptr__;
}

// CloseAndReset @ 1459b6920

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12QueryAllocator::CloseAndReset
          (FD3D12QueryAllocator *this,
          TMap<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>_>
          *param_1)

{
  TMap<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange,0>_>
  *this_00;
  TRefCountPtr<FD3D12QueryHeap> *pTVar1;
  ulonglong uVar2;
  uint uVar3;
  FD3D12QueryRange *pFVar4;
  code *pcVar5;
  TMap<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>_>
  *this_01;
  TMap<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  FD3D12QueryRange local_res8;
  TMap<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>_>
  *local_res10;
  int local_res18 [2];
  int local_res20;
  FD3D12QueryHeap *local_b8;
  FD3D12QueryHeap **local_b0;
  TMap<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TMap<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  pFVar4 = this->CurrentRange;
  if ((pFVar4 != (FD3D12QueryRange *)0x0) && (pFVar4->Start != pFVar4->End)) {
    iStack_a0 = 0;
    local_88 = 0;
    uStack_9c = 1;
    this_00 = &this->Heaps;
    local_98 = &(this->Heaps).field_0x10;
    iVar8 = *(int *)&(this->Heaps).field_0x28;
    iStack_8c = 0;
    if (iVar8 != 0) {
      puVar15 = *(uint **)&(this->Heaps).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)local_98;
      }
      uVar12 = *puVar15;
      while (uVar12 == 0) {
        lVar10 = (longlong)iStack_a0;
        local_88 = local_88 + 0x20;
        iStack_a0 = iStack_a0 + 1;
        iStack_8c = iVar8;
        if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_1459b69ef;
        uVar12 = puVar15[lVar10 + 1];
      }
      uStack_9c = -uVar12 & uVar12;
      uVar2 = (ulonglong)uStack_9c * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res20 = (int)lVar10;
      iStack_8c = local_88 + -1 + local_res20;
      if (iVar8 < iStack_8c) {
        iStack_8c = iVar8;
      }
    }
LAB_1459b69ef:
    uVar12 = *(uint *)&(this->Heaps).field_0x28;
    puVar14 = &(this->Heaps).field_0x10;
    uVar16 = uVar12 & 0xffffffe0;
    iStack_80 = *(int *)&(this->Heaps).field_0x8 - *(int *)&(this->Heaps).field_0x34;
    uStack_90 = 0xffffffff;
    TStack_70.CurrentBitIndex = iStack_8c;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
    iVar11 = (int)uVar12 >> 5;
    TStack_70._28_4_ = iStack_8c;
    TStack_70.BaseBitIndex = local_88;
    uStack_50 = CONCAT44(uStack_7c,iStack_80);
    local_res10 = param_1;
    local_a8 = this_00;
    iStack_84 = iStack_8c;
    local_78 = this_00;
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_98;
    if ((((int)uVar12 < 0) || (iVar8 < (int)uVar12)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_01 = local_res10;
    uVar3 = *(uint *)&(this->Heaps).field_0x28;
    if (uVar12 != uVar3) {
      puVar13 = *(undefined1 **)&(this->Heaps).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar14;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
      while (uVar12 == 0) {
        lVar10 = (longlong)iVar11;
        uVar16 = uVar16 + 0x20;
        iVar11 = iVar11 + 1;
        uVar12 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_1459b6af0;
        uVar12 = *(uint *)(puVar13 + lVar10 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar12 = (int)lVar10 + -1 + uVar16;
      if ((int)uVar3 < (int)uVar12) {
        uVar12 = uVar3;
      }
    }
LAB_1459b6af0:
    while( true ) {
      pTVar6 = local_78;
      if (*(int *)(&local_78->field_0x0 + 8) - *(int *)(&local_78->field_0x0 + 0x34) !=
          (int)uStack_50) {
        `TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
      }
      if (((TStack_70.CurrentBitIndex == uVar12) &&
          (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar14)) &&
         (pTVar6 == this_00)) break;
      lVar10 = *(longlong *)&pTVar6->field_0x0;
      pTVar1 = (TRefCountPtr<FD3D12QueryHeap> *)
               (lVar10 + (longlong)TStack_70.CurrentBitIndex * 0x18);
      uVar2 = *(ulonglong *)(lVar10 + (longlong)TStack_70.CurrentBitIndex * 0x18);
      uVar16 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
      uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
      pTVar9 = TMapBase<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>_>
               ::FindOrAddImpl<TRefCountPtr<FD3D12QueryHeap>_const_&>
                         ((TMapBase<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>_>
                           *)this_01,uVar16 >> 0x10 ^ uVar16,pTVar1);
      iVar8 = pTVar9->ArrayNum;
      if (iVar8 == pTVar9->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
      }
      pTVar9->ArrayNum = iVar8 + 1;
      *(FD3D12QueryHeap **)((pTVar9->AllocatorInstance).Data + (longlong)iVar8 * 8) =
           pTVar1[1].Reference;
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    }
    if (this->CurrentHeap->NumQueries <= this->CurrentRange->End) {
      TSet<TTuple<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange,0>,FDefaultSetAllocator>
               *)this_00);
      this->CurrentRange = (FD3D12QueryRange *)0x0;
      this->CurrentHeap = (FD3D12QueryHeap *)0x0;
      return;
    }
    local_res8.End = (*this->CurrentRange).End;
    local_res8.Start = local_res8.End;
    TSet<TTuple<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange,0>,FDefaultSetAllocator>
             *)this_00);
    local_b8 = this->CurrentHeap;
    if (local_b8 != (FD3D12QueryHeap *)0x0) {
      LOCK();
      (local_b8->NumRefs).Counter = (local_b8->NumRefs).Counter + 1;
      UNLOCK();
    }
    uVar12 = ((uint)((ulonglong)local_b8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_b8 >> 4)) *
             -0x7a143595;
    uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
    uVar12 = uVar12 >> 0x10 ^ uVar12;
    if (*(int *)&(this->Heaps).field_0x8 != *(int *)&(this->Heaps).field_0x34) {
      puVar14 = *(undefined1 **)&(this->Heaps).field_0x40;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = &(this->Heaps).field_0x38;
      }
      iVar8 = *(int *)(puVar14 + (ulonglong)(*(int *)&(this->Heaps).field_0x48 - 1U & uVar12) * 4);
      if (iVar8 != -1) {
        do {
          lVar10 = *(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18;
          if (*(FD3D12QueryHeap **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) ==
              local_b8) {
            if (lVar10 != 0) goto LAB_1459b6ce4;
            break;
          }
          iVar8 = *(int *)(lVar10 + 0x10);
        } while (iVar8 != -1);
      }
    }
    local_b0 = &local_b8;
    TSet<TTuple<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<TRefCountPtr<FD3D12QueryHeap>_&&>_>
              ((TSet<TTuple<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange,0>,FDefaultSetAllocator>
                *)this_00,(uint)local_res18,
               (TKeyInitializer<TRefCountPtr<FD3D12QueryHeap>_&&> *)(ulonglong)uVar12,
               (bool *)&local_b0);
    lVar10 = *(longlong *)&this_00->field_0x0 + (longlong)local_res18[0] * 0x18;
LAB_1459b6ce4:
    this->CurrentRange = (FD3D12QueryRange *)(lVar10 + 8);
    if (local_b8 != (FD3D12QueryHeap *)0x0) {
      FD3D12QueryHeap::Release(local_b8);
    }
    *this->CurrentRange = local_res8;
  }
  return;
}

