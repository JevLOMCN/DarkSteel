// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Update @ 14885fc50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FTakeActiveEditorScreenshotCommand::Update(FTakeActiveEditorScreenshotCommand *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FSlateApplication *pFVar4;
  longlong *plVar5;
  TSharedRef<SWindow,1> local_28;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pFVar4 = FSlateApplication::Get();
  plVar5 = (longlong *)(**(code **)(*(longlong *)pFVar4 + 0x30))(pFVar4,local_18);
  if (*plVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)plVar5[1];
  local_28.Object = (SWindow *)*plVar5;
  plVar5[1] = 0;
  *plVar5 = 0;
  if (local_28.Object == (SWindow *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  AutomationCommon::SaveWindowAsScreenshot(&local_28,&this->ScreenshotName);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return true;
}

