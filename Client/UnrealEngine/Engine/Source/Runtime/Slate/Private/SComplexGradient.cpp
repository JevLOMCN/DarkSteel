// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 5

// SComplexGradient @ 142847bb0

SComplexGradient * __thiscall SComplexGradient::SComplexGradient(SComplexGradient *this)

{
  TSlateAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *pTVar1;
  EWidgetUpdateFlags EVar2;
  code *pcVar3;
  bool bVar4;
  SComplexGradient *pSVar5;
  EWidgetUpdateFlags EVar6;
  
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  this->_padding_ = (longlong)&___7SComplexGradient__6B_;
  pTVar1 = &this->GradientColors;
  *(undefined8 *)&pTVar1->field_0x0 = 0;
  *(undefined8 *)&(this->GradientColors).field_0x8 = 0;
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
      pSVar5 = (SComplexGradient *)(*pcVar3)();
      return pSVar5;
    }
  }
  (this->DesiredSizeOverride).field_0x10 = 0;
  if ((&this->DesiredSizeOverride < this) || (this + 1 <= &this->DesiredSizeOverride)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pSVar5 = (SComplexGradient *)(*pcVar3)();
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

// ~SComplexGradient @ 14284a940

void __thiscall SComplexGradient::~SComplexGradient(SComplexGradient *this)

{
  this->_padding_ = (longlong)&___7SComplexGradient__6B_;
  if (*(void **)&this->GradientColors != (void *)0x0) {
    FMemory::Free(*(void **)&this->GradientColors);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// ComputeDesiredSize @ 142858120

TVector2<double> * __thiscall
SComplexGradient::ComputeDesiredSize
          (SComplexGradient *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  double dVar1;
  
  if ((this->DesiredSizeOverride).field_0x10 != '\0') {
    dVar1 = *(double *)&(this->DesiredSizeOverride).field_0x8;
    (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)&this->DesiredSizeOverride;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    return __return_storage_ptr__;
  }
  SCompoundWidget::ComputeDesiredSize((SCompoundWidget *)this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Construct @ 14285ad60

void __thiscall SComplexGradient::Construct(SComplexGradient *this,FArguments *param_1)

{
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->DesiredSizeOverride,(SWidget *)this,&param_1->_DesiredSizeOverride,None);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->GradientColors,(SWidget *)this,&param_1->_GradientColors,None);
  this->bHasAlphaBackground = param_1->_HasAlphaBackground;
  this->Orientation = param_1->_Orientation;
  return;
}

// OnPaint @ 14288e7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SComplexGradient::OnPaint
          (SComplexGradient *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  undefined8 *puVar1;
  EOrientation EVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ISlateStyle *pIVar7;
  FName *pFVar8;
  FSlateBrush *pFVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  ESlateDrawEffect EVar13;
  longlong lVar14;
  float fVar15;
  undefined1 auStackY_178 [32];
  ForAnyElementType local_120;
  undefined8 local_118;
  TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> local_110;
  undefined8 local_100;
  float local_f8;
  float fStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  FSlateWindowElementList *local_e0;
  FName local_d8 [2];
  TVector4<float>_u_0 local_c8;
  TVector2<float>_u_0 local_b8;
  float local_b0;
  undefined8 local_ac;
  FDeprecateSlateVector2D local_a4;
  float local_9c [2];
  float afStack_94 [2];
  TVector2<float>_u_0 local_8c;
  byte local_84;
  TVector2<float>_u_0 local_80;
  float local_78;
  undefined8 local_74;
  FDeprecateSlateVector2D local_6c;
  float local_64 [2];
  float afStack_5c [2];
  TVector2<float>_u_0 local_54;
  byte local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_e0 = param_4;
  if ((param_7) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
    EVar13 = None;
  }
  else {
    EVar13 = DisabledEffect;
  }
  if (this->bHasAlphaBackground != false) {
    pIVar7 = FAppStyle::Get();
    pcVar3 = *(code **)((longlong)*pIVar7 + 0x50);
    pFVar8 = ::FName::FName(local_d8,"ColorPicker.AlphaBackground");
    pFVar9 = (FSlateBrush *)(*pcVar3)(pIVar7,*pFVar8,0,0);
    local_b8 = (param_2->AbsolutePosition).field0_0x0;
    local_b0 = param_2->Scale;
    local_8c = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
    local_a4 = param_2->Size;
    local_9c = (param_2->AccumulatedRenderTransform).M.M[0];
    afStack_94 = (param_2->AccumulatedRenderTransform).M.M[1];
    local_ac = 0;
    local_84 = param_2->bHasRenderTransform * '\x02' | local_84 & 0xfc;
    FSlateDrawElement::MakeBox
              (param_4,param_5,(FPaintGeometry *)&local_b8._s_0,pFVar9,EVar13,&FLinearColor::White);
  }
  iVar6 = *(int *)&(this->GradientColors).field_0x8;
  lVar10 = (longlong)iVar6;
  if (1 < iVar6) {
    iVar11 = 0;
    local_120.Data = (FScriptContainerElement *)0x0;
    uVar12 = 0;
    local_118 = 0;
    if (0 < iVar6) {
      lVar14 = 0;
      fVar15 = __real_3f800000 / (float)(iVar6 + -1);
      iVar11 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar12 < *(int *)&(this->GradientColors).field_0x8) {
          uVar5 = ~uVar12 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            iVar6 = (*pcVar3)();
            return iVar6;
          }
          iVar11 = (int)local_118;
        }
        local_100 = param_2->Size;
        puVar1 = (undefined8 *)(lVar14 + *(longlong *)&this->GradientColors);
        uStack_f0 = *puVar1;
        uStack_e8 = puVar1[1];
        local_f8 = (float)(int)uVar12 * fVar15;
        fStack_f4 = local_f8 * local_100._4_4_;
        local_f8 = local_f8 * (float)local_100;
        iVar6 = iVar11;
        if ((local_120.Data <= (FScriptContainerElement *)&local_f8) &&
           ((FScriptContainerElement *)&local_f8 < local_120.Data + (longlong)local_118._4_4_ * 0x18
           )) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            iVar6 = (*pcVar3)();
            return iVar6;
          }
          iVar6 = (int)local_118;
        }
        if (iVar6 == local_118._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x418,&local_120,(int *)((longlong)&local_118 + 4));
        }
        iVar11 = iVar6 + 1;
        local_118 = CONCAT44(local_118._4_4_,iVar11);
        uVar12 = uVar12 + 1;
        lVar14 = lVar14 + 0x10;
        *(ulonglong *)(local_120.Data + (longlong)iVar6 * 0x18) = CONCAT44(fStack_f4,local_f8);
        *(undefined8 *)(local_120.Data + (longlong)iVar6 * 0x18 + 8) = uStack_f0;
        *(undefined8 *)(local_120.Data + (longlong)iVar6 * 0x18 + 0x10) = uStack_e8;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    _Src.Data = local_120.Data;
    EVar2 = this->Orientation;
    local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_110.ArrayNum = iVar11;
    if (iVar11 == 0) {
      local_110.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,iVar11,0,&local_110.AllocatorInstance,iVar11,&local_110.ArrayMax);
      memcpy(local_110.AllocatorInstance.Data,_Src.Data,(longlong)iVar11 * 0x18);
    }
    local_80 = (param_2->AbsolutePosition).field0_0x0;
    local_78 = param_2->Scale;
    local_54 = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
    local_6c = param_2->Size;
    local_64 = (param_2->AccumulatedRenderTransform).M.M[0];
    afStack_5c = (param_2->AccumulatedRenderTransform).M.M[1];
    local_4c = param_2->bHasRenderTransform * '\x02' | local_4c & 0xfc;
    local_74 = 0;
    local_c8._0_8_ = ___xmm_3f800000000000000000000000000000;
    local_c8._8_8_ = _UNK_150689648;
    FSlateDrawElement::MakeGradient
              (local_e0,param_5 + 1,(FPaintGeometry *)&local_80._s_0,&local_110,EVar2,EVar13,
               (TVector4<float> *)&local_c8._s_0);
    if (local_120.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data);
    }
  }
  return param_5 + 1;
}

