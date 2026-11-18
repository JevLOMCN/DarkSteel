// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 5

// Construct @ 14b42c080

void __thiscall SDS_LinkText::Construct(SDS_LinkText *this,FArguments *param_1)

{
  byte *pbVar1;
  undefined1 *this_00;
  code *pcVar2;
  undefined8 uVar3;
  ESlateColorStylingMode EVar4;
  EStyleColor EVar5;
  undefined2 uVar6;
  STextBlock *pSVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  ISlateStyle *pIVar12;
  FName *pFVar13;
  FSlateBrush *pFVar14;
  FArguments *pFVar15;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  undefined1 local_res18 [8];
  FName local_res20;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_628;
  FText local_610;
  bool local_600;
  undefined1 local_5f8 [8];
  ForAnyElementType FStack_5f0;
  ulonglong local_5e8;
  FMemScope local_5e0;
  undefined8 local_5d8;
  TReferenceControllerBase<1> *pTStack_5d0;
  uint local_5c8;
  FDestructionSentinel local_5c0;
  FName local_5a8;
  STextBlock *local_5a0;
  TReferenceControllerBase<1> *pTStack_598;
  FArguments local_590;
  
  FDS_LinkTextData::operator=(&this->LinkTextData,&param_1->_LinkTextData);
  uVar3 = *(undefined8 *)((longlong)&(this->LinkTextData).OverrideColor.field0_0x0 + 8);
  local_5c8 = local_5c8 & 0xffffff00;
  *(undefined8 *)&(this->LinkTextData).Style.ColorAndOpacity.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(this->LinkTextData).OverrideColor.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->LinkTextData).Style.ColorAndOpacity.SpecifiedColor.field0_0x0 + 8) = uVar3;
  (this->LinkTextData).Style.ColorAndOpacity.ColorUseRule = (undefined1)local_5c8;
  (this->LinkTextData).Style.ColorAndOpacity.ColorTableId = local_5c8._1_1_;
  *(undefined2 *)&(this->LinkTextData).Style.ColorAndOpacity.field_0x12 = local_5c8._2_2_;
  pIVar12 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar12 + 0x50);
  pFVar13 = ::FName::FName(&local_5a8,"DefaultTextUnderline");
  pFVar14 = (FSlateBrush *)(*pcVar2)(pIVar12,*pFVar13);
  FSlateBrush::operator=(&this->UnderlineBrush,pFVar14);
  uVar3 = *(undefined8 *)
           ((longlong)&(this->LinkTextData).Style.ColorAndOpacity.SpecifiedColor.field0_0x0 + 8);
  EVar4 = (this->LinkTextData).Style.ColorAndOpacity.ColorUseRule;
  EVar5 = (this->LinkTextData).Style.ColorAndOpacity.ColorTableId;
  uVar6 = *(undefined2 *)&(this->LinkTextData).Style.ColorAndOpacity.field_0x12;
  *(undefined8 *)&(this->UnderlineBrush).TintColor.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(this->LinkTextData).Style.ColorAndOpacity.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->UnderlineBrush).TintColor.SpecifiedColor.field0_0x0 + 8) = uVar3
  ;
  (this->UnderlineBrush).TintColor.ColorUseRule = EVar4;
  (this->UnderlineBrush).TintColor.ColorTableId = EVar5;
  *(undefined2 *)&(this->UnderlineBrush).TintColor.field_0x12 = uVar6;
  pFVar15 = STextBlock::FArguments::FArguments(&local_590);
  local_610.TextData.Reference = (this->LinkTextData).LinkText.TextData.Reference;
  if (local_610.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_610.TextData.Reference + 8))
              (local_610.TextData.Reference,local_res18);
  }
  local_610.Flags = (this->LinkTextData).LinkText.Flags;
  local_600 = true;
  local_5e8 = 0;
  local_5f8 = (undefined1  [8])0x0;
  FStack_5f0.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar15->_Text).Value,&local_610);
  (pFVar15->_Text).bIsSet = local_600;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5f8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5f8,
             (FWriteAccessScope *)&local_5c0);
  if (((int)local_5e8 != 0) && (FStack_5f0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_5f0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5f0,0,0,0x10);
    local_5e8 = local_5e8 & 0xffffffff00000000;
  }
  if (local_5c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5c0.Accessor,&local_5c0);
  }
  if (FStack_5f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_5f0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5f8);
  if (local_610.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_610.TextData.Reference + 0x10))();
  }
  pFVar15->_TextStyle = &(this->LinkTextData).Style;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_5e0,&local_res20,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_628,"STextBlock",
             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Slate\\Widgets\\SDS_LinkText.h"
             ,0x39,local_res8);
  FMemScope::~FMemScope(&local_5e0);
  FLLMScope::~FLLMScope(local_res10);
  if (local_628._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_628._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_628._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_5a0 = (this->TextBlock).Object;
  pTStack_598 = (this->TextBlock).SharedReferenceCount.ReferenceController;
  (this->TextBlock).Object = local_628._Widget.Object;
  (this->TextBlock).SharedReferenceCount.ReferenceController =
       local_628._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_598);
  pSVar7 = local_628._Widget.Object;
  if (local_628._Widget.Object == (STextBlock *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_628._Widget.Object,(FSlateBaseNamedArgs *)pFVar15);
  STextBlock::Construct(local_628._Widget.Object,pFVar15);
  if (local_628._Widget.Object == (STextBlock *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (((local_628._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar10 = (**(code **)((local_628._Widget.Object)->_padding_ + 0x228))(local_628._Widget.Object);
    bVar11 = 0;
    if (cVar10 == '\0') goto LAB_14b42c37c;
  }
  bVar11 = 0x20;
LAB_14b42c37c:
  *(byte *)&(local_628._Widget.Object)->_padding_ =
       (byte)(local_628._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_628._Widget.Object)->_padding_ =
       (byte)(local_628._Widget.Object)->_padding_ | bVar11;
  if (local_628._Widget.Object == (STextBlock *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_628._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_628._Widget.Object == (STextBlock *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar8.ReferenceController = local_628._Widget.SharedReferenceCount.ReferenceController;
  local_628._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_628._Widget.Object = (STextBlock *)0x0;
  if (pSVar7 == (STextBlock *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = &this->field_0x238;
  if (FVar8.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_5d8 = *(undefined8 *)&this->field_0x248;
  pTStack_5d0 = *(TReferenceControllerBase<1> **)&this->field_0x250;
  *(STextBlock **)&this->field_0x248 = pSVar7;
  *(TReferenceControllerBase<1> **)&this->field_0x250 = FVar8.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_5d0);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_628._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_590);
  this->Hovered = false;
  return;
}

// OnMouseButtonDown @ 14b42de80

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDS_LinkText::OnMouseButtonDown
          (SDS_LinkText *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *this_00;
  char cVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  this_00 = &(this->LinkTextData).OnClick;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
  if ((*(int *)&(this->LinkTextData).OnClick.field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->LinkTextData).OnClick.field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
      if (*(int *)&(this->LinkTextData).OnClick.field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->LinkTextData).OnClick.field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,&(this->LinkTextData).LinkData);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnMouseEnter @ 14b42df30

void __thiscall
SDS_LinkText::OnMouseEnter(SDS_LinkText *this,FGeometry *param_1,FPointerEvent *param_2)

{
  this->Hovered = true;
  return;
}

// OnMouseLeave @ 14b42df40

void __thiscall SDS_LinkText::OnMouseLeave(SDS_LinkText *this,FPointerEvent *param_1)

{
  this->Hovered = false;
  return;
}

// OnPaint @ 14b42df50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SDS_LinkText::OnPaint
          (SDS_LinkText *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  float fVar1;
  undefined1 uVar2;
  ESlateColorStylingMode EVar3;
  undefined4 uVar4;
  int iVar5;
  FSlateColor *this_00;
  undefined1 auStackY_128 [32];
  undefined8 local_e8;
  TVector2<float>_u_0 local_e0;
  FLinearColor_u_0 local_d0;
  TTransform2<float> local_c0;
  TTransform2<float> local_a8;
  TVector2<float>_u_0 local_90;
  float local_88;
  undefined8 local_84;
  undefined8 local_7c;
  float local_74 [2];
  float afStack_6c [2];
  TVector2<float>_u_0 local_64;
  byte local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_128;
  iVar5 = SCompoundWidget::OnPaint
                    ((SCompoundWidget *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                    );
  if ((this->Hovered == true) || ((this->LinkTextData).Underline == true)) {
    local_e8._4_4_ = SUB84(param_2->Size,4);
    local_e8._0_4_ = SUB84(param_2->Size,0);
    uVar4 = (undefined4)local_e8;
    local_d0._4_8_ = (param_2->AbsolutePosition).field0_0x0._s_0;
    local_e0 = (TVector2<float>_u_0)
               ((ulonglong)(uint)((float)local_e8._4_4_ - __real_40000000) << 0x20);
    fVar1 = param_2->Scale;
    local_c0.Trans.field0_0x0 = local_e0;
    local_c0.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
    local_c0.M.M[0][1] = _UNK_15076b184;
    local_c0.M.M[1][0] = _UNK_15076b188;
    local_c0.M.M[1][1] = _UNK_15076b18c;
    local_e8._4_4_ = fVar1 * ((float)local_e8._4_4_ - __real_40000000) + local_d0._s_0.B;
    local_e8._0_4_ = fVar1 * 0.0 + local_d0._s_0.G;
    Concatenate<TTransform2<float>_>(&local_a8,&local_c0,&param_2->AccumulatedRenderTransform);
    this_00 = &(this->UnderlineBrush).TintColor;
    EVar3 = (this->UnderlineBrush).TintColor.ColorUseRule;
    local_90 = local_e8;
    local_7c = CONCAT44(0x40000000,uVar4);
    local_5c = param_2->bHasRenderTransform * '\x02' | local_5c & 0xfc;
    local_84 = 0;
    local_64 = local_a8.Trans.field0_0x0;
    local_74[0] = local_a8.M.M[0][0];
    local_74[1] = local_a8.M.M[0][1];
    afStack_6c[0] = local_a8.M.M[1][0];
    afStack_6c[1] = local_a8.M.M[1][1];
    local_88 = fVar1;
    if (EVar3 != UseColor_Specified) {
      if (EVar3 == UseColor_ColorTable) {
        this_00 = (FSlateColor *)FSlateColor::GetColorFromTable(this_00);
      }
      else if ((EVar3 == UseColor_Foreground) || (EVar3 != UseColor_Foreground_Subdued)) {
        this_00 = (FSlateColor *)&param_6->ForegroundColor;
      }
      else {
        this_00 = (FSlateColor *)&param_6->SubduedForeground;
      }
    }
    local_d0._s_0.R = (this_00->SpecifiedColor).field0_0x0._s_0.R;
    local_d0._4_8_ = *(undefined8 *)((longlong)&(this_00->SpecifiedColor).field0_0x0 + 4);
    local_d0._s_0.A =
         *(float *)((longlong)&(this_00->SpecifiedColor).field0_0x0 + 0xc) *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
    FSlateDrawElement::MakeBox
              (param_4,iVar5 + 1U,(FPaintGeometry *)&local_90._s_0,&this->UnderlineBrush,None,
               (FLinearColor *)&local_d0._s_0);
  }
  return iVar5 + 1U;
}

