// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FNetworkProfilerHeader @ 148014920

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

FNetworkProfilerHeader * __thiscall
FNetworkProfilerHeader::FNetworkProfilerHeader(FNetworkProfilerHeader *this)

{
  this->Magic = 0x1dbf348c;
  (this->Tag).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tag).Data.ArrayNum = 0;
  (this->Tag).Data.ArrayMax = 0;
  (this->GameName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameName).Data.ArrayNum = 0;
  (this->GameName).Data.ArrayMax = 0;
  (this->URL).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->URL).Data.ArrayNum = 0;
  (this->URL).Data.ArrayMax = 0;
  this->Version = Latest;
  return this;
}

// Reset @ 148054210

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

void __thiscall FNetworkProfilerHeader::Reset(FNetworkProfilerHeader *this,FURL *param_1)

{
  FScriptContainerElement *pFVar1;
  wchar_t *pwVar2;
  FString *pFVar3;
  FString *pFVar4;
  FString local_18;
  
  pwVar2 = FCommandLine::Get();
  FParse::Value(pwVar2,L"NETWORKPROFILER=",&this->Tag,true,(wchar_t **)0x0);
  ::FString::operator=(&this->GameName,GInternalProjectName);
  pFVar3 = FURL::ToString(param_1,&local_18,false);
  pFVar4 = &this->URL;
  if (pFVar4 != pFVar3) {
    pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar4->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->URL).Data.ArrayNum = (pFVar3->Data).ArrayNum;
    (this->URL).Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

