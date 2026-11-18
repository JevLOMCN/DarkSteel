// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 29

// FindOrAddImpl<unsigned_int_const_&> @ 14a953130

FExtendedImageDesc * __thiscall
TMapBase<unsigned_int,UE::Mutable::Private::FExtendedImageDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Mutable::Private::FExtendedImageDesc,0>_>
::FindOrAddImpl<unsigned_int_const_&>
          (TMapBase<unsigned_int,UE::Mutable::Private::FExtendedImageDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Mutable::Private::FExtendedImageDesc,0>_>
           *this,uint param_1,uint *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  uint *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x28;
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0x28) == *param_2) {
          if (lVar3 != 0) goto LAB_14a9531c2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x20);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned_int,UE::Mutable::Private::FExtendedImageDesc>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Mutable::Private::FExtendedImageDesc,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
LAB_14a9531c2:
  return (FExtendedImageDesc *)(lVar3 + 8);
}

// FindOrAddImpl<UE::Mutable::Private::FCacheAddress_const_&> @ 14a9531e0

uchar * __thiscall
TMapBase<UE::Mutable::Private::FCacheAddress,unsigned_char,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,unsigned_char,0>_>
::FindOrAddImpl<UE::Mutable::Private::FCacheAddress_const_&>
          (TMapBase<UE::Mutable::Private::FCacheAddress,unsigned_char,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,unsigned_char,0>_>
           *this,uint param_1,FCacheAddress *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FCacheAddress *local_res20;
  
  iVar1 = TSet<TTuple<UE::Mutable::Private::FCacheAddress,unsigned_char>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,unsigned_char,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
          ::FindIndexByHash<UE::Mutable::Private::FCacheAddress>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x14, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<UE::Mutable::Private::FCacheAddress,unsigned_char>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,unsigned_char,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
    ::EmplaceByHash<TKeyInitializer<UE::Mutable::Private::FCacheAddress_const_&>_>
              (&this->Pairs,(uint)local_res8,
               (TKeyInitializer<UE::Mutable::Private::FCacheAddress_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x14;
  }
  return (uchar *)(lVar2 + 8);
}

// FindOrAddImpl<UE::Mutable::Private::FCacheAddress_const_&> @ 14a953260

FOpExecutionData * __thiscall
TMapBase<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>_>
::FindOrAddImpl<UE::Mutable::Private::FCacheAddress_const_&>
          (TMapBase<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>_>
           *this,uint param_1,FCacheAddress *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FCacheAddress *local_res20;
  
  iVar1 = TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
          ::FindIndexByHash<UE::Mutable::Private::FCacheAddress>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x18, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
    ::EmplaceByHash<TKeyInitializer<UE::Mutable::Private::FCacheAddress_const_&>_>
              (&this->Pairs,(uint)local_res8,
               (TKeyInitializer<UE::Mutable::Private::FCacheAddress_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
  }
  return (FOpExecutionData *)(lVar2 + 8);
}

// Find @ 14a9a3330

FOpExecutionData * __thiscall
TMapBase<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>_>
::Find(TMapBase<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>_>
       *this,FCacheAddress *param_1)

{
  longlong lVar1;
  int iVar2;
  FOpExecutionData *pFVar3;
  uint uVar4;
  
  uVar4 = param_1->At;
  uVar4 = (uVar4 >> 2) + 0x9e3779b9 + (uint)param_1->ExecutionIndex + uVar4 * 0x40 ^ uVar4;
  uVar4 = (uVar4 >> 2) + param_1->ExecutionOptions + 0x9e3779b9 + uVar4 * 0x40 ^ uVar4;
  iVar2 = TSet<TTuple<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,UE::Mutable::Private::FProgramCache::FOpExecutionData,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
          ::FindIndexByHash<UE::Mutable::Private::FCacheAddress>
                    (&this->Pairs,(uVar4 >> 2) + param_1->Type + 0x9e3779b9 + uVar4 * 0x40 ^ uVar4,
                     param_1);
  if (iVar2 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar2 * 0x18;
    pFVar3 = (FOpExecutionData *)0x0;
    if (lVar1 != 0) {
      pFVar3 = (FOpExecutionData *)(lVar1 + 8);
    }
    return pFVar3;
  }
  return (FOpExecutionData *)0x0;
}

// Find @ 14a9a33e0

int * __thiscall
TMapBase<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>_>
::Find(TMapBase<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>_>
       *this,TSharedPtr<UE::Mutable::Private::FResource_const_,1> *param_1)

{
  int iVar1;
  uint uVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TSharedPtr<UE::Mutable::Private::FResource_const_,1> local_18;
  
  local_18.Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar2 = ((uint)((ulonglong)local_18.Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_18.Object >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  local_18.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  iVar1 = TSet<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
          ::FindIndexByHash<TSharedPtr<UE::Mutable::Private::FResource_const_,1>_>
                    (&this->Pairs,uVar2 >> 0x10 ^ uVar2,&local_18);
  if (iVar1 == -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  }
  else {
    lVar4 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    if (lVar4 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return (int *)(lVar4 + 0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return (int *)0x0;
}

// Find @ 14a9a34b0

TVector4<float> * __thiscall
TMapBase<FName,UE::Math::TVector4<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector4<float>,0>_>
::Find(TMapBase<FName,UE::Math::TVector4<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector4<float>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
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
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FName *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = pFVar4 + 2;
          }
          return (TVector4<float> *)pFVar2;
        }
        uVar1 = pFVar4[4].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TVector4<float> *)0x0;
}

// Find @ 14a9a3550

TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> * __thiscall
TMapBase<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,0>_>
::Find(TMapBase<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *pTVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x28;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x28) == param_1) {
          pTVar5 = (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)0x0;
          if (lVar1 != 0) {
            pTVar5 = (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)
                     (lVar1 + 8);
          }
          return pTVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x20);
      } while (iVar4 != -1);
    }
  }
  return (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)0x0;
}

// FindChecked @ 14a9a3f90

FEntry * __thiscall
TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>_>
::FindChecked(TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>_>
              *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FEntry *pFVar4;
  uint *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (uint *)0x0) {
            return (FEntry *)(puVar5 + 2);
          }
          break;
        }
        uVar3 = puVar5[10];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FEntry *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FEntry *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14a9a4030

FEntry * __thiscall
TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,0>_>
::FindChecked(TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,0>_>
              *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FEntry *pFVar4;
  uint *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (uint *)0x0) {
            return (FEntry *)(puVar5 + 2);
          }
          break;
        }
        uVar3 = puVar5[10];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FEntry *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FEntry *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14a9a40d0

FEntry * __thiscall
TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>_>
::FindChecked(TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>_>
              *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FEntry *pFVar4;
  uint *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (uint *)0x0) {
            return (FEntry *)(puVar5 + 2);
          }
          break;
        }
        uVar3 = puVar5[10];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FEntry *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FEntry *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14a9a4170

FExtendedImageDesc * __thiscall
TMapBase<unsigned_int,UE::Mutable::Private::FExtendedImageDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Mutable::Private::FExtendedImageDesc,0>_>
::FindChecked(TMapBase<unsigned_int,UE::Mutable::Private::FExtendedImageDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Mutable::Private::FExtendedImageDesc,0>_>
              *this,uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FExtendedImageDesc *pFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x28;
        if (*(uint *)(lVar2 + (longlong)iVar5 * 0x28) == param_1) {
          if (lVar1 != 0) {
            return (FExtendedImageDesc *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x20);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FExtendedImageDesc *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FExtendedImageDesc *)(*pcVar3)();
  return pFVar6;
}

// FindChecked @ 14a9a4210

FIndex2i * __thiscall
TMapBase<unsigned___int64,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::Geometry::FIndex2i,0>_>
::FindChecked(TMapBase<unsigned___int64,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::Geometry::FIndex2i,0>_>
              *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FIndex2i *pFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(ulong64 *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (FIndex2i *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar4) {
    return (FIndex2i *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FIndex2i *)(*pcVar3)();
  return pFVar6;
}

// Find @ 14aac8600

int * __thiscall
TMapBase<void_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,int,0>_>::
Find(TMapBase<void_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,int,0>_>
     *this,void *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int *piVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(void **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          piVar5 = (int *)0x0;
          if (lVar1 != 0) {
            piVar5 = (int *)(lVar1 + 8);
          }
          return piVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (int *)0x0;
}

// Find @ 14aac86b0

uchar * __thiscall
TMapBase<UE::Mutable::Private::FCacheAddress,unsigned_char,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,unsigned_char,0>_>
::Find(TMapBase<UE::Mutable::Private::FCacheAddress,unsigned_char,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,unsigned_char,0>_>
       *this,FCacheAddress *param_1)

{
  longlong lVar1;
  int iVar2;
  uchar *puVar3;
  uint uVar4;
  
  uVar4 = param_1->At;
  uVar4 = (uVar4 >> 2) + 0x9e3779b9 + (uint)param_1->ExecutionIndex + uVar4 * 0x40 ^ uVar4;
  uVar4 = (uVar4 >> 2) + param_1->ExecutionOptions + 0x9e3779b9 + uVar4 * 0x40 ^ uVar4;
  iVar2 = TSet<TTuple<UE::Mutable::Private::FCacheAddress,unsigned_char>,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddress,unsigned_char,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
          ::FindIndexByHash<UE::Mutable::Private::FCacheAddress>
                    (&this->Pairs,(uVar4 >> 2) + param_1->Type + 0x9e3779b9 + uVar4 * 0x40 ^ uVar4,
                     param_1);
  if (iVar2 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar2 * 0x14;
    puVar3 = (uchar *)0x0;
    if (lVar1 != 0) {
      puVar3 = (uchar *)(lVar1 + 8);
    }
    return puVar3;
  }
  return (uchar *)0x0;
}

// FindChecked @ 14aac8de0

int * __thiscall
TMapBase<UE::Mutable::Private::FCacheAddressInline,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddressInline,int,0>_>
::FindChecked(TMapBase<UE::Mutable::Private::FCacheAddressInline,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddressInline,int,0>_>
              *this,FCacheAddressInline *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int *piVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  
  uVar2 = param_1->At;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (param_1->ExecutionIndex + 0x9e3779b9 + uVar2 * 0x40 + (uVar2 >> 2) ^ uVar2)) *
                    4);
    if (iVar8 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar3 + (longlong)iVar8 * 0x14;
        if ((*(uint *)(lVar3 + (longlong)iVar8 * 0x14) == uVar2) &&
           (*(ushort *)(lVar1 + 4) == param_1->ExecutionIndex)) {
          if ((iVar8 != -1) && (lVar1 != 0)) {
            return (int *)(lVar1 + 8);
          }
          break;
        }
        iVar8 = *(int *)(lVar1 + 0xc);
      } while (iVar8 != -1);
    }
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar5) {
    return (int *)&DAT_00000008;
  }
  pcVar4 = (code *)swi(3);
  piVar6 = (int *)(*pcVar4)();
  return piVar6;
}

// FindChecked @ 14aac8eb0

TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1> * __thiscall
TMapBase<UE::Mutable::Private::FCacheAddressInline,TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddressInline,TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>,0>_>
::FindChecked(TMapBase<UE::Mutable::Private::FCacheAddressInline,TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddressInline,TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>,0>_>
              *this,FCacheAddressInline *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  uint *puVar6;
  uint uVar7;
  
  uVar1 = param_1->At;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar7 = *(uint *)((longlong)FVar5 +
                     (ulonglong)
                     ((this->Pairs).HashSize - 1U &
                     (param_1->ExecutionIndex + 0x9e3779b9 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1)) *
                     4);
    if (uVar7 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar7 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((*puVar6 == uVar1) && ((ushort)puVar6[1] == param_1->ExecutionIndex)) {
          if ((uVar7 != 0xffffffff) && (puVar6 != (uint *)0x0)) {
            return (TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1> *)(puVar6 + 2);
          }
          break;
        }
        uVar7 = puVar6[6];
      } while (uVar7 != 0xffffffff);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar3) {
    return (TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1> *)&DAT_00000008;
  }
  pcVar2 = (code *)swi(3);
  pTVar4 = (TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1> *)(*pcVar2)();
  return pTVar4;
}

// FindChecked @ 14aac8f80

TSharedPtr<UE::Mutable::Private::FInstance_const_,1> * __thiscall
TMapBase<UE::Mutable::Private::FCacheAddressInline,TSharedPtr<UE::Mutable::Private::FInstance_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddressInline,TSharedPtr<UE::Mutable::Private::FInstance_const_,1>,0>_>
::FindChecked(TMapBase<UE::Mutable::Private::FCacheAddressInline,TSharedPtr<UE::Mutable::Private::FInstance_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddressInline,TSharedPtr<UE::Mutable::Private::FInstance_const_,1>,0>_>
              *this,FCacheAddressInline *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  uint *puVar6;
  uint uVar7;
  
  uVar1 = param_1->At;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar7 = *(uint *)((longlong)FVar5 +
                     (ulonglong)
                     ((this->Pairs).HashSize - 1U &
                     (param_1->ExecutionIndex + 0x9e3779b9 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1)) *
                     4);
    if (uVar7 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar7 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((*puVar6 == uVar1) && ((ushort)puVar6[1] == param_1->ExecutionIndex)) {
          if ((uVar7 != 0xffffffff) && (puVar6 != (uint *)0x0)) {
            return (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)(puVar6 + 2);
          }
          break;
        }
        uVar7 = puVar6[6];
      } while (uVar7 != 0xffffffff);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar3) {
    return (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)&DAT_00000008;
  }
  pcVar2 = (code *)swi(3);
  pTVar4 = (TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)(*pcVar2)();
  return pTVar4;
}

// FindChecked @ 14aac9050

TSharedPtr<UE::Mutable::Private::String_const_,1> * __thiscall
TMapBase<UE::Mutable::Private::FCacheAddressInline,TSharedPtr<UE::Mutable::Private::String_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddressInline,TSharedPtr<UE::Mutable::Private::String_const_,1>,0>_>
::FindChecked(TMapBase<UE::Mutable::Private::FCacheAddressInline,TSharedPtr<UE::Mutable::Private::String_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddressInline,TSharedPtr<UE::Mutable::Private::String_const_,1>,0>_>
              *this,FCacheAddressInline *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<UE::Mutable::Private::String_const_,1> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  uint *puVar6;
  uint uVar7;
  
  uVar1 = param_1->At;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar7 = *(uint *)((longlong)FVar5 +
                     (ulonglong)
                     ((this->Pairs).HashSize - 1U &
                     (param_1->ExecutionIndex + 0x9e3779b9 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1)) *
                     4);
    if (uVar7 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar7 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((*puVar6 == uVar1) && ((ushort)puVar6[1] == param_1->ExecutionIndex)) {
          if ((uVar7 != 0xffffffff) && (puVar6 != (uint *)0x0)) {
            return (TSharedPtr<UE::Mutable::Private::String_const_,1> *)(puVar6 + 2);
          }
          break;
        }
        uVar7 = puVar6[6];
      } while (uVar7 != 0xffffffff);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar3) {
    return (TSharedPtr<UE::Mutable::Private::String_const_,1> *)&DAT_00000008;
  }
  pcVar2 = (code *)swi(3);
  pTVar4 = (TSharedPtr<UE::Mutable::Private::String_const_,1> *)(*pcVar2)();
  return pTVar4;
}

// FindChecked @ 14aac9120

bool * __thiscall
TMapBase<UE::Mutable::Private::FCacheAddressInline,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddressInline,bool,0>_>
::FindChecked(TMapBase<UE::Mutable::Private::FCacheAddressInline,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mutable::Private::FCacheAddressInline,bool,0>_>
              *this,FCacheAddressInline *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool *pbVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  
  uVar2 = param_1->At;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (param_1->ExecutionIndex + 0x9e3779b9 + uVar2 * 0x40 + (uVar2 >> 2) ^ uVar2)) *
                    4);
    if (iVar8 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar3 + (longlong)iVar8 * 0x14;
        if ((*(uint *)(lVar3 + (longlong)iVar8 * 0x14) == uVar2) &&
           (*(ushort *)(lVar1 + 4) == param_1->ExecutionIndex)) {
          if ((iVar8 != -1) && (lVar1 != 0)) {
            return (bool *)(lVar1 + 8);
          }
          break;
        }
        iVar8 = *(int *)(lVar1 + 0xc);
      } while (iVar8 != -1);
    }
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar5) {
    return (bool *)&DAT_00000008;
  }
  pcVar4 = (code *)swi(3);
  pbVar6 = (bool *)(*pcVar4)();
  return pbVar6;
}

// OrderIndependentCompareEqual @ 14aadf850

bool __thiscall
TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
OrderIndependentCompareEqual
          (TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
           *this,TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                 *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  float *pfVar5;
  longlong lVar6;
  uint *puVar7;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_40;
  int iStack_38;
  uint uStack_34;
  undefined1 *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34 ==
      *(int *)&(param_1->Pairs).Elements.field_0x8 - *(int *)&(param_1->Pairs).Elements.field_0x34)
  {
    iStack_38 = 0;
    iVar2 = *(int *)&(this->Pairs).Elements.field_0x28;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
    uStack_34 = 1;
    local_20 = 0;
    iStack_24 = 0;
    if (iVar2 != 0) {
      puVar7 = *(uint **)&(this->Pairs).Elements.field_0x20;
      if (puVar7 == (uint *)0x0) {
        puVar7 = (uint *)TStack_60.Array;
      }
      uVar3 = *puVar7;
      while (uVar3 == 0) {
        lVar6 = (longlong)iStack_38;
        local_20 = local_20 + 0x20;
        iStack_38 = iStack_38 + 1;
        iStack_24 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_38) goto LAB_14aadf90b;
        uVar3 = puVar7[lVar6 + 1];
      }
      uStack_34 = -uVar3 & uVar3;
      uVar1 = (ulonglong)uStack_34 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_24 = local_20 + -1 + (int)lVar6;
      if (iVar2 < iStack_24) {
        iStack_24 = iVar2;
      }
    }
LAB_14aadf90b:
    uStack_28 = 0xffffffff;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iStack_1c = TStack_60.CurrentBitIndex;
    TStack_60._28_4_ = TStack_60.CurrentBitIndex;
    TStack_60.BaseBitIndex = local_20;
    local_40 = this;
    local_30 = (undefined1 *)TStack_60.Array;
    TStack_60._padding_._0_4_ = iStack_38;
    TStack_60._padding_._4_4_ = uStack_34;
    TStack_60.CurrentBitIndex = iStack_24;
    if (iStack_24 < *(int *)&(this->Pairs).Elements.field_0x28) {
      do {
        iVar2 = TStack_60.CurrentBitIndex;
        pfVar5 = Find(param_1,*(FName *)(*(longlong *)&(this->Pairs).Elements +
                                        (longlong)TStack_60.CurrentBitIndex * 0x14));
        if ((pfVar5 == (float *)0x0) ||
           (*(float *)(*(longlong *)&(this->Pairs).Elements + 8 + (longlong)iVar2 * 0x14) != *pfVar5
           )) goto LAB_14aadf9e0;
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
    }
    bVar4 = true;
  }
  else {
LAB_14aadf9e0:
    bVar4 = false;
  }
  return bVar4;
}

// OrderIndependentCompareEqual @ 14aadfa00

bool __thiscall
TMapBase<FName,UE::Math::TVector4<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector4<float>,0>_>
::OrderIndependentCompareEqual
          (TMapBase<FName,UE::Math::TVector4<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector4<float>,0>_>
           *this,TMapBase<FName,UE::Math::TVector4<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector4<float>,0>_>
                 *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  TVector4<float> *pTVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  TMapBase<FName,UE::Math::TVector4<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector4<float>,0>_>
  *local_40;
  int iStack_38;
  uint uStack_34;
  undefined1 *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34 ==
      *(int *)&(param_1->Pairs).Elements.field_0x8 - *(int *)&(param_1->Pairs).Elements.field_0x34)
  {
    iStack_38 = 0;
    iVar2 = *(int *)&(this->Pairs).Elements.field_0x28;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
    uStack_34 = 1;
    local_20 = 0;
    iStack_24 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Pairs).Elements.field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)TStack_60.Array;
      }
      uVar3 = *puVar8;
      while (uVar3 == 0) {
        lVar6 = (longlong)iStack_38;
        local_20 = local_20 + 0x20;
        iStack_38 = iStack_38 + 1;
        iStack_24 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_38) goto LAB_14aadfabb;
        uVar3 = puVar8[lVar6 + 1];
      }
      uStack_34 = -uVar3 & uVar3;
      uVar1 = (ulonglong)uStack_34 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_24 = local_20 + -1 + (int)lVar6;
      if (iVar2 < iStack_24) {
        iStack_24 = iVar2;
      }
    }
LAB_14aadfabb:
    uStack_28 = 0xffffffff;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iStack_1c = TStack_60.CurrentBitIndex;
    TStack_60._28_4_ = TStack_60.CurrentBitIndex;
    TStack_60.BaseBitIndex = local_20;
    local_40 = this;
    local_30 = (undefined1 *)TStack_60.Array;
    TStack_60._padding_._0_4_ = iStack_38;
    TStack_60._padding_._4_4_ = uStack_34;
    TStack_60.CurrentBitIndex = iStack_24;
    if (iStack_24 < *(int *)&(this->Pairs).Elements.field_0x28) {
      do {
        iVar2 = TStack_60.CurrentBitIndex;
        pTVar5 = Find(param_1,*(FName *)(*(longlong *)&(this->Pairs).Elements +
                                        (longlong)TStack_60.CurrentBitIndex * 0x30));
        if (pTVar5 == (TVector4<float> *)0x0) goto LAB_14aadfbbe;
        lVar7 = (longlong)iVar2;
        lVar6 = *(longlong *)&(this->Pairs).Elements;
        if ((((*(float *)(lVar6 + 0x10 + lVar7 * 0x30) != (pTVar5->field0_0x0)._s_0.X) ||
             (*(float *)(lVar6 + 0x14 + lVar7 * 0x30) != (pTVar5->field0_0x0)._s_0.Y)) ||
            (*(float *)(lVar6 + 0x18 + lVar7 * 0x30) != (pTVar5->field0_0x0)._s_0.Z)) ||
           (*(float *)(lVar6 + 0x1c + lVar7 * 0x30) != (pTVar5->field0_0x0)._s_0.W))
        goto LAB_14aadfbbe;
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
    }
    bVar4 = true;
  }
  else {
LAB_14aadfbbe:
    bVar4 = false;
  }
  return bVar4;
}

// OrderIndependentCompareEqual @ 14aadfbe0

bool __thiscall
TMapBase<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,0>_>
::OrderIndependentCompareEqual
          (TMapBase<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,0>_>
           *this,TMapBase<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,0>_>
                 *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *pTVar5;
  longlong lVar6;
  uint *puVar7;
  <lambda_1> local_res8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMapBase<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,0>_>
  *local_50;
  int iStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34 ==
      *(int *)&(param_1->Pairs).Elements.field_0x8 - *(int *)&(param_1->Pairs).Elements.field_0x34)
  {
    iStack_48 = 0;
    iVar2 = *(int *)&(this->Pairs).Elements.field_0x28;
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
    uStack_44 = 1;
    local_30 = 0;
    iStack_34 = 0;
    if (iVar2 != 0) {
      puVar7 = *(uint **)&(this->Pairs).Elements.field_0x20;
      if (puVar7 == (uint *)0x0) {
        puVar7 = (uint *)TStack_70.Array;
      }
      uVar3 = *puVar7;
      while (uVar3 == 0) {
        lVar6 = (longlong)iStack_48;
        local_30 = local_30 + 0x20;
        iStack_48 = iStack_48 + 1;
        iStack_34 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_48) goto LAB_14aadfc8b;
        uVar3 = puVar7[lVar6 + 1];
      }
      uStack_44 = -uVar3 & uVar3;
      uVar1 = (ulonglong)uStack_44 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_34 = local_30 + -1 + (int)lVar6;
      if (iVar2 < iStack_34) {
        iStack_34 = iVar2;
      }
    }
LAB_14aadfc8b:
    uStack_38 = 0xffffffff;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    iStack_2c = TStack_70.CurrentBitIndex;
    TStack_70._28_4_ = TStack_70.CurrentBitIndex;
    TStack_70.BaseBitIndex = local_30;
    local_50 = this;
    local_40 = (undefined1 *)TStack_70.Array;
    TStack_70._padding_._0_4_ = iStack_48;
    TStack_70._padding_._4_4_ = uStack_44;
    TStack_70.CurrentBitIndex = iStack_34;
    if (iStack_34 < *(int *)&(this->Pairs).Elements.field_0x28) {
      do {
        iVar2 = TStack_70.CurrentBitIndex;
        pTVar5 = Find(param_1,*(FName *)(*(longlong *)&(this->Pairs).Elements +
                                        (longlong)TStack_70.CurrentBitIndex * 0x28));
        if (pTVar5 == (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)
                      0x0) goto LAB_14aadfd8b;
        local_res8.ValueB =
             (TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *)
             (*(longlong *)&(this->Pairs).Elements + ((longlong)iVar2 * 5 + 1) * 8);
        if ((pTVar5->TypeIndex != (local_res8.ValueB)->TypeIndex) ||
           (bVar4 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`bool___cdecl_UE::Mutable::Private::operator==<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>(TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_const&___ptr64,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_const&___ptr64)'::`2'::<lambda_1>,0,1,0,TVariant<unsigned_int,class_TSharedPtr<class_UE::Mutable::Private::FImage_const_,1>_>_const&___ptr64>(unsigned___int64,`bool___cdecl_UE::Mutable::Private::operator==<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>(TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_const&___ptr64,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_const&___ptr64)'::`2'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>_const&___ptr64)'
                      ::__l2::Invokers[pTVar5->TypeIndex])(&local_res8,pTVar5), !bVar4))
        goto LAB_14aadfd8b;
        TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
      } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
    }
    bVar4 = true;
  }
  else {
LAB_14aadfd8b:
    bVar4 = false;
  }
  return bVar4;
}

// EmplaceByHash<TTuple<int,int>_const_&> @ 14aafe320

int * __thiscall
TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
::EmplaceByHash<TTuple<int,int>_const_&>
          (TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
           *this,uint param_1,TTuple<int,int> *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar5 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar5 + 4 + (longlong)iVar4 * 0x14);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar2 * 0x14) = 0xffffffff;
    }
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  if (local_18.Pointer != (TSparseSetElement<TTuple<TTuple<int,int>,int>_> *)0x0) {
    *(TTuple<int,int> *)local_18.Pointer = *param_2;
    *(undefined4 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0xc) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<TTuple<int,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,local_res8,(bool *)0x0);
  lVar5 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<TTuple<int,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,local_res8[0]);
  }
  return (int *)(*(longlong *)&(this->Pairs).Elements + lVar5 * 0x14 + 8);
}

// EmplaceByHash<TArray<int,TSizedDefaultAllocator<32>_>_const_&> @ 14ab5bb50

TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
* __thiscall
TMapBase<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>
::EmplaceByHash<TArray<int,TSizedDefaultAllocator<32>_>_const_&>
          (TMapBase<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>
           *this,uint param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  TKeyInitializer<TArray<int,TSizedDefaultAllocator<32>_>_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_res8.Key = param_2;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,0x10,1,(ForAnyElementType *)this,
                       (int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x40 + 4 + lVar3);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_>_>
       *)0x0) {
    TKeyInitializer<TArray<int,TSizedDefaultAllocator<32>_>_const_&>::
    operator<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_>_TTuple<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x30) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar4 = TSet<TTuple<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_>,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar4) {
    TSet<TTuple<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_>,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
          *)(*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8.Key * 0x40 + 0x10);
}

// FindChecked @ 14ab70000

FEntry * __thiscall
TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>_>
::FindChecked(TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>_>
              *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FEntry *pFVar4;
  uint *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (uint *)0x0) {
            return (FEntry *)(puVar5 + 2);
          }
          break;
        }
        uVar3 = puVar5[10];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (FEntry *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FEntry *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14ab700a0

FEntry * __thiscall
TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,0>_>
::FindChecked(TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,0>_>
              *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FEntry *pFVar4;
  uint *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (uint *)0x0) {
            return (FEntry *)(puVar5 + 2);
          }
          break;
        }
        uVar3 = puVar5[10];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (FEntry *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FEntry *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14ab70140

FEntry * __thiscall
TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>_>
::FindChecked(TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>_>
              *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FEntry *pFVar4;
  uint *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (uint *)0x0) {
            return (FEntry *)(puVar5 + 2);
          }
          break;
        }
        uVar3 = puVar5[10];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (FEntry *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FEntry *)(*pcVar1)();
  return pFVar4;
}

// OrderIndependentCompareEqual @ 14ab82650

bool __thiscall
TMapBase<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>
::OrderIndependentCompareEqual
          (TMapBase<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>
           *this,TMapBase<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>
                 *param_1)

{
  ulonglong uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
  *pTVar7;
  uint *puVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
  *pTVar11;
  TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
  *pTVar12;
  TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
  *pTVar13;
  <lambda_1> local_res8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMapBase<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>_>
  *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  uint uStack_34;
  uint local_30;
  int iStack_2c;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34 ==
      *(int *)&(param_1->Pairs).Elements.field_0x8 - *(int *)&(param_1->Pairs).Elements.field_0x34)
  {
    uVar4 = *(uint *)&(this->Pairs).Elements.field_0x28;
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
    pTVar13 = (TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
               *)0x0;
    uStack_44 = 1;
    uStack_48 = 0;
    pTVar7 = pTVar13;
    local_30 = uStack_48;
    if (uVar4 != 0) {
      puVar8 = *(uint **)&(this->Pairs).Elements.field_0x20;
      pTVar7 = (TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
                *)(ulonglong)uVar4;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)TStack_70.Array;
      }
      uVar3 = *puVar8;
      pTVar11 = pTVar13;
      pTVar12 = pTVar13;
      local_30 = 0;
      uStack_48 = 0;
      while (uVar3 == 0) {
        iVar5 = (int)pTVar11;
        local_30 = (int)pTVar12 + 0x20;
        pTVar12 = (TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
                   *)(ulonglong)local_30;
        uStack_48 = iVar5 + 1;
        pTVar11 = (TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
                   *)(ulonglong)uStack_48;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_48)
        goto LAB_14ab8270a;
        uVar3 = puVar8[(longlong)iVar5 + 1];
      }
      uStack_44 = -uVar3 & uVar3;
      uVar1 = (ulonglong)uStack_44 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar3 = (local_30 - 1) + (int)lVar10;
      if ((int)uVar4 < (int)uVar3) {
        uVar3 = uVar4;
      }
      pTVar7 = (TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
                *)(ulonglong)uVar3;
    }
LAB_14ab8270a:
    uStack_38 = 0xffffffff;
    uStack_34 = (uint)pTVar7;
    iStack_2c = TStack_70.CurrentBitIndex;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    TStack_70._28_4_ = TStack_70.CurrentBitIndex;
    TStack_70.BaseBitIndex = local_30;
    local_50 = this;
    local_40 = (undefined1 *)TStack_70.Array;
    TStack_70._padding_._0_4_ = uStack_48;
    TStack_70._padding_._4_4_ = uStack_44;
    TStack_70.CurrentBitIndex = uStack_34;
    if ((int)uStack_34 < (int)uVar4) {
      do {
        lVar10 = (longlong)(int)pTVar7 * 0x40;
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                 (*(longlong *)&(this->Pairs).Elements + lVar10);
        uVar4 = GetTypeHash<int>(pTVar9);
        iVar5 = TSet<TTuple<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>_>,TDefaultMapHashableKeyFuncs<TArray<int,TSizedDefaultAllocator<32>_>,TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>,0>,FDefaultSetAllocator>
                ::FindIndexByHash<TArray<int,TSizedDefaultAllocator<32>_>_>
                          (&param_1->Pairs,uVar4,pTVar9);
        if (iVar5 == -1) goto LAB_14ab8280e;
        lVar6 = (longlong)iVar5 * 0x40 + *(longlong *)&(param_1->Pairs).Elements;
        pTVar7 = (TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
                  *)(lVar6 + 0x10);
        if (lVar6 == 0) {
          pTVar7 = pTVar13;
        }
        if (pTVar7 == (TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
                       *)0x0) goto LAB_14ab8280e;
        local_res8.ValueB =
             (TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
              *)(*(longlong *)&(this->Pairs).Elements + 0x10 + lVar10);
        if ((pTVar7->TypeIndex != (local_res8.ValueB)->TypeIndex) ||
           (bVar2 = (*switchD_14ab5e03f::switchdataD_15229bd80[pTVar7->TypeIndex])
                              (&local_res8,pTVar7), !bVar2)) goto LAB_14ab8280e;
        TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
        pTVar7 = (TVariant<bool,int,float,UE::Math::TVector4<float>,UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>,TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,UE::Mutable::Private::Private::TIndirectObject<FString>,UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>,TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
                  *)(ulonglong)(uint)TStack_70.CurrentBitIndex;
      } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
    }
    bVar2 = true;
  }
  else {
LAB_14ab8280e:
    bVar2 = false;
  }
  return bVar2;
}

// Remove @ 14ab848b0

int __thiscall
TMapBase<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>_>
::Remove(TMapBase<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>_>
         *this,TSharedPtr<UE::Mutable::Private::FResource_const_,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FResource *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FResource *pFVar5;
  uint uVar6;
  atomic<int> *paVar7;
  ForElementType<FSetElementId> *pFVar8;
  ulonglong *puVar9;
  int iVar10;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar3 = param_1->Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    paVar7 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar7 = &pTVar2->SharedReferenceCount;
    LOCK();
    *paVar7 = (atomic<int>)((int)*paVar7 + 1);
    UNLOCK();
  }
  if (*(int *)&(this->Pairs).Elements.field_0x10 == *(int *)&(this->Pairs).Elements.field_0x44) {
    iVar10 = 0;
  }
  else {
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar7 = (atomic<int>)((int)*paVar7 + 1);
      UNLOCK();
    }
    uVar6 = ((uint)((ulonglong)pFVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar3 >> 4)) *
            -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar8 = *(ForElementType<FSetElementId> **)&(this->Pairs).Hash.SecondaryData;
    iVar10 = 0;
    if (pFVar8 == (ForElementType<FSetElementId> *)0x0) {
      pFVar8 = &(this->Pairs).Hash;
    }
    iVar1 = *(int *)(pFVar8->InlineData +
                    (((ulonglong)(uVar6 >> 0x10) ^ (longlong)(int)uVar6) &
                    (longlong)(this->Pairs).HashSize - 1U) * 4);
    while (iVar1 != -1) {
      puVar9 = (ulonglong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar4 = (TReferenceControllerBase<1> *)puVar9[1];
      pFVar5 = (FResource *)*puVar9;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if (pFVar5 == pFVar3) {
        TSet<TTuple<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::Mutable::Private::FResource_const_,1>,int,0>,TSetAllocator<TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>,TSizedInlineAllocator<1,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>,2,8,4>_>
        ::RemoveByIndex(&this->Pairs,iVar1);
        iVar10 = 1;
        break;
      }
      iVar1 = (int)puVar9[3];
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return iVar10;
}

