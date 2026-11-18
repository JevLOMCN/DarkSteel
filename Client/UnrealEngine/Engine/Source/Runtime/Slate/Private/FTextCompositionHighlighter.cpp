// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// FTextCompositionHighlighter @ 1429b9d60

FTextCompositionHighlighter * __thiscall
SlateEditableTextTypes::FTextCompositionHighlighter::FTextCompositionHighlighter
          (FTextCompositionHighlighter *this)

{
  code *pcVar1;
  ISlateStyle *pIVar2;
  FName *pFVar3;
  FName local_res8;
  FDestructionSentinel local_58;
  FSlateBrush *local_40;
  undefined1 local_38;
  undefined1 local_30 [8];
  ForAnyElementType FStack_28;
  ulonglong local_20;
  
  this->_padding_ = (longlong)&___7FTextCompositionHighlighter_SlateEditableTextTypes__6B_;
  (this->CompositionBrush).Value = (FSlateBrush *)0x0;
  (this->CompositionBrush).bIsSet = false;
  *(undefined8 *)&(this->CompositionBrush).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->CompositionBrush).Getter = 0;
  *(undefined8 *)&(this->CompositionBrush).Getter.field_0x8 = 0;
  pIVar2 = FAppStyle::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x50);
  pFVar3 = ::FName::FName(&local_res8,"EditableText.CompositionBackground");
  local_40 = (FSlateBrush *)(*pcVar1)(pIVar2,*pFVar3,0,0);
  local_38 = 1;
  local_20 = 0;
  local_30 = (undefined1  [8])0x0;
  FStack_28.Data = (FScriptContainerElement *)0x0;
  (this->CompositionBrush).Value = local_40;
  (this->CompositionBrush).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CompositionBrush).Getter,
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

// Create @ 1429de730

TSharedRef<SlateEditableTextTypes::FTextCompositionHighlighter,1> * __cdecl
SlateEditableTextTypes::FTextCompositionHighlighter::Create
          (TSharedRef<SlateEditableTextTypes::FTextCompositionHighlighter,1> *__return_storage_ptr__
          )

{
  code *pcVar1;
  FName FVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FName local_res8;
  FDestructionSentinel local_58;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 local_30 [8];
  ForAnyElementType FStack_28;
  ulonglong local_20;
  
  FVar2 = (FName)::operator_new(0x30);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  if (FVar2 != (FName)0x0) {
    *(undefined8 *)((longlong)FVar2 + 8) = 0;
    *(undefined ***)FVar2 = &___7FTextCompositionHighlighter_SlateEditableTextTypes__6B_;
    *(undefined1 *)((longlong)FVar2 + 0x10) = 0;
    *(undefined8 *)((longlong)FVar2 + 0x28) = 0;
    *(undefined8 *)((longlong)FVar2 + 0x18) = 0;
    *(undefined8 *)((longlong)FVar2 + 0x20) = 0;
    pIVar3 = FAppStyle::Get();
    pcVar1 = *(code **)((longlong)*pIVar3 + 0x50);
    pFVar4 = ::FName::FName(&local_res8,"EditableText.CompositionBackground");
    local_40 = (*pcVar1)(pIVar3,*pFVar4,0,0);
    local_38 = 1;
    local_20 = 0;
    local_30 = (undefined1  [8])0x0;
    FStack_28.Data = (FScriptContainerElement *)0x0;
    *(undefined8 *)((longlong)FVar2 + 8) = local_40;
    *(undefined1 *)((longlong)FVar2 + 0x10) = 1;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar2 + 0x18),
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
    local_res8 = FVar2;
  }
  TSharedRef<SlateEditableTextTypes::FTextCompositionHighlighter,1>::
  TSharedRef<SlateEditableTextTypes::FTextCompositionHighlighter,1><SlateEditableTextTypes::FTextCompositionHighlighter>
            (__return_storage_ptr__,
             (TRawPtrProxy<SlateEditableTextTypes::FTextCompositionHighlighter> *)&local_res8);
  return __return_storage_ptr__;
}

// OnPaint @ 1429fce40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SlateEditableTextTypes::FTextCompositionHighlighter::OnPaint
          (FTextCompositionHighlighter *this,FPaintArgs *param_1,FLineView *param_2,
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
  FSlateBrush *pFVar7;
  TVector2<float>_u_0_s_0 TVar8;
  FSlateBrush **ppFVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  undefined1 auStackY_138 [32];
  undefined8 local_108;
  FLinearColor_u_0 local_f0;
  TTransform2<float> local_e0;
  TTransform2<float> local_c8;
  TVector2<float>_u_0 local_b0;
  float local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  float local_94 [2];
  float afStack_8c [2];
  TVector2<float>_u_0 local_84;
  byte local_7c;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_138;
  dVar2 = (param_2->Offset).field0_0x0._s_0.X;
  dVar3 = (param_2->Offset).field0_0x0._s_0.Y;
  fVar1 = param_2->TextHeight;
  dVar4 = (param_3->field0_0x0)._s_0.X;
  dVar5 = (param_3->field0_0x0)._s_0.Y;
  fVar13 = __real_3f800000 / param_6->Scale;
  if ((double)param_4 != 0.0) {
    local_f0._s_0.R =
         (param_10->ForegroundColor).field0_0x0._s_0.R *
         (param_10->ColorAndOpacityTint).field0_0x0._s_0.R;
    local_f0._s_0.G =
         (param_10->ForegroundColor).field0_0x0._s_0.G *
         (param_10->ColorAndOpacityTint).field0_0x0._s_0.G;
    local_f0._s_0.B =
         (param_10->ForegroundColor).field0_0x0._s_0.B *
         (param_10->ColorAndOpacityTint).field0_0x0._s_0.B;
    local_f0._s_0.A =
         (param_10->ForegroundColor).field0_0x0._s_0.A *
         (param_10->ColorAndOpacityTint).field0_0x0._s_0.A;
    ppFVar9 = TAttribute<FSlateBrush_const_*>::Get(&this->CompositionBrush);
    dVar12 = (double)fVar13;
    pFVar7 = *ppFVar9;
    TVar8 = (param_6->AbsolutePosition).field0_0x0._s_0;
    local_e0.M.M[0][1] = TVar8.X;
    local_e0.M.M[1][0] = TVar8.Y;
    fVar13 = param_6->Scale;
    local_108._0_4_ = (undefined4)(dVar12 * (dVar2 + dVar4));
    local_108._4_4_ = (undefined4)(dVar12 * (dVar3 + dVar5));
    local_e0.Trans.field0_0x0 = local_108;
    fVar11 = fVar13 * (float)local_108._4_4_ + local_e0.M.M[1][0];
    fVar10 = fVar13 * (float)(undefined4)local_108 + local_e0.M.M[0][1];
    local_e0.M.M[0][0] = (float)___xmm_3f80000000000000000000003f800000;
    local_e0.M.M[0][1] = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
    local_e0.M.M[1][0] = (float)_UNK_15076b188;
    local_e0.M.M[1][1] = (float)((ulonglong)_UNK_15076b188 >> 0x20);
    Concatenate<TTransform2<float>_>(&local_c8,&local_e0,&param_6->AccumulatedRenderTransform);
    local_b0._s_0.Y = fVar11;
    local_b0._s_0.X = fVar10;
    local_9c = CONCAT44((float)(dVar12 * (double)fVar1),(float)(dVar12 * (double)param_4));
    local_7c = param_6->bHasRenderTransform * '\x02' | local_7c & 0xfc;
    local_a4 = 0;
    local_94[0] = local_c8.M.M[0][0];
    local_94[1] = local_c8.M.M[0][1];
    afStack_8c[0] = local_c8.M.M[1][0];
    afStack_8c[1] = local_c8.M.M[1][1];
    local_84 = local_c8.Trans.field0_0x0;
    local_a8 = fVar13;
    FSlateDrawElement::MakeBox
              (param_8,param_9 + 1,(FPaintGeometry *)&local_b0._s_0,pFVar7,!param_11 << 5,
               (FLinearColor *)&local_f0._s_0);
    param_9 = param_9 + 1;
  }
  return param_9;
}

// SetCompositionBrush @ 142a07b20

void __thiscall
SlateEditableTextTypes::FTextCompositionHighlighter::SetCompositionBrush
          (FTextCompositionHighlighter *this,TAttribute<FSlateBrush_const_*> *param_1)

{
  (this->CompositionBrush).Value = param_1->Value;
  (this->CompositionBrush).bIsSet = param_1->bIsSet;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->CompositionBrush).Getter,&param_1->Getter);
  return;
}

