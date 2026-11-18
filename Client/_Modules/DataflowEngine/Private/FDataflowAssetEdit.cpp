// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 3

// FDataflowAssetEdit @ 1462cd370

FDataflowAssetEdit * __thiscall
FDataflowAssetEdit::FDataflowAssetEdit
          (FDataflowAssetEdit *this,UDataflow *param_1,TFunctionRef<void___cdecl(void)> *param_2)

{
  *(undefined8 *)&this->PostEditCallback = *(undefined8 *)param_2;
  *(undefined8 *)&(this->PostEditCallback).field_0x8 = 0;
  *(undefined8 *)&(this->PostEditCallback).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  this->Asset = param_1;
  return this;
}

// ~FDataflowAssetEdit @ 1462cfc20

void __thiscall FDataflowAssetEdit::~FDataflowAssetEdit(FDataflowAssetEdit *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001462cfc27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)&this->PostEditCallback)(*(undefined8 *)&(this->PostEditCallback).field_0x8);
  return;
}

// GetGraph @ 1462dd190

FGraph * __thiscall FDataflowAssetEdit::GetGraph(FDataflowAssetEdit *this)

{
  if (this->Asset != (UDataflow *)0x0) {
    return (this->Asset->Dataflow).Object;
  }
  return (FGraph *)0x0;
}

