// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 2

// FView @ 14a73f570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FView * __thiscall UE::MVVM::FDebugging::FView::FView(FView *this,UMVVMView *param_1)

{
  code *pcVar1;
  bool bVar2;
  FView *pFVar3;
  UUserWidget *pUVar4;
  
  if ((param_1->_padding_ & 0x10) == 0) {
    pUVar4 = (UUserWidget *)param_1->_padding_;
  }
  else {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1637797074370035733>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                       ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FView *)(*pcVar1)();
      return pFVar3;
    }
    pUVar4 = (UUserWidget *)0x0;
  }
  this->UserWidget = pUVar4;
  this->View = param_1;
  return this;
}

// FView @ 14a73f5e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FView * __thiscall
UE::MVVM::FDebugging::FView::FView(FView *this,UUserWidget *param_1,UMVVMView *param_2)

{
  this->UserWidget = param_1;
  this->View = param_2;
  return this;
}

