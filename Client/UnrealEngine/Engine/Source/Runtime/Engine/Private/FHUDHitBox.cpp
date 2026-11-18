// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FHUDHitBox @ 147bb9050

FHUDHitBox * __thiscall
FHUDHitBox::FHUDHitBox
          (FHUDHitBox *this,TVector2<double> *param_1,TVector2<double> *param_2,FName *param_3,
          bool param_4,int param_5)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->Coords).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Coords).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (this->Size).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->Size).field0_0x0._s_0.Y = dVar1;
  this->Name = *param_3;
  this->bConsumesInput = param_4;
  this->Priority = param_5;
  return this;
}

// Contains @ 147bce4b0

bool __thiscall FHUDHitBox::Contains(FHUDHitBox *this,TVector2<double> *param_1)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  
  dVar1 = (this->Coords).field0_0x0._s_0.X;
  bVar3 = false;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  if ((dVar1 <= dVar2) && (dVar2 <= dVar1 + (this->Size).field0_0x0._s_0.X)) {
    dVar1 = (this->Coords).field0_0x0._s_0.Y;
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    if (dVar1 <= dVar2) {
      bVar3 = false;
      if (dVar2 <= dVar1 + (this->Size).field0_0x0._s_0.Y) {
        bVar3 = true;
      }
    }
  }
  return bVar3;
}

// Draw @ 147bd7f90

void __thiscall FHUDHitBox::Draw(FHUDHitBox *this,FCanvas *param_1,FLinearColor *param_2)

{
  UFont *pUVar1;
  FText *pFVar2;
  FCanvasItem local_2a8;
  double local_268;
  double dStack_260;
  undefined4 local_258;
  void *local_250;
  undefined8 local_248;
  FText local_238;
  FCanvasTextItem local_228;
  
  local_2a8.Position.field0_0x0._s_0.X = (this->Coords).field0_0x0._s_0.X;
  local_2a8.Position.field0_0x0._s_0.Y = (this->Coords).field0_0x0._s_0.Y;
  local_2a8._padding_ = (longlong)&___7FCanvasBoxItem__6B_;
  local_2a8.StereoDepth = 0;
  local_2a8.BlendMode = SE_BLEND_Opaque;
  local_268 = (this->Size).field0_0x0._s_0.X;
  dStack_260 = (this->Size).field0_0x0._s_0.Y;
  local_2a8.bFreezeTime = false;
  local_2a8.BatchedElementParameters = (FBatchedElementParameters *)0x0;
  local_2a8.Color.field0_0x0._0_8_ = *(undefined8 *)&param_2->field0_0x0;
  local_2a8.Color.field0_0x0._8_8_ = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  local_258 = 0;
  local_250 = (void *)0x0;
  local_248 = 0;
  FCanvas::DrawItem(param_1,&local_2a8);
  pUVar1 = UEngine::GetSmallFont();
  pFVar2 = FText::FromName(&local_238,&this->Name);
  FCanvasTextItem::FCanvasTextItem(&local_228,&this->Coords,pFVar2,pUVar1,param_2);
  if (local_238.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
  }
  FCanvas::DrawItem(param_1,(FCanvasItem *)&local_228);
  FCanvasTextItem::~FCanvasTextItem(&local_228);
  if (local_250 != (void *)0x0) {
    FMemory::Free(local_250);
  }
  return;
}

