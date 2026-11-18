// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// AddMetadata @ 1419da900

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStartupMessages::AddMetadata
          (FStartupMessages *this,FName param_1,wchar_t *param_2,char *param_3,char *param_4,
          wchar_t *param_5,bool param_6,Type param_7,bool param_8,bool param_9,
          EMemoryCounterRegion param_10)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  FName *pFVar7;
  FLLMScope local_res8 [2];
  undefined4 local_res10;
  uint local_res14;
  FMemScope local_res18;
  FName local_res20;
  
  FLLMScope::FLLMScope(local_res8,Stats,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,Stats,true);
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lVar6 = (this->DelayedMessages).ArrayNum;
  if (lVar6 == (this->DelayedMessages).ArrayMax) {
    lVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,&(this->DelayedMessages).ArrayMax);
  }
  pFVar1 = (this->DelayedMessages).AllocatorInstance.Data;
  (this->DelayedMessages).ArrayNum = lVar6 + 1;
  pFVar7 = ::FName::FName(&local_res20,param_3);
  FVar2 = *pFVar7;
  *(undefined4 *)(pFVar1 + lVar6 * 0x10 + 8) = 0;
  FStatNameAndInfo::ToLongName
            ((FName)&local_res10,(char *)FVar2,"Groups",(wchar_t *)param_4,SUB81(param_5,0));
  *(undefined4 *)(pFVar1 + lVar6 * 0x10 + 8) = local_res10;
  uVar5 = local_res14 & 0xffdbf3ff | 0x10200;
  *(uint *)(pFVar1 + lVar6 * 0x10 + 0xc) = uVar5;
  if (param_4 == FStatNameAndInfo::GpuStatCategory) {
    uVar5 = local_res14 & 0xffdbf3ff | 0x30200;
  }
  *(uint *)(pFVar1 + lVar6 * 0x10 + 0xc) = uVar5 & 0xffff1fff | 0x1000;
  lVar6 = (this->DelayedMessages).ArrayNum;
  if (lVar6 == (this->DelayedMessages).ArrayMax) {
    lVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,&(this->DelayedMessages).ArrayMax);
  }
  (this->DelayedMessages).ArrayNum = lVar6 + 1;
  pFVar1 = (this->DelayedMessages).AllocatorInstance.Data;
  FStatNameAndInfo::FStatNameAndInfo
            ((FStatNameAndInfo *)(pFVar1 + lVar6 * 0x10 + 8),param_1,param_3,param_4,param_2,param_7
             ,param_6,param_8,param_9,param_10);
  *(uint *)(pFVar1 + lVar6 * 0x10 + 0xc) = *(uint *)(pFVar1 + lVar6 * 0x10 + 0xc) & 0xffff1fff;
  *(uint *)(pFVar1 + lVar6 * 0x10 + 0xc) = *(uint *)(pFVar1 + lVar6 * 0x10 + 0xc) | 0x1000;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// AddThreadMetadata @ 1419dd400

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStartupMessages::AddThreadMetadata(FStartupMessages *this,FName param_1,uint param_2)

{
  ForAnyElementType FVar1;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%s%x_0");
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar1.Data = local_18.Data.AllocatorInstance.Data;
  }
  AddMetadata(this,param_1,(wchar_t *)FVar1.Data,"STATGROUP_Threads","STATCAT_Advanced",L"Threads",
              true,ST_int64,true,false,MCR_Invalid);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// Get @ 1419fc0a0

FStartupMessages * __cdecl FStartupMessages::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FStartupMessages *pFVar3;
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  
  if (Messages == (FStartupMessages *)0x0) {
    FLLMScope::FLLMScope(local_res8,Stats,false,None,Default,true);
    FMemScope::FMemScope(local_res10,Stats,true);
    bVar2 = IsInGameThread();
    if ((!bVar2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsSystemTypes.cpp"
                           ,0x105,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FStartupMessages *)(*pcVar1)();
      return pFVar3;
    }
    pFVar3 = ::operator_new(0x40);
    if (pFVar3 != (FStartupMessages *)0x0) {
      (pFVar3->DelayedMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar3->DelayedMessages).ArrayNum = 0;
      (pFVar3->DelayedMessages).ArrayMax = 0;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar3->CriticalSection,4000);
    }
    Messages = pFVar3;
    FMemScope::~FMemScope(local_res10);
    FLLMScope::~FLLMScope(local_res8);
  }
  return Messages;
}

