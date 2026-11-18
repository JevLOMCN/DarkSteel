// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Update @ 14885fd20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FTakeEditorScreenshotCommand::Update(FTakeEditorScreenshotCommand *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedRef<SWindow,1> local_18;
  
  if ((this->ScreenshotParameters).CurrentWindow.Object == (SWindow *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_18.SharedReferenceCount.ReferenceController =
       (this->ScreenshotParameters).CurrentWindow.SharedReferenceCount.ReferenceController;
  local_18.Object = (this->ScreenshotParameters).CurrentWindow.Object;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_18.Object == (SWindow *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  AutomationCommon::SaveWindowAsScreenshot(&local_18,&(this->ScreenshotParameters).ScreenshotName);
  return true;
}

