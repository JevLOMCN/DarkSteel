// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// FWindowsEventLogOutputDevice @ 141a9c4c0

/* WARNING: Enum "Type": Some values do not have unique names */

FWindowsEventLogOutputDevice * __thiscall
FWindowsEventLogOutputDevice::FWindowsEventLogOutputDevice(FWindowsEventLogOutputDevice *this)

{
  bool bVar1;
  wchar_t *pwVar2;
  HANDLE pvVar3;
  ForAnyElementType lpSourceName;
  int iVar4;
  FString local_38;
  FString local_28;
  FString local_18;
  
  FOutputDevice::FOutputDevice((FOutputDevice *)this);
  this->_padding_ = (longlong)&___7FWindowsEventLogOutputDevice__6B_;
  this->EventLog = (void *)0x0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Value(pwVar2,L"-Login=",&local_28,true,(wchar_t **)0x0);
  if (bVar1) {
    ::FString::operator=(&local_38,GInternalProjectName);
    iVar4 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar4);
    local_18.Data.ArrayNum = local_38.Data.ArrayNum;
  }
  else {
    GetCurrentProcessId();
    ::FString::PrintfImpl(&local_18,L"%s-PID%d");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    local_38.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_38.Data.ArrayMax = local_18.Data.ArrayMax;
    local_38.Data.ArrayNum = local_18.Data.ArrayNum;
  }
  lpSourceName.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    lpSourceName.Data = local_38.Data.AllocatorInstance.Data;
  }
  pvVar3 = RegisterEventSourceW((LPCWSTR)0x0,(LPCWSTR)lpSourceName.Data);
  this->EventLog = pvVar3;
  if ((pvVar3 == (HANDLE)0x0) && (1 < (byte)LogWindows._0_1_)) {
    GetLastError();
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FWindowsEventLogOutputDevice @ 141a9d400

void __thiscall
FWindowsEventLogOutputDevice::~FWindowsEventLogOutputDevice(FWindowsEventLogOutputDevice *this)

{
  this->_padding_ = (longlong)&___7FWindowsEventLogOutputDevice__6B_;
  if (this->EventLog != (HANDLE)0x0) {
    DeregisterEventSource(this->EventLog);
    this->EventLog = (void *)0x0;
  }
  FOutputDevice::~FOutputDevice((FOutputDevice *)this);
  return;
}

// Flush @ 141aa6f80

void __thiscall FWindowsEventLogOutputDevice::Flush(FWindowsEventLogOutputDevice *this)

{
  return;
}

// Serialize @ 141ac03a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWindowsEventLogOutputDevice::Serialize
          (FWindowsEventLogOutputDevice *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  WORD wType;
  DWORD dwEventID;
  wchar_t *local_res10 [3];
  
  if (this->EventLog != (HANDLE)0x0) {
    if (param_2 == Error) {
      wType = 1;
      dwEventID = 0xc0000001;
    }
    else {
      if (param_2 != Warning) {
        return;
      }
      wType = 2;
      dwEventID = 0x80000002;
    }
    local_res10[0] = param_1;
    ReportEventW(this->EventLog,wType,0,dwEventID,(PSID)0x0,1,0,local_res10,(LPVOID)0x0);
  }
  return;
}

// TearDown @ 141ac29c0

void __thiscall FWindowsEventLogOutputDevice::TearDown(FWindowsEventLogOutputDevice *this)

{
  if (this->EventLog != (HANDLE)0x0) {
    DeregisterEventSource(this->EventLog);
    this->EventLog = (void *)0x0;
  }
  return;
}

