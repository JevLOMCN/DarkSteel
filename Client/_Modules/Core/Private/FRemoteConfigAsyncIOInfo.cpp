// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FRemoteConfigAsyncIOInfo @ 141917910

FRemoteConfigAsyncIOInfo * __thiscall
FRemoteConfigAsyncIOInfo::FRemoteConfigAsyncIOInfo(FRemoteConfigAsyncIOInfo *this,wchar_t *param_1)

{
  (this->Buffer).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buffer).Data.ArrayNum = 0;
  (this->Buffer).Data.ArrayMax = 0;
  (this->TimeStamp).Ticks = 0;
  this->bReadIOFailed = false;
  this->bWasProcessed = false;
  wcscpy(this->DefaultIniFile,param_1);
  return this;
}

// operator= @ 14191d830

FRemoteConfigAsyncIOInfo * __thiscall
FRemoteConfigAsyncIOInfo::operator=
          (FRemoteConfigAsyncIOInfo *this,FRemoteConfigAsyncIOInfo *param_1)

{
  wchar_t *pwVar1;
  longlong lVar2;
  
  ::FString::operator=(&this->Buffer,&param_1->Buffer);
  pwVar1 = this->DefaultIniFile;
  (this->TimeStamp).Ticks = (param_1->TimeStamp).Ticks;
  lVar2 = 0x200;
  this->StartReadTime = param_1->StartReadTime;
  this->StartWriteTime = param_1->StartWriteTime;
  this->bReadIOFailed = param_1->bReadIOFailed;
  this->bWasProcessed = param_1->bWasProcessed;
  do {
    *pwVar1 = *(wchar_t *)(((longlong)param_1 - (longlong)this) + (longlong)pwVar1);
    pwVar1[1] = *(wchar_t *)(((longlong)param_1 - (longlong)this) + 2 + (longlong)pwVar1);
    pwVar1 = pwVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return this;
}

