// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// SSimpleGradient @ 1428486d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SSimpleGradient * __thiscall SSimpleGradient::SSimpleGradient(SSimpleGradient *this)

{
  TSlateAttribute<FLinearColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar1;
  EWidgetUpdateFlags EVar2;
  code *pcVar3;
  bool bVar4;
  SSimpleGradient *pSVar5;
  EWidgetUpdateFlags EVar6;
  FLinearColor_u_0 local_28;
  FLinearColor_u_0 local_18;
  
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  local_28._8_8_ = _UNK_150689648;
  local_28._0_8_ = ___xmm_3f800000000000000000000000000000;
  pTVar1 = &this->StartColor;
  this->_padding_ = (longlong)&___7SSimpleGradient__6B_;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::
  TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            ((TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)pTVar1,(SWidget *)this,(FLinearColor *)&local_28._s_0);
  if ((pTVar1 < this) || (this + 1 <= pTVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pSVar5 = (SSimpleGradient *)(*pcVar3)();
      return pSVar5;
    }
  }
  pTVar1 = &this->EndColor;
  local_18._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
  local_18._8_8_ = _UNK_15076b1f8;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::
  TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            ((TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)pTVar1,(SWidget *)this,(FLinearColor *)&local_18._s_0);
  if ((pTVar1 < this) || (this + 1 <= pTVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pSVar5 = (SSimpleGradient *)(*pcVar3)();
      return pSVar5;
    }
  }
  EVar2 = (EWidgetUpdateFlags)this->_padding_;
  EVar6 = EVar2 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar6;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar2,EVar6);
  return this;
}

// Construct @ 142861e40

void __thiscall SSimpleGradient::Construct(SSimpleGradient *this,FArguments *param_1)

{
  TDelegate<EOrientation___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  char cVar1;
  EOrientation EVar2;
  bool *pbVar3;
  longlong *plVar4;
  FReadAccessScope local_28;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->StartColor,(SWidget *)this,&param_1->_StartColor,None);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->EndColor,(SWidget *)this,&param_1->_EndColor,None);
  pbVar3 = TAttribute<bool>::Get(&param_1->_HasAlphaBackground);
  this_00 = &(param_1->_Orientation).Getter;
  this->bHasAlphaBackground = *pbVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
  if ((*(int *)&(param_1->_Orientation).Getter.field_0x10 != 0) &&
     (plVar4 = *(longlong **)&(param_1->_Orientation).Getter.field_0x8, plVar4 != (longlong *)0x0))
  {
    cVar1 = (**(code **)(*plVar4 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
      if (*(int *)&(param_1->_Orientation).Getter.field_0x10 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)&(param_1->_Orientation).Getter.field_0x8;
      }
      EVar2 = (**(code **)(*plVar4 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      (param_1->_Orientation).Value = EVar2;
      this->Orientation = EVar2;
      return;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  this->Orientation = (param_1->_Orientation).Value;
  return;
}

// OnPaint @ 14288ed30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SSimpleGradient::OnPaint
          (SSimpleGradient *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  FScriptContainerElement *pFVar1;
  EOrientation EVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  int iVar6;
  ISlateStyle *pIVar7;
  FName *pFVar8;
  FSlateBrush *pFVar9;
  longlong lVar10;
  ESlateDrawEffect EVar11;
  float fVar12;
  float fVar13;
  undefined1 auStackY_188 [32];
  ForAnyElementType local_138;
  undefined8 local_130;
  TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> local_128;
  FDeprecateSlateVector2D local_118;
  FDeprecateSlateVector2D FStack_110;
  undefined8 uStack_108;
  float fStack_100;
  float fStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  FName local_e8 [2];
  TVector4<float>_u_0 local_d8;
  TVector2<float>_u_0 local_c8;
  float local_c0;
  undefined8 local_bc;
  FDeprecateSlateVector2D local_b4;
  float local_ac [2];
  float afStack_a4 [2];
  TVector2<float>_u_0 local_9c;
  byte local_94;
  TVector2<float>_u_0 local_90;
  float local_88;
  undefined8 local_84;
  FDeprecateSlateVector2D local_7c;
  float local_74 [2];
  float afStack_6c [2];
  TVector2<float>_u_0 local_64;
  byte local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if ((!param_7) || (bVar4 = true, *(char *)((longlong)&this->_padding_ + 2) == '\0')) {
    bVar4 = false;
  }
  EVar11 = DisabledEffect;
  if (bVar4) {
    EVar11 = None;
  }
  if (this->bHasAlphaBackground != false) {
    pIVar7 = FAppStyle::Get();
    pcVar3 = *(code **)((longlong)*pIVar7 + 0x50);
    pFVar8 = ::FName::FName(local_e8,"ColorPicker.AlphaBackground");
    pFVar9 = (FSlateBrush *)(*pcVar3)(pIVar7,*pFVar8,0,0);
    local_c8 = (param_2->AbsolutePosition).field0_0x0;
    local_c0 = param_2->Scale;
    local_9c = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
    local_b4 = param_2->Size;
    local_ac = (param_2->AccumulatedRenderTransform).M.M[0];
    afStack_a4 = (param_2->AccumulatedRenderTransform).M.M[1];
    local_bc = 0;
    local_94 = param_2->bHasRenderTransform * '\x02' | local_94 & 0xfc;
    FSlateDrawElement::MakeBox
              (param_4,param_5,(FPaintGeometry *)&local_c8._s_0,pFVar9,EVar11,&FLinearColor::White);
  }
  local_f8 = *(undefined8 *)&this->StartColor;
  uStack_f0 = *(undefined8 *)&(this->StartColor).field_0x8;
  local_138.Data = (FScriptContainerElement *)0x0;
  local_130 = 0;
  fVar12 = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
  fVar13 = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x418,&local_138,(int *)((longlong)&local_130 + 4));
  iVar6 = iVar5 + 1;
  pFVar1 = local_138.Data + (longlong)iVar5 * 0x18;
  *(float *)pFVar1 = fVar12;
  *(float *)(pFVar1 + 4) = fVar13;
  *(float *)(pFVar1 + 8) = (float)local_f8;
  *(float *)(pFVar1 + 0xc) = local_f8._4_4_;
  *(undefined8 *)(local_138.Data + (longlong)iVar5 * 0x18 + 0x10) = uStack_f0;
  local_118 = param_2->Size;
  FStack_110 = *(FDeprecateSlateVector2D *)&this->EndColor;
  uStack_108 = *(undefined8 *)&(this->EndColor).field_0x8;
  fStack_100 = fVar12;
  fStack_fc = fVar13;
  local_130._0_4_ = iVar6;
  if (((local_138.Data <= &local_118) &&
      (&local_118 < (FDeprecateSlateVector2D *)(local_138.Data + (longlong)local_130._4_4_ * 0x18)))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  iVar6 = (int)local_130;
  if ((int)local_130 == local_130._4_4_) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x418,&local_138,(int *)((longlong)&local_130 + 4));
  }
  _Src.Data = local_138.Data;
  local_128.ArrayNum = iVar6 + 1;
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130 = CONCAT44(local_130._4_4_,local_128.ArrayNum);
  *(FDeprecateSlateVector2D *)(local_138.Data + (longlong)iVar6 * 0x18) = local_118;
  ((FDeprecateSlateVector2D *)(local_138.Data + (longlong)iVar6 * 0x18))[1] = FStack_110;
  *(undefined8 *)(local_138.Data + (longlong)iVar6 * 0x18 + 0x10) = uStack_108;
  lVar10 = (longlong)local_128.ArrayNum;
  EVar2 = this->Orientation;
  if (local_128.ArrayNum == 0) {
    local_128.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,local_128.ArrayNum,0,&local_128.AllocatorInstance,local_128.ArrayNum,
               &local_128.ArrayMax);
    memcpy(local_128.AllocatorInstance.Data,_Src.Data,lVar10 * 0x18);
  }
  local_90 = (param_2->AbsolutePosition).field0_0x0;
  local_88 = param_2->Scale;
  local_64 = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
  local_7c = param_2->Size;
  local_74 = (param_2->AccumulatedRenderTransform).M.M[0];
  afStack_6c = (param_2->AccumulatedRenderTransform).M.M[1];
  local_5c = param_2->bHasRenderTransform * '\x02' | local_5c & 0xfc;
  local_84 = 0;
  local_d8._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_d8._8_8_ = _UNK_150689648;
  FSlateDrawElement::MakeGradient
            (param_4,param_5 + 1,(FPaintGeometry *)&local_90._s_0,&local_128,EVar2,EVar11 | NoGamma,
             (TVector4<float> *)&local_d8._s_0);
  if ((FDeprecateSlateVector2D *)local_138.Data != (FDeprecateSlateVector2D *)0x0) {
    FMemory::Free(local_138.Data);
  }
  return param_5 + 1;
}

