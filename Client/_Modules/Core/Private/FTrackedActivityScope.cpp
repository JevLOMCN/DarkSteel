// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FTrackedActivityScope @ 141919150

/* WARNING: Removing unreachable block (ram,0x0001419192b3) */

FTrackedActivityScope * __thiscall
FTrackedActivityScope::FTrackedActivityScope
          (FTrackedActivityScope *this,FTrackedActivity *param_1,wchar_t *param_2,bool param_3,
          ETrackedActivityLight param_4)

{
  int *piVar1;
  FActivity *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FTrackedActivityManager *this_00;
  FTrackedActivityScope *pFVar7;
  FString local_38;
  FScriptContainerElement local_28;
  FScriptContainerElement local_27;
  
  this->Activity = param_1;
  this_00 = FTrackedActivityManager::Get();
  pFVar2 = param_1->Internal;
  if ((this_00 == (FTrackedActivityManager *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FTrackedActivityScope *)(*pcVar4)();
    return pFVar7;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this_00);
  ::FString::FString(&local_38,param_2);
  pFVar3 = (pFVar2->Stack).AllocatorInstance.Data;
  local_28 = (FScriptContainerElement)param_4;
  local_27 = (FScriptContainerElement)param_3;
  if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)(pFVar2->Stack).ArrayMax * 0x18))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FTrackedActivityScope *)(*pcVar4)();
    return pFVar7;
  }
  iVar6 = (pFVar2->Stack).ArrayNum;
  piVar1 = &(pFVar2->Stack).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(pFVar2->Stack).AllocatorInstance,piVar1);
  }
  (pFVar2->Stack).ArrayNum = iVar6 + 1;
  pFVar3 = (pFVar2->Stack).AllocatorInstance.Data + (longlong)iVar6 * 0x18;
  *(undefined8 *)pFVar3 = 0;
  *(FScriptContainerElement **)pFVar3 = local_38.Data.AllocatorInstance.Data;
  *(int *)(pFVar3 + 8) = local_38.Data.ArrayNum;
  *(int *)(pFVar3 + 0xc) = local_38.Data.ArrayMax;
  pFVar3[0x10] = local_28;
  pFVar3[0x11] = local_27;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FTrackedActivityManager::SendEvent(this_00,Changed,pFVar2);
  if (this_00 != (FTrackedActivityManager *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
  }
  return this;
}

// ~FTrackedActivityScope @ 14191c980

void __thiscall FTrackedActivityScope::~FTrackedActivityScope(FTrackedActivityScope *this)

{
  uint uVar1;
  FTrackedActivity *pFVar2;
  FActivity *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FTrackedActivityManager *this_00;
  
  pFVar2 = this->Activity;
  this_00 = FTrackedActivityManager::Get();
  pFVar3 = pFVar2->Internal;
  if (this_00 == (FTrackedActivityManager *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this_00);
  iVar6 = (pFVar3->Stack).ArrayNum;
  uVar1 = iVar6 - 1;
  if (iVar6 < (int)uVar1) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,-1,&(pFVar3->Stack).AllocatorInstance,&(pFVar3->Stack).ArrayNum,
                       &(pFVar3->Stack).ArrayMax);
    DefaultConstructItems<FTrackedActivityManager::FInfo,int>
              ((pFVar3->Stack).AllocatorInstance.Data + (longlong)iVar6 * 0x18,-1);
  }
  else {
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if ((int)uVar1 < iVar6) {
      TArray<FTrackedActivityManager::FInfo,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                (&pFVar3->Stack,uVar1,1);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,&(pFVar3->Stack).AllocatorInstance,(pFVar3->Stack).ArrayNum,
                 &(pFVar3->Stack).ArrayMax);
    }
  }
  FTrackedActivityManager::SendEvent(this_00,Changed,pFVar3);
  if (this_00 != (FTrackedActivityManager *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
  }
  return;
}

