// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 16

// FSlowTask @ 141917bf0

FSlowTask * __thiscall
FSlowTask::FSlowTask
          (FSlowTask *this,float param_1,FText *param_2,bool param_3,FFeedbackContext *param_4)

{
  ITextData *pIVar1;
  bool bVar2;
  double dVar3;
  LARGE_INTEGER local_res8;
  undefined1 local_res20 [8];
  
  (this->DefaultMessage).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_2->TextData).Reference;
  (this->DefaultMessage).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res20);
  }
  (this->DefaultMessage).Flags = param_2->Flags;
  FText::FText(&this->FrameMessage);
  this->TotalAmountOfWork = param_1;
  this->CompletedWork = 0.0;
  this->CurrentFrameScope = 0.0;
  this->Visibility = Default;
  QueryPerformanceCounter(&local_res8);
  dVar3 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  (this->OpenDialogThreshold).bIsSet = false;
  this->StartTime = dVar3 + __real_4170000000000000;
  if (param_3) {
    bVar2 = IsInGameThread();
    if (bVar2) {
      bVar2 = true;
      goto LAB_141917c86;
    }
  }
  bVar2 = false;
LAB_141917c86:
  this->bSkipRecursiveDialogCreation = false;
  this->bEnabled = bVar2;
  this->Context = param_4;
  this->bCreatedDialog = false;
  this->RegionId = 0;
  if (this->TotalAmountOfWork == 0.0) {
    this->CurrentFrameScope = 1.0;
    this->TotalAmountOfWork = 1.0;
  }
  return this;
}

// Destroy @ 1419331f0

void __thiscall FSlowTask::Destroy(FSlowTask *this)

{
  undefined1 *puVar1;
  int iVar2;
  FFeedbackContext *pFVar3;
  longlong *plVar4;
  FSlowTask *this_00;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  void *_Dst;
  uint uVar8;
  uint uVar9;
  void *_Src;
  longlong *plVar10;
  FSlowTask *local_res8;
  FSlowTask *local_28;
  FSlowTask **local_20;
  
  if (this->bEnabled == false) {
    return;
  }
  if (this->bCreatedDialog != false) {
    pFVar3 = this->Context;
    FFeedbackContext::RequestUpdateUI(pFVar3,true);
    FFeedbackContext::RequestUpdateUI(pFVar3,true);
    (**(code **)(this->Context->_padding_ + 0x70))();
  }
  pFVar3 = this->Context;
  iVar7 = *(int *)&(pFVar3->ScopeStack).field_0x8;
  if (iVar7 == 0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4967730363360083832>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\SlowTask.cpp"
                       ,0x88,"Stack.Num() != 0");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    goto LAB_141933480;
  }
  if ((iVar7 <= GSlowTaskMaxTraceRegionDepth) && (this->RegionId != 0)) {
    FMiscTrace::OutputEndRegionWithId(this->RegionId);
  }
  iVar7 = *(int *)&(pFVar3->ScopeStack).field_0x8;
  uVar8 = iVar7 - 1;
  uVar9 = 0;
  if ((int)uVar8 < iVar7) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_res8 = *(FSlowTask **)
                (*(longlong *)&pFVar3->ScopeStack + -8 +
                (longlong)*(int *)&(pFVar3->ScopeStack).field_0x8 * 8);
  if (GIsRequestingExit == false) {
    if (local_res8 != this) {
      local_20 = &local_res8;
      local_28 = this;
      bVar6 = `FSlowTask::Destroy'::__l19::<lambda_1>::operator()(&local_28);
      if (!bVar6) goto LAB_14193339f;
    }
    if ((*(int *)&(pFVar3->ScopeStack).field_0x8 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = *(int *)&(pFVar3->ScopeStack).field_0x8;
    uVar9 = iVar7 - 1;
    _Dst = (void *)(*(longlong *)&pFVar3->ScopeStack + (longlong)(int)uVar9 * 8);
    iVar7 = ~uVar9 + iVar7;
    if (iVar7 != 0) {
      _Src = (void *)((longlong)_Dst + 8);
LAB_141933471:
      memmove(_Dst,_Src,(longlong)iVar7 << 3);
    }
LAB_14193347a:
    puVar1 = &(pFVar3->ScopeStack).field_0x8;
    *(int *)puVar1 = *(int *)puVar1 + -1;
  }
  else {
LAB_14193339f:
    plVar4 = *(longlong **)&pFVar3->ScopeStack;
    iVar7 = *(int *)&(pFVar3->ScopeStack).field_0x8;
    for (plVar10 = plVar4; plVar10 != plVar4 + iVar7; plVar10 = plVar10 + 1) {
      if ((FSlowTask *)*plVar10 == this) {
        uVar9 = (uint)((longlong)plVar10 - (longlong)plVar4 >> 3);
        if (uVar9 != 0xffffffff) {
          uVar8 = 0;
          if ((int)(uVar9 + 1) <= iVar7) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar2 = *(int *)&(pFVar3->ScopeStack).field_0x8;
          iVar7 = iVar2 + ~uVar9;
          if (1 < iVar7) {
            iVar7 = 1;
          }
          if (iVar7 == 0) goto LAB_14193347a;
          _Src = (void *)(*(longlong *)&pFVar3->ScopeStack + (longlong)(iVar2 - iVar7) * 8);
          _Dst = (void *)(*(longlong *)&pFVar3->ScopeStack + (longlong)(int)uVar9 * 8);
          goto LAB_141933471;
        }
        break;
      }
    }
  }
LAB_141933480:
  iVar7 = *(int *)&(pFVar3->ScopeStack).field_0x8;
  if (iVar7 != 0) {
    uVar9 = 0;
    if ((int)(iVar7 - 1U) < iVar7) {
      uVar9 = ~(iVar7 - 1U) >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_00 = *(FSlowTask **)
               (*(longlong *)&pFVar3->ScopeStack + -8 +
               (longlong)*(int *)&(pFVar3->ScopeStack).field_0x8 * 8);
    EnterProgressFrame(this_00,0.0,&this_00->FrameMessage);
    FFeedbackContext::RequestUpdateUI(this_00->Context,false);
  }
  return;
}

// EnterProgressFrame @ 141937cb0

void __thiscall FSlowTask::EnterProgressFrame(FSlowTask *this,float param_1,FText *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  FFeedbackContext *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  
  if (this->bEnabled != false) {
    bVar5 = IsInGameThread();
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\SlowTask.cpp"
                           ,0xb5,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = FText::IsEmpty(param_2);
    if (bVar5) {
      param_2 = FText::GetEmpty();
    }
    FText::operator=(&this->FrameMessage,param_2);
    fVar9 = this->CompletedWork + this->CurrentFrameScope;
    fVar8 = this->TotalAmountOfWork;
    fVar7 = fVar8 * __real_3f8147ae;
    this->CompletedWork = fVar9;
    if (fVar7 - fVar9 < param_1) {
      local_res8[0] = 0;
      `FSlowTask::EnterProgressFrame'::__l5::<lambda_1>::operator()(local_res8);
    }
    fVar8 = fVar8 - fVar9;
    if (param_1 <= fVar8) {
      fVar8 = param_1;
    }
    this->CurrentFrameScope = fVar8;
    if (this->bEnabled != false) {
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\SlowTask.cpp"
                             ,0xcf,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (this->bEnabled != false) {
        if (this->bSkipRecursiveDialogCreation) {
          MakeDialogIfNeeded(this);
        }
        else {
          pFVar3 = this->Context;
          this->field_0x50 = this->field_0x50 | 4;
          puVar6 = *(undefined8 **)&pFVar3->ScopeStack;
          iVar2 = *(int *)&(pFVar3->ScopeStack).field_0x8;
          puVar1 = puVar6 + iVar2;
          while( true ) {
            if (*(int *)&(pFVar3->ScopeStack).field_0x8 != iVar2) {
              `TCheckedPointerIterator<FSlowTask_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res20);
            }
            if (puVar6 == puVar1) break;
            bVar5 = MakeDialogIfNeeded((FSlowTask *)*puVar6);
            if (bVar5) {
              this->bSkipRecursiveDialogCreation = false;
            }
            puVar6 = puVar6 + 1;
          }
        }
      }
      FFeedbackContext::RequestUpdateUI(this->Context,false);
    }
  }
  return;
}

// ForceRefresh @ 14193fab0

void __cdecl FSlowTask::ForceRefresh(FFeedbackContext *param_1)

{
  FFeedbackContext::RequestUpdateUI(param_1,true);
  FFeedbackContext::RequestUpdateUI(param_1,true);
  return;
}

// ForceRefresh @ 14193fae0

void __thiscall FSlowTask::ForceRefresh(FSlowTask *this)

{
  FFeedbackContext *this_00;
  
  if (this->bEnabled != false) {
    this_00 = this->Context;
    FFeedbackContext::RequestUpdateUI(this_00,true);
    FFeedbackContext::RequestUpdateUI(this_00,true);
    return;
  }
  return;
}

// GetCurrentMessage @ 141946200

FText * __thiscall FSlowTask::GetCurrentMessage(FSlowTask *this)

{
  bool bVar1;
  
  bVar1 = FText::IsEmpty(&this->FrameMessage);
  if (!bVar1) {
    this = (FSlowTask *)&this->FrameMessage;
  }
  return &this->DefaultMessage;
}

// Initialize @ 141950350

void __thiscall FSlowTask::Initialize(FSlowTask *this)

{
  undefined1 *puVar1;
  FFeedbackContext *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  ulong64 uVar7;
  FSlowTaskStack *pFVar8;
  FSlowTask *local_18 [2];
  
  if (this->bEnabled != false) {
    pFVar2 = this->Context;
    pFVar8 = &pFVar2->ScopeStack;
    local_18[0] = this;
    if ((*(FSlowTask ***)pFVar8 <= local_18) &&
       (local_18 < *(FSlowTask ***)pFVar8 + *(int *)&(pFVar2->ScopeStack).field_0xc)) {
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
    iVar5 = *(int *)&(pFVar2->ScopeStack).field_0x8;
    puVar1 = &(pFVar2->ScopeStack).field_0xc;
    if (iVar5 == *(int *)puVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)pFVar8,(int *)puVar1);
    }
    *(int *)&(pFVar2->ScopeStack).field_0x8 = iVar5 + 1;
    *(FSlowTask **)(*(longlong *)pFVar8 + (longlong)iVar5 * 8) = local_18[0];
    if (*(int *)&(this->Context->ScopeStack).field_0x8 <= GSlowTaskMaxTraceRegionDepth) {
      bVar4 = FText::IsEmpty(&this->DefaultMessage);
      if (!bVar4) {
        pFVar6 = FText::ToString(&this->DefaultMessage);
        if ((pFVar6->Data).ArrayNum != 0) {
          uVar7 = FMiscTrace::OutputBeginRegionWithId
                            ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,(wchar_t *)0x0);
          this->RegionId = uVar7;
          return;
        }
        uVar7 = FMiscTrace::OutputBeginRegionWithId(L"",(wchar_t *)0x0);
        this->RegionId = uVar7;
        return;
      }
      uVar7 = FMiscTrace::OutputBeginRegionWithId(L"<SlowTask>",(wchar_t *)0x0);
      this->RegionId = uVar7;
    }
  }
  return;
}

// MakeDialog @ 1419551d0

void __thiscall FSlowTask::MakeDialog(FSlowTask *this,bool param_1,bool param_2)

{
  FFeedbackContext *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FSlowTask *pFVar5;
  
  if (this->bEnabled != false) {
    bVar3 = IsInGameThread();
    if ((bVar3) && (GIsSilent == false)) {
      cVar4 = (**(code **)(this->Context->_padding_ + 0x80))();
      if (((cVar4 == '\0') || (param_2)) &&
         (((PRIVATE_GIsRunningCommandlet == false && (this->Visibility != Invisible)) &&
          (GIsSlowTask == false)))) {
        pFVar1 = this->Context;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x68);
        bVar3 = FText::IsEmpty(&this->FrameMessage);
        pFVar5 = this;
        if (!bVar3) {
          pFVar5 = (FSlowTask *)&this->FrameMessage;
        }
        (*pcVar2)(pFVar1,pFVar5,param_1);
        if (GIsSlowTask != false) {
          pFVar1 = this->Context;
          this->bCreatedDialog = true;
          FFeedbackContext::RequestUpdateUI(pFVar1,true);
          FFeedbackContext::RequestUpdateUI(pFVar1,true);
        }
      }
    }
  }
  return;
}

// MakeDialogDelayed @ 1419552c0

void __thiscall
FSlowTask::MakeDialogDelayed(FSlowTask *this,float param_1,bool param_2,bool param_3)

{
  undefined1 local_res10 [24];
  
  if ((TOptional<float> *)local_res10 != &this->OpenDialogThreshold) {
    (this->OpenDialogThreshold).TypedValue = param_1;
    (this->OpenDialogThreshold).bIsSet = true;
  }
  this->bDelayedDialogShowCancelButton = false;
  this->field_0x50 = param_2 | this->field_0x50 & 0xfd | param_3 * '\x02';
  return;
}

// MakeDialogIfNeeded @ 141955300

bool __thiscall FSlowTask::MakeDialogIfNeeded(FSlowTask *this)

{
  FFeedbackContext *pFVar1;
  code *pcVar2;
  double dVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  FSlowTask *pFVar8;
  LARGE_INTEGER local_res8;
  
  if (((this->bEnabled != false) && (this->bCreatedDialog == false)) &&
     ((this->OpenDialogThreshold).bIsSet != false)) {
    QueryPerformanceCounter(&local_res8);
    dVar3 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if (((this->OpenDialogThreshold).bIsSet == false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    if ((float)(dVar3 - this->StartTime) < (this->OpenDialogThreshold).TypedValue) {
      return true;
    }
    if (((this->bEnabled != false) && (bVar5 = IsInGameThread(), bVar5)) && (GIsSilent == false)) {
      cVar7 = (**(code **)(this->Context->_padding_ + 0x80))();
      if ((((cVar7 == '\0') || (this->bDelayedDialogAllowInPIE)) &&
          (PRIVATE_GIsRunningCommandlet == false)) &&
         ((this->Visibility != Invisible && (GIsSlowTask == false)))) {
        pFVar1 = this->Context;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x68);
        bVar5 = FText::IsEmpty(&this->FrameMessage);
        pFVar8 = this;
        if (!bVar5) {
          pFVar8 = (FSlowTask *)&this->FrameMessage;
        }
        (*pcVar2)(pFVar1,pFVar8,this->bDelayedDialogShowCancelButton);
        if (GIsSlowTask != false) {
          pFVar1 = this->Context;
          this->bCreatedDialog = true;
          FFeedbackContext::RequestUpdateUI(pFVar1,true);
          FFeedbackContext::RequestUpdateUI(pFVar1,true);
        }
      }
    }
  }
  return false;
}

// MakeRecursiveDialogIfNeeded @ 141956040

void __thiscall FSlowTask::MakeRecursiveDialogIfNeeded(FSlowTask *this)

{
  undefined8 *puVar1;
  int iVar2;
  FFeedbackContext *pFVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  
  if (this->bEnabled != false) {
    if (this->bSkipRecursiveDialogCreation) {
      MakeDialogIfNeeded(this);
      return;
    }
    pFVar3 = this->Context;
    this->field_0x50 = this->field_0x50 | 4;
    puVar5 = *(undefined8 **)&pFVar3->ScopeStack;
    iVar2 = *(int *)&(pFVar3->ScopeStack).field_0x8;
    puVar1 = puVar5 + iVar2;
    while( true ) {
      if (*(int *)&(pFVar3->ScopeStack).field_0x8 != iVar2) {
        `TCheckedPointerIterator<FSlowTask_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (puVar5 == puVar1) break;
      bVar4 = MakeDialogIfNeeded((FSlowTask *)*puVar5);
      if (bVar4) {
        this->bSkipRecursiveDialogCreation = false;
      }
      puVar5 = puVar5 + 1;
    }
  }
  return;
}

// ShouldCancel @ 14196d760

bool __thiscall FSlowTask::ShouldCancel(FSlowTask *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->bEnabled != false) && (GIsSlowTask)) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\SlowTask.cpp"
                         ,0xfc,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    FFeedbackContext::RequestUpdateUI(this->Context,false);
                    /* WARNING: Could not recover jumptable at 0x00014196d7be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(this->Context->_padding_ + 0x60))();
    return (bool)uVar3;
  }
  return false;
}

// ShouldCreateThrottledSlowTask @ 14196d7d0

bool __cdecl FSlowTask::ShouldCreateThrottledSlowTask(void)

{
  double dVar1;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  dVar1 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  if (__real_3fb999999999999a < dVar1 - LastThrottledSlowTaskTime) {
    LastThrottledSlowTaskTime = dVar1;
    return true;
  }
  return false;
}

// TickProgress @ 1419718b0

void __thiscall FSlowTask::TickProgress(FSlowTask *this)

{
  undefined8 *puVar1;
  int iVar2;
  FFeedbackContext *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  if (this->bEnabled == false) {
    return;
  }
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\SlowTask.cpp"
                         ,0xcf,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (this->bEnabled != false) {
    if (this->bSkipRecursiveDialogCreation) {
      MakeDialogIfNeeded(this);
      FFeedbackContext::RequestUpdateUI(this->Context,false);
      return;
    }
    pFVar3 = this->Context;
    this->field_0x50 = this->field_0x50 | 4;
    puVar6 = *(undefined8 **)&pFVar3->ScopeStack;
    iVar2 = *(int *)&(pFVar3->ScopeStack).field_0x8;
    puVar1 = puVar6 + iVar2;
    while( true ) {
      if (*(int *)&(pFVar3->ScopeStack).field_0x8 != iVar2) {
        `TCheckedPointerIterator<FSlowTask_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (puVar6 == puVar1) break;
      bVar5 = MakeDialogIfNeeded((FSlowTask *)*puVar6);
      if (bVar5) {
        this->bSkipRecursiveDialogCreation = false;
      }
      puVar6 = puVar6 + 1;
    }
  }
  FFeedbackContext::RequestUpdateUI(this->Context,false);
  return;
}

// operator() @ 15047ee50

bool __thiscall `FSlowTask::EnterProgressFrame'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4967730363360083772>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4967730363360083772>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15047ef40

bool __thiscall `FSlowTask::Destroy'::__l19::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4967730363360083819>);
  if (bVar2) {
    FText::ToString((FText *)**(undefined8 **)((longlong)this + 8));
    FText::ToString(*(FText **)this);
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4967730363360083819>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

