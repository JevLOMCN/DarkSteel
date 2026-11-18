// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// GetPrecachedBlock @ 141aacda0

/* WARNING: Enum "Type": Some values do not have unique names */

uchar * __thiscall
FMicrosoftAsyncReadFileHandle::GetPrecachedBlock
          (FMicrosoftAsyncReadFileHandle *this,uchar *param_1,long64 param_2,long64 param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  uchar *_Dst;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory> FVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FName local_30;
  
  lpCriticalSection = &this->LiveRequestsCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar6 = (this->LiveRequests).AllocatorInstance.Data;
  _Dst = (uchar *)0x0;
  iVar2 = (this->LiveRequests).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->LiveRequests).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMicrosoftReadRequest_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    lVar3 = *(longlong *)pFVar6;
    if ((((param_2 < *(longlong *)(lVar3 + 0x58)) ||
         (*(longlong *)(lVar3 + 0x58) + *(longlong *)(lVar3 + 0x60) < param_2 + param_3)) ||
        (*(char *)(lVar3 + 0x41) == '\0')) || (*(longlong *)(lVar3 + 8) == 0)) {
      _Dst = (uchar *)0x0;
    }
    else {
      _Dst = param_1;
      if (param_1 == (uchar *)0x0) {
        _Dst = FMemory::Malloc(param_3,0);
        if (param_3 != 0) {
          FVar5 = StatPtr_STAT_AsyncFileMemory;
          if (StatPtr_STAT_AsyncFileMemory == (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)0x0
             ) {
            pFVar4 = ::FName::FName(&local_30,"STAT_AsyncFileMemory");
            FVar5 = (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)
                    FThreadSafeStaticStatBase::DoSetup
                              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileMemory,*pFVar4,
                               L"Async File Handle Memory","STATGROUP_Memory","STATCAT_Advanced",
                               L"Memory",true,false,ST_int64,false,false,MCR_Physical);
          }
          FThreadStats::AddMessage<__int64>(*(FName *)FVar5,Add,param_3,false);
        }
      }
      memcpy(_Dst,(void *)((*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x58)) + param_2),
             param_3);
      if (_Dst != (uchar *)0x0) break;
    }
    pFVar6 = pFVar6 + 8;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return _Dst;
}

// RemoveRequest @ 141abc5d0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FMicrosoftAsyncReadFileHandle::RemoveRequest
          (FMicrosoftAsyncReadFileHandle *this,FMicrosoftReadRequest *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  FMicrosoftReadRequest *pFVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  FMicrosoftReadRequest *local_res10;
  int local_res18;
  
  lpCriticalSection = &this->LiveRequestsCritical;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar1 = (this->LiveRequests).AllocatorInstance.Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar1 + (longlong)(this->LiveRequests).ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res18 = (this->LiveRequests).ArrayNum;
  lVar4 = (longlong)local_res18;
  if (local_res18 != 0) {
    iVar9 = 0;
    pFVar1 = (this->LiveRequests).AllocatorInstance.Data;
    bVar3 = *(FMicrosoftReadRequest **)pFVar1 != local_res10;
    lVar8 = 0;
    pFVar5 = local_res10;
    iVar6 = 0;
    do {
      iVar7 = iVar6;
      do {
        lVar8 = lVar8 + 1;
        iVar7 = iVar7 + 1;
        if (lVar4 <= lVar8) break;
      } while (bVar3 == (*(FMicrosoftReadRequest **)(pFVar1 + lVar8 * 8) != pFVar5));
      if (bVar3 != false) {
        if (iVar9 != iVar6) {
          memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar6 * 8,
                  (longlong)(iVar7 - iVar6) << 3);
          pFVar5 = local_res10;
        }
        iVar9 = iVar9 + (iVar7 - iVar6);
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar6 = iVar7;
    } while (lVar8 < lVar4);
    (this->LiveRequests).ArrayNum = iVar9;
    if (local_res18 - iVar9 == 1) goto LAB_141abc785;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("LiveRequests.Remove(Req) == 1",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Microsoft\\MicrosoftAsyncIO.h"
                     ,0x1bb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_141abc785:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

