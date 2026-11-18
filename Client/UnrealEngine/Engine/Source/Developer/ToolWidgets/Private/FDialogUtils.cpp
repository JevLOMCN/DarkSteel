// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 1

// GetMessageCategoryIcon @ 142dad180

FSlateBrush * __cdecl FDialogUtils::GetMessageCategoryIcon(EAppMsgCategory param_1)

{
  ISlateStyle *pIVar1;
  FSlateBrush *pFVar2;
  char *pcVar3;
  ulonglong uVar4;
  FName FVar5;
  FName local_res10 [3];
  
  uVar4 = 0;
  FVar5.ComparisonIndex.Value = 0;
  FVar5.Number = 0;
  if (param_1 == Warning) {
    pcVar3 = "Icons.WarningWithColor.Large";
  }
  else if (param_1 == Error) {
    pcVar3 = "Icons.ErrorWithColor.Large";
  }
  else if (param_1 == Success) {
    pcVar3 = "Icons.SuccessWithColor.Large";
  }
  else {
    if (param_1 != Info) goto LAB_142dad1dd;
    pcVar3 = "Icons.InfoWithColor.Large";
  }
  ::FName::FName(local_res10,pcVar3);
  uVar4 = (ulonglong)local_res10[0] >> 0x20;
  FVar5 = local_res10[0];
LAB_142dad1dd:
  uVar4 = (ulonglong)FVar5 & 0xffffffff | uVar4 << 0x20;
  if (uVar4 != 0) {
    pIVar1 = FAppStyle::Get();
                    /* WARNING: Could not recover jumptable at 0x000142dad206. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar2 = (FSlateBrush *)(**(code **)((longlong)*pIVar1 + 0x50))(pIVar1,uVar4,0,0);
    return pFVar2;
  }
  return (FSlateBrush *)0x0;
}

