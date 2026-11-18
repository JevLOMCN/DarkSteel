// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 9

// FMemCache @ 1445a3a90

FMemCache * __thiscall
UE::IoStore::JournaledCache::FMemCache::FMemCache(FMemCache *this,uint param_1)

{
  this->MaxSize = param_1;
  this->UsedSize = 0;
  (this->Items).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Items).ArrayNum = 0;
  (this->Items).ArrayMax = 0;
  return this;
}

// DebugVisit @ 1445c2e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall
UE::IoStore::JournaledCache::FMemCache::DebugVisit
          (FMemCache *this,void *param_1,_func___cdecl_void_void_ptr_FDebugCacheEntry_ptr *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  FDebugCacheEntry local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  iVar1 = (this->Items).ArrayNum;
  pFVar2 = (this->Items).AllocatorInstance.Data;
  local_40.Key = 0;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  local_40.Size = 0;
  local_40._12_4_ = 1;
  while( true ) {
    if ((this->Items).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::IoStore::JournaledCache::FMemCache::FItem,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_48);
    }
    if (pFVar2 == pFVar3) break;
    local_40.Key = *(ulong64 *)pFVar2;
    local_40.Size = *(uint *)(*(longlong *)(pFVar2 + 8) + 8);
    (*param_2)(param_1,&local_40);
    pFVar2 = pFVar2 + 0x10;
  }
  return (this->Items).ArrayNum;
}

// Drop @ 1445c9410

int __thiscall UE::IoStore::JournaledCache::FMemCache::Drop(FMemCache *this,uint param_1)

{
  int iVar1;
  <lambda_1> local_res18 [16];
  
  iVar1 = DropImpl<_UE::IoStore::JournaledCache::FMemCache::Drop_::__l2::<lambda_1>_>
                    (this,param_1,local_res18);
  return iVar1;
}

// Drop @ 1445c9420

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::IoStore::JournaledCache::FMemCache::Drop(FMemCache *this)

{
  int *piVar1;
  
  if (3 < (byte)LogIas._0_1_) {
    Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
  }
  DestructItems<UE::IoStore::JournaledCache::FMemCache::FItem,int>
            ((FItem *)(this->Items).AllocatorInstance.Data,(this->Items).ArrayNum);
  piVar1 = &(this->Items).ArrayMax;
  (this->Items).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Items).AllocatorInstance,0,piVar1);
  }
  this->UsedSize = 0;
  return;
}

// Evict @ 1445cae90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::IoStore::JournaledCache::FMemCache::Evict(FMemCache *this,ulong64 param_1,bool param_2)

{
  TArray<UE::IoStore::JournaledCache::FMemCache::FItem,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  ulong64 local_48;
  FIoBuffer local_40;
  FItem local_38;
  
  this_00 = &this->Items;
  uVar9 = 0;
  uVar10 = (this->Items).ArrayNum;
  bVar3 = false;
  if (uVar10 != 0) {
    do {
      uVar6 = 0;
      if ((int)uVar9 < (this->Items).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar11 = (this_00->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x10;
      if (*(ulong64 *)pFVar11 == param_1) {
        bVar3 = true;
        this->UsedSize = this->UsedSize - *(int *)(*(longlong *)(pFVar11 + 8) + 8);
        uVar10 = uVar10 - 1;
        uVar9 = 0;
        if ((int)uVar10 < (this->Items).ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar8 = (this_00->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
        *(longlong *)pFVar11 = *(longlong *)pFVar8;
        FIoBuffer::operator=((FIoBuffer *)(pFVar11 + 8),(FIoBuffer *)(pFVar8 + 8));
        TArray<UE::IoStore::JournaledCache::FMemCache::FItem,TSizedDefaultAllocator<32>_>::Pop
                  (this_00,&local_38,Default);
        if (local_38.Data.CorePtr.Reference != (BufCore *)0x0) {
          FIoBuffer::BufCore::CheckRefCount((BufCore *)local_38.Data.CorePtr.Reference);
          LOCK();
          piVar1 = (int *)((longlong)local_38.Data.CorePtr.Reference + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            FIoBuffer::BufCore::~BufCore((BufCore *)local_38.Data.CorePtr.Reference);
            ::operator_delete((void *)local_38.Data.CorePtr.Reference,0x20);
          }
        }
        break;
      }
      uVar9 = uVar9 + 1;
      bVar3 = false;
    } while (uVar9 < uVar10);
  }
  if (param_2) {
    local_48 = param_1;
    FIoBuffer::FIoBuffer(&local_40);
    pFVar11 = (this_00->AllocatorInstance).Data;
    if (((pFVar11 <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 < pFVar11 + (longlong)(this->Items).ArrayMax * 0x10))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    iVar7 = (this->Items).ArrayNum;
    piVar1 = &(this->Items).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&this_00->AllocatorInstance,piVar1);
    }
    (this->Items).ArrayNum = iVar7 + 1;
    pFVar11 = (this_00->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(ulong64 *)pFVar11 = local_48;
    *(undefined8 *)(pFVar11 + 8) = 0;
    *(TRefCountPtr<FIoBuffer::BufCore> *)&pFVar11[8].field_0x0 = local_40.CorePtr.Reference;
  }
  return bVar3;
}

// Get @ 1445d0880

FIoBuffer * __thiscall UE::IoStore::JournaledCache::FMemCache::Get(FMemCache *this,ulong64 param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Items).ArrayNum;
  pFVar3 = (this->Items).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Items).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::IoStore::JournaledCache::FMemCache::FItem_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (*(ulong64 *)pFVar3 == param_1) {
      pFVar2 = pFVar3 + 8;
      if (*(char *)(*(longlong *)(pFVar3 + 8) + 0x18) == '\0' &&
          *(int *)(*(longlong *)(pFVar3 + 8) + 8) == 0) {
        pFVar2 = (FScriptContainerElement *)0x0;
      }
      return (FIoBuffer *)pFVar2;
    }
    pFVar3 = pFVar3 + 0x10;
  }
  return (FIoBuffer *)0x0;
}

// GetDemand @ 1445d4ca0

uint __thiscall UE::IoStore::JournaledCache::FMemCache::GetDemand(FMemCache *this)

{
  return (this->UsedSize * 100) / this->MaxSize;
}

// Peel @ 1445e94c0

int __thiscall
UE::IoStore::JournaledCache::FMemCache::Peel
          (FMemCache *this,int param_1,
          TArray<UE::IoStore::JournaledCache::FMemCache::FItem,TSizedDefaultAllocator<32>_> *param_2
          )

{
  TArray<UE::IoStore::JournaledCache::FMemCache::FItem,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  atomic<__int64> aVar8;
  FScriptContainerElement *pFVar9;
  atomic<__int64> aVar10;
  longlong lVar11;
  uint uVar12;
  int *piVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  bool bVar16;
  FIdentityFunctor local_res8;
  
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId249,"IasCache::Peel",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
               ,0xf9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId249);
  }
  local_res8 = SUB81(this,0);
  this_00 = &this->Items;
  AlgoImpl::
  IntroSortInternal<UE::IoStore::JournaledCache::FMemCache::FItem,int,FIdentityFunctor,_UE::IoStore::JournaledCache::FMemCache::Peel_::__l2::<lambda_1>_>
            ((FItem *)(this_00->AllocatorInstance).Data,(this->Items).ArrayNum,local_res8,
             (<lambda_1>)local_res8);
  uVar15 = (this->Items).ArrayNum;
  iVar5 = 0;
  uVar12 = uVar15 - 1;
  if (-1 < (int)uVar12) {
    lVar11 = (longlong)(int)uVar12 << 4;
    iVar5 = 0;
    do {
      if (param_1 <= iVar5) break;
      uVar4 = 0;
      if ((int)uVar12 < (this->Items).ArrayNum) {
        uVar4 = ~uVar12 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      pFVar9 = (param_2->AllocatorInstance).Data;
      pFVar14 = (this_00->AllocatorInstance).Data + lVar11;
      iVar5 = iVar5 + *(int *)(*(longlong *)(pFVar14 + 8) + 8);
      if (((pFVar9 <= pFVar14) && (pFVar14 < pFVar9 + (longlong)param_2->ArrayMax * 0x10)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar6 + 1;
      uVar15 = uVar15 - 1;
      lVar11 = lVar11 + -0x10;
      pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      uVar12 = uVar12 - 1;
      *(undefined8 *)pFVar9 = *(undefined8 *)pFVar14;
      *(undefined8 *)(pFVar9 + 8) = 0;
      *(undefined8 *)(pFVar9 + 8) = *(undefined8 *)(pFVar14 + 8);
      *(undefined8 *)(pFVar14 + 8) = 0;
    } while (-1 < (int)uVar12);
  }
  piVar13 = &(this->Items).ArrayNum;
  iVar6 = *piVar13;
  if (iVar6 < (int)uVar15) {
    iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar15 - iVar6,&this_00->AllocatorInstance,piVar13,
                       &(this->Items).ArrayMax);
    DefaultConstructItems<UE::IoStore::JournaledCache::FMemCache::FItem,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar7 * 0x10,uVar15 - iVar6);
  }
  else {
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    if ((int)uVar15 < iVar6) {
      uVar12 = iVar6 - uVar15;
      if (((int)(uVar12 | uVar15) < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      if (uVar12 != 0) {
        TArray<UE::IoStore::JournaledCache::FMemCache::FItem,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(this_00,uVar15,uVar12);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_00->AllocatorInstance,(this->Items).ArrayNum,&(this->Items).ArrayMax
                  );
      }
    }
  }
  this->UsedSize = this->UsedSize - iVar5;
  aVar8._4_4_ = 0;
  aVar8._0_4_ = this->UsedSize;
  aVar10._4_4_ = 0;
  aVar10._0_4_ = this->UsedSize;
  if (GCachePendingBytes.Value != aVar8) {
    LOCK();
    UNLOCK();
    GCachePendingBytes.Value = aVar10;
    if (-1 < CountersChannel->Enabled) {
      if (GCachePendingBytes.CounterId == (atomic<unsigned_int>)0x0) {
        uVar3 = FCountersTrace::OutputInitCounter
                          (GCachePendingBytes.CounterName,TraceCounterType_Int,
                           GCachePendingBytes.CounterFlags & 0xf);
        LOCK();
        if (GCachePendingBytes.CounterId == (atomic<unsigned_int>)0x0) {
          GCachePendingBytes.CounterId._2_2_ = 0;
          GCachePendingBytes.CounterId._0_2_ = uVar3;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (GCachePendingBytes.CounterId._0_2_,(long64)GCachePendingBytes.Value);
    }
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return iVar5;
}

// Put @ 1445f0020

bool __thiscall
UE::IoStore::JournaledCache::FMemCache::Put(FMemCache *this,ulong64 param_1,FIoBuffer *param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  ushort uVar6;
  int iVar7;
  FIoBuffer *pFVar8;
  FScriptContainerElement *pFVar9;
  <lambda_1> local_res20 [8];
  ulong64 local_28;
  BufCore *local_20;
  
  pFVar8 = Get(this,param_1);
  if (pFVar8 != (FIoBuffer *)0x0) {
    LOCK();
    GCachePutExistingCount.Value = (atomic<__int64>)((longlong)GCachePutExistingCount.Value + 1);
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
      if (GCachePutExistingCount.CounterId == (atomic<unsigned_int>)0x0) {
        uVar6 = FCountersTrace::OutputInitCounter
                          (GCachePutExistingCount.CounterName,TraceCounterType_Int,
                           GCachePutExistingCount.CounterFlags & 0xf);
        LOCK();
        if (GCachePutExistingCount.CounterId == (atomic<unsigned_int>)0x0) {
          GCachePutExistingCount.CounterId._2_2_ = 0;
          GCachePutExistingCount.CounterId._0_2_ = uVar6;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (GCachePutExistingCount.CounterId._0_2_,(long64)GCachePutExistingCount.Value);
    }
    return true;
  }
  uVar2 = ((param_2->CorePtr).Reference)->DataSizeLow;
  if ((uVar2 != 0) && (uVar2 <= this->MaxSize)) {
    if (this->MaxSize < this->UsedSize + uVar2) {
      iVar7 = DropImpl<_UE::IoStore::JournaledCache::FMemCache::Drop_::__l2::<lambda_1>_>
                        (this,uVar2,local_res20);
      LOCK();
      GCachePutRejectCount.Value = (atomic<__int64>)((longlong)GCachePutRejectCount.Value + 1);
      UNLOCK();
      if (-1 < CountersChannel->Enabled) {
        if (GCachePutRejectCount.CounterId == (atomic<unsigned_int>)0x0) {
          uVar6 = FCountersTrace::OutputInitCounter
                            (GCachePutRejectCount.CounterName,TraceCounterType_Int,
                             GCachePutRejectCount.CounterFlags & 0xf);
          LOCK();
          if (GCachePutRejectCount.CounterId == (atomic<unsigned_int>)0x0) {
            GCachePutRejectCount.CounterId._2_2_ = 0;
            GCachePutRejectCount.CounterId._0_2_ = uVar6;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (GCachePutRejectCount.CounterId._0_2_,(long64)GCachePutRejectCount.Value);
      }
      if ((longlong)iVar7 != 0) {
        LOCK();
        GCacheRejectBytes.Value =
             (atomic<__int64>)((longlong)GCacheRejectBytes.Value + (longlong)iVar7);
        UNLOCK();
        if (-1 < CountersChannel->Enabled) {
          if (GCacheRejectBytes.CounterId == (atomic<unsigned_int>)0x0) {
            uVar6 = FCountersTrace::OutputInitCounter
                              (GCacheRejectBytes.CounterName,TraceCounterType_Int,
                               GCacheRejectBytes.CounterFlags & 0xf);
            LOCK();
            if (GCacheRejectBytes.CounterId == (atomic<unsigned_int>)0x0) {
              GCacheRejectBytes.CounterId._2_2_ = 0;
              GCacheRejectBytes.CounterId._0_2_ = uVar6;
            }
            UNLOCK();
          }
          FCountersTrace::OutputSetValue
                    (GCacheRejectBytes.CounterId._0_2_,(long64)GCacheRejectBytes.Value);
        }
      }
    }
    local_20 = (param_2->CorePtr).Reference;
    (param_2->CorePtr).Reference = (BufCore *)0x0;
    pFVar9 = (this->Items).AllocatorInstance.Data;
    local_28 = param_1;
    if (((pFVar9 <= (FScriptContainerElement *)&local_28) &&
        ((FScriptContainerElement *)&local_28 < pFVar9 + (longlong)(this->Items).ArrayMax * 0x10))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar7 = (this->Items).ArrayNum;
    piVar1 = &(this->Items).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->Items).AllocatorInstance,piVar1);
    }
    (this->Items).ArrayNum = iVar7 + 1;
    pFVar9 = (this->Items).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
    *(ulong64 *)pFVar9 = local_28;
    *(undefined8 *)(pFVar9 + 8) = 0;
    *(BufCore **)(pFVar9 + 8) = local_20;
    this->UsedSize = this->UsedSize + uVar2;
    LOCK();
    GCachePutCount.Value = (atomic<__int64>)((longlong)GCachePutCount.Value + 1);
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
      if (GCachePutCount.CounterId == (atomic<unsigned_int>)0x0) {
        uVar6 = FCountersTrace::OutputInitCounter
                          (GCachePutCount.CounterName,TraceCounterType_Int,
                           GCachePutCount.CounterFlags & 0xf);
        LOCK();
        if (GCachePutCount.CounterId == (atomic<unsigned_int>)0x0) {
          GCachePutCount.CounterId._2_2_ = 0;
          GCachePutCount.CounterId._0_2_ = uVar6;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(GCachePutCount.CounterId._0_2_,(long64)GCachePutCount.Value);
    }
    FOnDemandIoBackendStats::OnCachePendingBytes(GStatistics,(ulonglong)this->UsedSize);
    return true;
  }
  return false;
}

