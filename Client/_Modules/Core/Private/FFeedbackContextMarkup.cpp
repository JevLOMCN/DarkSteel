// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// ParseCommand @ 1418eae10

bool __cdecl FFeedbackContextMarkup::ParseCommand(FString *param_1,FFeedbackContext *param_2)

{
  wint_t wVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  bool bVar4;
  wint_t wVar5;
  int iVar6;
  ulonglong uVar7;
  FString *pFVar8;
  ulonglong uVar9;
  FScriptContainerElement *_Str;
  FText *pFVar10;
  wchar_t *pwVar11;
  FScriptContainerElement *pFVar12;
  int local_res8;
  undefined4 uStackX_c;
  wchar_t *local_res18;
  FString local_38;
  FText local_28;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar6 = wcsncmp(pwVar11,L"@progress",9);
  if (iVar6 != 0) {
    return false;
  }
  _Str = (FScriptContainerElement *)((longlong)pwVar11 + 0x12);
  if ((*(wint_t *)((longlong)pwVar11 + 0x12) != 0) &&
     (iVar6 = iswspace(*(wint_t *)((longlong)pwVar11 + 0x12)), iVar6 == 0)) {
    return false;
  }
  iVar6 = iswspace(*(wint_t *)_Str);
  while (iVar6 != 0) {
    pFVar2 = _Str + 2;
    _Str = _Str + 2;
    iVar6 = iswspace(*(wint_t *)pFVar2);
  }
  wVar1 = *(wint_t *)_Str;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  if (((wVar1 == 0x27) || (wVar1 == 0x22)) &&
     (wVar5 = *(wint_t *)(_Str + 2), pFVar2 = _Str, wVar5 != 0)) {
LAB_1418eaec0:
    pFVar12 = pFVar2 + 2;
    if (wVar5 != wVar1) goto code_r0x0001418eaec9;
    pFVar8 = ::FString::ConstructFromPtrSize
                       ((FString *)&local_28,(wchar_t *)(_Str + 2),
                        (int)((longlong)(pFVar12 + (-2 - (longlong)_Str)) >> 1));
    if (&local_38 != pFVar8) {
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      local_38.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = (pFVar8->Data).ArrayNum;
      local_38.Data.ArrayMax = (pFVar8->Data).ArrayMax;
      (pFVar8->Data).ArrayNum = 0;
      (pFVar8->Data).ArrayMax = 0;
    }
    _Str = pFVar12;
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_28.TextData.Reference);
    }
    do {
      pFVar2 = _Str + 2;
      _Str = _Str + 2;
      iVar6 = iswspace(*(wint_t *)pFVar2);
    } while (iVar6 != 0);
    bVar4 = true;
    goto LAB_1418eaed9;
  }
LAB_1418eaed6:
  bVar4 = false;
LAB_1418eaed9:
  iVar6 = iswdigit(*(wint_t *)_Str);
  if (iVar6 != 0) {
    uVar7 = _wcstoui64((wchar_t *)_Str,(wchar_t **)&local_res8,10);
    _Str = (FScriptContainerElement *)CONCAT44(uStackX_c,local_res8);
    iVar6 = iswspace(*(wchar_t *)_Str);
    while (iVar6 != 0) {
      pFVar2 = _Str + 2;
      _Str = _Str + 2;
      iVar6 = iswspace(*(wchar_t *)pFVar2);
    }
    if (*(wchar_t *)_Str == L'%') {
      iVar6 = iswspace(*(wchar_t *)(_Str + 2));
      pFVar2 = _Str;
      while (_Str = pFVar2 + 2, iVar6 != 0) {
        iVar6 = iswspace(*(wchar_t *)(pFVar2 + 4));
        pFVar2 = _Str;
      }
      bVar3 = true;
      local_res8 = 100;
      iVar6 = (int)uVar7;
      goto LAB_1418eb06b;
    }
    if (*(wchar_t *)_Str == L'/') {
      pFVar2 = _Str + 2;
      _Str = _Str + 2;
      iVar6 = iswdigit(*(wchar_t *)pFVar2);
      if (iVar6 != 0) {
        uVar9 = _wcstoui64((wchar_t *)_Str,&local_res18,10);
        iVar6 = iswspace(*local_res18);
        while (iVar6 != 0) {
          pwVar11 = local_res18 + 1;
          local_res18 = local_res18 + 1;
          iVar6 = iswspace(*pwVar11);
        }
        _Str = (FScriptContainerElement *)SkipWhitespace(local_res18);
        bVar3 = true;
        local_res8 = (int)uVar9;
        iVar6 = (int)uVar7;
        goto LAB_1418eb06b;
      }
    }
  }
  bVar3 = false;
  iVar6 = local_res8;
LAB_1418eb06b:
  if ((*(wchar_t *)_Str == L'\0') && (bVar3)) {
    if (bVar4) {
      pFVar10 = FText::FromString(&local_28,&local_38);
      FFeedbackContext::StatusUpdate(param_2,iVar6,local_res8,pFVar10);
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      }
    }
    else {
      FFeedbackContext::UpdateProgress(param_2,iVar6,local_res8);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    return true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return false;
code_r0x0001418eaec9:
  wVar5 = *(wint_t *)(pFVar2 + 4);
  pFVar2 = pFVar12;
  if (wVar5 == 0) goto LAB_1418eaed6;
  goto LAB_1418eaec0;
}

// PipeProcessOutput @ 1418f0490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
FFeedbackContextMarkup::PipeProcessOutput
          (FText *param_1,FString *param_2,FString *param_3,FFeedbackContext *param_4,int *param_5)

{
  int *piVar1;
  TArray<TUniquePtr<FSlowTask,TDefaultDelete<FSlowTask>_>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FSlowTask *this;
  FSlowTask *this_00;
  FString *pFVar11;
  FOverride *pFVar12;
  wchar_t *pwVar13;
  ForAnyElementType FVar14;
  int iVar15;
  bool bVar16;
  FProcHandle local_res10;
  void *local_res18;
  void *local_res20;
  FScriptContainerElement *in_stack_ffffffffffffff40;
  FScriptContainerElement *pFVar17;
  ulonglong in_stack_ffffffffffffff50;
  FSlowTask *local_88;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId45,"FFeedbackContextMarkup::PipeProcessOutput",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\FeedbackContextMarkup.cpp"
               ,0x2d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId45);
  }
  this_00 = (FSlowTask *)0x0;
  local_res20 = (void *)0x0;
  local_res18 = (void *)0x0;
  bVar5 = FWindowsPlatformProcess::CreatePipe(&local_res20,&local_res18,false);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FPlatformProcess::CreatePipe(PipeRead, PipeWrite)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\FeedbackContextMarkup.cpp"
                         ,0x33,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<102339518656413908>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\FeedbackContext.cpp"
                         ,0xd4,"IsInGameThread()"), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  this = ::operator_new(0x60);
  if (this != (FSlowTask *)0x0) {
    this_00 = FSlowTask::FSlowTask(this,0.0,param_1,true,param_4);
  }
  local_88 = this_00;
  FSlowTask::MakeDialogDelayed(this_00,__real_40400000,true,false);
  FSlowTask::Initialize(local_88);
  pTVar2 = &param_4->LegacyAPIScopes;
  pFVar17 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar17 <= (FScriptContainerElement *)&local_88) &&
     ((FScriptContainerElement *)&local_88 <
      pFVar17 + (longlong)(param_4->LegacyAPIScopes).ArrayMax * 8)) {
    in_stack_ffffffffffffff50 = (ulonglong)(param_4->LegacyAPIScopes).ArrayNum;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    in_stack_ffffffffffffff40 = pFVar17;
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  iVar9 = (param_4->LegacyAPIScopes).ArrayNum;
  piVar1 = &(param_4->LegacyAPIScopes).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (param_4->LegacyAPIScopes).ArrayNum = iVar9 + 1;
  *(FSlowTask **)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_88;
  if ((param_3->Data).ArrayNum == 0) {
    uVar6 = 0x6c;
  }
  else {
    uVar6 = SUB81((param_3->Data).AllocatorInstance.Data,0);
  }
  if ((param_2->Data).ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  bVar5 = false;
  FWindowsPlatformProcess::CreateProc
            ((wchar_t *)&local_res10,pwVar13,(bool)uVar6,false,true,
             (uint *)CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff40 >> 8),1),0,
             (wchar_t *)(in_stack_ffffffffffffff50 & 0xffffffff00000000),(void *)0x0,local_res18);
  fVar4 = __real_3dcccccd;
  if (local_res10 == (FProcHandle)0x0) {
    FOutputDevice::LogfImpl((FOutputDevice *)param_4,Error,L"Couldn\'t create process \'%s\'");
  }
  else {
    local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.Data.ArrayNum = 0;
    local_80.Data.ArrayMax = 0;
    do {
      bVar5 = FWindowsPlatformProcess::GetProcReturnCode(&local_res10,param_5);
      if ((!bVar5) && (cVar7 = (**(code **)(param_4->_padding_ + 0x60))(param_4), cVar7 != '\0')) {
        FWindowsPlatformProcess::TerminateProc(&local_res10,false);
        bVar5 = true;
      }
      pFVar11 = FWindowsPlatformProcess::ReadPipe(local_60,local_res20);
      iVar10 = (pFVar11->Data).ArrayNum;
      iVar9 = iVar10 + -1;
      if (iVar10 == 0) {
        iVar9 = 0;
      }
      ::FString::AppendChars(&local_80,(wchar_t *)(pFVar11->Data).AllocatorInstance.Data,iVar9);
      FVar14.Data = local_60[0].Data.AllocatorInstance.Data;
      while( true ) {
        if (FVar14.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar14.Data);
        }
        FVar14.Data = local_80.Data.AllocatorInstance.Data;
        while( true ) {
          if (FVar14.Data ==
              local_80.Data.AllocatorInstance.Data + (longlong)local_80.Data.ArrayNum * 2)
          goto LAB_1418f0783;
          if (*(wchar_t *)FVar14.Data == L'\n') break;
          FVar14.Data = FVar14.Data + 2;
        }
        iVar9 = (int)((longlong)FVar14.Data - (longlong)local_80.Data.AllocatorInstance.Data >> 1);
        if (iVar9 == -1) break;
        iVar10 = local_80.Data.ArrayNum + -1;
        if (local_80.Data.ArrayNum == 0) {
          iVar10 = 0;
        }
        if (iVar9 < iVar10) {
          iVar10 = iVar9;
        }
        iVar15 = 0;
        if (0 < iVar10) {
          iVar15 = iVar10;
        }
        FVar14.Data = (FScriptContainerElement *)L"";
        if (local_80.Data.ArrayNum != 0) {
          FVar14.Data = local_80.Data.AllocatorInstance.Data;
        }
        ::FString::ConstructFromPtrSize(&local_70,(wchar_t *)FVar14.Data,iVar15);
        ::FString::RemoveFromEnd(&local_70,L"\r",1,CaseSensitive);
        bVar8 = ParseCommand(&local_70,param_4);
        if (!bVar8) {
          FVar14.Data = (FScriptContainerElement *)L"";
          if (local_70.Data.ArrayNum != 0) {
            FVar14.Data = local_70.Data.AllocatorInstance.Data;
          }
          pFVar12 = FLogScopedCategoryAndVerbosityOverride::GetTLSCurrent();
          (**(code **)(param_4->_padding_ + 0x10))(param_4,FVar14.Data,pFVar12->Verbosity);
        }
        ::FString::RemoveAt(&local_80,0,iVar9 + 1,No);
        FVar14.Data = local_70.Data.AllocatorInstance.Data;
      }
LAB_1418f0783:
      FWindowsPlatformProcess::Sleep(fVar4);
    } while (bVar5 == false);
    local_res10 = (FProcHandle)0x0;
    bVar5 = true;
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  FFeedbackContext::EndSlowTask(param_4);
  FWindowsPlatformProcess::ClosePipe(local_res20,local_res18);
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar5;
}

// ReadInteger @ 1418f1000

bool __cdecl FFeedbackContextMarkup::ReadInteger(wchar_t **param_1,uint *param_2)

{
  int iVar1;
  ulonglong uVar2;
  wchar_t *local_res8;
  
  iVar1 = iswdigit(**param_1);
  if (iVar1 != 0) {
    uVar2 = _wcstoui64(*param_1,&local_res8,10);
    *param_2 = (uint)uVar2;
    *param_1 = local_res8;
    iVar1 = iswspace(*local_res8);
    while (iVar1 != 0) {
      *param_1 = *param_1 + 1;
      iVar1 = iswspace(**param_1);
    }
    return true;
  }
  return false;
}

// ReadProgress @ 1418f1090

bool __cdecl FFeedbackContextMarkup::ReadProgress(wchar_t **param_1,int *param_2,int *param_3)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  wchar_t *pwVar6;
  wchar_t *local_res8;
  
  iVar3 = iswdigit(**param_1);
  if (iVar3 != 0) {
    uVar4 = _wcstoui64(*param_1,&local_res8,10);
    *param_1 = local_res8;
    iVar3 = iswspace(*local_res8);
    while (iVar3 != 0) {
      *param_1 = *param_1 + 1;
      iVar3 = iswspace(**param_1);
    }
    wVar2 = **param_1;
    if (wVar2 == L'%') {
      *param_2 = (int)uVar4;
      *param_3 = 100;
      pwVar6 = *param_1 + 1;
      iVar3 = iswspace(*pwVar6);
      while (iVar3 != 0) {
        pwVar1 = pwVar6 + 1;
        pwVar6 = pwVar6 + 1;
        iVar3 = iswspace(*pwVar1);
      }
      *param_1 = pwVar6;
      return true;
    }
    if (wVar2 == L'/') {
      pwVar6 = *param_1 + 1;
      *param_1 = pwVar6;
      iVar3 = iswdigit(*pwVar6);
      if (iVar3 != 0) {
        uVar5 = _wcstoui64(*param_1,&local_res8,10);
        *param_1 = local_res8;
        iVar3 = iswspace(*local_res8);
        while (iVar3 != 0) {
          *param_1 = *param_1 + 1;
          iVar3 = iswspace(**param_1);
        }
        *param_2 = (int)uVar4;
        *param_3 = (int)uVar5;
        pwVar6 = SkipWhitespace(*param_1);
        *param_1 = pwVar6;
        return true;
      }
    }
  }
  return false;
}

// ReadString @ 1418f11f0

bool __cdecl FFeedbackContextMarkup::ReadString(wchar_t **param_1,FString *param_2)

{
  wchar_t wVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  FScriptContainerElement *pFVar4;
  wchar_t *pwVar5;
  int iVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  FString local_18;
  
  pwVar3 = *param_1;
  wVar1 = *pwVar3;
  if ((wVar1 == L'\'') || (wVar1 == L'\"')) {
    wVar2 = pwVar3[1];
    pwVar5 = pwVar3;
    while (wVar2 != L'\0') {
      pwVar8 = pwVar5 + 1;
      if (wVar2 == wVar1) {
        pFVar7 = ::FString::ConstructFromPtrSize
                           (&local_18,pwVar3 + 1,
                            (int)((longlong)pwVar8 + (-2 - (longlong)pwVar3) >> 1));
        if (param_2 != pFVar7) {
          pFVar4 = (param_2->Data).AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          (param_2->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
          (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (param_2->Data).ArrayNum = (pFVar7->Data).ArrayNum;
          (param_2->Data).ArrayMax = (pFVar7->Data).ArrayMax;
          (pFVar7->Data).ArrayNum = 0;
          (pFVar7->Data).ArrayMax = 0;
        }
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        do {
          pwVar3 = pwVar8 + 1;
          pwVar8 = pwVar8 + 1;
          iVar6 = iswspace(*pwVar3);
        } while (iVar6 != 0);
        *param_1 = pwVar8;
        return true;
      }
      wVar2 = pwVar5[2];
      pwVar5 = pwVar8;
    }
  }
  return false;
}

// ReadToken @ 1418f12e0

bool __cdecl FFeedbackContextMarkup::ReadToken(wchar_t **param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  
  sVar3 = wcslen(param_2);
  sVar3 = (size_t)(int)sVar3;
  iVar2 = wcsncmp(*param_1,param_2,sVar3);
  if ((iVar2 == 0) &&
     (((*param_1)[sVar3] == L'\0' || (iVar2 = iswspace((*param_1)[sVar3]), iVar2 != 0)))) {
    pwVar4 = *param_1 + sVar3;
    iVar2 = iswspace((*param_1)[sVar3]);
    while (iVar2 != 0) {
      pwVar1 = pwVar4 + 1;
      pwVar4 = pwVar4 + 1;
      iVar2 = iswspace(*pwVar1);
    }
    *param_1 = pwVar4;
    return true;
  }
  return false;
}

// SkipWhitespace @ 1418f9670

wchar_t * __cdecl FFeedbackContextMarkup::SkipWhitespace(wchar_t *param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  
  iVar2 = iswspace(*param_1);
  while (iVar2 != 0) {
    pwVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    iVar2 = iswspace(*pwVar1);
  }
  return param_1;
}

