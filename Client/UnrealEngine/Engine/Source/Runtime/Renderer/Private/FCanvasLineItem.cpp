// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// Draw @ 14567aaa0

void __thiscall
FCanvasLineItem::Draw
          (FCanvasLineItem *this,FCanvas *param_1,TVector2<double> *param_2,
          TVector2<double> *param_3)

{
  (this->Origin).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->Origin).field0_0x0._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  (this->EndPos).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  (this->EndPos).field0_0x0._s_0.Y = (param_3->field0_0x0)._s_0.Y;
                    /* WARNING: Could not recover jumptable at 0x00014567aac1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))();
  return;
}

// Draw @ 14567aad0

void __thiscall
FCanvasLineItem::Draw(FCanvasLineItem *this,FCanvas *param_1,TVector2<double> *param_2)

{
  (this->Origin).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->Origin).field0_0x0._s_0.Y = (param_2->field0_0x0)._s_0.Y;
                    /* WARNING: Could not recover jumptable at 0x00014567aae2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))();
  return;
}

// Draw @ 14567aaf0

void __thiscall
FCanvasLineItem::Draw(FCanvasLineItem *this,FCanvas *param_1,TVector<double> *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
  uVar3 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
  uVar4 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
  lVar1 = this->_padding_;
  *(undefined4 *)&(this->Origin).field0_0x0 = *(undefined4 *)&param_2->field0_0x0;
  *(undefined4 *)((longlong)&(this->Origin).field0_0x0 + 4) = uVar2;
  *(undefined4 *)((longlong)&(this->Origin).field0_0x0 + 8) = uVar3;
  *(undefined4 *)((longlong)&(this->Origin).field0_0x0 + 0xc) = uVar4;
  (this->Origin).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
                    /* WARNING: Could not recover jumptable at 0x00014567ab06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x18))();
  return;
}

// Draw @ 14567ab10

void __thiscall
FCanvasLineItem::Draw(FCanvasLineItem *this,FCanvas *param_1,float param_2,float param_3)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  (this->Origin).field0_0x0._s_0.X = (double)param_2;
  (this->Origin).field0_0x0._s_0.Y = (double)param_3;
                    /* WARNING: Could not recover jumptable at 0x00014567ab2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x18))();
  return;
}

// Draw @ 14567ab40

void __thiscall
FCanvasLineItem::Draw
          (FCanvasLineItem *this,FCanvas *param_1,float param_2,float param_3,float param_4)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  (this->Origin).field0_0x0._s_0.X = (double)param_2;
  (this->Origin).field0_0x0._s_0.Z = (double)param_4;
  (this->Origin).field0_0x0._s_0.Y = (double)param_3;
                    /* WARNING: Could not recover jumptable at 0x00014567ab69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x18))();
  return;
}

