// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 6

// ComputeDesiredSize @ 14d8e6110

TVector2<double> * __thiscall
SPlayheadOverlay::ComputeDesiredSize
          (SPlayheadOverlay *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = this->DesiredWidth;
  uVar2 = this->DesiredHeight;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(float)uVar2;
  return __return_storage_ptr__;
}

// Construct @ 14d8eec80

void __thiscall SPlayheadOverlay::Construct(SPlayheadOverlay *this,FArguments *param_1)

{
  FPlayheadOverlayStyle *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  EStyleColor EVar4;
  undefined2 uVar5;
  bool bVar6;
  
  if (param_1->_Style == (FPlayheadOverlayStyle *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InArgs._Style",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SPlayheadOverlay.cpp"
                       ,7,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = param_1->_Style;
  uVar3 = *(undefined8 *)((longlong)&(pFVar1->PlayheadColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->PlayheadColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar1->PlayheadColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->PlayheadColor).SpecifiedColor.field0_0x0 + 8) = uVar3;
  EVar4 = (pFVar1->PlayheadColor).ColorTableId;
  uVar5 = *(undefined2 *)&(pFVar1->PlayheadColor).field_0x12;
  (this->PlayheadColor).ColorUseRule = (pFVar1->PlayheadColor).ColorUseRule;
  (this->PlayheadColor).ColorTableId = EVar4;
  *(undefined2 *)&(this->PlayheadColor).field_0x12 = uVar5;
  this->PlayheadWidth = param_1->_Style->PlayheadWidth;
  this->DesiredWidth = param_1->_Style->DesiredWidth;
  this->DesiredHeight = param_1->_Style->DesiredHeight;
  return;
}

// DrawPlayhead @ 14d918a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SPlayheadOverlay::DrawPlayhead
          (SPlayheadOverlay *this,FGeometry *param_1,FSlateWindowElementList *param_2,int param_3)

{
  float fVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  FLinearColor *pFVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStackY_108 [32];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_c8;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 local_a8 [16];
  TVector2<float>_u_0 local_98;
  float local_90;
  undefined8 local_8c;
  FDeprecateSlateVector2D local_84;
  float local_7c [2];
  float afStack_74 [2];
  TVector2<float>_u_0 local_6c;
  byte local_64;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 2;
  dVar4 = (double)this->PlayheadPosition;
  dVar2 = (double)*(float *)&(param_1->Size).field_0x4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_c8.AllocatorInstance,2,&local_c8.ArrayMax);
  uVar6 = SUB84(dVar2,0);
  uVar7 = (undefined4)((ulonglong)dVar2 >> 0x20);
  *(double *)local_c8.AllocatorInstance.Data = dVar4;
  *(double *)(local_c8.AllocatorInstance.Data + 8) = 0.0;
  auVar3._8_4_ = uVar6;
  auVar3._0_8_ = dVar4;
  auVar3._12_4_ = uVar7;
  *(undefined1 (*) [16])(local_c8.AllocatorInstance.Data + 0x10) = auVar3;
  fVar1 = this->PlayheadWidth;
  _fStack_b0 = 0;
  local_a8._8_4_ = uVar6;
  local_a8._0_8_ = dVar4;
  local_a8._12_4_ = uVar7;
  if ((this->PlayheadColor).ColorUseRule == UseColor_ColorTable) {
    _local_b8 = dVar4;
    pFVar5 = FSlateColor::GetColorFromTable(&this->PlayheadColor);
    local_b8 = (pFVar5->field0_0x0)._s_0.R;
    fStack_b4 = (pFVar5->field0_0x0)._s_0.G;
    fStack_b0 = (pFVar5->field0_0x0)._s_0.B;
    fStack_ac = (pFVar5->field0_0x0)._s_0.A;
  }
  else {
    local_b8 = (this->PlayheadColor).SpecifiedColor.field0_0x0._s_0.R;
    fStack_b4 = (this->PlayheadColor).SpecifiedColor.field0_0x0._s_0.G;
    fStack_b0 = (this->PlayheadColor).SpecifiedColor.field0_0x0._s_0.B;
    fStack_ac = (this->PlayheadColor).SpecifiedColor.field0_0x0._s_0.A;
  }
  local_98 = (param_1->AbsolutePosition).field0_0x0;
  local_6c = (param_1->AccumulatedRenderTransform).Trans.field0_0x0;
  local_84 = param_1->Size;
  local_64 = param_1->bHasRenderTransform * '\x02' | local_64 & 0xfc;
  local_90 = param_1->Scale;
  local_7c = (param_1->AccumulatedRenderTransform).M.M[0];
  afStack_74 = (param_1->AccumulatedRenderTransform).M.M[1];
  local_8c = 0;
  FSlateDrawElement::MakeLines
            (param_2,param_3,(FPaintGeometry *)&local_98._s_0,&local_c8,None,
             (FLinearColor *)&local_b8,true,fVar1);
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  return param_3 + 1;
}

// OnPaint @ 14d9565e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SPlayheadOverlay::OnPaint
          (SPlayheadOverlay *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  float fVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  FLinearColor *pFVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStackY_e8 [32];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_a8;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [16];
  TVector2<float>_u_0 local_78;
  float local_70;
  undefined8 local_6c;
  FDeprecateSlateVector2D local_64;
  float local_5c [2];
  float afStack_54 [2];
  TVector2<float>_u_0 local_4c;
  byte local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 2;
  dVar4 = (double)this->PlayheadPosition;
  dVar2 = (double)*(float *)&(param_2->Size).field_0x4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_a8.AllocatorInstance,2,&local_a8.ArrayMax);
  uVar6 = SUB84(dVar2,0);
  uVar7 = (undefined4)((ulonglong)dVar2 >> 0x20);
  *(double *)local_a8.AllocatorInstance.Data = dVar4;
  *(double *)(local_a8.AllocatorInstance.Data + 8) = 0.0;
  auVar3._8_4_ = uVar6;
  auVar3._0_8_ = dVar4;
  auVar3._12_4_ = uVar7;
  *(undefined1 (*) [16])(local_a8.AllocatorInstance.Data + 0x10) = auVar3;
  fVar1 = this->PlayheadWidth;
  _fStack_90 = 0;
  local_88._8_4_ = uVar6;
  local_88._0_8_ = dVar4;
  local_88._12_4_ = uVar7;
  if ((this->PlayheadColor).ColorUseRule == UseColor_ColorTable) {
    _local_98 = dVar4;
    pFVar5 = FSlateColor::GetColorFromTable(&this->PlayheadColor);
    local_98 = (pFVar5->field0_0x0)._s_0.R;
    fStack_94 = (pFVar5->field0_0x0)._s_0.G;
    fStack_90 = (pFVar5->field0_0x0)._s_0.B;
    fStack_8c = (pFVar5->field0_0x0)._s_0.A;
  }
  else {
    local_98 = (this->PlayheadColor).SpecifiedColor.field0_0x0._s_0.R;
    fStack_94 = (this->PlayheadColor).SpecifiedColor.field0_0x0._s_0.G;
    fStack_90 = (this->PlayheadColor).SpecifiedColor.field0_0x0._s_0.B;
    fStack_8c = (this->PlayheadColor).SpecifiedColor.field0_0x0._s_0.A;
  }
  local_78 = (param_2->AbsolutePosition).field0_0x0;
  local_4c = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
  local_64 = param_2->Size;
  local_44 = param_2->bHasRenderTransform * '\x02' | local_44 & 0xfc;
  local_70 = param_2->Scale;
  local_5c = (param_2->AccumulatedRenderTransform).M.M[0];
  afStack_54 = (param_2->AccumulatedRenderTransform).M.M[1];
  local_6c = 0;
  FSlateDrawElement::MakeLines
            (param_4,param_5,(FPaintGeometry *)&local_78._s_0,&local_a8,None,
             (FLinearColor *)&local_98,true,fVar1);
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return param_5 + 1;
}

// OnStyleUpdated @ 14d9584e0

void __thiscall
SPlayheadOverlay::OnStyleUpdated(SPlayheadOverlay *this,FPlayheadOverlayStyle *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  
  uVar1 = *(undefined8 *)((longlong)&(param_1->PlayheadColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->PlayheadColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->PlayheadColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->PlayheadColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->PlayheadColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->PlayheadColor).field_0x12;
  (this->PlayheadColor).ColorUseRule = (param_1->PlayheadColor).ColorUseRule;
  (this->PlayheadColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->PlayheadColor).field_0x12 = uVar3;
  this->PlayheadWidth = param_1->PlayheadWidth;
  this->DesiredWidth = param_1->DesiredWidth;
  this->DesiredHeight = param_1->DesiredHeight;
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)param_1);
  return;
}

// SetPlayheadPosition @ 14d96bae0

void __thiscall SPlayheadOverlay::SetPlayheadPosition(SPlayheadOverlay *this,float param_1)

{
  this->PlayheadPosition = param_1;
  return;
}

