// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// DrawLine @ 14892e4b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FScreenMessageWriter::DrawLine
          (FScreenMessageWriter *this,FText *param_1,int param_2,FLinearColor *param_3)

{
  FCanvas *this_00;
  UFont *pUVar1;
  undefined1 local_res18 [16];
  TVector2<double>_u_0 local_258;
  FCanvasTextItemBase local_248;
  UFont *local_b0;
  TReferenceControllerBase<1> *local_70;
  char local_48;
  ITextData *local_40;
  uint local_38;
  
  this_00 = this->Canvas;
  pUVar1 = GetStatsFont();
  local_258._s_0.X = (double)param_2;
  local_258._s_0.Y = (double)this->Y;
  FCanvasTextItemBase::FCanvasTextItemBase(&local_248,(TVector2<double> *)&local_258._s_0,param_3);
  local_40 = (param_1->TextData).Reference;
  local_48 = '\0';
  local_248._padding_._4_4_ = 2;
  local_248._padding_ = (longlong)&___7FCanvasTextItem__6B_;
  local_b0 = pUVar1;
  if (local_40 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40 + 8))(local_40,local_res18);
  }
  local_38 = param_1->Flags;
  if ((pUVar1 == (UFont *)0x0) || ((pUVar1->ImportOptions).bUseDistanceFieldAlpha == 0)) {
    local_248.FontRenderInfo._0_4_ = local_248.FontRenderInfo._0_4_ | 2;
    local_248.ShadowColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
    local_248.ShadowOffset.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
    local_248.ShadowOffset.field0_0x0._s_0.Y = _UNK_150689688;
  }
  else {
    local_248._padding_._4_4_ = 6;
  }
  if (*(code **)(local_248._padding_ + 0x18) == FCanvasTextItemBase::Draw) {
    FCanvasTextItemBase::Draw(&local_248,this_00);
  }
  else {
    (**(code **)(local_248._padding_ + 0x18))();
  }
  if (this_00->DrawMode == CDM_ImmediateDrawing) {
    FCanvas::Flush_GameThread(this_00,false);
  }
  local_248._padding_ = (longlong)&___7FCanvasTextItem__6B_;
  if (local_40 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40 + 0x10))();
  }
  if (local_48 != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  }
  this->Y = this->Y + 0xe;
  return;
}

