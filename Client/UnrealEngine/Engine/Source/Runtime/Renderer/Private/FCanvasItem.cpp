// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// Draw @ 1451c3c10

void __thiscall FCanvasItem::Draw(FCanvasItem *this,FCanvas *param_1,TVector2<double> *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
  uVar3 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
  uVar4 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
  lVar1 = this->_padding_;
  *(undefined4 *)&(this->Position).field0_0x0 = *(undefined4 *)&param_2->field0_0x0;
  *(undefined4 *)((longlong)&(this->Position).field0_0x0 + 4) = uVar2;
  *(undefined4 *)((longlong)&(this->Position).field0_0x0 + 8) = uVar3;
  *(undefined4 *)((longlong)&(this->Position).field0_0x0 + 0xc) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0001451c3c1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x18))();
  return;
}

// Draw @ 1451c3c30

void __thiscall FCanvasItem::Draw(FCanvasItem *this,FCanvas *param_1,float param_2,float param_3)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  (this->Position).field0_0x0._s_0.X = (double)param_2;
  (this->Position).field0_0x0._s_0.Y = (double)param_3;
                    /* WARNING: Could not recover jumptable at 0x0001451c3c4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x18))();
  return;
}

// SetColor @ 1451e3550

void __thiscall FCanvasItem::SetColor(FCanvasItem *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->Color).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8) = uVar1;
  return;
}

// ~FCanvasItem @ 145666ee0

void __thiscall FCanvasItem::~FCanvasItem(FCanvasItem *this)

{
  this->_padding_ = (longlong)&___7FCanvasItem__6B_;
  return;
}

