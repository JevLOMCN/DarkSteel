// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 3

// FNewToolMenuChoice @ 142c37eb0

FNewToolMenuChoice * __thiscall
FNewToolMenuChoice::FNewToolMenuChoice(FNewToolMenuChoice *this,FNewToolMenuChoice *param_1)

{
  *(undefined8 *)&this->OnGetContent = 0;
  *(undefined8 *)&(this->OnGetContent).field_0x8 = 0;
  *(undefined4 *)&(this->OnGetContent).field_0x10 = 0;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->OnGetContent,&param_1->OnGetContent);
  *(undefined8 *)&this->NewToolMenuWidget = 0;
  *(undefined8 *)&(this->NewToolMenuWidget).field_0x8 = 0;
  *(undefined4 *)&(this->NewToolMenuWidget).field_0x10 = 0;
  TDelegate<TSharedRef<SWidget,1>___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->NewToolMenuWidget,&param_1->NewToolMenuWidget);
  *(undefined8 *)&this->NewToolMenu = 0;
  *(undefined8 *)&(this->NewToolMenu).field_0x8 = 0;
  *(undefined4 *)&(this->NewToolMenu).field_0x10 = 0;
  TDelegate<void___cdecl(UToolMenu_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->NewToolMenu,&param_1->NewToolMenu);
  *(undefined8 *)&this->NewMenuLegacy = 0;
  *(undefined8 *)&(this->NewMenuLegacy).field_0x8 = 0;
  *(undefined4 *)&(this->NewMenuLegacy).field_0x10 = 0;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->NewMenuLegacy,&param_1->NewMenuLegacy);
  return this;
}

// ~FNewToolMenuChoice @ 142c3c060

void __thiscall FNewToolMenuChoice::~FNewToolMenuChoice(FNewToolMenuChoice *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->NewMenuLegacy);
  pvVar1 = *(void **)&(this->NewMenuLegacy).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->NewMenuLegacy);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->NewToolMenu);
  pvVar1 = *(void **)&(this->NewToolMenu).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->NewToolMenu);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->NewToolMenuWidget);
  pvVar1 = *(void **)&(this->NewToolMenuWidget).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->NewToolMenuWidget);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  pvVar1 = *(void **)&(this->OnGetContent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// operator= @ 142c3da10

FNewToolMenuChoice * __thiscall
FNewToolMenuChoice::operator=(FNewToolMenuChoice *this,FNewToolMenuChoice *param_1)

{
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->OnGetContent,&param_1->OnGetContent);
  TDelegate<TSharedRef<SWidget,1>___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->NewToolMenuWidget,&param_1->NewToolMenuWidget);
  TDelegate<void___cdecl(UToolMenu_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->NewToolMenu,&param_1->NewToolMenu);
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->NewMenuLegacy,&param_1->NewMenuLegacy);
  return this;
}

