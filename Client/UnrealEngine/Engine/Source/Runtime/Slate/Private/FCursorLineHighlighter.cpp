// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// FCursorLineHighlighter @ 1429b77f0

FCursorLineHighlighter * __thiscall
SlateEditableTextTypes::FCursorLineHighlighter::FCursorLineHighlighter
          (FCursorLineHighlighter *this,FCursorInfo *param_1)

{
  code *pcVar1;
  bool bVar2;
  FCursorLineHighlighter *pFVar3;
  ISlateStyle *pIVar4;
  FName *pFVar5;
  FName local_res8;
  FDestructionSentinel local_58;
  FSlateBrush *local_40;
  undefined1 local_38;
  undefined1 local_30 [8];
  ForAnyElementType FStack_28;
  ulonglong local_20;
  
  this->CursorInfo = param_1;
  (this->CursorBrush).Value = (FSlateBrush *)0x0;
  (this->CursorBrush).bIsSet = false;
  this->_padding_ = (longlong)&___7FCursorLineHighlighter_SlateEditableTextTypes__6B_;
  *(undefined8 *)&(this->CursorBrush).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->CursorBrush).Getter = 0;
  *(undefined8 *)&(this->CursorBrush).Getter.field_0x8 = 0;
  if (this->CursorInfo == (FCursorInfo *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CursorInfo",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SlateEditableTextTypes.cpp"
                       ,0x61,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FCursorLineHighlighter *)(*pcVar1)();
      return pFVar3;
    }
  }
  pIVar4 = FAppStyle::Get();
  pcVar1 = *(code **)((longlong)*pIVar4 + 0x50);
  pFVar5 = ::FName::FName(&local_res8,"EditableText.SelectionBackground");
  local_40 = (FSlateBrush *)(*pcVar1)(pIVar4,*pFVar5,0,0);
  local_38 = 1;
  local_20 = 0;
  local_30 = (undefined1  [8])0x0;
  FStack_28.Data = (FScriptContainerElement *)0x0;
  (this->CursorBrush).Value = local_40;
  (this->CursorBrush).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CursorBrush).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_30,
             (FWriteAccessScope *)&local_58);
  if (((int)local_20 != 0) && (FStack_28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_28,0,0,0x10);
    local_20 = local_20 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_30);
  return this;
}

// Create @ 1429de590

TSharedRef<SlateEditableTextTypes::FCursorLineHighlighter,1> * __cdecl
SlateEditableTextTypes::FCursorLineHighlighter::Create
          (TSharedRef<SlateEditableTextTypes::FCursorLineHighlighter,1> *__return_storage_ptr__,
          FCursorInfo *param_1)

{
  code *pcVar1;
  bool bVar2;
  FCursorLineHighlighter *pFVar3;
  TSharedRef<SlateEditableTextTypes::FCursorLineHighlighter,1> *pTVar4;
  ISlateStyle *pIVar5;
  FName *pFVar6;
  TRawPtrProxy<SlateEditableTextTypes::FCursorLineHighlighter> local_res8;
  FName local_res18 [2];
  FDestructionSentinel local_68;
  FSlateBrush *local_50;
  undefined1 local_48;
  undefined1 local_40 [8];
  ForAnyElementType FStack_38;
  ulonglong local_30;
  
  pFVar3 = ::operator_new(0x38);
  local_res8.Object = (FCursorLineHighlighter *)0x0;
  if (pFVar3 != (FCursorLineHighlighter *)0x0) {
    pFVar3->CursorInfo = param_1;
    (pFVar3->CursorBrush).Value = (FSlateBrush *)0x0;
    (pFVar3->CursorBrush).bIsSet = false;
    pFVar3->_padding_ = (longlong)&___7FCursorLineHighlighter_SlateEditableTextTypes__6B_;
    *(undefined8 *)&(pFVar3->CursorBrush).Getter.field_0x10 = 0;
    *(undefined8 *)&(pFVar3->CursorBrush).Getter = 0;
    *(undefined8 *)&(pFVar3->CursorBrush).Getter.field_0x8 = 0;
    if ((pFVar3->CursorInfo == (FCursorInfo *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("CursorInfo",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SlateEditableTextTypes.cpp"
                           ,0x61,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedRef<SlateEditableTextTypes::FCursorLineHighlighter,1> *)(*pcVar1)();
      return pTVar4;
    }
    pIVar5 = FAppStyle::Get();
    pcVar1 = *(code **)((longlong)*pIVar5 + 0x50);
    pFVar6 = ::FName::FName(local_res18,"EditableText.SelectionBackground");
    local_50 = (FSlateBrush *)(*pcVar1)(pIVar5,*pFVar6,0,0);
    local_48 = 1;
    local_30 = 0;
    local_40 = (undefined1  [8])0x0;
    FStack_38.Data = (FScriptContainerElement *)0x0;
    (pFVar3->CursorBrush).Value = local_50;
    (pFVar3->CursorBrush).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar3->CursorBrush).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_40);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_40,
               (FWriteAccessScope *)&local_68);
    if (((int)local_30 != 0) && (FStack_38.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_38.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_38,0,0,0x10);
      local_30 = local_30 & 0xffffffff00000000;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    if (FStack_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_40);
    local_res8.Object = pFVar3;
  }
  TSharedRef<SlateEditableTextTypes::FCursorLineHighlighter,1>::
  TSharedRef<SlateEditableTextTypes::FCursorLineHighlighter,1><SlateEditableTextTypes::FCursorLineHighlighter>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// OnPaint @ 1429fc520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SlateEditableTextTypes::FCursorLineHighlighter::OnPaint
          (FCursorLineHighlighter *this,FPaintArgs *param_1,FLineView *param_2,
          TVector2<double> *param_3,float param_4,FTextBlockStyle *param_5,FGeometry *param_6,
          FSlateRect *param_7,FSlateWindowElementList *param_8,int param_9,FWidgetStyle *param_10,
          bool param_11)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 uVar6;
  FCursorInfo *pFVar7;
  FSlateBrush *pFVar8;
  TVector2<float>_u_0_s_0 TVar9;
  undefined8 uVar10;
  FSlateApplication *pFVar11;
  FSlateBrush **ppFVar12;
  ECursorAlignment EVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  undefined1 in_XMM2 [16];
  undefined1 auVar21 [16];
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  undefined1 auStackY_178 [32];
  undefined8 local_148;
  FLinearColor_u_0 local_130;
  TTransform2<float> local_120;
  TTransform2<float> local_108;
  TVector2<float>_u_0 local_f0;
  float local_e8;
  undefined8 local_e4;
  undefined8 local_dc;
  float local_d4 [2];
  float afStack_cc [2];
  TVector2<float>_u_0 local_c4;
  byte local_bc;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_178;
  dVar2 = (param_2->Offset).field0_0x0._s_0.X;
  dVar3 = (param_2->Offset).field0_0x0._s_0.Y;
  fVar1 = param_2->TextHeight;
  fVar19 = (param_10->ForegroundColor).field0_0x0._s_0.R;
  fVar17 = (param_10->ForegroundColor).field0_0x0._s_0.G;
  fVar20 = (param_10->ForegroundColor).field0_0x0._s_0.B;
  dVar4 = (param_3->field0_0x0)._s_0.X;
  dVar5 = (param_3->field0_0x0)._s_0.Y;
  fVar14 = FTextEditHelper::GetFontHeight(&param_5->Font);
  fVar15 = FTextEditHelper::CalculateCaretWidth(fVar14);
  pFVar11 = FSlateApplication::Get();
  dVar18 = (double)(**(code **)(*(longlong *)pFVar11 + 0x60))(pFVar11);
  fVar14 = __real_3f800000;
  pFVar7 = this->CursorInfo;
  fVar24 = __real_3f800000 / param_6->Scale;
  dVar18 = dVar18 - pFVar7->LastCursorInteractionTime;
  fVar16 = __real_3f800000;
  if (__real_3fb99999a0000000 <= dVar18) {
    fVar16 = sinf((float)dVar18 * __real_40c90fdb + __real_3fc90fdb);
    auVar21 = roundps(in_XMM2,ZEXT416((uint)(fVar16 * __real_3f000000 + fVar14)),1);
    fVar16 = auVar21._0_4_;
  }
  EVar13 = pFVar7->CursorAlignment;
  if (pFVar7->CursorTextDirection == RightToLeft) {
    EVar13 = EVar13 == Left;
  }
  if (EVar13 == Right) {
    uVar22 = 0;
    uVar23 = 0;
    uVar10 = (double)param_4;
  }
  else {
    uVar22 = SUB84(UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y,0);
    uVar23 = (undefined4)
             ((ulonglong)UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
    uVar10 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
  }
  local_130._s_0.A = fVar16 * fVar16 * (param_10->ColorAndOpacityTint).field0_0x0._s_0.A;
  local_130._s_0.R = fVar19 * (param_10->ColorAndOpacityTint).field0_0x0._s_0.R;
  local_130._s_0.G = fVar17 * (param_10->ColorAndOpacityTint).field0_0x0._s_0.G;
  local_130._s_0.B = fVar20 * (param_10->ColorAndOpacityTint).field0_0x0._s_0.B;
  ppFVar12 = TAttribute<FSlateBrush_const_*>::Get(&this->CursorBrush);
  dVar18 = (double)fVar24;
  pFVar8 = *ppFVar12;
  TVar9 = (param_6->AbsolutePosition).field0_0x0._s_0;
  local_120.M.M[0][1] = TVar9.X;
  local_120.M.M[1][0] = TVar9.Y;
  local_148._0_4_ = (undefined4)(((double)uVar10 + dVar2 + dVar4) * dVar18);
  local_148._4_4_ = (undefined4)(((double)CONCAT44(uVar23,uVar22) + dVar3 + dVar5) * dVar18);
  local_e8 = param_6->Scale;
  local_120.Trans.field0_0x0 = local_148;
  fVar19 = local_e8 * fVar15;
  if (local_e8 * fVar15 <= fVar14) {
    fVar19 = fVar14;
  }
  fVar20 = local_e8 * (float)local_148._4_4_ + local_120.M.M[1][0];
  fVar17 = local_e8 * (float)(undefined4)local_148 + local_120.M.M[0][1];
  local_120.M.M[0][0] = (float)___xmm_3f80000000000000000000003f800000;
  local_120.M.M[0][1] = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
  local_120.M.M[1][0] = (float)_UNK_15076b188;
  local_120.M.M[1][1] = (float)((ulonglong)_UNK_15076b188 >> 0x20);
  Concatenate<TTransform2<float>_>(&local_108,&local_120,&param_6->AccumulatedRenderTransform);
  local_f0._s_0.Y = fVar20;
  local_f0._s_0.X = fVar17;
  local_dc = CONCAT44((float)(dVar18 * (double)fVar1),(float)((double)fVar19 * dVar18));
  local_bc = param_6->bHasRenderTransform * '\x02' | local_bc & 0xfc;
  local_e4 = 0;
  local_d4[0] = local_108.M.M[0][0];
  local_d4[1] = local_108.M.M[0][1];
  afStack_cc[0] = local_108.M.M[1][0];
  afStack_cc[1] = local_108.M.M[1][1];
  local_c4 = local_108.Trans.field0_0x0;
  FSlateDrawElement::MakeBox
            (param_8,param_9,(FPaintGeometry *)&local_f0._s_0,pFVar8,!param_11 << 5,
             (FLinearColor *)&local_130._s_0);
  return param_9;
}

// SetCursorBrush @ 142a08560

void __thiscall
SlateEditableTextTypes::FCursorLineHighlighter::SetCursorBrush
          (FCursorLineHighlighter *this,TAttribute<FSlateBrush_const_*> *param_1)

{
  (this->CursorBrush).Value = param_1->Value;
  (this->CursorBrush).bIsSet = param_1->bIsSet;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->CursorBrush).Getter,&param_1->Getter);
  return;
}

