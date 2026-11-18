// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 3

// ~FDefaultRHIRenderQueryPool @ 145c47d20

void __thiscall
FDefaultRHIRenderQueryPool::~FDefaultRHIRenderQueryPool(FDefaultRHIRenderQueryPool *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  this->_padding_ = (longlong)&___7FDefaultRHIRenderQueryPool__6B_;
  bVar3 = IsInRHIThread();
  if (!bVar3) {
    bVar3 = IsInRenderingThread();
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRHIThread() || IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\DynamicRHI.cpp"
                         ,0x304,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if (this->AllocatedQueries != (this->Queries).ArrayNum) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AllocatedQueries == Queries.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\DynamicRHI.cpp"
                       ,0x305,L"Querypool deleted before all Queries have been released");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  DestructItems<TRefCountPtr<FRHIRenderQuery>,int>
            ((TRefCountPtr<FRHIRenderQuery> *)(this->Queries).AllocatorInstance.Data,
             (this->Queries).ArrayNum);
  pFVar1 = (this->Queries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FRHIRenderQueryPool__6B_;
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// AllocateQuery @ 145c4f920

FRHIPooledRenderQuery * __thiscall
FDefaultRHIRenderQueryPool::AllocateQuery
          (FDefaultRHIRenderQueryPool *this,FRHIPooledRenderQuery *__return_storage_ptr__)

{
  FMutex *this_00;
  int *piVar1;
  atomic<unsigned_char> aVar2;
  FScriptContainerElement *pFVar3;
  FRHIRenderQuery *pFVar4;
  FRHIResource *this_01;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FRHIPooledRenderQuery *pFVar8;
  longlong lVar9;
  FRHIResource *local_res18 [2];
  TRefCountPtr<FRHIRenderQuery> local_48;
  FDefaultRHIRenderQueryPool *local_40;
  
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\DynamicRHI.cpp"
                         ,0x30a,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FRHIPooledRenderQuery *)(*pcVar5)();
    return pFVar8;
  }
  this_00 = &this->QueriesMutex;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FRHIPooledRenderQuery *)(*pcVar5)();
    return pFVar8;
  }
  LOCK();
  bVar6 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    UE::FMutex::LockSlow(this_00);
  }
  if ((this->Queries).ArrayNum < 1) {
    (**(code **)(GDynamicRHI->_padding_ + 0x260))(GDynamicRHI,local_res18,this->QueryType);
    local_48.Reference = (FRHIRenderQuery *)local_res18[0];
    local_res18[0] = (FRHIResource *)0x0;
    local_40 = this;
    bVar6 = IsInParallelRenderingThread();
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInParallelRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x9bf,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FRHIPooledRenderQuery *)(*pcVar5)();
      return pFVar8;
    }
    if (local_res18[0] != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res18[0]);
    }
    if ((FRHIResource *)local_48.Reference != (FRHIResource *)0x0) {
      this->AllocatedQueries = this->AllocatedQueries + 1;
    }
    (__return_storage_ptr__->Query).Reference = local_48.Reference;
    __return_storage_ptr__->QueryPool = (FRHIRenderQueryPool *)local_40;
    local_48.Reference = (FRHIRenderQuery *)0x0;
    bVar6 = IsInParallelRenderingThread();
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInParallelRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x9ce,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FRHIPooledRenderQuery *)(*pcVar5)();
      return pFVar8;
    }
    if (local_40 != (FDefaultRHIRenderQueryPool *)0x0) {
      if ((FRHIResource *)local_48.Reference == (FRHIResource *)0x0) goto LAB_145c4fbb9;
      (**(code **)(local_40->_padding_ + 0x18))(local_40,&local_48);
      local_40 = (FDefaultRHIRenderQueryPool *)0x0;
    }
    if ((FRHIResource *)local_48.Reference != (FRHIResource *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Query.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0x9c9,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FRHIPooledRenderQuery *)(*pcVar5)();
        return pFVar8;
      }
      if ((FRHIResource *)local_48.Reference != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)local_48.Reference);
      }
    }
  }
  else {
    lVar9 = (longlong)(this->Queries).ArrayNum;
    pFVar3 = (this->Queries).AllocatorInstance.Data;
    pFVar4 = *(FRHIRenderQuery **)(pFVar3 + lVar9 * 8 + -8);
    *(undefined8 *)(pFVar3 + lVar9 * 8 + -8) = 0;
    iVar7 = (this->Queries).ArrayNum;
    pFVar3 = (this->Queries).AllocatorInstance.Data;
    this_01 = *(FRHIResource **)(pFVar3 + (longlong)iVar7 * 8 + -8);
    pFVar3 = pFVar3 + (longlong)iVar7 * 8;
    if (this_01 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_01);
    }
    iVar7 = (this->Queries).ArrayNum - iVar7;
    if (iVar7 != 0) {
      memmove(pFVar3 + -8,pFVar3,(longlong)iVar7 << 3);
    }
    piVar1 = &(this->Queries).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&(this->Queries).AllocatorInstance,(this->Queries).ArrayNum,
               &(this->Queries).ArrayMax);
    (__return_storage_ptr__->Query).Reference = pFVar4;
    __return_storage_ptr__->QueryPool = (FRHIRenderQueryPool *)this;
    bVar6 = IsInParallelRenderingThread();
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInParallelRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x9bf,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FRHIPooledRenderQuery *)(*pcVar5)();
      return pFVar8;
    }
  }
LAB_145c4fbb9:
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar2 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return __return_storage_ptr__;
}

// ReleaseQuery @ 145c74550

void __thiscall
FDefaultRHIRenderQueryPool::ReleaseQuery
          (FDefaultRHIRenderQueryPool *this,TRefCountPtr<FRHIRenderQuery> *param_1)

{
  FMutex *this_00;
  int *piVar1;
  atomic<unsigned_char> aVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  bVar5 = IsInParallelRenderingThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\DynamicRHI.cpp"
                         ,0x31e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_1->Reference == (FRHIRenderQuery *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Query.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\DynamicRHI.cpp"
                         ,799,L"Only release valid queries"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = &this->QueriesMutex;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  LOCK();
  bVar5 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    UE::FMutex::LockSlow(this_00);
  }
  pFVar3 = (this->Queries).AllocatorInstance.Data;
  if (((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(this->Queries).ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->Queries).ArrayNum;
  piVar1 = &(this->Queries).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Queries).AllocatorInstance,piVar1);
  }
  (this->Queries).ArrayNum = iVar6 + 1;
  pFVar3 = (this->Queries).AllocatorInstance.Data + (longlong)iVar6 * 8;
  *(undefined8 *)pFVar3 = 0;
  *(FRHIRenderQuery **)pFVar3 = param_1->Reference;
  param_1->Reference = (FRHIRenderQuery *)0x0;
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar2 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return;
}

