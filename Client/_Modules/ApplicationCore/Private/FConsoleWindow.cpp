// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 50

// <lambda_invoker_cdecl> @ 1423b8a50

int __cdecl
`FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc'[::P]::<lambda_2>::<lambda_invoker_cdecl>
          (HWND__ *param_1,long64 param_2)

{
  InvalidateRect((HWND)param_1,(RECT *)0x0,1);
  return 1;
}

// FConsoleWindow @ 1423c16e0

/* WARNING: Enum "Type": Some values do not have unique names */

FConsoleWindow * __thiscall
FWindowsConsoleOutputDevice2::FConsoleWindow::FConsoleWindow
          (FConsoleWindow *this,FWindowsConsoleOutputDevice2 *param_1)

{
  FDateTime FVar1;
  HBRUSH pHVar2;
  HANDLE pvVar3;
  LARGE_INTEGER local_res8;
  <lambda_1> local_res10;
  
  this->Owner = param_1;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->NewLogEntriesCs,4000);
  (this->Log).IndexMask = 0xffffffff;
  (this->NewLogEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewLogEntries).ArrayNum = 0;
  (this->NewLogEntries).ArrayMax = 0;
  this->DpiScale = 1.0;
  (this->TempLogEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TempLogEntries).ArrayNum = 0;
  (this->TempLogEntries).ArrayMax = 0;
  (this->IncludeFilter).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncludeFilter).ArrayNum = 0;
  (this->IncludeFilter).ArrayMax = 0;
  (this->ExcludeFilter).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExcludeFilter).ArrayNum = 0;
  (this->ExcludeFilter).ArrayMax = 0;
  (this->IncludeVerbosity).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncludeVerbosity).ArrayNum = 0;
  (this->IncludeVerbosity).ArrayMax = 0;
  (this->ExcludeVerbosity).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExcludeVerbosity).ArrayNum = 0;
  (this->ExcludeVerbosity).ArrayMax = 0;
  (this->Log).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Log).Front = 0;
  (this->Log).AfterBack = 0;
  (this->StartDateTime).Ticks = 0;
  this->AddedEntryLogVirtualIndex = -1;
  this->LogIndexOffset = 0;
  this->LogFontWidth = 0;
  this->LogFontHeight = 0;
  this->LogScrollGrabPos = -1;
  this->NcButtonHot = -1;
  this->NcButtonDown = -1;
  this->RightClickedItem = -1;
  (this->SelectedWord).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedWord).Data.ArrayNum = 0;
  (this->SelectedWord).Data.ArrayMax = 0;
  (this->SelectedCategory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedCategory).Data.ArrayNum = 0;
  (this->SelectedCategory).Data.ArrayMax = 0;
  (this->Activities).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Activities).ArrayNum = 0;
  (this->Activities).ArrayMax = 0;
  *(undefined8 *)&this->IdToActivityIndex = 0;
  *(undefined8 *)&(this->IdToActivityIndex).field_0x8 = 0;
  *(undefined8 *)&(this->IdToActivityIndex).field_0x20 = 0;
  *(undefined4 *)&(this->IdToActivityIndex).field_0x28 = 0;
  *(undefined4 *)&(this->IdToActivityIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->IdToActivityIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IdToActivityIndex).field_0x34 = 0;
  *(undefined8 *)&(this->IdToActivityIndex).field_0x40 = 0;
  *(undefined4 *)&(this->IdToActivityIndex).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ActivityModificationsCs,4000);
  (this->ActivityModifications).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActivityModifications).Pairs.ArrayNum = 0;
  (this->ActivityModifications).Pairs.ArrayMax = 0;
  this->ActivitiesTotalHeight = 0;
  this->bAutoScrollLog = true;
  this->bSuspendAddingEntries = false;
  this->CheckpointIndex = 0;
  this->bIsVisible = false;
  this->bExiting = false;
  this->ConsoleWidth = 0xa0;
  this->ConsoleHeight = 4000;
  this->ConsolePosX = 0;
  this->ConsolePosY = 0;
  this->ConsoleColor = DarkGray;
  this->ConsoleShowDateTime = 0;
  (this->ConsoleIncludeFilterStr).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConsoleIncludeFilterStr).Data.ArrayNum = 0;
  (this->ConsoleIncludeFilterStr).Data.ArrayMax = 0;
  (this->ConsoleExcludeFilterStr).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConsoleExcludeFilterStr).Data.ArrayNum = 0;
  (this->ConsoleExcludeFilterStr).Data.ArrayMax = 0;
  (this->ConsoleTitle).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConsoleTitle).Data.ArrayNum = 0;
  (this->ConsoleTitle).Data.ArrayMax = 0;
  this->bConsoleExpanded = false;
  this->bConsoleShowVerbosity = false;
  FVar1 = FDateTime::Now();
                    /* WARNING: Load size is inaccurate */
  (this->StartDateTime).Ticks = *FVar1.Ticks;
  QueryPerformanceCounter(&local_res8);
  this->StartTime =
       ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000) - GStartTime;
  pHVar2 = CreateSolidBrush(0x241ced);
  this->StatusLightBrush[0] = (HBRUSH__ *)pHVar2;
  pHVar2 = CreateSolidBrush(0xffff);
  this->StatusLightBrush[1] = (HBRUSH__ *)pHVar2;
  pHVar2 = CreateSolidBrush(0x80ff80);
  this->StatusLightBrush[2] = (HBRUSH__ *)pHVar2;
  pvVar3 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  this->DirtyEvent = pvVar3;
  local_res8 = (LARGE_INTEGER)this;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_FWindowsConsoleOutputDevice2::FConsoleWindow::FConsoleWindow_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnExit,&local_res10);
  return this;
}

// ~FConsoleWindow @ 1423c6570

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWindowsConsoleOutputDevice2::FConsoleWindow::~FConsoleWindow(FConsoleWindow *this)

{
  TRingBuffer<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,TSizedDefaultAllocator<32>_>
  *this_00;
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  HBRUSH__ **ppHVar3;
  longlong lVar4;
  
  FTrackedActivity::UnregisterEventListener();
  this->bExiting = true;
  PostMessageW((HWND)this->MainHwnd,0x10,0,0);
  WaitForSingleObject(this->Thread,3000);
  CloseHandle(this->Thread);
  this->Thread = (void *)0x0;
  CloseHandle(this->DirtyEvent);
  ppHVar3 = this->StatusLightBrush;
  lVar4 = 3;
  do {
    DeleteObject(*ppHVar3);
    ppHVar3 = ppHVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  pFVar1 = (this->ConsoleTitle).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConsoleExcludeFilterStr).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConsoleIncludeFilterStr).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TTuple<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification>,int>
            ((TTuple<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification> *)
             (this->ActivityModifications).Pairs.AllocatorInstance.Data,
             (this->ActivityModifications).Pairs.ArrayNum);
  pFVar1 = (this->ActivityModifications).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ActivityModificationsCs);
  *(undefined4 *)&(this->IdToActivityIndex).field_0x48 = 0;
  pvVar2 = *(void **)&(this->IdToActivityIndex).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->IdToActivityIndex);
  DestructItems<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity,int>
            ((Activity *)(this->Activities).AllocatorInstance.Data,(this->Activities).ArrayNum);
  pFVar1 = (this->Activities).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SelectedCategory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SelectedWord).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = &this->Log;
  TRingBuffer<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,TSizedDefaultAllocator<32>_>::
  DestructRange(this_00,(this->Log).Front,(this->Log).AfterBack);
  (this->Log).Front = 0;
  (this->Log).AfterBack = 0;
  TRingBuffer<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,TSizedDefaultAllocator<32>_>::
  Reallocate(this_00,0);
  pFVar1 = (this_00->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExcludeVerbosity).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IncludeVerbosity).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ExcludeFilter).AllocatorInstance.Data,(this->ExcludeFilter).ArrayNum)
  ;
  pFVar1 = (this->ExcludeFilter).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->IncludeFilter).AllocatorInstance.Data,(this->IncludeFilter).ArrayNum)
  ;
  pFVar1 = (this->IncludeFilter).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FWindowsConsoleOutputDevice2::FConsoleWindow::NewLogEntry,int>
            ((NewLogEntry *)(this->TempLogEntries).AllocatorInstance.Data,
             (this->TempLogEntries).ArrayNum);
  pFVar1 = (this->TempLogEntries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FWindowsConsoleOutputDevice2::FConsoleWindow::NewLogEntry,int>
            ((NewLogEntry *)(this->NewLogEntries).AllocatorInstance.Data,
             (this->NewLogEntries).ArrayNum);
  pFVar1 = (this->NewLogEntries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001423c679e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->NewLogEntriesCs);
  return;
}

// operator() @ 1423ca490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc'::__l2::<lambda_1>::operator()
          (void *this,EEvent param_1,FInfo *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  wchar_t *pwVar1;
  longlong lVar2;
  uint uVar3;
  int *piVar4;
  ActivityModification *pAVar5;
  int iVar6;
  ForAnyElementType FVar7;
  int *piVar8;
  undefined1 auStackY_278 [32];
  FString local_238;
  wchar_t local_228 [256];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_278;
  pwVar1 = param_2->Name;
  TCString<wchar_t>::SprintfImpl(local_228,L"%u%s");
  if (param_1 == Removed) {
    lVar2 = *(longlong *)this;
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 0x2b0);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    ::FString::FString(&local_238,local_228);
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_238.Data.ArrayNum != 0) {
      FVar7.Data = local_238.Data.AllocatorInstance.Data;
    }
    iVar6 = local_238.Data.ArrayNum + -1;
    if (local_238.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar7.Data);
    iVar6 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                        *)(lVar2 + 0x260),uVar3,&local_238);
    piVar4 = (int *)0x0;
    if (iVar6 != -1) {
      piVar4 = (int *)((longlong)iVar6 * 0x20 + *(longlong *)(lVar2 + 0x260));
    }
    piVar8 = piVar4 + 4;
    if (piVar4 == (int *)0x0) {
      piVar8 = (int *)0x0;
    }
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    if (piVar8 != (int *)0x0) {
      pAVar5 = TSortedMap<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification,TSizedDefaultAllocator<32>,TLess<int_const_>_>
               ::FindOrAddImpl<int_const_&>
                         ((TSortedMap<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification,TSizedDefaultAllocator<32>,TLess<int_const_>_>
                           *)(lVar2 + 0x2d8),piVar8);
      pAVar5->bRemove = true;
      SetEvent(*(HANDLE *)(lVar2 + 0x2f0));
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    FWindowsConsoleOutputDevice2::FConsoleWindow::SetActivity
              (*(FConsoleWindow **)this,local_228,pwVar1,param_2->Status,(uint)param_2->Light,
               param_2->SortValue,param_2->Type == Activity);
  }
  return;
}

// operator() @ 1423cb9b0

void __thiscall
`FWindowsConsoleOutputDevice2::FConsoleWindow::LogHwndWndProc'::__l15::<lambda_1>::operator()
          (void *this,wchar_t *param_1,int param_2)

{
  LPCMENUITEMINFOW lpmi;
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  
  *(undefined4 *)(*(longlong *)this + 4) = 0x62;
  *(undefined4 *)(*(longlong *)this + 8) = 0;
  *(wchar_t **)(*(longlong *)this + 0x38) = param_1;
  *(int *)(*(longlong *)this + 0x10) = param_2;
  lpmi = *(LPCMENUITEMINFOW *)this;
  uVar1 = lpmi->dwItemData;
  lpmi->dwItemData = uVar1 + 1;
  if (uVar1 != (uVar1 & 0xffffffff)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001423cba46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InsertMenuItemW((HMENU)**(undefined8 **)((longlong)this + 8),(UINT)uVar1,1,lpmi);
  return;
}

// operator() @ 1423cba60

void __thiscall
`FWindowsConsoleOutputDevice2::FConsoleWindow::
TraverseActivityPositions<`FWindowsConsoleOutputDevice2::FConsoleWindow::UpdateActivityPositions'::__l2::<lambda_1>_>'
::__l2::<lambda_2>::operator()
          (void *this,
          TArray<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  double dVar1;
  int iVar2;
  LONG dwNewLong;
  int iVar3;
  ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*> FVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*> FVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  
  dVar8 = __real_4032000000000000;
  iVar2 = param_1->ArrayNum;
  uVar17 = 0;
  if ((longlong)iVar2 != 0) {
    lVar16 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar17 < param_1->ArrayNum) {
        uVar10 = ~uVar17 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar4 = (param_1->AllocatorInstance).SecondaryData;
      FVar12 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)param_1;
      if (FVar4 != (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0) {
        FVar12 = FVar4;
      }
      puVar5 = *(undefined8 **)((longlong)FVar12 + lVar16 * 8);
      if (1 < *(int *)(puVar5 + 3)) {
        plVar6 = *(longlong **)this;
        dwNewLong = **(LONG **)((longlong)this + 0x20);
        iVar14 = **(int **)((longlong)this + 8) + 0x10;
        iVar13 = **(int **)((longlong)this + 0x18) + -0x10;
        iVar15 = iVar13;
        if (0x5a < iVar13) {
          iVar15 = 0x5a;
        }
        dVar1 = *(double *)(*plVar6 + 0xb8);
        iVar3 = **(int **)((longlong)this + 0x10);
        SetWindowPos((HWND)*puVar5,(HWND)0x0,(int)((double)iVar14 * dVar1),
                     (int)(dVar1 * (double)iVar3),(int)((double)iVar15 * dVar1),(int)(dVar1 * dVar8)
                     ,*(UINT *)plVar6[1]);
        SetWindowLongW((HWND)*puVar5,-0x15,dwNewLong);
        dVar1 = *(double *)(*plVar6 + 0xb8);
        iVar11 = 0;
        if (0 < iVar13 - iVar15) {
          iVar11 = iVar13 - iVar15;
        }
        SetWindowPos((HWND)puVar5[1],(HWND)0x0,(int)((double)(iVar15 + iVar14) * dVar1),
                     (int)(dVar1 * (double)iVar3),(int)((double)iVar11 * dVar1),(int)(dVar1 * dVar8)
                     ,*(UINT *)plVar6[1]);
        SetWindowLongW((HWND)puVar5[1],-0x15,dwNewLong);
        **(int **)((longlong)this + 0x10) =
             **(int **)((longlong)this + 0x10) + **(int **)((longlong)this + 0x28);
        **(int **)((longlong)this + 0x20) = **(int **)((longlong)this + 0x20) + 1;
        if (**(int **)((longlong)this + 0x30) <= **(int **)((longlong)this + 0x20)) {
          **(int **)((longlong)this + 0x20) = 0;
          **(undefined4 **)((longlong)this + 0x10) = **(undefined4 **)((longlong)this + 0x38);
          **(int **)((longlong)this + 8) =
               **(int **)((longlong)this + 8) + **(int **)((longlong)this + 0x40);
        }
      }
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + 1;
    } while (lVar16 != iVar2);
  }
  return;
}

// operator() @ 1423cbd30

void __thiscall
`FWindowsConsoleOutputDevice2::FConsoleWindow::
TraverseActivityPositions<`FWindowsConsoleOutputDevice2::FConsoleWindow::HandleActivityModifications'::__l50::<lambda_1>_>'
::__l2::<lambda_2>::operator()
          (void *this,
          TArray<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int iVar1;
  ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*> FVar6;
  uint uVar7;
  longlong lVar8;
  
  iVar1 = param_1->ArrayNum;
  uVar7 = 0;
  if ((longlong)iVar1 != 0) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar2 = (param_1->AllocatorInstance).SecondaryData;
      FVar6 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)param_1;
      if (FVar2 != (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0) {
        FVar6 = FVar2;
      }
      if (1 < *(int *)(*(longlong *)((longlong)FVar6 + lVar8 * 8) + 0x18)) {
        **(int **)((longlong)this + 0x10) =
             **(int **)((longlong)this + 0x10) + **(int **)((longlong)this + 0x28);
        **(int **)((longlong)this + 0x20) = **(int **)((longlong)this + 0x20) + 1;
        if (**(int **)((longlong)this + 0x30) <= **(int **)((longlong)this + 0x20)) {
          **(int **)((longlong)this + 0x20) = 0;
          **(undefined4 **)((longlong)this + 0x10) = **(undefined4 **)((longlong)this + 0x38);
          **(int **)((longlong)this + 8) =
               **(int **)((longlong)this + 8) + **(int **)((longlong)this + 0x40);
        }
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 != iVar1);
  }
  return;
}

// operator() @ 1423cbe40

void __thiscall
`FWindowsConsoleOutputDevice2::FConsoleWindow::
TraverseActivityPositions<`FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc'::__l74::<lambda_1>_>'
::__l2::<lambda_2>::operator()
          (void *this,
          TArray<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*> FVar6;
  longlong lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*> FVar13;
  longlong lVar14;
  uint uVar15;
  
  dVar10 = __real_4026000000000000;
  iVar2 = param_1->ArrayNum;
  uVar15 = 0;
  if ((longlong)iVar2 != 0) {
    lVar14 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar6 = (param_1->AllocatorInstance).SecondaryData;
      FVar13 = (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)param_1;
      if (FVar6 != (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0) {
        FVar13 = FVar6;
      }
      lVar7 = *(longlong *)((longlong)FVar13 + lVar14 * 8);
      if (1 < *(int *)(lVar7 + 0x18)) {
        puVar8 = *(undefined8 **)this;
        iVar3 = **(int **)((longlong)this + 0x10);
        iVar4 = **(int **)((longlong)this + 8);
        iVar5 = *(int *)(lVar7 + 0x30);
        if (iVar5 != 0) {
          SelectObject(*(HDC *)*puVar8,*(HGDIOBJ *)(puVar8[1] + 0x1c8 + (longlong)iVar5 * 8));
          dVar1 = *(double *)(puVar8[1] + 0xb8);
          RoundRect(*(HDC *)*puVar8,(int)((double)(iVar4 + 1) * dVar1),
                    (int)((double)(iVar3 + 3) * dVar1),(int)((double)(iVar4 + 0xc) * dVar1),
                    (int)((double)(iVar3 + 0xf) * dVar1),(int)(dVar1 * dVar10),(int)(dVar1 * dVar10)
                   );
        }
        **(int **)((longlong)this + 0x10) =
             **(int **)((longlong)this + 0x10) + **(int **)((longlong)this + 0x28);
        **(int **)((longlong)this + 0x20) = **(int **)((longlong)this + 0x20) + 1;
        if (**(int **)((longlong)this + 0x30) <= **(int **)((longlong)this + 0x20)) {
          **(int **)((longlong)this + 0x20) = 0;
          **(undefined4 **)((longlong)this + 0x10) = **(undefined4 **)((longlong)this + 0x38);
          **(int **)((longlong)this + 8) =
               **(int **)((longlong)this + 8) + **(int **)((longlong)this + 0x40);
        }
      }
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + 1;
    } while (lVar14 != iVar2);
  }
  return;
}

// operator() @ 1423cc040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc'::__l2::<lambda_2>::operator()
          (void *this,FInfo *param_1)

{
  wchar_t *pwVar1;
  undefined1 auStackY_258 [32];
  wchar_t local_218 [256];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_258;
  pwVar1 = param_1->Name;
  TCString<wchar_t>::SprintfImpl(local_218,L"%u%s");
  FWindowsConsoleOutputDevice2::FConsoleWindow::SetActivity
            (*(FConsoleWindow **)this,local_218,pwVar1,param_1->Status,(uint)param_1->Light,
             param_1->SortValue,param_1->Type == Activity);
  return;
}

// operator() @ 1423cc520

void __thiscall
`FWindowsConsoleOutputDevice2::FConsoleWindow::LogHwndWndProc'::__l15::<lambda_2>::operator()
          (void *this)

{
  LPCMENUITEMINFOW lpmi;
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  
  *(undefined4 *)(*(longlong *)this + 4) = 0;
  *(undefined4 *)(*(longlong *)this + 8) = 0x800;
  lpmi = *(LPCMENUITEMINFOW *)this;
  uVar1 = lpmi->dwItemData;
  lpmi->dwItemData = uVar1 + 1;
  if (uVar1 != (uVar1 & 0xffffffff)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001423cc5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InsertMenuItemW((HMENU)**(undefined8 **)((longlong)this + 8),(UINT)uVar1,1,lpmi);
  return;
}

// operator() @ 1423cc810

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc'::__l104::<lambda_3>::operator()
          (void *this)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  int *piVar6;
  
  pIVar2 = IModularFeatures::Get();
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar6 < `public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                    ::__l2::Name,L"ConsoleCommandExecutor");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))
                    (pIVar2,`public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                            ::__l2::Name);
  if (0 < iVar1) {
    pwVar5 = L"";
    if (4 < (byte)LogExec._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:___cdecl_`public:___int64___cdecl_FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc(HWND__*___ptr64,unsigned_int,unsigned___int64,__int64)___ptr64'::`104'::<lambda_3>::operator()(void)const___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogExec);
    }
    pIVar2 = IModularFeatures::Get();
    if ((*piVar6 < `public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                   ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'::__l2
       ::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                      ::__l2::Name,L"ConsoleCommandExecutor");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))
                      (pIVar2,`public:_static_class_FName___cdecl_IConsoleCommandExecutor::ModularFeatureName(void)'
                              ::__l2::Name,0);
    plVar4 = (longlong *)(lVar3 + -8);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
    if (*(int *)((longlong)this + 8) != 0) {
      pwVar5 = *(wchar_t **)this;
    }
                    /* WARNING: Could not recover jumptable at 0x0001423cc8ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x40))(plVar4,pwVar5);
    return;
  }
  if (4 < (byte)LogExec._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`public:___cdecl_`public:___int64___cdecl_FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc(HWND__*___ptr64,unsigned_int,unsigned___int64,__int64)___ptr64'::`104'::<lambda_3>::operator()(void)const___ptr64'
                ::__l17::LOG_Static,(FLogCategoryBase *)&LogExec);
  }
  return;
}

// AddEntryToLogHwnd @ 1423cfa30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FWindowsConsoleOutputDevice2::FConsoleWindow::AddEntryToLogHwnd
          (FConsoleWindow *this,LogEntry *param_1,int param_2)

{
  wchar_t wVar1;
  code *pcVar2;
  wchar_t wVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  WPARAM WVar7;
  wchar_t wVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  FScriptContainerElement *pFVar11;
  wchar_t *pwVar12;
  FScriptContainerElement *pFVar13;
  longlong lParam;
  bool bVar14;
  undefined1 auStack_8b8 [32];
  WPARAM local_898;
  undefined1 local_888;
  undefined1 local_887;
  undefined1 local_886;
  undefined1 local_885 [5];
  wchar_t *local_880;
  int local_878;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_8b8;
  pFVar11 = (this->IncludeVerbosity).AllocatorInstance.Data;
  iVar5 = (this->IncludeVerbosity).ArrayNum;
  pFVar13 = pFVar11 + iVar5;
  local_878 = param_2;
  while( true ) {
    if ((this->IncludeVerbosity).ArrayNum != iVar5) {
      local_888 = 0;
      `TCheckedPointerIterator<enum_ELogVerbosity::Type,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_888);
    }
    if (pFVar11 == pFVar13) break;
    if ((FScriptContainerElement)param_1->Verbosity != *pFVar11) {
      return -1;
    }
    pFVar11 = pFVar11 + 1;
  }
  pFVar11 = (this->ExcludeVerbosity).AllocatorInstance.Data;
  iVar5 = (this->ExcludeVerbosity).ArrayNum;
  pFVar13 = pFVar11 + iVar5;
  while( true ) {
    if ((this->ExcludeVerbosity).ArrayNum != iVar5) {
      local_887 = 0;
      `TCheckedPointerIterator<enum_ELogVerbosity::Type,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_887);
    }
    if (pFVar11 == pFVar13) break;
    if ((FScriptContainerElement)param_1->Verbosity == *pFVar11) {
      return -1;
    }
    pFVar11 = pFVar11 + 1;
  }
  local_868.Base = local_848;
  local_868.CurPos = local_848;
  local_868.End = (wchar_t *)local_48;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  CreateLogEntryText(this,&local_868,param_1,true);
  if (local_868.End < local_868.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_868,1);
  }
  *local_868.CurPos = L'\0';
  iVar5 = (this->IncludeFilter).ArrayNum;
  pFVar13 = (this->IncludeFilter).AllocatorInstance.Data;
  pFVar11 = pFVar13 + (longlong)iVar5 * 0x10;
  local_880 = local_868.Base;
  pwVar12 = local_868.Base;
  do {
    if ((this->IncludeFilter).ArrayNum != iVar5) {
      local_886 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_886)
      ;
    }
    if (pFVar13 == pFVar11) {
      iVar5 = (this->ExcludeFilter).ArrayNum;
      pFVar13 = (this->ExcludeFilter).AllocatorInstance.Data;
      pFVar11 = pFVar13 + (longlong)iVar5 * 0x10;
      break;
    }
    if (*(int *)(pFVar13 + 8) == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = *(wchar_t **)pFVar13;
      if (pwVar9 == (wchar_t *)0x0) goto LAB_1423cfba0;
    }
    if (pwVar12 == (wchar_t *)0x0) goto LAB_1423cfba0;
    wVar1 = *pwVar9;
    wVar3 = -(ushort)((ushort)wVar1 - 0x61 < 0x1a) & 0x20;
    if (wVar1 != wVar3) {
      sVar6 = wcslen(pwVar9);
      wVar8 = *pwVar12;
      if (wVar8 == L'\0') goto LAB_1423cfba0;
      while ((pwVar10 = pwVar12 + 1,
             (wchar_t)(wVar8 - (-(ushort)((ushort)wVar8 - 0x61 < 0x1a) & 0x20)) !=
             (wchar_t)(wVar1 - wVar3) ||
             (iVar4 = FGenericPlatformStricmp::Strnicmp
                                (pwVar10,pwVar9 + 1,(longlong)((int)sVar6 + -1)), iVar4 != 0))) {
        wVar8 = *pwVar10;
        pwVar12 = pwVar10;
        if (wVar8 == L'\0') {
          iVar5 = -1;
          goto LAB_1423cfdc2;
        }
      }
      bVar14 = pwVar12 == (wchar_t *)0x0;
      pwVar12 = local_880;
      if (bVar14) goto LAB_1423cfba0;
    }
    pFVar13 = pFVar13 + 0x10;
  } while( true );
LAB_1423cfc60:
  if ((this->ExcludeFilter).ArrayNum != iVar5) {
    local_885[0] = 0;
    `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_885);
  }
  if (pFVar13 == pFVar11) {
    lParam = (longlong)local_878;
    this->AddedEntryLogVirtualIndex = local_878;
    WVar7 = SendMessageW((HWND)this->LogHwnd,0x180,0,0x15060d16c);
    iVar5 = (int)WVar7;
    if ((WVar7 != (longlong)iVar5) &&
       (local_898 = WVar7,
       bVar14 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar14)
       ) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    SendMessageW((HWND)this->LogHwnd,0x19a,(longlong)iVar5,lParam);
    this->AddedEntryLogVirtualIndex = -1;
    goto LAB_1423cfdc2;
  }
  pwVar9 = pwVar12;
  if (*(int *)(pFVar13 + 8) != 0) {
    pwVar10 = *(wchar_t **)pFVar13;
    if (pwVar10 != (wchar_t *)0x0) goto LAB_1423cfc99;
LAB_1423cfd36:
    pwVar12 = pwVar9;
    pFVar13 = pFVar13 + 0x10;
    goto LAB_1423cfc60;
  }
  pwVar10 = L"";
LAB_1423cfc99:
  if (pwVar12 == (wchar_t *)0x0) goto LAB_1423cfd36;
  wVar1 = *pwVar10;
  wVar3 = -(ushort)((ushort)wVar1 - 0x61 < 0x1a) & 0x20;
  if (wVar1 == wVar3) {
LAB_1423cfba0:
    iVar5 = -1;
LAB_1423cfdc2:
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
    return iVar5;
  }
  sVar6 = wcslen(pwVar10);
  wVar8 = *pwVar12;
  pwVar9 = local_880;
  if (wVar8 == L'\0') goto LAB_1423cfd36;
  do {
    pwVar9 = pwVar12 + 1;
    if (((wchar_t)(wVar8 - (-(ushort)((ushort)wVar8 - 0x61 < 0x1a) & 0x20)) ==
         (wchar_t)(wVar1 - wVar3)) &&
       (iVar4 = FGenericPlatformStricmp::Strnicmp(pwVar9,pwVar10 + 1,(longlong)((int)sVar6 + -1)),
       iVar4 == 0)) {
      pwVar9 = local_880;
      if (pwVar12 != (wchar_t *)0x0) goto LAB_1423cfba0;
      goto LAB_1423cfd36;
    }
    wVar8 = *pwVar9;
    pwVar12 = pwVar9;
  } while (wVar8 != L'\0');
  pFVar13 = pFVar13 + 0x10;
  pwVar12 = local_880;
  goto LAB_1423cfc60;
}

// AddLogEntry @ 1423cfef0

/* WARNING: Removing unreachable block (ram,0x0001423d00b8) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsConsoleOutputDevice2::FConsoleWindow::AddLogEntry
          (FConsoleWindow *this,TStringView<wchar_t> *param_1,Type param_2,FName *param_3,
          double param_4,ushort param_5)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  longlong lVar7;
  FString local_78;
  wchar_t *local_68;
  undefined8 uStack_60;
  FString local_58;
  FScriptContainerElement local_48;
  FName local_44;
  double local_38;
  ushort local_30;
  
  lpCriticalSection = &this->NewLogEntriesCs;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_68 = param_1->DataPtr;
  uStack_60 = *(undefined8 *)&param_1->Size;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  pFVar6 = ::FString::ConstructFromPtrSize
                     (&local_78,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  if (&local_58 != pFVar6) {
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_58.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = (pFVar6->Data).ArrayNum;
    local_58.Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  local_44 = *param_3;
  pFVar2 = (this->NewLogEntries).AllocatorInstance.Data;
  local_30 = param_5;
  local_38 = param_4;
  local_48 = (FScriptContainerElement)param_2;
  if (((pFVar2 <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 <
       pFVar2 + (longlong)(this->NewLogEntries).ArrayMax * 0x30)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->NewLogEntries).ArrayNum;
  piVar1 = &(this->NewLogEntries).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&(this->NewLogEntries).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->NewLogEntries).AllocatorInstance.Data;
  (this->NewLogEntries).ArrayNum = iVar5 + 1;
  lVar7 = (longlong)iVar5;
  *(undefined8 *)(pFVar2 + lVar7 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar7 * 0x30) = local_58.Data.AllocatorInstance.Data;
  *(int *)(pFVar2 + lVar7 * 0x30 + 8) = local_58.Data.ArrayNum;
  *(int *)(pFVar2 + lVar7 * 0x30 + 0xc) = local_58.Data.ArrayMax;
  pFVar2[lVar7 * 0x30 + 0x10] = local_48;
  *(FName *)(pFVar2 + lVar7 * 0x30 + 0x14) = local_44;
  *(double *)(pFVar2 + lVar7 * 0x30 + 0x20) = local_38;
  *(ushort *)(pFVar2 + lVar7 * 0x30 + 0x28) = local_30;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  SetEvent(this->DirtyEvent);
                    /* WARNING: Could not recover jumptable at 0x0001423d00e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// ClearLog @ 1423d2640

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWindowsConsoleOutputDevice2::FConsoleWindow::ClearLog(FConsoleWindow *this)

{
  this->LogIndexOffset = 0;
  TRingBuffer<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,TSizedDefaultAllocator<32>_>::
  DestructRange(&this->Log,(this->Log).Front,(this->Log).AfterBack);
  (this->Log).Front = 0;
  (this->Log).AfterBack = 0;
  RefreshLogHwnd(this);
  this->CheckpointIndex = 0;
                    /* WARNING: Could not recover jumptable at 0x0001423d26aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetDlgItemTextW((HWND)this->MainHwnd,0x8807,L"Log CHECKPOINT0");
  return;
}

// ClearSelection @ 1423d2750

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWindowsConsoleOutputDevice2::FConsoleWindow::ClearSelection(FConsoleWindow *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  ForAnyElementType FVar4;
  undefined1 local_res10 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  GetSelectedItems(this,&local_18);
  iVar2 = local_18.ArrayNum;
  uVar3 = (ulonglong)local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + uVar3 * 4;
  FVar4.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar4.Data == pFVar1) break;
    SendMessageW((HWND)this->LogHwnd,0x185,0,(longlong)*(int *)FVar4.Data);
    uVar3 = local_18._8_8_ & 0xffffffff;
    FVar4.Data = FVar4.Data + 4;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// CommandHwndWndProc @ 1423d4660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall
FWindowsConsoleOutputDevice2::FConsoleWindow::CommandHwndWndProc
          (FConsoleWindow *this,HWND__ *param_1,uint param_2,ulong64 param_3,long64 param_4)

{
  FWindowsConsoleOutputDevice2 *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long64 lVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_8a8 [32];
  longlong local_888;
  longlong local_880;
  FString local_878;
  FString local_868;
  WCHAR local_858 [1024];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_8a8;
  if (param_2 != 0x101) goto LAB_1423d4906;
  if (param_3 == 0x26) {
    memset(local_858,0,0x800);
    GetWindowTextW((HWND)this->CommandHwnd,local_858,0x400);
    pFVar1 = this->Owner;
    local_878.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_878.Data.ArrayNum = 0;
    local_878.Data.ArrayMax = 0;
    iVar4 = pFVar1->CommandHistoryCursor;
    if ((iVar4 < 0) || (iVar11 = (pFVar1->CommandHistory).ArrayNum, iVar11 <= iVar4)) {
LAB_1423d476e:
      pwVar7 = L"";
    }
    else {
      if ((iVar4 < 0) &&
         (local_888 = (longlong)iVar4, local_880 = (longlong)iVar11,
         bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        lVar6 = (*pcVar2)();
        return lVar6;
      }
      pFVar9 = (pFVar1->CommandHistory).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
      iVar4 = *(int *)(pFVar9 + 8);
      iVar11 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar11 = 0;
      }
      ::FString::AssignRange(&local_878,*(wchar_t **)pFVar9,iVar11);
      pwVar7 = (wchar_t *)local_878.Data.AllocatorInstance.Data;
      if (local_878.Data.ArrayNum == 0) goto LAB_1423d476e;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar7,local_858);
    if (iVar4 == 0) {
      pFVar1 = this->Owner;
      if (0 < pFVar1->CommandHistoryCursor) {
        iVar4 = (pFVar1->CommandHistory).ArrayNum;
        iVar11 = pFVar1->CommandHistoryCursor + -1;
        pFVar1->CommandHistoryCursor = iVar11;
        if (iVar11 < iVar4) {
          if (iVar11 < 0) {
            local_888 = (longlong)iVar11;
            local_880 = (longlong)iVar4;
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              lVar6 = (*pcVar2)();
              return lVar6;
            }
          }
          pFVar9 = (pFVar1->CommandHistory).AllocatorInstance.Data + (longlong)iVar11 * 0x10;
          iVar11 = *(int *)(pFVar9 + 8);
          iVar4 = iVar11 + -1;
          if (iVar11 == 0) {
            iVar4 = 0;
          }
          ::FString::AssignRange(&local_878,*(wchar_t **)pFVar9,iVar4);
        }
      }
    }
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_878.Data.ArrayNum != 0) {
      FVar8.Data = local_878.Data.AllocatorInstance.Data;
    }
    SetWindowTextW((HWND)this->CommandHwnd,(LPCWSTR)FVar8.Data);
    FVar8.Data = local_878.Data.AllocatorInstance.Data;
  }
  else {
    if (param_3 != 0x28) goto LAB_1423d4906;
    pFVar1 = this->Owner;
    local_868.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_868.Data.ArrayNum = 0;
    local_868.Data.ArrayMax = 0;
    iVar4 = (pFVar1->CommandHistory).ArrayNum;
    if (pFVar1->CommandHistoryCursor < iVar4 + -1) {
      uVar10 = pFVar1->CommandHistoryCursor + 1;
      pFVar1->CommandHistoryCursor = uVar10;
      uVar5 = 0;
      if ((int)uVar10 < iVar4) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_888 = (longlong)(int)uVar10;
        local_880 = (longlong)iVar4;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          lVar6 = (*pcVar2)();
          return lVar6;
        }
      }
      pFVar9 = (pFVar1->CommandHistory).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10;
      iVar11 = *(int *)(pFVar9 + 8);
      iVar4 = iVar11 + -1;
      if (iVar11 == 0) {
        iVar4 = 0;
      }
      ::FString::AssignRange(&local_868,*(wchar_t **)pFVar9,iVar4);
      pwVar7 = (wchar_t *)local_868.Data.AllocatorInstance.Data;
      if (local_868.Data.ArrayNum == 0) goto LAB_1423d48c8;
    }
    else {
LAB_1423d48c8:
      pwVar7 = L"";
    }
    SetWindowTextW((HWND)this->CommandHwnd,pwVar7);
    FVar8.Data = local_868.Data.AllocatorInstance.Data;
  }
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
LAB_1423d4906:
  lVar6 = (*this->CommandHwndWndProcPtr)(param_1,param_2,param_3,param_4);
  return lVar6;
}

// CopySelectionToClipboard @ 1423d4f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsConsoleOutputDevice2::FConsoleWindow::CopySelectionToClipboard(FConsoleWindow *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  LRESULT LVar7;
  void *pvVar8;
  ulonglong uVar9;
  int iVar10;
  ulong64 uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_498 [32];
  longlong local_478;
  longlong local_470;
  TArray<int,TSizedDefaultAllocator<32>_> local_468;
  TStringBuilderBase<wchar_t> local_458;
  wchar_t local_438 [512];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_498;
  uVar9 = 0;
  local_468.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_468.ArrayNum = 0;
  local_468.ArrayMax = 0;
  iVar5 = GetSelectedItems(this,&local_468);
  if (iVar5 != 0) {
    local_458.Base = local_438;
    local_458.CurPos = local_438;
    local_458.End = (wchar_t *)local_38;
    local_458.bIsDynamic = false;
    local_458.bIsExternal = false;
    uVar15 = uVar9;
    do {
      uVar12 = (uint)uVar9;
      uVar13 = 0;
      if ((int)uVar12 < local_468.ArrayNum) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if (uVar13 == 0) {
        local_478 = (longlong)(int)uVar12;
        local_470 = (longlong)local_468.ArrayNum;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar10 = this->LogIndexOffset;
      LVar7 = SendMessageW((HWND)this->LogHwnd,0x199,
                           (longlong)*(int *)(local_468.AllocatorInstance.Data + uVar15 * 4),0);
      lVar14 = LVar7 - iVar10;
      uVar13 = (uint)lVar14;
      if ((lVar14 != (int)uVar13) &&
         (local_478 = lVar14,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4)
         ) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar10 = (this->Log).AfterBack - (this->Log).Front;
      uVar6 = 0;
      if ((int)uVar13 < iVar10) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      if (uVar6 == 0) {
        local_470 = CONCAT44(local_470._4_4_,iVar10);
        local_478 = CONCAT44(local_478._4_4_,uVar13);
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                           ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar9 = (ulonglong)((this->Log).Front + uVar13 & (this->Log).IndexMask);
      pFVar2 = (this->Log).AllocatorInstance.Data;
      iVar1 = *(int *)(pFVar2 + uVar9 * 0x30 + 8);
      pvVar8 = *(void **)(pFVar2 + uVar9 * 0x30);
      iVar10 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar10 = 0;
      }
      uVar11 = (ulong64)iVar10;
      if (local_458.End < local_458.CurPos + uVar11) {
        TStringBuilderBase<wchar_t>::Extend(&local_458,uVar11);
      }
      if (iVar10 != 0) {
        pvVar8 = FGenericPlatformString::Memcpy(local_458.CurPos,pvVar8,uVar11 * 2);
        local_458.CurPos = (wchar_t *)((longlong)pvVar8 + uVar11 * 2);
      }
      if (local_458.End < local_458.CurPos + 2) {
        TStringBuilderBase<wchar_t>::Extend(&local_458,2);
      }
      pvVar8 = FGenericPlatformString::Memcpy(local_458.CurPos,L"\r\n",4);
      uVar9 = (ulonglong)(uVar12 + 1);
      uVar15 = uVar15 + 1;
      local_458.CurPos = (wchar_t *)((longlong)pvVar8 + 4);
    } while (uVar15 != (longlong)iVar5);
    if (local_458.End < (wchar_t *)((longlong)pvVar8 + 6)) {
      TStringBuilderBase<wchar_t>::Extend(&local_458,1);
    }
    *local_458.CurPos = L'\0';
    FWindowsPlatformApplicationMisc::ClipboardCopy(local_458.Base);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_458);
  }
  if (local_468.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.AllocatorInstance.Data);
  }
  return;
}

// CreateColors @ 1423d5460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWindowsConsoleOutputDevice2::FConsoleWindow::CreateColors(FConsoleWindow *this)

{
  COLORREF CVar1;
  bool bVar2;
  DWORD DVar3;
  HBRUSH pHVar4;
  HPEN pHVar5;
  FColor_u_0 color;
  undefined1 auStackY_3f18 [32];
  FColor_u_0 local_3ee8 [2];
  FString local_3ee0;
  undefined8 local_3ed0;
  FConfigCacheIni local_3ec8;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x1423d5482;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_3f18;
  this->BorderColor = 0;
  color.Bits = 0;
  switch(this->ConsoleColor) {
  default:
    this->BackgroundColor = 0x202020;
    this->TextColor = 0xdcdcdc;
    this->EditBackgroundColor = 0x404040;
    this->StatusBackgroundColor[0] = 0x2a2a2a;
    this->StatusBackgroundColor[1] = 0x313131;
    this->ButtonColor = 0x303030;
    this->ButtonHighlightColor = 0x646464;
    this->ButtonPressedColor = 0x648282;
    this->ThumbColor = 0x4d4d4d;
    this->ScrollBackgroundColor = 0x303030;
    this->BorderColor = 0x5a5a5a;
    color.Bits = 0;
    break;
  case Gray:
    DVar3 = GetSysColor(0xf);
    this->TextColor = 0;
    this->BackgroundColor = DVar3;
    this->EditBackgroundColor = DVar3;
    DVar3 = GetSysColor(0x16);
    this->StatusBackgroundColor[0] = DVar3;
    DVar3 = GetSysColor(0x14);
    this->StatusBackgroundColor[1] = DVar3;
    DVar3 = GetSysColor(0x16);
    this->ButtonColor = DVar3;
    DVar3 = GetSysColor(0x1c);
    this->ButtonHighlightColor = DVar3;
    DVar3 = GetSysColor(0x1b);
    this->ButtonPressedColor = DVar3;
    DVar3 = GetSysColor(0x10);
    this->ThumbColor = DVar3;
    this->ScrollBackgroundColor = this->ButtonColor;
    DVar3 = GetSysColor(6);
    this->BorderColor = DVar3;
    break;
  case Red:
    this->BackgroundColor = 0x3232c8;
    this->TextColor = 0xe6e6e6;
    this->EditBackgroundColor = 0x3232a0;
    this->StatusBackgroundColor[0] = 0x2828be;
    this->StatusBackgroundColor[1] = 0x3c3cd2;
    this->ButtonColor = 0x3232a0;
    this->ButtonHighlightColor = 0x3232be;
    this->ButtonPressedColor = 0x3232b4;
    this->ThumbColor = 0x323278;
    this->ScrollBackgroundColor = 0x3232a0;
    this->BorderColor = 0x282864;
    break;
  case LightBlue:
    this->BackgroundColor = 0xf4d373;
    color.Bits = 0x140f00;
    this->BorderColor = 0xdc1e1e;
    this->TextColor = 0;
    this->EditBackgroundColor = 0xdcbe64;
    this->StatusBackgroundColor[0] = 0xeac969;
    this->StatusBackgroundColor[1] = 0xfedd7d;
    this->ButtonColor = 0xdcbe64;
    this->ButtonHighlightColor = 0xf4d373;
    this->ButtonPressedColor = 0xffdd7d;
    this->ThumbColor = 0xb4963c;
    this->ScrollBackgroundColor = 0xdcbe64;
    break;
  case DarkBlue:
    this->BackgroundColor = 0x960a0a;
    this->TextColor = 0xdcdcdc;
    this->EditBackgroundColor = 0x640a0a;
    this->StatusBackgroundColor[0] = 0xbe1414;
    this->StatusBackgroundColor[1] = 0xdc1414;
    this->ButtonColor = 0x640a0a;
    this->ButtonHighlightColor = 0xbe0a0a;
    this->ButtonPressedColor = 0x960a0a;
    this->ThumbColor = 0xdc0a0a;
    this->ScrollBackgroundColor = 0x780a0a;
    this->BorderColor = 0xdc1e1e;
    break;
  case Load:
    ::FString::FString(&local_3ee0,L"DebugConsoleColors.ini");
    local_3ed0 = 0;
    FConfigCacheIni::FConfigCacheIni(&local_3ec8,Temporary,(FName)0x0,false);
    FConfigCacheIni::LoadFile(&local_3ec8,&local_3ee0,(FConfigFile *)0x0,(wchar_t *)0x0);
    bVar2 = FConfigCacheIni::GetColor
                      (&local_3ec8,L"Colors",L"Background",(FColor *)&local_3ee8[0]._s_0,&local_3ee0
                      );
    if (bVar2) {
      this->BackgroundColor = (ulong)local_3ee8[0];
    }
    bVar2 = FConfigCacheIni::GetColor
                      (&local_3ec8,L"Colors",L"Text",(FColor *)&local_3ee8[0]._s_0,&local_3ee0);
    if (bVar2) {
      this->TextColor = (ulong)local_3ee8[0];
    }
    bVar2 = FConfigCacheIni::GetColor
                      (&local_3ec8,L"Colors",L"LogBackground",(FColor *)&local_3ee8[0]._s_0,
                       &local_3ee0);
    color.Bits = 0;
    if (bVar2) {
      color = local_3ee8[0];
    }
    bVar2 = FConfigCacheIni::GetColor
                      (&local_3ec8,L"Colors",L"EditBackground",(FColor *)&local_3ee8[0]._s_0,
                       &local_3ee0);
    if (bVar2) {
      this->EditBackgroundColor = (ulong)local_3ee8[0];
    }
    bVar2 = FConfigCacheIni::GetColor
                      (&local_3ec8,L"Colors",L"StatusBackground1",(FColor *)&local_3ee8[0]._s_0,
                       &local_3ee0);
    if (bVar2) {
      this->StatusBackgroundColor[0] = (ulong)local_3ee8[0];
    }
    bVar2 = FConfigCacheIni::GetColor
                      (&local_3ec8,L"Colors",L"StatusBackground2",(FColor *)&local_3ee8[0]._s_0,
                       &local_3ee0);
    if (bVar2) {
      *(FColor_u_0 *)(this->StatusBackgroundColor + 1) = local_3ee8[0];
    }
    bVar2 = FConfigCacheIni::GetColor
                      (&local_3ec8,L"Colors",L"EditBackground",(FColor *)&local_3ee8[0]._s_0,
                       &local_3ee0);
    if (bVar2) {
      this->EditBackgroundColor = (ulong)local_3ee8[0];
    }
    bVar2 = FConfigCacheIni::GetColor
                      (&local_3ec8,L"Colors",L"Button",(FColor *)&local_3ee8[0]._s_0,&local_3ee0);
    if (bVar2) {
      this->ButtonColor = (ulong)local_3ee8[0];
    }
    bVar2 = FConfigCacheIni::GetColor
                      (&local_3ec8,L"Colors",L"ButtonHighlight",(FColor *)&local_3ee8[0]._s_0,
                       &local_3ee0);
    if (bVar2) {
      this->ButtonHighlightColor = (ulong)local_3ee8[0];
    }
    bVar2 = FConfigCacheIni::GetColor
                      (&local_3ec8,L"Colors",L"ButtonPressed",(FColor *)&local_3ee8[0]._s_0,
                       &local_3ee0);
    if (bVar2) {
      this->ButtonPressedColor = (ulong)local_3ee8[0];
    }
    bVar2 = FConfigCacheIni::GetColor
                      (&local_3ec8,L"Colors",L"Thumb",(FColor *)&local_3ee8[0]._s_0,&local_3ee0);
    if (bVar2) {
      this->ThumbColor = (ulong)local_3ee8[0];
    }
    bVar2 = FConfigCacheIni::GetColor
                      (&local_3ec8,L"Colors",L"ScrollBackground",(FColor *)&local_3ee8[0]._s_0,
                       &local_3ee0);
    if (bVar2) {
      this->ScrollBackgroundColor = (ulong)local_3ee8[0];
    }
    bVar2 = FConfigCacheIni::GetColor
                      (&local_3ec8,L"Colors",L"Border",(FColor *)&local_3ee8[0]._s_0,&local_3ee0);
    if (bVar2) {
      this->BorderColor = (ulong)local_3ee8[0];
    }
    FConfigCacheIni::~FConfigCacheIni(&local_3ec8);
    if (local_3ee0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3ee0.Data.AllocatorInstance.Data);
    }
  }
  pHVar4 = CreateSolidBrush(this->TextColor);
  this->TextBrush = (HBRUSH__ *)pHVar4;
  pHVar4 = CreateSolidBrush(this->BackgroundColor);
  this->BackgroundBrush = (HBRUSH__ *)pHVar4;
  pHVar4 = CreateSolidBrush(color.Bits);
  this->LogBackgroundBrush = (HBRUSH__ *)pHVar4;
  pHVar4 = CreateSolidBrush(this->EditBackgroundColor);
  this->EditBackgroundBrush = (HBRUSH__ *)pHVar4;
  pHVar4 = CreateSolidBrush(this->StatusBackgroundColor[0]);
  CVar1 = this->StatusBackgroundColor[1];
  this->StatusBackgroundBrush[0] = (HBRUSH__ *)pHVar4;
  pHVar4 = CreateSolidBrush(CVar1);
  CVar1 = this->ButtonColor;
  this->StatusBackgroundBrush[1] = (HBRUSH__ *)pHVar4;
  pHVar4 = CreateSolidBrush(CVar1);
  this->ButtonBrush = (HBRUSH__ *)pHVar4;
  pHVar4 = CreateSolidBrush(this->ButtonHighlightColor);
  this->ButtonHighlightBrush = (HBRUSH__ *)pHVar4;
  pHVar4 = CreateSolidBrush(this->ButtonPressedColor);
  this->ButtonPressedBrush = (HBRUSH__ *)pHVar4;
  pHVar4 = CreateSolidBrush(this->ThumbColor);
  this->ThumbBrush = (HBRUSH__ *)pHVar4;
  pHVar4 = CreateSolidBrush(this->ScrollBackgroundColor);
  this->ScrollBackgroundBrush = (HBRUSH__ *)pHVar4;
  pHVar5 = CreatePen(0,0,this->TextColor);
  this->NoPen = (HPEN__ *)pHVar5;
  pHVar5 = CreatePen(0,1,this->BorderColor);
  this->BorderPen = (HPEN__ *)pHVar5;
  pHVar5 = CreatePen(6,1,this->BorderColor);
  this->WindowBorderPen = (HPEN__ *)pHVar5;
  pHVar5 = CreatePen(0,1,this->TextColor);
  this->TextPen = (HPEN__ *)pHVar5;
  return;
}

// CreateLogEntryText @ 1423d70d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsConsoleOutputDevice2::FConsoleWindow::CreateLogEntryText
          (FConsoleWindow *this,TStringBuilderBase<wchar_t> *param_1,LogEntry *param_2,bool param_3)

{
  wchar_t wVar1;
  undefined1 auVar2 [16];
  int iVar3;
  TStringBuilderBase<wchar_t> *pTVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar7;
  void *pvVar8;
  wchar_t *pwVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [8];
  FDateTime local_1b0;
  TStringBuilderBase<wchar_t> local_1a8;
  wchar_t local_188 [128];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  ulonglong local_48;
  size_t sVar6;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_1a8.Base = local_188;
  local_1a8.bIsDynamic = false;
  local_1a8.bIsExternal = false;
  local_1a8.CurPos = local_188;
  local_1a8.End = (wchar_t *)&local_88;
  ::FName::AppendString(&param_2->Category,&local_1a8);
  if (this->ConsoleShowDateTime == 1) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_2->Time * __real_416312d000000000 + __real_3fe0000000000000;
    roundpd(extraout_XMM0,auVar2,1);
    TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"%02i:");
    TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"%02i:");
    TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"%02i.");
    TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"%03i  ");
  }
  else if (this->ConsoleShowDateTime == 2) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ =
         (param_2->Time - this->StartTime) * __real_416312d000000000 + __real_3fe0000000000000;
    auVar13 = roundpd(extraout_XMM0,auVar13,1);
    local_1b0.Ticks = (longlong)auVar13._0_8_ + (this->StartDateTime).Ticks;
    FDateTime::ToString(&local_1b0,L"[%Y.%m.%d-%H.%M.%S:%s] ",param_1);
  }
  iVar12 = 0;
  if (param_3) {
    if (param_1->End < param_1->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(param_1,1);
    }
    *param_1->CurPos = L'[';
    param_1->CurPos = param_1->CurPos + 1;
    pTVar4 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                       (param_1,local_1a8.Base,
                        (int)((longlong)local_1a8.CurPos - (longlong)local_1a8.Base >> 1));
    pTVar4 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar4,L"][",2);
    pwVar5 = ::ToString(param_2->Verbosity);
    iVar3 = iVar12;
    if (pwVar5 != (wchar_t *)0x0) {
      sVar6 = wcslen(pwVar5);
      iVar3 = (int)sVar6;
    }
    pTVar4 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar4,pwVar5,iVar3);
    if (pTVar4->End < pTVar4->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(pTVar4,1);
    }
    *pTVar4->CurPos = L']';
    pTVar4->CurPos = pTVar4->CurPos + 1;
  }
  if (local_1a8.End < local_1a8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_1a8,1);
  }
  pwVar5 = local_1a8.Base;
  *local_1a8.CurPos = L'\0';
  pwVar7 = wcsstr(local_1a8.Base,L"Log");
  local_50 = DAT_1508dd928;
  pwVar9 = pwVar5 + 3;
  if (pwVar7 != pwVar5) {
    pwVar9 = pwVar5;
  }
  local_70 = _u________________;
  uStack_68 = _UNK_1508dd910;
  local_60 = _DAT_1508dd918;
  uStack_58 = _UNK_1508dd920;
  sVar6 = wcslen(pwVar9);
  if ((uint)sVar6 < 0x12) {
    iVar3 = iVar12;
    if (pwVar9 != (wchar_t *)0x0) {
      sVar6 = wcslen(pwVar9);
      iVar3 = (int)sVar6;
    }
    pTVar4 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,pwVar9,iVar3);
    sVar6 = wcslen(pwVar9);
    pwVar5 = (wchar_t *)((longlong)&local_70 + (longlong)(int)sVar6 * 2);
    iVar3 = iVar12;
    if (pwVar5 != (wchar_t *)0x0) {
      sVar6 = wcslen(pwVar5);
      iVar3 = (int)sVar6;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar4,pwVar5,iVar3);
  }
  else {
    pwVar5 = param_1->CurPos;
    if (param_1->End < pwVar5 + 0x11) {
      TStringBuilderBase<wchar_t>::Extend(param_1,0x11);
      pwVar5 = param_1->CurPos;
    }
    pvVar8 = FGenericPlatformString::Memcpy(pwVar5,pwVar9,0x22);
    param_1->CurPos = (wchar_t *)((longlong)pvVar8 + 0x22);
  }
  if (param_1->End < param_1->CurPos + 2) {
    TStringBuilderBase<wchar_t>::Extend(param_1,2);
  }
  pwVar5 = FGenericPlatformString::Convert<char,wchar_t>(param_1->CurPos,2,": ",2);
  param_1->CurPos = pwVar5;
  if (this->bConsoleShowVerbosity != false) {
    pwVar5 = ::ToString(param_2->Verbosity);
    local_88 = _u____________;
    uStack_80 = _UNK_1508dd938;
    local_78 = DAT_1508dd940;
    sVar6 = wcslen(pwVar5);
    if ((uint)sVar6 < 0xc) {
      iVar3 = 0;
      if (pwVar5 != (wchar_t *)0x0) {
        sVar6 = wcslen(pwVar5);
        iVar3 = (int)sVar6;
      }
      pTVar4 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,pwVar5,iVar3);
      sVar6 = wcslen(pwVar5);
      pwVar5 = (wchar_t *)((longlong)&local_88 + (longlong)(int)sVar6 * 2);
      if (pwVar5 != (wchar_t *)0x0) {
        sVar6 = wcslen(pwVar5);
        iVar12 = (int)sVar6;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar4,pwVar5,iVar12);
    }
    else {
      pwVar9 = param_1->CurPos;
      if (param_1->End < pwVar9 + 0xb) {
        TStringBuilderBase<wchar_t>::Extend(param_1,0xb);
        pwVar9 = param_1->CurPos;
      }
      pvVar8 = FGenericPlatformString::Memcpy(pwVar9,pwVar5,0x16);
      param_1->CurPos = (wchar_t *)((longlong)pvVar8 + 0x16);
    }
    if (param_1->End < param_1->CurPos + 2) {
      TStringBuilderBase<wchar_t>::Extend(param_1,2);
    }
    pwVar5 = FGenericPlatformString::Convert<char,wchar_t>(param_1->CurPos,2,": ",2);
    param_1->CurPos = pwVar5;
  }
  iVar12 = (param_2->String).Data.ArrayNum;
  pFVar10 = (param_2->String).Data.AllocatorInstance.Data;
  pFVar11 = pFVar10 + (longlong)iVar12 * 2 + -2;
  if (iVar12 == 0) {
    pFVar11 = pFVar10 + (longlong)iVar12 * 2;
  }
  while( true ) {
    if ((param_2->String).Data.ArrayNum != iVar12) {
      `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1b8);
    }
    if (pFVar10 == pFVar11) break;
    wVar1 = *(wchar_t *)pFVar10;
    if (wVar1 == L'\t') {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"  ",2);
      pFVar10 = pFVar10 + 2;
    }
    else {
      if (param_1->End < param_1->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(param_1,1);
      }
      *param_1->CurPos = wVar1;
      param_1->CurPos = param_1->CurPos + 1;
      pFVar10 = pFVar10 + 2;
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1a8);
  return;
}

// DestroyColors @ 1423d8ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWindowsConsoleOutputDevice2::FConsoleWindow::DestroyColors(FConsoleWindow *this)

{
  DeleteObject(this->NoPen);
  DeleteObject(this->BorderPen);
  DeleteObject(this->WindowBorderPen);
  DeleteObject(this->TextPen);
  DeleteObject(this->TextBrush);
  DeleteObject(this->BackgroundBrush);
  DeleteObject(this->LogBackgroundBrush);
  DeleteObject(this->EditBackgroundBrush);
  DeleteObject(this->StatusBackgroundBrush[0]);
  DeleteObject(this->StatusBackgroundBrush[1]);
  DeleteObject(this->ButtonBrush);
  DeleteObject(this->ButtonHighlightBrush);
                    /* WARNING: Could not recover jumptable at 0x0001423d90a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteObject(this->ThumbBrush);
  return;
}

// DrawNonClientArea @ 1423da160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsConsoleOutputDevice2::FConsoleWindow::DrawNonClientArea
          (FConsoleWindow *this,HWND__ *param_1,ulong64 param_2)

{
  double dVar1;
  int iVar2;
  HRGN hrgnDst;
  HDC hDC;
  HGDIOBJ h;
  int iVar3;
  int xLeft;
  wchar_t *lpchText;
  int iVar4;
  HBRUSH__ *hbr;
  int iVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStackY_148 [32];
  tagRECT local_f8;
  RECT local_e8;
  WINDOWPLACEMENT local_d8;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_148;
  GetWindowRect((HWND)param_1,&local_f8);
  iVar3 = 0;
  iVar4 = 0;
  if (param_2 == 1) {
    hrgnDst = CreateRectRgn(local_f8.left,local_f8.top,local_f8.right,local_f8.bottom);
  }
  else {
    hrgnDst = CreateRectRgn(0,0,0,0);
    iVar2 = CombineRgn(hrgnDst,(HRGN)param_2,(HRGN)0x0,5);
    if (iVar2 == 0) {
      DeleteObject(hrgnDst);
      hrgnDst = (HRGN)0x0;
    }
  }
  hDC = GetDCEx((HWND)param_1,hrgnDst,0x483);
  dVar7 = __real_403b000000000000;
  if (hDC == (HDC)0x0) {
    if (hrgnDst != (HRGN)0x0) {
      DeleteObject(hrgnDst);
    }
  }
  else {
    dVar1 = this->DpiScale;
    iVar5 = (int)((double)local_f8.right * (__real_3ff0000000000000 / dVar1)) -
            (int)((double)local_f8.left * (__real_3ff0000000000000 / dVar1));
    local_e8.bottom = (int)(dVar1 * __real_403b000000000000);
    local_e8.right = (int)((double)iVar5 * dVar1);
    local_e8.left = 0;
    local_e8.top = 0;
    ::FillRect(hDC,&local_e8,(HBRUSH)this->BackgroundBrush);
    h = GetStockObject(5);
    SelectObject(hDC,h);
    SelectObject(hDC,this->WindowBorderPen);
    Rectangle(hDC,0,0,local_f8.right - local_f8.left,local_f8.bottom - local_f8.top);
    iVar2 = (int)(this->DpiScale * ___real_4035000000000000);
    xLeft = (int)(this->DpiScale * __real_4008000000000000);
    DrawIconEx(hDC,xLeft,xLeft,(HICON)this->Icon,iVar2,iVar2,0,(HBRUSH)0x0,3);
    SetBkColor(hDC,this->BackgroundColor);
    SetTextColor(hDC,this->TextColor);
    SelectObject(hDC,this->Font);
    dVar1 = this->DpiScale;
    local_e8.top = 0;
    local_e8.left = (int)(dVar1 * __real_4040000000000000);
    local_e8.bottom = (int)(dVar1 * dVar7);
    local_e8.right = (int)((double)(iVar5 + -0x6c) * dVar1);
    iVar2 = (this->ConsoleTitle).Data.ArrayNum;
    if (iVar2 == 0) {
      lpchText = L"";
    }
    else {
      lpchText = (wchar_t *)(this->ConsoleTitle).Data.AllocatorInstance.Data;
      iVar3 = iVar2 + -1;
    }
    DrawTextW(hDC,lpchText,iVar3,&local_e8,0x8024);
    SelectObject(hDC,this->TextPen);
    iVar3 = this->NcButtonHot;
    if ((iVar3 != -1) && ((iVar2 = this->NcButtonDown, iVar2 == -1 || (iVar3 == iVar2)))) {
      hbr = this->ButtonBrush;
      if (iVar2 != -1) {
        hbr = this->ButtonPressedBrush;
      }
      if (iVar3 == 9) {
        iVar4 = 1;
      }
      else if (iVar3 == 8) {
        iVar4 = 2;
      }
      else if (iVar3 == 1000) {
        iVar4 = 3;
      }
      dVar1 = this->DpiScale;
      iVar3 = iVar5 + iVar4 * -0x1b;
      local_e8.top = (int)dVar1;
      local_e8.left = (int)((double)(iVar3 + -0x1b) * dVar1);
      local_e8.bottom = (int)(dVar1 * dVar7);
      local_e8.right = (int)((double)(iVar3 + -1) * dVar1);
      ::FillRect(hDC,&local_e8,(HBRUSH)hbr);
    }
    dVar6 = __real_402a000000000000;
    dVar1 = __real_4032000000000000;
    dVar7 = this->DpiScale;
    dVar12 = (double)(iVar5 + -99);
    dVar13 = (double)(iVar5 + -0x5f);
    dVar14 = (double)(iVar5 + -0x5a);
    if (this->bConsoleExpanded == false) {
      uVar8 = SUB84(__real_402a000000000000,0);
      uVar9 = (undefined4)((ulonglong)__real_402a000000000000 >> 0x20);
      MoveToEx(hDC,(int)(dVar7 * dVar12),(int)(dVar7 * __real_402a000000000000),(LPPOINT)0x0);
      uVar10 = SUB84(__real_4022000000000000,0);
      uVar11 = (undefined4)((ulonglong)__real_4022000000000000 >> 0x20);
      LineTo(hDC,(int)(this->DpiScale * dVar13),(int)(this->DpiScale * __real_4022000000000000));
      LineTo(hDC,(int)(this->DpiScale * dVar14),(int)(this->DpiScale * __real_402c000000000000));
      MoveToEx(hDC,(int)(this->DpiScale * dVar12),(int)(this->DpiScale * __real_4031000000000000),
               (LPPOINT)0x0);
      LineTo(hDC,(int)(this->DpiScale * dVar13),(int)(this->DpiScale * dVar6));
      dVar7 = this->DpiScale;
      dVar6 = dVar7 * dVar1;
    }
    else {
      uVar10 = SUB84(__real_4022000000000000,0);
      uVar11 = (undefined4)((ulonglong)__real_4022000000000000 >> 0x20);
      MoveToEx(hDC,(int)(dVar7 * dVar12),(int)(dVar7 * __real_4022000000000000),(LPPOINT)0x0);
      dVar7 = __real_402a000000000000;
      uVar8 = SUB84(__real_402a000000000000,0);
      uVar9 = (undefined4)((ulonglong)__real_402a000000000000 >> 0x20);
      LineTo(hDC,(int)(this->DpiScale * dVar13),(int)(this->DpiScale * __real_402a000000000000));
      LineTo(hDC,(int)(this->DpiScale * dVar14),(int)(this->DpiScale * __real_4020000000000000));
      MoveToEx(hDC,(int)(this->DpiScale * dVar12),(int)(this->DpiScale * dVar7),(LPPOINT)0x0);
      LineTo(hDC,(int)(this->DpiScale * dVar13),(int)(this->DpiScale * __real_4031000000000000));
      dVar7 = this->DpiScale;
      dVar6 = dVar7 * __real_4028000000000000;
    }
    LineTo(hDC,(int)(dVar7 * dVar14),(int)dVar6);
    MoveToEx(hDC,(int)((double)(iVar5 + -0x48) * this->DpiScale),
             (int)(this->DpiScale * (double)CONCAT44(uVar9,uVar8)),(LPPOINT)0x0);
    LineTo(hDC,(int)((double)(iVar5 + -0x3f) * this->DpiScale),
           (int)(this->DpiScale * (double)CONCAT44(uVar9,uVar8)));
    local_d8.length = 0x2c;
    GetWindowPlacement((HWND)param_1,&local_d8);
    dVar7 = this->DpiScale;
    iVar3 = (int)(dVar7 * dVar1);
    if (local_d8.showCmd == 3) {
      Rectangle(hDC,(int)((double)(iVar5 + -0x29) * dVar7),(int)(dVar7 * __real_4024000000000000),
                (int)((double)(iVar5 + -0x21) * dVar7),iVar3);
      SelectObject(hDC,this->BackgroundBrush);
      dVar7 = this->DpiScale;
      iVar3 = (int)(dVar7 * ___real_4035000000000000);
      dVar12 = (double)(iVar5 + -0x24) * dVar7;
      dVar6 = dVar7 * (double)CONCAT44(uVar9,uVar8);
      dVar7 = (double)(iVar5 + -0x2c) * dVar7;
    }
    else {
      dVar6 = dVar7 * __real_4020000000000000;
      dVar12 = (double)(iVar5 + -0x24) * dVar7;
      dVar7 = (double)(iVar5 + -0x2e) * dVar7;
    }
    Rectangle(hDC,(int)dVar7,(int)dVar6,(int)dVar12,iVar3);
    MoveToEx(hDC,(int)((double)(iVar5 + -0x12) * this->DpiScale),
             (int)(this->DpiScale * (double)CONCAT44(uVar11,uVar10)),(LPPOINT)0x0);
    LineTo(hDC,(int)((double)(iVar5 + -9) * this->DpiScale),(int)(this->DpiScale * dVar1));
    MoveToEx(hDC,(int)((double)(iVar5 + -10) * this->DpiScale),
             (int)(this->DpiScale * (double)CONCAT44(uVar11,uVar10)),(LPPOINT)0x0);
    LineTo(hDC,(int)((double)(iVar5 + -0x13) * this->DpiScale),(int)(this->DpiScale * dVar1));
    ReleaseDC((HWND)param_1,hDC);
  }
  return;
}

// EnableAutoScroll @ 1423db000

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWindowsConsoleOutputDevice2::FConsoleWindow::EnableAutoScroll(FConsoleWindow *this)

{
  this->bAutoScrollLog = true;
  ClearSelection(this);
  ScrollToBottom(this);
  RedrawWindow((HWND)this->LogHwnd,(RECT *)0x0,(HRGN)0x0,5);
                    /* WARNING: Could not recover jumptable at 0x0001423db04c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RedrawWindow((HWND)this->LogScrollHwnd,(RECT *)0x0,(HRGN)0x0,1);
  return;
}

// ExtractHyperLinks @ 1423db9f0

/* WARNING: Removing unreachable block (ram,0x0001423dbd1c) */
/* WARNING: Removing unreachable block (ram,0x0001423dbf1f) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWindowsConsoleOutputDevice2::FConsoleWindow::ExtractHyperLinks
          (FConsoleWindow *this,TStringBuilderWithBuffer<wchar_t,256> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,FString *param_3)

{
  code *pcVar1;
  ulong64 uVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  void *pvVar9;
  FString *pFVar10;
  size_t sVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  wchar_t *pwVar18;
  FString local_c8;
  FString local_b8;
  FScriptContainerElement *local_a8;
  wchar_t *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  wchar_t *local_88;
  TStringView<wchar_t> local_78;
  wchar_t *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FString local_58;
  FString local_48;
  
  if ((param_3->Data).ArrayNum == 0) {
    pwVar18 = L"";
  }
  else {
    pwVar18 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  pwVar7 = wcschr(pwVar18,L'[');
  iVar17 = 0;
  while (pwVar7 != (wchar_t *)0x0) {
    pwVar7 = pwVar7 + 1;
    pwVar8 = wcschr(pwVar7,L']');
    if (pwVar8 == (wchar_t *)0x0) break;
    iVar14 = (int)((longlong)pwVar7 - (longlong)pwVar18 >> 1) + -1;
    uVar2 = (longlong)iVar14 * 2;
    if ((ulonglong)param_1->_padding_ < param_1->_padding_ + uVar2) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)param_1,(longlong)iVar14);
    }
    if (iVar14 != 0) {
      pvVar9 = FGenericPlatformString::Memcpy((void *)param_1->_padding_,pwVar18,uVar2);
      param_1->_padding_ = (longlong)((longlong)pvVar9 + uVar2);
    }
    local_a8 = (FScriptContainerElement *)(pwVar8 + 1);
    if (param_2 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
      iVar14 = 0;
      iVar16 = (int)((longlong)pwVar8 - (longlong)pwVar7 >> 1);
      pwVar18 = pwVar7;
      while ((pwVar18 != pwVar7 + iVar16 && (iVar5 = iswspace(*pwVar18), iVar5 != 0))) {
        iVar14 = iVar14 + 1;
        pwVar18 = pwVar18 + 1;
      }
      pwVar7 = pwVar7 + iVar14;
      iVar16 = iVar16 - iVar14;
      local_88 = pwVar7;
      if (iVar16 != 0) {
        lVar13 = (longlong)iVar16;
        pwVar18 = pwVar7 + lVar13 + -1;
        do {
          iVar14 = iswspace(*pwVar18);
          if (iVar14 == 0) break;
          iVar16 = iVar16 + -1;
          pwVar18 = pwVar18 + -1;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      iStack_90 = iVar16;
      local_78.Size = iVar16;
      local_78._12_4_ = uStack_8c;
      local_98 = pwVar7;
      local_78.DataPtr = pwVar7;
      iVar5 = UE::String::FindFirstChar(&local_78,L' ',CaseSensitive);
      pwVar18 = pwVar7;
      iVar14 = iVar16;
      if (iVar5 != -1) {
        do {
          if (iVar5 < iVar16) {
            iVar16 = iVar5;
          }
          iVar15 = iVar17;
          if (0 < iVar16) {
            iVar15 = iVar16;
          }
          pwVar18 = pwVar7;
          iVar16 = iVar17;
          while ((pwVar18 != pwVar7 + iVar15 && (iVar6 = iswspace(*pwVar18), iVar6 != 0))) {
            iVar16 = iVar16 + 1;
            pwVar18 = pwVar18 + 1;
          }
          iVar15 = iVar15 - iVar16;
          if (iVar15 != 0) {
            lVar13 = (longlong)iVar15;
            pwVar18 = pwVar7 + iVar16 + lVar13 + -1;
            do {
              iVar6 = iswspace(*pwVar18);
              if (iVar6 == 0) break;
              iVar15 = iVar15 + -1;
              pwVar18 = pwVar18 + -1;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
          }
          if (iVar15 != 0) {
            local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_c8.Data.ArrayNum = 0;
            local_c8.Data.ArrayMax = 0;
            pFVar10 = ::FString::ConstructFromPtrSize(&local_58,pwVar7 + iVar16,iVar15);
            if (&local_c8 != pFVar10) {
              if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c8.Data.AllocatorInstance.Data);
              }
              local_c8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
              (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_c8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
              local_c8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
              (pFVar10->Data).ArrayNum = 0;
              (pFVar10->Data).ArrayMax = 0;
            }
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            pFVar12 = (param_2->AllocatorInstance).Data;
            if (((pFVar12 <= (FScriptContainerElement *)&local_c8) &&
                ((FScriptContainerElement *)&local_c8 < pFVar12 + (longlong)param_2->ArrayMax * 0x10
                )) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar3)) {
              pcVar1 = (code *)swi(3);
              uVar4 = (*pcVar1)();
              return (bool)uVar4;
            }
            iVar16 = param_2->ArrayNum;
            if (iVar16 == param_2->ArrayMax) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            param_2->ArrayNum = iVar16 + 1;
            pFVar12 = (param_2->AllocatorInstance).Data + (longlong)iVar16 * 0x10;
            *(undefined8 *)pFVar12 = 0;
            *(FScriptContainerElement **)pFVar12 = local_c8.Data.AllocatorInstance.Data;
            local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar12 + 8) = local_c8.Data.ArrayNum;
            *(int *)(pFVar12 + 0xc) = local_c8.Data.ArrayMax;
            local_c8.Data.ArrayNum = 0;
            local_c8.Data.ArrayMax = 0;
          }
          iVar16 = (iVar14 - iVar5) + -1;
          iVar5 = iVar14;
          if (iVar16 < iVar14) {
            iVar5 = iVar16;
          }
          iVar16 = 0;
          if (0 < iVar5) {
            iVar16 = iVar5;
          }
          pwVar7 = local_88 + ((longlong)iVar14 - (longlong)iVar16);
          uStack_8c = uStack_5c;
          iStack_90 = iVar16;
          local_98 = pwVar7;
          local_78.DataPtr = pwVar7;
          local_78._8_8_ = _iStack_90;
          local_68 = pwVar7;
          iStack_60 = iVar16;
          iVar5 = UE::String::FindFirstChar(&local_78,L' ',CaseSensitive);
          pwVar18 = local_98;
          iVar14 = iStack_90;
          if (iVar5 == -1) break;
          local_88 = local_98;
        } while( true );
      }
      pwVar8 = pwVar7 + iVar16;
      iVar16 = iVar17;
      while ((pwVar7 != pwVar8 && (iVar5 = iswspace(*pwVar7), iVar5 != 0))) {
        iVar16 = iVar16 + 1;
        pwVar7 = pwVar7 + 1;
      }
      iVar14 = iVar14 - iVar16;
      if (iVar14 != 0) {
        lVar13 = (longlong)iVar14;
        pwVar7 = pwVar18 + iVar16 + lVar13 + -1;
        do {
          iVar5 = iswspace(*pwVar7);
          if (iVar5 == 0) break;
          iVar14 = iVar14 + -1;
          pwVar7 = pwVar7 + -1;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      if (iVar14 != 0) {
        local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.Data.ArrayNum = 0;
        local_b8.Data.ArrayMax = 0;
        pFVar10 = ::FString::ConstructFromPtrSize(&local_48,pwVar18 + iVar16,iVar14);
        if (&local_b8 != pFVar10) {
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          local_b8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
          (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
          local_b8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
          (pFVar10->Data).ArrayNum = 0;
          (pFVar10->Data).ArrayMax = 0;
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        pFVar12 = (param_2->AllocatorInstance).Data;
        if (((pFVar12 <= (FScriptContainerElement *)&local_b8) &&
            ((FScriptContainerElement *)&local_b8 < pFVar12 + (longlong)param_2->ArrayMax * 0x10))
           && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        iVar14 = param_2->ArrayNum;
        if (iVar14 == param_2->ArrayMax) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar14 + 1;
        pFVar12 = (param_2->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
        *(undefined8 *)pFVar12 = 0;
        *(FScriptContainerElement **)pFVar12 = local_b8.Data.AllocatorInstance.Data;
        local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar12 + 8) = local_b8.Data.ArrayNum;
        *(int *)(pFVar12 + 0xc) = local_b8.Data.ArrayMax;
        local_b8.Data.ArrayNum = 0;
        local_b8.Data.ArrayMax = 0;
      }
    }
    pwVar18 = (wchar_t *)local_a8;
    pwVar7 = wcschr((wchar_t *)local_a8,L'[');
  }
  if ((FScriptContainerElement *)pwVar18 != (FScriptContainerElement *)0x0) {
    sVar11 = wcslen(pwVar18);
    iVar17 = (int)sVar11;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)param_1,pwVar18,iVar17);
  if ((param_2 != (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) && (param_2->ArrayNum != 0)) {
    return true;
  }
  return false;
}

// FillRect @ 1423dc1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsConsoleOutputDevice2::FConsoleWindow::FillRect
          (FConsoleWindow *this,HDC__ *param_1,tagRECT *param_2,HBRUSH__ *param_3)

{
  undefined1 auStack_48 [32];
  RECT local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  local_28.left = param_2->left;
  local_28.top = param_2->top;
  local_28.right = param_2->right;
  local_28.bottom = param_2->bottom;
  ::FillRect((HDC)param_1,&local_28,(HBRUSH)param_3);
  return;
}

// GetSelectedItems @ 1423e26d0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FWindowsConsoleOutputDevice2::FConsoleWindow::GetSelectedItems
          (FConsoleWindow *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  WPARAM wParam;
  
  uVar7 = SendMessageW((HWND)this->LogHwnd,400,0,0);
  uVar4 = (uint)uVar7;
  wParam = (WPARAM)(int)uVar4;
  if (uVar7 != wParam) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = param_1->ArrayNum;
  piVar1 = &param_1->ArrayNum;
  if (iVar5 < (int)uVar4) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar4 - iVar5,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
    memset((param_1->AllocatorInstance).Data + (longlong)iVar6 * 4,0,
           (longlong)(int)(uVar4 - iVar5) << 2);
  }
  else {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar7 & 0xffffffff);
    }
    if ((int)uVar4 < iVar5) {
      uVar8 = iVar5 - uVar4;
      if ((int)(uVar8 | uVar4) < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      if (uVar8 != 0) {
        _Dst = (param_1->AllocatorInstance).Data + wParam * 4;
        iVar5 = (*piVar1 - uVar4) - uVar8;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar8 * 4,(longlong)iVar5 << 2);
        }
        *piVar1 = *piVar1 - uVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&param_1->AllocatorInstance,*piVar1,&param_1->ArrayMax);
      }
    }
  }
  SendMessageW((HWND)this->LogHwnd,0x191,wParam,(LPARAM)(param_1->AllocatorInstance).Data);
  return uVar4;
}

// GetThumbPosAndHeight @ 1423e4870

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsConsoleOutputDevice2::FConsoleWindow::GetThumbPosAndHeight
          (FConsoleWindow *this,int *param_1,int *param_2,tagRECT *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  LRESULT LVar5;
  LRESULT LVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  
  iVar7 = (int)this->DpiScale + param_3->right;
  LVar5 = SendMessageW((HWND)this->LogHwnd,0x18b,0,0);
  iVar3 = param_3->bottom / this->LogFontHeight;
  iVar8 = param_3->bottom + iVar7 * -2;
  *param_2 = 0;
  iVar9 = (int)LVar5 - iVar3;
  if (0 < iVar9) {
    LVar6 = SendMessageW((HWND)this->LogHwnd,0x18e,0,0);
    if (LVar6 != (int)LVar6) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar4 = (iVar8 * iVar3) / (int)LVar5;
    iVar3 = iVar7;
    if (iVar7 < iVar4) {
      iVar3 = iVar4;
    }
    iVar8 = iVar8 - iVar3;
    if (0 < iVar8) {
      fVar10 = (float)((int)LVar6 * iVar8);
      *param_1 = iVar7 - ((int)ROUND(__real_bf000000 - (fVar10 + fVar10) / (float)iVar9) >> 1);
      *param_2 = iVar3;
    }
  }
  return;
}

// HandleActivityModifications @ 1423e5b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsConsoleOutputDevice2::FConsoleWindow::HandleActivityModifications(FConsoleWindow *this)

{
  TArray<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity,TSizedDefaultAllocator<32>_>
  *this_00;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  TTuple<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification> *pTVar4;
  HFONT__ *pHVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  FConsoleWindow *pFVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  ForElementType<int> FVar14;
  HWND pHVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  void *pvVar18;
  size_t sVar19;
  ulonglong uVar20;
  TStringBuilderBase<wchar_t> *this_01;
  ulong64 uVar21;
  LPCRITICAL_SECTION p_Var22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  wchar_t *pwVar27;
  FScriptContainerElement *pFVar28;
  FScriptContainerElement *pFVar29;
  TSortedMap<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification,TSizedDefaultAllocator<32>,TLess<int_const_>_>
  *pTVar30;
  ulonglong uVar31;
  double dVar32;
  undefined1 auStackY_648 [32];
  undefined1 local_5e7 [7];
  TSortedMap<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification,TSizedDefaultAllocator<32>,TLess<int_const_>_>
  *local_5e0;
  uint local_5d8;
  uint local_5d4;
  FConsoleWindow *local_5d0;
  <lambda_1> local_5c8 [4];
  int local_5c4;
  LPCRITICAL_SECTION local_5c0;
  undefined4 local_5b8 [4];
  longlong *local_5a8;
  undefined1 auStack_5a0 [16];
  uint uStack_590;
  uint uStack_58c;
  longlong local_588;
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
  *pTStack_580;
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
  *local_578;
  undefined2 local_570;
  undefined4 local_568;
  FConsoleWindow *local_560;
  undefined4 *local_558;
  undefined1 local_550 [32];
  longlong local_530;
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
  *pTStack_528;
  tagRECT local_520;
  ForElementType<int> local_508;
  int local_480;
  int local_47c;
  TStringBuilderBase<wchar_t> local_478;
  WCHAR local_458 [256];
  TStringBuilderBase<wchar_t> local_258;
  WCHAR local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_648;
  p_Var22 = (LPCRITICAL_SECTION)&this->ActivityModificationsCs;
  bVar8 = false;
  local_47c = 0x20;
  local_508.SecondaryData = (ForElementType<int>)0x0;
  local_480 = 0;
  local_5d0 = this;
  local_5c0 = p_Var22;
  if (p_Var22 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(p_Var22);
  local_5e0 = &this->ActivityModifications;
  local_5d4 = (this->ActivityModifications).Pairs.ArrayNum;
  uVar20 = (ulonglong)(int)local_5d4;
  pFVar28 = (local_5e0->Pairs).AllocatorInstance.Data;
  pFVar23 = pFVar28 + 0x10;
  pFVar29 = pFVar28 + uVar20 * 0x38;
  pTVar30 = local_5e0;
  while( true ) {
    if ((pTVar30->Pairs).ArrayNum != (int)uVar20) {
      local_5e7[0] = 0;
      `TCheckedPointerIterator<TTuple<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_5e7);
    }
    pFVar9 = local_5d0;
    if (pFVar28 == pFVar29) break;
    local_5d8 = *(uint *)pFVar28;
    lVar26 = (longlong)(int)local_5d8;
    if (pFVar23[0x21] == (FScriptContainerElement)0x0) {
      piVar2 = &(this->Activities).ArrayNum;
      iVar12 = *piVar2;
      this_00 = &this->Activities;
      if ((int)local_5d8 < iVar12) {
        if (((int)local_5d8 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar3 = (this_00->AllocatorInstance).Data;
        lVar26 = lVar26 * 0x40;
        if (*(int *)(pFVar3 + lVar26 + 0x30) != *(int *)(pFVar23 + 0x18)) {
          *(int *)(pFVar3 + lVar26 + 0x30) = *(int *)(pFVar23 + 0x18);
          bVar8 = true;
        }
        iVar12 = *(int *)(pFVar3 + lVar26 + 0x28);
        if (iVar12 == *(int *)(pFVar23 + 0x10)) {
          if (iVar12 < 2) goto LAB_1423e5f2e;
          iVar12 = FGenericPlatformStricmp::Stricmp
                             (*(wchar_t **)(pFVar3 + lVar26 + 0x20),*(wchar_t **)(pFVar23 + 8));
          bVar10 = iVar12 == 0;
        }
        else {
          bVar10 = iVar12 + *(int *)(pFVar23 + 0x10) == 1;
        }
        if (!bVar10) {
          iVar12 = *(int *)(pFVar23 + 0x10) + -1;
          if (*(int *)(pFVar23 + 0x10) == 0) {
            iVar12 = 0;
          }
          ::FString::AssignRange
                    ((FString *)(pFVar3 + lVar26 + 0x20),*(wchar_t **)(pFVar23 + 8),iVar12);
          pFVar3[lVar26 + 0x38] = (FScriptContainerElement)0x1;
        }
      }
      else {
        uVar25 = local_5d8 + 1;
        if (iVar12 < (int)uVar25) {
          iVar13 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40,8,uVar25 - iVar12,&this_00->AllocatorInstance,piVar2,
                              &(this->Activities).ArrayMax);
          DefaultConstructItems<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity,int>
                    ((this_00->AllocatorInstance).Data + (longlong)iVar13 * 0x40,uVar25 - iVar12);
        }
        else {
          if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
          }
          if ((int)uVar25 < iVar12) {
            uVar24 = iVar12 - uVar25;
            if (((int)(uVar24 | uVar25) < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (uVar24 != 0) {
              TArray<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity,TSizedDefaultAllocator<32>_>
              ::RemoveAtImpl(this_00,uVar25,uVar24);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40,8,&this_00->AllocatorInstance,(this->Activities).ArrayNum,
                         &(this->Activities).ArrayMax);
            }
          }
        }
        lVar26 = (longlong)(int)local_5d8;
        uVar25 = 0;
        if ((int)local_5d8 < (this->Activities).ArrayNum) {
          uVar25 = ~local_5d8 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar3 = (this_00->AllocatorInstance).Data;
        lVar26 = lVar26 * 0x40;
        iVar12 = *(int *)pFVar23 + -1;
        if (*(int *)pFVar23 == 0) {
          iVar12 = 0;
        }
        ::FString::AssignRange
                  ((FString *)(pFVar3 + lVar26 + 0x10),*(wchar_t **)(pFVar23 + -8),iVar12);
        *(int *)(pFVar3 + lVar26 + 0x30) = *(int *)(pFVar23 + 0x18);
        *(int *)(pFVar3 + lVar26 + 0x34) = *(int *)(pFVar23 + 0x1c);
        iVar12 = *(int *)(pFVar23 + 0x10) + -1;
        if (*(int *)(pFVar23 + 0x10) == 0) {
          iVar12 = 0;
        }
        ::FString::AssignRange
                  ((FString *)(pFVar3 + lVar26 + 0x20),*(wchar_t **)(pFVar23 + 8),iVar12);
        pFVar3[lVar26 + 0x39] = pFVar23[0x20];
      }
LAB_1423e5f2e:
      pFVar28 = pFVar28 + 0x38;
      pFVar23 = pFVar23 + 0x38;
      uVar20 = (ulonglong)local_5d4;
      this = local_5d0;
      pTVar30 = local_5e0;
    }
    else {
      FVar14 = (ForElementType<int>)&local_508;
      if (local_508.SecondaryData != (ForElementType<int>)0x0) {
        FVar14 = local_508.SecondaryData;
      }
      if ((ulonglong)FVar14 <= &local_5d8) {
        FVar14 = (ForElementType<int>)&local_508;
        if (local_508.SecondaryData != (ForElementType<int>)0x0) {
          FVar14 = local_508.SecondaryData;
        }
        if ((&local_5d8 < (uint *)((longlong)FVar14 + (longlong)local_47c * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar12 = local_480;
      if (local_480 == local_47c) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                           (0x404,&local_508,&local_47c);
      }
      local_480 = iVar12 + 1;
      FVar14 = (ForElementType<int>)&local_508;
      if (local_508.SecondaryData != (ForElementType<int>)0x0) {
        FVar14 = local_508.SecondaryData;
      }
      pFVar28 = pFVar28 + 0x38;
      pFVar23 = pFVar23 + 0x38;
      *(uint *)((longlong)FVar14 + (longlong)iVar12 * 4) = local_5d8;
      uVar20 = (ulonglong)local_5d4;
    }
  }
  uVar25 = local_480 - 1;
  if (-1 < (int)uVar25) {
    pTVar1 = &local_5d0->IdToActivityIndex;
    lVar26 = (longlong)(int)uVar25 * 4;
    do {
      uVar24 = 0;
      if ((int)uVar25 < local_480) {
        uVar24 = ~uVar25 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar14 = (ForElementType<int>)&local_508;
      if (local_508.SecondaryData != (ForElementType<int>)0x0) {
        FVar14 = local_508.SecondaryData;
      }
      iVar12 = *(int *)((longlong)FVar14 + lVar26);
      if (iVar12 < (pFVar9->Activities).ArrayNum) {
        if ((iVar12 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        ::FString::Empty((FString *)
                         ((pFVar9->Activities).AllocatorInstance.Data +
                         (longlong)iVar12 * 0x40 + 0x10));
      }
      TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
      TIterator::TIterator
                ((TIterator *)local_550,
                 (TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                  *)pTVar1);
      local_570 = 0;
      stack0xfffffffffffffa68 = local_550._16_16_;
      local_5a8 = (longlong *)local_550._0_8_;
      auStack_5a0._0_8_ = local_550._8_8_;
      local_588 = local_530;
      pTStack_580 = pTStack_528;
      uVar20 = local_550._24_8_ >> 0x20;
      uVar24 = local_550._28_4_;
      local_578 = (TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                   *)pTVar1;
      if ((int)uVar24 < *(int *)(local_550._16_8_ + 0x18)) {
        do {
          iVar13 = *(int *)((longlong)(int)uVar24 * 0x20 + 0x10 + *local_5a8);
          if (iVar13 == iVar12) {
            TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_580,(int)uVar20);
            local_570 = CONCAT11(local_570._1_1_,1);
          }
          else if (iVar12 < iVar13) {
            piVar2 = (int *)((longlong)(int)uVar24 * 0x20 + 0x10 + *local_5a8);
            *piVar2 = *piVar2 + -1;
          }
          uStack_590 = uStack_590 & ~auStack_5a0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_5a0);
          uVar20 = (ulonglong)uStack_58c;
          uVar24 = uStack_58c;
        } while ((int)uStack_58c < *(int *)(auStack_5a0._8_8_ + 0x18));
        if (((char)local_570 != '\0') && (local_570._1_1_ != '\0')) {
          uVar24 = *(int *)&(local_578->Elements).field_0x8 -
                   *(int *)&(local_578->Elements).field_0x34;
          if (uVar24 < 4) {
            iVar12 = 1;
          }
          else {
            uVar20 = (ulonglong)((uVar24 >> 1) + 7) * 2 + 1;
            lVar6 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar6 == 0; lVar6 = lVar6 + -1) {
              }
            }
            local_568 = (undefined4)lVar6;
            iVar12 = 1 << ((byte)lVar6 & 0x1f);
          }
          if (((0 < (int)uVar24) && (local_578->HashSize < iVar12)) ||
             (iVar12 < local_578->HashSize)) {
            local_578->HashSize = iVar12;
            TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
            ::Rehash(local_578);
          }
        }
      }
      lVar26 = lVar26 + -4;
      uVar25 = uVar25 - 1;
      p_Var22 = local_5c0;
      pTVar30 = local_5e0;
    } while (-1 < (int)uVar25);
  }
  piVar2 = &(pTVar30->Pairs).ArrayMax;
  pTVar4 = (TTuple<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification> *)
           (pTVar30->Pairs).AllocatorInstance.Data;
  iVar12 = (pTVar30->Pairs).ArrayNum;
  if ((pTVar30->Pairs).ArrayMax < 0) {
    DestructItems<TTuple<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification>,int>
              (pTVar4,iVar12);
    (pTVar30->Pairs).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,(ForAnyElementType *)pTVar30,0,piVar2);
    }
  }
  else {
    DestructItems<TTuple<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification>,int>
              (pTVar4,iVar12);
    (pTVar30->Pairs).ArrayNum = 0;
  }
  LeaveCriticalSection(p_Var22);
  if (local_508.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_508.SecondaryData);
  }
  uVar20 = 0;
  bVar10 = false;
  local_5d4 = 0;
  iVar12 = (local_5d0->Activities).ArrayNum;
  local_5c4 = iVar12;
  if (iVar12 == 0) goto LAB_1423e67b8;
  p_Var22 = (LPCRITICAL_SECTION)&local_5d0->Activities;
  local_5e0 = (TSortedMap<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification,TSizedDefaultAllocator<32>,TLess<int_const_>_>
               *)0x0;
  uVar31 = uVar20;
  local_5c0 = p_Var22;
  bVar10 = false;
  do {
    uVar25 = (uint)uVar20;
    uVar24 = 0;
    if ((int)uVar25 < p_Var22->LockCount) {
      uVar24 = ~uVar25 >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar9 = local_5d0;
    pFVar23 = ((CRITICAL_SECTION *)&p_Var22->DebugInfo)->Opaque1[0];
    if (*(int *)(pFVar23 + uVar31 + 0x18) < 2) {
      DestroyWindow(*(HWND *)(pFVar23 + uVar31));
      DestroyWindow(*(HWND *)(pFVar23 + uVar31 + 8));
      uVar24 = 0;
      if ((int)uVar25 < p_Var22->LockCount) {
        uVar24 = ~uVar25 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar23 = ((CRITICAL_SECTION *)&p_Var22->DebugInfo)->Opaque1[0] + uVar31;
      if (*(void **)(pFVar23 + 0x20) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar23 + 0x20));
      }
      if (*(void **)(pFVar23 + 0x10) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar23 + 0x10));
      }
      iVar13 = ~uVar25 + p_Var22->LockCount;
      if (iVar13 != 0) {
        memmove(pFVar23,pFVar23 + 0x40,(longlong)iVar13 << 6);
      }
      p_Var22->LockCount = p_Var22->LockCount + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,(ForAnyElementType *)p_Var22,p_Var22->LockCount,&p_Var22->RecursionCount);
      iVar12 = iVar12 + -1;
      bVar10 = true;
      local_5c4 = iVar12;
    }
    else {
      if (*(longlong *)(pFVar23 + uVar31) == 0) {
        pHVar5 = local_5d0->Font;
        pHVar15 = CreateWindowExW(0,L"Static",*(LPCWSTR *)(pFVar23 + uVar31 + 0x10),0x5000000d,0,0,1
                                  ,1,(HWND)local_5d0->MainHwnd,(HMENU)0x0,(HINSTANCE)0x0,(LPVOID)0x0
                                 );
        if (pHVar5 != (HFONT__ *)0x0) {
          SendMessageW(pHVar15,0x30,(WPARAM)pHVar5,0);
        }
        SetWindowLongW(pHVar15,-0x15,-1);
        local_478.Base = local_458;
        *(HWND *)(pFVar23 + uVar31) = pHVar15;
        local_478.CurPos = local_458;
        local_478.End = (wchar_t *)&local_258;
        local_478.bIsDynamic = false;
        local_478.bIsExternal = false;
        if (*(int *)(pFVar23 + uVar31 + 0x28) == 0) {
          pwVar27 = L"";
        }
        else {
          pwVar27 = *(wchar_t **)(pFVar23 + uVar31 + 0x20);
        }
        pwVar16 = wcschr(pwVar27,L'[');
        while (pwVar16 != (wchar_t *)0x0) {
          pwVar17 = wcschr(pwVar16 + 1,L']');
          uVar25 = local_5d4;
          if (pwVar17 == (wchar_t *)0x0) break;
          iVar12 = (int)((longlong)(pwVar16 + 1) - (longlong)pwVar27 >> 1) + -1;
          uVar21 = (ulong64)iVar12;
          if (local_478.End < (TStringBuilderBase<wchar_t> *)(local_478.CurPos + uVar21)) {
            TStringBuilderBase<wchar_t>::Extend(&local_478,uVar21);
          }
          if (iVar12 != 0) {
            pvVar18 = FGenericPlatformString::Memcpy(local_478.CurPos,pwVar27,uVar21 * 2);
            local_478.CurPos = (wchar_t *)((longlong)pvVar18 + uVar21 * 2);
          }
          pwVar27 = pwVar17 + 1;
          pwVar16 = wcschr(pwVar27,L'[');
          uVar25 = local_5d4;
        }
        iVar12 = 0;
        if (pwVar27 != (wchar_t *)0x0) {
          sVar19 = wcslen(pwVar27);
          iVar12 = (int)sVar19;
        }
        uVar21 = (ulong64)iVar12;
        if (local_478.End < (TStringBuilderBase<wchar_t> *)(local_478.CurPos + uVar21)) {
          TStringBuilderBase<wchar_t>::Extend(&local_478,uVar21);
        }
        if (iVar12 != 0) {
          pvVar18 = FGenericPlatformString::Memcpy(local_478.CurPos,pwVar27,uVar21 * 2);
          local_478.CurPos = (wchar_t *)((longlong)pvVar18 + uVar21 * 2);
        }
        pHVar5 = pFVar9->Font;
        if (local_478.End < (TStringBuilderBase<wchar_t> *)(local_478.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_478,1);
        }
        *local_478.CurPos = L'\0';
        pHVar15 = CreateWindowExW(0,L"Static",local_478.Base,0x5000010d,0,0,1,1,
                                  (HWND)pFVar9->MainHwnd,(HMENU)0x8808,(HINSTANCE)0x0,(LPVOID)0x0);
        if (pHVar5 != (HFONT__ *)0x0) {
          SendMessageW(pHVar15,0x30,(WPARAM)pHVar5,0);
        }
        SetWindowLongW(pHVar15,-0x15,-1);
        this_01 = &local_478;
        *(HWND *)(pFVar23 + uVar31 + 8) = pHVar15;
        bVar10 = true;
LAB_1423e677f:
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(this_01);
        p_Var22 = local_5c0;
        iVar12 = local_5c4;
      }
      else if (pFVar23[uVar31 + 0x38] != (FScriptContainerElement)0x0) {
        local_258.Base = local_238;
        pFVar23[uVar31 + 0x38] = (FScriptContainerElement)0x0;
        local_258.CurPos = local_238;
        local_258.End = (wchar_t *)local_38;
        local_258.bIsDynamic = false;
        local_258.bIsExternal = false;
        if (*(int *)(pFVar23 + uVar31 + 0x28) == 0) {
          pwVar27 = L"";
        }
        else {
          pwVar27 = *(wchar_t **)(pFVar23 + uVar31 + 0x20);
        }
        pwVar16 = wcschr(pwVar27,L'[');
        while (pwVar16 != (wchar_t *)0x0) {
          pwVar17 = wcschr(pwVar16 + 1,L']');
          uVar25 = local_5d4;
          if (pwVar17 == (wchar_t *)0x0) break;
          iVar12 = (int)((longlong)(pwVar16 + 1) - (longlong)pwVar27 >> 1) + -1;
          uVar21 = (ulong64)iVar12;
          if (local_258.End < local_258.CurPos + uVar21) {
            TStringBuilderBase<wchar_t>::Extend(&local_258,uVar21);
          }
          if (iVar12 != 0) {
            pvVar18 = FGenericPlatformString::Memcpy(local_258.CurPos,pwVar27,uVar21 * 2);
            local_258.CurPos = (wchar_t *)((longlong)pvVar18 + uVar21 * 2);
          }
          pwVar27 = pwVar17 + 1;
          pwVar16 = wcschr(pwVar27,L'[');
          uVar25 = local_5d4;
        }
        iVar12 = 0;
        if (pwVar27 != (wchar_t *)0x0) {
          sVar19 = wcslen(pwVar27);
          iVar12 = (int)sVar19;
        }
        uVar21 = (ulong64)iVar12;
        if (local_258.End < local_258.CurPos + uVar21) {
          TStringBuilderBase<wchar_t>::Extend(&local_258,uVar21);
        }
        if (iVar12 != 0) {
          pvVar18 = FGenericPlatformString::Memcpy(local_258.CurPos,pwVar27,uVar21 * 2);
          local_258.CurPos = (wchar_t *)((longlong)pvVar18 + uVar21 * 2);
        }
        if (local_258.End < local_258.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_258,1);
        }
        *local_258.CurPos = L'\0';
        SetWindowTextW(*(HWND *)(pFVar23 + uVar31 + 8),local_258.Base);
        this_01 = &local_258;
        goto LAB_1423e677f;
      }
      local_5d4 = uVar25 + 1;
      uVar20 = (ulonglong)local_5d4;
      local_5e0 = (TSortedMap<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification,TSizedDefaultAllocator<32>,TLess<int_const_>_>
                   *)((longlong)&(local_5e0->Pairs).AllocatorInstance.Data + 1);
      uVar31 = uVar31 + 0x40;
    }
    if ((int)uVar20 == iVar12) {
LAB_1423e67b8:
      pFVar9 = local_5d0;
      if (bVar8) {
        InvalidateRect((HWND)local_5d0->MainHwnd,(RECT *)0x0,0);
      }
      if (bVar10) {
        SendMessageW((HWND)pFVar9->LogHwnd,0xb,0,0);
        GetClientRect((HWND)pFVar9->MainHwnd,&local_520);
        dVar32 = __real_3ff0000000000000 / pFVar9->DpiScale;
        local_520.left = (LONG)((double)local_520.left * dVar32);
        local_520.top = (LONG)((double)local_520.top * dVar32);
        local_520.bottom = (LONG)((double)local_520.bottom * dVar32);
        local_520.right = (LONG)((double)local_520.right * dVar32);
        iVar12 = TraverseActivityPositions<_FWindowsConsoleOutputDevice2::FConsoleWindow::HandleActivityModifications_::__l50::<lambda_1>_>
                           (pFVar9,local_520.right,local_520.bottom,local_5c8);
        if (iVar12 == pFVar9->ActivitiesTotalHeight) {
          local_558 = local_5b8;
          local_5b8[0] = 0x21c;
          local_560 = pFVar9;
          TraverseActivityPositions<_FWindowsConsoleOutputDevice2::FConsoleWindow::UpdateActivityPositions_::__l2::<lambda_1>_>
                    (pFVar9,local_520.right,local_520.bottom,(<lambda_1> *)&local_560);
        }
        else {
          pFVar9->ActivitiesTotalHeight = iVar12;
          UpdateSize(pFVar9,local_520.right,local_520.bottom,false);
        }
        RedrawWindow((HWND)pFVar9->MainHwnd,(RECT *)0x0,(HRGN)0x0,0x195);
        SendMessageW((HWND)pFVar9->LogHwnd,0xb,1,0);
      }
      return;
    }
  } while( true );
}

// HandleMouseWheel @ 1423e6c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FWindowsConsoleOutputDevice2::FConsoleWindow::HandleMouseWheel(FConsoleWindow *this,ulong64 param_1)

{
  undefined1 auStack_48 [32];
  tagRECT local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  GetClientRect((HWND)this->LogHwnd,&local_28);
  MoveTopVisible(this,(tagRECT *)&local_28,((short)(param_1 >> 0x10) * -3) / 0x78);
  return 0;
}

// HandleNewLogEntries @ 1423e6cb0

/* WARNING: Removing unreachable block (ram,0x0001423e6eb0) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsConsoleOutputDevice2::FConsoleWindow::HandleNewLogEntries(FConsoleWindow *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  TRingBuffer<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,TSizedDefaultAllocator<32>_>
  *this_00;
  FScriptContainerElement *pFVar2;
  NewLogEntry *pNVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  wchar_t *pwVar13;
  size_t sVar14;
  LRESULT LVar15;
  uint uVar16;
  wchar_t *_Str;
  int iVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  undefined1 local_res8 [8];
  uint local_res10;
  uint local_res18;
  FString local_98;
  FScriptContainerElement local_88;
  undefined8 local_84;
  undefined8 local_78;
  undefined2 local_70;
  undefined2 local_6e;
  LogEntry local_68;
  
  if (this->bSuspendAddingEntries == false) {
    lpCriticalSection = &this->NewLogEntriesCs;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar5 = *(undefined4 *)((longlong)&(this->TempLogEntries).AllocatorInstance.Data + 4);
    iVar18 = (this->TempLogEntries).ArrayNum;
    iVar20 = (this->TempLogEntries).ArrayMax;
    uVar6 = *(undefined4 *)&(this->NewLogEntries).AllocatorInstance.Data;
    uVar7 = *(undefined4 *)((longlong)&(this->NewLogEntries).AllocatorInstance.Data + 4);
    iVar17 = (this->NewLogEntries).ArrayNum;
    iVar8 = (this->NewLogEntries).ArrayMax;
    *(undefined4 *)&(this->NewLogEntries).AllocatorInstance.Data =
         *(undefined4 *)&(this->TempLogEntries).AllocatorInstance.Data;
    *(undefined4 *)((longlong)&(this->NewLogEntries).AllocatorInstance.Data + 4) = uVar5;
    (this->NewLogEntries).ArrayNum = iVar18;
    (this->NewLogEntries).ArrayMax = iVar20;
    *(undefined4 *)&(this->TempLogEntries).AllocatorInstance.Data = uVar6;
    *(undefined4 *)((longlong)&(this->TempLogEntries).AllocatorInstance.Data + 4) = uVar7;
    (this->TempLogEntries).ArrayNum = iVar17;
    (this->TempLogEntries).ArrayMax = iVar8;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res10 = (this->TempLogEntries).ArrayNum;
    uVar12 = (ulonglong)(int)local_res10;
    if (local_res10 != 0) {
      pFVar21 = (this->TempLogEntries).AllocatorInstance.Data;
      this_00 = &this->Log;
      local_res18 = (this->Log).AfterBack - (this->Log).Front;
      pFVar19 = pFVar21 + uVar12 * 0x30;
      while( true ) {
        if ((this->TempLogEntries).ArrayNum != (int)uVar12) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FWindowsConsoleOutputDevice2::FConsoleWindow::NewLogEntry,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        uVar10 = local_res18;
        if (pFVar21 == pFVar19) break;
        if (*(int *)(pFVar21 + 8) == 0) {
          _Str = L"";
        }
        else {
          _Str = *(wchar_t **)pFVar21;
        }
        pwVar13 = wcschr(_Str,L'\n');
        if (pwVar13 != (wchar_t *)0x0) {
          do {
            iVar18 = (int)((longlong)pwVar13 - (longlong)_Str >> 1);
            if ((_Str < pwVar13) && (pwVar13[-1] == L'\r')) {
              iVar18 = iVar18 + -1;
            }
            ::FString::ConstructFromPtrSize(&local_98,_Str,iVar18);
            local_88 = pFVar21[0x10];
            local_78 = *(undefined8 *)(pFVar21 + 0x20);
            local_84 = *(undefined8 *)(pFVar21 + 0x14);
            local_70 = *(undefined2 *)(pFVar21 + 0x28);
            local_6e = 1;
            uVar10 = TRingBuffer<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,TSizedDefaultAllocator<32>_>
                     ::NormalizeCapacity(this_00,((this->Log).AfterBack - (this->Log).Front) + 1);
            if ((this->Log).IndexMask + 1 < uVar10) {
              TRingBuffer<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,TSizedDefaultAllocator<32>_>
              ::Reallocate(this_00,uVar10);
            }
            uVar10 = (this->Log).AfterBack;
            uVar12 = (ulonglong)((this->Log).IndexMask & uVar10);
            pFVar2 = (this_00->AllocatorInstance).Data;
            (this->Log).AfterBack = uVar10 + 1;
            *(undefined8 *)(pFVar2 + uVar12 * 0x30) = 0;
            *(FScriptContainerElement **)(pFVar2 + uVar12 * 0x30) =
                 local_98.Data.AllocatorInstance.Data;
            *(int *)(pFVar2 + uVar12 * 0x30 + 8) = local_98.Data.ArrayNum;
            *(int *)(pFVar2 + uVar12 * 0x30 + 0xc) = local_98.Data.ArrayMax;
            pFVar2[uVar12 * 0x30 + 0x10] = local_88;
            *(undefined8 *)(pFVar2 + uVar12 * 0x30 + 0x14) = local_84;
            *(undefined8 *)(pFVar2 + uVar12 * 0x30 + 0x20) = local_78;
            *(undefined2 *)(pFVar2 + uVar12 * 0x30 + 0x28) = local_70;
            *(undefined2 *)(pFVar2 + uVar12 * 0x30 + 0x2a) = local_6e;
            local_98.Data.ArrayNum = 0;
            local_98.Data.ArrayMax = 0;
            local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            _Str = pwVar13 + 1;
            pwVar13 = wcschr(_Str,L'\n');
          } while (pwVar13 != (wchar_t *)0x0);
          uVar12 = (ulonglong)local_res10;
        }
        sVar14 = wcslen(_Str);
        if ((int)sVar14 != 0) {
          ::FString::FString(&local_68.String,_Str);
          local_68.Verbosity = *(Type *)(pFVar21 + 0x10);
          local_68.Time = *(double *)(pFVar21 + 0x20);
          local_68.Category = *(FName *)(pFVar21 + 0x14);
          local_68.TextAttribute = *(ushort *)(pFVar21 + 0x28);
          local_68.LineCount = 1;
          TRingBuffer<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,TSizedDefaultAllocator<32>_>
          ::Add(this_00,&local_68);
          if (local_68.String.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.String.Data.AllocatorInstance.Data);
          }
        }
        pFVar21 = pFVar21 + 0x30;
      }
      iVar18 = -1;
      iVar17 = (this->Log).AfterBack - (this->Log).Front;
      uVar16 = iVar17 - local_res18;
      iVar20 = -1;
      SendMessageW((HWND)this->LogHwnd,0xb,0,0);
      if (200000 < iVar17) {
        uVar16 = iVar17 - 200000;
        TRingBuffer<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,TSizedDefaultAllocator<32>_>
        ::PopFront(this_00,uVar16);
        this->LogIndexOffset = this->LogIndexOffset + uVar16;
        if (200000 < (int)uVar16) {
          uVar16 = 200000;
        }
        uVar10 = uVar16;
        iVar18 = -1;
        if (this->bAutoScrollLog == false) {
          LVar15 = SendMessageW((HWND)this->LogHwnd,0x18e,0,0);
          if ((LVar15 != (int)LVar15) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar20 = (int)LVar15 - uVar16;
          iVar18 = 0;
          if (0 < iVar20) {
            iVar18 = iVar20;
          }
          LVar15 = SendMessageW((HWND)this->LogHwnd,0x19f,0,0);
          if ((LVar15 != (int)LVar15) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar17 = (int)LVar15 - uVar16;
          iVar20 = 0;
          if (0 < iVar17) {
            iVar20 = iVar17;
          }
        }
        for (; uVar10 != 0; uVar10 = uVar10 - 1) {
          SendMessageW((HWND)this->LogHwnd,0x182,0,0);
        }
        uVar10 = 200000 - uVar16;
      }
      while (uVar16 != 0) {
        iVar17 = this->LogIndexOffset;
        uVar16 = uVar16 - 1;
        uVar11 = 0;
        if ((int)uVar10 < (int)((this->Log).AfterBack - (this->Log).Front)) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < Num())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                               ,0x3e3,
                               L"RingBuffer index out of bounds: %i from a RingBuffer of size %i"),
           bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        AddEntryToLogHwnd(this,(LogEntry *)
                               ((this->Log).AllocatorInstance.Data +
                               (ulonglong)((this->Log).Front + uVar10 & (this->Log).IndexMask) *
                               0x30),iVar17 + uVar10);
        uVar10 = uVar10 + 1;
      }
      piVar1 = &(this->TempLogEntries).ArrayMax;
      pNVar3 = (NewLogEntry *)(this->TempLogEntries).AllocatorInstance.Data;
      iVar17 = (this->TempLogEntries).ArrayNum;
      if ((this->TempLogEntries).ArrayMax < 0) {
        DestructItems<FWindowsConsoleOutputDevice2::FConsoleWindow::NewLogEntry,int>(pNVar3,iVar17);
        (this->TempLogEntries).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,0,&(this->TempLogEntries).AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<FWindowsConsoleOutputDevice2::FConsoleWindow::NewLogEntry,int>(pNVar3,iVar17);
        (this->TempLogEntries).ArrayNum = 0;
      }
      if (this->bAutoScrollLog == false) {
        if (iVar18 != -1) {
          SendMessageW((HWND)this->LogHwnd,0x19e,(longlong)iVar20,0);
          SendMessageW((HWND)this->LogHwnd,0x185,1,(longlong)iVar20);
          SetWindowPos((HWND)this->TipHwnd,(HWND)this->MainHwnd,1,1,1,1,0x614);
          SendMessageW((HWND)this->LogHwnd,0x197,(longlong)iVar18,0);
        }
      }
      else {
        ScrollToBottom(this);
      }
      RedrawWindow((HWND)this->LogScrollHwnd,(RECT *)0x0,(HRGN)0x0,1);
      SendMessageW((HWND)this->LogHwnd,0xb,1,0);
    }
  }
  return;
}

// HitTestNCA @ 1423e78d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall
FWindowsConsoleOutputDevice2::FConsoleWindow::HitTestNCA
          (FConsoleWindow *this,HWND__ *param_1,long64 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  undefined1 auStack_a8 [32];
  long64 local_88 [10];
  tagRECT local_38;
  tagRECT local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  GetWindowRect((HWND)param_1,&local_38);
  dVar6 = __real_3ff0000000000000 / this->DpiScale;
  local_38.left = (LONG)((double)local_38.left * dVar6);
  local_38.top = (LONG)((double)local_38.top * dVar6);
  local_38.right = (LONG)((double)local_38.right * dVar6);
  local_38.bottom = (LONG)((double)local_38.bottom * dVar6);
  iVar5 = (int)((double)((uint)param_2 & 0xffff) * dVar6);
  iVar4 = (int)((double)((uint)((ulonglong)param_2 >> 0x10) & 0xffff) * dVar6);
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  AdjustWindowRectEx(&local_28,0xf0000,0,0);
  local_88[1] = 2;
  if ((iVar4 < local_38.top) || (local_38.top + 0x1b <= iVar4)) {
    bVar1 = false;
    lVar3 = 1;
    if ((iVar4 < local_38.bottom) && (local_38.bottom + -2 <= iVar4)) {
      lVar3 = 2;
    }
  }
  else {
    lVar3 = 0;
    bVar1 = iVar4 < local_38.top - local_28.top;
  }
  lVar2 = 0;
  if ((iVar5 < local_38.left) || (local_38.left + 2 <= iVar5)) {
    lVar2 = 1;
    if ((iVar5 < local_38.right) && (local_38.right + -2 <= iVar5)) {
      lVar2 = 2;
    }
  }
  local_88[2] = ___xmm_000000000000000a000000000000000e;
  local_88[3] = _UNK_1508e3ca8;
  if (bVar1) {
    local_88[1] = 0xc;
  }
  local_88[0] = 0xd;
  local_88[4] = ___xmm_000000000000000b0000000000000001;
  local_88[5] = _UNK_1508e3cb8;
  local_88[6] = ___xmm_000000000000000f0000000000000010;
  local_88[7] = _UNK_1508e3cc8;
  local_88[8] = 0x11;
  return local_88[lVar2 + lVar3 * 3];
}

// HitTestNCB @ 1423e7ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FWindowsConsoleOutputDevice2::FConsoleWindow::HitTestNCB
          (FConsoleWindow *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  undefined1 auStack_48 [32];
  tagRECT local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  GetWindowRect((HWND)this->MainHwnd,&local_28);
  dVar3 = __real_3ff0000000000000 / this->DpiScale;
  iVar1 = (int)((double)local_28.right * dVar3);
  if ((((int)((double)param_2 * dVar3) < (int)((double)local_28.top * dVar3) + 2) ||
      ((int)((double)local_28.top * dVar3) + 0x1b < (int)((double)param_2 * dVar3))) ||
     (iVar2 = (int)((double)param_1 * dVar3), iVar1 + -2 < iVar2)) {
    iVar1 = 0;
  }
  else if (iVar1 + -0x6c < iVar2) {
    local_28.left = ___xmm_000003e8000000080000000900000014;
    local_28.top = _UNK_1508e3cd4;
    local_28.right = _UNK_1508e3cd8;
    local_28.bottom = _UNK_1508e3cdc;
    iVar1 = (&local_28.left)[(iVar1 - iVar2) / 0x1b];
  }
  else {
    iVar1 = 2;
  }
  return iVar1;
}

// LogHwndWndProc @ 1423ebb70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall
FWindowsConsoleOutputDevice2::FConsoleWindow::LogHwndWndProc
          (FConsoleWindow *this,HWND__ *param_1,uint param_2,ulong64 param_3,long64 param_4)

{
  FScriptContainerElement *pFVar1;
  wchar_t wVar2;
  POINT pt;
  wchar_t *pwVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  BOOL BVar7;
  FString *pFVar8;
  void *pvVar9;
  long64 lVar10;
  LRESULT LVar11;
  LogEntry *pLVar12;
  size_t sVar13;
  HDC hdc;
  FString *pFVar14;
  TStringBuilderBase<wchar_t> *pTVar15;
  wchar_t *pwVar16;
  ulonglong uVar17;
  ulong64 uVar18;
  byte bVar19;
  longlong lVar20;
  wchar_t *pwVar21;
  wchar_t *pwVar22;
  undefined1 auVar23 [8];
  int iVar24;
  int iVar25;
  short sVar26;
  bool bVar27;
  undefined1 auStackY_12c8 [32];
  undefined1 local_1288 [8];
  FString *local_1280;
  tagPOINT local_1278;
  undefined1 local_1270 [8];
  FString local_1268;
  HWND__ *local_1258;
  FString local_1250;
  uint local_1240;
  ulong64 local_1238;
  undefined4 local_1228 [12];
  undefined8 local_11f8;
  tagTRACKMOUSEEVENT local_11d8;
  TStringBuilderBase<wchar_t> local_11b8;
  TStringBuilderBase<wchar_t> local_1198 [8];
  TStringBuilderBase<wchar_t> local_1098;
  wchar_t local_1078 [64];
  TStringBuilderBase<wchar_t> local_ff8 [60];
  TStringBuilderBase<wchar_t> local_878;
  wchar_t local_858 [1024];
  ulonglong local_58 [2];
  undefined8 uStack_48;
  
  uStack_48 = 0x1423ebb8f;
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_12c8;
  iVar6 = 0;
  local_1278.x = 0;
  sVar26 = (short)param_4;
  sVar4 = (short)((ulonglong)param_4 >> 0x10);
  local_1258 = param_1;
  local_1240 = param_2;
  local_1238 = param_3;
  if (0x201 < param_2) {
    if (param_2 == 0x202) goto LAB_1423ec2c1;
    if (param_2 == 0x204) {
      this->bAutoScrollLog = false;
      this->bSuspendAddingEntries = true;
      LVar11 = SendMessageW((HWND)param_1,0x1a9,0,param_4);
      iVar6 = IntCastChecked<int,__int64>(LVar11);
      this->RightClickedItem = iVar6;
      local_1288 = (undefined1  [8])0x0;
      bVar27 = false;
      local_1280 = (FString *)0x0;
      GetSelectedItems(this,(TArray<int,TSizedDefaultAllocator<32>_> *)local_1288);
      iVar6 = (int)local_1280;
      uVar17 = (ulonglong)(int)local_1280;
      pFVar1 = (FScriptContainerElement *)((longlong)local_1288 + uVar17 * 4);
      auVar23 = local_1288;
      while( true ) {
        if ((int)uVar17 != iVar6) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1270)
          ;
          uVar17 = (ulonglong)local_1280 & 0xffffffff;
        }
        if (auVar23 == (undefined1  [8])pFVar1) break;
        bVar27 = (bool)(bVar27 | this->RightClickedItem == *(int *)auVar23);
        auVar23 = (undefined1  [8])((longlong)auVar23 + 4);
      }
      if (!bVar27) {
        ClearSelection(this);
        SendMessageW((HWND)this->LogHwnd,0x185,1,(longlong)this->RightClickedItem);
      }
      if (local_1288 != (undefined1  [8])0x0) {
        FMemory::Free((void *)local_1288);
      }
      goto switchD_1423ebcb0_caseD_69;
    }
    if (param_2 != 0x205) {
      if (param_2 == 0x20a) {
        iVar6 = HandleMouseWheel(this,param_3);
        return (longlong)iVar6;
      }
      if (param_2 == 0x2a1) {
        iVar25 = (int)sVar4;
        local_1268.Data.AllocatorInstance.Data._4_4_ = iVar25;
        local_1268.Data.AllocatorInstance.Data._0_4_ = (int)sVar26;
        this->TipPosition = (tagPOINT)local_1268.Data.AllocatorInstance.Data;
        LVar11 = SendMessageW((HWND)param_1,0x1a9,0,param_4);
        uVar5 = IntCastChecked<int,__int64>(LVar11);
        iVar6 = this->LogIndexOffset;
        LVar11 = SendMessageW((HWND)param_1,0x199,(ulonglong)(uVar5 & 0xffff),0);
        iVar6 = IntCastChecked<int,__int64>(LVar11 - iVar6);
        if ((0 < iVar6) && (iVar6 < (int)((this->Log).AfterBack - (this->Log).Front))) {
          local_1098.Base = local_1078;
          local_1098.bIsDynamic = false;
          local_1098.bIsExternal = false;
          local_1098.CurPos = local_1078;
          local_1098.End = (wchar_t *)&local_878;
          pLVar12 = TRingBuffer<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,TSizedDefaultAllocator<32>_>
                    ::operator[](&this->Log,iVar6);
          CreateLogEntryText(this,&local_1098,pLVar12,false);
          lVar20 = (longlong)local_1098.CurPos - (longlong)local_1098.Base;
          GetClientRect((HWND)this->LogHwnd,(LPRECT)&local_11d8);
          iVar6 = (int)local_11d8.hwndTrack / this->LogFontWidth;
          if (iVar6 < (int)(lVar20 >> 1)) {
            if (local_1098.End < (TStringBuilderBase<wchar_t> *)(local_1098.CurPos + 1)) {
              TStringBuilderBase<wchar_t>::Extend(&local_1098,1);
            }
            *local_1098.CurPos = L'\0';
            pwVar21 = local_1098.Base + iVar6;
            sVar13 = wcslen(pwVar21);
            iVar24 = this->LogFontWidth;
            hdc = GetDC((HWND)this->TipHwnd);
            SelectObject(hdc,this->LogFont);
            ReleaseDC((HWND)this->TipHwnd,hdc);
            local_1278.x = iVar6 * this->LogFontWidth;
            local_1278.y = iVar25 - iVar25 % this->LogFontHeight;
            MapWindowPoints((HWND)this->LogHwnd,(HWND)0x0,&local_1278,1);
            SetWindowPos((HWND)this->TipHwnd,(HWND)this->MainHwnd,local_1278.x,local_1278.y + -1,
                         (int)sVar13 * iVar24 + 3,this->LogFontHeight + 2,0x614);
            SetWindowTextW((HWND)this->TipHwnd,pwVar21);
            param_1 = local_1258;
            RedrawWindow((HWND)local_1258,(RECT *)0x0,(HRGN)0x0,0x101);
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1098);
          }
          else {
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1098);
            param_1 = local_1258;
          }
        }
      }
      goto switchD_1423ebcb0_caseD_69;
    }
    if (this->bSuspendAddingEntries != false) {
      this->bSuspendAddingEntries = false;
      SetEvent(this->DirtyEvent);
    }
    iVar6 = this->LogIndexOffset;
    local_1278.x = (LONG)sVar26;
    local_1278.y = (LONG)sVar4;
    local_878.Base = local_858;
    local_878.CurPos = local_858;
    local_878.End = (wchar_t *)local_58;
    local_878.bIsDynamic = false;
    local_878.bIsExternal = false;
    LVar11 = SendMessageW((HWND)this->LogHwnd,0x199,(longlong)this->RightClickedItem,0);
    iVar6 = IntCastChecked<int,__int64>(LVar11 - iVar6);
    this->RightClickedItem = -1;
    if (iVar6 < 0) {
      GetClientRect((HWND)param_1,(LPRECT)&local_11d8);
      pt.y = local_1278.y;
      pt.x = local_1278.x;
      BVar7 = PtInRect((RECT *)&local_11d8,pt);
      if (BVar7 != 0) goto LAB_1423ec6a5;
    }
    else {
      pLVar12 = TRingBuffer<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,TSizedDefaultAllocator<32>_>
                ::operator[](&this->Log,iVar6);
      CreateLogEntryText(this,&local_878,pLVar12,false);
LAB_1423ec6a5:
      local_1268.Data.AllocatorInstance.Data = (FScriptContainerElement *)CreatePopupMenu();
      local_1228[0] = 0x50;
      local_1288 = (undefined1  [8])local_1228;
      local_11f8 = 0;
      local_1280 = &local_1268;
      local_11d8._0_8_ = local_1228;
      local_11d8.hwndTrack = (HWND)&local_1268;
      `FWindowsConsoleOutputDevice2::FConsoleWindow::LogHwndWndProc'::__l15::<lambda_1>::operator()
                (local_1288,L"Activate auto scroll",0x65);
      `FWindowsConsoleOutputDevice2::FConsoleWindow::LogHwndWndProc'::__l15::<lambda_1>::operator()
                (local_1288,L"Copy selected line(s)",0x66);
      `FWindowsConsoleOutputDevice2::FConsoleWindow::LogHwndWndProc'::__l15::<lambda_2>::operator()
                (&local_11d8);
      `FWindowsConsoleOutputDevice2::FConsoleWindow::LogHwndWndProc'::__l15::<lambda_1>::operator()
                (local_1288,L"Clear all",0x67);
      `FWindowsConsoleOutputDevice2::FConsoleWindow::LogHwndWndProc'::__l15::<lambda_1>::operator()
                (local_1288,L"Clear all entries above line",0x68);
      `FWindowsConsoleOutputDevice2::FConsoleWindow::LogHwndWndProc'::__l15::<lambda_1>::operator()
                (local_1288,L"Clear filters",0x79);
      if (-1 < iVar6) {
        pLVar12 = TRingBuffer<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,TSizedDefaultAllocator<32>_>
                  ::operator[](&this->Log,iVar6);
        pFVar14 = ::FName::ToString(&pLVar12->Category,&local_1250);
        ::FString::operator=(&this->SelectedCategory,pFVar14);
        if (local_1250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1250.Data.AllocatorInstance.Data);
        }
        pLVar12 = TRingBuffer<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,TSizedDefaultAllocator<32>_>
                  ::operator[](&this->Log,iVar6);
        this->SelectedVerbosity = pLVar12->Verbosity;
        `FWindowsConsoleOutputDevice2::FConsoleWindow::LogHwndWndProc'::__l15::<lambda_2>::
        operator()(&local_11d8);
        local_1098.Base = local_1078;
        local_1098.bIsDynamic = false;
        local_1098.bIsExternal = false;
        local_1098.CurPos = local_1078;
        local_1098.End = (wchar_t *)local_ff8;
        pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                            (&local_1098,L"Include category \'",0x12);
        pwVar21 = L"";
        iVar6 = 0;
        if ((this->SelectedCategory).Data.ArrayNum == 0) {
          pwVar16 = L"";
LAB_1423ec828:
          sVar13 = wcslen(pwVar16);
          iVar25 = (int)sVar13;
        }
        else {
          pwVar16 = (wchar_t *)(this->SelectedCategory).Data.AllocatorInstance.Data;
          iVar25 = iVar6;
          if ((FScriptContainerElement *)pwVar16 != (FScriptContainerElement *)0x0)
          goto LAB_1423ec828;
        }
        pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar15,pwVar16,iVar25);
        pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar15,L"\' in filter",0xb);
        pwVar16 = TStringBuilderBase<wchar_t>::operator*(pTVar15);
        `FWindowsConsoleOutputDevice2::FConsoleWindow::LogHwndWndProc'::__l15::<lambda_1>::
        operator()(local_1288,pwVar16,0x7c);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1098);
        local_1098.Base = local_1078;
        local_1098.bIsDynamic = false;
        local_1098.bIsExternal = false;
        local_1098.CurPos = local_1078;
        local_1098.End = (wchar_t *)local_ff8;
        pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                            (&local_1098,L"Exclude category \'",0x12);
        if (((this->SelectedCategory).Data.ArrayNum == 0) ||
           (pwVar21 = (wchar_t *)(this->SelectedCategory).Data.AllocatorInstance.Data,
           iVar25 = iVar6, (FScriptContainerElement *)pwVar21 != (FScriptContainerElement *)0x0)) {
          sVar13 = wcslen(pwVar21);
          iVar25 = (int)sVar13;
        }
        pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar15,pwVar21,iVar25);
        pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar15,L"\' in filter",0xb);
        pwVar21 = TStringBuilderBase<wchar_t>::operator*(pTVar15);
        `FWindowsConsoleOutputDevice2::FConsoleWindow::LogHwndWndProc'::__l15::<lambda_1>::
        operator()(local_1288,pwVar21,0x7d);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1098);
        local_1098.Base = local_1078;
        local_1098.bIsDynamic = false;
        local_1098.bIsExternal = false;
        local_1098.CurPos = local_1078;
        local_1098.End = (wchar_t *)local_ff8;
        pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                            (&local_1098,L"Include verbosity \'",0x13);
        pwVar21 = ::ToString(this->SelectedVerbosity);
        iVar25 = iVar6;
        if (pwVar21 != (wchar_t *)0x0) {
          sVar13 = wcslen(pwVar21);
          iVar25 = (int)sVar13;
        }
        pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar15,pwVar21,iVar25);
        pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar15,L"\' in filter",0xb);
        pwVar21 = TStringBuilderBase<wchar_t>::operator*(pTVar15);
        `FWindowsConsoleOutputDevice2::FConsoleWindow::LogHwndWndProc'::__l15::<lambda_1>::
        operator()(local_1288,pwVar21,0x7e);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1098);
        local_1098.Base = local_1078;
        local_1098.bIsDynamic = false;
        local_1098.bIsExternal = false;
        local_1098.CurPos = local_1078;
        local_1098.End = (wchar_t *)local_ff8;
        pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                            (&local_1098,L"Exclude verbosity \'",0x13);
        pwVar21 = ::ToString(this->SelectedVerbosity);
        if (pwVar21 != (wchar_t *)0x0) {
          sVar13 = wcslen(pwVar21);
          iVar6 = (int)sVar13;
        }
        pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar15,pwVar21,iVar6);
        pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar15,L"\' in filter",0xb);
        pwVar21 = TStringBuilderBase<wchar_t>::operator*(pTVar15);
        `FWindowsConsoleOutputDevice2::FConsoleWindow::LogHwndWndProc'::__l15::<lambda_1>::
        operator()(local_1288,pwVar21,0x7f);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1098);
      }
      iVar6 = (this->LogFontWidth / 2 + local_1278.x) / this->LogFontWidth;
      if (iVar6 < (int)((longlong)local_878.CurPos - (longlong)local_878.Base >> 1)) {
        if (local_878.End < local_878.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_878,1);
        }
        pwVar16 = local_878.Base;
        *local_878.CurPos = L'\0';
        pwVar22 = local_878.Base + iVar6;
        pwVar21 = pwVar22;
        do {
          pwVar3 = pwVar21;
          if (pwVar3 == pwVar16) break;
          wVar2 = pwVar3[-1];
          pwVar21 = pwVar3 + -1;
          iVar6 = iswalnum(wVar2);
        } while (((iVar6 != 0) || (wVar2 == L'_')) || (wVar2 == L'-'));
        while( true ) {
          wVar2 = *pwVar22;
          iVar6 = iswalnum(wVar2);
          if (((iVar6 == 0) && (wVar2 != L'_')) && (wVar2 != L'-')) break;
          pwVar22 = pwVar22 + 1;
        }
        param_1 = local_1258;
        if (pwVar3 != pwVar22) {
          pFVar14 = &this->SelectedWord;
          ::FString::AssignRange(pFVar14,pwVar3,(int)((longlong)pwVar22 - (longlong)pwVar3 >> 1));
          `FWindowsConsoleOutputDevice2::FConsoleWindow::LogHwndWndProc'::__l15::<lambda_2>::
          operator()(&local_11d8);
          local_1098.Base = local_1078;
          local_1098.bIsDynamic = false;
          local_1098.bIsExternal = false;
          local_1098.CurPos = local_1078;
          local_1098.End = (wchar_t *)local_ff8;
          local_1098.CurPos =
               FGenericPlatformString::Convert<char,wchar_t>(local_1078,0xb,"Copy word \'",0xb);
          iVar6 = (this->SelectedWord).Data.ArrayNum;
          iVar24 = 0;
          iVar25 = iVar6 + -1;
          if (iVar6 == 0) {
            iVar25 = iVar24;
          }
          pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                              (&local_1098,(wchar_t *)(pFVar14->Data).AllocatorInstance.Data,iVar25)
          ;
          if (pTVar15->End < pTVar15->CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(pTVar15,1);
          }
          pwVar21 = FGenericPlatformString::Convert<char,wchar_t>(pTVar15->CurPos,1,"\'",1);
          pTVar15->CurPos = pwVar21;
          pwVar21 = TStringBuilderBase<wchar_t>::operator*(pTVar15);
          `FWindowsConsoleOutputDevice2::FConsoleWindow::LogHwndWndProc'::__l15::<lambda_1>::
          operator()(local_1288,pwVar21,0x78);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1098);
          `FWindowsConsoleOutputDevice2::FConsoleWindow::LogHwndWndProc'::__l15::<lambda_2>::
          operator()(&local_11d8);
          local_1098.Base = local_1078;
          local_1098.bIsDynamic = false;
          local_1098.bIsExternal = false;
          local_1098.CurPos = local_1078;
          local_1098.End = (wchar_t *)local_ff8;
          local_1098.CurPos =
               FGenericPlatformString::Convert<char,wchar_t>(local_1078,0xe,"Include word \'",0xe);
          iVar6 = (this->SelectedWord).Data.ArrayNum;
          iVar25 = iVar6 + -1;
          if (iVar6 == 0) {
            iVar25 = iVar24;
          }
          pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                              (&local_1098,(wchar_t *)(pFVar14->Data).AllocatorInstance.Data,iVar25)
          ;
          if (pTVar15->End < pTVar15->CurPos + 0xb) {
            TStringBuilderBase<wchar_t>::Extend(pTVar15,0xb);
          }
          pwVar21 = FGenericPlatformString::Convert<char,wchar_t>
                              (pTVar15->CurPos,0xb,"\' in filter",0xb);
          pTVar15->CurPos = pwVar21;
          pwVar21 = TStringBuilderBase<wchar_t>::operator*(pTVar15);
          `FWindowsConsoleOutputDevice2::FConsoleWindow::LogHwndWndProc'::__l15::<lambda_1>::
          operator()(local_1288,pwVar21,0x7a);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1098);
          local_1098.Base = local_1078;
          local_1098.bIsDynamic = false;
          local_1098.bIsExternal = false;
          local_1098.CurPos = local_1078;
          local_1098.End = (wchar_t *)local_ff8;
          local_1098.CurPos =
               FGenericPlatformString::Convert<char,wchar_t>(local_1078,0xe,"Exclude word \'",0xe);
          iVar6 = (this->SelectedWord).Data.ArrayNum;
          iVar25 = iVar6 + -1;
          if (iVar6 == 0) {
            iVar25 = iVar24;
          }
          pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                              (&local_1098,(wchar_t *)(pFVar14->Data).AllocatorInstance.Data,iVar25)
          ;
          if (pTVar15->End < pTVar15->CurPos + 0xb) {
            TStringBuilderBase<wchar_t>::Extend(pTVar15,0xb);
          }
          pwVar21 = FGenericPlatformString::Convert<char,wchar_t>
                              (pTVar15->CurPos,0xb,"\' in filter",0xb);
          pTVar15->CurPos = pwVar21;
          pwVar21 = TStringBuilderBase<wchar_t>::operator*(pTVar15);
          `FWindowsConsoleOutputDevice2::FConsoleWindow::LogHwndWndProc'::__l15::<lambda_1>::
          operator()(local_1288,pwVar21,0x7b);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1098);
          param_1 = local_1258;
        }
      }
      `FWindowsConsoleOutputDevice2::FConsoleWindow::LogHwndWndProc'::__l15::<lambda_2>::operator()
                (&local_11d8);
      if (this->ConsoleShowDateTime != 1) {
        `FWindowsConsoleOutputDevice2::FConsoleWindow::LogHwndWndProc'::__l15::<lambda_1>::
        operator()(local_1288,L"Show Time",0x83);
      }
      if (this->ConsoleShowDateTime != 2) {
        `FWindowsConsoleOutputDevice2::FConsoleWindow::LogHwndWndProc'::__l15::<lambda_1>::
        operator()(local_1288,L"Show Date and Time",0x84);
      }
      if (this->ConsoleShowDateTime != 0) {
        `FWindowsConsoleOutputDevice2::FConsoleWindow::LogHwndWndProc'::__l15::<lambda_1>::
        operator()(local_1288,L"Hide Date and Time",0x85);
      }
      if ((this->bConsoleShowVerbosity == false) ||
         (`FWindowsConsoleOutputDevice2::FConsoleWindow::LogHwndWndProc'::__l15::<lambda_1>::
          operator()(local_1288,L"Hide Verbosity",0x86), this->bConsoleShowVerbosity == false)) {
        `FWindowsConsoleOutputDevice2::FConsoleWindow::LogHwndWndProc'::__l15::<lambda_1>::
        operator()(local_1288,L"Show Verbosity",0x87);
      }
      MapWindowPoints((HWND)param_1,(HWND)0x0,&local_1278,1);
      TrackPopupMenu((HMENU)local_1268.Data.AllocatorInstance.Data,0,local_1278.x,local_1278.y,0,
                     (HWND)param_1,(RECT *)0x0);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
    goto switchD_1423ebcb0_caseD_69;
  }
  if (param_2 == 0x201) {
LAB_1423ec321:
    this->bSuspendAddingEntries = true;
    goto switchD_1423ebcb0_caseD_69;
  }
  if (param_2 == 8) {
LAB_1423ec2c1:
    if (this->bSuspendAddingEntries != false) {
      this->bSuspendAddingEntries = false;
      SetEvent(this->DirtyEvent);
    }
    goto switchD_1423ebcb0_caseD_69;
  }
  if (param_2 == 0x100) {
    if (param_3 != 0x10) goto switchD_1423ebcb0_caseD_69;
    goto LAB_1423ec321;
  }
  if (param_2 == 0x101) {
    if (param_3 != 0x10) goto switchD_1423ebcb0_caseD_69;
    goto LAB_1423ec2c1;
  }
  if (param_2 != 0x111) {
    if ((param_2 == 0x200) &&
       (((int)sVar26 != (this->TipPosition).x || ((int)sVar4 != (this->TipPosition).y)))) {
      SetWindowPos((HWND)this->TipHwnd,(HWND)this->MainHwnd,1,1,1,1,0x614);
      local_11d8._0_8_ = (FScriptContainerElement *)0x100000018;
      local_11d8.dwHoverTime = 0xffffffff;
      local_11d8.hwndTrack = (HWND)param_1;
      TrackMouseEvent(&local_11d8);
    }
    goto switchD_1423ebcb0_caseD_69;
  }
  uVar5 = (uint)param_3 & 0xffff;
  switch(uVar5) {
  case 0x65:
    EnableAutoScroll(this);
    break;
  case 0x66:
    CopySelectionToClipboard(this);
    break;
  case 0x67:
    ClearLog(this);
    this->bAutoScrollLog = true;
    break;
  case 0x68:
    local_1278.x = -1;
    LVar11 = SendMessageW((HWND)this->LogHwnd,0x191,1,(LPARAM)&local_1278);
    if (LVar11 == 1) {
      LVar11 = SendMessageW((HWND)this->LogHwnd,0x199,(longlong)local_1278.x,0);
      uVar5 = IntCastChecked<int,__int64>(LVar11 - this->LogIndexOffset);
      this->LogIndexOffset = this->LogIndexOffset + uVar5;
      TRingBuffer<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,TSizedDefaultAllocator<32>_>
      ::PopFront(&this->Log,uVar5);
      RefreshLogHwnd(this);
    }
    break;
  case 0x78:
    if ((this->SelectedWord).Data.ArrayNum == 0) {
      FWindowsPlatformApplicationMisc::ClipboardCopy(L"");
    }
    else {
      FWindowsPlatformApplicationMisc::ClipboardCopy
                ((wchar_t *)(this->SelectedWord).Data.AllocatorInstance.Data);
    }
    break;
  case 0x79:
    ::FString::operator=(&this->ConsoleIncludeFilterStr,L"");
    if ((this->ConsoleIncludeFilterStr).Data.ArrayNum == 0) {
      pwVar21 = L"";
    }
    else {
      pwVar21 = (wchar_t *)(this->ConsoleIncludeFilterStr).Data.AllocatorInstance.Data;
    }
    SetDlgItemTextW((HWND)this->MainHwnd,0x8802,pwVar21);
    ::FString::ParseIntoArray(&this->ConsoleIncludeFilterStr,&this->IncludeFilter,L" ",true);
    UpdateExcludeFilter(this,L"");
    (this->IncludeVerbosity).ArrayNum = 0;
    if ((this->IncludeVerbosity).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->IncludeVerbosity).AllocatorInstance,0,
                 &(this->IncludeVerbosity).ArrayMax);
    }
    (this->ExcludeVerbosity).ArrayNum = 0;
    if ((this->ExcludeVerbosity).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->ExcludeVerbosity).AllocatorInstance,0,
                 &(this->ExcludeVerbosity).ArrayMax);
      RefreshLogHwnd(this);
      break;
    }
    goto LAB_1423ec081;
  case 0x7a:
    pFVar14 = &this->ConsoleIncludeFilterStr;
    bVar27 = 1 < (this->ConsoleIncludeFilterStr).Data.ArrayNum;
    if (bVar27) {
      ::FString::FString(&local_1250," ");
      ::FString::ConcatFF((FString *)local_1288,pFVar14,&local_1250);
      ::FString::ConcatFF((FString *)&local_11d8,(FString *)local_1288,&this->SelectedWord);
      pFVar8 = (FString *)&local_11d8;
    }
    else {
      pFVar8 = ::FString::FString(&local_1268,&this->SelectedWord);
    }
    pwVar21 = L"";
    if (*(int *)((longlong)&pFVar8->Data + 8) == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    ::FString::operator=(pFVar14,pwVar16);
    if ((this->ConsoleIncludeFilterStr).Data.ArrayNum != 0) {
      pwVar21 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
    SetDlgItemTextW((HWND)this->MainHwnd,0x8802,pwVar21);
    ::FString::ParseIntoArray(pFVar14,&this->IncludeFilter,L" ",true);
    if ((bVar27) && ((FScriptContainerElement *)local_11d8._0_8_ != (FScriptContainerElement *)0x0))
    {
      FMemory::Free((void *)local_11d8._0_8_);
    }
    if ((bVar27) && (local_1288 != (undefined1  [8])0x0)) {
      FMemory::Free((void *)local_1288);
    }
    if ((bVar27) && (local_1250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_1250.Data.AllocatorInstance.Data);
    }
    goto LAB_1423ec070;
  case 0x7b:
    pFVar14 = &this->ConsoleExcludeFilterStr;
    if ((this->ConsoleExcludeFilterStr).Data.ArrayNum < 2) {
      pFVar8 = ::FString::FString(&local_1268,&this->SelectedWord);
      bVar19 = 0x10;
    }
    else {
      ::FString::FString(&local_1250," ");
      ::FString::ConcatFF((FString *)local_1288,pFVar14,&local_1250);
      ::FString::ConcatFF((FString *)&local_11d8,(FString *)local_1288,&this->SelectedWord);
      pFVar8 = (FString *)&local_11d8;
      bVar19 = 0xe0;
    }
    pwVar21 = L"";
    if (*(int *)((longlong)&pFVar8->Data + 8) == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    ::FString::operator=(pFVar14,pwVar16);
    if ((this->ConsoleExcludeFilterStr).Data.ArrayNum != 0) {
      pwVar21 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
    SetDlgItemTextW((HWND)this->MainHwnd,0x8803,pwVar21);
    ::FString::ParseIntoArray(pFVar14,&this->ExcludeFilter,L" ",true);
    if (((char)bVar19 < '\0') &&
       (bVar19 = bVar19 & 0x7f,
       (FScriptContainerElement *)local_11d8._0_8_ != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_11d8._0_8_);
    }
    if (((bVar19 & 0x40) != 0) && (bVar19 = bVar19 & 0xbf, local_1288 != (undefined1  [8])0x0)) {
      FMemory::Free((void *)local_1288);
    }
    if (((bVar19 & 0x20) != 0) &&
       (bVar19 = bVar19 & 0xdf,
       local_1250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_1250.Data.AllocatorInstance.Data);
    }
    bVar27 = (bVar19 & 0x10) == 0;
LAB_1423ec070:
    if ((!bVar27) && ((tagPOINT)local_1268.Data.AllocatorInstance.Data != (tagPOINT)0x0)) {
      FMemory::Free(local_1268.Data.AllocatorInstance.Data);
    }
LAB_1423ec081:
    RefreshLogHwnd(this);
    break;
  case 0x7c:
  case 0x7d:
    local_11b8.bIsDynamic = false;
    local_11b8.bIsExternal = false;
    local_11b8.Base = (wchar_t *)local_1198;
    local_11b8.End = (wchar_t *)&local_1098;
    if (uVar5 == 0x7c) {
      if ((this->ConsoleIncludeFilterStr).Data.ArrayNum == 0) {
LAB_1423ec0d8:
        pwVar21 = L"";
      }
      else {
        pwVar21 = (wchar_t *)(this->ConsoleIncludeFilterStr).Data.AllocatorInstance.Data;
      }
    }
    else {
      if ((this->ConsoleExcludeFilterStr).Data.ArrayNum == 0) goto LAB_1423ec0d8;
      pwVar21 = (wchar_t *)(this->ConsoleExcludeFilterStr).Data.AllocatorInstance.Data;
    }
    local_11b8.CurPos = (wchar_t *)local_1198;
    if ((FScriptContainerElement *)pwVar21 != (FScriptContainerElement *)0x0) {
      sVar13 = wcslen(pwVar21);
      iVar6 = (int)sVar13;
    }
    uVar18 = (ulong64)iVar6;
    pTVar15 = local_1198;
    if (&local_1098 < (TStringBuilderBase<wchar_t> *)((longlong)&local_1198[0].Base + uVar18 * 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_11b8,uVar18);
      pTVar15 = (TStringBuilderBase<wchar_t> *)local_11b8.CurPos;
    }
    if (iVar6 != 0) {
      pvVar9 = FGenericPlatformString::Memcpy(pTVar15,pwVar21,uVar18 * 2);
      pTVar15 = (TStringBuilderBase<wchar_t> *)(uVar18 * 2 + (longlong)pvVar9);
      local_11b8.CurPos = (wchar_t *)pTVar15;
    }
    if ((int)((longlong)pTVar15 - (longlong)local_11b8.Base >> 1) != 0) {
      if (local_11b8.End < (TStringBuilderBase<wchar_t> *)((longlong)&pTVar15->Base + 2)) {
        TStringBuilderBase<wchar_t>::Extend(&local_11b8,1);
        pTVar15 = (TStringBuilderBase<wchar_t> *)local_11b8.CurPos;
      }
      *(undefined2 *)&pTVar15->Base = 0x20;
      pTVar15 = (TStringBuilderBase<wchar_t> *)((longlong)(wchar_t **)local_11b8.CurPos + 2);
      local_11b8.CurPos = (wchar_t *)pTVar15;
    }
    if (local_11b8.End < (TStringBuilderBase<wchar_t> *)((longlong)&pTVar15->Base + 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_11b8,1);
      pTVar15 = (TStringBuilderBase<wchar_t> *)local_11b8.CurPos;
    }
    *(undefined2 *)&pTVar15->Base = 0x5b;
    iVar25 = (this->SelectedCategory).Data.ArrayNum;
    local_11b8.CurPos = (wchar_t *)((longlong)(wchar_t **)local_11b8.CurPos + 2);
    iVar6 = iVar25 + -1;
    if (iVar25 == 0) {
      iVar6 = 0;
    }
    pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                        (&local_11b8,(wchar_t *)(this->SelectedCategory).Data.AllocatorInstance.Data
                         ,iVar6);
    ::operator<<(pTVar15,']');
    if (uVar5 == 0x7c) {
      if (local_11b8.End < (TStringBuilderBase<wchar_t> *)(local_11b8.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_11b8,1);
      }
      *local_11b8.CurPos = L'\0';
      UpdateIncludeFilter(this,local_11b8.Base);
    }
    else {
      if (local_11b8.End < (TStringBuilderBase<wchar_t> *)(local_11b8.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_11b8,1);
      }
      *local_11b8.CurPos = L'\0';
      UpdateExcludeFilter(this,local_11b8.Base);
    }
    RefreshLogHwnd(this);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_11b8);
    break;
  case 0x7e:
  case 0x7f:
    lVar20 = 0x70;
    if (uVar5 != 0x7e) {
      lVar20 = 0x80;
    }
    TArray<enum_ELogVerbosity::Type,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<enum_ELogVerbosity::Type_const_&>
              ((void *)((longlong)(this->NewLogEntriesCs).CriticalSection.Opaque1 + lVar20 + -8),
               &this->SelectedVerbosity);
    RefreshLogHwnd(this);
    break;
  case 0x83:
    this->ConsoleShowDateTime = 1;
    RefreshLogHwnd(this);
    break;
  case 0x84:
    this->ConsoleShowDateTime = 2;
    RefreshLogHwnd(this);
    break;
  case 0x85:
    this->ConsoleShowDateTime = 0;
    RefreshLogHwnd(this);
    break;
  case 0x86:
    this->bConsoleShowVerbosity = false;
    RefreshLogHwnd(this);
    break;
  case 0x87:
    this->bConsoleShowVerbosity = true;
    RefreshLogHwnd(this);
  }
switchD_1423ebcb0_caseD_69:
  lVar10 = (*this->LogHwndWndProcPtr)(param_1,local_1240,local_1238,param_4);
  return lVar10;
}

// MainWinProc @ 1423ed050

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall
FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc
          (FConsoleWindow *this,HWND__ *param_1,uint param_2,ulong64 param_3,long64 param_4)

{
  RECT *lprect;
  int *piVar1;
  int iVar2;
  HDC__ *hdc;
  FWindowsConsoleOutputDevice2 *this_00;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  ushort uVar7;
  short sVar8;
  DWORD DVar9;
  BOOL BVar10;
  UINT cchText;
  uint uVar11;
  int iVar12;
  int iVar13;
  HHOOK hhk;
  HWND hWnd;
  HBRUSH pHVar14;
  LogEntry *pLVar15;
  void *pvVar16;
  long64 lVar17;
  LRESULT LVar18;
  FString *pFVar19;
  FName *pFVar20;
  undefined1 *puVar21;
  LRESULT LVar22;
  HGDIOBJ pvVar23;
  size_t sVar24;
  ulong64 uVar25;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar26;
  FScriptContainerElement *pFVar27;
  ForAnyElementType FVar28;
  wchar_t *pwVar29;
  short sVar30;
  ulonglong uVar31;
  short sVar32;
  uint uVar33;
  EConsoleColor EVar34;
  ulonglong uVar35;
  HBRUSH__ *pHVar36;
  longlong lVar37;
  FScriptContainerElement *pFVar38;
  ulong color;
  EConsoleColor EVar39;
  double dVar40;
  undefined1 auStackY_2748 [32];
  char local_2700;
  undefined1 local_26ff [7];
  TArray<FString,TSizedDefaultAllocator<32>_> local_26f8;
  FName local_26e8;
  LONG LStack_26e0;
  int iStack_26dc;
  TArray<FString,TSizedDefaultAllocator<32>_> local_26d8;
  uint local_26c8;
  HDC local_26c0;
  TArray<int,TSizedDefaultAllocator<32>_> local_26b8;
  tagPOINT local_26a8;
  tagPOINT local_26a0;
  <lambda_3> local_2698;
  FScriptContainerElement *local_2688;
  LPARAM local_2680;
  ulong64 local_2678;
  FString local_2670;
  TStringView<wchar_t> local_2660;
  <lambda_1> local_2650;
  tagTRACKMOUSEEVENT local_2640;
  undefined1 local_2628 [16];
  FString local_2618;
  TUniqueFunction<void___cdecl(void)> local_2608;
  tagRECT local_25d8;
  tagRECT local_25c8;
  tagRECT local_25b8;
  tagRECT local_25a8;
  tagRECT local_2598;
  tagRECT local_2588;
  tagRECT local_2578;
  tagRECT local_2568;
  FName local_2558;
  LONG LStack_2550;
  LONG LStack_254c;
  FName local_2548;
  undefined8 uStack_2540;
  FName local_2538;
  LONG LStack_2530;
  LONG LStack_252c;
  tagRECT local_2528;
  RECT local_2518;
  tagRECT local_2508;
  tagRECT local_24f8;
  tagRECT local_24e8;
  tagRECT local_24d8;
  TStringBuilderBase<wchar_t> local_24c8;
  wchar_t local_24a8 [64];
  WINDOWPLACEMENT local_2428;
  tagPAINTSTRUCT local_23f8;
  TStringBuilderBase<wchar_t> local_23a8;
  wchar_t local_2388 [512];
  TStringBuilderWithBuffer<wchar_t,256> local_1f88;
  TStringBuilderBase<wchar_t> local_1d68;
  WCHAR local_1d48 [1024];
  wchar_t local_1548 [8];
  wchar_t local_1538 [64];
  WCHAR local_14b8 [32];
  WCHAR local_1478 [1024];
  WCHAR local_c78 [512];
  WCHAR local_878 [1024];
  ulonglong local_78;
  undefined8 uStack_48;
  
  uStack_48 = 0x1423ed06f;
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_2748;
  local_2680 = param_4;
  local_26c8 = param_2;
  local_2678 = param_3;
  if (0x111 < param_2) {
    if (param_2 < 0x203) {
      if (param_2 == 0x202) {
        if (this->NcButtonDown != -1) {
          ReleaseCapture();
          iVar12 = this->NcButtonDown;
          this->NcButtonDown = -1;
          GetCursorPos(&local_26a8);
          iVar13 = HitTestNCB(this,local_26a8.x,local_26a8.y);
          RedrawWindow((HWND)this->MainHwnd,(RECT *)0x0,(HRGN)0x0,0x401);
          if (iVar13 != iVar12) goto switchD_1423ed0e0_caseD_4;
          if (iVar13 == 1000) {
            this->bConsoleExpanded = this->bConsoleExpanded == false;
            RedrawWindow((HWND)this->MainHwnd,(RECT *)0x0,(HRGN)0x0,0x401);
            GetClientRect((HWND)this->MainHwnd,&local_2578);
            dVar40 = __real_3ff0000000000000 / this->DpiScale;
            UpdateSize(this,(int)((double)local_2578.right * dVar40),
                       (int)((double)local_2578.bottom * dVar40),true);
            RedrawWindow((HWND)this->MainHwnd,(RECT *)0x0,(HRGN)0x0,1);
            if (this->bConsoleExpanded == false) goto switchD_1423ed0e0_caseD_4;
            SetFocus((HWND)this->CommandHwnd);
          }
          else if (iVar13 == 8) {
            ShowWindow((HWND)param_1,6);
          }
          else {
            if (iVar13 != 9) {
              if (iVar13 == 0x14) goto switchD_1423ed0e0_caseD_10;
              goto switchD_1423ed0e0_caseD_4;
            }
            local_2428.length = 0x2c;
            GetWindowPlacement((HWND)param_1,&local_2428);
            iVar12 = 3;
            if (local_2428.showCmd == 3) {
              iVar12 = 1;
            }
            ShowWindow((HWND)param_1,iVar12);
          }
        }
      }
      else {
        if (param_2 == 0x133) {
          SetBkColor((HDC)param_3,this->EditBackgroundColor);
          GetClientRect((HWND)param_4,&local_2508);
          local_24f8.left = local_2508.left;
          local_24f8.top = local_2508.top;
          local_24f8.right = local_2508.right;
          local_24f8.bottom = local_2508.bottom;
          ::FillRect((HDC)param_3,&local_24f8,(HBRUSH)this->EditBackgroundBrush);
          SetTextColor((HDC)param_3,this->TextColor);
          iVar12 = GetWindowTextLengthW((HWND)param_4);
          if (iVar12 == 0) {
            if ((HWND__ *)param_4 == this->CommandHwnd) {
              pwVar29 = L"Type command here";
            }
            else {
              pwVar29 = L"Add exclude filter here";
              if ((HWND__ *)param_4 == this->IncludeFilterHwnd) {
                pwVar29 = L"Add include filter here";
              }
            }
            sVar24 = wcslen(pwVar29);
            TextOutW((HDC)param_3,0,0,pwVar29,(int)sVar24);
          }
          pvVar23 = GetStockObject(5);
          return (long64)pvVar23;
        }
        if (param_2 == 0x134) {
          if ((HWND)param_4 == (HWND)this->LogHwnd) {
            LVar18 = SendMessageW((HWND)this->LogHwnd,0x18b,0,0);
            GetClientRect((HWND)this->LogHwnd,&local_25a8);
            iVar12 = this->LogFontHeight;
            LVar22 = SendMessageW((HWND)this->LogHwnd,0x18e,0,0);
            iVar13 = IntCastChecked<int,__int64>(LVar22);
            iVar13 = (int)LVar18 - iVar13;
            if (iVar13 < -((int)ROUND(__real_bf000000 -
                                      ((float)local_25a8.bottom + (float)local_25a8.bottom) /
                                      (float)iVar12) >> 1)) {
              local_25a8.top = iVar13 * this->LogFontHeight;
              local_2518.top = local_25a8.top;
              local_2518.left = local_25a8.left;
              ::FillRect((HDC)param_3,&local_2518,(HBRUSH)this->LogBackgroundBrush);
            }
            pvVar23 = GetStockObject(5);
            return (long64)pvVar23;
          }
        }
        else {
          if (param_2 == 0x138) {
            SetTextColor((HDC)param_3,this->TextColor);
            SetBkColor((HDC)param_3,this->BackgroundColor);
            return (long64)this->BackgroundBrush;
          }
          if (param_2 == 0x200) goto LAB_1423ee83f;
        }
      }
    }
    else {
      if (param_2 == 0x20a) {
        iVar12 = HandleMouseWheel(this,param_3);
        goto LAB_1423ee8c5;
      }
      if (param_2 == 0x2a2) {
LAB_1423ee83f:
        if ((this->NcButtonHot != -1) || (this->NcButtonDown != -1)) {
          GetCursorPos(&local_26a0);
          iVar12 = HitTestNCB(this,local_26a0.x,local_26a0.y);
          if ((1 < iVar12 - 8U) && ((iVar12 != 0x14 && (iVar12 != 1000)))) {
            iVar12 = -1;
          }
          if (iVar12 == this->NcButtonHot) goto switchD_1423ed0e0_caseD_4;
          this->NcButtonHot = iVar12;
          RedrawWindow((HWND)this->MainHwnd,(RECT *)0x0,(HRGN)0x0,0x401);
        }
      }
      else if (param_2 == 0x400) {
        return 0x534b8805;
      }
    }
    goto switchD_1423ed0e0_default;
  }
  sVar32 = (short)param_3;
  if (param_2 == 0x111) {
    sVar8 = (short)(param_3 >> 0x10);
    if (sVar32 == -0x77ff) {
      if (sVar8 == 1) {
        LVar18 = SendMessageW((HWND)this->LogHwnd,400,0,0);
        if (LVar18 != 0) {
          this->bAutoScrollLog = false;
        }
        RedrawWindow((HWND)this->LogScrollHwnd,(RECT *)0x0,(HRGN)0x0,1);
      }
      else {
LAB_1423ee1d9:
        if (sVar32 == -0x77f9) {
          local_24c8.Base = local_24a8;
          local_24c8.CurPos = local_24a8;
          local_24c8.bIsDynamic = false;
          local_24c8.bIsExternal = false;
          local_24c8.End = (wchar_t *)&local_2428;
          TStringBuilderBase<wchar_t>::AppendfImpl(&local_24c8,L"LOGCHECKPOINT%i");
          pFVar20 = ::FName::FName(&local_26e8,L"LogCheckpoint");
          local_2660.DataPtr = local_24c8.Base;
          local_2660.Size = (int)((longlong)local_24c8.CurPos - (longlong)local_24c8.Base >> 1);
          AddLogEntry(this,&local_2660,Display,pFVar20,0.0,7);
          this->CheckpointIndex = this->CheckpointIndex + 1;
          local_1538[0x39] = L'\0';
          local_1538[0x3a] = L'\0';
          local_1538[0x3b] = L'\0';
          local_1538[0x3c] = L'\0';
          local_1538[1] = L'\0';
          local_1538[2] = L'\0';
          local_1538[3] = L'\0';
          local_1538[4] = L'\0';
          local_1538[5] = L'\0';
          local_1538[6] = L'\0';
          local_1538[7] = L'\0';
          local_1538[8] = L'\0';
          local_1538[0x3d] = L'\0';
          local_1538[0x3e] = L'\0';
          local_1538[9] = L'\0';
          local_1538[10] = L'\0';
          local_1538[0xb] = L'\0';
          local_1538[0xc] = L'\0';
          local_1538[0xd] = L'\0';
          local_1538[0xe] = L'\0';
          local_1538[0xf] = L'\0';
          local_1538[0x10] = L'\0';
          local_1538[0x3f] = 0;
          local_1538[0x11] = L'\0';
          local_1538[0x12] = L'\0';
          local_1538[0x13] = L'\0';
          local_1538[0x14] = L'\0';
          local_1538[0x15] = L'\0';
          local_1538[0x16] = L'\0';
          local_1538[0x17] = L'\0';
          local_1538[0x18] = L'\0';
          local_1538[0] = L'\0';
          local_1538[0x19] = L'\0';
          local_1538[0x1a] = L'\0';
          local_1538[0x1b] = L'\0';
          local_1538[0x1c] = L'\0';
          local_1538[0x1d] = L'\0';
          local_1538[0x1e] = L'\0';
          local_1538[0x1f] = L'\0';
          local_1538[0x20] = L'\0';
          local_1538[0x21] = L'\0';
          local_1538[0x22] = L'\0';
          local_1538[0x23] = L'\0';
          local_1538[0x24] = L'\0';
          local_1538[0x25] = L'\0';
          local_1538[0x26] = L'\0';
          local_1538[0x27] = L'\0';
          local_1538[0x28] = L'\0';
          local_1538[0x29] = L'\0';
          local_1538[0x2a] = L'\0';
          local_1538[0x2b] = L'\0';
          local_1538[0x2c] = L'\0';
          local_1538[0x2d] = L'\0';
          local_1538[0x2e] = L'\0';
          local_1538[0x2f] = L'\0';
          local_1538[0x30] = L'\0';
          local_1538[0x31] = L'\0';
          local_1538[0x32] = L'\0';
          local_1538[0x33] = L'\0';
          local_1538[0x34] = L'\0';
          local_1538[0x35] = L'\0';
          local_1538[0x36] = L'\0';
          local_1538[0x37] = L'\0';
          local_1538[0x38] = L'\0';
          TCString<wchar_t>::SprintfImpl(local_1538,L"Log CHECKPOINT%i");
          SetDlgItemTextW((HWND)this->MainHwnd,0x8807,local_1538);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_24c8);
        }
        else {
          if (sVar32 != -0x77f8) goto switchD_1423ed0e0_caseD_4;
          pFVar27 = (this->Activities).AllocatorInstance.Data;
          local_1f88._padding_ = (longlong)local_1f88.StringBuffer;
          local_1f88._padding_ = (longlong)local_1f88.StringBuffer;
          local_26d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_26d8.ArrayNum = 0;
          local_26d8.ArrayMax = 0;
          iVar12 = (this->Activities).ArrayNum;
          local_1f88._padding_ = (longlong)&local_1d68;
          pFVar38 = pFVar27 + (longlong)iVar12 * 0x40;
          local_1f88._padding_._0_2_ = 0;
          while( true ) {
            if ((this->Activities).ArrayNum != iVar12) {
              `TCheckedPointerIterator<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(&local_2700);
            }
            if (pFVar27 == pFVar38) break;
            if (*(longlong *)(pFVar27 + 8) == param_4) {
              ExtractHyperLinks(this,&local_1f88,&local_26d8,(FString *)(pFVar27 + 0x20));
            }
            pFVar27 = pFVar27 + 0x40;
          }
          iVar12 = local_26d8.ArrayNum;
          pFVar27 = local_26d8.AllocatorInstance.Data + (longlong)local_26d8.ArrayNum * 0x10;
          FVar28.Data = local_26d8.AllocatorInstance.Data;
          while( true ) {
            if (local_26d8.ArrayNum != iVar12) {
              `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_26ff);
            }
            if (FVar28.Data == pFVar27) break;
            if (*(int *)(FVar28.Data + 8) == 0) {
              FWindowsPlatformProcess::LaunchURL(L"",(wchar_t *)0x0,(FString *)0x0);
              FVar28.Data = FVar28.Data + 0x10;
            }
            else {
              FWindowsPlatformProcess::LaunchURL
                        (*(wchar_t **)FVar28.Data,(wchar_t *)0x0,(FString *)0x0);
              FVar28.Data = FVar28.Data + 0x10;
            }
          }
          DestructItems<FString,int>
                    ((FString *)local_26d8.AllocatorInstance.Data,local_26d8.ArrayNum);
          if (local_26d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_26d8.AllocatorInstance.Data);
          }
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
                    ((TStringBuilderBase<wchar_t> *)&local_1f88);
        }
      }
    }
    else if (((ushort)(sVar32 + 0x77feU) < 2) && (sVar8 == 0x300)) {
      GetDlgItemTextW((HWND)this->MainHwnd,(uint)param_3 & 0xffff,local_878,0x400);
      if (sVar32 == -0x77fe) {
        pTVar26 = &this->IncludeFilter;
        pFVar19 = &this->ConsoleIncludeFilterStr;
      }
      else {
        pTVar26 = &this->ExcludeFilter;
        pFVar19 = &this->ConsoleExcludeFilterStr;
      }
      ::FString::operator=(pFVar19,local_878);
      local_26f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_26f8.ArrayNum = 0;
      local_26f8.ArrayMax = 0;
      ::FString::ParseIntoArray(pFVar19,&local_26f8,L" ",true);
      if ((pTVar26->ArrayNum != local_26f8.ArrayNum) ||
         (bVar6 = CompareItems<FString,int>
                            ((FString *)(pTVar26->AllocatorInstance).Data,
                             (FString *)local_26f8.AllocatorInstance.Data,pTVar26->ArrayNum), !bVar6
         )) {
        if (pTVar26 != &local_26f8) {
          DestructItems<FString,int>((FString *)(pTVar26->AllocatorInstance).Data,pTVar26->ArrayNum)
          ;
          FVar28.Data = local_26f8.AllocatorInstance.Data;
          iVar12 = local_26f8.ArrayNum;
          piVar1 = &pTVar26->ArrayMax;
          pTVar26->ArrayNum = local_26f8.ArrayNum;
          if ((local_26f8.ArrayNum == 0) && (*piVar1 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,local_26f8.ArrayNum,*piVar1,&pTVar26->AllocatorInstance,
                       local_26f8.ArrayNum,piVar1);
            ConstructItems<FString,FString,int>
                      ((pTVar26->AllocatorInstance).Data,(FString *)FVar28.Data,iVar12);
          }
        }
        RefreshLogHwnd(this);
      }
      DestructItems<FString,int>((FString *)local_26f8.AllocatorInstance.Data,local_26f8.ArrayNum);
      local_2618.Data.AllocatorInstance.Data = local_26f8.AllocatorInstance.Data;
LAB_1423edeb7:
      if (local_2618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2618.Data.AllocatorInstance.Data);
      }
    }
    else if (sVar32 == -0x77fb) {
      iVar12 = GetWindowTextW((HWND)this->CommandHwnd,local_1478,0x400);
      if (iVar12 == 0) goto switchD_1423ed0e0_caseD_4;
      SetWindowTextW((HWND)this->CommandHwnd,L"");
      local_2700 = this->bConsoleShowVerbosity;
      iVar12 = this->ConsoleShowDateTime;
      EVar34 = ~DarkGray;
      iVar13 = FGenericPlatformStricmp::Stricmp(local_1478,L"red");
      if (iVar13 == 0) {
        EVar39 = Red;
      }
      else {
        iVar13 = FGenericPlatformStricmp::Stricmp(local_1478,L"darkgray");
        EVar39 = DarkGray;
        if (iVar13 != 0) {
          iVar13 = FGenericPlatformStricmp::Stricmp(local_1478,L"gray");
          if (iVar13 == 0) {
            EVar39 = Gray;
          }
          else {
            iVar13 = FGenericPlatformStricmp::Stricmp(local_1478,L"lightblue");
            if (iVar13 == 0) {
              EVar39 = LightBlue;
            }
            else {
              iVar13 = FGenericPlatformStricmp::Stricmp(local_1478,L"darkblue");
              if (iVar13 == 0) {
                EVar39 = DarkBlue;
              }
              else {
                iVar13 = FGenericPlatformStricmp::Stricmp(local_1478,L"load");
                if (iVar13 == 0) {
                  EVar39 = Load;
                }
                else {
                  iVar13 = FGenericPlatformStricmp::Stricmp(local_1478,L"showtime");
                  EVar39 = EVar34;
                  if (iVar13 == 0) {
                    this->ConsoleShowDateTime = 1;
                  }
                  else {
                    iVar13 = FGenericPlatformStricmp::Stricmp(local_1478,L"showdatetime");
                    if (iVar13 == 0) {
                      this->ConsoleShowDateTime = 2;
                    }
                    else {
                      iVar13 = FGenericPlatformStricmp::Stricmp(local_1478,L"hidedatetime");
                      if (iVar13 == 0) {
                        this->ConsoleShowDateTime = 0;
                      }
                      else {
                        iVar13 = FGenericPlatformStricmp::Stricmp(local_1478,L"showverbosity");
                        if (iVar13 == 0) {
                          this->bConsoleShowVerbosity = true;
                        }
                        else {
                          iVar13 = FGenericPlatformStricmp::Stricmp(local_1478,L"hideverbosity");
                          if (iVar13 == 0) {
                            this->bConsoleShowVerbosity = false;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ((this->ConsoleShowDateTime != iVar12) || (this->bConsoleShowVerbosity != (bool)local_2700)
         ) {
        RefreshLogHwnd(this);
      }
      if (EVar39 == ~DarkGray) {
        this_00 = this->Owner;
        ::FString::FString(&local_2670,local_1478);
        AddCommand(this_00,&local_2670);
        if (local_2670.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2670.Data.AllocatorInstance.Data);
        }
        local_2608._0_8_ = 0;
        local_2608._40_8_ = 0;
        pFVar19 = ::FString::FString(&local_2618,local_1478);
        local_2698.Cmd.Data.AllocatorInstance.Data = (pFVar19->Data).AllocatorInstance.Data;
        (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2698.Cmd.Data.ArrayNum = (pFVar19->Data).ArrayNum;
        local_2698.Cmd.Data.ArrayMax = (pFVar19->Data).ArrayMax;
        (pFVar19->Data).ArrayNum = 0;
        (pFVar19->Data).ArrayMax = 0;
        Async<_FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc_::__l104::<lambda_3>_>
                  ((TFuture<void> *)local_2628,TaskGraphMainThread,&local_2698,&local_2608);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_2628._8_8_);
        if (local_2698.Cmd.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2698.Cmd.Data.AllocatorInstance.Data);
        }
        goto LAB_1423edeb7;
      }
      this->ConsoleColor = EVar39;
      DestroyColors(this);
      CreateColors(this);
      InvalidateRect((HWND)this->MainHwnd,(RECT *)0x0,1);
      EnumChildWindows((HWND)this->MainHwnd,
                       `FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc'[::P]::<lambda_2>
                       ::<lambda_invoker_cdecl>,0);
      RedrawWindow((HWND)this->MainHwnd,(RECT *)0x0,(HRGN)0x0,0x401);
    }
    else {
      if (sVar32 != -0x77fa) goto LAB_1423ee1d9;
      ClearLog(this);
      this->bAutoScrollLog = true;
    }
    goto switchD_1423ed0e0_default;
  }
  sVar30 = (short)param_4;
  sVar8 = (short)((ulonglong)param_4 >> 0x10);
  switch(param_2) {
  case 3:
    GetWindowRect((HWND)this->MainHwnd,&local_2598);
    this->ConsolePosX = local_2598.left;
    this->ConsolePosY = local_2598.top;
    goto switchD_1423ed0e0_default;
  case 4:
  case 6:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2d:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x95:
  case 0x96:
  case 0x97:
  case 0x98:
  case 0x99:
  case 0x9a:
  case 0x9b:
  case 0x9c:
  case 0x9d:
  case 0x9e:
  case 0x9f:
    goto switchD_1423ed0e0_caseD_4;
  case 5:
    if ((param_3 & 0xfffffffffffffffd) == 0) {
      dVar40 = __real_3ff0000000000000 / this->DpiScale;
      UpdateSize(this,(int)((double)((uint)param_4 & 0xffff) * dVar40) & 0xffff,
                 (int)((double)((uint)((ulonglong)param_4 >> 0x10) & 0xffff) * dVar40) & 0xffff,true
                );
      GetWindowRect((HWND)this->MainHwnd,&local_25b8);
      this->ConsoleWidth = local_25b8.right - local_25b8.left;
      this->ConsoleHeight = local_25b8.bottom - local_25b8.top;
    }
    puVar21 = (undefined1 *)0x0;
    break;
  case 7:
    SetFocus((HWND)this->CommandHwnd);
    SendMessageW((HWND)this->CommandHwnd,0xb1,0,-1);
    goto switchD_1423ed0e0_default;
  case 0xf:
    local_26c0 = BeginPaint((HWND)param_1,&local_23f8);
    GetClientRect((HWND)param_1,&local_2588);
    local_2650.Hdc = (HDC__ **)&local_26c0;
    dVar40 = __real_3ff0000000000000 / this->DpiScale;
    local_2650.__this = this;
    TraverseActivityPositions<_FWindowsConsoleOutputDevice2::FConsoleWindow::MainWinProc_::__l74::<lambda_1>_>
              (this,(int)((double)local_2588.right * dVar40),
               (int)((double)local_2588.bottom * dVar40),&local_2650);
    EndPaint((HWND)param_1,&local_23f8);
    puVar21 = (undefined1 *)0x0;
    break;
  case 0x10:
switchD_1423ed0e0_caseD_10:
    PostQuitMessage(0);
    goto switchD_1423ed0e0_default;
  case 0x14:
    GetClientRect((HWND)param_1,&local_2528);
    local_24e8.left = local_2528.left;
    local_24e8.top = local_2528.top;
    local_24e8.right = local_2528.right;
    local_24e8.bottom = local_2528.bottom;
    ::FillRect((HDC)param_3,&local_24e8,(HBRUSH)this->BackgroundBrush);
    SelectObject((HDC)param_3,this->BorderPen);
    pvVar23 = GetStockObject(5);
    SelectObject((HDC)param_3,pvVar23);
    local_1548[2] = L'蠃';
    local_1548[3] = L'\0';
    local_1548[0] = L'蠂';
    local_1548[1] = L'\0';
    pwVar29 = local_1548;
    local_1548[4] = L'蠄';
    local_1548[5] = L'\0';
    do {
      hWnd = GetDlgItem((HWND)param_1,*(int *)pwVar29);
      BVar10 = IsWindowVisible(hWnd);
      if (BVar10 != 0) {
        GetClientRect(hWnd,&local_25d8);
        MapWindowPoints(hWnd,(HWND)param_1,(LPPOINT)&local_25d8,2);
        Rectangle((HDC)param_3,local_25d8.left + -1,local_25d8.top + -1,local_25d8.right + 1,
                  local_25d8.bottom + 1);
      }
      pwVar29 = pwVar29 + 2;
    } while (pwVar29 != local_1548 + 6);
    puVar21 = &DAT_00000001;
    break;
  case 0x2b:
    hdc = *(HDC__ **)(param_4 + 0x20);
    if (*(int *)param_4 != 5) {
      if ((*(int *)(param_4 + 4) == 0x8801) && (*(int *)(param_4 + 8) != -1)) {
        iVar12 = *(int *)(param_4 + 0xc);
        if ((iVar12 == 1) || (iVar12 == 2)) {
          uVar11 = IntCastChecked<unsigned_int,unsigned___int64>(*(ulong64 *)(param_4 + 0x38));
          pLVar15 = TRingBuffer<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,TSizedDefaultAllocator<32>_>
                    ::operator[](&this->Log,uVar11 - this->LogIndexOffset);
          iVar12 = this->LogFontHeight;
          iVar13 = *(int *)(param_4 + 0x2c);
          iVar2 = *(int *)(param_4 + 0x34);
          uVar7 = pLVar15->LineCount;
          if ((*(byte *)(param_4 + 0x10) & 1) == 0) {
            FillRect(this,hdc,(tagRECT *)(param_4 + 0x28),this->LogBackgroundBrush);
            if (pLVar15->TextAttribute == 0xc) {
              DVar9 = 0xdc;
            }
            else {
              DVar9 = 0xdcdc;
              if (pLVar15->TextAttribute != 0xe) {
                DVar9 = 0xcccccc;
              }
            }
          }
          else {
            pHVar14 = GetSysColorBrush(0xd);
            FillRect(this,hdc,(tagRECT *)(param_4 + 0x28),(HBRUSH__ *)pHVar14);
            DVar9 = GetSysColor(0xe);
          }
          SetTextColor((HDC)hdc,DVar9);
          local_1d68.Base = local_1d48;
          local_1d68.bIsDynamic = false;
          local_1d68.bIsExternal = false;
          local_1d68.CurPos = local_1d48;
          local_1d68.End = local_1548;
          CreateLogEntryText(this,&local_1d68,pLVar15,false);
          lVar37 = (longlong)local_1d68.CurPos - (longlong)local_1d68.Base;
          if (local_1d68.End < local_1d68.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_1d68,1);
          }
          *local_1d68.CurPos = L'\0';
          TextOutW((HDC)hdc,0,((iVar13 + iVar2) / 2 - (int)((uVar7 - 1) * iVar12) / 2) - iVar12 / 2,
                   local_1d68.Base,(int)(lVar37 >> 1));
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1d68);
          return (long64)&DAT_00000001;
        }
        if (iVar12 == 4) {
          return (long64)&DAT_00000001;
        }
      }
      goto switchD_1423ed0e0_caseD_4;
    }
    iVar12 = GetWindowTextW(*(HWND *)(param_4 + 0x18),local_c78,0x200);
    if (*(HWND *)(param_4 + 0x18) == (HWND)this->TipHwnd) {
      if (*(int *)(param_4 + 0x34) == 1) goto switchD_1423ed0e0_caseD_4;
      FillRect(this,hdc,(tagRECT *)(param_4 + 0x28),this->BackgroundBrush);
      DVar9 = GetSysColor(0xe);
      SetTextColor((HDC)hdc,DVar9);
      SelectObject((HDC)hdc,this->LogFont);
      local_2568._0_8_ = *(undefined8 *)(param_4 + 0x28);
      local_2568._8_8_ = *(undefined8 *)(param_4 + 0x30);
      DrawTextW((HDC)hdc,local_c78,iVar12,&local_2568,0x24);
    }
    else {
      pHVar36 = this->BackgroundBrush;
      uVar11 = GetWindowLongW(*(HWND *)(param_4 + 0x18),-0x15);
      if (uVar11 != 0xffffffff) {
        pHVar36 = this->StatusBackgroundBrush[uVar11 & 1];
        SetBkColor((HDC)hdc,this->StatusBackgroundColor[uVar11 & 1]);
      }
      SelectObject((HDC)hdc,pHVar36);
      local_25c8._0_8_ = *(undefined8 *)(param_4 + 0x28);
      local_25c8._8_8_ = *(undefined8 *)(param_4 + 0x30);
      lprect = (RECT *)(param_4 + 0x28);
      DrawTextW((HDC)hdc,local_c78,iVar12,&local_25c8,0x18420);
      local_26e8.ComparisonIndex.Value = lprect->left;
      local_26e8.Number = lprect->top;
      iStack_26dc = *(int *)(param_4 + 0x2c) + 1;
      LStack_26e0 = local_25c8.right;
      LStack_2550 = local_25c8.right;
      LStack_254c = iStack_26dc;
      local_2558 = local_26e8;
      ::FillRect((HDC)hdc,(RECT *)&local_2558,(HBRUSH)pHVar36);
      uVar4 = lprect->top;
      _LStack_26e0 = *(undefined8 *)(param_4 + 0x30);
      local_26e8.Number = uVar4;
      local_26e8.ComparisonIndex.Value = local_25c8.right;
      local_2548 = local_26e8;
      uStack_2540 = _LStack_26e0;
      ::FillRect((HDC)hdc,(RECT *)&local_2548,(HBRUSH)pHVar36);
      if (local_25c8.bottom < *(int *)(param_4 + 0x34)) {
        uVar5 = lprect->left;
        local_26e8.Number = local_25c8.bottom;
        local_26e8.ComparisonIndex.Value = uVar5;
        iStack_26dc = (int)((ulonglong)*(undefined8 *)(param_4 + 0x30) >> 0x20);
        LStack_26e0 = local_25c8.right;
        local_2538 = local_26e8;
        LStack_2530 = local_25c8.right;
        LStack_252c = iStack_26dc;
        ::FillRect((HDC)hdc,(RECT *)&local_2538,(HBRUSH)pHVar36);
      }
      sVar24 = wcslen(local_c78);
      ExtTextOutW((HDC)hdc,lprect->left,*(int *)(param_4 + 0x2c) + 1,0,lprect,local_c78,(UINT)sVar24
                  ,(INT *)0x0);
    }
    goto switchD_1423ed0e0_default;
  case 0x2c:
    *(int *)(param_4 + 0x10) = this->LogFontHeight;
    puVar21 = &DAT_00000001;
    break;
  case 0x2e:
    if ((HWND__ *)param_4 == this->LogHwnd) {
      if (((sVar32 == 0x43) || (sVar32 == 0x2d)) &&
         (uVar7 = GetKeyState(0x11), (uVar7 & 0x8000) != 0)) {
        uVar31 = 0;
        local_26b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_26b8.ArrayNum = 0;
        local_26b8.ArrayMax = 0;
        iVar12 = GetSelectedItems(this,&local_26b8);
        local_2618.Data.AllocatorInstance.Data = local_26b8.AllocatorInstance.Data;
        if (iVar12 != 0) {
          local_23a8.Base = local_2388;
          local_23a8.bIsDynamic = false;
          local_23a8.bIsExternal = false;
          local_23a8.CurPos = local_2388;
          local_23a8.End = (wchar_t *)&local_1f88;
          uVar35 = uVar31;
          do {
            uVar33 = (uint)uVar35;
            uVar11 = 0;
            if ((int)uVar33 < local_26b8.ArrayNum) {
              uVar11 = ~uVar33 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              lVar17 = (*pcVar3)();
              return lVar17;
            }
            iVar13 = this->LogIndexOffset;
            LVar18 = SendMessageW((HWND)this->LogHwnd,0x199,
                                  (longlong)*(int *)(local_26b8.AllocatorInstance.Data + uVar31 * 4)
                                  ,0);
            lVar37 = LVar18 - iVar13;
            iVar13 = (int)lVar37;
            if ((lVar37 != iVar13) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IntFitsIn<OutType>(In)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                   ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              lVar17 = (*pcVar3)();
              return lVar17;
            }
            pLVar15 = TRingBuffer<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,TSizedDefaultAllocator<32>_>
                      ::operator[](&this->Log,iVar13);
            iVar13 = (pLVar15->String).Data.ArrayNum;
            local_2688 = (pLVar15->String).Data.AllocatorInstance.Data;
            uVar11 = iVar13 - 1;
            if (iVar13 == 0) {
              uVar11 = 0;
            }
            uVar25 = (ulong64)(int)uVar11;
            if (local_23a8.End <
                (TStringBuilderWithBuffer<wchar_t,256> *)(local_23a8.CurPos + uVar25)) {
              TStringBuilderBase<wchar_t>::Extend(&local_23a8,uVar25);
            }
            if (uVar11 != 0) {
              pvVar16 = FGenericPlatformString::Memcpy(local_23a8.CurPos,local_2688,uVar25 * 2);
              local_23a8.CurPos = (wchar_t *)(uVar25 * 2 + (longlong)pvVar16);
            }
            if (local_23a8.End < (TStringBuilderWithBuffer<wchar_t,256> *)(local_23a8.CurPos + 2)) {
              TStringBuilderBase<wchar_t>::Extend(&local_23a8,2);
            }
            pvVar16 = FGenericPlatformString::Memcpy(local_23a8.CurPos,L"\r\n",4);
            param_3 = local_2678;
            param_4 = local_2680;
            local_23a8.CurPos = (wchar_t *)((longlong)pvVar16 + 4);
            uVar35 = (ulonglong)(uVar33 + 1);
            uVar31 = uVar31 + 1;
          } while (uVar31 != (longlong)iVar12);
          if (local_23a8.End < (TStringBuilderWithBuffer<wchar_t,256> *)((longlong)pvVar16 + 6)) {
            TStringBuilderBase<wchar_t>::Extend(&local_23a8,1);
          }
          *local_23a8.CurPos = L'\0';
          FWindowsPlatformApplicationMisc::ClipboardCopy(local_23a8.Base);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_23a8);
          local_2618.Data.AllocatorInstance.Data = local_26b8.AllocatorInstance.Data;
        }
        goto LAB_1423edeb7;
      }
      if ((sVar32 == 0x23) && (uVar7 = GetKeyState(0x10), (uVar7 & 0x8000) == 0)) {
        EnableAutoScroll(this);
        return -2;
      }
    }
    goto switchD_1423ed0e0_caseD_4;
  case 0x4e:
    if ((*(int *)(param_4 + 0x10) == -0xc) &&
       (((uVar31 = *(ulonglong *)(param_4 + 8), uVar31 == 0x8805 || (uVar31 == 0x8806)) ||
        (uVar31 == 0x8807)))) {
      if ((uVar31 != (uVar31 & 0xffffffff)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar6
         )) {
        pcVar3 = (code *)swi(3);
        lVar17 = (*pcVar3)();
        return lVar17;
      }
      uVar11 = *(uint *)(param_4 + 0x40);
      cchText = GetDlgItemTextW((HWND)param_1,(int)uVar31,local_14b8,0x20);
      pHVar36 = this->ButtonBrush;
      color = this->ButtonColor;
      if ((uVar11 & 1) == 0) {
        if ((uVar11 & 0x40) != 0) {
          pHVar36 = this->ButtonHighlightBrush;
          color = this->ButtonHighlightColor;
        }
      }
      else {
        pHVar36 = this->ButtonPressedBrush;
        color = this->ButtonPressedColor;
      }
      pvVar23 = GetStockObject(5);
      SelectObject(*(HDC *)(param_4 + 0x20),pvVar23);
      FillRect(this,*(HDC__ **)(param_4 + 0x20),(tagRECT *)(param_4 + 0x28),pHVar36);
      SetBkColor(*(HDC *)(param_4 + 0x20),color);
      SetTextColor(*(HDC *)(param_4 + 0x20),this->TextColor);
      local_24d8._0_8_ = *(undefined8 *)(param_4 + 0x28);
      local_24d8._8_8_ = *(undefined8 *)(param_4 + 0x30);
      DrawTextW(*(HDC *)(param_4 + 0x20),local_14b8,cchText,&local_24d8,0x125);
      SelectObject(*(HDC *)(param_4 + 0x20),this->BorderPen);
      Rectangle(*(HDC *)(param_4 + 0x20),*(int *)(param_4 + 0x28),*(int *)(param_4 + 0x2c),
                *(int *)(param_4 + 0x30),*(int *)(param_4 + 0x34));
      return (long64)&DAT_00000004;
    }
    goto switchD_1423ed0e0_caseD_4;
  case 0x53:
    DVar9 = GetCurrentThreadId();
    hhk = SetWindowsHookExW(5,StaticMessageBoxHookProc,(HINSTANCE)0x0,DVar9);
    MessageBoxW((HWND)this->MainHwnd,
                L"Welcome to Unreal Console!\r\n\r\nUnreal Console is a replacement of the built-in console. If you still want to use windows console, remove \'-NewConsole\'\r\n\r\nUse double down-arrow in top right corner to expand console to show command line and other features.\r\n\r\nConsole commands:\r\n  showdate\t - Show time in log\r\n  showdatetime\t - Show date/time in log\r\n  hidedatetime\t - Hide date/time from log\r\n  showverbosity\t - Show verbosity from log\r\n  hideverbosity\t - Hide verbosity from log\r\n  <color>\t - Change color of console\r\n\r\nSupported colors: red,gray,darkgray,lightblue,darkblue\r\n\r\nConsole settings are saved separately for client/server/other in basedir folder\r\n\r\nEnjoy!\r\n"
                ,L"Unreal Console Help",0x40);
    UnhookWindowsHookEx(hhk);
    goto switchD_1423ed0e0_caseD_4;
  case 0x83:
    *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + (int)(this->DpiScale * __real_403b000000000000);
    *(int *)param_4 = *(int *)param_4 + (int)this->DpiScale;
    *(int *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) - (int)this->DpiScale;
    *(int *)(param_4 + 8) = *(int *)(param_4 + 8) - (int)this->DpiScale;
    puVar21 = (undefined1 *)0x0;
    break;
  case 0x84:
    iVar12 = HitTestNCB(this,(int)sVar30,(int)sVar8);
    if (iVar12 == 0) {
      lVar17 = HitTestNCA(this,param_1,param_4);
      return lVar17;
    }
LAB_1423ee8c5:
    puVar21 = (undefined1 *)(longlong)iVar12;
    break;
  case 0x85:
    DrawNonClientArea(this,param_1,param_3);
    puVar21 = (undefined1 *)0x0;
    break;
  case 0x86:
    RedrawWindow((HWND)param_1,(RECT *)0x0,(HRGN)0x0,0x100);
    puVar21 = &DAT_00000001;
    break;
  case 0xa0:
    iVar12 = HitTestNCB(this,(int)sVar30,(int)sVar8);
    if (((1 < iVar12 - 8U) && (iVar12 != 0x14)) && (iVar12 != 1000)) {
      iVar12 = -1;
    }
    if (iVar12 != this->NcButtonHot) {
      this->NcButtonHot = iVar12;
      RedrawWindow((HWND)this->MainHwnd,(RECT *)0x0,(HRGN)0x0,0x401);
      if (iVar12 != -1) {
        local_2640.cbSize = 0x18;
        local_2640.dwFlags = 0x12;
        local_2640.hwndTrack = (HWND)param_1;
        TrackMouseEvent(&local_2640);
        goto switchD_1423ed0e0_default;
      }
    }
    goto switchD_1423ed0e0_caseD_4;
  case 0xa1:
    iVar12 = HitTestNCB(this,(int)sVar30,(int)sVar8);
    if (((iVar12 - 8U < 2) || (iVar12 == 0x14)) || (iVar12 == 1000)) {
      SetCapture((HWND)this->MainHwnd);
      this->NcButtonDown = iVar12;
      RedrawWindow((HWND)this->MainHwnd,(RECT *)0x0,(HRGN)0x0,0x401);
      return 0;
    }
switchD_1423ed0e0_caseD_4:
switchD_1423ed0e0_default:
    puVar21 = (undefined1 *)DefWindowProcW((HWND)param_1,local_26c8,param_3,param_4);
    break;
  default:
    goto switchD_1423ed0e0_default;
  }
  return (long64)puVar21;
}

// MoveTopVisible @ 1423ef210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsConsoleOutputDevice2::FConsoleWindow::MoveTopVisible
          (FConsoleWindow *this,tagRECT *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  LRESULT LVar3;
  int iVar4;
  
  this->bAutoScrollLog = false;
  LVar3 = SendMessageW((HWND)this->LogHwnd,0x18e,0,0);
  if (LVar3 != (int)LVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SetWindowPos((HWND)this->TipHwnd,(HWND)this->MainHwnd,1,1,1,1,0x614);
  iVar4 = (int)LVar3 + param_2;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  SendMessageW((HWND)this->LogHwnd,0x197,(longlong)iVar4,0);
                    /* WARNING: Could not recover jumptable at 0x0001423ef2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RedrawWindow((HWND)this->LogScrollHwnd,(RECT *)0x0,(HRGN)0x0,1);
  return;
}

// RefreshLogHwnd @ 1423fdd60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWindowsConsoleOutputDevice2::FConsoleWindow::RefreshLogHwnd(FConsoleWindow *this)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  LRESULT LVar5;
  LogEntry *pLVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int local_res8 [2];
  
  iVar9 = -1;
  iVar8 = 0;
  lVar10 = 0xffffffff;
  lVar11 = 0;
  LVar5 = SendMessageW((HWND)this->LogHwnd,400,0,0);
  if (LVar5 == 1) {
    local_res8[0] = -1;
    SendMessageW((HWND)this->LogHwnd,0x191,1,(LPARAM)local_res8);
    LVar5 = SendMessageW((HWND)this->LogHwnd,0x199,(longlong)local_res8[0],0);
    lVar10 = LVar5 - this->LogIndexOffset;
    if (lVar10 != (int)lVar10) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar11 = (longlong)local_res8[0];
    LVar5 = SendMessageW((HWND)this->LogHwnd,0x18e,0,0);
    lVar11 = lVar11 - LVar5;
    if (lVar11 != (int)lVar11) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  this->LogIndexOffset = 0;
  SendMessageW((HWND)this->LogHwnd,0xb,0,0);
  SendMessageW((HWND)this->LogHwnd,0x184,0,0);
  iVar7 = (this->Log).AfterBack - (this->Log).Front;
  SendMessageW((HWND)this->LogHwnd,0x1a8,(longlong)iVar7,(longlong)(iVar7 * 0x100));
  uVar1 = (this->Log).AfterBack;
  uVar2 = (this->Log).Front;
  for (; iVar8 != uVar1 - uVar2; iVar8 = iVar8 + 1) {
    pLVar6 = TRingBuffer<FWindowsConsoleOutputDevice2::FConsoleWindow::LogEntry,TSizedDefaultAllocator<32>_>
             ::operator[](&this->Log,iVar8);
    iVar7 = AddEntryToLogHwnd(this,pLVar6,iVar8);
    if (iVar8 == (int)lVar10) {
      iVar9 = iVar7;
    }
  }
  if (iVar9 == -1) {
    ScrollToBottom(this);
  }
  else {
    SetWindowPos((HWND)this->TipHwnd,(HWND)this->MainHwnd,1,1,1,1,0x614);
    SendMessageW((HWND)this->LogHwnd,0x197,(longlong)(iVar9 - (int)lVar11),0);
    SendMessageW((HWND)this->LogHwnd,0x185,1,(longlong)iVar9);
  }
  RedrawWindow((HWND)this->LogScrollHwnd,(RECT *)0x0,(HRGN)0x0,1);
  SendMessageW((HWND)this->LogHwnd,0xb,1,0);
                    /* WARNING: Could not recover jumptable at 0x0001423fdfe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RedrawWindow((HWND)this->LogScrollHwnd,(RECT *)0x0,(HRGN)0x0,1);
  return;
}

// ScrollBarWinProc @ 142402be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall
FWindowsConsoleOutputDevice2::FConsoleWindow::ScrollBarWinProc
          (FConsoleWindow *this,HWND__ *param_1,uint param_2,ulong64 param_3,long64 param_4)

{
  double dVar1;
  int iVar2;
  int iVar3;
  LRESULT LVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  float fVar11;
  undefined1 auStack_128 [32];
  int local_108;
  int local_104 [3];
  tagPAINTSTRUCT local_f8;
  tagRECT local_a8;
  tagRECT local_98;
  POINT local_88;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  POINT local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_128;
  if (0x201 < param_2) {
    if (param_2 == 0x202) {
      ReleaseCapture();
      if (this->bSuspendAddingEntries != false) {
        this->bSuspendAddingEntries = false;
        SetEvent(this->DirtyEvent);
      }
      this->LogScrollGrabPos = -1;
    }
    else if (param_2 == 0x20a) {
      iVar3 = HandleMouseWheel(this,param_3);
      return (longlong)iVar3;
    }
    goto LAB_142403061;
  }
  uVar5 = (uint)((ulonglong)param_4 >> 0x10);
  if (param_2 != 0x201) {
    if (param_2 == 0xf) {
      GetClientRect((HWND)param_1,&local_98);
      uVar5 = (int)this->DpiScale + local_98.right;
      BeginPaint((HWND)param_1,&local_f8);
      local_a8.right = local_98.right;
      local_a8.bottom = local_98.bottom - uVar5;
      local_a8._0_8_ = (ulonglong)uVar5 << 0x20;
      ::FillRect(local_f8.hdc,&local_a8,(HBRUSH)this->ScrollBackgroundBrush);
      GetThumbPosAndHeight(this,local_104,&local_108,(tagRECT *)&local_98);
      if (0 < local_108) {
        local_a8.right = local_98.right + -1;
        local_a8.bottom = local_104[0] + local_108;
        local_a8.top = local_104[0];
        local_a8.left = 1;
        ::FillRect(local_f8.hdc,&local_a8,(HBRUSH)this->ThumbBrush);
      }
      EndPaint((HWND)param_1,&local_f8);
    }
    else {
      if (param_2 == 0x14) {
        GetClientRect((HWND)param_1,&local_98);
        local_a8.right = local_98.right;
        uVar5 = (int)this->DpiScale + local_98.right;
        local_a8.bottom = local_98.bottom - uVar5;
        local_a8._0_8_ = (ulonglong)uVar5 << 0x20;
        ::FillRect((HDC)param_3,&local_a8,(HBRUSH)this->ScrollBackgroundBrush);
        local_a8.right = local_98.right;
        local_a8.left = 0;
        local_a8.top = 0;
        local_a8.bottom = uVar5;
        ::FillRect((HDC)param_3,&local_a8,(HBRUSH)this->ButtonBrush);
        local_a8.bottom = local_98.bottom;
        local_a8.right = local_98.right;
        local_a8._0_8_ = (ulonglong)(local_98.bottom - uVar5) << 0x20;
        ::FillRect((HDC)param_3,&local_a8,(HBRUSH)this->ButtonBrush);
        dVar1 = this->DpiScale;
        dVar10 = dVar1 * __real_4008000000000000;
        SelectObject((HDC)param_3,this->NoPen);
        SelectObject((HDC)param_3,this->TextBrush);
        iVar3 = local_98.right / 2;
        iVar6 = iVar3 - (int)dVar10;
        iVar2 = (int)dVar10 + iVar3;
        local_88.y = (int)dVar1 + iVar3;
        local_7c = iVar3 - (int)(dVar1 + dVar1);
        local_88.x = iVar6;
        local_80 = iVar3;
        local_78 = iVar2;
        local_74 = local_88.y;
        Polygon((HDC)param_3,&local_88,3);
        local_70.y = (local_98.bottom - iVar3) - (int)(dVar1 + dVar1);
        local_64 = (local_98.bottom - iVar3) + (int)dVar1;
        local_70.x = iVar6;
        local_68 = iVar3;
        local_60 = iVar2;
        local_5c = local_70.y;
        Polygon((HDC)param_3,&local_70,3);
        return 1;
      }
      if ((param_2 == 0x200) && (this->LogScrollGrabPos != -1)) {
        GetClientRect((HWND)param_1,&local_a8);
        iVar3 = this->LogScrollGrabPos;
        iVar7 = (int)this->DpiScale + local_a8.right;
        LVar4 = SendMessageW((HWND)this->LogHwnd,0x18b,0,0);
        iVar9 = local_a8.bottom + iVar7 * -2;
        iVar8 = local_a8.bottom / this->LogFontHeight;
        iVar2 = (iVar9 * iVar8) / (int)LVar4;
        iVar6 = iVar7;
        if (iVar7 < iVar2) {
          iVar6 = iVar2;
        }
        fVar11 = (float)(int)(((uVar5 & 0xffff) - iVar7) - iVar3) * (float)((int)LVar4 - iVar8);
        SetTopVisible(this,(int)ROUND((fVar11 + fVar11) / (float)(iVar9 - iVar6) - __real_3f000000)
                           >> 1,false);
        RedrawWindow((HWND)param_1,(RECT *)0x0,(HRGN)0x0,1);
      }
    }
    goto LAB_142403061;
  }
  GetClientRect((HWND)param_1,&local_98);
  uVar5 = uVar5 & 0xffff;
  iVar3 = (int)this->DpiScale + local_98.right;
  if ((int)uVar5 <= iVar3) {
    MoveTopVisible(this,(tagRECT *)&local_98,-1);
    goto LAB_142403061;
  }
  if (local_98.bottom - iVar3 < (int)uVar5) {
    MoveTopVisible(this,(tagRECT *)&local_98,1);
    goto LAB_142403061;
  }
  GetThumbPosAndHeight(this,local_104,&local_108,(tagRECT *)&local_98);
  if (local_108 < 1) {
LAB_142402fd1:
    if (local_104[0] < (int)uVar5) {
      if (local_104[0] + local_108 < (int)uVar5) {
        MoveTopVisible(this,(tagRECT *)&local_98,local_98.bottom / this->LogFontHeight + -1);
      }
      goto LAB_142403061;
    }
  }
  else if (local_104[0] < (int)uVar5) {
    if ((int)uVar5 < local_104[0] + local_108) {
      this->LogScrollGrabPos = uVar5 - local_104[0];
      SetCapture((HWND)param_1);
      this->bSuspendAddingEntries = true;
      goto LAB_142403061;
    }
    goto LAB_142402fd1;
  }
  MoveTopVisible(this,(tagRECT *)&local_98,1 - local_98.bottom / this->LogFontHeight);
LAB_142403061:
  LVar4 = DefWindowProcW((HWND)param_1,param_2,param_3,param_4);
  return LVar4;
}

// ScrollToBottom @ 1424030b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWindowsConsoleOutputDevice2::FConsoleWindow::ScrollToBottom(FConsoleWindow *this)

{
  LRESULT LVar1;
  WPARAM wParam;
  
  LVar1 = SendMessageW((HWND)this->LogHwnd,0x18b,0,0);
  wParam = (WPARAM)((int)LVar1 + -1);
  SendMessageW((HWND)this->LogHwnd,0x185,1,wParam);
  SendMessageW((HWND)this->LogHwnd,0x185,0,wParam);
  SetWindowPos((HWND)this->TipHwnd,(HWND)this->MainHwnd,1,1,1,1,0x614);
                    /* WARNING: Could not recover jumptable at 0x00014240315e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostMessageW((HWND)this->LogHwnd,0x197,wParam,0);
  return;
}

// SetActivity @ 142403c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsConsoleOutputDevice2::FConsoleWindow::SetActivity
          (FConsoleWindow *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,int param_4,
          int param_5,bool param_6)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  int iVar2;
  int *piVar3;
  ActivityModification *this_00;
  int iVar4;
  FScriptContainerElement *pFVar5;
  int *piVar6;
  int local_res18 [2];
  undefined1 local_58 [8];
  undefined1 local_50 [16];
  FString local_40;
  
  if (*param_2 != L'\0') {
    lpCriticalSection = &this->ActivityModificationsCs;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ::FString::FString((FString *)local_50,param_1);
    iVar2 = (int)local_50._8_8_;
    pFVar5 = (FScriptContainerElement *)L"";
    if (iVar2 != 0) {
      pFVar5 = (FScriptContainerElement *)local_50._0_8_;
    }
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)pFVar5);
    iVar2 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                        *)&this->IdToActivityIndex,uVar1,(FString *)local_50);
    piVar3 = (int *)0x0;
    if (iVar2 != -1) {
      piVar3 = (int *)((longlong)iVar2 * 0x20 + *(longlong *)&this->IdToActivityIndex);
    }
    piVar6 = piVar3 + 4;
    if (piVar3 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    if ((FScriptContainerElement *)local_50._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_50._0_8_);
    }
    if (piVar6 == (int *)0x0) {
      local_res18[0] =
           *(int *)&(this->IdToActivityIndex).field_0x8 -
           *(int *)&(this->IdToActivityIndex).field_0x34;
      ::FString::FString(&local_40,param_1);
      local_50._0_8_ = &local_40;
      local_50._8_8_ = local_res18;
      TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FString_&&,int_const_&>_>
                ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                  *)&this->IdToActivityIndex,(TPairInitializer<FString_&&,int_const_&> *)local_58,
                 (bool *)local_50);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
      this_00 = TSortedMap<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification,TSizedDefaultAllocator<32>,TLess<int_const_>_>
                ::FindOrAddImpl<int_const_&>(&this->ActivityModifications,local_res18);
      ::FString::operator=(&this_00->Name,param_2);
      this_00->SortValue = param_5;
      this_00->bAlignLeft = param_6;
    }
    else {
      local_res18[0] = *piVar6;
      this_00 = TSortedMap<int,FWindowsConsoleOutputDevice2::FConsoleWindow::ActivityModification,TSizedDefaultAllocator<32>,TLess<int_const_>_>
                ::FindOrAddImpl<int_const_&>(&this->ActivityModifications,local_res18);
    }
    ::FString::operator=(&this_00->Status,param_3);
    this_00->Light = param_4;
    SetEvent(this->DirtyEvent);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// SetTopVisible @ 142405ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsConsoleOutputDevice2::FConsoleWindow::SetTopVisible
          (FConsoleWindow *this,int param_1,bool param_2)

{
  SetWindowPos((HWND)this->TipHwnd,(HWND)this->MainHwnd,1,1,1,1,0x614);
  if (param_2) {
                    /* WARNING: Could not recover jumptable at 0x000142405b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    PostMessageW((HWND)this->LogHwnd,0x197,(longlong)param_1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142405b4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SendMessageW((HWND)this->LogHwnd,0x197,(longlong)param_1,0);
  return;
}

// StaticCommandHwndWndProc @ 142408310

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __cdecl
FWindowsConsoleOutputDevice2::FConsoleWindow::StaticCommandHwndWndProc
          (HWND__ *param_1,uint param_2,ulong64 param_3,long64 param_4)

{
  FConsoleWindow *this;
  long64 lVar1;
  
  this = (FConsoleWindow *)GetWindowLongPtrW((HWND)param_1,-0x15);
  lVar1 = CommandHwndWndProc(this,param_1,param_2,param_3,param_4);
  return lVar1;
}

// StaticLogHwndWndProc @ 142408490

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __cdecl
FWindowsConsoleOutputDevice2::FConsoleWindow::StaticLogHwndWndProc
          (HWND__ *param_1,uint param_2,ulong64 param_3,long64 param_4)

{
  FConsoleWindow *this;
  long64 lVar1;
  
  this = (FConsoleWindow *)GetWindowLongPtrW((HWND)param_1,-0x15);
  lVar1 = LogHwndWndProc(this,param_1,param_2,param_3,param_4);
  return lVar1;
}

// StaticMainWinProc @ 1424084f0

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __cdecl
FWindowsConsoleOutputDevice2::FConsoleWindow::StaticMainWinProc
          (HWND__ *param_1,uint param_2,ulong64 param_3,long64 param_4)

{
  FConsoleWindow *this;
  long64 lVar1;
  LRESULT LVar2;
  
  this = (FConsoleWindow *)GetWindowLongPtrW((HWND)param_1,-0x15);
  if (this == (FConsoleWindow *)0x0) {
    if (param_2 != 1) goto LAB_14240857e;
    SetWindowTheme((HWND)param_1,L"",L"");
    SetWindowLongPtrW((HWND)param_1,-0x15,param_4);
    this = (FConsoleWindow *)param_4;
    if (param_4 == 0) goto LAB_14240857e;
  }
  if (param_1 == this->MainHwnd) {
    lVar1 = MainWinProc(this,param_1,param_2,param_3,param_4);
    return lVar1;
  }
LAB_14240857e:
  LVar2 = DefWindowProcW((HWND)param_1,param_2,param_3,param_4);
  return LVar2;
}

// StaticMessageBoxHookProc @ 1424085b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long64 __cdecl
FWindowsConsoleOutputDevice2::FConsoleWindow::StaticMessageBoxHookProc
          (int param_1,ulong64 param_2,long64 param_3)

{
  int iVar1;
  HWND hWnd;
  LRESULT LVar2;
  undefined1 auStackY_178 [32];
  tagRECT local_148;
  tagRECT local_138;
  WCHAR local_128 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1 == 5) {
    GetWindowTextW((HWND)param_2,local_128,0x40);
    iVar1 = wcsncmp(local_128,L"Unreal Console Help",0x3f);
    if (iVar1 == 0) {
      hWnd = ::GetParent((HWND)param_2);
      GetWindowRect(hWnd,&local_138);
      GetWindowRect((HWND)param_2,&local_148);
      MoveWindow((HWND)param_2,
                 local_138.left +
                 ((local_138.right - local_138.left) / 2 - (local_148.right - local_148.left) / 2),
                 ((local_138.bottom - local_138.top) / 2 - (local_148.bottom - local_148.top) / 2) +
                 local_138.top,local_148.right - local_148.left,local_148.bottom - local_148.top,1);
    }
  }
  LVar2 = CallNextHookEx((HHOOK)0x0,param_1,param_2,param_3);
  return LVar2;
}

// StaticScrollBarWinProc @ 142408700

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __cdecl
FWindowsConsoleOutputDevice2::FConsoleWindow::StaticScrollBarWinProc
          (HWND__ *param_1,uint param_2,ulong64 param_3,long64 param_4)

{
  FConsoleWindow *this;
  long64 lVar1;
  
  this = (FConsoleWindow *)GetWindowLongPtrW((HWND)param_1,-0x15);
  if (this == (FConsoleWindow *)0x0) {
    lVar1 = DefWindowProcW((HWND)param_1,param_2,param_3,param_4);
  }
  else {
    lVar1 = ScrollBarWinProc(this,param_1,param_2,param_3,param_4);
  }
  return lVar1;
}

// StaticThreadProc @ 142408780

/* WARNING: Enum "Type": Some values do not have unique names */

ulong __cdecl FWindowsConsoleOutputDevice2::FConsoleWindow::StaticThreadProc(void *param_1)

{
  uint uVar1;
  
  FWindowsPlatformProcess::SetThreadName(L"LogConsoleHwnd");
  uVar1 = ThreadProc(param_1);
  return uVar1;
}

// ThreadProc @ 142408e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc(FConsoleWindow *this)

{
  HFONT__ *pHVar1;
  double dVar2;
  double dVar3;
  ATOM AVar4;
  ATOM AVar5;
  int iVar6;
  DWORD DVar7;
  uint uVar8;
  BOOL BVar9;
  HMODULE pHVar10;
  HFONT pHVar11;
  HDC pHVar12;
  HWND pHVar13;
  _func___cdecl_long64_HWND___ptr_uint_ulong64_long64 *p_Var14;
  longlong lVar15;
  HPEN pHVar16;
  HANDLE hProcess;
  WPARAM *pWVar17;
  longlong lVar18;
  ulong64 uVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  wchar_t *pwVar22;
  ulong64 uVar23;
  ulong64 uVar24;
  double dVar25;
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auStackY_3b8 [32];
  undefined1 local_348 [8];
  tagSIZE local_340;
  LARGE_INTEGER local_338;
  longlong local_330;
  HMODULE local_328;
  LPCWSTR local_320;
  WNDCLASSEXW local_318;
  tagMSG local_2b8;
  tagRECT local_288;
  tagRECT local_278;
  undefined4 local_268 [102];
  LOGFONTW local_d0;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  pHVar10 = GetModuleHandleW((LPCWSTR)0x0);
  local_328 = pHVar10;
  CreateColors(this);
  local_318.hIcon = LoadIconW(pHVar10,(LPCWSTR)0x7b);
  uVar23 = 0;
  local_318.cbSize = 0x50;
  this->Icon = (HICON__ *)local_318.hIcon;
  local_318.lpfnWndProc = StaticMainWinProc;
  local_318.cbClsExtra = 0;
  local_318.cbWndExtra = 0;
  local_318.lpszMenuName = (LPCWSTR)0x0;
  local_318.hIconSm = (HICON)0x0;
  local_318.style = 3;
  local_318.hCursor = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
  local_318.lpszClassName = L"FConsoleWindow";
  local_318.hbrBackground = (HBRUSH)0x0;
  local_318.hInstance = pHVar10;
  AVar4 = RegisterClassExW(&local_318);
  local_318.lpfnWndProc = StaticScrollBarWinProc;
  local_318.lpszClassName = L"FScrollBar";
  AVar5 = RegisterClassExW(&local_318);
  local_268[0] = 0x1f8;
  SystemParametersInfoW(0x29,0x1f8,local_268,0);
  pHVar11 = CreateFontIndirectW(&local_d0);
  this->Font = (HFONT__ *)pHVar11;
  pHVar12 = GetDC((HWND)0x0);
  iVar6 = GetDeviceCaps(pHVar12,0x5a);
  iVar6 = MulDiv(8,iVar6,0x48);
  pHVar11 = CreateFontW(-iVar6,0,0,0,400,0,0,0,0,0,0,4,0x31,L"Cascadia Mono");
  this->LogFont = (HFONT__ *)pHVar11;
  if ((this->ConsoleTitle).Data.ArrayNum == 0) {
    pwVar22 = L"";
  }
  else {
    pwVar22 = (wchar_t *)(this->ConsoleTitle).Data.AllocatorInstance.Data;
  }
  local_320 = (LPCWSTR)(ulonglong)AVar4;
  pHVar13 = CreateWindowExW(0,(LPCWSTR)(ulonglong)AVar4,pwVar22,0x2cf0000,this->ConsolePosX,
                            this->ConsolePosY,this->ConsoleWidth,this->ConsoleHeight,(HWND)0x0,
                            (HMENU)0x0,pHVar10,this);
  this->MainHwnd = (HWND__ *)pHVar13;
  SetWindowLongPtrW(pHVar13,-0x15,(LONG_PTR)this);
  GetWindowRect((HWND)this->MainHwnd,&local_288);
  this->ConsolePosX = local_288.left;
  this->ConsoleWidth = local_288.right - local_288.left;
  this->ConsolePosY = local_288.top;
  this->ConsoleHeight = local_288.bottom - local_288.top;
  pHVar12 = GetDC((HWND)this->MainHwnd);
  SelectObject(pHVar12,this->LogFont);
  GetTextExtentPoint32W(pHVar12,L"A",1,&local_340);
  this->LogFontWidth = local_340.cx;
  this->LogFontHeight = local_340.cy;
  ReleaseDC((HWND)this->MainHwnd,pHVar12);
  pHVar1 = this->Font;
  pHVar13 = CreateWindowExW(0,L"Edit",(LPCWSTR)0x0,0x50000080,0,0,0,0,(HWND)this->MainHwnd,
                            (HMENU)0x8802,(HINSTANCE)0x0,(LPVOID)0x0);
  if (pHVar1 != (HFONT__ *)0x0) {
    SendMessageW(pHVar13,0x30,(WPARAM)pHVar1,0);
  }
  this->IncludeFilterHwnd = (HWND__ *)pHVar13;
  pHVar1 = this->Font;
  pHVar13 = CreateWindowExW(0,L"Edit",(LPCWSTR)0x0,0x50000080,0,0,0,0,(HWND)this->MainHwnd,
                            (HMENU)0x8803,(HINSTANCE)0x0,(LPVOID)0x0);
  if (pHVar1 != (HFONT__ *)0x0) {
    SendMessageW(pHVar13,0x30,(WPARAM)pHVar1,0);
  }
  pHVar1 = this->Font;
  this->ExcludeFilterHwnd = (HWND__ *)pHVar13;
  pHVar13 = CreateWindowExW(0,L"Button",L"Clear Log",0x50000000,0,0,0,0,(HWND)this->MainHwnd,
                            (HMENU)0x8806,(HINSTANCE)0x0,(LPVOID)0x0);
  if (pHVar1 != (HFONT__ *)0x0) {
    SendMessageW(pHVar13,0x30,(WPARAM)pHVar1,0);
  }
  pHVar1 = this->Font;
  this->ClearLogButtonHwnd = (HWND__ *)pHVar13;
  pHVar13 = CreateWindowExW(0,L"Button",L"Log CHECKPOINT0",0x50000000,0,0,0,0,(HWND)this->MainHwnd,
                            (HMENU)0x8807,(HINSTANCE)0x0,(LPVOID)0x0);
  if (pHVar1 != (HFONT__ *)0x0) {
    SendMessageW(pHVar13,0x30,(WPARAM)pHVar1,0);
  }
  this->CheckpointButtonHwnd = (HWND__ *)pHVar13;
  pHVar1 = this->LogFont;
  pHVar13 = CreateWindowExW(0,L"ListBox",(LPCWSTR)0x0,0x50000d51,0,0,1,1,(HWND)this->MainHwnd,
                            (HMENU)0x8801,(HINSTANCE)0x0,(LPVOID)0x0);
  if (pHVar1 != (HFONT__ *)0x0) {
    SendMessageW(pHVar13,0x30,(WPARAM)pHVar1,0);
  }
  this->LogHwnd = (HWND__ *)pHVar13;
  SetWindowLongPtrW(pHVar13,-0x15,(LONG_PTR)this);
  p_Var14 = (_func___cdecl_long64_HWND___ptr_uint_ulong64_long64 *)
            SetWindowLongPtrW((HWND)this->LogHwnd,-4,0x142408490);
  this->LogHwndWndProcPtr = p_Var14;
  pHVar13 = CreateWindowExW(0,(LPCWSTR)(ulonglong)AVar5,(LPCWSTR)0x0,0x50000001,0,0,1,1,
                            (HWND)this->MainHwnd,(HMENU)0x0,(HINSTANCE)0x0,(LPVOID)0x0);
  this->LogScrollHwnd = (HWND__ *)pHVar13;
  SetWindowLongPtrW(pHVar13,-0x15,(LONG_PTR)this);
  pHVar1 = this->Font;
  pHVar13 = CreateWindowExW(0,L"Edit",(LPCWSTR)0x0,0x50000080,0,0,1,1,(HWND)this->MainHwnd,
                            (HMENU)0x8804,(HINSTANCE)0x0,(LPVOID)0x0);
  if (pHVar1 != (HFONT__ *)0x0) {
    SendMessageW(pHVar13,0x30,(WPARAM)pHVar1,0);
  }
  this->CommandHwnd = (HWND__ *)pHVar13;
  SetWindowLongPtrW(pHVar13,-0x15,(LONG_PTR)this);
  p_Var14 = (_func___cdecl_long64_HWND___ptr_uint_ulong64_long64 *)
            SetWindowLongPtrW((HWND)this->CommandHwnd,-4,0x142408310);
  pHVar1 = this->Font;
  this->CommandHwndWndProcPtr = p_Var14;
  pHVar13 = CreateWindowExW(0,L"Button",L"RunCommand",0x50000000,0,0,1,1,(HWND)this->MainHwnd,
                            (HMENU)0x8805,(HINSTANCE)0x0,(LPVOID)0x0);
  if (pHVar1 != (HFONT__ *)0x0) {
    SendMessageW(pHVar13,0x30,(WPARAM)pHVar1,0);
  }
  this->RunCommandHwnd = (HWND__ *)pHVar13;
  SetFocus((HWND)this->CommandHwnd);
  GetClientRect((HWND)this->MainHwnd,&local_278);
  dVar27 = __real_3ff0000000000000 / this->DpiScale;
  UpdateSize(this,(int)((double)local_278.right * dVar27),(int)((double)local_278.bottom * dVar27),
             false);
  UpdateTime(this,0);
  local_2b8._40_8_ = (WPARAM *)0x0;
  local_2b8.wParam =
       (WPARAM)&
               ___7__TFunction_OwnedObject_V<lambda_1>__1__ThreadProc_FConsoleWindow_FWindowsConsoleOutputDevice2__QEAAIXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  local_2b8.hwnd =
       (HWND)UE::Core::Private::Function::
             TFunctionRefCaller<`FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc'::__l2::<lambda_1>,void,enum_FTrackedActivity::EEvent,FTrackedActivity::FInfo_const_&>
             ::Call;
  local_2b8.lParam = (LPARAM)this;
  FTrackedActivity::RegisterEventListener
            ((TUniqueFunction<void___cdecl(FTrackedActivity::EEvent,FTrackedActivity::FInfo_const_&)>
              *)&local_2b8,0xffffffff);
  if (local_2b8.hwnd != (HWND)0x0) {
    pWVar17 = &local_2b8.wParam;
    if ((WPARAM *)local_2b8._40_8_ != (WPARAM *)0x0) {
      pWVar17 = (WPARAM *)local_2b8._40_8_;
    }
    (**(code **)(*pWVar17 + 0x10))();
  }
  local_2b8._40_8_ = (WPARAM *)0x0;
  local_2b8.wParam =
       (WPARAM)&
               ___7__TFunction_OwnedObject_V<lambda_2>__1__ThreadProc_FConsoleWindow_FWindowsConsoleOutputDevice2__QEAAIXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_2b8.hwnd =
       (HWND)UE::Core::Private::Function::
             TFunctionRefCaller<`FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc'::__l2::<lambda_2>,void,FTrackedActivity::FInfo_const_&>
             ::Call;
  local_2b8.lParam = (LPARAM)this;
  FTrackedActivity::TraverseActivities
            ((TFunction<void___cdecl(FTrackedActivity::FInfo_const_&)> *)&local_2b8);
  if (local_2b8.hwnd != (HWND)0x0) {
    pWVar17 = &local_2b8.wParam;
    if ((WPARAM *)local_2b8._40_8_ != (WPARAM *)0x0) {
      pWVar17 = (WPARAM *)local_2b8._40_8_;
    }
    (**(code **)(*pWVar17 + 0x10))();
  }
  UpdateWindow((HWND)this->MainHwnd);
  SetForegroundWindow((HWND)this->MainHwnd);
  pHVar13 = CreateWindowExW(0x8000088,L"Static",L"",0x9e00000d,1,1,1,1,(HWND)this->MainHwnd,
                            (HMENU)0x0,pHVar10,(LPVOID)0x0);
  this->TipHwnd = (HWND__ *)pHVar13;
  SendMessageW(pHVar13,0x30,(WPARAM)this->Font,0);
  FDateTime::Now();
  dVar3 = __real_3f85555555555555;
  dVar2 = __real_43e0000000000000;
  dVar27 = __real_4170000000000000;
  lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar24 = uVar23;
  local_330 = lVar18;
  do {
    do {
      do {
        if ((bool)(char)uVar23 != this->bIsVisible) {
          if (this->bIsVisible == false) {
            ShowWindow((HWND)this->MainHwnd,0);
          }
          else {
            SetWindowPos((HWND)this->MainHwnd,(HWND)0x0,this->ConsolePosX,this->ConsolePosY,
                         this->ConsoleWidth,this->ConsoleHeight,0x274);
          }
          uVar23 = (ulong64)this->bIsVisible;
          if (this->bIsVisible != false) {
            if ((this->ConsoleIncludeFilterStr).Data.ArrayNum == 0) {
              pwVar22 = L"";
            }
            else {
              pwVar22 = (wchar_t *)(this->ConsoleIncludeFilterStr).Data.AllocatorInstance.Data;
            }
            ::FString::operator=(&this->ConsoleIncludeFilterStr,pwVar22);
            if ((this->ConsoleIncludeFilterStr).Data.ArrayNum == 0) {
              pwVar22 = L"";
            }
            else {
              pwVar22 = (wchar_t *)(this->ConsoleIncludeFilterStr).Data.AllocatorInstance.Data;
            }
            SetDlgItemTextW((HWND)this->MainHwnd,0x8802,pwVar22);
            ::FString::ParseIntoArray(&this->ConsoleIncludeFilterStr,&this->IncludeFilter,L" ",true)
            ;
            if ((this->ConsoleExcludeFilterStr).Data.ArrayNum == 0) {
              pwVar22 = L"";
            }
            else {
              pwVar22 = (wchar_t *)(this->ConsoleExcludeFilterStr).Data.AllocatorInstance.Data;
            }
            ::FString::operator=(&this->ConsoleExcludeFilterStr,pwVar22);
            if ((this->ConsoleExcludeFilterStr).Data.ArrayNum == 0) {
              pwVar22 = L"";
            }
            else {
              pwVar22 = (wchar_t *)(this->ConsoleExcludeFilterStr).Data.AllocatorInstance.Data;
            }
            SetDlgItemTextW((HWND)this->MainHwnd,0x8803,pwVar22);
            ::FString::ParseIntoArray(&this->ConsoleExcludeFilterStr,&this->ExcludeFilter,L" ",true)
            ;
          }
        }
        QueryPerformanceCounter(&local_338);
        lVar15 = 0;
        dVar25 = ((double)local_338.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar27) -
                 GStartTime;
        if ((dVar2 <= dVar25) && (dVar25 = dVar25 - dVar2, dVar25 < dVar2)) {
          lVar15 = -0x8000000000000000;
        }
        uVar19 = (longlong)dVar25 + lVar15;
        if (uVar24 != uVar19) {
          UpdateTime(this,uVar19);
          uVar24 = uVar19;
        }
        DVar7 = MsgWaitForMultipleObjects(1,&this->DirtyEvent,0,200,0x1cff);
        if ((*(int *)(lVar18 + 0x9d4c) <
             `public:_unsigned_int___cdecl_FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc(void)___ptr64'
             ::__l19::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_unsigned_int___cdecl_FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc(void)___ptr64'
                                 ::__l19::_thread_safe_static_guard_0__),
           `public:_unsigned_int___cdecl_FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc(void)___ptr64'
           ::__l19::_thread_safe_static_guard_0__ == -1)) {
          pHVar10 = GetModuleHandleW(L"user32.dll");
          `public:_unsigned_int___cdecl_FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc(void)___ptr64'
          ::__l19::GetDpiForWindow =
               (_func_uint_HWND___ptr *)GetProcAddress(pHVar10,"GetDpiForWindow");
          _Init_thread_footer(&`public:_unsigned_int___cdecl_FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc(void)___ptr64'
                               ::__l19::_thread_safe_static_guard_0__);
        }
        if (`public:_unsigned_int___cdecl_FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc(void)___ptr64'
            ::__l19::GetDpiForWindow != (_func_uint_HWND___ptr *)0x0) {
          uVar8 = (*`public:_unsigned_int___cdecl_FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc(void)___ptr64'
                    ::__l19::GetDpiForWindow)((HWND__ *)this->MainHwnd);
          if ((*(int *)(lVar18 + 0x9d4c) <
               `public:_unsigned_int___cdecl_FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc(void)___ptr64'
               ::__l22::_thread_safe_static_guard_1__) &&
             (_Init_thread_header(&`public:_unsigned_int___cdecl_FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc(void)___ptr64'
                                   ::__l22::_thread_safe_static_guard_1__),
             `public:_unsigned_int___cdecl_FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc(void)___ptr64'
             ::__l22::_thread_safe_static_guard_1__ == -1)) {
            `public:_unsigned_int___cdecl_FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc(void)___ptr64'
            ::__l22::lastDpi = uVar8;
            _Init_thread_footer(&`public:_unsigned_int___cdecl_FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc(void)___ptr64'
                                 ::__l22::_thread_safe_static_guard_1__);
          }
          if (`public:_unsigned_int___cdecl_FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc(void)___ptr64'
              ::__l22::lastDpi != uVar8) {
            this->DpiScale = (double)uVar8 * dVar3;
            ShowWindow((HWND)this->MainHwnd,0);
            dVar25 = this->DpiScale;
            uVar23 = 0;
            `public:_unsigned_int___cdecl_FWindowsConsoleOutputDevice2::FConsoleWindow::ThreadProc(void)___ptr64'
            ::__l22::lastDpi = uVar8;
            this->ConsolePosX = (int)((double)this->ConsolePosX * dVar25);
            this->ConsolePosY = (int)((double)this->ConsolePosY * dVar25);
            this->ConsoleWidth = (int)((double)this->ConsoleWidth * dVar25);
            this->ConsoleHeight = (int)((double)this->ConsoleHeight * dVar25);
            SystemParametersInfoW(0x29,0x1f8,local_268,0);
            pHVar11 = CreateFontIndirectW(&local_d0);
            this->Font = (HFONT__ *)pHVar11;
            iVar6 = MulDiv(8,uVar8,0x48);
            pHVar11 = CreateFontW(-iVar6,0,0,0,400,0,0,0,0,0,0,4,0x31,L"Cascadia Mono");
            this->LogFont = (HFONT__ *)pHVar11;
            pHVar12 = GetDC((HWND)this->MainHwnd);
            SelectObject(pHVar12,this->LogFont);
            GetTextExtentPoint32W(pHVar12,L"A",1,&local_340);
            this->LogFontWidth = local_340.cx;
            this->LogFontHeight = local_340.cy;
            ReleaseDC((HWND)this->MainHwnd,pHVar12);
            SendMessageW((HWND)this->IncludeFilterHwnd,0x30,(WPARAM)this->Font,0);
            SendMessageW((HWND)this->ExcludeFilterHwnd,0x30,(WPARAM)this->Font,0);
            SendMessageW((HWND)this->ClearLogButtonHwnd,0x30,(WPARAM)this->Font,0);
            SendMessageW((HWND)this->CheckpointButtonHwnd,0x30,(WPARAM)this->Font,0);
            SendMessageW((HWND)this->CommandHwnd,0x30,(WPARAM)this->Font,0);
            SendMessageW((HWND)this->RunCommandHwnd,0x30,(WPARAM)this->Font,0);
            iVar6 = (this->Activities).ArrayNum;
            pFVar20 = (this->Activities).AllocatorInstance.Data;
            pFVar21 = pFVar20 + (longlong)iVar6 * 0x40;
            while( true ) {
              if ((this->Activities).ArrayNum != iVar6) {
                `TCheckedPointerIterator<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity,int,0>
                ::operator!='::__l2::<lambda_1>::operator()(local_348);
              }
              if (pFVar20 == pFVar21) break;
              if (*(HWND *)pFVar20 != (HWND)0x0) {
                SendMessageW(*(HWND *)pFVar20,0x30,(WPARAM)this->Font,0);
              }
              if (*(HWND *)(pFVar20 + 8) != (HWND)0x0) {
                SendMessageW(*(HWND *)(pFVar20 + 8),0x30,(WPARAM)this->Font,0);
              }
              pFVar20 = pFVar20 + 0x40;
            }
            SendMessageW((HWND)this->LogHwnd,0x30,(WPARAM)this->LogFont,0);
            SendMessageW((HWND)this->LogHwnd,0x1a0,0,(ulonglong)(ushort)this->LogFontHeight);
            dVar25 = this->DpiScale;
            lVar18 = (longlong)dVar25;
            if ((lVar18 != -0x8000000000000000) && ((double)lVar18 != dVar25)) {
              auVar26._8_8_ = dVar25;
              auVar26._0_8_ = dVar25;
              uVar8 = movmskpd(0,auVar26);
              dVar25 = (double)(longlong)(lVar18 + (ulonglong)(uVar8 & 1 ^ 1));
            }
            pHVar16 = CreatePen(6,(int)dVar25,this->BorderColor);
            this->WindowBorderPen = (HPEN__ *)pHVar16;
            lVar18 = local_330;
          }
        }
      } while (DVar7 == 0x102);
      HandleActivityModifications(this);
      HandleNewLogEntries(this);
      BVar9 = PeekMessageW(&local_2b8,(HWND)0x0,0,0,1);
    } while (BVar9 == 0);
    do {
      BVar9 = IsDialogMessageW((HWND)this->MainHwnd,&local_2b8);
      if (BVar9 == 0) {
        TranslateMessage(&local_2b8);
        DispatchMessageW(&local_2b8);
      }
      if (local_2b8.message == 0x12) {
        DestroyWindow((HWND)this->MainHwnd);
        DeleteObject(this->LogFont);
        DeleteObject(this->Font);
        UnregisterClassW(local_320,local_328);
        this->MainHwnd = (HWND__ *)0x0;
        DestroyColors(this);
        if (GIsRequestingExit == false) {
          SaveToINI(this->Owner);
          FWindowsPlatformMisc::CallGracefulTerminationHandler();
        }
        else if (this->bExiting == false) {
          Sleep(500);
          hProcess = GetCurrentProcess();
          TerminateProcess(hProcess,0xffffffff);
        }
        return 0;
      }
      BVar9 = PeekMessageW(&local_2b8,(HWND)0x0,0,0,1);
    } while (BVar9 != 0);
  } while( true );
}

// UpdateExcludeFilter @ 14240bc60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsConsoleOutputDevice2::FConsoleWindow::UpdateExcludeFilter
          (FConsoleWindow *this,wchar_t *param_1)

{
  wchar_t *lpString;
  
  ::FString::operator=(&this->ConsoleExcludeFilterStr,param_1);
  if ((this->ConsoleExcludeFilterStr).Data.ArrayNum == 0) {
    lpString = L"";
  }
  else {
    lpString = (wchar_t *)(this->ConsoleExcludeFilterStr).Data.AllocatorInstance.Data;
  }
  SetDlgItemTextW((HWND)this->MainHwnd,0x8803,lpString);
  ::FString::ParseIntoArray(&this->ConsoleExcludeFilterStr,&this->ExcludeFilter,L" ",true);
  return;
}

// UpdateIncludeFilter @ 14240bf90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsConsoleOutputDevice2::FConsoleWindow::UpdateIncludeFilter
          (FConsoleWindow *this,wchar_t *param_1)

{
  wchar_t *lpString;
  
  ::FString::operator=(&this->ConsoleIncludeFilterStr,param_1);
  if ((this->ConsoleIncludeFilterStr).Data.ArrayNum == 0) {
    lpString = L"";
  }
  else {
    lpString = (wchar_t *)(this->ConsoleIncludeFilterStr).Data.AllocatorInstance.Data;
  }
  SetDlgItemTextW((HWND)this->MainHwnd,0x8802,lpString);
  ::FString::ParseIntoArray(&this->ConsoleIncludeFilterStr,&this->IncludeFilter,L" ",true);
  return;
}

// UpdateSize @ 14240c000

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsConsoleOutputDevice2::FConsoleWindow::UpdateSize
          (FConsoleWindow *this,int param_1,int param_2,bool param_3)

{
  int iVar1;
  uint uFlags;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  UINT uFlags_00;
  uint uFlags_01;
  int iVar9;
  double dVar10;
  int local_res18 [2];
  char local_res20;
  FConsoleWindow *local_a8;
  int *local_a0;
  
  uFlags = (param_3 ^ 1) * 8 + 0x214;
  local_res20 = param_3;
  if (param_3) {
    SendMessageW((HWND)this->LogHwnd,0xb,0,0);
    local_res18[0] = 0x214;
  }
  else {
    local_res18[0] = 0x21c;
  }
  local_a0 = local_res18;
  local_a8 = this;
  iVar7 = TraverseActivityPositions<_FWindowsConsoleOutputDevice2::FConsoleWindow::UpdateActivityPositions_::__l2::<lambda_1>_>
                    (this,param_1,param_2,(<lambda_1> *)&local_a8);
  bVar5 = this->bConsoleExpanded;
  this->ActivitiesTotalHeight = iVar7;
  dVar6 = __real_4036000000000000;
  dVar4 = __real_4020000000000000;
  iVar9 = 0x24;
  if (bVar5 == false) {
    iVar9 = 1;
  }
  uFlags_00 = 0x80;
  iVar1 = (param_2 - iVar7) + -0x19;
  uFlags_01 = uFlags | 0x80;
  if (bVar5 != false) {
    uFlags_00 = uFlags | 0x40;
    uFlags_01 = uFlags_00;
  }
  dVar2 = this->DpiScale;
  local_res18[0] = -5;
  if (bVar5 == false) {
    local_res18[0] = 0x14;
  }
  local_res18[0] = local_res18[0] + (iVar1 - iVar9);
  SetWindowPos((HWND)this->ClearLogButtonHwnd,(HWND)0x0,(int)((double)(param_1 + -0xeb) * dVar2),
               (int)(dVar2 * __real_4020000000000000),(int)(dVar2 * __real_4054000000000000),
               (int)(dVar2 * __real_4036000000000000),uFlags_01);
  dVar2 = this->DpiScale;
  SetWindowPos((HWND)this->CheckpointButtonHwnd,(HWND)0x0,(int)((double)(param_1 + -0x8d) * dVar2),
               (int)(dVar2 * dVar4),(int)(dVar2 * __real_4060e00000000000),(int)(dVar2 * dVar6),
               uFlags_01);
  dVar2 = __real_4034000000000000;
  if (param_1 + -0x118 < 100) {
    uFlags_01 = uFlags | 0x80;
  }
  dVar3 = this->DpiScale;
  iVar8 = (param_1 + -0x118) / 2;
  dVar10 = (double)iVar8;
  SetWindowPos((HWND)this->IncludeFilterHwnd,(HWND)0x0,(int)(dVar3 * dVar4),
               (int)(dVar3 * __real_4022000000000000),(int)(dVar10 * dVar3),
               (int)(dVar3 * __real_4034000000000000),uFlags_01);
  dVar3 = this->DpiScale;
  SetWindowPos((HWND)this->ExcludeFilterHwnd,(HWND)0x0,(int)((double)(iVar8 + 0x1c) * dVar3),
               (int)(dVar3 * __real_4022000000000000),(int)(dVar10 * dVar3),(int)(dVar3 * dVar2),
               uFlags_01);
  dVar3 = this->DpiScale;
  dVar10 = (double)local_res18[0];
  SetWindowPos((HWND)this->LogHwnd,(HWND)0x0,(int)(dVar3 * __real_401c000000000000),
               (int)((double)iVar9 * dVar3),(int)((double)(param_1 + -0x21) * dVar3),
               (int)(dVar10 * dVar3),uFlags);
  dVar3 = this->DpiScale;
  SetWindowPos((HWND)this->LogScrollHwnd,(HWND)0x0,(int)((double)(param_1 + -0x1a) * dVar3),
               (int)((double)iVar9 * dVar3),(int)(dVar3 * __real_4033000000000000),
               (int)(dVar10 * dVar3),uFlags);
  dVar3 = this->DpiScale;
  SetWindowPos((HWND)this->CommandHwnd,(HWND)0x0,(int)(dVar3 * dVar4),(int)((double)iVar1 * dVar3),
               (int)((double)(param_1 + -0x6e) * dVar3),(int)(dVar3 * dVar2),uFlags_00);
  dVar4 = this->DpiScale;
  SetWindowPos((HWND)this->RunCommandHwnd,(HWND)0x0,(int)((double)(param_1 + -0x61) * dVar4),
               (int)((double)((param_2 - iVar7) + -0x1a) * dVar4),
               (int)(dVar4 * __real_4056800000000000),(int)(dVar4 * dVar6),uFlags_00);
  if (local_res20 != '\0') {
    SendMessageW((HWND)this->LogHwnd,0xb,1,0);
  }
  return;
}

// UpdateTime @ 14240c4c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsConsoleOutputDevice2::FConsoleWindow::UpdateTime(FConsoleWindow *this,ulong64 param_1)

{
  ForAnyElementType FVar1;
  undefined1 in_XMM0 [16];
  undefined1 auVar2 [16];
  FString local_18;
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (double)param_1 * __real_416312d000000000 + __real_3fe0000000000000;
  auVar2 = roundpd(in_XMM0,auVar2,1);
  FVar1.Data = (FScriptContainerElement *)0x0;
  if ((int)((longlong)auVar2._0_8_ / 864000000000) != 0) {
    ::FString::PrintfImpl(&local_18,L"%i.");
    FVar1.Data = local_18.Data.AllocatorInstance.Data;
  }
  ::FString::PrintfImpl(&local_18,L"%s%02i:%02i:%02i");
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar1.Data = local_18.Data.AllocatorInstance.Data;
  }
  SetActivity(this,L"Time",L"Time",(wchar_t *)FVar1.Data,0,1,false);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

