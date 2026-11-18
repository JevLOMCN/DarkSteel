// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// ReIndex @ 1424a2380

FSlateInvalidationWidgetIndex __thiscall
FSlateInvalidationWidgetList::IProcessChildOrderInvalidationCallback::FReIndexOperation::ReIndex
          (FReIndexOperation *this,FSlateInvalidationWidgetIndex param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  FSlateInvalidationWidgetIndex FVar4;
  undefined4 in_register_00000014;
  ushort *puVar5;
  undefined4 in_R8D;
  short sStackX_1a;
  
  puVar5 = (ushort *)CONCAT44(in_register_00000014,param_1);
  uVar1 = (this->Range->InclusiveMax).ArrayIndex;
  if ((ushort)in_R8D != uVar1) {
    *(undefined4 *)puVar5 = in_R8D;
    return param_1;
  }
  if ((this->Range->InclusiveMin).ArrayIndex != uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Range.GetInclusiveMinWidgetIndex().ArrayIndex == Range.GetInclusiveMaxWidgetIndex().ArrayIndex"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                       ,0x21,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FSlateInvalidationWidgetIndex)(*pcVar2)();
      return FVar4;
    }
  }
  uVar1 = (this->ReIndexTarget).ElementIndex;
  *puVar5 = (this->ReIndexTarget).ArrayIndex;
  sStackX_1a = (short)((uint)in_R8D >> 0x10);
  puVar5[1] = (uVar1 - (this->Range->InclusiveMin).ElementIndex) + sStackX_1a;
  return param_1;
}

