// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 63

// Emplace<TSharedPtr<IMessageLogListing,1>_const_&> @ 142bbd950

FSetElementId __thiscall
TSet<TSharedPtr<IMessageLogListing,1>,DefaultKeyFuncs<TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
::Emplace<TSharedPtr<IMessageLogListing,1>_const_&>
          (TSet<TSharedPtr<IMessageLogListing,1>,DefaultKeyFuncs<TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
           *this,TSharedPtr<IMessageLogListing,1> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSharedReferencer<1> _Src;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  char *in_R9;
  int iVar10;
  bool bVar11;
  IMessageLogListing *local_48;
  FSharedReferencer<1> local_40;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,(FSparseArrayAllocationInfo *)&local_48,iVar4);
  _Src.ReferenceController = local_40.ReferenceController;
  if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_40.ReferenceController)->_padding_ = *(longlong *)param_2;
    lVar2 = *(longlong *)(param_2 + 8);
    (local_40.ReferenceController)->SharedReferenceCount = (atomic<int>)(int)lVar2;
    (local_40.ReferenceController)->WeakReferenceCount =
         (atomic<int>)(int)((ulonglong)lVar2 >> 0x20);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)&local_40.ReferenceController[1]._padding_ = 0xffffffff;
  }
  pTVar3 = *(TReferenceControllerBase<1> **)&(local_40.ReferenceController)->SharedReferenceCount;
  iVar10 = (int)local_48;
  uVar5 = (local_40.ReferenceController)->_padding_;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar6 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  bVar11 = false;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    pTVar3 = *(TReferenceControllerBase<1> **)&(_Src.ReferenceController)->SharedReferenceCount;
    local_48 = (IMessageLogListing *)(_Src.ReferenceController)->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40.ReferenceController = pTVar3;
    iVar4 = FindIndexByHash<TSharedPtr<IMessageLogListing_const_,1>_>
                      (this,uVar6,(TSharedPtr<IMessageLogListing_const_,1> *)&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    bVar11 = iVar4 != -1;
    if (bVar11) {
      lVar2 = *(longlong *)&this->Elements;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)iVar4 * 0x18));
      memmove((void *)(lVar2 + (longlong)iVar4 * 0x18),_Src.ReferenceController,0x10);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,iVar10,1);
      iVar10 = iVar4;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar5 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)&_Src.ReferenceController[1]._padding_ + 4) = uVar6;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)&_Src.ReferenceController[1]._padding_ =
           *(undefined4 *)((longlong)FVar8 + uVar5 * 4);
      *(int *)((longlong)FVar8 + uVar5 * 4) = iVar10;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Object = iVar10;
  return (FSetElementId)(int)param_1;
}

// Emplace<TSharedRef<FMessageFilter,1>_const_&> @ 142bbdbb0

FSetElementId __thiscall
TSet<TSharedRef<FMessageFilter,1>,DefaultKeyFuncs<TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
::Emplace<TSharedRef<FMessageFilter,1>_const_&>
          (TSet<TSharedRef<FMessageFilter,1>,DefaultKeyFuncs<TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
           *this,TSharedRef<FMessageFilter,1> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSharedReferencer<1> _Src;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  char *in_R9;
  int iVar10;
  bool bVar11;
  FMessageFilter *local_48;
  FSharedReferencer<1> local_40;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,(FSparseArrayAllocationInfo *)&local_48,iVar4);
  _Src.ReferenceController = local_40.ReferenceController;
  if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_40.ReferenceController)->_padding_ = *(longlong *)param_2;
    lVar2 = *(longlong *)(param_2 + 8);
    (local_40.ReferenceController)->SharedReferenceCount = (atomic<int>)(int)lVar2;
    (local_40.ReferenceController)->WeakReferenceCount =
         (atomic<int>)(int)((ulonglong)lVar2 >> 0x20);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)&local_40.ReferenceController[1]._padding_ = 0xffffffff;
  }
  pTVar3 = *(TReferenceControllerBase<1> **)&(local_40.ReferenceController)->SharedReferenceCount;
  iVar10 = (int)local_48;
  uVar5 = (local_40.ReferenceController)->_padding_;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar6 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  bVar11 = false;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    pTVar3 = *(TReferenceControllerBase<1> **)&(_Src.ReferenceController)->SharedReferenceCount;
    local_48 = (FMessageFilter *)(_Src.ReferenceController)->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40.ReferenceController = pTVar3;
    iVar4 = FindIndexByHash<TSharedRef<FMessageFilter_const_,1>_>
                      (this,uVar6,(TSharedRef<FMessageFilter_const_,1> *)&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    bVar11 = iVar4 != -1;
    if (bVar11) {
      lVar2 = *(longlong *)&this->Elements;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)iVar4 * 0x18));
      memmove((void *)(lVar2 + (longlong)iVar4 * 0x18),_Src.ReferenceController,0x10);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,iVar10,1);
      iVar10 = iVar4;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar5 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)&_Src.ReferenceController[1]._padding_ + 4) = uVar6;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)&_Src.ReferenceController[1]._padding_ =
           *(undefined4 *)((longlong)FVar8 + uVar5 * 4);
      *(int *)((longlong)FVar8 + uVar5 * 4) = iVar10;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Object = iVar10;
  return (FSetElementId)(int)param_1;
}

// Emplace<TSharedRef<FTokenizedMessage,1>_const_&> @ 142bbde10

FSetElementId __thiscall
TSet<TSharedRef<FTokenizedMessage,1>,DefaultKeyFuncs<TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
::Emplace<TSharedRef<FTokenizedMessage,1>_const_&>
          (TSet<TSharedRef<FTokenizedMessage,1>,DefaultKeyFuncs<TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
           *this,TSharedRef<FTokenizedMessage,1> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSharedReferencer<1> _Src;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  char *in_R9;
  int iVar10;
  bool bVar11;
  FTokenizedMessage *local_48;
  FSharedReferencer<1> local_40;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,(FSparseArrayAllocationInfo *)&local_48,iVar4);
  _Src.ReferenceController = local_40.ReferenceController;
  if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_40.ReferenceController)->_padding_ = *(longlong *)param_2;
    lVar2 = *(longlong *)(param_2 + 8);
    (local_40.ReferenceController)->SharedReferenceCount = (atomic<int>)(int)lVar2;
    (local_40.ReferenceController)->WeakReferenceCount =
         (atomic<int>)(int)((ulonglong)lVar2 >> 0x20);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)&local_40.ReferenceController[1]._padding_ = 0xffffffff;
  }
  pTVar3 = *(TReferenceControllerBase<1> **)&(local_40.ReferenceController)->SharedReferenceCount;
  iVar10 = (int)local_48;
  uVar5 = (local_40.ReferenceController)->_padding_;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar6 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  bVar11 = false;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    pTVar3 = *(TReferenceControllerBase<1> **)&(_Src.ReferenceController)->SharedReferenceCount;
    local_48 = (FTokenizedMessage *)(_Src.ReferenceController)->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40.ReferenceController = pTVar3;
    iVar4 = FindIndexByHash<TSharedRef<FTokenizedMessage_const_,1>_>
                      (this,uVar6,(TSharedRef<FTokenizedMessage_const_,1> *)&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    bVar11 = iVar4 != -1;
    if (bVar11) {
      lVar2 = *(longlong *)&this->Elements;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)iVar4 * 0x18));
      memmove((void *)(lVar2 + (longlong)iVar4 * 0x18),_Src.ReferenceController,0x10);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,iVar10,1);
      iVar10 = iVar4;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar5 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)&_Src.ReferenceController[1]._padding_ + 4) = uVar6;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)&_Src.ReferenceController[1]._padding_ =
           *(undefined4 *)((longlong)FVar8 + uVar5 * 4);
      *(int *)((longlong)FVar8 + uVar5 * 4) = iVar10;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Object = iVar10;
  return (FSetElementId)(int)param_1;
}

// Emplace<TSharedRef<FTokenizedMessage,1>_const_&> @ 142bbe070

FSetElementId __thiscall
TSet<TSharedRef<FTokenizedMessage,1>,FTokenizedMessageKeyFunc,FDefaultSetAllocator>::
Emplace<TSharedRef<FTokenizedMessage,1>_const_&>
          (TSet<TSharedRef<FTokenizedMessage,1>,FTokenizedMessageKeyFunc,FDefaultSetAllocator> *this
          ,TSharedRef<FTokenizedMessage,1> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FText *this_00;
  FString *pFVar7;
  ulonglong uVar8;
  uint uVar9;
  wchar_t *pwVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  char *in_R9;
  int iVar13;
  bool bVar14;
  FSparseArrayAllocationInfo local_48;
  TSharedRef<FTokenizedMessage,1> *_Src;
  
  iVar12 = *(int *)&(this->Elements).field_0x34;
  iVar13 = 1;
  if (iVar12 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar12 = iVar12 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  iVar5 = local_48.Index;
  _Src = (TSharedRef<FTokenizedMessage,1> *)0x0;
  iVar12 = 0;
  if (local_48.Pointer != (TSharedRef<FTokenizedMessage,1> *)0x0) {
    *(FTokenizedMessage **)local_48.Pointer = *(FTokenizedMessage **)param_2;
    pTVar3 = *(TReferenceControllerBase<1> **)(param_2 + 8);
    ((FSharedReferencer<1> *)((longlong)local_48.Pointer + 8))->ReferenceController = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(undefined4 *)&((TSharedRef<FTokenizedMessage,1> *)((longlong)local_48.Pointer + 0x10))->Object
         = 0xffffffff;
    _Src = local_48.Pointer;
  }
  this_00 = FTokenizedMessage::ToText(_Src->Object,(FText *)&local_48);
  pFVar7 = FText::ToString(this_00);
  iVar1 = (pFVar7->Data).ArrayNum;
  if (iVar1 == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    iVar12 = iVar1 + -1;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar10);
  if ((longlong *)CONCAT44(local_48._4_4_,local_48.Index) != (longlong *)0x0) {
    (**(code **)(*(longlong *)CONCAT44(local_48._4_4_,local_48.Index) + 0x10))();
  }
  iVar12 = *(int *)&(this->Elements).field_0x8;
  bVar14 = false;
  iVar1 = *(int *)&(this->Elements).field_0x34;
  if ((iVar12 - iVar1 != 1) && (iVar12 != iVar1)) {
    FVar11 = (this->Hash).SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar12 = *(int *)((longlong)FVar11 + (ulonglong)(this->HashSize - 1U & uVar6) * 4);
        iVar12 != -1;
        iVar12 = *(int *)((longlong)iVar12 * 0x18 + 0x10 + *(longlong *)&this->Elements)) {
      bVar4 = FMessageLogListingModel::AreMessagesEqual
                        ((TSharedRef<FTokenizedMessage,1> *)
                         (*(longlong *)&this->Elements + (longlong)iVar12 * 0x18),_Src);
      if (bVar4) {
        bVar14 = iVar12 != -1;
        if (bVar14) {
          lVar2 = *(longlong *)&this->Elements;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)iVar12 * 0x18));
          memmove((void *)(lVar2 + (longlong)iVar12 * 0x18),_Src,0x10);
          TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,iVar5,1);
          iVar5 = iVar12;
        }
        break;
      }
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar9 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar13 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)&_Src[1].Object + 4) = uVar6;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)&_Src[1].Object = *(undefined4 *)((longlong)FVar11 + uVar8 * 4);
      *(int *)((longlong)FVar11 + uVar8 * 4) = iVar5;
    }
    else {
      this->HashSize = iVar13;
      Rehash(this);
    }
  }
  *(int *)&param_1->Object = iVar5;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<ITableRow_const_*_&&,TSharedPtr<IMessageLogListing,1>_const_&>_> @ 142bbe300

FSetElementId __thiscall
TSet<TTuple<ITableRow_const_*,TSharedPtr<IMessageLogListing,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<ITableRow_const_*_&&,TSharedPtr<IMessageLogListing,1>_const_&>_>
          (TSet<TTuple<ITableRow_const_*,TSharedPtr<IMessageLogListing,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<ITableRow_const_*_&&,TSharedPtr<IMessageLogListing,1>_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  void *_Dst;
  int iVar9;
  int iVar10;
  char *in_R9;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar2);
    iVar10 = iVar10 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (ulonglong *)0x0) {
    puVar3 = *(ulonglong **)(param_2 + 8);
    *(ulonglong *)local_48.Pointer = **(ulonglong **)param_2;
    *(ulonglong *)((longlong)local_48.Pointer + 8) = *puVar3;
    uVar6 = puVar3[1];
    *(ulonglong *)((longlong)local_48.Pointer + 0x10) = uVar6;
    if (uVar6 != 0) {
      LOCK();
      *(int *)(uVar6 + 8) = *(int *)(uVar6 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  uVar6 = *(ulonglong *)local_48.Pointer;
  bVar11 = false;
  uVar5 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar10 = *(int *)&(this->Elements).field_0x8;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if ((iVar10 - iVar4 != 1) && (iVar10 != iVar4)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar10 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(ulonglong *)((longlong)iVar10 * 0x20 + lVar2) == uVar6) {
          bVar11 = iVar10 != -1;
          if (bVar11) {
            _Dst = (void *)((longlong)iVar10 * 0x20 + lVar2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((longlong)_Dst + 0x10));
            memmove(_Dst,local_48.Pointer,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + lVar2);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)local_48.Pointer + 0x1c) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0x18) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<ITableRow_const_*_&&,TSharedRef<FMessageFilter,1>_const_&>_> @ 142bbe560

FSetElementId __thiscall
TSet<TTuple<ITableRow_const_*,TSharedRef<FMessageFilter,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<ITableRow_const_*_&&,TSharedRef<FMessageFilter,1>_const_&>_>
          (TSet<TTuple<ITableRow_const_*,TSharedRef<FMessageFilter,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<ITableRow_const_*_&&,TSharedRef<FMessageFilter,1>_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  void *_Dst;
  int iVar9;
  int iVar10;
  char *in_R9;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar2);
    iVar10 = iVar10 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (ulonglong *)0x0) {
    puVar3 = *(ulonglong **)(param_2 + 8);
    *(ulonglong *)local_48.Pointer = **(ulonglong **)param_2;
    *(ulonglong *)((longlong)local_48.Pointer + 8) = *puVar3;
    uVar6 = puVar3[1];
    *(ulonglong *)((longlong)local_48.Pointer + 0x10) = uVar6;
    if (uVar6 != 0) {
      LOCK();
      *(int *)(uVar6 + 8) = *(int *)(uVar6 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  uVar6 = *(ulonglong *)local_48.Pointer;
  bVar11 = false;
  uVar5 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar10 = *(int *)&(this->Elements).field_0x8;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if ((iVar10 - iVar4 != 1) && (iVar10 != iVar4)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar10 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(ulonglong *)((longlong)iVar10 * 0x20 + lVar2) == uVar6) {
          bVar11 = iVar10 != -1;
          if (bVar11) {
            _Dst = (void *)((longlong)iVar10 * 0x20 + lVar2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((longlong)_Dst + 0x10));
            memmove(_Dst,local_48.Pointer,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + lVar2);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)local_48.Pointer + 0x1c) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0x18) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<ITableRow_const_*_&&,TSharedRef<FTokenizedMessage,1>_const_&>_> @ 142bbe7c0

FSetElementId __thiscall
TSet<TTuple<ITableRow_const_*,TSharedRef<FTokenizedMessage,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<ITableRow_const_*_&&,TSharedRef<FTokenizedMessage,1>_const_&>_>
          (TSet<TTuple<ITableRow_const_*,TSharedRef<FTokenizedMessage,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<ITableRow_const_*_&&,TSharedRef<FTokenizedMessage,1>_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  void *_Dst;
  int iVar9;
  int iVar10;
  char *in_R9;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar2);
    iVar10 = iVar10 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (ulonglong *)0x0) {
    puVar3 = *(ulonglong **)(param_2 + 8);
    *(ulonglong *)local_48.Pointer = **(ulonglong **)param_2;
    *(ulonglong *)((longlong)local_48.Pointer + 8) = *puVar3;
    uVar6 = puVar3[1];
    *(ulonglong *)((longlong)local_48.Pointer + 0x10) = uVar6;
    if (uVar6 != 0) {
      LOCK();
      *(int *)(uVar6 + 8) = *(int *)(uVar6 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  uVar6 = *(ulonglong *)local_48.Pointer;
  bVar11 = false;
  uVar5 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar10 = *(int *)&(this->Elements).field_0x8;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if ((iVar10 - iVar4 != 1) && (iVar10 != iVar4)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar10 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(ulonglong *)((longlong)iVar10 * 0x20 + lVar2) == uVar6) {
          bVar11 = iVar10 != -1;
          if (bVar11) {
            _Dst = (void *)((longlong)iVar10 * 0x20 + lVar2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((longlong)_Dst + 0x10));
            memmove(_Dst,local_48.Pointer,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + lVar2);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)local_48.Pointer + 0x1c) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0x18) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<TSharedPtr<IMessageLogListing,1>_const_&,TSharedRef<ITableRow,1>_const_&>_> @ 142bbea20

FSetElementId __thiscall
TSet<TTuple<TSharedPtr<IMessageLogListing,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageLogListing,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<TSharedPtr<IMessageLogListing,1>_const_&,TSharedRef<ITableRow,1>_const_&>_>
          (TSet<TTuple<TSharedPtr<IMessageLogListing,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageLogListing,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<TSharedPtr<IMessageLogListing,1>_const_&,TSharedRef<ITableRow,1>_const_&>
                 *param_1,bool *param_2)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  FSharedReferencer<1> _Src;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  char *in_R9;
  undefined1 *puVar12;
  int iVar13;
  bool bVar14;
  IMessageLogListing *local_48;
  FSharedReferencer<1> local_40;
  
  iVar13 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar13 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar13 = iVar13 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar6 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,(FSparseArrayAllocationInfo *)&local_48,iVar6);
  _Src.ReferenceController = local_40.ReferenceController;
  if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    plVar3 = *(longlong **)param_2;
    plVar4 = *(longlong **)(param_2 + 8);
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
    local_40.ReferenceController[1]._padding_ = *plVar4;
    lVar2 = plVar4[1];
    local_40.ReferenceController[1].SharedReferenceCount = (atomic<int>)(int)lVar2;
    local_40.ReferenceController[1].WeakReferenceCount =
         (atomic<int>)(int)((ulonglong)lVar2 >> 0x20);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)&local_40.ReferenceController[2]._padding_ = 0xffffffff;
  }
  pTVar5 = *(TReferenceControllerBase<1> **)&(local_40.ReferenceController)->SharedReferenceCount;
  iVar13 = (int)local_48;
  uVar7 = (local_40.ReferenceController)->_padding_;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar12 = &(this->Elements).field_0x8;
  uVar8 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  bVar14 = false;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  if (*(int *)puVar12 - *(int *)&(this->Elements).field_0x34 != 1) {
    pTVar5 = *(TReferenceControllerBase<1> **)&(_Src.ReferenceController)->SharedReferenceCount;
    local_48 = (IMessageLogListing *)(_Src.ReferenceController)->_padding_;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40.ReferenceController = pTVar5;
    iVar6 = FindIndexByHash<TSharedPtr<IMessageLogListing_const_,1>_>
                      (this,uVar8,(TSharedPtr<IMessageLogListing_const_,1> *)&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    bVar14 = iVar6 != -1;
    if (bVar14) {
      _Dst = (void *)(*(longlong *)&this->Elements + (longlong)iVar6 * 0x28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)
                  (*(longlong *)&this->Elements + 0x18 + (longlong)iVar6 * 0x28));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((longlong)_Dst + 8));
      memmove(_Dst,_Src.ReferenceController,0x20);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,iVar13,1);
      iVar13 = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar9 = *(int *)puVar12 - *(int *)&(this->Elements).field_0x34;
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
      uVar8 = this->HashSize - 1U & uVar8;
      *(uint *)((longlong)&_Src.ReferenceController[2]._padding_ + 4) = uVar8;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)&_Src.ReferenceController[2]._padding_ =
           *(undefined4 *)((longlong)FVar10 + uVar7 * 4);
      *(int *)((longlong)FVar10 + uVar7 * 4) = iVar13;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar13;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<TSharedRef<FMessageFilter,1>_const_&,TSharedRef<ITableRow,1>_const_&>_> @ 142bbecb0

FSetElementId __thiscall
TSet<TTuple<TSharedRef<FMessageFilter,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FMessageFilter,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<TSharedRef<FMessageFilter,1>_const_&,TSharedRef<ITableRow,1>_const_&>_>
          (TSet<TTuple<TSharedRef<FMessageFilter,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FMessageFilter,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<TSharedRef<FMessageFilter,1>_const_&,TSharedRef<ITableRow,1>_const_&>
                 *param_1,bool *param_2)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  FSharedReferencer<1> _Src;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  char *in_R9;
  undefined1 *puVar12;
  int iVar13;
  bool bVar14;
  FMessageFilter *local_48;
  FSharedReferencer<1> local_40;
  
  iVar13 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar13 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar13 = iVar13 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar6 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,(FSparseArrayAllocationInfo *)&local_48,iVar6);
  _Src.ReferenceController = local_40.ReferenceController;
  if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    plVar3 = *(longlong **)param_2;
    plVar4 = *(longlong **)(param_2 + 8);
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
    local_40.ReferenceController[1]._padding_ = *plVar4;
    lVar2 = plVar4[1];
    local_40.ReferenceController[1].SharedReferenceCount = (atomic<int>)(int)lVar2;
    local_40.ReferenceController[1].WeakReferenceCount =
         (atomic<int>)(int)((ulonglong)lVar2 >> 0x20);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)&local_40.ReferenceController[2]._padding_ = 0xffffffff;
  }
  pTVar5 = *(TReferenceControllerBase<1> **)&(local_40.ReferenceController)->SharedReferenceCount;
  iVar13 = (int)local_48;
  uVar7 = (local_40.ReferenceController)->_padding_;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar12 = &(this->Elements).field_0x8;
  uVar8 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  bVar14 = false;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  if (*(int *)puVar12 - *(int *)&(this->Elements).field_0x34 != 1) {
    pTVar5 = *(TReferenceControllerBase<1> **)&(_Src.ReferenceController)->SharedReferenceCount;
    local_48 = (FMessageFilter *)(_Src.ReferenceController)->_padding_;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40.ReferenceController = pTVar5;
    iVar6 = FindIndexByHash<TSharedRef<FMessageFilter_const_,1>_>
                      (this,uVar8,(TSharedRef<FMessageFilter_const_,1> *)&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    bVar14 = iVar6 != -1;
    if (bVar14) {
      _Dst = (void *)(*(longlong *)&this->Elements + (longlong)iVar6 * 0x28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)
                  (*(longlong *)&this->Elements + 0x18 + (longlong)iVar6 * 0x28));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((longlong)_Dst + 8));
      memmove(_Dst,_Src.ReferenceController,0x20);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,iVar13,1);
      iVar13 = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar9 = *(int *)puVar12 - *(int *)&(this->Elements).field_0x34;
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
      uVar8 = this->HashSize - 1U & uVar8;
      *(uint *)((longlong)&_Src.ReferenceController[2]._padding_ + 4) = uVar8;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)&_Src.ReferenceController[2]._padding_ =
           *(undefined4 *)((longlong)FVar10 + uVar7 * 4);
      *(int *)((longlong)FVar10 + uVar7 * 4) = iVar13;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar13;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<TSharedRef<FTokenizedMessage,1>_const_&,TSharedRef<ITableRow,1>_const_&>_> @ 142bbef40

FSetElementId __thiscall
TSet<TTuple<TSharedRef<FTokenizedMessage,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FTokenizedMessage,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<TSharedRef<FTokenizedMessage,1>_const_&,TSharedRef<ITableRow,1>_const_&>_>
          (TSet<TTuple<TSharedRef<FTokenizedMessage,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FTokenizedMessage,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<TSharedRef<FTokenizedMessage,1>_const_&,TSharedRef<ITableRow,1>_const_&>
                 *param_1,bool *param_2)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  FSharedReferencer<1> _Src;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  char *in_R9;
  undefined1 *puVar12;
  int iVar13;
  bool bVar14;
  FTokenizedMessage *local_48;
  FSharedReferencer<1> local_40;
  
  iVar13 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar13 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar13 = iVar13 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar6 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,(FSparseArrayAllocationInfo *)&local_48,iVar6);
  _Src.ReferenceController = local_40.ReferenceController;
  if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    plVar3 = *(longlong **)param_2;
    plVar4 = *(longlong **)(param_2 + 8);
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
    local_40.ReferenceController[1]._padding_ = *plVar4;
    lVar2 = plVar4[1];
    local_40.ReferenceController[1].SharedReferenceCount = (atomic<int>)(int)lVar2;
    local_40.ReferenceController[1].WeakReferenceCount =
         (atomic<int>)(int)((ulonglong)lVar2 >> 0x20);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)&local_40.ReferenceController[2]._padding_ = 0xffffffff;
  }
  pTVar5 = *(TReferenceControllerBase<1> **)&(local_40.ReferenceController)->SharedReferenceCount;
  iVar13 = (int)local_48;
  uVar7 = (local_40.ReferenceController)->_padding_;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar12 = &(this->Elements).field_0x8;
  uVar8 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  bVar14 = false;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  if (*(int *)puVar12 - *(int *)&(this->Elements).field_0x34 != 1) {
    pTVar5 = *(TReferenceControllerBase<1> **)&(_Src.ReferenceController)->SharedReferenceCount;
    local_48 = (FTokenizedMessage *)(_Src.ReferenceController)->_padding_;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40.ReferenceController = pTVar5;
    iVar6 = FindIndexByHash<TSharedRef<FTokenizedMessage_const_,1>_>
                      (this,uVar8,(TSharedRef<FTokenizedMessage_const_,1> *)&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    bVar14 = iVar6 != -1;
    if (bVar14) {
      _Dst = (void *)(*(longlong *)&this->Elements + (longlong)iVar6 * 0x28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)
                  (*(longlong *)&this->Elements + 0x18 + (longlong)iVar6 * 0x28));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((longlong)_Dst + 8));
      memmove(_Dst,_Src.ReferenceController,0x20);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,iVar13,1);
      iVar13 = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar9 = *(int *)puVar12 - *(int *)&(this->Elements).field_0x34;
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
      uVar8 = this->HashSize - 1U & uVar8;
      *(uint *)((longlong)&_Src.ReferenceController[2]._padding_ + 4) = uVar8;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)&_Src.ReferenceController[2]._padding_ =
           *(undefined4 *)((longlong)FVar10 + uVar7 * 4);
      *(int *)((longlong)FVar10 + uVar7 * 4) = iVar13;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar13;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FName_const_&,TSharedPtr<FMessageLogListingModel,1>_const_&>_> @ 142bbf1d0

FSetElementId __thiscall
TSet<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingModel,1>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FName_const_&,TSharedPtr<FMessageLogListingModel,1>_const_&>_>
          (TSet<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingModel,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_const_&,TSharedPtr<FMessageLogListingModel,1>_const_&>
                 *param_1,bool *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  void *_Dst;
  int iVar8;
  char *in_R9;
  int iVar9;
  int iVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    lVar1 = *(longlong *)&this->Elements;
    iVar9 = *(int *)((longlong)iVar3 * 0x20 + 4 + lVar1);
    iVar8 = iVar8 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar9;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar9 * 0x20 + lVar1) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 8);
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(longlong *)((longlong)local_48.Pointer + 8) = *plVar2;
    lVar1 = plVar2[1];
    *(longlong *)((longlong)local_48.Pointer + 0x10) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  lVar1 = *(longlong *)local_48.Pointer;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar11 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 + (int)((ulonglong)lVar1 >> 0x20);
  iVar9 = local_48.Index;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar8 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar8 * 0x20 + lVar1) == *(longlong *)local_48.Pointer) {
          bVar11 = iVar8 != -1;
          if (bVar11) {
            _Dst = (void *)((longlong)iVar8 * 0x20 + lVar1);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((longlong)_Dst + 0x10));
            memmove(_Dst,local_48.Pointer,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar9 = iVar8;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + lVar1);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar10 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0x1c) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0x18) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = iVar9;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar9;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FName_const_&,TSharedPtr<FMessageLogListingViewModel,1>_const_&>_> @ 142bbf420

FSetElementId __thiscall
TSet<TTuple<FName,TSharedPtr<FMessageLogListingViewModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FName_const_&,TSharedPtr<FMessageLogListingViewModel,1>_const_&>_>
          (TSet<TTuple<FName,TSharedPtr<FMessageLogListingViewModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_const_&,TSharedPtr<FMessageLogListingViewModel,1>_const_&>
                 *param_1,bool *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  void *_Dst;
  int iVar8;
  char *in_R9;
  int iVar9;
  int iVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    lVar1 = *(longlong *)&this->Elements;
    iVar9 = *(int *)((longlong)iVar3 * 0x20 + 4 + lVar1);
    iVar8 = iVar8 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar9;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar9 * 0x20 + lVar1) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 8);
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(longlong *)((longlong)local_48.Pointer + 8) = *plVar2;
    lVar1 = plVar2[1];
    *(longlong *)((longlong)local_48.Pointer + 0x10) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  lVar1 = *(longlong *)local_48.Pointer;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar11 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 + (int)((ulonglong)lVar1 >> 0x20);
  iVar9 = local_48.Index;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar8 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar8 * 0x20 + lVar1) == *(longlong *)local_48.Pointer) {
          bVar11 = iVar8 != -1;
          if (bVar11) {
            _Dst = (void *)((longlong)iVar8 * 0x20 + lVar1);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((longlong)_Dst + 0x10));
            memmove(_Dst,local_48.Pointer,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar9 = iVar8;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + lVar1);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar10 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0x1c) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0x18) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = iVar9;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar9;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FName_const_&,TSharedRef<SWidget,1>_const_&>_> @ 142bbf670

FSetElementId __thiscall
TSet<TTuple<FName,TSharedRef<SWidget,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<SWidget,1>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FName_const_&,TSharedRef<SWidget,1>_const_&>_>
          (TSet<TTuple<FName,TSharedRef<SWidget,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<SWidget,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_const_&,TSharedRef<SWidget,1>_const_&> *param_1,
          bool *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  void *_Dst;
  int iVar8;
  char *in_R9;
  int iVar9;
  int iVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    lVar1 = *(longlong *)&this->Elements;
    iVar9 = *(int *)((longlong)iVar3 * 0x20 + 4 + lVar1);
    iVar8 = iVar8 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar9;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar9 * 0x20 + lVar1) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 8);
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(longlong *)((longlong)local_48.Pointer + 8) = *plVar2;
    lVar1 = plVar2[1];
    *(longlong *)((longlong)local_48.Pointer + 0x10) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  lVar1 = *(longlong *)local_48.Pointer;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar11 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 + (int)((ulonglong)lVar1 >> 0x20);
  iVar9 = local_48.Index;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar8 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar8 * 0x20 + lVar1) == *(longlong *)local_48.Pointer) {
          bVar11 = iVar8 != -1;
          if (bVar11) {
            _Dst = (void *)((longlong)iVar8 * 0x20 + lVar1);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((longlong)_Dst + 0x10));
            memmove(_Dst,local_48.Pointer,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar9 = iVar8;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + lVar1);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar10 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0x1c) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0x18) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = iVar9;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar9;
  return (FSetElementId)(int)param_1;
}

// FindIndexByHash<TSharedPtr<IMessageLogListing_const_,1>_> @ 142bbf910

int __thiscall
TSet<TTuple<TSharedPtr<IMessageLogListing,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageLogListing,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
::FindIndexByHash<TSharedPtr<IMessageLogListing_const_,1>_>
          (TSet<TTuple<TSharedPtr<IMessageLogListing,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageLogListing,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,TSharedPtr<IMessageLogListing_const_,1> *param_2)

{
  longlong lVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  IMessageLogListing *pIVar4;
  TReferenceControllerBase<1> *pTVar5;
  IMessageLogListing *pIVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar2 != -1) {
      pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
      pIVar4 = param_2->Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      lVar1 = (longlong)iVar2 * 0x28;
      pTVar5 = *(TReferenceControllerBase<1> **)(lVar1 + 8 + *(longlong *)&this->Elements);
      pIVar6 = *(IMessageLogListing **)(lVar1 + *(longlong *)&this->Elements);
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if (pIVar6 == pIVar4) {
        return iVar2;
      }
      iVar2 = *(int *)(lVar1 + 0x20 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// FindIndexByHash<TSharedPtr<IMessageLogListing_const_,1>_> @ 142bbf9f0

int __thiscall
TSet<TSharedPtr<IMessageLogListing,1>,DefaultKeyFuncs<TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
::FindIndexByHash<TSharedPtr<IMessageLogListing_const_,1>_>
          (TSet<TSharedPtr<IMessageLogListing,1>,DefaultKeyFuncs<TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,TSharedPtr<IMessageLogListing_const_,1> *param_2)

{
  longlong lVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  IMessageLogListing *pIVar4;
  TReferenceControllerBase<1> *pTVar5;
  IMessageLogListing *pIVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar2 != -1) {
      pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
      pIVar4 = param_2->Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      lVar1 = (longlong)iVar2 * 0x18;
      pTVar5 = *(TReferenceControllerBase<1> **)(lVar1 + 8 + *(longlong *)&this->Elements);
      pIVar6 = *(IMessageLogListing **)(lVar1 + *(longlong *)&this->Elements);
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if (pIVar6 == pIVar4) {
        return iVar2;
      }
      iVar2 = *(int *)(lVar1 + 0x10 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// FindIndexByHash<TSharedRef<FMessageFilter_const_,1>_> @ 142bbfad0

int __thiscall
TSet<TTuple<TSharedRef<FMessageFilter,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FMessageFilter,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
::FindIndexByHash<TSharedRef<FMessageFilter_const_,1>_>
          (TSet<TTuple<TSharedRef<FMessageFilter,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FMessageFilter,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,TSharedRef<FMessageFilter_const_,1> *param_2)

{
  longlong lVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FMessageFilter *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FMessageFilter *pFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar2 != -1) {
      pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
      pFVar4 = param_2->Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      lVar1 = (longlong)iVar2 * 0x28;
      pTVar5 = *(TReferenceControllerBase<1> **)(lVar1 + 8 + *(longlong *)&this->Elements);
      pFVar6 = *(FMessageFilter **)(lVar1 + *(longlong *)&this->Elements);
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if (pFVar6 == pFVar4) {
        return iVar2;
      }
      iVar2 = *(int *)(lVar1 + 0x20 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// FindIndexByHash<TSharedRef<FMessageFilter_const_,1>_> @ 142bbfbb0

int __thiscall
TSet<TSharedRef<FMessageFilter,1>,DefaultKeyFuncs<TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
::FindIndexByHash<TSharedRef<FMessageFilter_const_,1>_>
          (TSet<TSharedRef<FMessageFilter,1>,DefaultKeyFuncs<TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,TSharedRef<FMessageFilter_const_,1> *param_2)

{
  longlong lVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FMessageFilter *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FMessageFilter *pFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar2 != -1) {
      pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
      pFVar4 = param_2->Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      lVar1 = (longlong)iVar2 * 0x18;
      pTVar5 = *(TReferenceControllerBase<1> **)(lVar1 + 8 + *(longlong *)&this->Elements);
      pFVar6 = *(FMessageFilter **)(lVar1 + *(longlong *)&this->Elements);
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if (pFVar6 == pFVar4) {
        return iVar2;
      }
      iVar2 = *(int *)(lVar1 + 0x10 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// FindIndexByHash<TSharedRef<FTokenizedMessage_const_,1>_> @ 142bbfc90

int __thiscall
TSet<TTuple<TSharedRef<FTokenizedMessage,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FTokenizedMessage,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
::FindIndexByHash<TSharedRef<FTokenizedMessage_const_,1>_>
          (TSet<TTuple<TSharedRef<FTokenizedMessage,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FTokenizedMessage,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,TSharedRef<FTokenizedMessage_const_,1> *param_2)

{
  longlong lVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FTokenizedMessage *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FTokenizedMessage *pFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar2 != -1) {
      pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
      pFVar4 = param_2->Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      lVar1 = (longlong)iVar2 * 0x28;
      pTVar5 = *(TReferenceControllerBase<1> **)(lVar1 + 8 + *(longlong *)&this->Elements);
      pFVar6 = *(FTokenizedMessage **)(lVar1 + *(longlong *)&this->Elements);
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if (pFVar6 == pFVar4) {
        return iVar2;
      }
      iVar2 = *(int *)(lVar1 + 0x20 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// FindIndexByHash<TSharedRef<FTokenizedMessage_const_,1>_> @ 142bbfd70

int __thiscall
TSet<TSharedRef<FTokenizedMessage,1>,DefaultKeyFuncs<TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
::FindIndexByHash<TSharedRef<FTokenizedMessage_const_,1>_>
          (TSet<TSharedRef<FTokenizedMessage,1>,DefaultKeyFuncs<TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,TSharedRef<FTokenizedMessage_const_,1> *param_2)

{
  longlong lVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FTokenizedMessage *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FTokenizedMessage *pFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar2 != -1) {
      pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
      pFVar4 = param_2->Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      lVar1 = (longlong)iVar2 * 0x18;
      pTVar5 = *(TReferenceControllerBase<1> **)(lVar1 + 8 + *(longlong *)&this->Elements);
      pFVar6 = *(FTokenizedMessage **)(lVar1 + *(longlong *)&this->Elements);
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if (pFVar6 == pFVar4) {
        return iVar2;
      }
      iVar2 = *(int *)(lVar1 + 0x10 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// RemoveImpl<ITableRow_const_*> @ 142bc2470

int __thiscall
TSet<TTuple<ITableRow_const_*,TSharedPtr<IMessageLogListing,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
::RemoveImpl<ITableRow_const_*>
          (TSet<TTuple<ITableRow_const_*,TSharedPtr<IMessageLogListing,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,ITableRow **param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar8 = (longlong)(int)uVar6 * 0x20;
    if (*(ITableRow **)(lVar8 + *(longlong *)&this->Elements) == *param_2) break;
    uVar6 = *(uint *)(lVar8 + *(longlong *)&this->Elements + 0x18);
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&(this->Elements).field_0x28)) {
    puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar9 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_142bc2551;
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
LAB_142bc2551:
  FVar5 = (this->Hash).SecondaryData;
  lVar8 = *(longlong *)&this->Elements + lVar8;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar7 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar8 + 0x1c) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar7 = *(uint *)(lVar8 + 0x18);
      TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TSharedPtr<IMessageLogListing,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)&this->Elements + 0x18 + (longlong)(int)uVar1 * 0x20);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<ITableRow_const_*> @ 142bc2610

int __thiscall
TSet<TTuple<ITableRow_const_*,TSharedRef<FMessageFilter,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
::RemoveImpl<ITableRow_const_*>
          (TSet<TTuple<ITableRow_const_*,TSharedRef<FMessageFilter,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,ITableRow **param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar8 = (longlong)(int)uVar6 * 0x20;
    if (*(ITableRow **)(lVar8 + *(longlong *)&this->Elements) == *param_2) break;
    uVar6 = *(uint *)(lVar8 + *(longlong *)&this->Elements + 0x18);
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&(this->Elements).field_0x28)) {
    puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar9 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_142bc26f1;
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
LAB_142bc26f1:
  FVar5 = (this->Hash).SecondaryData;
  lVar8 = *(longlong *)&this->Elements + lVar8;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar7 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar8 + 0x1c) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar7 = *(uint *)(lVar8 + 0x18);
      TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TSharedRef<FMessageFilter,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)&this->Elements + 0x18 + (longlong)(int)uVar1 * 0x20);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<ITableRow_const_*> @ 142bc27b0

int __thiscall
TSet<TTuple<ITableRow_const_*,TSharedRef<FTokenizedMessage,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
::RemoveImpl<ITableRow_const_*>
          (TSet<TTuple<ITableRow_const_*,TSharedRef<FTokenizedMessage,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,ITableRow **param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar8 = (longlong)(int)uVar6 * 0x20;
    if (*(ITableRow **)(lVar8 + *(longlong *)&this->Elements) == *param_2) break;
    uVar6 = *(uint *)(lVar8 + *(longlong *)&this->Elements + 0x18);
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&(this->Elements).field_0x28)) {
    puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar9 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_142bc2891;
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
LAB_142bc2891:
  FVar5 = (this->Hash).SecondaryData;
  lVar8 = *(longlong *)&this->Elements + lVar8;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar7 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar8 + 0x1c) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar7 = *(uint *)(lVar8 + 0x18);
      TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TSharedRef<FTokenizedMessage,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)&this->Elements + 0x18 + (longlong)(int)uVar1 * 0x20);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<TSharedPtr<IMessageLogListing_const_,1>_> @ 142bc2950

int __thiscall
TSet<TSharedPtr<IMessageLogListing,1>,DefaultKeyFuncs<TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
::RemoveImpl<TSharedPtr<IMessageLogListing_const_,1>_>
          (TSet<TSharedPtr<IMessageLogListing,1>,DefaultKeyFuncs<TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,TSharedPtr<IMessageLogListing_const_,1> *param_2)

{
  longlong lVar1;
  uint uVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  IMessageLogListing *pIVar5;
  TReferenceControllerBase<1> *pTVar6;
  IMessageLogListing *pIVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  ForElementType<FSetElementId> FVar11;
  uint uVar12;
  uint *puVar13;
  undefined1 *puVar14;
  
  FVar11 = (this->Hash).SecondaryData;
  if (FVar11 == (ForElementType<FSetElementId>)0x0) {
    FVar11 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar12 = *(uint *)((longlong)FVar11 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4
                    );
  if (uVar12 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
    lVar4 = *(longlong *)&this->Elements;
    pIVar5 = param_2->Object;
    lVar1 = (longlong)(int)uVar12 * 0x18;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = *(TReferenceControllerBase<1> **)(lVar4 + 8 + lVar1);
    pIVar7 = *(IMessageLogListing **)(lVar4 + lVar1);
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (pIVar7 == pIVar5) break;
    uVar12 = *(uint *)(lVar4 + 0x10 + lVar1);
    if (uVar12 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar12) && ((int)uVar12 < *(int *)&(this->Elements).field_0x28)) {
    puVar14 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar14 + (longlong)((int)(uVar12 + ((int)uVar12 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar12 & 0x1f) & 1) != 0) goto LAB_142bc2a73;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    iVar10 = (*pcVar8)();
    return iVar10;
  }
LAB_142bc2a73:
  FVar11 = (this->Hash).SecondaryData;
  lVar4 = *(longlong *)&this->Elements;
  if (FVar11 == (ForElementType<FSetElementId>)0x0) {
    FVar11 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar13 = (uint *)((longlong)FVar11 + (longlong)*(int *)(lVar4 + 0x14 + lVar1) * 4);
  while( true ) {
    uVar2 = *puVar13;
    if ((uVar2 == 0xffffffff) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar9)) break;
    if (uVar2 == uVar12) {
      *puVar13 = *(uint *)(lVar4 + 0x10 + lVar1);
      TSparseArray<TSparseSetElement<TSharedPtr<IMessageLogListing,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar12,1);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar12,1);
      return 1;
    }
    puVar13 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar2 * 0x18 + 0x10);
  }
  pcVar8 = (code *)swi(3);
  iVar10 = (*pcVar8)();
  return iVar10;
}

// RemoveImpl<TSharedRef<FMessageFilter_const_,1>_> @ 142bc2b20

int __thiscall
TSet<TSharedRef<FMessageFilter,1>,DefaultKeyFuncs<TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
::RemoveImpl<TSharedRef<FMessageFilter_const_,1>_>
          (TSet<TSharedRef<FMessageFilter,1>,DefaultKeyFuncs<TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,TSharedRef<FMessageFilter_const_,1> *param_2)

{
  longlong lVar1;
  uint uVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  FMessageFilter *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FMessageFilter *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  ForElementType<FSetElementId> FVar11;
  uint uVar12;
  uint *puVar13;
  undefined1 *puVar14;
  
  FVar11 = (this->Hash).SecondaryData;
  if (FVar11 == (ForElementType<FSetElementId>)0x0) {
    FVar11 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar12 = *(uint *)((longlong)FVar11 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4
                    );
  if (uVar12 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
    lVar4 = *(longlong *)&this->Elements;
    pFVar5 = param_2->Object;
    lVar1 = (longlong)(int)uVar12 * 0x18;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = *(TReferenceControllerBase<1> **)(lVar4 + 8 + lVar1);
    pFVar7 = *(FMessageFilter **)(lVar4 + lVar1);
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (pFVar7 == pFVar5) break;
    uVar12 = *(uint *)(lVar4 + 0x10 + lVar1);
    if (uVar12 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar12) && ((int)uVar12 < *(int *)&(this->Elements).field_0x28)) {
    puVar14 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar14 + (longlong)((int)(uVar12 + ((int)uVar12 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar12 & 0x1f) & 1) != 0) goto LAB_142bc2c43;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    iVar10 = (*pcVar8)();
    return iVar10;
  }
LAB_142bc2c43:
  FVar11 = (this->Hash).SecondaryData;
  lVar4 = *(longlong *)&this->Elements;
  if (FVar11 == (ForElementType<FSetElementId>)0x0) {
    FVar11 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar13 = (uint *)((longlong)FVar11 + (longlong)*(int *)(lVar4 + 0x14 + lVar1) * 4);
  while( true ) {
    uVar2 = *puVar13;
    if ((uVar2 == 0xffffffff) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar9)) break;
    if (uVar2 == uVar12) {
      *puVar13 = *(uint *)(lVar4 + 0x10 + lVar1);
      TSparseArray<TSparseSetElement<TSharedRef<FMessageFilter,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar12,1);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar12,1);
      return 1;
    }
    puVar13 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar2 * 0x18 + 0x10);
  }
  pcVar8 = (code *)swi(3);
  iVar10 = (*pcVar8)();
  return iVar10;
}

// RemoveImpl<TSharedRef<FTokenizedMessage_const_,1>_> @ 142bc2cf0

int __thiscall
TSet<TSharedRef<FTokenizedMessage,1>,DefaultKeyFuncs<TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
::RemoveImpl<TSharedRef<FTokenizedMessage_const_,1>_>
          (TSet<TSharedRef<FTokenizedMessage,1>,DefaultKeyFuncs<TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,TSharedRef<FTokenizedMessage_const_,1> *param_2)

{
  longlong lVar1;
  uint uVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  FTokenizedMessage *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FTokenizedMessage *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  ForElementType<FSetElementId> FVar11;
  uint uVar12;
  uint *puVar13;
  undefined1 *puVar14;
  
  FVar11 = (this->Hash).SecondaryData;
  if (FVar11 == (ForElementType<FSetElementId>)0x0) {
    FVar11 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar12 = *(uint *)((longlong)FVar11 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4
                    );
  if (uVar12 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
    lVar4 = *(longlong *)&this->Elements;
    pFVar5 = param_2->Object;
    lVar1 = (longlong)(int)uVar12 * 0x18;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = *(TReferenceControllerBase<1> **)(lVar4 + 8 + lVar1);
    pFVar7 = *(FTokenizedMessage **)(lVar4 + lVar1);
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (pFVar7 == pFVar5) break;
    uVar12 = *(uint *)(lVar4 + 0x10 + lVar1);
    if (uVar12 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar12) && ((int)uVar12 < *(int *)&(this->Elements).field_0x28)) {
    puVar14 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar14 + (longlong)((int)(uVar12 + ((int)uVar12 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar12 & 0x1f) & 1) != 0) goto LAB_142bc2e13;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    iVar10 = (*pcVar8)();
    return iVar10;
  }
LAB_142bc2e13:
  FVar11 = (this->Hash).SecondaryData;
  lVar4 = *(longlong *)&this->Elements;
  if (FVar11 == (ForElementType<FSetElementId>)0x0) {
    FVar11 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar13 = (uint *)((longlong)FVar11 + (longlong)*(int *)(lVar4 + 0x14 + lVar1) * 4);
  while( true ) {
    uVar2 = *puVar13;
    if ((uVar2 == 0xffffffff) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar9)) break;
    if (uVar2 == uVar12) {
      *puVar13 = *(uint *)(lVar4 + 0x10 + lVar1);
      TSparseArray<TSparseSetElement<TSharedRef<FTokenizedMessage,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar12,1);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar12,1);
      return 1;
    }
    puVar13 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar2 * 0x18 + 0x10);
  }
  pcVar8 = (code *)swi(3);
  iVar10 = (*pcVar8)();
  return iVar10;
}

// RemoveImpl<FName> @ 142bc2ec0

int __thiscall
TSet<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingModel,1>,0>,FDefaultSetAllocator>
::RemoveImpl<FName>(TSet<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingModel,1>,0>,FDefaultSetAllocator>
                    *this,uint param_1,FName *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar8 = (longlong)(int)uVar6 * 0x20;
    if (*(FName *)(lVar8 + *(longlong *)&this->Elements) == *param_2) break;
    uVar6 = *(uint *)(lVar8 + *(longlong *)&this->Elements + 0x18);
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&(this->Elements).field_0x28)) {
    puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar9 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_142bc2fa1;
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
LAB_142bc2fa1:
  FVar5 = (this->Hash).SecondaryData;
  lVar8 = *(longlong *)&this->Elements + lVar8;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar7 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar8 + 0x1c) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar7 = *(uint *)(lVar8 + 0x18);
      TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)&this->Elements + 0x18 + (longlong)(int)uVar1 * 0x20);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<FName> @ 142bc3060

int __thiscall
TSet<TTuple<FName,TSharedPtr<FMessageLogListingViewModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>,FDefaultSetAllocator>
::RemoveImpl<FName>(TSet<TTuple<FName,TSharedPtr<FMessageLogListingViewModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>,FDefaultSetAllocator>
                    *this,uint param_1,FName *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar8 = (longlong)(int)uVar6 * 0x20;
    if (*(FName *)(lVar8 + *(longlong *)&this->Elements) == *param_2) break;
    uVar6 = *(uint *)(lVar8 + *(longlong *)&this->Elements + 0x18);
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&(this->Elements).field_0x28)) {
    puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar9 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_142bc3141;
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
LAB_142bc3141:
  FVar5 = (this->Hash).SecondaryData;
  lVar8 = *(longlong *)&this->Elements + lVar8;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar7 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar8 + 0x1c) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar7 = *(uint *)(lVar8 + 0x18);
      TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FMessageLogListingViewModel,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)&this->Elements + 0x18 + (longlong)(int)uVar1 * 0x20);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// operator= @ 142bcdf10

TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> * __thiscall
TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::operator=
          (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *this,
          TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  undefined1 *this_00;
  int iVar2;
  
  if (this != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&this->Hash,&this->HashSize,&param_1->Hash,param_1->HashSize);
    iVar2 = *(int *)&(param_1->Elements).field_0x8;
    TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,iVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar2,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
               (int *)&(this->Elements).field_0xc);
    puVar1 = &(param_1->Elements).field_0x10;
    this_00 = &(this->Elements).field_0x10;
    *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
    if (this_00 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar2 != 0) {
      memcpy(*(void **)&this->Elements,*(void **)&param_1->Elements,(longlong)iVar2 * 0xc);
    }
    return this;
  }
  return this;
}

// operator= @ 142bcdfe0

TSet<TSharedPtr<IMessageLogListing,1>,DefaultKeyFuncs<TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TSharedPtr<IMessageLogListing,1>,DefaultKeyFuncs<TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
::operator=(TSet<TSharedPtr<IMessageLogListing,1>,DefaultKeyFuncs<TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
            *this,TSet<TSharedPtr<IMessageLogListing,1>,DefaultKeyFuncs<TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
                  *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSet<TSharedPtr<IMessageLogListing,1>,DefaultKeyFuncs<TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
  *pTVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  if (this == param_1) {
    return this;
  }
  UE::Core::Private::
  CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,&this->HashSize,&param_1->Hash,param_1->HashSize);
  iVar6 = *(int *)&(param_1->Elements).field_0x8;
  lVar11 = (longlong)iVar6;
  TSparseArray<TSparseSetElement<TSharedPtr<IMessageLogListing,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(&this->Elements,iVar6);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar6,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
             (int *)&(this->Elements).field_0xc);
  puVar2 = &(this->Elements).field_0x10;
  puVar1 = &(param_1->Elements).field_0x10;
  *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
  *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
  if (puVar2 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar12 = 0;
  if (0 < iVar6) {
    uVar10 = 1;
    plVar9 = (longlong *)(*(longlong *)&this->Elements + 8);
    lVar13 = *(longlong *)&param_1->Elements - *(longlong *)&this->Elements;
    do {
      if ((iVar12 < 0) || (*(int *)&(param_1->Elements).field_0x28 <= iVar12)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSet<TSharedPtr<IMessageLogListing,1>,DefaultKeyFuncs<TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
                    *)(*pcVar4)();
          return pTVar7;
        }
      }
      puVar2 = *(undefined1 **)&(param_1->Elements).field_0x20;
      puVar8 = puVar1;
      if (puVar2 != (undefined1 *)0x0) {
        puVar8 = puVar2;
      }
      iVar6 = iVar12;
      if (iVar12 < 0) {
        iVar6 = iVar12 + 0x1f;
      }
      if ((*(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4) & uVar10) == 0) {
        *(undefined4 *)(plVar9 + -1) = *(undefined4 *)((longlong)plVar9 + lVar13 + -8);
        *(undefined4 *)((longlong)plVar9 + -4) = *(undefined4 *)(lVar13 + -4 + (longlong)plVar9);
      }
      else {
        plVar9[-1] = *(longlong *)((longlong)plVar9 + lVar13 + -8);
        lVar3 = *(longlong *)(lVar13 + (longlong)plVar9);
        *plVar9 = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        *(undefined4 *)(plVar9 + 1) = *(undefined4 *)(lVar13 + 8 + (longlong)plVar9);
        *(undefined4 *)((longlong)plVar9 + 0xc) = *(undefined4 *)(lVar13 + 0xc + (longlong)plVar9);
      }
      iVar12 = iVar12 + 1;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      plVar9 = plVar9 + 3;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return this;
}

// operator= @ 142bce180

TSet<TSharedRef<FMessageFilter,1>,DefaultKeyFuncs<TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TSharedRef<FMessageFilter,1>,DefaultKeyFuncs<TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
::operator=(TSet<TSharedRef<FMessageFilter,1>,DefaultKeyFuncs<TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
            *this,TSet<TSharedRef<FMessageFilter,1>,DefaultKeyFuncs<TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
                  *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSet<TSharedRef<FMessageFilter,1>,DefaultKeyFuncs<TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
  *pTVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  if (this == param_1) {
    return this;
  }
  UE::Core::Private::
  CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,&this->HashSize,&param_1->Hash,param_1->HashSize);
  iVar6 = *(int *)&(param_1->Elements).field_0x8;
  lVar11 = (longlong)iVar6;
  TSparseArray<TSparseSetElement<TSharedRef<FMessageFilter,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(&this->Elements,iVar6);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar6,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
             (int *)&(this->Elements).field_0xc);
  puVar2 = &(this->Elements).field_0x10;
  puVar1 = &(param_1->Elements).field_0x10;
  *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
  *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
  if (puVar2 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar12 = 0;
  if (0 < iVar6) {
    uVar10 = 1;
    plVar9 = (longlong *)(*(longlong *)&this->Elements + 8);
    lVar13 = *(longlong *)&param_1->Elements - *(longlong *)&this->Elements;
    do {
      if ((iVar12 < 0) || (*(int *)&(param_1->Elements).field_0x28 <= iVar12)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSet<TSharedRef<FMessageFilter,1>,DefaultKeyFuncs<TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
                    *)(*pcVar4)();
          return pTVar7;
        }
      }
      puVar2 = *(undefined1 **)&(param_1->Elements).field_0x20;
      puVar8 = puVar1;
      if (puVar2 != (undefined1 *)0x0) {
        puVar8 = puVar2;
      }
      iVar6 = iVar12;
      if (iVar12 < 0) {
        iVar6 = iVar12 + 0x1f;
      }
      if ((*(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4) & uVar10) == 0) {
        *(undefined4 *)(plVar9 + -1) = *(undefined4 *)((longlong)plVar9 + lVar13 + -8);
        *(undefined4 *)((longlong)plVar9 + -4) = *(undefined4 *)(lVar13 + -4 + (longlong)plVar9);
      }
      else {
        plVar9[-1] = *(longlong *)((longlong)plVar9 + lVar13 + -8);
        lVar3 = *(longlong *)(lVar13 + (longlong)plVar9);
        *plVar9 = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        *(undefined4 *)(plVar9 + 1) = *(undefined4 *)(lVar13 + 8 + (longlong)plVar9);
        *(undefined4 *)((longlong)plVar9 + 0xc) = *(undefined4 *)(lVar13 + 0xc + (longlong)plVar9);
      }
      iVar12 = iVar12 + 1;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      plVar9 = plVar9 + 3;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return this;
}

// operator= @ 142bce320

TSet<TSharedRef<FTokenizedMessage,1>,DefaultKeyFuncs<TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TSharedRef<FTokenizedMessage,1>,DefaultKeyFuncs<TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
::operator=(TSet<TSharedRef<FTokenizedMessage,1>,DefaultKeyFuncs<TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
            *this,TSet<TSharedRef<FTokenizedMessage,1>,DefaultKeyFuncs<TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
                  *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSet<TSharedRef<FTokenizedMessage,1>,DefaultKeyFuncs<TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
  *pTVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  if (this == param_1) {
    return this;
  }
  UE::Core::Private::
  CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,&this->HashSize,&param_1->Hash,param_1->HashSize);
  iVar6 = *(int *)&(param_1->Elements).field_0x8;
  lVar11 = (longlong)iVar6;
  TSparseArray<TSparseSetElement<TSharedRef<FTokenizedMessage,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(&this->Elements,iVar6);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar6,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
             (int *)&(this->Elements).field_0xc);
  puVar2 = &(this->Elements).field_0x10;
  puVar1 = &(param_1->Elements).field_0x10;
  *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
  *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
  if (puVar2 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar12 = 0;
  if (0 < iVar6) {
    uVar10 = 1;
    plVar9 = (longlong *)(*(longlong *)&this->Elements + 8);
    lVar13 = *(longlong *)&param_1->Elements - *(longlong *)&this->Elements;
    do {
      if ((iVar12 < 0) || (*(int *)&(param_1->Elements).field_0x28 <= iVar12)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSet<TSharedRef<FTokenizedMessage,1>,DefaultKeyFuncs<TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
                    *)(*pcVar4)();
          return pTVar7;
        }
      }
      puVar2 = *(undefined1 **)&(param_1->Elements).field_0x20;
      puVar8 = puVar1;
      if (puVar2 != (undefined1 *)0x0) {
        puVar8 = puVar2;
      }
      iVar6 = iVar12;
      if (iVar12 < 0) {
        iVar6 = iVar12 + 0x1f;
      }
      if ((*(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4) & uVar10) == 0) {
        *(undefined4 *)(plVar9 + -1) = *(undefined4 *)((longlong)plVar9 + lVar13 + -8);
        *(undefined4 *)((longlong)plVar9 + -4) = *(undefined4 *)(lVar13 + -4 + (longlong)plVar9);
      }
      else {
        plVar9[-1] = *(longlong *)((longlong)plVar9 + lVar13 + -8);
        lVar3 = *(longlong *)(lVar13 + (longlong)plVar9);
        *plVar9 = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        *(undefined4 *)(plVar9 + 1) = *(undefined4 *)(lVar13 + 8 + (longlong)plVar9);
        *(undefined4 *)((longlong)plVar9 + 0xc) = *(undefined4 *)(lVar13 + 0xc + (longlong)plVar9);
      }
      iVar12 = iVar12 + 1;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      plVar9 = plVar9 + 3;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return this;
}

// Array @ 142bd5b60

TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> * __thiscall
TSet<TSharedRef<FTokenizedMessage,1>,FTokenizedMessageKeyFunc,FDefaultSetAllocator>::Array
          (TSet<TSharedRef<FTokenizedMessage,1>,FTokenizedMessageKeyFunc,FDefaultSetAllocator> *this
          ,TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar11 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar12 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (0 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar12,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Elements).field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
  uVar12 = 1;
  iVar13 = iVar11;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(this->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar14;
    iVar13 = 0;
    iVar11 = 0;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_142bd5c42;
      uVar5 = puVar14[lVar9 + 1];
    }
    uVar12 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar12 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar13;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_142bd5c42:
  TStack_40._padding_ = CONCAT44(uVar12,iVar11);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar13;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Elements).field_0x28) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&this->Elements + (longlong)TStack_40.CurrentBitIndex * 0x18);
      pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar10 <= pFVar2) && (pFVar2 < pFVar10 + (longlong)*piVar1 * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar8 = (TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar8;
      }
      iVar11 = __return_storage_ptr__->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar11 + 1;
      pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
      *(undefined8 *)pFVar10 = *(undefined8 *)pFVar2;
      lVar9 = *(longlong *)(pFVar2 + 8);
      *(longlong *)(pFVar10 + 8) = lVar9;
      if (lVar9 != 0) {
        LOCK();
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        UNLOCK();
      }
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// Difference @ 142bee5f0

TSet<TSharedPtr<IMessageLogListing,1>,DefaultKeyFuncs<TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TSharedPtr<IMessageLogListing,1>,DefaultKeyFuncs<TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
::Difference(TSet<TSharedPtr<IMessageLogListing,1>,DefaultKeyFuncs<TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
             *this,TSet<TSharedPtr<IMessageLogListing,1>,DefaultKeyFuncs<TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
                   *__return_storage_ptr__,
            TSet<TSharedPtr<IMessageLogListing,1>,DefaultKeyFuncs<TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
            *param_1)

{
  ForElementType<FSetElementId> FVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TSet<TSharedPtr<IMessageLogListing,1>,DefaultKeyFuncs<TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
  *pTVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ForElementType<FSetElementId> FVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint *puVar18;
  TSet<TSharedPtr<IMessageLogListing,1>,DefaultKeyFuncs<TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
  *local_res8;
  TSharedPtr<IMessageLogListing_const_,1> local_98;
  undefined8 local_88;
  uint uStack_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  TSet<TSharedPtr<IMessageLogListing,1>,DefaultKeyFuncs<TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  uVar15 = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  uVar6 = 1;
  uVar14 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  uVar12 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  uVar17 = 0;
  local_res8 = this;
  if (uVar12 == 0) goto LAB_142bee890;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar12);
  uVar13 = 1;
  if (3 < uVar12) {
    uVar11 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((__return_storage_ptr__->HashSize != 0) && ((int)uVar13 <= __return_storage_ptr__->HashSize))
  goto LAB_142bee890;
  __return_storage_ptr__->HashSize = uVar13;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
  }
  if (uVar13 != 0) {
    uVar12 = uVar13;
    if (uVar13 < 2) {
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar12 = 0;
        goto LAB_142bee6cc;
      }
    }
    else {
LAB_142bee6cc:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar12,4);
    }
    if (0 < (int)uVar13) {
      uVar16 = (ulonglong)uVar13;
      uVar11 = uVar15;
      do {
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar1;
        }
        uVar8 = uVar11 & (longlong)(int)uVar13 - 1U;
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)FVar10 + uVar8 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (__return_storage_ptr__->HashSize != 0) {
    uVar12 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
    local_98.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)&(__return_storage_ptr__->Elements).field_0x10;
    local_98.Object._0_4_ = 0;
    local_98.Object._4_4_ = 1;
    local_88._4_4_ = 0;
    uStack_80 = 0;
    uVar11 = uVar15;
    if (uVar12 != 0) {
      puVar18 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)local_98.SharedReferenceCount.ReferenceController;
      }
      uVar13 = *puVar18;
      uVar16 = uVar15;
      while (uVar13 == 0) {
        uStack_80 = (int)uVar16 + 0x20;
        uVar16 = (ulonglong)uStack_80;
        iVar7 = (int)uVar11;
        local_98.Object._0_4_ = iVar7 + 1;
        uVar11 = (ulonglong)(uint)local_98.Object;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 <
            (int)(uint)local_98.Object) goto LAB_142bee7b9;
        uVar13 = puVar18[(longlong)iVar7 + 1];
      }
      local_98.Object._4_4_ = -uVar13 & uVar13;
      uVar11 = (ulonglong)local_98.Object._4_4_ * 2 + 1;
      lVar4 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_88._4_4_ = (int)lVar4 + -1 + uStack_80;
      uVar11 = (ulonglong)local_88._4_4_;
      if ((int)uVar12 < (int)local_88._4_4_) {
LAB_142bee7b9:
        uVar11 = (ulonglong)uVar12;
        local_88._4_4_ = uVar12;
      }
    }
    local_88._0_4_ = 0xffffffff;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60.CurrentBitIndex = local_88._4_4_;
    TStack_60._28_4_ = uStack_7c;
    TStack_60.BaseBitIndex = uStack_80;
    TStack_60._padding_._0_4_ = (uint)local_98.Object;
    TStack_60._padding_._4_4_ = local_98.Object._4_4_;
    this = local_res8;
    local_68 = __return_storage_ptr__;
    TStack_60.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)local_98.SharedReferenceCount.ReferenceController;
    if ((int)uVar11 < (int)uVar12) {
      do {
        lVar9 = (longlong)(int)uVar11;
        lVar2 = *(longlong *)&local_68->Elements;
        uVar16 = *(ulonglong *)(lVar2 + lVar9 * 0x18);
        lVar4 = lVar2 + lVar9 * 0x18;
        pTVar3 = *(TReferenceControllerBase<1> **)(lVar2 + 8 + lVar9 * 0x18);
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar12 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
        uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        uVar12 = (uVar12 >> 0x10 ^ uVar12) & __return_storage_ptr__->HashSize - 1U;
        *(uint *)(lVar4 + 0x14) = uVar12;
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar1;
        }
        uVar16 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar12;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)((longlong)FVar10 + uVar16 * 4);
        *(int *)((longlong)FVar10 + uVar16 * 4) = (int)uVar11;
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
        uVar11 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
        this = local_res8;
      } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
    }
  }
LAB_142bee890:
  uVar12 = *(uint *)&(this->Elements).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
  uVar11 = uVar15;
  if (uVar12 != 0) {
    puVar18 = *(uint **)&(this->Elements).field_0x20;
    uVar11 = (ulonglong)uVar12;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)TStack_60.Array;
    }
    uVar13 = *puVar18;
    uVar16 = uVar15;
    uVar17 = 0;
    uVar14 = 0;
    while (uVar13 == 0) {
      iVar7 = (int)uVar15;
      uVar17 = (int)uVar16 + 0x20;
      uVar16 = (ulonglong)uVar17;
      uVar14 = iVar7 + 1;
      uVar15 = (ulonglong)uVar14;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_142bee8fc;
      uVar13 = puVar18[(longlong)iVar7 + 1];
    }
    uVar6 = -uVar13 & uVar13;
    uVar15 = (ulonglong)uVar6 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar13 = (uVar17 - 1) + (int)lVar4;
    if ((int)uVar12 < (int)uVar13) {
      uVar13 = uVar12;
    }
    uVar11 = (ulonglong)uVar13;
  }
LAB_142bee8fc:
  uStack_7c = (uint)uVar11;
  local_98.SharedReferenceCount.ReferenceController._4_4_ = uVar6;
  local_98.SharedReferenceCount.ReferenceController._0_4_ = uVar14;
  uStack_80 = 0xffffffff;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = (longlong)local_98.SharedReferenceCount.ReferenceController;
  TStack_60._28_4_ = uStack_7c;
  TStack_60.BaseBitIndex = uVar17;
  local_78 = uVar17;
  uStack_74 = uStack_7c;
  local_68 = this;
  TStack_60.CurrentBitIndex = uStack_7c;
  local_88 = (undefined1 *)TStack_60.Array;
  if ((int)uStack_7c < (int)uVar12) {
    do {
      pTVar5 = local_68;
      lVar4 = (longlong)(int)uVar11 * 0x18;
      pTVar3 = *(TReferenceControllerBase<1> **)(lVar4 + 8 + *(longlong *)&local_68->Elements);
      local_98.Object = *(IMessageLogListing **)(lVar4 + *(longlong *)&local_68->Elements);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar17 = ((uint)((ulonglong)local_98.Object >> 0x14) & 0xffff ^
               (uint)((ulonglong)local_98.Object >> 4)) * -0x7a143595;
      uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
      local_98.SharedReferenceCount.ReferenceController = pTVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      iVar7 = FindIndexByHash<TSharedPtr<IMessageLogListing_const_,1>_>
                        (param_1,uVar17 >> 0x10 ^ uVar17,&local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if (iVar7 == -1) {
        Emplace<TSharedPtr<IMessageLogListing,1>_const_&>
                  (__return_storage_ptr__,(TSharedPtr<IMessageLogListing,1> *)&local_res8,
                   (bool *)(*(longlong *)&pTVar5->Elements + lVar4));
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      uVar11 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// Difference @ 142beea40

TSet<TSharedRef<FMessageFilter,1>,DefaultKeyFuncs<TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TSharedRef<FMessageFilter,1>,DefaultKeyFuncs<TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
::Difference(TSet<TSharedRef<FMessageFilter,1>,DefaultKeyFuncs<TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
             *this,TSet<TSharedRef<FMessageFilter,1>,DefaultKeyFuncs<TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
                   *__return_storage_ptr__,
            TSet<TSharedRef<FMessageFilter,1>,DefaultKeyFuncs<TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
            *param_1)

{
  ForElementType<FSetElementId> FVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  FMessageFilter *pFVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ForElementType<FSetElementId> FVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint *puVar18;
  longlong *plVar19;
  FMessageFilter *local_res8;
  TSharedRef<FMessageFilter_const_,1> local_98;
  undefined8 local_88;
  uint uStack_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  FMessageFilter *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  uVar15 = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  uVar6 = 1;
  uVar14 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  uVar12 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  uVar17 = 0;
  local_res8 = (FMessageFilter *)this;
  if (uVar12 == 0) goto LAB_142beece0;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar12);
  uVar13 = 1;
  if (3 < uVar12) {
    uVar11 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((__return_storage_ptr__->HashSize != 0) && ((int)uVar13 <= __return_storage_ptr__->HashSize))
  goto LAB_142beece0;
  __return_storage_ptr__->HashSize = uVar13;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
  }
  if (uVar13 != 0) {
    uVar12 = uVar13;
    if (uVar13 < 2) {
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar12 = 0;
        goto LAB_142beeb1c;
      }
    }
    else {
LAB_142beeb1c:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar12,4);
    }
    if (0 < (int)uVar13) {
      uVar16 = (ulonglong)uVar13;
      uVar11 = uVar15;
      do {
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar1;
        }
        uVar8 = uVar11 & (longlong)(int)uVar13 - 1U;
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)FVar10 + uVar8 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (__return_storage_ptr__->HashSize != 0) {
    uVar12 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
    local_98.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)&(__return_storage_ptr__->Elements).field_0x10;
    local_98.Object._0_4_ = 0;
    local_98.Object._4_4_ = 1;
    local_88._4_4_ = 0;
    uStack_80 = 0;
    uVar11 = uVar15;
    if (uVar12 != 0) {
      puVar18 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)local_98.SharedReferenceCount.ReferenceController;
      }
      uVar13 = *puVar18;
      uVar16 = uVar15;
      while (uVar13 == 0) {
        uStack_80 = (int)uVar16 + 0x20;
        uVar16 = (ulonglong)uStack_80;
        iVar7 = (int)uVar11;
        local_98.Object._0_4_ = iVar7 + 1;
        uVar11 = (ulonglong)(uint)local_98.Object;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 <
            (int)(uint)local_98.Object) goto LAB_142beec09;
        uVar13 = puVar18[(longlong)iVar7 + 1];
      }
      local_98.Object._4_4_ = -uVar13 & uVar13;
      uVar11 = (ulonglong)local_98.Object._4_4_ * 2 + 1;
      lVar4 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_88._4_4_ = (int)lVar4 + -1 + uStack_80;
      uVar11 = (ulonglong)local_88._4_4_;
      if ((int)uVar12 < (int)local_88._4_4_) {
LAB_142beec09:
        uVar11 = (ulonglong)uVar12;
        local_88._4_4_ = uVar12;
      }
    }
    local_88._0_4_ = 0xffffffff;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60.CurrentBitIndex = local_88._4_4_;
    TStack_60._28_4_ = uStack_7c;
    TStack_60.BaseBitIndex = uStack_80;
    TStack_60._padding_._0_4_ = (uint)local_98.Object;
    TStack_60._padding_._4_4_ = local_98.Object._4_4_;
    this = (TSet<TSharedRef<FMessageFilter,1>,DefaultKeyFuncs<TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
            *)local_res8;
    local_68 = (FMessageFilter *)__return_storage_ptr__;
    TStack_60.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)local_98.SharedReferenceCount.ReferenceController;
    if ((int)uVar11 < (int)uVar12) {
      do {
        lVar9 = (longlong)(int)uVar11;
        lVar2 = *(longlong *)&local_68->_padding_;
        uVar16 = *(ulonglong *)(lVar2 + lVar9 * 0x18);
        lVar4 = lVar2 + lVar9 * 0x18;
        pTVar3 = *(TReferenceControllerBase<1> **)(lVar2 + 8 + lVar9 * 0x18);
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar12 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
        uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        uVar12 = (uVar12 >> 0x10 ^ uVar12) & __return_storage_ptr__->HashSize - 1U;
        *(uint *)(lVar4 + 0x14) = uVar12;
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar1;
        }
        uVar16 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar12;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)((longlong)FVar10 + uVar16 * 4);
        *(int *)((longlong)FVar10 + uVar16 * 4) = (int)uVar11;
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
        uVar11 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
        this = (TSet<TSharedRef<FMessageFilter,1>,DefaultKeyFuncs<TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
                *)local_res8;
      } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
    }
  }
LAB_142beece0:
  uVar12 = (((FMessageFilter *)this)->Icon).StyleSetName.ComparisonIndex.Value;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&((FMessageFilter *)this)->_padding_;
  uVar11 = uVar15;
  if (uVar12 != 0) {
    plVar19 = *(longlong **)&(((FMessageFilter *)this)->Name).Flags;
    uVar11 = (ulonglong)uVar12;
    if (plVar19 == (longlong *)0x0) {
      plVar19 = (longlong *)TStack_60.Array;
    }
    uVar13 = (uint)*plVar19;
    uVar16 = uVar15;
    uVar17 = 0;
    uVar14 = 0;
    while (uVar13 == 0) {
      iVar7 = (int)uVar15;
      uVar17 = (int)uVar16 + 0x20;
      uVar16 = (ulonglong)uVar17;
      uVar14 = iVar7 + 1;
      uVar15 = (ulonglong)uVar14;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_142beed4c;
      uVar13 = *(uint *)((longlong)plVar19 + (longlong)iVar7 * 4 + 4);
    }
    uVar6 = -uVar13 & uVar13;
    uVar15 = (ulonglong)uVar6 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar13 = (uVar17 - 1) + (int)lVar4;
    if ((int)uVar12 < (int)uVar13) {
      uVar13 = uVar12;
    }
    uVar11 = (ulonglong)uVar13;
  }
LAB_142beed4c:
  uStack_7c = (uint)uVar11;
  local_98.SharedReferenceCount.ReferenceController._4_4_ = uVar6;
  local_98.SharedReferenceCount.ReferenceController._0_4_ = uVar14;
  uStack_80 = 0xffffffff;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = (longlong)local_98.SharedReferenceCount.ReferenceController;
  TStack_60._28_4_ = uStack_7c;
  TStack_60.BaseBitIndex = uVar17;
  local_78 = uVar17;
  uStack_74 = uStack_7c;
  local_68 = (FMessageFilter *)this;
  TStack_60.CurrentBitIndex = uStack_7c;
  local_88 = (longlong *)TStack_60.Array;
  if ((int)uStack_7c < (int)uVar12) {
    do {
      pFVar5 = local_68;
      lVar4 = (longlong)(int)uVar11 * 0x18;
      pTVar3 = *(TReferenceControllerBase<1> **)(lVar4 + 8 + *(longlong *)&local_68->_padding_);
      local_98.Object = *(FMessageFilter **)(lVar4 + *(longlong *)&local_68->_padding_);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar17 = ((uint)((ulonglong)local_98.Object >> 0x14) & 0xffff ^
               (uint)((ulonglong)local_98.Object >> 4)) * -0x7a143595;
      uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
      local_98.SharedReferenceCount.ReferenceController = pTVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      iVar7 = FindIndexByHash<TSharedRef<FMessageFilter_const_,1>_>
                        (param_1,uVar17 >> 0x10 ^ uVar17,&local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if (iVar7 == -1) {
        Emplace<TSharedRef<FMessageFilter,1>_const_&>
                  (__return_storage_ptr__,(TSharedRef<FMessageFilter,1> *)&local_res8,
                   (bool *)(*(longlong *)&pFVar5->_padding_ + lVar4));
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      uVar11 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// Difference @ 142beee90

TSet<TSharedRef<FTokenizedMessage,1>,DefaultKeyFuncs<TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TSharedRef<FTokenizedMessage,1>,DefaultKeyFuncs<TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
::Difference(TSet<TSharedRef<FTokenizedMessage,1>,DefaultKeyFuncs<TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
             *this,TSet<TSharedRef<FTokenizedMessage,1>,DefaultKeyFuncs<TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
                   *__return_storage_ptr__,
            TSet<TSharedRef<FTokenizedMessage,1>,DefaultKeyFuncs<TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
            *param_1)

{
  ulonglong *puVar1;
  ForElementType<FSetElementId> FVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TSet<TSharedRef<FTokenizedMessage,1>,DefaultKeyFuncs<TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
  *pTVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ForElementType<FSetElementId> FVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint *puVar16;
  TSet<TSharedRef<FTokenizedMessage,1>,DefaultKeyFuncs<TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
  *local_res8;
  undefined1 local_98 [8];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  TSet<TSharedRef<FTokenizedMessage,1>,DefaultKeyFuncs<TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  uVar14 = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  uVar6 = 1;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  uVar13 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  uVar11 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  local_res8 = this;
  if (uVar11 == 0) goto LAB_142bef08a;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar11);
  uVar12 = 1;
  if (3 < uVar11) {
    uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((__return_storage_ptr__->HashSize != 0) && ((int)uVar12 <= __return_storage_ptr__->HashSize))
  goto LAB_142bef08a;
  __return_storage_ptr__->HashSize = uVar12;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
  }
  if (uVar12 != 0) {
    uVar11 = uVar12;
    if (uVar12 < 2) {
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar11 = 0;
        goto LAB_142beef69;
      }
    }
    else {
LAB_142beef69:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar11,4);
    }
    if (0 < (int)uVar12) {
      uVar15 = (ulonglong)uVar12;
      uVar10 = uVar14;
      do {
        FVar2 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        uVar8 = uVar10 & (longlong)(int)uVar12 - 1U;
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)FVar9 + uVar8 * 4) = 0xffffffff;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
  }
  if ((__return_storage_ptr__->HashSize != 0) &&
     (TSparseArray<TSparseSetElement<TSharedRef<FTokenizedMessage,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TConstIterator::TConstIterator((TConstIterator *)local_98,&__return_storage_ptr__->Elements)
     , this = local_res8, TStack_90.CurrentBitIndex < (TStack_90.Array)->NumBits)) {
    do {
      iVar7 = TStack_90.CurrentBitIndex;
      puVar1 = (ulonglong *)(*(longlong *)local_98 + (longlong)TStack_90.CurrentBitIndex * 0x18);
      pTVar3 = *(TReferenceControllerBase<1> **)
                (*(longlong *)local_98 + 8 + (longlong)TStack_90.CurrentBitIndex * 0x18);
      uVar10 = *puVar1;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar11 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
      uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      uVar11 = (uVar11 >> 0x10 ^ uVar11) & __return_storage_ptr__->HashSize - 1U;
      *(uint *)((longlong)puVar1 + 0x14) = uVar11;
      FVar2 = (__return_storage_ptr__->Hash).SecondaryData;
      FVar9 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
      if (FVar2 != (ForElementType<FSetElementId>)0x0) {
        FVar9 = FVar2;
      }
      uVar10 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar11;
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((longlong)FVar9 + uVar10 * 4);
      *(int *)((longlong)FVar9 + uVar10 * 4) = iVar7;
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
      this = local_res8;
    } while (TStack_90.CurrentBitIndex < (TStack_90.Array)->NumBits);
  }
LAB_142bef08a:
  uVar11 = *(uint *)&(this->Elements).field_0x28;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
  uVar10 = uVar14;
  TStack_90.BaseBitIndex = uVar13;
  if (uVar11 != 0) {
    puVar16 = *(uint **)&(this->Elements).field_0x20;
    uVar10 = (ulonglong)uVar11;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)TStack_90.Array;
    }
    uVar12 = *puVar16;
    uVar15 = uVar14;
    TStack_90.BaseBitIndex = 0;
    uVar13 = 0;
    while (uVar12 == 0) {
      iVar7 = (int)uVar14;
      TStack_90.BaseBitIndex = (int)uVar15 + 0x20;
      uVar15 = (ulonglong)(uint)TStack_90.BaseBitIndex;
      uVar13 = iVar7 + 1;
      uVar14 = (ulonglong)uVar13;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
      goto LAB_142bef0f9;
      uVar12 = puVar16[(longlong)iVar7 + 1];
    }
    uVar6 = -uVar12 & uVar12;
    uVar14 = (ulonglong)uVar6 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar12 = (TStack_90.BaseBitIndex - 1U) + (int)lVar4;
    if ((int)uVar11 < (int)uVar12) {
      uVar12 = uVar11;
    }
    uVar10 = (ulonglong)uVar12;
  }
LAB_142bef0f9:
  TStack_90.CurrentBitIndex = (int)uVar10;
  TStack_90._padding_ = CONCAT44(uVar6,uVar13);
  TStack_90.UnvisitedBitMask = 0xffffffff;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = TStack_90._padding_;
  TStack_60._28_4_ = TStack_90.CurrentBitIndex;
  TStack_60.BaseBitIndex = TStack_90.BaseBitIndex;
  TStack_90._28_4_ = TStack_90.CurrentBitIndex;
  local_68 = this;
  TStack_60.Array = TStack_90.Array;
  TStack_60.CurrentBitIndex = TStack_90.CurrentBitIndex;
  if (TStack_90.CurrentBitIndex < (int)uVar11) {
    do {
      pTVar5 = local_68;
      lVar4 = (longlong)(int)uVar10 * 0x18;
      pTVar3 = *(TReferenceControllerBase<1> **)(lVar4 + 8 + *(longlong *)&local_68->Elements);
      local_98 = *(undefined1 (*) [8])(lVar4 + *(longlong *)&local_68->Elements);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar13 = ((uint)((ulonglong)local_98 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_98 >> 4)) *
               -0x7a143595;
      uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
      TStack_90._padding_ = (longlong)pTVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      iVar7 = FindIndexByHash<TSharedRef<FTokenizedMessage_const_,1>_>
                        (param_1,uVar13 >> 0x10 ^ uVar13,
                         (TSharedRef<FTokenizedMessage_const_,1> *)local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if (iVar7 == -1) {
        Emplace<TSharedRef<FTokenizedMessage,1>_const_&>
                  (__return_storage_ptr__,(TSharedRef<FTokenizedMessage,1> *)&local_res8,
                   (bool *)(*(longlong *)&pTVar5->Elements + lVar4));
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      uVar10 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// Empty @ 142bef7d0

void __thiscall
TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Empty
          (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *this,int param_1
          )

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 1;
  if (3 < (uint)param_1) {
    uVar2 = (ulonglong)(((uint)param_1 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar3 & 0x1f);
  }
  piVar1 = &this->HashSize;
  if (((param_1 < 1) || (iVar4 <= *piVar1)) && (*piVar1 <= iVar4)) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,param_1);
  }
  else {
    TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,param_1);
    *piVar1 = iVar4;
    Rehash(this);
  }
  return;
}

// Find @ 142bf4a10

TSharedPtr<IMessageLogListing,1> * __thiscall
TSet<TSharedPtr<IMessageLogListing,1>,DefaultKeyFuncs<TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
::Find(TSet<TSharedPtr<IMessageLogListing,1>,DefaultKeyFuncs<TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
       *this,TSharedPtr<IMessageLogListing_const_,1> *param_1)

{
  IMessageLogListing *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  
  pIVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar5 = ((uint)((ulonglong)pIVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pIVar1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  iVar4 = FindIndexByHash<TSharedPtr<IMessageLogListing_const_,1>_>
                    (this,uVar5 >> 0x10 ^ uVar5,param_1);
  if (iVar4 != -1) {
    lVar3 = *(longlong *)&this->Elements;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return (TSharedPtr<IMessageLogListing,1> *)(lVar3 + (longlong)iVar4 * 0x18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (TSharedPtr<IMessageLogListing,1> *)0x0;
}

// Find @ 142bf4ac0

TSharedRef<FMessageFilter,1> * __thiscall
TSet<TSharedRef<FMessageFilter,1>,DefaultKeyFuncs<TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
::Find(TSet<TSharedRef<FMessageFilter,1>,DefaultKeyFuncs<TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
       *this,TSharedRef<FMessageFilter_const_,1> *param_1)

{
  FMessageFilter *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  
  pFVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar5 = ((uint)((ulonglong)pFVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  iVar4 = FindIndexByHash<TSharedRef<FMessageFilter_const_,1>_>(this,uVar5 >> 0x10 ^ uVar5,param_1);
  if (iVar4 != -1) {
    lVar3 = *(longlong *)&this->Elements;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return (TSharedRef<FMessageFilter,1> *)(lVar3 + (longlong)iVar4 * 0x18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (TSharedRef<FMessageFilter,1> *)0x0;
}

// Find @ 142bf4b70

TSharedRef<FTokenizedMessage,1> * __thiscall
TSet<TSharedRef<FTokenizedMessage,1>,DefaultKeyFuncs<TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
::Find(TSet<TSharedRef<FTokenizedMessage,1>,DefaultKeyFuncs<TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
       *this,TSharedRef<FTokenizedMessage_const_,1> *param_1)

{
  FTokenizedMessage *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  
  pFVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar5 = ((uint)((ulonglong)pFVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  iVar4 = FindIndexByHash<TSharedRef<FTokenizedMessage_const_,1>_>
                    (this,uVar5 >> 0x10 ^ uVar5,param_1);
  if (iVar4 != -1) {
    lVar3 = *(longlong *)&this->Elements;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return (TSharedRef<FTokenizedMessage,1> *)(lVar3 + (longlong)iVar4 * 0x18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (TSharedRef<FTokenizedMessage,1> *)0x0;
}

// Rehash @ 142c20a80

void __thiscall
TSet<TTuple<ITableRow_const_*,TSharedPtr<IMessageLogListing,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<ITableRow_const_*,TSharedPtr<IMessageLogListing,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong *puVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_142c20b5c;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_142c20b5c:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar8 = (ulonglong *)
                 ((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0x1c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 3) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 142c20c40

void __thiscall
TSet<TTuple<ITableRow_const_*,TSharedRef<FMessageFilter,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<ITableRow_const_*,TSharedRef<FMessageFilter,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong *puVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_142c20d1c;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_142c20d1c:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar8 = (ulonglong *)
                 ((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0x1c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 3) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 142c20e00

void __thiscall
TSet<TTuple<ITableRow_const_*,TSharedRef<FTokenizedMessage,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<ITableRow_const_*,TSharedRef<FTokenizedMessage,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong *puVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_142c20edc;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_142c20edc:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar8 = (ulonglong *)
                 ((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0x1c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 3) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 142c20fc0

void __thiscall
TSet<TTuple<TSharedPtr<IMessageLogListing,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageLogListing,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TSharedPtr<IMessageLogListing,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageLogListing,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  uint *puVar11;
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
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_40.Array;
      }
      uVar9 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar9 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar7 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_142c21097;
        uVar9 = puVar11[lVar7 + 1];
      }
      uStack_64 = -uVar9 & uVar9;
      uVar8 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_54 = (int)lVar7 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_142c21097:
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
        lVar6 = (longlong)local_40.CurrentBitIndex;
        lVar3 = *(longlong *)&this->Elements;
        uVar8 = *(ulonglong *)(lVar3 + lVar6 * 0x28);
        lVar7 = lVar3 + lVar6 * 0x28;
        pTVar4 = *(TReferenceControllerBase<1> **)(lVar3 + 8 + lVar6 * 0x28);
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar9 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        uVar9 = (uVar9 >> 0x10 ^ uVar9) & *piVar1 - 1U;
        *(uint *)(lVar7 + 0x24) = uVar9;
        FVar5 = (this->Hash).SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar5 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar5;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
        *(int *)((longlong)FVar10 + uVar8 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 142c211a0

void __thiscall
TSet<TTuple<TSharedRef<FMessageFilter,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FMessageFilter,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TSharedRef<FMessageFilter,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FMessageFilter,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  uint *puVar11;
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
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_40.Array;
      }
      uVar9 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar9 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar7 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_142c21277;
        uVar9 = puVar11[lVar7 + 1];
      }
      uStack_64 = -uVar9 & uVar9;
      uVar8 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_54 = (int)lVar7 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_142c21277:
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
        lVar6 = (longlong)local_40.CurrentBitIndex;
        lVar3 = *(longlong *)&this->Elements;
        uVar8 = *(ulonglong *)(lVar3 + lVar6 * 0x28);
        lVar7 = lVar3 + lVar6 * 0x28;
        pTVar4 = *(TReferenceControllerBase<1> **)(lVar3 + 8 + lVar6 * 0x28);
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar9 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        uVar9 = (uVar9 >> 0x10 ^ uVar9) & *piVar1 - 1U;
        *(uint *)(lVar7 + 0x24) = uVar9;
        FVar5 = (this->Hash).SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar5 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar5;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
        *(int *)((longlong)FVar10 + uVar8 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 142c21380

void __thiscall
TSet<TTuple<TSharedRef<FTokenizedMessage,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FTokenizedMessage,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TSharedRef<FTokenizedMessage,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FTokenizedMessage,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  uint *puVar11;
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
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_40.Array;
      }
      uVar9 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar9 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar7 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_142c21457;
        uVar9 = puVar11[lVar7 + 1];
      }
      uStack_64 = -uVar9 & uVar9;
      uVar8 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_54 = (int)lVar7 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_142c21457:
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
        lVar6 = (longlong)local_40.CurrentBitIndex;
        lVar3 = *(longlong *)&this->Elements;
        uVar8 = *(ulonglong *)(lVar3 + lVar6 * 0x28);
        lVar7 = lVar3 + lVar6 * 0x28;
        pTVar4 = *(TReferenceControllerBase<1> **)(lVar3 + 8 + lVar6 * 0x28);
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar9 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        uVar9 = (uVar9 >> 0x10 ^ uVar9) & *piVar1 - 1U;
        *(uint *)(lVar7 + 0x24) = uVar9;
        FVar5 = (this->Hash).SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar5 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar5;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
        *(int *)((longlong)FVar10 + uVar8 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 142c21560

void __thiscall
TSet<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingModel,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingModel,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  undefined8 *puVar9;
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
      uVar5 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_142c21637;
        uVar5 = puVar10[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_142c21637:
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
        puVar9 = (undefined8 *)
                 ((longlong)local_40.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar3 = *puVar9;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar9 + 0x1c) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar9 + 3) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 142c21700

void __thiscall
TSet<TTuple<FName,TSharedPtr<FMessageLogListingViewModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,TSharedPtr<FMessageLogListingViewModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  undefined8 *puVar9;
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
      uVar5 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_142c217d7;
        uVar5 = puVar10[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_142c217d7:
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
        puVar9 = (undefined8 *)
                 ((longlong)local_40.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar3 = *puVar9;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar9 + 0x1c) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar9 + 3) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 142c218a0

void __thiscall
TSet<TTuple<FName,TSharedRef<SWidget,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<SWidget,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,TSharedRef<SWidget,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<SWidget,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  undefined8 *puVar9;
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
      uVar5 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_142c21977;
        uVar5 = puVar10[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_142c21977:
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
        puVar9 = (undefined8 *)
                 ((longlong)local_40.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar3 = *puVar9;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar9 + 0x1c) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar9 + 3) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 142c21a40

void __thiscall
TSet<TSharedPtr<IMessageLogListing,1>,DefaultKeyFuncs<TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TSharedPtr<IMessageLogListing,1>,DefaultKeyFuncs<TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  uint *puVar11;
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
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_40.Array;
      }
      uVar9 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar9 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar7 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_142c21b17;
        uVar9 = puVar11[lVar7 + 1];
      }
      uStack_64 = -uVar9 & uVar9;
      uVar8 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_54 = (int)lVar7 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_142c21b17:
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
        lVar6 = (longlong)local_40.CurrentBitIndex;
        lVar3 = *(longlong *)&this->Elements;
        uVar8 = *(ulonglong *)(lVar3 + lVar6 * 0x18);
        lVar7 = lVar3 + lVar6 * 0x18;
        pTVar4 = *(TReferenceControllerBase<1> **)(lVar3 + 8 + lVar6 * 0x18);
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar9 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        uVar9 = (uVar9 >> 0x10 ^ uVar9) & *piVar1 - 1U;
        *(uint *)(lVar7 + 0x14) = uVar9;
        FVar5 = (this->Hash).SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar5 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar5;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
        *(int *)((longlong)FVar10 + uVar8 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 142c21c20

void __thiscall
TSet<TSharedRef<FMessageFilter,1>,DefaultKeyFuncs<TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TSharedRef<FMessageFilter,1>,DefaultKeyFuncs<TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  uint *puVar11;
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
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_40.Array;
      }
      uVar9 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar9 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar7 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_142c21cf7;
        uVar9 = puVar11[lVar7 + 1];
      }
      uStack_64 = -uVar9 & uVar9;
      uVar8 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_54 = (int)lVar7 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_142c21cf7:
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
        lVar6 = (longlong)local_40.CurrentBitIndex;
        lVar3 = *(longlong *)&this->Elements;
        uVar8 = *(ulonglong *)(lVar3 + lVar6 * 0x18);
        lVar7 = lVar3 + lVar6 * 0x18;
        pTVar4 = *(TReferenceControllerBase<1> **)(lVar3 + 8 + lVar6 * 0x18);
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar9 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        uVar9 = (uVar9 >> 0x10 ^ uVar9) & *piVar1 - 1U;
        *(uint *)(lVar7 + 0x14) = uVar9;
        FVar5 = (this->Hash).SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar5 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar5;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
        *(int *)((longlong)FVar10 + uVar8 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 142c21e00

void __thiscall
TSet<TSharedRef<FTokenizedMessage,1>,DefaultKeyFuncs<TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TSharedRef<FTokenizedMessage,1>,DefaultKeyFuncs<TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
         *this)

{
  ulonglong *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  longlong *local_38;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if ((this->HashSize != 0) &&
     (TSparseArray<TSparseSetElement<TSharedRef<FTokenizedMessage,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TConstIterator::TConstIterator((TConstIterator *)&local_38,&this->Elements),
     local_30.CurrentBitIndex < (local_30.Array)->NumBits)) {
    do {
      iVar4 = local_30.CurrentBitIndex;
      puVar1 = (ulonglong *)(*local_38 + (longlong)local_30.CurrentBitIndex * 0x18);
      pTVar2 = *(TReferenceControllerBase<1> **)
                (*local_38 + 8 + (longlong)local_30.CurrentBitIndex * 0x18);
      uVar5 = *puVar1;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar6 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      uVar6 = (uVar6 >> 0x10 ^ uVar6) & this->HashSize - 1U;
      *(uint *)((longlong)puVar1 + 0x14) = uVar6;
      FVar3 = (this->Hash).SecondaryData;
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar7 = FVar3;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = iVar4;
      local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
  }
  return;
}

// Rehash @ 142c21f30

void __thiscall
TSet<TSharedRef<FTokenizedMessage,1>,FTokenizedMessageKeyFunc,FDefaultSetAllocator>::Rehash
          (TSet<TSharedRef<FTokenizedMessage,1>,FTokenizedMessageKeyFunc,FDefaultSetAllocator> *this
          )

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  uint uVar5;
  FText *this_00;
  FString *pFVar6;
  int iVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  ForElementType<FSetElementId> FVar10;
  FText local_58;
  longlong *local_48;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if ((this->HashSize != 0) &&
     (TSparseArray<TSparseSetElement<TSharedRef<FTokenizedMessage,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TConstIterator::TConstIterator((TConstIterator *)&local_48,&this->Elements),
     local_40.CurrentBitIndex < (local_40.Array)->NumBits)) {
    do {
      iVar4 = local_40.CurrentBitIndex;
      lVar1 = *local_48 + (longlong)local_40.CurrentBitIndex * 0x18;
      this_00 = FTokenizedMessage::ToText
                          (*(FTokenizedMessage **)
                            (*local_48 + (longlong)local_40.CurrentBitIndex * 0x18),&local_58);
      pFVar6 = FText::ToString(this_00);
      iVar2 = (pFVar6->Data).ArrayNum;
      iVar7 = iVar2 + -1;
      if (iVar2 == 0) {
        pwVar9 = L"";
        iVar7 = 0;
      }
      else {
        pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar9);
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)(lVar1 + 0x14) = uVar5;
      FVar3 = (this->Hash).SecondaryData;
      FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar10 = FVar3;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
      *(int *)((longlong)FVar10 + uVar8 * 4) = iVar4;
      local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
  }
  return;
}

// Remove @ 142c22230

int __thiscall
TSet<TSharedPtr<IMessageLogListing,1>,DefaultKeyFuncs<TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
::Remove(TSet<TSharedPtr<IMessageLogListing,1>,DefaultKeyFuncs<TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
         *this,TSharedPtr<IMessageLogListing_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IMessageLogListing *pIVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    pIVar2 = param_1->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar4 = ((uint)((ulonglong)pIVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pIVar2 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    iVar3 = RemoveImpl<TSharedPtr<IMessageLogListing_const_,1>_>(this,uVar4 >> 0x10 ^ uVar4,param_1)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return iVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return 0;
}

// Remove @ 142c222d0

int __thiscall
TSet<TSharedRef<FMessageFilter,1>,DefaultKeyFuncs<TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
::Remove(TSet<TSharedRef<FMessageFilter,1>,DefaultKeyFuncs<TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
         *this,TSharedRef<FMessageFilter_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FMessageFilter *pFVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar2 = param_1->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar4 = ((uint)((ulonglong)pFVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar2 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    iVar3 = RemoveImpl<TSharedRef<FMessageFilter_const_,1>_>(this,uVar4 >> 0x10 ^ uVar4,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return iVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return 0;
}

// Remove @ 142c22370

int __thiscall
TSet<TSharedRef<FTokenizedMessage,1>,DefaultKeyFuncs<TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
::Remove(TSet<TSharedRef<FTokenizedMessage,1>,DefaultKeyFuncs<TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
         *this,TSharedRef<FTokenizedMessage_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FTokenizedMessage *pFVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar2 = param_1->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar4 = ((uint)((ulonglong)pFVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar2 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    iVar3 = RemoveImpl<TSharedRef<FTokenizedMessage_const_,1>_>(this,uVar4 >> 0x10 ^ uVar4,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return iVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return 0;
}

// RemoveByIndex @ 142c224d0

void __thiscall
TSet<TTuple<TSharedPtr<IMessageLogListing,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageLogListing,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
::RemoveByIndex(TSet<TTuple<TSharedPtr<IMessageLogListing,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageLogListing,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<FSetElementId> FVar5;
  undefined1 *puVar6;
  int *piVar7;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->Elements).field_0x28)) {
    puVar6 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar6 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0)
    goto LAB_142c22542;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_142c22542:
  lVar1 = *(longlong *)&this->Elements + (longlong)param_1 * 0x28;
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  piVar7 = (int *)((longlong)FVar5 + (longlong)*(int *)(lVar1 + 0x24) * 4);
  while( true ) {
    iVar2 = *piVar7;
    if (iVar2 == -1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iVar2 == param_1) break;
    piVar7 = (int *)(*(longlong *)&this->Elements + (longlong)iVar2 * 0x28 + 0x20);
  }
  *piVar7 = *(int *)(lVar1 + 0x20);
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<IMessageLogListing,1>,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this->Elements,param_1,1);
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this,param_1,1);
  return;
}

// RemoveByIndex @ 142c225f0

void __thiscall
TSet<TTuple<TSharedRef<FMessageFilter,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FMessageFilter,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
::RemoveByIndex(TSet<TTuple<TSharedRef<FMessageFilter,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FMessageFilter,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<FSetElementId> FVar5;
  undefined1 *puVar6;
  int *piVar7;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->Elements).field_0x28)) {
    puVar6 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar6 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0)
    goto LAB_142c22662;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_142c22662:
  lVar1 = *(longlong *)&this->Elements + (longlong)param_1 * 0x28;
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  piVar7 = (int *)((longlong)FVar5 + (longlong)*(int *)(lVar1 + 0x24) * 4);
  while( true ) {
    iVar2 = *piVar7;
    if (iVar2 == -1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iVar2 == param_1) break;
    piVar7 = (int *)(*(longlong *)&this->Elements + (longlong)iVar2 * 0x28 + 0x20);
  }
  *piVar7 = *(int *)(lVar1 + 0x20);
  TSparseArray<TSparseSetElement<TTuple<TSharedRef<FMessageFilter,1>,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this->Elements,param_1,1);
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this,param_1,1);
  return;
}

// RemoveByIndex @ 142c22710

void __thiscall
TSet<TTuple<TSharedRef<FTokenizedMessage,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FTokenizedMessage,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
::RemoveByIndex(TSet<TTuple<TSharedRef<FTokenizedMessage,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FTokenizedMessage,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<FSetElementId> FVar5;
  undefined1 *puVar6;
  int *piVar7;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->Elements).field_0x28)) {
    puVar6 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar6 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0)
    goto LAB_142c22782;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_142c22782:
  lVar1 = *(longlong *)&this->Elements + (longlong)param_1 * 0x28;
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  piVar7 = (int *)((longlong)FVar5 + (longlong)*(int *)(lVar1 + 0x24) * 4);
  while( true ) {
    iVar2 = *piVar7;
    if (iVar2 == -1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iVar2 == param_1) break;
    piVar7 = (int *)(*(longlong *)&this->Elements + (longlong)iVar2 * 0x28 + 0x20);
  }
  *piVar7 = *(int *)(lVar1 + 0x20);
  TSparseArray<TSparseSetElement<TTuple<TSharedRef<FTokenizedMessage,1>,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this->Elements,param_1,1);
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this,param_1,1);
  return;
}

// UnhashElements @ 142c292b0

void __thiscall
TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::UnhashElements
          (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *this)

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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_142c293ab;
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
LAB_142c293ab:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_142c294a0;
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
LAB_142c294a0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)*(int *)(*(longlong *)&this->Elements + 8 + (longlong)local_60.CurrentBitIndex * 0xc)
     * 4) = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 142c29540

void __thiscall
TSet<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingModel,1>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingModel,1>,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_142c2963b;
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
LAB_142c2963b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_142c29730;
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
LAB_142c29730:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FMessageLogListingModel,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// UnhashElements @ 142c297d0

void __thiscall
TSet<TSharedPtr<IMessageLogListing,1>,DefaultKeyFuncs<TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TSharedPtr<IMessageLogListing,1>,DefaultKeyFuncs<TSharedPtr<IMessageLogListing,1>,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_142c298cb;
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
LAB_142c298cb:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_142c299c0;
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
LAB_142c299c0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TSharedPtr<IMessageLogListing,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0x14 + (longlong)local_60.CurrentBitIndex * 0x18) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 142c29a60

void __thiscall
TSet<TSharedRef<FMessageFilter,1>,DefaultKeyFuncs<TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TSharedRef<FMessageFilter,1>,DefaultKeyFuncs<TSharedRef<FMessageFilter,1>,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_142c29b5b;
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
LAB_142c29b5b:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_142c29c50;
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
LAB_142c29c50:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TSharedRef<FMessageFilter,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0x14 + (longlong)local_60.CurrentBitIndex * 0x18) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 142c29cf0

void __thiscall
TSet<TSharedRef<FTokenizedMessage,1>,DefaultKeyFuncs<TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TSharedRef<FTokenizedMessage,1>,DefaultKeyFuncs<TSharedRef<FTokenizedMessage,1>,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_142c29deb;
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
LAB_142c29deb:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_142c29ee0;
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
LAB_142c29ee0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TSharedRef<FTokenizedMessage,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0x14 + (longlong)local_60.CurrentBitIndex * 0x18) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

