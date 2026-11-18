// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 1

// TAttribute<FSlateIcon><FScriptSlateIcon> @ 142c309a0

TAttribute<FSlateIcon> * __thiscall
TAttribute<FSlateIcon>::TAttribute<FSlateIcon><FScriptSlateIcon>
          (TAttribute<FSlateIcon> *this,FScriptSlateIcon *param_1)

{
  FName FVar1;
  FName FVar2;
  
  FVar1.ComparisonIndex.Value = 0;
  FVar1.Number = 0;
  FVar2 = param_1->SmallStyleName;
  if (((param_1->SmallStyleName == (FName)0x0) &&
      (FVar2 = FVar1, param_1->StyleSetName == (FName)0x0)) && (param_1->StyleName == (FName)0x0)) {
    FSlateIcon::FSlateIcon(&this->Value);
  }
  else {
    FSlateIcon::FSlateIcon(&this->Value,param_1->StyleSetName,param_1->StyleName,FVar2,(FName)0x0);
  }
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

