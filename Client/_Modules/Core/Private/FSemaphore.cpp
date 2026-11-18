// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FSemaphore @ 14161e440

FSemaphore * __thiscall
FGenericPlatformProcess::FSemaphore::FSemaphore(FSemaphore *this,FString *param_1)

{
  wchar_t *_Source;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Source = L"";
  }
  else {
    _Source = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  this->_padding_ = (longlong)&___7FSemaphore_FGenericPlatformProcess__6B_;
  wcsncpy(this->Name,_Source,0x7f);
  this->Name[0x7f] = L'\0';
  this->_padding_ = (longlong)&___7FSemaphore_FGenericPlatformProcess__6B_;
  return this;
}

// FSemaphore @ 14161e4b0

FSemaphore * __thiscall
FGenericPlatformProcess::FSemaphore::FSemaphore(FSemaphore *this,wchar_t *param_1)

{
  this->_padding_ = (longlong)&___7FSemaphore_FGenericPlatformProcess__6B_;
  wcsncpy(this->Name,param_1,0x7f);
  this->Name[0x7f] = L'\0';
  return this;
}

// ~FSemaphore @ 1416210a0

void __thiscall FGenericPlatformProcess::FSemaphore::~FSemaphore(FSemaphore *this)

{
  this->_padding_ = (longlong)&___7FSemaphore_FGenericPlatformProcess__6B_;
  return;
}

