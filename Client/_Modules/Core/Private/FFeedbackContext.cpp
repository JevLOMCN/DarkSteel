// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 30

// CloseBuildProgressWindow @ 14162edc0

void __thiscall FFeedbackContext::CloseBuildProgressWindow(FFeedbackContext *this)

{
  return;
}

// FinalizeSlowTask @ 14163a4a0

void __thiscall FFeedbackContext::FinalizeSlowTask(FFeedbackContext *this)

{
  undefined1 *puVar1;
  double dVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  LARGE_INTEGER local_res8;
  FGuid local_58;
  FDestructionSentinel local_48 [2];
  
  QueryPerformanceCounter(&local_res8);
  dVar6 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  dVar2 = this->TaskStartTime;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->FinalizeSlowTaskEvent,
             (FWriteAccessScope *)local_48);
  puVar1 = &(this->FinalizeSlowTaskEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar7 = false;
  uVar12 = *(int *)&(this->FinalizeSlowTaskEvent).field_0x10 - 1;
  if ((int)uVar12 < 0) {
    puVar1 = &(this->FinalizeSlowTaskEvent).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
  }
  else {
    lVar11 = (longlong)(int)uVar12 << 4;
    do {
      uVar10 = 0;
      if ((int)uVar12 < *(int *)&(this->FinalizeSlowTaskEvent).field_0x10) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar3 = *(longlong *)&(this->FinalizeSlowTaskEvent).field_0x8;
      if ((*(int *)(lVar3 + 8 + lVar11) == 0) ||
         (plVar4 = *(longlong **)(lVar3 + lVar11), plVar4 == (longlong *)0x0)) {
LAB_14163a59b:
        bVar7 = true;
      }
      else {
        cVar9 = (**(code **)(*plVar4 + 0x68))(plVar4,&this->TaskName,SUB84(dVar6 - dVar2,0));
        if (cVar9 == '\0') goto LAB_14163a59b;
      }
      lVar11 = lVar11 + -0x10;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
    puVar1 = &(this->FinalizeSlowTaskEvent).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar7) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->FinalizeSlowTaskEvent,
                 false);
    }
  }
  if (local_48[0].bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48[0].Accessor,local_48);
  }
  local_58.A = (this->TaskGuid).A;
  local_58.B = (this->TaskGuid).B;
  local_58.C = (this->TaskGuid).C;
  local_58.D = (this->TaskGuid).D;
  TMulticastDelegate<void___cdecl(FGuid,FText_const_&),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(FGuid,FText_const_&),FDefaultDelegateUserPolicy> *)
             &this->FinalizeSlowTaskWithGuidEvent,&local_58,&this->TaskName);
  GIsSlowTask = false;
  return;
}

// ProgressReported @ 141651750

void __thiscall
FFeedbackContext::ProgressReported(FFeedbackContext *this,float param_1,FText *param_2)

{
  ITextData *pIVar1;
  
  pIVar1 = (param_2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014165175b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))();
    return;
  }
  return;
}

// ReceivedUserCancel @ 1416528c0

bool __thiscall FFeedbackContext::ReceivedUserCancel(FFeedbackContext *this)

{
  return false;
}

// ShowBuildProgressWindow @ 141660340

TWeakPtr<SBuildProgressWidget,1> * __thiscall
FFeedbackContext::ShowBuildProgressWindow
          (FFeedbackContext *this,TWeakPtr<SBuildProgressWidget,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (SBuildProgressWidget *)0x0;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// StartSlowTask @ 141661140

void __thiscall FFeedbackContext::StartSlowTask(FFeedbackContext *this,FText *param_1,bool param_2)

{
  undefined1 *puVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  FGuid *pFVar12;
  uint uVar13;
  longlong lVar14;
  undefined7 in_register_00000081;
  undefined1 local_res8 [8];
  LARGE_INTEGER local_res10;
  FGuid local_68;
  FGuid local_58;
  FDestructionSentinel local_48;
  
  pIVar2 = (param_1->TextData).Reference;
  pIVar3 = (this->TaskName).TextData.Reference;
  if (pIVar3 != pIVar2) {
    (this->TaskName).TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8,CONCAT71(in_register_00000081,param_2))
      ;
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (this->TaskName).Flags = param_1->Flags;
  pFVar12 = FGuid::NewGuid(&local_58);
  uVar13 = pFVar12->B;
  uVar11 = pFVar12->C;
  uVar7 = pFVar12->D;
  (this->TaskGuid).A = pFVar12->A;
  (this->TaskGuid).B = uVar13;
  (this->TaskGuid).C = uVar11;
  (this->TaskGuid).D = uVar7;
  QueryPerformanceCounter(&local_res10);
  this->TaskStartTime =
       (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  GIsSlowTask = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->StartSlowTaskEvent,
             (FWriteAccessScope *)&local_48);
  puVar1 = &(this->StartSlowTaskEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar8 = false;
  uVar13 = *(int *)&(this->StartSlowTaskEvent).field_0x10 - 1;
  if (-1 < (int)uVar13) {
    lVar14 = (longlong)(int)uVar13 << 4;
    bVar8 = false;
    do {
      uVar11 = 0;
      if ((int)uVar13 < *(int *)&(this->StartSlowTaskEvent).field_0x10) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar4 = *(longlong *)&(this->StartSlowTaskEvent).field_0x8;
      if (((*(int *)(lVar4 + 8 + lVar14) == 0) ||
          (plVar5 = *(longlong **)(lVar4 + lVar14), plVar5 == (longlong *)0x0)) ||
         (cVar10 = (**(code **)(*plVar5 + 0x68))(), cVar10 == '\0')) {
        bVar8 = true;
      }
      lVar14 = lVar14 + -0x10;
      uVar13 = uVar13 - 1;
    } while (-1 < (int)uVar13);
  }
  puVar1 = &(this->StartSlowTaskEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar8) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->StartSlowTaskEvent,false
              );
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_68.A = (this->TaskGuid).A;
  local_68.B = (this->TaskGuid).B;
  local_68.C = (this->TaskGuid).C;
  local_68.D = (this->TaskGuid).D;
  TMulticastDelegate<void___cdecl(FGuid,FText_const_&),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(FGuid,FText_const_&),FDefaultDelegateUserPolicy> *)
             &this->StartSlowTaskWithGuidEvent,&local_68,&this->TaskName);
  return;
}

// GetContext @ 141825ca0

FContextSupplier * __thiscall FFeedbackContext::GetContext(FFeedbackContext *this)

{
  return (FContextSupplier *)0x0;
}

// SetContext @ 141832770

void __thiscall FFeedbackContext::SetContext(FFeedbackContext *this,FContextSupplier *param_1)

{
  return;
}

// FFeedbackContext @ 1418bb370

FFeedbackContext * __thiscall FFeedbackContext::FFeedbackContext(FFeedbackContext *this)

{
  *(undefined2 *)&this->_padding_ = 0x100;
  (this->Warnings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FFeedbackContext__6B_;
  (this->Warnings).ArrayNum = 0;
  (this->Warnings).ArrayMax = 0;
  (this->Errors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Errors).ArrayNum = 0;
  (this->Errors).ArrayMax = 0;
  this->TreatWarningsAsErrors = false;
  this->TreatErrorsAsWarnings = false;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->WarningsAndErrorsCritical,4000);
  FText::FText(&this->TaskName);
  *(undefined8 *)&this->StartSlowTaskEvent = 0;
  *(undefined8 *)&(this->StartSlowTaskEvent).field_0x8 = 0;
  *(undefined8 *)&(this->StartSlowTaskEvent).field_0x10 = 0;
  *(undefined8 *)&(this->StartSlowTaskEvent).field_0x18 = 2;
  *(undefined8 *)&this->FinalizeSlowTaskEvent = 0;
  *(undefined8 *)&(this->FinalizeSlowTaskEvent).field_0x8 = 0;
  *(undefined8 *)&(this->FinalizeSlowTaskEvent).field_0x10 = 0;
  *(undefined8 *)&(this->FinalizeSlowTaskEvent).field_0x18 = 2;
  (this->TaskGuid).A = 0;
  (this->TaskGuid).B = 0;
  (this->TaskGuid).C = 0;
  (this->TaskGuid).D = 0;
  *(undefined8 *)&this->StartSlowTaskWithGuidEvent = 0;
  *(undefined8 *)&(this->StartSlowTaskWithGuidEvent).field_0x8 = 0;
  *(undefined8 *)&(this->StartSlowTaskWithGuidEvent).field_0x10 = 0;
  *(undefined8 *)&(this->StartSlowTaskWithGuidEvent).field_0x18 = 2;
  *(undefined8 *)&this->FinalizeSlowTaskWithGuidEvent = 0;
  *(undefined8 *)&(this->FinalizeSlowTaskWithGuidEvent).field_0x8 = 0;
  *(undefined8 *)&(this->FinalizeSlowTaskWithGuidEvent).field_0x10 = 0;
  *(undefined8 *)&(this->FinalizeSlowTaskWithGuidEvent).field_0x18 = 2;
  *(undefined8 *)&this->ScopeStack = 0;
  *(undefined8 *)&(this->ScopeStack).field_0x8 = 0;
  (this->ScopeStackSharedPtr).Object = (FSlowTaskStack *)0x0;
  (this->ScopeStackSharedPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->LegacyAPIScopes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LegacyAPIScopes).ArrayNum = 0;
  (this->LegacyAPIScopes).ArrayMax = 0;
  return this;
}

// ~FFeedbackContext @ 1418beb50

void __thiscall FFeedbackContext::~FFeedbackContext(FFeedbackContext *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  ITextData *pIVar4;
  FFeedbackContext *local_res8;
  
  iVar1 = (this->LegacyAPIScopes).ArrayNum;
  this->_padding_ = (longlong)&___7FFeedbackContext__6B_;
  if (iVar1 != 0) {
    local_res8 = this;
    `FFeedbackContext::~FFeedbackContext'::__l2::<lambda_1>::operator()(&local_res8);
  }
  DestructItems<TUniquePtr<FSlowTask,TDefaultDelete<FSlowTask>_>,int>
            ((TUniquePtr<FSlowTask,TDefaultDelete<FSlowTask>_> *)
             (this->LegacyAPIScopes).AllocatorInstance.Data,(this->LegacyAPIScopes).ArrayNum);
  pFVar2 = (this->LegacyAPIScopes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ScopeStackSharedPtr).SharedReferenceCount.ReferenceController);
  if (*(void **)&this->ScopeStack != (void *)0x0) {
    FMemory::Free(*(void **)&this->ScopeStack);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->FinalizeSlowTaskWithGuidEvent).field_0x8,
             *(int *)&(this->FinalizeSlowTaskWithGuidEvent).field_0x10);
  pvVar3 = *(void **)&(this->FinalizeSlowTaskWithGuidEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->FinalizeSlowTaskWithGuidEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->StartSlowTaskWithGuidEvent).field_0x8,
             *(int *)&(this->StartSlowTaskWithGuidEvent).field_0x10);
  pvVar3 = *(void **)&(this->StartSlowTaskWithGuidEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->StartSlowTaskWithGuidEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->FinalizeSlowTaskEvent).field_0x8,
             *(int *)&(this->FinalizeSlowTaskEvent).field_0x10);
  pvVar3 = *(void **)&(this->FinalizeSlowTaskEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->FinalizeSlowTaskEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->StartSlowTaskEvent).field_0x8,*(int *)&(this->StartSlowTaskEvent).field_0x10);
  pvVar3 = *(void **)&(this->StartSlowTaskEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->StartSlowTaskEvent);
  pIVar4 = (this->TaskName).TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->WarningsAndErrorsCritical);
  DestructItems<FString,int>
            ((FString *)(this->Errors).AllocatorInstance.Data,(this->Errors).ArrayNum);
  pFVar2 = (this->Errors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>
            ((FString *)(this->Warnings).AllocatorInstance.Data,(this->Warnings).ArrayNum);
  pFVar2 = (this->Warnings).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7FOutputDevice__6B_;
  return;
}

// AddError @ 1418c6130

void __thiscall FFeedbackContext::AddError(FFeedbackContext *this,FString *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  lpCriticalSection = &this->WarningsAndErrorsCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar5 = (this->Errors).AllocatorInstance.Data;
  if ((pFVar5 <= param_1) && (param_1 < pFVar5 + (longlong)(this->Errors).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->Errors).ArrayNum;
  piVar1 = &(this->Errors).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->Errors).AllocatorInstance,piVar1);
  }
  (this->Errors).ArrayNum = iVar4 + 1;
  pFVar5 = (this->Errors).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar5 + 8) = (param_1->Data).ArrayNum;
  *(int *)(pFVar5 + 0xc) = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
                    /* WARNING: Could not recover jumptable at 0x0001418c621b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// AddRecordToHistory @ 1418c6d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FFeedbackContext::AddRecordToHistory(FFeedbackContext *this,FLogRecord *param_1)

{
  FString *pFVar1;
  ForAnyElementType FVar2;
  undefined1 auStack_4a8 [32];
  Type local_488 [8];
  FString local_480;
  FString local_470;
  FString local_460;
  TStringBuilderBase<wchar_t> local_448;
  wchar_t local_428 [512];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_4a8;
  local_448.Base = local_428;
  local_448.bIsDynamic = false;
  local_448.bIsExternal = false;
  local_448.CurPos = local_428;
  local_448.End = (wchar_t *)local_28;
  FormatRecordLine(this,&local_448,param_1,local_488);
  if (local_488[0] == Warning) {
    local_480.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_480.Data.ArrayNum = 0;
    local_480.Data.ArrayMax = 0;
    pFVar1 = ::FString::ConstructFromPtrSize
                       (&local_460,local_448.Base,
                        (int)((longlong)local_448.CurPos - (longlong)local_448.Base >> 1));
    if (&local_480 != pFVar1) {
      if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_480.Data.AllocatorInstance.Data);
      }
      local_480.Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_480.Data.ArrayNum = (pFVar1->Data).ArrayNum;
      local_480.Data.ArrayMax = (pFVar1->Data).ArrayMax;
      (pFVar1->Data).ArrayNum = 0;
      (pFVar1->Data).ArrayMax = 0;
    }
    if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_460.Data.AllocatorInstance.Data);
    }
    AddWarning(this,&local_480);
    FVar2.Data = local_480.Data.AllocatorInstance.Data;
  }
  else {
    if (local_488[0] != Error) goto LAB_1418c6ee6;
    local_470.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_470.Data.ArrayNum = 0;
    local_470.Data.ArrayMax = 0;
    pFVar1 = ::FString::ConstructFromPtrSize
                       (&local_460,local_448.Base,
                        (int)((longlong)local_448.CurPos - (longlong)local_448.Base >> 1));
    if (&local_470 != pFVar1) {
      if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_470.Data.AllocatorInstance.Data);
      }
      local_470.Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_470.Data.ArrayNum = (pFVar1->Data).ArrayNum;
      local_470.Data.ArrayMax = (pFVar1->Data).ArrayMax;
      (pFVar1->Data).ArrayNum = 0;
      (pFVar1->Data).ArrayMax = 0;
    }
    if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_460.Data.AllocatorInstance.Data);
    }
    AddError(this,&local_470);
    FVar2.Data = local_470.Data.AllocatorInstance.Data;
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
LAB_1418c6ee6:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_448);
  return;
}

// AddToHistory @ 1418c70e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FFeedbackContext::AddToHistory
          (FFeedbackContext *this,wchar_t *param_1,Type param_2,FName *param_3,double param_4)

{
  FString *pFVar1;
  ForAnyElementType FVar2;
  int iVar3;
  undefined1 auStackY_4d8 [32];
  Type local_498 [8];
  FString local_490;
  FString local_480;
  FString local_470;
  TStringBuilderBase<wchar_t> local_458;
  wchar_t local_438 [512];
  ulonglong local_38 [3];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  if (!GIsCriticalError) {
    local_458.Base = local_438;
    local_458.CurPos = local_438;
    local_458.End = (wchar_t *)local_38;
    local_458.bIsDynamic = false;
    local_458.bIsExternal = false;
    local_498[0] = param_2;
    FormatLine(this,&local_458,param_1,param_2,param_3,param_4,local_498);
    iVar3 = (int)((longlong)local_458.CurPos - (longlong)local_458.Base >> 1);
    if (local_498[0] == Error) {
      local_490.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_490.Data.ArrayNum = 0;
      local_490.Data.ArrayMax = 0;
      pFVar1 = ::FString::ConstructFromPtrSize(&local_470,local_458.Base,iVar3);
      if (&local_490 != pFVar1) {
        if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_490.Data.AllocatorInstance.Data);
        }
        local_490.Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
        (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_490.Data.ArrayNum = (pFVar1->Data).ArrayNum;
        local_490.Data.ArrayMax = (pFVar1->Data).ArrayMax;
        (pFVar1->Data).ArrayNum = 0;
        (pFVar1->Data).ArrayMax = 0;
      }
      if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_470.Data.AllocatorInstance.Data);
      }
      AddError(this,&local_490);
      FVar2.Data = local_490.Data.AllocatorInstance.Data;
    }
    else {
      local_480.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_480.Data.ArrayNum = 0;
      local_480.Data.ArrayMax = 0;
      pFVar1 = ::FString::ConstructFromPtrSize(&local_470,local_458.Base,iVar3);
      if (&local_480 != pFVar1) {
        if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_480.Data.AllocatorInstance.Data);
        }
        local_480.Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
        (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_480.Data.ArrayNum = (pFVar1->Data).ArrayNum;
        local_480.Data.ArrayMax = (pFVar1->Data).ArrayMax;
        (pFVar1->Data).ArrayNum = 0;
        (pFVar1->Data).ArrayMax = 0;
      }
      if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_470.Data.AllocatorInstance.Data);
      }
      AddWarning(this,&local_480);
      FVar2.Data = local_480.Data.AllocatorInstance.Data;
    }
    if (FVar2.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar2.Data);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_458);
  }
  return;
}

// AddWarning @ 1418c72f0

void __thiscall FFeedbackContext::AddWarning(FFeedbackContext *this,FString *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  lpCriticalSection = &this->WarningsAndErrorsCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar5 = (this->Warnings).AllocatorInstance.Data;
  if ((pFVar5 <= param_1) && (param_1 < pFVar5 + (longlong)(this->Warnings).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->Warnings).ArrayNum;
  piVar1 = &(this->Warnings).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->Warnings).AllocatorInstance,piVar1);
  }
  (this->Warnings).ArrayNum = iVar4 + 1;
  pFVar5 = (this->Warnings).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar5 + 8) = (param_1->Data).ArrayNum;
  *(int *)(pFVar5 + 0xc) = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
                    /* WARNING: Could not recover jumptable at 0x0001418c73db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// BeginSlowTask @ 1418c93b0

void __thiscall
FFeedbackContext::BeginSlowTask(FFeedbackContext *this,FText *param_1,bool param_2,bool param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSlowTask *this_00;
  TArray<TUniquePtr<FSlowTask,TDefaultDelete<FSlowTask>_>,TSizedDefaultAllocator<32>_> *pTVar6;
  FSlowTask *local_18 [2];
  
  bVar4 = IsInGameThread();
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<102339518656413908>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\FeedbackContext.cpp"
                       ,0xd4,"IsInGameThread()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = ::operator_new(0x60);
  local_18[0] = (FSlowTask *)0x0;
  if (this_00 != (FSlowTask *)0x0) {
    local_18[0] = FSlowTask::FSlowTask(this_00,0.0,param_1,true,this);
  }
  if (param_2) {
    FSlowTask::MakeDialogDelayed(local_18[0],__real_40400000,param_3,false);
  }
  FSlowTask::Initialize(local_18[0]);
  pTVar6 = &this->LegacyAPIScopes;
  pFVar2 = (pTVar6->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->LegacyAPIScopes).ArrayMax * 8)
     ) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->LegacyAPIScopes).ArrayNum;
  piVar1 = &(this->LegacyAPIScopes).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar6->AllocatorInstance,piVar1);
  }
  (this->LegacyAPIScopes).ArrayNum = iVar5 + 1;
  *(FSlowTask **)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_18[0];
  return;
}

// EndSlowTask @ 1418d7590

void __thiscall FFeedbackContext::EndSlowTask(FFeedbackContext *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  TArray<TUniquePtr<FSlowTask,TDefaultDelete<FSlowTask>_>,TSizedDefaultAllocator<32>_> *pTVar11;
  
  bVar6 = IsInGameThread();
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<102339518656413962>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\FeedbackContext.cpp"
                       ,0x10a,"IsInGameThread()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((this->LegacyAPIScopes).ArrayNum == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("LegacyAPIScopes.Num() != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\FeedbackContext.cpp"
                       ,0x10c,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar11 = &this->LegacyAPIScopes;
  iVar7 = (this->LegacyAPIScopes).ArrayNum;
  uVar10 = iVar7 - 1;
  uVar8 = 0;
  if ((int)uVar10 < iVar7) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FSlowTask::Destroy(*(FSlowTask **)
                      ((pTVar11->AllocatorInstance).Data +
                      (longlong)(this->LegacyAPIScopes).ArrayNum * 8 + -8));
  if ((this->LegacyAPIScopes).ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar2 = (pTVar11->AllocatorInstance).Data;
  lVar9 = (longlong)(this->LegacyAPIScopes).ArrayNum;
  plVar3 = *(longlong **)(pFVar2 + lVar9 * 8 + -8);
  *(undefined8 *)(pFVar2 + lVar9 * 8 + -8) = 0;
  iVar7 = (this->LegacyAPIScopes).ArrayNum;
  pFVar2 = (pTVar11->AllocatorInstance).Data;
  plVar4 = *(longlong **)(pFVar2 + (longlong)iVar7 * 8 + -8);
  pFVar2 = pFVar2 + (longlong)iVar7 * 8;
  if (plVar4 != (longlong *)0x0) {
    if ((longlong *)plVar4[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar4[2] + 0x10))();
    }
    if ((longlong *)*plVar4 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar4 + 0x10))();
    }
    ::operator_delete(plVar4,0x60);
  }
  iVar7 = (this->LegacyAPIScopes).ArrayNum - iVar7;
  if (iVar7 != 0) {
    memmove(pFVar2 + -8,pFVar2,(longlong)iVar7 << 3);
  }
  piVar1 = &(this->LegacyAPIScopes).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&pTVar11->AllocatorInstance,(this->LegacyAPIScopes).ArrayNum,
             &(this->LegacyAPIScopes).ArrayMax);
  if (plVar3 != (longlong *)0x0) {
    if ((longlong *)plVar3[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar3[2] + 0x10))();
    }
    if ((longlong *)*plVar3 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar3 + 0x10))();
    }
    ::operator_delete(plVar3,0x60);
  }
  return;
}

// FormatLine @ 1418db3d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FFeedbackContext::FormatLine
          (FFeedbackContext *this,TStringBuilderBase<wchar_t> *param_1,wchar_t *param_2,Type param_3
          ,FName *param_4,double param_5,Type *param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  TStringBuilderBase<wchar_t> *this_00;
  wchar_t *_Str;
  size_t sVar3;
  int iVar4;
  int iVar5;
  void *local_18 [2];
  
  if (param_3 == Error) {
    if ((this->TreatErrorsAsWarnings != false) && (!GIsCriticalError)) {
      param_3 = Warning;
    }
  }
  else if ((param_3 == Warning) && (this->TreatWarningsAsErrors != false)) {
    param_3 = Error;
  }
  if (param_6 != (Type *)0x0) {
    *param_6 = param_3;
  }
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x88))();
  iVar4 = 0;
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,local_18);
    iVar5 = *(int *)(puVar2 + 1) + -1;
    if (*(int *)(puVar2 + 1) == 0) {
      iVar5 = 0;
    }
    this_00 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,(wchar_t *)*puVar2,iVar5);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(this_00,L" : ",3);
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  if ((GPrintLogCategory == false) || (*param_4 == (FName)0x0)) {
    if ((GPrintLogVerbosity == false) || (param_3 == Log)) goto LAB_1418db524;
    _Str = ::ToString(param_3);
    if (_Str != (wchar_t *)0x0) {
      sVar3 = wcslen(_Str);
      iVar4 = (int)sVar3;
    }
  }
  else {
    ::FName::AppendString(param_4,param_1);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L": ",2);
    if ((GPrintLogVerbosity == false) || (param_3 == Log)) goto LAB_1418db524;
    _Str = ::ToString(param_3);
    if (_Str != (wchar_t *)0x0) {
      sVar3 = wcslen(_Str);
      iVar4 = (int)sVar3;
    }
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,_Str,iVar4);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L": ",2);
LAB_1418db524:
  if (param_2 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_2);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,param_2,(int)sVar3);
  }
  return;
}

// FormatRecordLine @ 1418db670

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FFeedbackContext::FormatRecordLine
          (FFeedbackContext *this,TStringBuilderBase<wchar_t> *param_1,FLogRecord *param_2,
          Type *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  TStringBuilderBase<wchar_t> *this_00;
  wchar_t *_Str;
  size_t sVar3;
  Type TVar4;
  int iVar5;
  int iVar6;
  void *local_18 [2];
  
  TVar4 = param_2->Verbosity;
  if (TVar4 == Error) {
    if ((this->TreatErrorsAsWarnings != false) && (!GIsCriticalError)) {
      TVar4 = Warning;
    }
  }
  else if ((TVar4 == Warning) && (this->TreatWarningsAsErrors != false)) {
    TVar4 = Error;
  }
  if (param_3 != (Type *)0x0) {
    *param_3 = TVar4;
  }
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x88))();
  iVar5 = 0;
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,local_18);
    iVar6 = *(int *)(puVar2 + 1) + -1;
    if (*(int *)(puVar2 + 1) == 0) {
      iVar6 = 0;
    }
    this_00 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,(wchar_t *)*puVar2,iVar6);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(this_00,L" : ",3);
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  if ((GPrintLogCategory == false) || (param_2->Category == (FName)0x0)) {
    if ((GPrintLogVerbosity == false) || (TVar4 == Log)) goto LAB_1418db7bf;
    _Str = ::ToString(TVar4);
    if (_Str != (wchar_t *)0x0) {
      sVar3 = wcslen(_Str);
      iVar5 = (int)sVar3;
    }
  }
  else {
    ::FName::AppendString(&param_2->Category,param_1);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L": ",2);
    if ((GPrintLogVerbosity == false) || (TVar4 == Log)) goto LAB_1418db7bf;
    _Str = ::ToString(TVar4);
    if (_Str != (wchar_t *)0x0) {
      sVar3 = wcslen(_Str);
      iVar5 = (int)sVar3;
    }
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,_Str,iVar5);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L": ",2);
LAB_1418db7bf:
  UE::FLogRecord::FormatMessageTo(param_2,param_1);
  return;
}

// IsPlayingInEditor @ 1418e3500

bool __thiscall FFeedbackContext::IsPlayingInEditor(FFeedbackContext *this)

{
  return GIsPlayInEditorWorld;
}

// RequestUpdateUI @ 1418f2fe0

void __thiscall FFeedbackContext::RequestUpdateUI(FFeedbackContext *this,bool param_1)

{
  double dVar1;
  LARGE_INTEGER local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      QueryPerformanceCounter(local_res18);
      LastUIUpdateTime =
           (double)local_res18[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
      _Init_thread_footer(&::_TSS0);
    }
  }
  QueryPerformanceCounter(local_res18);
  dVar1 = (double)local_res18[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  if ((param_1) || (MinUpdateTimeS < dVar1 - LastUIUpdateTime)) {
    LastUIUpdateTime = dVar1;
    UpdateUI(this);
  }
  return;
}

// ResolveVerbosity @ 1418f3370

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall FFeedbackContext::ResolveVerbosity(FFeedbackContext *this,Type param_1)

{
  Type TVar1;
  
  if (param_1 == Error) {
    if (this->TreatErrorsAsWarnings != false) {
      TVar1 = Error;
      if (!GIsCriticalError) {
        TVar1 = Warning;
      }
      return TVar1;
    }
  }
  else if (param_1 == Warning) {
    TVar1 = Warning;
    if (this->TreatWarningsAsErrors != false) {
      TVar1 = Error;
    }
    return TVar1;
  }
  return param_1;
}

// Serialize @ 1418f4b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FFeedbackContext::Serialize(FFeedbackContext *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  double dVar1;
  bool bVar2;
  FOutputDeviceRedirector *pFVar3;
  FOutputDeviceRedirector *this_00;
  
  dVar1 = __real_bff0000000000000;
  if (param_2 == Error) {
    if ((this->TreatErrorsAsWarnings != false) && (!GIsCriticalError)) {
      param_2 = Warning;
    }
  }
  else if ((param_2 == Warning) && (this->TreatWarningsAsErrors != false)) {
    param_2 = Error;
  }
  this_00 = (FOutputDeviceRedirector *)0x0;
  if (PRIVATE_GIsRunningCommandlet) {
    if ((byte)(param_2 - Error) < 2) {
      AddToHistory(this,param_1,param_2,param_3,__real_bff0000000000000);
    }
    if (GLogConsole != (FOutputDeviceConsole *)0x0) {
      pFVar3 = this_00;
      if (GWasGLogDestroyed == false) {
        pFVar3 = FOutputDeviceRedirector::Get();
      }
      bVar2 = FOutputDeviceRedirector::IsRedirectingTo(pFVar3,(FOutputDevice *)GLogConsole);
      if (!bVar2) {
        (**(code **)(GLogConsole->_padding_ + 0x10))(GLogConsole,param_1,param_2,param_3);
      }
    }
  }
  pFVar3 = this_00;
  if (GWasGLogDestroyed == false) {
    pFVar3 = FOutputDeviceRedirector::Get();
  }
  bVar2 = FOutputDeviceRedirector::IsRedirectingTo(pFVar3,(FOutputDevice *)this);
  if (!bVar2) {
    if (GWasGLogDestroyed == false) {
      this_00 = FOutputDeviceRedirector::Get();
    }
    FOutputDeviceRedirector::Serialize(this_00,param_1,param_2,param_3,dVar1);
  }
  return;
}

// Serialize @ 1418f4c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FFeedbackContext::Serialize
          (FFeedbackContext *this,wchar_t *param_1,Type param_2,FName *param_3,double param_4)

{
  bool bVar1;
  FOutputDeviceRedirector *pFVar2;
  FOutputDeviceRedirector *this_00;
  
  if (param_2 == Error) {
    if ((this->TreatErrorsAsWarnings != false) && (!GIsCriticalError)) {
      param_2 = Warning;
    }
  }
  else if ((param_2 == Warning) && (this->TreatWarningsAsErrors != false)) {
    param_2 = Error;
  }
  this_00 = (FOutputDeviceRedirector *)0x0;
  if (PRIVATE_GIsRunningCommandlet) {
    if ((byte)(param_2 - Error) < 2) {
      AddToHistory(this,param_1,param_2,param_3,param_4);
    }
    if (GLogConsole != (FOutputDeviceConsole *)0x0) {
      pFVar2 = this_00;
      if (GWasGLogDestroyed == false) {
        pFVar2 = FOutputDeviceRedirector::Get();
      }
      bVar1 = FOutputDeviceRedirector::IsRedirectingTo(pFVar2,(FOutputDevice *)GLogConsole);
      if (!bVar1) {
        (**(code **)(GLogConsole->_padding_ + 8))(GLogConsole,param_1,param_2,param_3,param_4);
      }
    }
  }
  pFVar2 = this_00;
  if (GWasGLogDestroyed == false) {
    pFVar2 = FOutputDeviceRedirector::Get();
  }
  bVar1 = FOutputDeviceRedirector::IsRedirectingTo(pFVar2,(FOutputDevice *)this);
  if (!bVar1) {
    if (GWasGLogDestroyed == false) {
      this_00 = FOutputDeviceRedirector::Get();
    }
    FOutputDeviceRedirector::Serialize(this_00,param_1,param_2,param_3,param_4);
  }
  return;
}

// SerializeRecord @ 1418f7200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FFeedbackContext::SerializeRecord(FFeedbackContext *this,FLogRecord *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FOutputDeviceRedirector *pFVar4;
  FOutputDeviceRedirector *this_00;
  ForAnyElementType FVar5;
  FLogRecord *pFVar6;
  Type TVar7;
  undefined1 auStack_518 [32];
  Type local_4f8 [8];
  FString local_4f0;
  FString local_4e0;
  undefined1 local_4c8 [88];
  char local_470;
  FString local_468;
  FString local_458;
  TStringBuilderBase<wchar_t> local_448;
  wchar_t local_428 [512];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_518;
  TVar7 = param_1->Verbosity;
  if (TVar7 == Error) {
    if ((this->TreatErrorsAsWarnings == false) || (GIsCriticalError)) goto LAB_1418f72b1;
    TVar7 = Warning;
LAB_1418f7261:
    local_470 = '\0';
    local_4c8[0x1c] = TVar7;
    if (param_1 == (FLogRecord *)local_4c8) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      UE::FLogRecord::FLogRecord((FLogRecord *)local_4c8,param_1);
      local_470 = '\x01';
    }
  }
  else {
    if ((TVar7 == Warning) && (this->TreatWarningsAsErrors != false)) {
      TVar7 = Error;
      goto LAB_1418f7261;
    }
LAB_1418f72b1:
    local_470 = '\0';
  }
  this_00 = (FOutputDeviceRedirector *)0x0;
  if (PRIVATE_GIsRunningCommandlet == false) goto LAB_1418f7474;
  if ((byte)(TVar7 - Error) < 2) {
    local_448.Base = local_428;
    local_448.CurPos = local_428;
    local_448.bIsDynamic = false;
    local_448.bIsExternal = false;
    local_448.End = (wchar_t *)local_28;
    pFVar6 = (FLogRecord *)local_4c8;
    if (local_470 == '\0') {
      pFVar6 = param_1;
    }
    FormatRecordLine(this,&local_448,pFVar6,local_4f8);
    if (local_4f8[0] == Warning) {
      local_4f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4f0.Data.ArrayNum = 0;
      local_4f0.Data.ArrayMax = 0;
      pFVar3 = ::FString::ConstructFromPtrSize
                         (&local_468,local_448.Base,
                          (int)((longlong)local_448.CurPos - (longlong)local_448.Base >> 1));
      if (&local_4f0 != pFVar3) {
        if (local_4f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4f0.Data.AllocatorInstance.Data);
        }
        local_4f0.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
        (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4f0.Data.ArrayNum = (pFVar3->Data).ArrayNum;
        local_4f0.Data.ArrayMax = (pFVar3->Data).ArrayMax;
        (pFVar3->Data).ArrayNum = 0;
        (pFVar3->Data).ArrayMax = 0;
      }
      if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_468.Data.AllocatorInstance.Data);
      }
      AddWarning(this,&local_4f0);
      FVar5.Data = local_4f0.Data.AllocatorInstance.Data;
LAB_1418f7417:
      if (FVar5.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar5.Data);
      }
    }
    else if (local_4f8[0] == Error) {
      local_4e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4e0.Data.ArrayNum = 0;
      local_4e0.Data.ArrayMax = 0;
      pFVar3 = ::FString::ConstructFromPtrSize
                         (&local_458,local_448.Base,
                          (int)((longlong)local_448.CurPos - (longlong)local_448.Base >> 1));
      if (&local_4e0 != pFVar3) {
        if (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
        }
        local_4e0.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
        (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4e0.Data.ArrayNum = (pFVar3->Data).ArrayNum;
        local_4e0.Data.ArrayMax = (pFVar3->Data).ArrayMax;
        (pFVar3->Data).ArrayNum = 0;
        (pFVar3->Data).ArrayMax = 0;
      }
      if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_458.Data.AllocatorInstance.Data);
      }
      AddError(this,&local_4e0);
      FVar5.Data = local_4e0.Data.AllocatorInstance.Data;
      goto LAB_1418f7417;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_448);
  }
  if (GLogConsole != (FOutputDeviceConsole *)0x0) {
    pFVar4 = this_00;
    if (GWasGLogDestroyed == false) {
      pFVar4 = FOutputDeviceRedirector::Get();
    }
    bVar2 = FOutputDeviceRedirector::IsRedirectingTo(pFVar4,(FOutputDevice *)GLogConsole);
    if (!bVar2) {
      pFVar6 = (FLogRecord *)local_4c8;
      if (local_470 == '\0') {
        pFVar6 = param_1;
      }
      (**(code **)(GLogConsole->_padding_ + 0x18))(GLogConsole,pFVar6);
    }
  }
LAB_1418f7474:
  pFVar4 = this_00;
  if (GWasGLogDestroyed == false) {
    pFVar4 = FOutputDeviceRedirector::Get();
  }
  bVar2 = FOutputDeviceRedirector::IsRedirectingTo(pFVar4,(FOutputDevice *)this);
  if (!bVar2) {
    if (GWasGLogDestroyed == false) {
      this_00 = FOutputDeviceRedirector::Get();
    }
    pFVar6 = (FLogRecord *)local_4c8;
    if (local_470 == '\0') {
      pFVar6 = param_1;
    }
    FOutputDeviceRedirector::SerializeRecord(this_00,pFVar6);
  }
  if (local_470 != '\0') {
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_4c8 + 0x38));
  }
  return;
}

// StatusForceUpdate @ 1418f9720

void __thiscall
FFeedbackContext::StatusForceUpdate(FFeedbackContext *this,int param_1,int param_2,FText *param_3)

{
  int iVar1;
  longlong lVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  bVar6 = IsInGameThread();
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<102339518656413950>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\FeedbackContext.cpp"
                       ,0xfe,"IsInGameThread()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((this->LegacyAPIScopes).ArrayNum != 0) {
    UpdateProgress(this,param_1,param_2);
    iVar1 = (this->LegacyAPIScopes).ArrayNum;
    uVar8 = iVar1 - 1;
    uVar7 = 0;
    if ((int)uVar8 < iVar1) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar2 = *(longlong *)
             ((this->LegacyAPIScopes).AllocatorInstance.Data +
             (longlong)(this->LegacyAPIScopes).ArrayNum * 8 + -8);
    pIVar3 = (param_3->TextData).Reference;
    pIVar4 = *(ITextData **)(lVar2 + 0x10);
    if (pIVar4 != pIVar3) {
      *(ITextData **)(lVar2 + 0x10) = pIVar3;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
      }
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
      }
    }
    *(uint *)(lVar2 + 0x18) = param_3->Flags;
    UpdateUI(this);
  }
  return;
}

// StatusUpdate @ 1418f9850

void __thiscall
FFeedbackContext::StatusUpdate(FFeedbackContext *this,int param_1,int param_2,FText *param_3)

{
  int iVar1;
  longlong lVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  double dVar10;
  undefined1 local_res8 [8];
  LARGE_INTEGER local_18;
  LARGE_INTEGER local_10;
  
  bVar6 = IsInGameThread();
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<102339518656413935>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\FeedbackContext.cpp"
                       ,0xef,"IsInGameThread()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((this->LegacyAPIScopes).ArrayNum != 0) {
    if ((0 < param_1) && (0 < param_2)) {
      UpdateProgress(this,param_1,param_2);
    }
    iVar1 = (this->LegacyAPIScopes).ArrayNum;
    uVar9 = iVar1 - 1;
    uVar7 = 0;
    if ((int)uVar9 < iVar1) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar2 = *(longlong *)
             ((this->LegacyAPIScopes).AllocatorInstance.Data +
             (longlong)(this->LegacyAPIScopes).ArrayNum * 8 + -8);
    pIVar3 = (param_3->TextData).Reference;
    pIVar4 = *(ITextData **)(lVar2 + 0x10);
    if (pIVar4 != pIVar3) {
      *(ITextData **)(lVar2 + 0x10) = pIVar3;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
      }
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
      }
    }
    uVar8 = (ulonglong)_tls_index;
    *(uint *)(lVar2 + 0x18) = param_3->Flags;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0x9d4c) < ::_TSS0)
    {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        QueryPerformanceCounter(&local_18);
        LastUIUpdateTime =
             (double)local_18.QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000;
        _Init_thread_footer(&::_TSS0);
      }
    }
    QueryPerformanceCounter(&local_10);
    dVar10 = (double)local_10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000;
    if (MinUpdateTimeS < dVar10 - LastUIUpdateTime) {
      LastUIUpdateTime = dVar10;
      UpdateUI(this);
    }
  }
  return;
}

// UpdateProgress @ 1418fe640

void __thiscall FFeedbackContext::UpdateProgress(FFeedbackContext *this,int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<102339518656413922>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\FeedbackContext.cpp"
                       ,0xe2,"IsInGameThread()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = (this->LegacyAPIScopes).ArrayNum;
  if (iVar1 != 0) {
    uVar4 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar4 = ~(iVar1 - 1U) >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(float *)(*(longlong *)
                ((this->LegacyAPIScopes).AllocatorInstance.Data +
                (longlong)(this->LegacyAPIScopes).ArrayNum * 8 + -8) + 0x20) = (float)param_2;
    iVar1 = (this->LegacyAPIScopes).ArrayNum;
    uVar5 = iVar1 - 1;
    uVar4 = 0;
    if ((int)uVar5 < iVar1) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(float *)(*(longlong *)
                ((this->LegacyAPIScopes).AllocatorInstance.Data +
                (longlong)(this->LegacyAPIScopes).ArrayNum * 8 + -8) + 0x24) = (float)param_1;
    iVar1 = (this->LegacyAPIScopes).ArrayNum;
    uVar5 = iVar1 - 1;
    uVar4 = 0;
    if ((int)uVar5 < iVar1) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(float *)(*(longlong *)
                ((this->LegacyAPIScopes).AllocatorInstance.Data +
                (longlong)(this->LegacyAPIScopes).ArrayNum * 8 + -8) + 0x28) =
         (float)(param_2 - param_1);
    iVar1 = (this->LegacyAPIScopes).ArrayNum;
    uVar5 = iVar1 - 1;
    uVar4 = 0;
    if ((int)uVar5 < iVar1) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FSlowTask::TickProgress
              (*(FSlowTask **)
                ((this->LegacyAPIScopes).AllocatorInstance.Data +
                (longlong)(this->LegacyAPIScopes).ArrayNum * 8 + -8));
  }
  return;
}

// UpdateUI @ 1418feb60

void __thiscall FFeedbackContext::UpdateUI(FFeedbackContext *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  float fVar5;
  ITextData *local_18;
  uint local_10;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<102339518656413897>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\FeedbackContext.cpp"
                       ,0xc9,"IsInGameThread()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = *(int *)&(this->ScopeStack).field_0x8;
  if (iVar1 != 0) {
    pcVar2 = *(code **)(this->_padding_ + 0x78);
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar4 = FSlowTask::GetCurrentMessage((FSlowTask *)**(undefined8 **)&this->ScopeStack);
    local_18 = (pFVar4->TextData).Reference;
    if (local_18 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18 + 8))();
    }
    local_10 = pFVar4->Flags;
    fVar5 = FSlowTaskStack::GetProgressFraction(&this->ScopeStack,0);
    (*pcVar2)(this,fVar5,&local_18);
  }
  return;
}

// YesNof @ 141900920

bool __thiscall FFeedbackContext::YesNof(FFeedbackContext *this,FText *param_1)

{
  bool bVar1;
  FString *pFVar2;
  
  if (!GIsSilent) {
    bVar1 = FApp::IsUnattended();
    if (!bVar1) {
      pFVar2 = FText::ToString(param_1);
      if ((pFVar2->Data).ArrayNum != 0) {
        FGenericPlatformMisc::LowLevelOutputDebugString
                  ((wchar_t *)(pFVar2->Data).AllocatorInstance.Data);
        return false;
      }
      FGenericPlatformMisc::LowLevelOutputDebugString(L"");
    }
  }
  return false;
}

// operator() @ 15047e210

bool __thiscall `FFeedbackContext::~FFeedbackContext'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<102339518656413717>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<102339518656413717>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

