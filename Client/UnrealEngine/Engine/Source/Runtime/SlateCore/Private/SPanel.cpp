// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 5

// SPanel @ 1425bf180

SPanel * __thiscall SPanel::SPanel(SPanel *this)

{
  SWidget::SWidget((SWidget *)this);
  *(undefined ***)this = &___7SPanel__6B_;
  return this;
}

// ~SPanel @ 1425c1d10

void __thiscall SPanel::~SPanel(SPanel *this)

{
  *(undefined ***)this = &___7SPanel__6B_;
  SWidget::~SWidget((SWidget *)this);
  return;
}

// OnPaint @ 1425f04a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SPanel::OnPaint(SPanel *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
               FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  int iVar1;
  ForElementType<FArrangedWidget> FVar2;
  undefined1 auStackY_1d8 [32];
  FArrangedChildren local_188;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_188.VisibilityFilter = (EVisibility)EVisibility::Visible.Value.Value;
  local_188.Array.ArrayMax = 4;
  local_188.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
  local_188.Array.ArrayNum = 0;
  local_188.bAllow3DWidgets = false;
  (**(code **)(*(longlong *)this + 0x240))(this,param_2,&local_188);
  iVar1 = PaintArrangedChildren
                    (this,param_1,&local_188,param_2,param_3,param_4,param_5,param_6,param_7);
  FVar2 = (ForElementType<FArrangedWidget>)&local_188.Array;
  if (local_188.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FVar2 = local_188.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar2,local_188.Array.ArrayNum);
  if (local_188.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_188.Array.AllocatorInstance.SecondaryData);
  }
  return iVar1;
}

// PaintArrangedChildren @ 1425f35e0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SPanel::PaintArrangedChildren
          (SPanel *this,FPaintArgs *param_1,FArrangedChildren *param_2,FGeometry *param_3,
          FSlateRect *param_4,FSlateWindowElementList *param_5,int param_6,FWidgetStyle *param_7,
          bool param_8)

{
  ForElementType<FArrangedWidget> FVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  FSlateRotatedRect *this_00;
  uint uVar8;
  FGeometry *pFVar9;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_178;
  float fStack_174;
  FSlateRect local_140;
  FSlateRect local_130;
  TVector2<float>_u_0 local_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  TVector2<float>_u_0 local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  TVector2<float>_u_0_s_0 local_ec;
  FPaintArgs local_e0;
  FSlateRotatedRect local_b0 [5];
  ForElementType<FArrangedWidget> FVar10;
  
  fVar3 = __real_3f000000;
  local_e0.RootGrid = param_1->RootGrid;
  local_e0.CurrentGrid = param_1->CurrentGrid;
  local_e0.WindowOffset.field0_0x0 = (param_1->WindowOffset).field0_0x0;
  local_e0.CurrentTime = param_1->CurrentTime;
  local_e0.DeltaTime = param_1->DeltaTime;
  local_e0._44_4_ = *(undefined4 *)&param_1->field_0x2c;
  if ((!param_8) || (param_8 = true, this->field_0x3a == '\0')) {
    param_8 = false;
  }
  uVar8 = 0;
  iVar6 = param_6;
  if (0 < (param_2->Array).ArrayNum) {
    lVar11 = 0;
    local_e0.PaintParentPtr = (SWidget *)this;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (param_2->Array).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      FVar1 = (param_2->Array).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<FArrangedWidget>)&param_2->Array;
      if (FVar1 != (ForElementType<FArrangedWidget>)0x0) {
        FVar10 = FVar1;
      }
      pFVar9 = (FGeometry *)((longlong)FVar10 + lVar11);
      if (GSlateIsOnFastUpdatePath == false) {
        fVar16 = param_4->Left;
        local_120 = (TVector2<float>_u_0)0x0;
        local_114 = 0;
        fVar12 = (param_4->Right - fVar16) * fVar3 * GCullingSlackFillPercent;
        local_178 = SUB84(pFVar9->Size,0);
        fVar13 = (param_4->Bottom - param_4->Top) * fVar3 * GCullingSlackFillPercent;
        local_118 = local_178;
        fVar15 = fVar12 + param_4->Right;
        fStack_174 = SUB84(pFVar9->Size,4);
        fVar14 = param_4->Top - fVar13;
        local_10c = fStack_174;
        fVar13 = fVar13 + param_4->Bottom;
        this_00 = TransformRect<TTransform2<float>_>
                            (local_b0,&pFVar9->AccumulatedRenderTransform,
                             (FSlateRotatedRect *)&local_120._s_0);
        FSlateRotatedRect::ToBoundingRect(this_00,&local_140);
        fVar16 = fVar16 - fVar12;
        if ((((fVar16 <= local_140.Right) && (local_140.Left <= fVar15)) &&
            (fVar14 <= local_140.Bottom)) && (local_140.Top <= fVar13)) goto LAB_1425f3937;
        local_f4 = pFVar9->Scale;
        local_178 = SUB84(pFVar9->Size,0);
        local_ec = (pFVar9->AbsolutePosition).field0_0x0._s_0;
        fStack_174 = SUB84(pFVar9->Size,4);
        local_108._s_0.X = local_f4 * 0.0 + local_ec.X;
        local_108._s_0.Y = local_f4 * 0.0 + local_ec.Y;
        local_100 = local_f4 * local_178;
        local_fc = local_f4 * 0.0;
        local_f8 = local_f4 * 0.0;
        local_f4 = local_f4 * fStack_174;
        FSlateRotatedRect::ToBoundingRect((FSlateRotatedRect *)&local_108._s_0,&local_130);
        if ((((fVar16 <= local_130.Right) && (local_130.Left <= fVar15)) &&
            ((fVar14 <= local_130.Bottom && (local_130.Top <= fVar13)))) ||
           (iVar7 = iVar6, *(char *)((longlong)pFVar9[1].Size + 0x35) == '\x02'))
        goto LAB_1425f3937;
      }
      else {
LAB_1425f3937:
        iVar7 = SWidget::Paint((SWidget *)pFVar9[1].Size,&local_e0,pFVar9,param_4,param_5,param_6,
                               param_7,param_8);
        if (iVar7 < iVar6) {
          iVar7 = iVar6;
        }
      }
      iVar6 = iVar7;
      uVar8 = uVar8 + 1;
      lVar11 = lVar11 + 0x48;
    } while ((int)uVar8 < (param_2->Array).ArrayNum);
  }
  return iVar6;
}

// SetVisibility @ 1425fe810

void __thiscall SPanel::SetVisibility(SPanel *this,TAttribute<EVisibility> *param_1)

{
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  undefined1 local_28 [8];
  undefined1 local_20 [24];
  
  local_28[0] = (TEnumAsByte<EVisibility::Private>)(param_1->Value).Value.Value;
  this_00 = &param_1->Getter;
  local_28[1] = param_1->bIsSet;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_20,this_00);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->field_0x39,(SWidget *)this,(TAttribute<EVisibility> *)local_28,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_20);
  if ((void *)local_20._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_20._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

