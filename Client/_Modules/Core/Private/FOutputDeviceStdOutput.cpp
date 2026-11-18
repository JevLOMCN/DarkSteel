// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// FOutputDeviceStdOutput @ 1418bcd50

/* WARNING: Enum "Type": Some values do not have unique names */

FOutputDeviceStdOutput * __thiscall
FOutputDeviceStdOutput::FOutputDeviceStdOutput(FOutputDeviceStdOutput *this)

{
  bool bVar1;
  DWORD DVar2;
  int iVar3;
  HANDLE hFile;
  wchar_t *pwVar4;
  longlong lVar5;
  FString local_18;
  
  *(undefined2 *)&this->_padding_ = 0x100;
  this->_padding_ = (longlong)&___7FOutputDeviceStdOutput__6B_;
  this->AllowedLogVerbosity = Display;
  this->bIsConsoleOutput = false;
  this->bIsJsonOutput = false;
  hFile = GetStdHandle(0xfffffff5);
  if (hFile != (HANDLE)0xffffffffffffffff) {
    DVar2 = GetFileType(hFile);
    if (DVar2 == 2) {
      pwVar4 = FCommandLine::Get();
      bVar1 = FParse::Param(pwVar4,L"GenericConsoleOutput");
      if (!bVar1) {
        bVar1 = true;
        goto LAB_1418bcdb0;
      }
    }
  }
  bVar1 = false;
LAB_1418bcdb0:
  this->bIsConsoleOutput = bVar1;
  pwVar4 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar4,L"JsonStdOut");
  this->bIsJsonOutput = bVar1;
  if (!bVar1) {
    FWindowsPlatformMisc::GetEnvironmentVariable(&local_18,L"UE_LOG_JSON_TO_STDOUT");
    if (1 < local_18.Data.ArrayNum) {
      iVar3 = _wtoi((wchar_t *)local_18.Data.AllocatorInstance.Data);
      this->bIsJsonOutput = iVar3 != 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pwVar4 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar4,L"AllowStdOutLogVerbosity");
  if (bVar1) {
    this->AllowedLogVerbosity = Log;
  }
  pwVar4 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar4,L"FullStdOutLogOutput");
  if (bVar1) {
    this->AllowedLogVerbosity = All;
  }
  lVar5 = __acrt_iob_func(1);
  if (lVar5 == 0) {
    this->AllowedLogVerbosity = NoLogging;
  }
  return this;
}

// CanBeUsedOnAnyThread @ 1418c9f80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FOutputDeviceStdOutput::CanBeUsedOnAnyThread(FOutputDeviceStdOutput *this)

{
  return true;
}

// CanBeUsedOnPanicThread @ 1418c9fd0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FOutputDeviceStdOutput::CanBeUsedOnPanicThread(FOutputDeviceStdOutput *this)

{
  return true;
}

// Serialize @ 1418f6320

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOutputDeviceStdOutput::Serialize
          (FOutputDeviceStdOutput *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  if (param_2 <= this->AllowedLogVerbosity) {
    if (this->bIsJsonOutput != false) {
      SerializeAsJson(this,param_1,param_2,param_3,__real_bff0000000000000);
      return;
    }
    SerializeAsText(this,param_1,param_2,param_3,__real_bff0000000000000);
  }
  return;
}

// Serialize @ 1418f6360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOutputDeviceStdOutput::Serialize
          (FOutputDeviceStdOutput *this,wchar_t *param_1,Type param_2,FName *param_3,double param_4)

{
  if (param_2 <= this->AllowedLogVerbosity) {
    if (this->bIsJsonOutput != false) {
      SerializeAsJson(this,param_1,param_2,param_3,param_4);
      return;
    }
    SerializeAsText(this,param_1,param_2,param_3,param_4);
  }
  return;
}

// SerializeAsJson @ 1418f63a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOutputDeviceStdOutput::SerializeAsJson
          (FOutputDeviceStdOutput *this,wchar_t *param_1,Type param_2,FName *param_3,double param_4)

{
  TStringView<char> *pTVar1;
  size_t sVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auStackY_568 [32];
  TStringView<wchar_t> local_528;
  FDateTime local_518;
  int iStack_510;
  undefined4 uStack_50c;
  int local_508;
  int local_504;
  int local_500;
  int local_4fc;
  int local_4f8;
  int local_4f4;
  int local_4f0;
  int local_4ec;
  TStringView<char> local_4e8;
  TStringBuilderBase<char8_t> local_4d8;
  wchar_t local_4b8 [32];
  FCbWriter local_478 [26];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_568;
  if ((GPrintLogCategory) && (*param_3 != (FName)0x0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((GPrintLogVerbosity) && ((param_2 & VerbosityMask) != Log)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  FCbWriter::FCbWriter(local_478,0x400);
  FCbWriter::BeginObject(local_478);
  FWindowsPlatformTime::UtcTime
            (&local_4f0,&local_4f4,&local_4ec,&local_4f8,&local_4fc,&local_500,&local_504,&local_508
            );
  FDateTime::FDateTime
            (&local_518,local_4f0,local_4f4,local_4f8,local_4fc,local_500,local_504,local_508);
  local_528.Size = 4;
  local_528.DataPtr = L"time";
  FCbWriter::AddDateTime(local_478,(TStringView<char8_t> *)&local_528,local_518);
  pTVar1 = UE::Logging::Private::GetLevel(&local_4e8,param_2);
  local_528.Size = 5;
  local_518.Ticks = (long64)pTVar1->DataPtr;
  iStack_510 = (int)*(undefined8 *)&pTVar1->Size;
  local_528.DataPtr = L"level";
  FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_528);
  local_528.Size = iStack_510;
  local_528._12_4_ = uStack_50c;
  local_528.DataPtr = (wchar_t *)local_518.Ticks;
  FCbWriter::AddString(local_478,(TStringView<char8_t> *)&local_528);
  UE::Logging::Private::AddMessage(local_478,param_1,param_2,param_3,bVar5,bVar4);
  if ((bVar5 != false) || (bVar4 != false)) {
    local_528.DataPtr = L"properties";
    local_528.Size = 10;
    FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_528);
    FCbWriter::BeginObject(local_478);
    if (bVar5 != false) {
      local_528.Size = 8;
      local_528.DataPtr = L"_channel";
      FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_528);
      FCbWriter::BeginObject(local_478);
      local_528.Size = 5;
      local_518.Ticks = 0x15060d510;
      iStack_510 = 7;
      local_528.DataPtr = L"$type";
      FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_528);
      local_528.Size = iStack_510;
      local_528._12_4_ = uStack_50c;
      local_528.DataPtr = (wchar_t *)local_518.Ticks;
      FCbWriter::AddString(local_478,(TStringView<char8_t> *)&local_528);
      local_4d8.Base = (uchar *)local_4b8;
      local_4d8.bIsDynamic = false;
      local_4d8.bIsExternal = false;
      local_4d8.CurPos = (uchar *)local_4b8;
      local_4d8.End = (uchar *)local_478;
      ::FName::AppendString(param_3,&local_4d8);
      iStack_510 = (int)local_4d8.CurPos - (int)local_4d8.Base;
      local_528.Size = 5;
      local_518.Ticks = (long64)local_4d8.Base;
      local_528.DataPtr = L"$text";
      FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_528);
      local_528.DataPtr = (wchar_t *)local_518.Ticks;
      local_528.Size = iStack_510;
      local_528._12_4_ = uStack_50c;
      FCbWriter::AddString(local_478,(TStringView<char8_t> *)&local_528);
      TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_4d8);
      FCbWriter::EndObject(local_478);
    }
    if (bVar4 != false) {
      local_528.Size = 9;
      local_528.DataPtr = L"_severity";
      FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_528);
      FCbWriter::BeginObject(local_478);
      local_528.Size = 5;
      local_518.Ticks = 0x1506ad8e0;
      iStack_510 = 8;
      local_528.DataPtr = L"$type";
      FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_528);
      local_528._12_4_ = uStack_50c;
      local_528.Size = iStack_510;
      local_528.DataPtr = (wchar_t *)local_518.Ticks;
      FCbWriter::AddString(local_478,(TStringView<char8_t> *)&local_528);
      local_518.Ticks = (long64)::ToString(param_2);
      iVar3 = 0;
      if ((wchar_t *)local_518.Ticks != (wchar_t *)0x0) {
        sVar2 = wcslen((wchar_t *)local_518.Ticks);
        iVar3 = (int)sVar2;
      }
      local_528.Size = 5;
      local_528.DataPtr = L"$text";
      iStack_510 = iVar3;
      FCbWriter::SetName(local_478,(TStringView<char8_t> *)&local_528);
      local_528.DataPtr = (wchar_t *)local_518.Ticks;
      local_528.Size = iStack_510;
      FCbWriter::AddString(local_478,&local_528);
      FCbWriter::EndObject(local_478);
    }
    FCbWriter::EndObject(local_478);
    UE::Logging::Private::AddFormat(local_478,param_1,bVar5,bVar4);
  }
  FCbWriter::EndObject(local_478);
  WriteAsJson(this,local_478);
  FCbWriter::~FCbWriter(local_478);
  return;
}

// SerializeAsText @ 1418f6840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOutputDeviceStdOutput::SerializeAsText
          (FOutputDeviceStdOutput *this,wchar_t *param_1,Type param_2,FName *param_3,double param_4)

{
  TStringBuilderBase<wchar_t> *pTVar1;
  wchar_t *pwVar2;
  int iVar3;
  size_t sVar4;
  FILE *_File;
  uchar *puVar5;
  int iVar6;
  undefined1 auStackY_698 [32];
  TStringBuilderBase<char8_t> local_658;
  uchar local_638 [512];
  TStringBuilderBase<wchar_t> local_438;
  wchar_t local_418 [128];
  wchar_t local_318 [384];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_698;
  local_438.bIsDynamic = false;
  local_438.bIsExternal = false;
  if (this->bIsConsoleOutput == false) {
    local_658.Base = local_638;
    local_658.CurPos = local_638;
    local_658.End = (uchar *)&local_438;
    local_438.Base = local_418;
    local_438.CurPos = local_418;
    local_438.End = local_318;
    local_658.bIsDynamic = false;
    local_658.bIsExternal = false;
    FOutputDeviceHelper::AppendFormatLogLine
              (&local_438,param_2,param_3,(wchar_t *)0x0,GPrintLogTimes,param_4,(int *)0x0);
    pwVar2 = local_438.Base;
    iVar6 = (int)((longlong)local_438.CurPos - (longlong)local_438.Base >> 1);
    iVar3 = UE::Core::Private::GetConvertedLength((uchar *)0x0,local_438.Base,iVar6);
    if (local_658.End < (TStringBuilderBase<wchar_t> *)(local_658.CurPos + iVar3)) {
      TStringBuilderBase<char8_t>::Extend(&local_658,(longlong)iVar3);
    }
    if (iVar6 != 0) {
      local_658.CurPos = UE::Core::Private::Convert(local_658.CurPos,iVar3,pwVar2,iVar6);
    }
    if (param_1 != (wchar_t *)0x0) {
      sVar4 = wcslen(param_1);
      iVar6 = (int)sVar4;
      iVar3 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_1,iVar6);
      if (local_658.End < (TStringBuilderBase<wchar_t> *)(local_658.CurPos + iVar3)) {
        TStringBuilderBase<char8_t>::Extend(&local_658,(longlong)iVar3);
      }
      if (iVar6 != 0) {
        local_658.CurPos = UE::Core::Private::Convert(local_658.CurPos,iVar3,param_1,iVar6);
      }
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_438);
    if (local_658.End < (TStringBuilderBase<wchar_t> *)(local_658.CurPos + 1)) {
      TStringBuilderBase<char8_t>::Extend(&local_658,1);
    }
    *local_658.CurPos = '\n';
    puVar5 = local_658.CurPos + 1;
    pTVar1 = (TStringBuilderBase<wchar_t> *)(local_658.CurPos + 2);
    local_658.CurPos = puVar5;
    if (local_658.End < pTVar1) {
      TStringBuilderBase<char8_t>::Extend(&local_658,1);
    }
    *local_658.CurPos = '\0';
    printf("%s");
    _File = (FILE *)__acrt_iob_func(1);
    fflush(_File);
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_658);
  }
  else {
    local_438.Base = local_418;
    local_438.CurPos = local_418;
    local_438.End = (wchar_t *)local_18;
    FOutputDeviceHelper::AppendFormatLogLine
              (&local_438,param_2,param_3,param_1,GPrintLogTimes,param_4,(int *)0x0);
    if (local_438.End < local_438.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_438,1);
    }
    *local_438.CurPos = L'\n';
    local_438.CurPos = local_438.CurPos + 1;
    UE::Logging::Private::WriteLineToConsole(&local_438);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_438);
  }
  return;
}

// SerializeRecord @ 1418f82b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOutputDeviceStdOutput::SerializeRecord(FOutputDeviceStdOutput *this,FLogRecord *param_1)

{
  Type TVar1;
  wchar_t *pwVar2;
  bool bVar3;
  FDateTime FVar4;
  TStringView<char> *pTVar5;
  void *pvVar6;
  size_t sVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_738 [32];
  TStringView<wchar_t> TStack_718;
  wchar_t *pwStack_708;
  int iStack_700;
  undefined4 uStack_6fc;
  TStringView<char> TStack_6f8;
  TStringBuilderBase<char8_t> TStack_6e8;
  wchar_t awStack_6c8 [32];
  TStringBuilderBase<char8_t> TStack_688;
  wchar_t awStack_668 [256];
  FCbWriter aFStack_468 [26];
  ulonglong uStack_38;
  
  if (this->AllowedLogVerbosity < param_1->Verbosity) {
    return;
  }
  if (this->bIsJsonOutput == false) {
    SerializeRecordAsText(this,param_1);
    return;
  }
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_738;
  if ((GPrintLogCategory) && (param_1->Category != (FName)0x0)) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  if ((GPrintLogVerbosity) && ((param_1->Verbosity & VerbosityMask) != Log)) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  FCbWriter::FCbWriter(aFStack_468,0x400);
  FCbWriter::BeginObject(aFStack_468);
  FVar4 = UE::FLogTime::GetUtcTime(&param_1->Time);
  TStack_718.Size = 4;
                    /* WARNING: Load size is inaccurate */
  TStack_718.DataPtr = L"time";
  FCbWriter::AddDateTime(aFStack_468,(TStringView<char8_t> *)&TStack_718,(FDateTime)*FVar4.Ticks);
  pTVar5 = UE::Logging::Private::GetLevel(&TStack_6f8,param_1->Verbosity);
  TStack_718.Size = 5;
  pwStack_708 = (wchar_t *)pTVar5->DataPtr;
  iStack_700 = (int)*(undefined8 *)&pTVar5->Size;
  TStack_718.DataPtr = L"level";
  FCbWriter::SetName(aFStack_468,(TStringView<char8_t> *)&TStack_718);
  TStack_718._12_4_ = uStack_6fc;
  TStack_718.Size = iStack_700;
  TStack_718.DataPtr = pwStack_708;
  FCbWriter::AddString(aFStack_468,(TStringView<char8_t> *)&TStack_718);
  UE::Logging::Private::AddMessage(aFStack_468,param_1,bVar9,bVar10);
  if ((bVar9 == false) && (bVar10 == false)) {
    bVar3 = FCbObjectView::operator_bool((FCbObjectView *)&param_1->Fields);
    if (!bVar3) goto LAB_1418f88cc;
  }
  TStack_688.Base = (uchar *)awStack_668;
  TStack_688.CurPos = (uchar *)awStack_668;
  TStack_688.End = (uchar *)aFStack_468;
  TStack_688.bIsDynamic = false;
  TStack_688.bIsExternal = false;
  if (bVar9 != false) {
    pvVar6 = FGenericPlatformString::Memcpy(awStack_668,"{_channel}: ",0xc);
    TStack_688.CurPos = (uchar *)((longlong)pvVar6 + 0xc);
  }
  if (bVar10 != false) {
    if (TStack_688.End < (FCbWriter *)((longlong)TStack_688.CurPos + 0xdU)) {
      TStringBuilderBase<char8_t>::Extend(&TStack_688,0xd);
    }
    pvVar6 = FGenericPlatformString::Memcpy(TStack_688.CurPos,"{_severity}: ",0xd);
    TStack_688.CurPos = (uchar *)((longlong)pvVar6 + 0xd);
  }
  TStack_718.Size = 10;
  TStack_718.DataPtr = L"properties";
  FCbWriter::SetName(aFStack_468,(TStringView<char8_t> *)&TStack_718);
  FCbWriter::BeginObject(aFStack_468);
  TVar1 = param_1->Verbosity;
  if (bVar9 != false) {
    TStack_718.Size = 8;
    TStack_718.DataPtr = L"_channel";
    FCbWriter::SetName(aFStack_468,(TStringView<char8_t> *)&TStack_718);
    FCbWriter::BeginObject(aFStack_468);
    TStack_718.Size = 5;
    pwStack_708 = L"Channel";
    TStack_718.DataPtr = L"$type";
    iStack_700 = 7;
    FCbWriter::SetName(aFStack_468,(TStringView<char8_t> *)&TStack_718);
    TStack_718.Size = iStack_700;
    TStack_718._12_4_ = uStack_6fc;
    TStack_718.DataPtr = pwStack_708;
    FCbWriter::AddString(aFStack_468,(TStringView<char8_t> *)&TStack_718);
    TStack_6e8.Base = (uchar *)awStack_6c8;
    TStack_6e8.bIsDynamic = false;
    TStack_6e8.bIsExternal = false;
    TStack_6e8.CurPos = (uchar *)awStack_6c8;
    TStack_6e8.End = (uchar *)&TStack_688;
    ::FName::AppendString(&param_1->Category,&TStack_6e8);
    iStack_700 = (int)TStack_6e8.CurPos - (int)TStack_6e8.Base;
    TStack_718.Size = 5;
    pwStack_708 = (wchar_t *)TStack_6e8.Base;
    TStack_718.DataPtr = L"$text";
    FCbWriter::SetName(aFStack_468,(TStringView<char8_t> *)&TStack_718);
    TStack_718.DataPtr = pwStack_708;
    TStack_718.Size = iStack_700;
    TStack_718._12_4_ = uStack_6fc;
    FCbWriter::AddString(aFStack_468,(TStringView<char8_t> *)&TStack_718);
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&TStack_6e8);
    FCbWriter::EndObject(aFStack_468);
  }
  if (bVar10 != false) {
    TStack_718.Size = 9;
    TStack_718.DataPtr = L"_severity";
    FCbWriter::SetName(aFStack_468,(TStringView<char8_t> *)&TStack_718);
    FCbWriter::BeginObject(aFStack_468);
    TStack_718.Size = 5;
    pwStack_708 = L"Severity";
    TStack_718.DataPtr = L"$type";
    iStack_700 = 8;
    FCbWriter::SetName(aFStack_468,(TStringView<char8_t> *)&TStack_718);
    TStack_718._12_4_ = uStack_6fc;
    TStack_718.Size = iStack_700;
    TStack_718.DataPtr = pwStack_708;
    FCbWriter::AddString(aFStack_468,(TStringView<char8_t> *)&TStack_718);
    pwStack_708 = ::ToString(TVar1);
    iVar8 = 0;
    if (pwStack_708 != (wchar_t *)0x0) {
      sVar7 = wcslen(pwStack_708);
      iVar8 = (int)sVar7;
    }
    TStack_718.Size = 5;
    TStack_718.DataPtr = L"$text";
    iStack_700 = iVar8;
    FCbWriter::SetName(aFStack_468,(TStringView<char8_t> *)&TStack_718);
    TStack_718.DataPtr = pwStack_708;
    TStack_718.Size = iStack_700;
    TStack_718._12_4_ = uStack_6fc;
    FCbWriter::AddString(aFStack_468,&TStack_718);
    FCbWriter::EndObject(aFStack_468);
  }
  pwVar2 = param_1->TextNamespace;
  if (pwVar2 != (wchar_t *)0x0) {
    pwStack_708 = pwVar2;
    sVar7 = wcslen(pwVar2);
    TStack_718.Size = 3;
    iStack_700 = (int)sVar7;
    TStack_718.DataPtr = L"_ns";
    FCbWriter::SetName(aFStack_468,(TStringView<char8_t> *)&TStack_718);
    TStack_718.DataPtr = pwStack_708;
    TStack_718.Size = iStack_700;
    TStack_718._12_4_ = uStack_6fc;
    FCbWriter::AddString(aFStack_468,&TStack_718);
  }
  pwVar2 = param_1->TextKey;
  if (pwVar2 != (wchar_t *)0x0) {
    pwStack_708 = pwVar2;
    sVar7 = wcslen(pwVar2);
    TStack_718.Size = 4;
    iStack_700 = (int)sVar7;
    TStack_718.DataPtr = L"_key";
    FCbWriter::SetName(aFStack_468,(TStringView<char8_t> *)&TStack_718);
    TStack_718.DataPtr = pwStack_708;
    TStack_718.Size = iStack_700;
    TStack_718._12_4_ = uStack_6fc;
    FCbWriter::AddString(aFStack_468,&TStack_718);
  }
  UE::FLogRecord::ConvertToCommonLog(param_1,&TStack_688,aFStack_468);
  FCbWriter::EndObject(aFStack_468);
  iStack_700 = (int)TStack_688.CurPos - (int)TStack_688.Base;
  TStack_718.Size = 6;
  pwStack_708 = (wchar_t *)TStack_688.Base;
  TStack_718.DataPtr = L"format";
  FCbWriter::SetName(aFStack_468,(TStringView<char8_t> *)&TStack_718);
  TStack_718._12_4_ = uStack_6fc;
  TStack_718.Size = iStack_700;
  TStack_718.DataPtr = pwStack_708;
  FCbWriter::AddString(aFStack_468,(TStringView<char8_t> *)&TStack_718);
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&TStack_688);
LAB_1418f88cc:
  FCbWriter::EndObject(aFStack_468);
  WriteAsJson(this,aFStack_468);
  FCbWriter::~FCbWriter(aFStack_468);
  return;
}

// SerializeRecordAsJson @ 1418f82d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOutputDeviceStdOutput::SerializeRecordAsJson(FOutputDeviceStdOutput *this,FLogRecord *param_1)

{
  Type TVar1;
  wchar_t *pwVar2;
  bool bVar3;
  FDateTime FVar4;
  TStringView<char> *pTVar5;
  void *pvVar6;
  size_t sVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_738 [32];
  TStringView<wchar_t> local_718;
  wchar_t *local_708;
  int iStack_700;
  undefined4 uStack_6fc;
  TStringView<char> local_6f8;
  TStringBuilderBase<char8_t> local_6e8;
  wchar_t local_6c8 [32];
  TStringBuilderBase<char8_t> local_688;
  wchar_t local_668 [256];
  FCbWriter local_468 [26];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_738;
  if ((GPrintLogCategory) && (param_1->Category != (FName)0x0)) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  if ((GPrintLogVerbosity) && ((param_1->Verbosity & VerbosityMask) != Log)) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  FCbWriter::FCbWriter(local_468,0x400);
  FCbWriter::BeginObject(local_468);
  FVar4 = UE::FLogTime::GetUtcTime(&param_1->Time);
  local_718.Size = 4;
                    /* WARNING: Load size is inaccurate */
  local_718.DataPtr = L"time";
  FCbWriter::AddDateTime(local_468,(TStringView<char8_t> *)&local_718,(FDateTime)*FVar4.Ticks);
  pTVar5 = UE::Logging::Private::GetLevel(&local_6f8,param_1->Verbosity);
  local_718.Size = 5;
  local_708 = (wchar_t *)pTVar5->DataPtr;
  iStack_700 = (int)*(undefined8 *)&pTVar5->Size;
  local_718.DataPtr = L"level";
  FCbWriter::SetName(local_468,(TStringView<char8_t> *)&local_718);
  local_718._12_4_ = uStack_6fc;
  local_718.Size = iStack_700;
  local_718.DataPtr = local_708;
  FCbWriter::AddString(local_468,(TStringView<char8_t> *)&local_718);
  UE::Logging::Private::AddMessage(local_468,param_1,bVar9,bVar10);
  if ((bVar9 == false) && (bVar10 == false)) {
    bVar3 = FCbObjectView::operator_bool((FCbObjectView *)&param_1->Fields);
    if (!bVar3) goto LAB_1418f88cc;
  }
  local_688.Base = (uchar *)local_668;
  local_688.CurPos = (uchar *)local_668;
  local_688.End = (uchar *)local_468;
  local_688.bIsDynamic = false;
  local_688.bIsExternal = false;
  if (bVar9 != false) {
    pvVar6 = FGenericPlatformString::Memcpy(local_668,"{_channel}: ",0xc);
    local_688.CurPos = (uchar *)((longlong)pvVar6 + 0xc);
  }
  if (bVar10 != false) {
    if (local_688.End < (FCbWriter *)((longlong)local_688.CurPos + 0xdU)) {
      TStringBuilderBase<char8_t>::Extend(&local_688,0xd);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_688.CurPos,"{_severity}: ",0xd);
    local_688.CurPos = (uchar *)((longlong)pvVar6 + 0xd);
  }
  local_718.Size = 10;
  local_718.DataPtr = L"properties";
  FCbWriter::SetName(local_468,(TStringView<char8_t> *)&local_718);
  FCbWriter::BeginObject(local_468);
  TVar1 = param_1->Verbosity;
  if (bVar9 != false) {
    local_718.Size = 8;
    local_718.DataPtr = L"_channel";
    FCbWriter::SetName(local_468,(TStringView<char8_t> *)&local_718);
    FCbWriter::BeginObject(local_468);
    local_718.Size = 5;
    local_708 = L"Channel";
    local_718.DataPtr = L"$type";
    iStack_700 = 7;
    FCbWriter::SetName(local_468,(TStringView<char8_t> *)&local_718);
    local_718.Size = iStack_700;
    local_718._12_4_ = uStack_6fc;
    local_718.DataPtr = local_708;
    FCbWriter::AddString(local_468,(TStringView<char8_t> *)&local_718);
    local_6e8.Base = (uchar *)local_6c8;
    local_6e8.bIsDynamic = false;
    local_6e8.bIsExternal = false;
    local_6e8.CurPos = (uchar *)local_6c8;
    local_6e8.End = (uchar *)&local_688;
    ::FName::AppendString(&param_1->Category,&local_6e8);
    iStack_700 = (int)local_6e8.CurPos - (int)local_6e8.Base;
    local_718.Size = 5;
    local_708 = (wchar_t *)local_6e8.Base;
    local_718.DataPtr = L"$text";
    FCbWriter::SetName(local_468,(TStringView<char8_t> *)&local_718);
    local_718.DataPtr = local_708;
    local_718.Size = iStack_700;
    local_718._12_4_ = uStack_6fc;
    FCbWriter::AddString(local_468,(TStringView<char8_t> *)&local_718);
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_6e8);
    FCbWriter::EndObject(local_468);
  }
  if (bVar10 != false) {
    local_718.Size = 9;
    local_718.DataPtr = L"_severity";
    FCbWriter::SetName(local_468,(TStringView<char8_t> *)&local_718);
    FCbWriter::BeginObject(local_468);
    local_718.Size = 5;
    local_708 = L"Severity";
    local_718.DataPtr = L"$type";
    iStack_700 = 8;
    FCbWriter::SetName(local_468,(TStringView<char8_t> *)&local_718);
    local_718._12_4_ = uStack_6fc;
    local_718.Size = iStack_700;
    local_718.DataPtr = local_708;
    FCbWriter::AddString(local_468,(TStringView<char8_t> *)&local_718);
    local_708 = ::ToString(TVar1);
    iVar8 = 0;
    if (local_708 != (wchar_t *)0x0) {
      sVar7 = wcslen(local_708);
      iVar8 = (int)sVar7;
    }
    local_718.Size = 5;
    local_718.DataPtr = L"$text";
    iStack_700 = iVar8;
    FCbWriter::SetName(local_468,(TStringView<char8_t> *)&local_718);
    local_718.DataPtr = local_708;
    local_718.Size = iStack_700;
    local_718._12_4_ = uStack_6fc;
    FCbWriter::AddString(local_468,&local_718);
    FCbWriter::EndObject(local_468);
  }
  pwVar2 = param_1->TextNamespace;
  if (pwVar2 != (wchar_t *)0x0) {
    local_708 = pwVar2;
    sVar7 = wcslen(pwVar2);
    local_718.Size = 3;
    iStack_700 = (int)sVar7;
    local_718.DataPtr = L"_ns";
    FCbWriter::SetName(local_468,(TStringView<char8_t> *)&local_718);
    local_718.DataPtr = local_708;
    local_718.Size = iStack_700;
    local_718._12_4_ = uStack_6fc;
    FCbWriter::AddString(local_468,&local_718);
  }
  pwVar2 = param_1->TextKey;
  if (pwVar2 != (wchar_t *)0x0) {
    local_708 = pwVar2;
    sVar7 = wcslen(pwVar2);
    local_718.Size = 4;
    iStack_700 = (int)sVar7;
    local_718.DataPtr = L"_key";
    FCbWriter::SetName(local_468,(TStringView<char8_t> *)&local_718);
    local_718.DataPtr = local_708;
    local_718.Size = iStack_700;
    local_718._12_4_ = uStack_6fc;
    FCbWriter::AddString(local_468,&local_718);
  }
  UE::FLogRecord::ConvertToCommonLog(param_1,&local_688,local_468);
  FCbWriter::EndObject(local_468);
  iStack_700 = (int)local_688.CurPos - (int)local_688.Base;
  local_718.Size = 6;
  local_708 = (wchar_t *)local_688.Base;
  local_718.DataPtr = L"format";
  FCbWriter::SetName(local_468,(TStringView<char8_t> *)&local_718);
  local_718._12_4_ = uStack_6fc;
  local_718.Size = iStack_700;
  local_718.DataPtr = local_708;
  FCbWriter::AddString(local_468,(TStringView<char8_t> *)&local_718);
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_688);
LAB_1418f88cc:
  FCbWriter::EndObject(local_468);
  WriteAsJson(this,local_468);
  FCbWriter::~FCbWriter(local_468);
  return;
}

// SerializeRecordAsText @ 1418f8920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOutputDeviceStdOutput::SerializeRecordAsText(FOutputDeviceStdOutput *this,FLogRecord *param_1)

{
  Type TVar1;
  undefined1 auStackY_468 [32];
  TStringBuilderBase<wchar_t> local_438;
  wchar_t local_418 [512];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_468;
  local_438.bIsDynamic = false;
  local_438.bIsExternal = false;
  local_438.Base = local_418;
  local_438.CurPos = local_418;
  local_438.End = (wchar_t *)local_18;
  UE::FLogRecord::FormatMessageTo(param_1,&local_438);
  TVar1 = param_1->Verbosity;
  if (local_438.End < local_438.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_438,1);
  }
  *local_438.CurPos = L'\0';
  if (TVar1 <= this->AllowedLogVerbosity) {
    if (this->bIsJsonOutput == false) {
      SerializeAsText(this,local_438.Base,TVar1,&param_1->Category,__real_bff0000000000000);
    }
    else {
      SerializeAsJson(this,local_438.Base,TVar1,&param_1->Category,__real_bff0000000000000);
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_438);
  return;
}

// WriteAsJson @ 141900300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOutputDeviceStdOutput::WriteAsJson(FOutputDeviceStdOutput *this,FCbWriter *param_1)

{
  ForElementType<unsigned_char> *pFVar1;
  ulong64 uVar2;
  FCbFieldViewIterator *pFVar3;
  FILE *_File;
  uchar *puVar4;
  undefined1 auStackY_8e8 [32];
  TMemoryView<void> local_8b8;
  FCbFieldView local_8a8;
  FCbFieldViewIterator local_898;
  TStringBuilderBase<char8_t> local_878;
  uchar local_858 [512];
  ForElementType<unsigned_char> local_658;
  ulong64 auStack_450 [3];
  TStringBuilderBase<wchar_t> local_438;
  wchar_t local_418 [512];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_8e8;
  auStack_450[1] = 0x200;
  local_658.SecondaryData = (ForElementType<unsigned_char>)0x0;
  auStack_450[0] = 0;
  uVar2 = FCbWriter::GetSaveSize(param_1);
  UE::Core::Private::
  ReallocGrow<2,TSizedInlineAllocator<512,64,TSizedDefaultAllocator<64>_>::ForElementType<unsigned_char>_>
            (1,1,uVar2,&local_658,(long64 *)auStack_450,(long64 *)(auStack_450 + 1));
  local_8b8.Data = &local_658;
  if (local_658.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    local_8b8.Data = (void *)local_658.SecondaryData;
  }
  local_8b8.Size = auStack_450[0];
  pFVar3 = FCbWriter::Save(param_1,&local_898,&local_8b8);
  local_8a8.TypeWithFlags = pFVar3->field_0x0;
  local_8a8.Error = pFVar3->field_0x1;
  local_8a8._2_2_ = *(undefined2 *)&pFVar3->field_0x2;
  local_8a8.NameLen = *(uint *)&pFVar3->field_0x4;
  local_8a8.Value = *(void **)&pFVar3->field_0x8;
  if (this->bIsConsoleOutput == false) {
    local_878.Base = local_858;
    local_878.bIsDynamic = false;
    local_878.bIsExternal = false;
    local_878.CurPos = local_858;
    local_878.End = local_658.InlineData;
    CompactBinaryToCompactJson(&local_8a8,&local_878);
    if (local_878.End < (ForElementType<unsigned_char> *)(local_878.CurPos + 1)) {
      TStringBuilderBase<char8_t>::Extend(&local_878,1);
    }
    *local_878.CurPos = '\n';
    puVar4 = local_878.CurPos + 1;
    pFVar1 = (ForElementType<unsigned_char> *)(local_878.CurPos + 2);
    local_878.CurPos = puVar4;
    if (local_878.End < pFVar1) {
      TStringBuilderBase<char8_t>::Extend(&local_878,1);
    }
    *local_878.CurPos = '\0';
    printf("%s");
    _File = (FILE *)__acrt_iob_func(1);
    fflush(_File);
    TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_878);
  }
  else {
    local_438.Base = local_418;
    local_438.bIsDynamic = false;
    local_438.bIsExternal = false;
    local_438.CurPos = local_418;
    local_438.End = (wchar_t *)local_18;
    CompactBinaryToCompactJson(&local_8a8,&local_438);
    if (local_438.End < local_438.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_438,1);
    }
    *local_438.CurPos = L'\n';
    local_438.CurPos = local_438.CurPos + 1;
    UE::Logging::Private::WriteLineToConsole(&local_438);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_438);
  }
  if (local_658.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_658.SecondaryData);
  }
  return;
}

