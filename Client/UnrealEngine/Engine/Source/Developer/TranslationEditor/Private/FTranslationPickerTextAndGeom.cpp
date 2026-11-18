// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TranslationEditor
// Functions: 1

// FTranslationPickerTextAndGeom @ 146b98180

/* WARNING: Type propagation algorithm not settling */

FTranslationPickerTextAndGeom * __thiscall
FTranslationPickerTextAndGeom::FTranslationPickerTextAndGeom
          (FTranslationPickerTextAndGeom *this,FText *param_1,FPaintGeometry *param_2)

{
  ITextData *pIVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  
  (this->Text).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->TextData).Reference;
  (this->Text).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->Text).Flags = param_1->Flags;
  uVar2 = *(undefined8 *)&param_2->DrawScale;
  (this->Geometry).DrawPosition.field0_0x0 = (param_2->DrawPosition).field0_0x0;
  *(undefined8 *)&(this->Geometry).DrawScale = uVar2;
  uVar2 = *(undefined8 *)((longlong)&(param_2->LocalSize).field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Geometry).DrawSize.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(param_2->DrawSize).field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Geometry).LocalSize.field0_0x0 + 4) = uVar2;
  uVar2 = *(undefined8 *)((param_2->AccumulatedRenderTransform).M.M[1] + 1);
  *(undefined8 *)((this->Geometry).AccumulatedRenderTransform.M.M[0] + 1) =
       *(undefined8 *)((param_2->AccumulatedRenderTransform).M.M[0] + 1);
  *(undefined8 *)((this->Geometry).AccumulatedRenderTransform.M.M[1] + 1) = uVar2;
  *(undefined8 *)((longlong)&(this->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(param_2->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  return this;
}

