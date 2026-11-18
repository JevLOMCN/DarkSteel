// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// Execute @ 14d5a3490

void __thiscall
UE::Cameras::FDebugTextDrawCommand::Execute
          (FDebugTextDrawCommand *this,FCanvas *param_1,FColor *param_2,UFont *param_3,
          TVector2<float> *param_4)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  wchar_t wVar3;
  TVector2<float> *pTVar4;
  char cVar5;
  wchar_t *pwVar6;
  float fVar7;
  float local_res8 [2];
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  FText local_268;
  TVector2<double>_u_0 local_258;
  FCanvasTextItem local_248;
  
  _local_278 = (this->TextView).DataPtr;
  fStack_270 = (float)(this->TextView).Size;
  fStack_26c = *(float *)&(this->TextView).field_0xc;
  FText::FromStringView(&local_268,(TStringView<wchar_t> *)&local_278);
  pTVar4 = param_4;
  fStack_274 = FLinearColor::sRGBToLinearTable[(param_2->field0_0x0)._s_0.G];
  local_278 = FLinearColor::sRGBToLinearTable[(param_2->field0_0x0)._s_0.R];
  local_258._s_0.X = (double)(param_4->field0_0x0)._s_0.X;
  local_258._s_0.Y = (double)(param_4->field0_0x0)._s_0.Y;
  fStack_26c = (float)(param_2->field0_0x0)._s_0.A * __real_3b808081;
  fStack_270 = FLinearColor::sRGBToLinearTable[(param_2->field0_0x0)._s_0.B];
  FCanvasTextItem::FCanvasTextItem
            (&local_248,(TVector2<double> *)&local_258._s_0,&local_268,param_3,
             (FLinearColor *)&local_278);
  local_248._padding_._4_4_ = 2;
  FCanvas::DrawItem(param_1,(FCanvasItem *)&local_248);
  pwVar6 = (this->TextView).DataPtr;
  fVar7 = 0.0;
  pwVar1 = pwVar6 + (int)*(undefined8 *)&(this->TextView).Size;
  wVar3 = L'\0';
  for (; pwVar6 != pwVar1; pwVar6 = pwVar6 + 1) {
    wVar2 = *pwVar6;
    UFont::GetCharSize(param_3,wVar2,(float *)&param_4,local_res8);
    cVar5 = '\0';
    if (wVar3 != L'\0') {
      cVar5 = UFont::GetCharKerning(param_3,wVar3,wVar2);
    }
    fVar7 = fVar7 + (float)(int)cVar5 + param_4._0_4_;
    wVar3 = wVar2;
  }
  (pTVar4->field0_0x0)._s_0.X =
       (pTVar4->field0_0x0)._s_0.X - (float)((int)ROUND(__real_bf000000 - (fVar7 + fVar7)) >> 1);
  FCanvasTextItem::~FCanvasTextItem(&local_248);
  if (local_268.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_268.TextData.Reference + 0x10))();
  }
  return;
}

