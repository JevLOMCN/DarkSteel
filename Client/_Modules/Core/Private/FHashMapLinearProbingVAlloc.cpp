// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// ~FHashMapLinearProbingVAlloc @ 141a72b40

void __thiscall
FHashMapLinearProbingVAlloc::~FHashMapLinearProbingVAlloc(FHashMapLinearProbingVAlloc *this)

{
  longlong lVar1;
  FLowLevelMemTracker *this_00;
  FLLMScope local_res8 [10];
  
  if (this->Buckets != (FBucketEntry *)0x0) {
    lVar1 = this->NumBuckets;
    VirtualFree(this->Buckets,0,0x8000);
    FLLMScope::FLLMScope(local_res8,FMalloc,false,None,Platform,true);
    this_00 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this_00 = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::OnLowLevelChangeInMemoryUse(this_00,Platform,lVar1 * -0x10,Untagged,None);
    FLLMScope::~FLLMScope(local_res8);
  }
  return;
}

// Find @ 141a7ebf0

ulong64 * __thiscall
FHashMapLinearProbingVAlloc::Find(FHashMapLinearProbingVAlloc *this,ulong64 param_1)

{
  FBucketEntry *pFVar1;
  ulong64 *puVar2;
  
  pFVar1 = FindBucket(this,param_1);
  puVar2 = (ulong64 *)0x0;
  if (pFVar1 != (FBucketEntry *)0x0) {
    puVar2 = &pFVar1->Value;
  }
  return puVar2;
}

// FindBucket @ 141a7ed80

FBucketEntry * __thiscall
FHashMapLinearProbingVAlloc::FindBucket(FHashMapLinearProbingVAlloc *this,ulong64 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  FBucketEntry *pFVar3;
  int iVar4;
  ulonglong uVar6;
  int iVar5;
  
  if (0xfffffffffffffffd < param_1) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  uVar6 = this->NumBuckets - 1U & param_1;
  uVar1 = ((ulonglong)this->NumBuckets >> 5) + 1;
  uVar2 = uVar6;
  if ((uVar1 & 1) == 0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  do {
    pFVar3 = this->Buckets + uVar2;
    if (pFVar3->Key < 0xfffffffffffffffe) {
LAB_141a7ee87:
      if (pFVar3->Key == param_1) {
        return pFVar3;
      }
    }
    else {
      iVar5 = (int)pFVar3->Key;
      iVar4 = iVar5 + 2;
      if (1 < iVar4) {
        UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
        FWindowsPlatformMisc::RaiseException(1);
        if (iVar4 == 2) goto LAB_141a7ee87;
      }
      if (iVar5 == -2) {
        return (FBucketEntry *)0x0;
      }
    }
    uVar2 = uVar2 + uVar1 & this->NumBuckets - 1U;
    if (uVar2 == uVar6) {
      return (FBucketEntry *)0x0;
    }
  } while( true );
}

// FindOrAdd @ 141a7fa20

ulong64 * __thiscall
FHashMapLinearProbingVAlloc::FindOrAdd
          (FHashMapLinearProbingVAlloc *this,ulong64 param_1,ulong64 param_2)

{
  FBucketEntry *pFVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  
  if (0xfffffffffffffffd < param_1) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  uVar2 = this->NumBuckets;
  if ((longlong)((float)(longlong)uVar2 * __real_3e99999a) < this->NumActive) {
    Realloc(this,uVar2 * 2);
    uVar2 = this->NumBuckets;
    if ((longlong)((float)(longlong)uVar2 * __real_3e99999a) <= this->NumActive) {
      UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
      FWindowsPlatformMisc::RaiseException(1);
      uVar2 = this->NumBuckets;
    }
  }
  uVar4 = uVar2 - 1 & param_1;
  uVar2 = (uVar2 >> 5) + 1;
  uVar3 = uVar4;
  if ((uVar2 & 1) == 0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  while( true ) {
    pFVar1 = this->Buckets;
    if (0xfffffffffffffffd < pFVar1[uVar3].Key) break;
LAB_141a7fba9:
    if (pFVar1[uVar3].Key == param_1) goto LAB_141a7fc89;
    uVar3 = uVar3 + uVar2 & this->NumBuckets - 1U;
    if (uVar3 == uVar4) {
      UE::LLMPrivate::HandleAssert
                (true,
                 L"LLM check failed: %s [File:%s] [Line: %d]\r\nCould not find writable bucket; this is supposed to be prevented by not asking for a writable bucket if the container is full.\r\n"
                );
      FWindowsPlatformMisc::RaiseException(1);
      return &this->Buckets->Value;
    }
  }
  iVar5 = (int)pFVar1[uVar3].Key + 2;
  if (1 < iVar5) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
    if (iVar5 == 2) goto LAB_141a7fba9;
  }
  if (0xfffffffffffffffd < param_1) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  pFVar1[uVar3].Value = param_2;
  pFVar1[uVar3].Key = param_1;
  uVar2 = this->NumActive + 1;
  this->NumActive = uVar2;
  if (0xfffffffffffffffd < uVar2) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
LAB_141a7fc89:
  return &pFVar1[uVar3].Value;
}

// Free @ 141a802a0

void __thiscall
FHashMapLinearProbingVAlloc::Free(FHashMapLinearProbingVAlloc *this,void *param_1,ulong64 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000141a802ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  VirtualFree(param_1,0,0x8000);
  return;
}

// Init @ 141a83310

void __thiscall FHashMapLinearProbingVAlloc::Init(FHashMapLinearProbingVAlloc *this,ulong64 param_1)

{
  ulonglong uVar1;
  
  uVar1 = param_1 >> 4;
  if (uVar1 < 0x40) {
    uVar1 = 0x40;
  }
  Realloc(this,uVar1);
  return;
}

// Malloc @ 141a8b530

void * __thiscall
FHashMapLinearProbingVAlloc::Malloc(FHashMapLinearProbingVAlloc *this,ulong64 param_1)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141a8b53e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = VirtualAlloc((LPVOID)0x0,param_1,0x3000,4);
  return pvVar1;
}

// Realloc @ 141a8e7f0

void __thiscall
FHashMapLinearProbingVAlloc::Realloc(FHashMapLinearProbingVAlloc *this,long64 param_1)

{
  longlong lVar1;
  FBucketEntry *lpAddress;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FBucketEntry *pFVar5;
  FLowLevelMemTracker *pFVar6;
  int iVar7;
  FBucketEntry *pFVar8;
  FLLMScope local_res8 [2];
  
  if ((param_1 & param_1 - 1U) != 0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  if ((ulonglong)param_1 < 0x40) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  FLLMScope::FLLMScope(local_res8,FMalloc,false,None,Platform,true);
  lVar1 = this->NumBuckets;
  lpAddress = this->Buckets;
  this->NumBuckets = param_1;
  pFVar5 = VirtualAlloc((LPVOID)0x0,param_1 << 4,0x3000,4);
  this->Buckets = pFVar5;
  pFVar6 = FLowLevelMemTracker::TrackerInstance;
  if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
    pFVar6 = FLowLevelMemTracker::Construct();
  }
  FLowLevelMemTracker::OnLowLevelChangeInMemoryUse(pFVar6,Platform,param_1 << 4,Untagged,None);
  lVar2 = this->NumBuckets;
  pFVar5 = this->Buckets;
  if ((lVar2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar8 = pFVar5 + lVar2;
  for (; pFVar5 != pFVar8; pFVar5 = pFVar5 + 1) {
    pFVar5->Key = 0xfffffffffffffffe;
  }
  this->NumActive = 0;
  if (lpAddress != (FBucketEntry *)0x0) {
    if ((lVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    for (pFVar5 = lpAddress; pFVar5 != lpAddress + lVar1; pFVar5 = pFVar5 + 1) {
      if (pFVar5->Key < 0xfffffffffffffffe) {
LAB_141a8e9da:
        FindOrAdd(this,pFVar5->Key,pFVar5->Value);
      }
      else {
        iVar7 = (int)pFVar5->Key + 2;
        if (1 < iVar7) {
          UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
          FWindowsPlatformMisc::RaiseException(1);
          if (iVar7 == 2) goto LAB_141a8e9da;
        }
      }
    }
    VirtualFree(lpAddress,0,0x8000);
    pFVar6 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      pFVar6 = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::OnLowLevelChangeInMemoryUse(pFVar6,Platform,lVar1 * -0x10,Untagged,None);
  }
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RemoveAndGetValue @ 141a8f8d0

ulong64 __thiscall
FHashMapLinearProbingVAlloc::RemoveAndGetValue
          (FHashMapLinearProbingVAlloc *this,ulong64 param_1,ulong64 param_2)

{
  ulong64 uVar1;
  ulonglong uVar2;
  EValueType EVar3;
  int iVar4;
  FBucketEntry *pFVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  pFVar5 = FindBucket(this,param_1);
  if (pFVar5 == (FBucketEntry *)0x0) {
    return param_2;
  }
  uVar1 = pFVar5->Value;
  if (this->NumActive < 1) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  this->NumActive = this->NumActive + -1;
  uVar6 = ((ulonglong)this->NumBuckets >> 5) + 1;
  if ((uVar6 & 1) == 0) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  uVar7 = (longlong)pFVar5 - (longlong)this->Buckets >> 4;
  EVar3 = FBucketEntry::GetValueType(this->Buckets + (uVar7 + uVar6 & this->NumBuckets - 1U));
  if (EVar3 == Unallocated) {
    pFVar5->Key = 0xfffffffffffffffe;
    while( true ) {
      uVar7 = uVar7 - uVar6 & this->NumBuckets - 1U;
      uVar2 = this->Buckets[uVar7].Key;
      if (uVar2 < 0xfffffffffffffffe) break;
      iVar4 = (int)uVar2 + 2;
      if (1 < iVar4) {
        UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
        FWindowsPlatformMisc::RaiseException(1);
        return uVar1;
      }
      if (iVar4 != 1) {
        return uVar1;
      }
      this->Buckets[uVar7].Key = 0xfffffffffffffffe;
    }
  }
  else {
    pFVar5->Key = 0xffffffffffffffff;
  }
  return uVar1;
}

