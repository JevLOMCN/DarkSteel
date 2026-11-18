// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DesktopPlatform
// Functions: 3

// StartupModule @ 142d1a0d0

void __thiscall FDesktopPlatformModule::StartupModule(FDesktopPlatformModule *this)

{
  bool bVar1;
  FDesktopPlatformBase *this_00;
  
  bVar1 = FNullPlatformApplicationMisc::IsUsingNullApplication();
  if (bVar1) {
    this_00 = ::operator_new(0x138);
    if (this_00 != (FDesktopPlatformBase *)0x0) {
      FDesktopPlatformBase::FDesktopPlatformBase(this_00);
      this_00->_padding_ = (longlong)&___7FDesktopPlatformNull__6B_;
      goto LAB_142d1a140;
    }
  }
  else {
    this_00 = ::operator_new(0x138);
    if (this_00 != (FDesktopPlatformBase *)0x0) {
      memset(&this_00->CurrentEngineIdentifier,0,0x130);
      FDesktopPlatformBase::FDesktopPlatformBase(this_00);
      this_00->_padding_ = (longlong)&___7FDesktopPlatformWindows__6B_;
      goto LAB_142d1a140;
    }
  }
  this_00 = (FDesktopPlatformBase *)0x0;
LAB_142d1a140:
  this->DesktopPlatform = (IDesktopPlatform *)this_00;
  FWindowsPlatformMisc::SetEnvironmentVar(L"UE_DesktopUnrealProcess",L"1");
  return;
}

// ShutdownModule @ 142d1a170

void __thiscall FDesktopPlatformModule::ShutdownModule(FDesktopPlatformModule *this)

{
  IDesktopPlatform *pIVar1;
  
  FWindowsPlatformMisc::SetEnvironmentVar(L"UE_DesktopUnrealProcess",L"0");
  pIVar1 = this->DesktopPlatform;
  if (pIVar1 != (IDesktopPlatform *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
    this->DesktopPlatform = (IDesktopPlatform *)0x0;
  }
  return;
}

// GetSingleton @ 142d1a1c0

IDesktopPlatform * __thiscall FDesktopPlatformModule::GetSingleton(FDesktopPlatformModule *this)

{
  return this->DesktopPlatform;
}

