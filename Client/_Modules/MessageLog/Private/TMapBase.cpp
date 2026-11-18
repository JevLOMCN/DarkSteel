// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 8

// Find @ 142bf4480

TSharedPtr<IMessageLogListing,1> * __thiscall
TMapBase<ITableRow_const_*,TSharedPtr<IMessageLogListing,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<IMessageLogListing,1>,0>_>
::Find(TMapBase<ITableRow_const_*,TSharedPtr<IMessageLogListing,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<IMessageLogListing,1>,0>_>
       *this,ITableRow *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedPtr<IMessageLogListing,1> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((ITableRow *)*plVar2 == param_1) {
          pTVar4 = (TSharedPtr<IMessageLogListing,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSharedPtr<IMessageLogListing,1> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedPtr<IMessageLogListing,1> *)0x0;
}

// Find @ 142bf4520

TSharedRef<FMessageFilter,1> * __thiscall
TMapBase<ITableRow_const_*,TSharedRef<FMessageFilter,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<FMessageFilter,1>,0>_>
::Find(TMapBase<ITableRow_const_*,TSharedRef<FMessageFilter,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<FMessageFilter,1>,0>_>
       *this,ITableRow *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedRef<FMessageFilter,1> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((ITableRow *)*plVar2 == param_1) {
          pTVar4 = (TSharedRef<FMessageFilter,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSharedRef<FMessageFilter,1> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedRef<FMessageFilter,1> *)0x0;
}

// Find @ 142bf45c0

TSharedRef<FTokenizedMessage,1> * __thiscall
TMapBase<ITableRow_const_*,TSharedRef<FTokenizedMessage,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<FTokenizedMessage,1>,0>_>
::Find(TMapBase<ITableRow_const_*,TSharedRef<FTokenizedMessage,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<FTokenizedMessage,1>,0>_>
       *this,ITableRow *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedRef<FTokenizedMessage,1> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((ITableRow *)*plVar2 == param_1) {
          pTVar4 = (TSharedRef<FTokenizedMessage,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSharedRef<FTokenizedMessage,1> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedRef<FTokenizedMessage,1> *)0x0;
}

// Find @ 142bf4660

TSharedRef<ITableRow,1> * __thiscall
TMapBase<TSharedPtr<IMessageLogListing,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageLogListing,1>,TSharedRef<ITableRow,1>,0>_>
::Find(TMapBase<TSharedPtr<IMessageLogListing,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageLogListing,1>,TSharedRef<ITableRow,1>,0>_>
       *this,TSharedPtr<IMessageLogListing_const_,1> *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<IMessageLogListing_const_,1> local_18;
  
  local_18.Object = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = ((uint)((ulonglong)local_18.Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_18.Object >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  local_18.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  iVar2 = TSet<TTuple<TSharedPtr<IMessageLogListing,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageLogListing,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedPtr<IMessageLogListing_const_,1>_>
                    (&this->Pairs,uVar3 >> 0x10 ^ uVar3,&local_18);
  if (iVar2 == -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  }
  else {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar2 * 0x28;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    if (lVar1 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return (TSharedRef<ITableRow,1> *)(lVar1 + 0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TSharedRef<ITableRow,1> *)0x0;
}

// Find @ 142bf4730

TSharedRef<ITableRow,1> * __thiscall
TMapBase<TSharedRef<FMessageFilter,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<FMessageFilter,1>,TSharedRef<ITableRow,1>,0>_>
::Find(TMapBase<TSharedRef<FMessageFilter,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<FMessageFilter,1>,TSharedRef<ITableRow,1>,0>_>
       *this,TSharedRef<FMessageFilter_const_,1> *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FMessageFilter_const_,1> local_18;
  
  local_18.Object = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = ((uint)((ulonglong)local_18.Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_18.Object >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  local_18.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  iVar2 = TSet<TTuple<TSharedRef<FMessageFilter,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FMessageFilter,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedRef<FMessageFilter_const_,1>_>
                    (&this->Pairs,uVar3 >> 0x10 ^ uVar3,&local_18);
  if (iVar2 == -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  }
  else {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar2 * 0x28;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    if (lVar1 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return (TSharedRef<ITableRow,1> *)(lVar1 + 0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TSharedRef<ITableRow,1> *)0x0;
}

// Find @ 142bf4800

TSharedRef<ITableRow,1> * __thiscall
TMapBase<TSharedRef<FTokenizedMessage,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<FTokenizedMessage,1>,TSharedRef<ITableRow,1>,0>_>
::Find(TMapBase<TSharedRef<FTokenizedMessage,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<FTokenizedMessage,1>,TSharedRef<ITableRow,1>,0>_>
       *this,TSharedRef<FTokenizedMessage_const_,1> *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FTokenizedMessage_const_,1> local_18;
  
  local_18.Object = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = ((uint)((ulonglong)local_18.Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_18.Object >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  local_18.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  iVar2 = TSet<TTuple<TSharedRef<FTokenizedMessage,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FTokenizedMessage,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedRef<FTokenizedMessage_const_,1>_>
                    (&this->Pairs,uVar3 >> 0x10 ^ uVar3,&local_18);
  if (iVar2 == -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  }
  else {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar2 * 0x28;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    if (lVar1 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return (TSharedRef<ITableRow,1> *)(lVar1 + 0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TSharedRef<ITableRow,1> *)0x0;
}

// Find @ 142bf48d0

TSharedPtr<FMessageLogListingModel,1> * __thiscall
TMapBase<FName,TSharedPtr<FMessageLogListingModel,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingModel,1>,0>_>
::Find(TMapBase<FName,TSharedPtr<FMessageLogListingModel,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingModel,1>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedPtr<FMessageLogListingModel,1> *pTVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pTVar4 = (TSharedPtr<FMessageLogListingModel,1> *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pTVar4 = (TSharedPtr<FMessageLogListingModel,1> *)(pFVar2 + 1);
          }
          return pTVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TSharedPtr<FMessageLogListingModel,1> *)0x0;
}

// Find @ 142bf4970

TSharedPtr<FMessageLogListingViewModel,1> * __thiscall
TMapBase<FName,TSharedPtr<FMessageLogListingViewModel,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>_>
::Find(TMapBase<FName,TSharedPtr<FMessageLogListingViewModel,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedPtr<FMessageLogListingViewModel,1> *pTVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pTVar4 = (TSharedPtr<FMessageLogListingViewModel,1> *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pTVar4 = (TSharedPtr<FMessageLogListingViewModel,1> *)(pFVar2 + 1);
          }
          return pTVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TSharedPtr<FMessageLogListingViewModel,1> *)0x0;
}

