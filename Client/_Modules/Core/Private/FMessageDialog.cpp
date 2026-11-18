// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 14

// Debugf @ 1418d50e0

void __cdecl FMessageDialog::Debugf(FText *param_1,FText *param_2)

{
  bool bVar1;
  FOutputDeviceRedirector *this;
  FText *this_00;
  FString *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  FText local_18;
  
  bVar1 = FApp::IsUnattended();
  if (bVar1) {
    if (GWasGLogDestroyed == false) {
      this = FOutputDeviceRedirector::Get();
    }
    else {
      this = (FOutputDeviceRedirector *)0x0;
    }
    FText::ToString(param_1);
    FOutputDevice::LogfImpl((FOutputDevice *)this,L"%s");
    return;
  }
  this_00 = FText::AsLocalizable_Advanced_LocText
                      (&local_18,L"MessageDialog",L"DefaultDebugMessageTitle",L"ShowDebugMessagef");
  pFVar2 = FText::ToString(this_00);
  pwVar3 = L"";
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  pFVar2 = FText::ToString(param_1);
  if ((pFVar2->Data).ArrayNum != 0) {
    pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  FWindowsPlatformMisc::MessageBoxExt(Ok,pwVar3,pwVar4);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// Debugf @ 1418d51d0

void __cdecl FMessageDialog::Debugf(FText *param_1)

{
  FText *pFVar1;
  
  pFVar1 = ::`anonymous_namespace'::GetDefaultMessageTitle();
  Debugf(param_1,pFVar1);
  return;
}

// Debugf @ 1418d5200

void __cdecl FMessageDialog::Debugf(FText *param_1,FText *param_2)

{
  if (param_2 == (FText *)0x0) {
    param_2 = ::`anonymous_namespace'::GetDefaultMessageTitle();
  }
  Debugf(param_1,param_2);
  return;
}

// Open @ 1418e98b0

Type __cdecl FMessageDialog::Open(Type param_1,FText *param_2,FText *param_3)

{
  Type TVar1;
  
  TVar1 = Open(Warning,param_1,param_2,param_3);
  return TVar1;
}

// Open @ 1418e98d0

Type __cdecl FMessageDialog::Open(Type param_1,FText *param_2)

{
  Type TVar1;
  FText *pFVar2;
  
  pFVar2 = ::`anonymous_namespace'::GetDefaultMessageTitle();
  TVar1 = Open(Warning,param_1,param_2,pFVar2);
  return TVar1;
}

// Open @ 1418e9910

Type __cdecl FMessageDialog::Open(Type param_1,FText *param_2,FText *param_3)

{
  Type TVar1;
  
  if (param_3 == (FText *)0x0) {
    param_3 = ::`anonymous_namespace'::GetDefaultMessageTitle();
  }
  TVar1 = Open(Warning,param_1,param_2,param_3);
  return TVar1;
}

// Open @ 1418e9950

Type __cdecl FMessageDialog::Open(Type param_1,Type param_2,FText *param_3,FText *param_4)

{
  Type TVar1;
  
  TVar1 = Open(Warning,param_1,param_2,param_3,param_4);
  return TVar1;
}

// Open @ 1418e9980

Type __cdecl FMessageDialog::Open(Type param_1,Type param_2,FText *param_3)

{
  Type TVar1;
  FText *pFVar2;
  
  pFVar2 = ::`anonymous_namespace'::GetDefaultMessageTitle();
  TVar1 = Open(Warning,param_1,param_2,param_3,pFVar2);
  return TVar1;
}

// Open @ 1418e99d0

Type __cdecl FMessageDialog::Open(Type param_1,Type param_2,FText *param_3,FText *param_4)

{
  Type TVar1;
  
  if (param_4 == (FText *)0x0) {
    param_4 = ::`anonymous_namespace'::GetDefaultMessageTitle();
  }
  TVar1 = Open(Warning,param_1,param_2,param_3,param_4);
  return TVar1;
}

// Open @ 1418e9a20

/* WARNING: Enum "Type": Some values do not have unique names */

Type __cdecl
FMessageDialog::Open(EAppMsgCategory param_1,Type param_2,FText *param_3,FText *param_4)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  
  switch(param_2) {
  case Ok:
    TVar3 = Ok;
    break;
  case YesNo:
  case YesNoYesAllNoAll:
    TVar3 = No;
    break;
  case OkCancel:
  case YesNoCancel:
  case CancelRetryContinue:
    TVar3 = Cancel;
    break;
  default:
    TVar3 = Yes;
  }
  if ((GIsRunningUnattendedScript) && (param_2 != Ok)) {
    if (GWarn != (FFeedbackContext *)0x0) {
      FOutputDevice::LogfImpl
                ((FOutputDevice *)GWarn,
                 L"Message Dialog was triggered in unattended script mode without a default value. %d will be used."
                );
    }
    bVar2 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar2) {
      bVar2 = FWindowsPlatformMisc::IsDebuggerPresent();
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar3 = (*pcVar1)();
        return TVar3;
      }
    }
    else {
      ::FDebug::DumpStackTraceToLog(Error);
    }
  }
  TVar3 = Open(param_1,param_2,TVar3,param_3,param_4);
  return TVar3;
}

// Open @ 1418e9b20

Type __cdecl FMessageDialog::Open(EAppMsgCategory param_1,Type param_2,FText *param_3)

{
  Type TVar1;
  FText *pFVar2;
  
  pFVar2 = ::`anonymous_namespace'::GetDefaultMessageTitle();
  TVar1 = Open(param_1,param_2,param_3,pFVar2);
  return TVar1;
}

// Open @ 1418e9b70

Type __cdecl
FMessageDialog::Open
          (EAppMsgCategory param_1,Type param_2,Type param_3,FText *param_4,FText *param_5)

{
  bool bVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  bVar1 = FApp::IsUnattended();
  if ((!bVar1) && (GIsRunningUnattendedScript == false)) {
    pFVar2 = FText::ToString(param_5);
    if ((pFVar2->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    pFVar2 = FText::ToString(param_4);
    if ((pFVar2->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    param_3 = FWindowsPlatformMisc::MessageBoxExt(param_2,pwVar3,pwVar4);
  }
  if (GWarn != (FFeedbackContext *)0x0) {
    FText::ToString(param_4);
    FText::ToString(param_5);
    ::LexToString(param_3);
    FOutputDevice::LogfImpl
              ((FOutputDevice *)GWarn,L"Message dialog closed, result: %s, title: %s, text: %s");
  }
  return param_3;
}

// Open @ 1418e9c60

Type __cdecl FMessageDialog::Open(EAppMsgCategory param_1,Type param_2,Type param_3,FText *param_4)

{
  Type TVar1;
  FText *pFVar2;
  
  pFVar2 = ::`anonymous_namespace'::GetDefaultMessageTitle();
  TVar1 = Open(param_1,param_2,param_3,param_4,pFVar2);
  return TVar1;
}

// ShowLastError @ 1418f9550

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FMessageDialog::ShowLastError(void)

{
  bool bVar1;
  DWORD DVar2;
  FText *this;
  FString *pFVar3;
  wchar_t *pwVar4;
  undefined1 auStack_1048 [32];
  FText local_1028;
  wchar_t local_1018 [1024];
  wchar_t local_818 [1024];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1418f955c;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1048;
  DVar2 = FWindowsPlatformMisc::GetLastError();
  bVar1 = FApp::IsUnattended();
  if (bVar1) {
    FWindowsPlatformMisc::GetSystemErrorMessage(local_818,0x400,DVar2);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogOutputDevice);
  }
  else {
    memset(local_1018,0,0x800);
    FWindowsPlatformMisc::GetSystemErrorMessage(local_818,0x400,DVar2);
    TCString<wchar_t>::SprintfImpl(local_1018,L"GetLastError : %d\n\n%s");
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_1028,L"MessageDialog",L"DefaultSystemErrorTitle",L"System Error");
    pFVar3 = FText::ToString(this);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    FWindowsPlatformMisc::MessageBoxExt(Ok,local_1018,pwVar4);
    if (local_1028.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1028.TextData.Reference + 0x10))();
    }
  }
  return;
}

