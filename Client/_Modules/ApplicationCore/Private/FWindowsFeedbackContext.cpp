// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 1

// YesNof @ 14240ccf0

bool __thiscall FWindowsFeedbackContext::YesNof(FWindowsFeedbackContext *this,FText *param_1)

{
  bool bVar1;
  int iVar2;
  FThreadHeartBeat *pFVar3;
  FText *this_00;
  FString *pFVar4;
  wchar_t *lpCaption;
  FText local_18;
  
  if ((GIsClient) && (!GIsSilent)) {
    bVar1 = FApp::IsUnattended();
    if (!bVar1) {
      pFVar3 = FThreadHeartBeat::GetNoInit();
      if (pFVar3 != (FThreadHeartBeat *)0x0) {
        FThreadHeartBeat::SuspendHeartBeat(pFVar3,false);
      }
      this_00 = FText::AsLocalizable_Advanced_LocText(&local_18,L"Core",L"Question",L"Question");
      pFVar4 = FText::ToString(this_00);
      if ((pFVar4->Data).ArrayNum == 0) {
        lpCaption = L"";
      }
      else {
        lpCaption = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = FText::ToString(param_1);
      iVar2 = MessageBoxW((HWND)0x0,(LPCWSTR)(pFVar4->Data).AllocatorInstance.Data,lpCaption,0x2004)
      ;
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
      if (pFVar3 != (FThreadHeartBeat *)0x0) {
        pFVar3 = FThreadHeartBeat::GetNoInit();
        if (pFVar3 != (FThreadHeartBeat *)0x0) {
          FThreadHeartBeat::ResumeHeartBeat(pFVar3,false);
        }
      }
      return iVar2 == 6;
    }
  }
  return false;
}

