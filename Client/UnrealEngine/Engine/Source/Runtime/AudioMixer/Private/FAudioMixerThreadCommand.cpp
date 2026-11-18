// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 4

// FAudioMixerThreadCommand @ 1464d75f0

FAudioMixerThreadCommand * __thiscall
Audio::FMixerSourceManager::FAudioMixerThreadCommand::FAudioMixerThreadCommand
          (FAudioMixerThreadCommand *this,TFunction<void___cdecl(void)> *param_1,char *param_2,
          bool param_3)

{
  undefined8 uVar1;
  
  *(undefined8 *)&this->Function = *(undefined8 *)param_1;
  *(undefined8 *)&(this->Function).field_0x28 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  uVar1 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&(this->Function).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&(this->Function).field_0x18 = uVar1;
  *(undefined8 *)&(this->Function).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  if (*(longlong *)&this->Function != 0) {
    *(undefined8 *)param_1 = 0;
  }
  this->StartExecuteTimeInCycles = 0;
  this->bDeferExecution = param_3;
  this->DebugString = param_2;
  return this;
}

// operator() @ 1464e8400

void __thiscall
Audio::FMixerSourceManager::FAudioMixerThreadCommand::operator()(FAudioMixerThreadCommand *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  this->StartExecuteTimeInCycles = (ulong64)local_res8;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Function);
  plVar1 = *(longlong **)&(this->Function).field_0x28;
  pcVar2 = *(code **)&this->Function;
  plVar4 = (longlong *)&(this->Function).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3);
  this->StartExecuteTimeInCycles = 0;
  return;
}

// GetExecuteTimeInSeconds @ 1465024c0

float __thiscall
Audio::FMixerSourceManager::FAudioMixerThreadCommand::GetExecuteTimeInSeconds
          (FAudioMixerThreadCommand *this)

{
  ulonglong uVar1;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  uVar1 = local_res8[0].QuadPart - this->StartExecuteTimeInCycles;
  if (-1 < (longlong)uVar1) {
    return (float)((double)(longlong)uVar1 * FGenericPlatformTime::SecondsPerCycle64);
  }
  return (float)((double)uVar1 * FGenericPlatformTime::SecondsPerCycle64);
}

// GetSafeDebugString @ 1465057d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
Audio::FMixerSourceManager::FAudioMixerThreadCommand::GetSafeDebugString
          (FAudioMixerThreadCommand *this,FString *__return_storage_ptr__)

{
  char *_Str;
  size_t sVar1;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  _Str = this->DebugString;
  local_148 = 0;
  if (_Str == (char *)0x0) {
    local_138.Ptr = L"";
  }
  else {
    local_138._padding_ = 0;
    sVar1 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar1,Yes);
  }
  ::FString::FString(__return_storage_ptr__,local_138.Ptr);
  if ((_Str != (char *)0x0) && ((void *)local_138._padding_ != (void *)0x0)) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

