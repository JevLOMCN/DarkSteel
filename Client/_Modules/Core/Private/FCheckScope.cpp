// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FCheckScope @ 141a6b9a0

FCheckScope * __thiscall FCheckScope::FCheckScope(FCheckScope *this,char *param_1)

{
  FOutputDeviceError *pFVar1;
  FCheckScopeOutputDeviceError *this_00;
  
  this_00 = ::operator_new(0x30);
  pFVar1 = GError;
  if (this_00 == (FCheckScopeOutputDeviceError *)0x0) {
    this_00 = (FCheckScopeOutputDeviceError *)0x0;
  }
  else {
    FOutputDevice::FOutputDevice((FOutputDevice *)this_00);
    this_00->DeviceError = pFVar1;
    this_00->_padding_ = (longlong)&___7FCheckScopeOutputDeviceError__6B_;
    this_00->_padding_ = 0;
    this_00->ExpectedMsg = param_1;
    this_00->Count = 0;
  }
  this->DeviceError = this_00;
  this->bIgnoreDebugger = GIgnoreDebugger;
  this->bCriticalError = GIsCriticalError;
  GIgnoreDebugger = true;
  GError = (FOutputDeviceError *)this->DeviceError;
  GIsCriticalError = true;
  return this;
}

// FCheckScope @ 141a6ba50

FCheckScope * __thiscall FCheckScope::FCheckScope(FCheckScope *this)

{
  FOutputDeviceError *pFVar1;
  FCheckScopeOutputDeviceError *this_00;
  
  this_00 = ::operator_new(0x30);
  pFVar1 = GError;
  if (this_00 != (FCheckScopeOutputDeviceError *)0x0) {
    FOutputDevice::FOutputDevice((FOutputDevice *)this_00);
    this_00->DeviceError = pFVar1;
    this_00->_padding_ = 0;
    this_00->_padding_ = (longlong)&___7FCheckScopeOutputDeviceError__6B_;
    this_00->ExpectedMsg = (char *)0x0;
    this_00->Count = 0;
  }
  this->DeviceError = this_00;
  this->bIgnoreDebugger = GIgnoreDebugger;
  this->bCriticalError = GIsCriticalError;
  GIgnoreDebugger = true;
  GError = (FOutputDeviceError *)this->DeviceError;
  GIsCriticalError = true;
  return this;
}

// ~FCheckScope @ 141a72a30

void __thiscall FCheckScope::~FCheckScope(FCheckScope *this)

{
  FCheckScopeOutputDeviceError *pFVar1;
  
  GIgnoreDebugger = this->bIgnoreDebugger;
  GError = this->DeviceError->DeviceError;
  GIsCriticalError = this->bCriticalError;
  pFVar1 = this->DeviceError;
  if (pFVar1 != (FCheckScopeOutputDeviceError *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141a72a62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// GetCount @ 141a80a00

int __thiscall FCheckScope::GetCount(FCheckScope *this)

{
  return this->DeviceError->Count;
}

