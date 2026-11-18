// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 1

// GetUserWidget @ 14a754a80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UUserWidget * __thiscall UUserWidgetExtension::GetUserWidget(UUserWidgetExtension *this)

{
  code *pcVar1;
  bool bVar2;
  UUserWidget *pUVar3;
  
  if ((*(uint *)&this->field_0x8 & 0x10) == 0) {
    return *(UUserWidget **)&this->field_0x20;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1637797074370035733>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                     ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UUserWidget *)(*pcVar1)();
    return pUVar3;
  }
  return (UUserWidget *)0x0;
}

