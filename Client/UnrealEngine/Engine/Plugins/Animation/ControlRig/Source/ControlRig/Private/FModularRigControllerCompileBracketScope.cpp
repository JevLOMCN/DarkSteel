// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// FModularRigControllerCompileBracketScope @ 14a21f510

FModularRigControllerCompileBracketScope * __thiscall
FModularRigControllerCompileBracketScope::FModularRigControllerCompileBracketScope
          (FModularRigControllerCompileBracketScope *this,UModularRigController *param_1)

{
  bool bVar1;
  EModularRigNotification local_res8 [32];
  
  this->Controller = param_1;
  bVar1 = param_1->bSuspendNotifications;
  this->bSuspendNotifications = bVar1;
  if (bVar1 == false) {
    local_res8[0] = InteractionBracketOpened;
    UModularRigController::Notify(param_1,local_res8,(FRigModuleReference *)0x0);
  }
  return this;
}

// ~FModularRigControllerCompileBracketScope @ 14a225c00

void __thiscall
FModularRigControllerCompileBracketScope::~FModularRigControllerCompileBracketScope
          (FModularRigControllerCompileBracketScope *this)

{
  code *pcVar1;
  bool bVar2;
  EModularRigNotification local_res8 [32];
  
  if (this->Controller == (UModularRigController *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Controller",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ModularRigController.cpp"
                       ,0xa64,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bSuspendNotifications == false) {
    local_res8[0] = InteractionBracketClosed;
    UModularRigController::Notify(this->Controller,local_res8,(FRigModuleReference *)0x0);
  }
  return;
}

