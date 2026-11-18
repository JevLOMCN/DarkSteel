// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// SetWindowButtonsVisibility @ 146a95650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWindowTitleBarArea::SetWindowButtonsVisibility(SWindowTitleBarArea *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  TAttribute<EVisibility> local_28;
  
  if ((this->WindowButtonsBox).Object == (SVerticalBox *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28.Value.Value.Value = EVisibility::Collapsed.Value.Value;
  if (param_1) {
    local_28.Value.Value.Value = EVisibility::Visible.Value.Value;
  }
  local_28.Getter._16_8_ = 0;
  local_28.bIsSet = true;
  local_28.Getter._0_8_ = 0;
  local_28.Getter._8_8_ = 0;
  SPanel::SetVisibility((SPanel *)(this->WindowButtonsBox).Object,&local_28);
  return;
}

