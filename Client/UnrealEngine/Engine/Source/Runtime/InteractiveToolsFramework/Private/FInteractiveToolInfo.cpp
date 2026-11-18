// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 1

// FInteractiveToolInfo @ 1496d24a0

FInteractiveToolInfo * __thiscall
FInteractiveToolInfo::FInteractiveToolInfo(FInteractiveToolInfo *this)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res8 [8];
  
  pFVar2 = FText::GetEmpty();
  (this->ToolDisplayName).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (this->ToolDisplayName).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->ToolDisplayName).Flags = pFVar2->Flags;
  pFVar2 = FText::GetEmpty();
  (this->ToolDisplayMessage).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (this->ToolDisplayMessage).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->ToolDisplayMessage).Flags = pFVar2->Flags;
  this->ToolIcon = (FSlateBrush *)0x0;
  return this;
}

