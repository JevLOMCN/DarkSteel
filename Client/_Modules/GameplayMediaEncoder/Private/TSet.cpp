// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayMediaEncoder
// Functions: 5

// Emplace<TPairInitializer<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>_const_&,TRefCountPtr<FRHITexture>_const_&>_> @ 148d1fbf0

FSetElementId __thiscall
TSet<TTuple<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>_const_&,TRefCountPtr<FRHITexture>_const_&>_>
          (TSet<TTuple<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>_const_&,TRefCountPtr<FRHITexture>_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  FRHIResource *this_00;
  TReferenceControllerBase<1> *pTVar5;
  FSharedReferencer<1> _Src;
  int iVar6;
  void *_Dst;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  atomic<int> aVar12;
  char *in_R9;
  undefined1 *puVar13;
  int iVar14;
  bool bVar15;
  FVideoEncoderInputFrame *local_48;
  FSharedReferencer<1> local_40;
  
  iVar14 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar14 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar6 * 0x20 + 4 + lVar2);
    iVar14 = iVar14 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar14;
    if (iVar14 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,(FSparseArrayAllocationInfo *)&local_48,iVar6);
  _Src.ReferenceController = local_40.ReferenceController;
  if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    plVar3 = *(longlong **)param_2;
    puVar4 = *(undefined8 **)(param_2 + 8);
    (local_40.ReferenceController)->_padding_ = *plVar3;
    lVar2 = plVar3[1];
    (local_40.ReferenceController)->SharedReferenceCount = (atomic<int>)(int)lVar2;
    (local_40.ReferenceController)->WeakReferenceCount =
         (atomic<int>)(int)((ulonglong)lVar2 >> 0x20);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    local_40.ReferenceController[1]._padding_ = 0;
    this_00 = (FRHIResource *)*puVar4;
    local_40.ReferenceController[1]._padding_ = (longlong)this_00;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_00);
    }
    _Src.ReferenceController[1].SharedReferenceCount = (atomic<int>)0xffffffff;
  }
  pTVar5 = *(TReferenceControllerBase<1> **)&(_Src.ReferenceController)->SharedReferenceCount;
  iVar14 = (int)local_48;
  uVar7 = (_Src.ReferenceController)->_padding_;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar13 = &(this->Elements).field_0x8;
  uVar8 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  bVar15 = false;
  if (*(int *)puVar13 - *(int *)&(this->Elements).field_0x34 != 1) {
    pTVar5 = *(TReferenceControllerBase<1> **)&(_Src.ReferenceController)->SharedReferenceCount;
    local_48 = (FVideoEncoderInputFrame *)(_Src.ReferenceController)->_padding_;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40.ReferenceController = pTVar5;
    iVar6 = FindIndexByHash<TSharedPtr<AVEncoder::FVideoEncoderInputFrame_const_,1>_>
                      (this,uVar8,
                       (TSharedPtr<AVEncoder::FVideoEncoderInputFrame_const_,1> *)&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    bVar15 = iVar6 != -1;
    if (bVar15) {
      _Dst = (void *)((longlong)iVar6 * 0x20 + *(longlong *)&this->Elements);
      if (*(FRHIResource **)((longlong)_Dst + 0x10) != (FRHIResource *)0x0) {
        FRHIResource::Release(*(FRHIResource **)((longlong)_Dst + 0x10));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((longlong)_Dst + 8));
      memmove(_Dst,_Src.ReferenceController,0x18);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,iVar14,1);
      iVar14 = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar15;
  }
  if (bVar15 == false) {
    uVar9 = *(int *)puVar13 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar7 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= this->HashSize)) {
      aVar12 = (atomic<int>)(this->HashSize - 1U & uVar8);
      _Src.ReferenceController[1].WeakReferenceCount = aVar12;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)aVar12;
      _Src.ReferenceController[1].SharedReferenceCount =
           *(atomic<int> *)((longlong)FVar10 + uVar7 * 4);
      *(int *)((longlong)FVar10 + uVar7 * 4) = iVar14;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar14;
  return (FSetElementId)(int)param_1;
}

// FindIndexByHash<TSharedPtr<AVEncoder::FVideoEncoderInputFrame_const_,1>_> @ 148d1fe90

int __thiscall
TSet<TTuple<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
::FindIndexByHash<TSharedPtr<AVEncoder::FVideoEncoderInputFrame_const_,1>_>
          (TSet<TTuple<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
           *this,uint param_1,TSharedPtr<AVEncoder::FVideoEncoderInputFrame_const_,1> *param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FVideoEncoderInputFrame *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FVideoEncoderInputFrame *pFVar5;
  longlong lVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar1 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
      pFVar3 = param_2->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      lVar6 = (longlong)iVar1 * 0x20;
      pTVar4 = *(TReferenceControllerBase<1> **)(lVar6 + 8 + *(longlong *)&this->Elements);
      pFVar5 = *(FVideoEncoderInputFrame **)(lVar6 + *(longlong *)&this->Elements);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if (pFVar5 == pFVar3) {
        return iVar1;
      }
      iVar1 = *(int *)(lVar6 + 0x18 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// RemoveImpl<TSharedPtr<AVEncoder::FVideoEncoderInputFrame_const_,1>_> @ 148d1ff90

int __thiscall
TSet<TTuple<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
::RemoveImpl<TSharedPtr<AVEncoder::FVideoEncoderInputFrame_const_,1>_>
          (TSet<TTuple<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
           *this,uint param_1,TSharedPtr<AVEncoder::FVideoEncoderInputFrame_const_,1> *param_2)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  FVideoEncoderInputFrame *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FVideoEncoderInputFrame *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ForElementType<FSetElementId> FVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 *puVar13;
  longlong lVar14;
  
  FVar10 = (this->Hash).SecondaryData;
  if (FVar10 == (ForElementType<FSetElementId>)0x0) {
    FVar10 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar11 = *(uint *)((longlong)FVar10 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4
                    );
  if (uVar11 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
    lVar3 = *(longlong *)&this->Elements;
    pFVar4 = param_2->Object;
    lVar14 = (longlong)(int)uVar11 * 0x20;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = *(TReferenceControllerBase<1> **)(lVar3 + 8 + lVar14);
    pFVar6 = *(FVideoEncoderInputFrame **)(lVar3 + lVar14);
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (pFVar6 == pFVar4) break;
    uVar11 = *(uint *)(lVar3 + 0x18 + lVar14);
    if (uVar11 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar11) && ((int)uVar11 < *(int *)&(this->Elements).field_0x28)) {
    puVar13 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar13 + (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar11 & 0x1f) & 1) != 0) goto LAB_148d200ab;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    iVar9 = (*pcVar7)();
    return iVar9;
  }
LAB_148d200ab:
  FVar10 = (this->Hash).SecondaryData;
  lVar3 = *(longlong *)&this->Elements;
  if (FVar10 == (ForElementType<FSetElementId>)0x0) {
    FVar10 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar12 = (uint *)((longlong)FVar10 + (longlong)*(int *)(lVar3 + 0x1c + lVar14) * 4);
  while( true ) {
    uVar1 = *puVar12;
    if ((uVar1 == 0xffffffff) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar8)) break;
    if (uVar1 == uVar11) {
      *puVar12 = *(uint *)(lVar3 + 0x18 + lVar14);
      TSparseArray<TSparseSetElement<TTuple<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar11,1);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar11,1);
      return 1;
    }
    puVar12 = (uint *)(*(longlong *)&this->Elements + 0x18 + (longlong)(int)uVar1 * 0x20);
  }
  pcVar7 = (code *)swi(3);
  iVar9 = (*pcVar7)();
  return iVar9;
}

// Rehash @ 148d23c70

void __thiscall
TSet<TTuple<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  ulonglong *puVar9;
  uint *puVar10;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar7 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar7 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar5 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_148d23d47;
        uVar7 = puVar10[lVar5 + 1];
      }
      uStack_64 = -uVar7 & uVar7;
      uVar6 = (ulonglong)uStack_64 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_54 = (int)lVar5 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_148d23d47:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        puVar9 = (ulonglong *)
                 ((longlong)local_40.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        pTVar3 = (TReferenceControllerBase<1> *)puVar9[1];
        uVar6 = *puVar9;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar7 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        uVar7 = (uVar7 >> 0x10 ^ uVar7) & *piVar1 - 1U;
        *(uint *)((longlong)puVar9 + 0x1c) = uVar7;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar9 + 3) = *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
        *(int *)((longlong)FVar8 + uVar6 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// UnhashElements @ 148d244f0

void __thiscall
TSet<TTuple<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_148d245eb;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_148d245eb:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_148d246e0;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_148d246e0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1>,TRefCountPtr<FRHITexture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x20 + 0x1c + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

