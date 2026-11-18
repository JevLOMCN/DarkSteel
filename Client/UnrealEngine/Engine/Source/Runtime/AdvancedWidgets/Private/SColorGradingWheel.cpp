// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 20

// SColorGradingWheel @ 14d8373b0

SColorGradingWheel * __thiscall
UE::ColorGrading::SColorGradingWheel::SColorGradingWheel(SColorGradingWheel *this)

{
  TSlateAttribute<FLinearColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_00;
  TSlateAttribute<int,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_01;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_02;
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  SColorGradingWheel *pSVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_78 [4];
  undefined8 local_74;
  undefined8 uStack_6c;
  
  SLeafWidget::SLeafWidget((SLeafWidget *)this);
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this_00 = &this->SelectedColorAttribute;
  this->_padding_ = (longlong)&_vftable__for__SLeafWidget__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  *(undefined8 *)&this->OnMouseCaptureBegin = 0;
  *(undefined4 *)&(this->OnMouseCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->OnMouseCaptureEnd = 0;
  *(undefined4 *)&(this->OnMouseCaptureEnd).field_0x10 = 0;
  *(undefined8 *)&this->OnValueChanged = 0;
  *(undefined4 *)&(this->OnValueChanged).field_0x10 = 0;
  local_74 = 0;
  uStack_6c = 0;
  (this->BackgroundMaterial).field0_0x0.DebugPtr = (UMaterial *)0x0;
  (this->BackgroundImage).Object = (FSlateBrush *)0x0;
  (this->BackgroundImage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->OnMouseCaptureBegin).field_0x8 = 0;
  *(undefined8 *)&(this->OnMouseCaptureEnd).field_0x8 = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x8 = 0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->SelectedColorAttribute).field_0x8 = 0;
  fVar1 = *(float *)&(this->SelectedColorAttribute).field_0x4;
  fVar2 = *(float *)&(this->SelectedColorAttribute).field_0x8;
  fVar3 = *(float *)&(this->SelectedColorAttribute).field_0xc;
  iVar6 = _finite((double)*(float *)&this_00->field_0x0);
  if (iVar6 != 0) {
    iVar6 = _finite((double)fVar1);
    if (iVar6 != 0) {
      iVar6 = _finite((double)fVar2);
      if (iVar6 != 0) {
        iVar6 = _finite((double)fVar3);
        if (iVar6 != 0) goto LAB_14d8374d9;
      }
    }
  }
  local_res8[0] = 0;
  `SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::VerifyNan'::__l37::<lambda_1>::operator()(local_res8);
LAB_14d8374d9:
  pSVar7 = this + 1;
  if ((this_00 < this) || (pSVar7 <= this_00)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pSVar7 = (SColorGradingWheel *)(*pcVar4)();
      return pSVar7;
    }
  }
  bVar5 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_00,(SWidget *)this);
  if (!bVar5) {
    local_res10[0] = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<UE::ColorGrading::SColorGradingWheel,void>'::__l2::<lambda_1>::
    operator()(local_res10);
  }
  this_01 = &this->DesiredWheelSizeAttribute;
  *(undefined4 *)&this_01->field_0x0 = 0;
  if ((this_01 < this) || (pSVar7 <= this_01)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pSVar7 = (SColorGradingWheel *)(*pcVar4)();
      return pSVar7;
    }
  }
  bVar5 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_01,(SWidget *)this);
  if (!bVar5) {
    local_res18[0] = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<UE::ColorGrading::SColorGradingWheel,void>'::__l2::<lambda_1>::
    operator()(local_res18);
  }
  this_02 = &this->ExponentDisplacementAttribute;
  *(undefined4 *)&this_02->field_0x0 = 0;
  iVar6 = _finite(0.0);
  if (iVar6 == 0) {
    local_res20[0] = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::VerifyNan'::__l5::<lambda_1>::operator()(local_res20);
  }
  if ((this_02 < this) || (pSVar7 <= this_02)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pSVar7 = (SColorGradingWheel *)(*pcVar4)();
      return pSVar7;
    }
  }
  bVar5 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_02,(SWidget *)this);
  if (!bVar5) {
    `SlateAttributePrivate::
    TSlateMemberAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<UE::ColorGrading::SColorGradingWheel,void>'::__l2::<lambda_1>::
    operator()(local_78);
  }
  (this->field79_0x2b0).Union_IsAttributeSet = '\0';
  return this;
}

// ~SColorGradingWheel @ 14d83b3f0

void __thiscall UE::ColorGrading::SColorGradingWheel::~SColorGradingWheel(SColorGradingWheel *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged);
  pvVar1 = *(void **)&(this->OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureEnd);
  pvVar1 = *(void **)&(this->OnMouseCaptureEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseCaptureEnd);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureBegin);
  pvVar1 = *(void **)&(this->OnMouseCaptureBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseCaptureBegin);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BackgroundImage).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->_padding_);
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  return;
}

// AddReferencedObjects @ 14d842270

void __thiscall
UE::ColorGrading::SColorGradingWheel::AddReferencedObjects
          (SColorGradingWheel *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014d842283. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->_padding_,0,0);
  return;
}

// CalcRelativePositionFromCenter @ 14d843400

FDeprecateSlateVector2D __thiscall
UE::ColorGrading::SColorGradingWheel::CalcRelativePositionFromCenter(SColorGradingWheel *this)

{
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar1;
  FDeprecateSlateVector2D in_RDX;
  float _X;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  
  _X = *(float *)&(this->SelectedColorAttribute).field_0x4;
  if (((this->field79_0x2b0).Union_IsAttributeSet & 2) != 0) {
    TVar1 = this->ExponentDisplacementAttribute;
    if (((float)TVar1 != __real_3f800000) &&
       (__real_3727c5ac < (float)((uint)TVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      _X = powf(_X,__real_3f800000 / (float)TVar1);
    }
  }
  __libm_sse2_sincosf_();
  *(ulonglong *)in_RDX = CONCAT44(extraout_XMM0_Da * _X,extraout_XMM0_Db * _X);
  return in_RDX;
}

// ComputeDesiredSize @ 14d843c00

TVector2<double> * __thiscall
UE::ColorGrading::SColorGradingWheel::ComputeDesiredSize
          (SColorGradingWheel *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  TSlateAttribute<int,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar2;
  FSlateBrush *pFVar3;
  code *pcVar4;
  bool bVar5;
  TVector2<double> *pTVar6;
  
  if (((this->field79_0x2b0).Union_IsAttributeSet & 1) != 0) {
    TVar2 = this->DesiredWheelSizeAttribute;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(int)TVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(int)TVar2;
    return __return_storage_ptr__;
  }
  if ((this->BackgroundImage).Object == (FSlateBrush *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TVector2<double> *)(*pcVar4)();
      return pTVar6;
    }
  }
  pFVar3 = (this->BackgroundImage).Object;
  fVar1 = *(float *)&(pFVar3->ImageSize).field_0x4;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)*(float *)&pFVar3->ImageSize;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  return __return_storage_ptr__;
}

// Construct @ 14d84aba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::ColorGrading::SColorGradingWheel::Construct(SColorGradingWheel *this,FArguments *param_1)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  TUniquePtr<FSlateStyleSet,TDefaultDelete<FSlateStyleSet>_> TVar4;
  bool bVar5;
  bool bVar6;
  UClass *pUVar7;
  UMaterial *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  FString *pFVar10;
  FName *pFVar11;
  FSlateBrush *pFVar12;
  wchar_t *pwVar13;
  TReferenceControllerBase<1> *pTVar14;
  float local_res8 [2];
  undefined4 local_res10;
  undefined4 uStackX_14;
  undefined8 local_res18;
  FDeprecateVector2DParameter local_res20;
  undefined1 local_168 [8];
  undefined1 local_160 [8];
  ForAnyElementType FStack_158;
  int local_150;
  undefined1 local_148 [8];
  undefined1 local_140 [8];
  ForAnyElementType FStack_138;
  int local_130;
  FSlateBrush *local_128;
  FSharedReferencer<1> FStack_120;
  wchar_t *local_118;
  undefined8 uStack_110;
  wchar_t *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FDestructionSentinel local_f8;
  FDestructionSentinel local_e0;
  FLinearColor_u_0 local_c8;
  undefined1 local_b8;
  undefined1 local_b0 [24];
  FName local_98;
  FName local_90;
  FName local_88 [2];
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  FMargin local_58;
  FString local_48;
  
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  iStack_100 = 0x45;
  uStack_110._0_4_ = 0;
  uStack_110._4_4_ = 0;
  local_118 = (wchar_t *)0x0;
  local_108 = L"Material\'/Engine/EngineMaterials/ColorGradingWheel.ColorGradingWheel\'";
  pUVar7 = Z_Construct_UClass_UMaterial_NoRegister();
  local_68._12_4_ = uStack_fc;
  local_68.Size = iStack_100;
  local_78.DataPtr = local_118;
  local_78.Size = (int)uStack_110;
  local_78._12_4_ = uStack_110._4_4_;
  local_68.DataPtr = local_108;
  pUVar8 = (UMaterial *)
           StaticLoadObject(pUVar7,(UObject *)0x0,&local_68,&local_78,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  if ((GC::GIsIncrementalReachabilityPending == false) || (pUVar8 == (UMaterial *)0x0)) {
    (this->BackgroundMaterial).field0_0x0.DebugPtr = pUVar8;
    if (pUVar8 == (UMaterial *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BackgroundMaterial",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\ColorGrading\\SColorGradingWheel.cpp"
                         ,0x25,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  else {
    GC::MarkAsReachable((UObject *)pUVar8);
    (this->BackgroundMaterial).field0_0x0.DebugPtr = pUVar8;
  }
  pUVar8 = (this->BackgroundMaterial).field0_0x0.DebugPtr;
  local_res10 = 0x43c80000;
  uStackX_14 = 0x43c80000;
  pTVar9 = ::operator_new(0xc0);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    local_128 = ___xmm_00000000000000000000000000000010;
    pFVar12 = (FSlateBrush *)&DAT_00000010;
    FStack_120.ReferenceController = _UNK_150651568;
  }
  else {
    local_res20._4_4_ = uStackX_14;
    local_res20._0_4_ = local_res10;
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFSlateMaterialBrush___00_SharedPointerInternals__6B_;
    local_58.Left = 0.0;
    local_58.Top = 0.0;
    local_58.Right = 0.0;
    local_58.Bottom = 0.0;
    local_res18 = 0;
    FSlateBrush::FSlateBrush
              ((FSlateBrush *)(pTVar9 + 1),Image,(FName)0x0,&local_58,NoTile,FullColor,&local_res20,
               &FLinearColor::White,(UObject *)pUVar8,false);
    pTVar9[1]._padding_ = (longlong)&___7FSlateMaterialBrush__6B_;
    pFVar10 = UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)pUVar8,&local_48,(UObject *)0x0,None);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    pFVar11 = ::FName::FName(&local_98,pwVar13);
    uVar3 = pFVar11->Number;
    pTVar9[0xb].SharedReferenceCount = (atomic<int>)(pFVar11->ComparisonIndex).Value;
    pTVar9[0xb].WeakReferenceCount = (atomic<int>)uVar3;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pFVar12 = (FSlateBrush *)(pTVar9 + 1);
    if (pFVar12 == (FSlateBrush *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    FStack_120.ReferenceController = pTVar9;
    pTVar14 = pTVar9;
    local_128 = pFVar12;
  }
  if (&this->BackgroundImage != (TSharedPtr<FSlateBrush,1> *)&local_128) {
    (this->BackgroundImage).Object = pFVar12;
    local_128 = (FSlateBrush *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->BackgroundImage).SharedReferenceCount,&FStack_120);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_120.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  TVar4 = AdvancedWidgets::FAdvancedWidgetsStyle::Instance;
  pcVar2 = *(code **)((AdvancedWidgets::FAdvancedWidgetsStyle::Instance.Ptr)->_padding_ + 0x50);
  pFVar11 = ::FName::FName(&local_90,"ColorGradingWheel.Cross");
  pFVar12 = (FSlateBrush *)(*pcVar2)(TVar4.Ptr,*pFVar11,0);
  this->CrossImage = pFVar12;
  TVar4 = AdvancedWidgets::FAdvancedWidgetsStyle::Instance;
  pcVar2 = *(code **)((AdvancedWidgets::FAdvancedWidgetsStyle::Instance.Ptr)->_padding_ + 0x50);
  pFVar11 = ::FName::FName(local_88,"ColorGradingWheel.Selector");
  pFVar12 = (FSlateBrush *)(*pcVar2)(TVar4.Ptr,*pFVar11,0);
  this->SelectorImage = pFVar12;
  local_c8._0_8_ = *(undefined8 *)&(param_1->_SelectedColor).Value.field0_0x0;
  local_c8._8_8_ = *(undefined8 *)((longlong)&(param_1->_SelectedColor).Value.field0_0x0 + 8);
  local_b8 = (param_1->_SelectedColor).bIsSet;
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_b0,
             &(param_1->_SelectedColor).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->SelectedColorAttribute,(SWidget *)this,
           (TAttribute<FLinearColor> *)&local_c8._s_0,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b0);
  if ((void *)local_b0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b0);
  local_168._0_4_ = (param_1->_DesiredWheelSize).Value;
  local_168[4] = (param_1->_DesiredWheelSize).bIsSet;
  local_160 = (undefined1  [8])0x0;
  FStack_158.Data = (FScriptContainerElement *)0x0;
  local_150 = 0;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *)local_160,
             &(param_1->_DesiredWheelSize).Getter);
  bVar5 = local_168[4];
  bVar1 = (this->field79_0x2b0).Union_IsAttributeSet;
  (this->field79_0x2b0).Union_IsAttributeSet = (local_168[4] ^ bVar1) & 1 ^ bVar1;
  bVar6 = SlateAttributePrivate::
          TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          ::Assign((TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                    *)&this->DesiredWheelSizeAttribute,(SWidget *)this,(TAttribute<int> *)local_168,
                   None);
  if (((bool)(bVar1 & 1) != bVar5) && (!bVar6)) {
    SWidget::Invalidate((SWidget *)this,Layout);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_160,
             (FWriteAccessScope *)&local_f8);
  if ((local_150 != 0) && (FStack_158.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_158.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_158,0,0,0x10);
    local_150 = 0;
  }
  if (local_f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
  }
  if (FStack_158.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_158.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_160);
  local_148._0_4_ = (param_1->_ExponentDisplacement).Value;
  local_148[4] = (param_1->_ExponentDisplacement).bIsSet;
  local_140 = (undefined1  [8])0x0;
  FStack_138.Data = (FScriptContainerElement *)0x0;
  local_130 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_140,
             &(param_1->_ExponentDisplacement).Getter);
  bVar5 = local_148[4];
  bVar1 = (this->field79_0x2b0).Union_IsAttributeSet;
  local_res8[0] = 1.0;
  (this->field79_0x2b0).Union_IsAttributeSet = (local_148[4] * '\x02' ^ bVar1) & 2 ^ bVar1;
  bVar6 = SlateAttributePrivate::
          TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                    *)&this->ExponentDisplacementAttribute,(SWidget *)this,
                   (TAttribute<float> *)local_148,local_res8,None);
  if (((bool)(bVar1 >> 1 & 1) != bVar5) && (!bVar6)) {
    SWidget::Invalidate((SWidget *)this,Paint);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_140,
             (FWriteAccessScope *)&local_e0);
  if ((local_130 != 0) && (FStack_138.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_138.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_138,0,0,0x10);
    local_130 = 0;
  }
  if (local_e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
  }
  if (FStack_138.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_138.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_140);
  TDelegate<void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnMouseCaptureBegin,&param_1->_OnMouseCaptureBegin);
  TDelegate<void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnMouseCaptureEnd,&param_1->_OnMouseCaptureEnd);
  TDelegate<void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnValueChanged,&param_1->_OnValueChanged);
  return;
}

// GetActualSize @ 14d865990

TVector2<float> __thiscall
UE::ColorGrading::SColorGradingWheel::GetActualSize(SColorGradingWheel *this,FGeometry *param_1)

{
  FDeprecateSlateVector2D FVar1;
  FDeprecateSlateVector2D *in_R8;
  float local_res8;
  float fStackX_c;
  
  FVar1 = *in_R8;
  if (((this->field79_0x2b0).Union_IsAttributeSet & 1) != 0) {
    local_res8 = FVar1._0_4_;
    fStackX_c = FVar1._4_4_;
    if (fStackX_c <= local_res8) {
      local_res8 = fStackX_c;
    }
    if ((float)(int)this->DesiredWheelSizeAttribute <= local_res8) {
      local_res8 = (float)(int)this->DesiredWheelSizeAttribute;
    }
    *(float *)&param_1->Size = local_res8;
    *(float *)&(param_1->Size).field_0x4 = local_res8;
    return (TVector2<float>)(TVector2<float>_u_0)param_1;
  }
  param_1->Size = FVar1;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// GetPrivateWidgetClass @ 14d86ad40

FSlateWidgetClassData * __cdecl UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(local_res10,"SColorGradingWheel");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&local_res8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetReferencerName @ 14d86bc70

FString * __thiscall
UE::ColorGrading::SColorGradingWheel::GetReferencerName
          (SColorGradingWheel *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"SColorGradingWheel");
  return __return_storage_ptr__;
}

// GetWidgetClass @ 14d86d890

FSlateWidgetClassData * __thiscall
UE::ColorGrading::SColorGradingWheel::GetWidgetClass(SColorGradingWheel *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(aFStackX_10,"SColorGradingWheel");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// OnMouseButtonDoubleClick @ 14d876cf0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UE::ColorGrading::SColorGradingWheel::OnMouseButtonDoubleClick
          (SColorGradingWheel *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 14d877560

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UE::ColorGrading::SColorGradingWheel::OnMouseButtonDown
          (SColorGradingWheel *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  char cVar4;
  TSharedRef<SWidget,1> *pTVar5;
  FReply *pFVar6;
  longlong *plVar7;
  bool bVar8;
  FReadAccessScope local_e8;
  FReply local_d0;
  
  FVar1 = (param_2->EffectingButton).KeyName;
  pTVar2 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar8 = FVar1 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar8) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureBegin,
               &local_e8);
    if (((*(int *)&(this->OnMouseCaptureBegin).field_0x10 == 0) ||
        (plVar7 = *(longlong **)&(this->OnMouseCaptureBegin).field_0x8, plVar7 == (longlong *)0x0))
       || (cVar4 = (**(code **)(*plVar7 + 0x38))(), cVar4 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_e8);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_e8);
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
                ((FSlateAttributeImpl *)&this->SelectedColorAttribute,(SWidget *)this,Member);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnMouseCaptureBegin,&local_e8);
      if (*(int *)&(this->OnMouseCaptureBegin).field_0x10 == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)&(this->OnMouseCaptureBegin).field_0x8;
      }
      (**(code **)(*plVar7 + 0x60))(plVar7,&this->SelectedColorAttribute);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_e8);
    }
    bVar8 = ProcessMouseAction(this,param_1,param_2,false);
    if (bVar8) {
      FReply::FReply(&local_d0,true);
      pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                          (TSharedRef<SWidget,1> *)&local_e8);
      pTVar2 = (pTVar5->SharedReferenceCount).ReferenceController;
      pSVar3 = pTVar5->Object;
      if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_e8.DestructionSentinel.Accessor);
      }
      else {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_e8.DestructionSentinel.Accessor);
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e8.DestructionSentinel._0_8_ = pSVar3;
      local_e8.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)pTVar2;
      pFVar6 = FReply::CaptureMouse(&local_d0,(TSharedRef<SWidget,1> *)&local_e8);
      FReply::FReply(__return_storage_ptr__,pFVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      FReply::~FReply(&local_d0);
      return __return_storage_ptr__;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureEnd,
               &local_e8);
    if (((*(int *)&(this->OnMouseCaptureEnd).field_0x10 == 0) ||
        (plVar7 = *(longlong **)&(this->OnMouseCaptureEnd).field_0x8, plVar7 == (longlong *)0x0)) ||
       (cVar4 = (**(code **)(*plVar7 + 0x38))(), cVar4 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_e8);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_e8);
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
                ((FSlateAttributeImpl *)&this->SelectedColorAttribute,(SWidget *)this,Member);
      TDelegate<void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>::Execute
                (&this->OnMouseCaptureEnd,(FLinearColor *)&this->SelectedColorAttribute);
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 14d8785b0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UE::ColorGrading::SColorGradingWheel::OnMouseButtonUp
          (SColorGradingWheel *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  FWeakReferencer<1> FVar5;
  bool bVar6;
  char cVar7;
  longlong *plVar8;
  FReadAccessScope local_d8;
  FReply local_c0;
  
  pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar4 = (param_2->EffectingButton).KeyName;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FVar4 == EKeys::LeftMouseButton.KeyName) &&
     (bVar6 = SWidget::HasMouseCapture((SWidget *)this), bVar6)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureEnd,
               &local_d8);
    if ((*(int *)&(this->OnMouseCaptureEnd).field_0x10 == 0) ||
       ((plVar8 = *(longlong **)&(this->OnMouseCaptureEnd).field_0x8, plVar8 == (longlong *)0x0 ||
        (cVar7 = (**(code **)(*plVar8 + 0x38))(), cVar7 == '\0')))) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d8);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d8);
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
                ((FSlateAttributeImpl *)&this->SelectedColorAttribute,(SWidget *)this,Member);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureEnd,
                 &local_d8);
      if (*(int *)&(this->OnMouseCaptureEnd).field_0x10 == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = *(longlong **)&(this->OnMouseCaptureEnd).field_0x8;
      }
      (**(code **)(*plVar8 + 0x60))(plVar8,&this->SelectedColorAttribute);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d8);
    }
    FReply::FReply(&local_c0,true);
    FVar5.ReferenceController = local_c0.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_c0.MouseCaptor.Object = (SWidget *)0x0;
    local_c0.MouseCaptor.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
      }
    }
    local_c0.bUseHighPrecisionMouse = 0;
    local_c0.bReleaseMouseCapture = 1;
    FReply::FReply(__return_storage_ptr__,&local_c0);
    FReply::~FReply(&local_c0);
    return __return_storage_ptr__;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseMove @ 14d879070

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UE::ColorGrading::SColorGradingWheel::OnMouseMove
          (SColorGradingWheel *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  bool bVar1;
  
  bVar1 = SWidget::HasMouseCapture((SWidget *)this);
  if (bVar1) {
    ProcessMouseAction(this,param_1,param_2,true);
  }
  FReply::FReply(__return_storage_ptr__,bVar1);
  return __return_storage_ptr__;
}

// OnPaint @ 14d87a4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::ColorGrading::SColorGradingWheel::OnPaint
          (SColorGradingWheel *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar1;
  ESlateColorStylingMode EVar2;
  FDeprecateSlateVector2D FVar3;
  FSlateBrush *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  FSlateColor *pFVar9;
  ESlateDrawEffect EVar10;
  float fVar11;
  float extraout_XMM0_Da;
  float fVar12;
  float extraout_XMM0_Db;
  float fVar13;
  float fVar14;
  undefined1 auStackY_278 [32];
  float local_240;
  float fStack_23c;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  FLinearColor_u_0 local_200;
  FLinearColor_u_0 local_1f0;
  FLinearColor_u_0 local_1e0;
  TVector2<float>_u_0_s_0 local_1cc;
  TVector2<float>_u_0_s_0 local_1c0;
  TVector2<float>_u_0_s_0 local_1b4;
  undefined8 local_198;
  undefined8 local_180;
  undefined8 local_168;
  TVector2<float>_u_0 local_160;
  float local_158;
  undefined8 local_154;
  undefined8 local_14c;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  undefined8 local_134;
  byte local_12c;
  TVector2<float>_u_0 local_128;
  float local_120;
  undefined8 local_11c;
  undefined8 local_114;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  undefined8 local_fc;
  byte local_f4;
  TVector2<float>_u_0 local_f0;
  float local_e8;
  undefined8 local_e4;
  FDeprecateSlateVector2D local_dc;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined8 local_c4;
  byte local_bc;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_278;
  if ((!param_7) || (bVar7 = true, *(char *)((longlong)&this->_padding_ + 2) == '\0')) {
    bVar7 = false;
  }
  EVar10 = DisabledEffect;
  if (bVar7) {
    EVar10 = None;
  }
  local_240 = SUB84(param_2->Size,0);
  fStack_23c = SUB84(param_2->Size,4);
  fVar12 = local_240;
  fVar13 = fStack_23c;
  if (((this->field79_0x2b0).Union_IsAttributeSet & 1) != 0) {
    if (local_240 <= fStack_23c) {
      fStack_23c = local_240;
    }
    fVar11 = (float)(int)this->DesiredWheelSizeAttribute;
    fVar12 = fStack_23c;
    fVar13 = fStack_23c;
    if (fVar11 <= fStack_23c) {
      fVar12 = fVar11;
      fVar13 = fVar11;
    }
  }
  FVar3 = this->SelectorImage->ImageSize;
  local_240 = FVar3._0_4_;
  fStack_23c = FVar3._4_4_;
  if (((this->BackgroundImage).Object == (FSlateBrush *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    iVar8 = (*pcVar5)();
    return iVar8;
  }
  pFVar4 = (this->BackgroundImage).Object;
  EVar2 = (pFVar4->TintColor).ColorUseRule;
  pFVar9 = &pFVar4->TintColor;
  if (EVar2 != UseColor_Specified) {
    if (EVar2 == UseColor_ColorTable) {
      pFVar9 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar9);
    }
    else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
      pFVar9 = (FSlateColor *)&param_6->ForegroundColor;
    }
    else {
      pFVar9 = (FSlateColor *)&param_6->SubduedForeground;
    }
  }
  local_1cc = (param_2->AbsolutePosition).field0_0x0._s_0;
  local_158 = param_2->Scale;
  local_13c = (param_2->AccumulatedRenderTransform).M.M[1][0];
  local_200._s_0.R =
       (pFVar9->SpecifiedColor).field0_0x0._s_0.R * (param_6->ColorAndOpacityTint).field0_0x0._s_0.R
  ;
  local_144 = (param_2->AccumulatedRenderTransform).M.M[0][0];
  local_140 = (param_2->AccumulatedRenderTransform).M.M[0][1];
  local_138 = (param_2->AccumulatedRenderTransform).M.M[1][1];
  fVar14 = local_240 * __real_3f000000;
  uVar6 = CONCAT44(fVar13 - fStack_23c,fVar12 - local_240);
  local_200._s_0.G =
       *(float *)((longlong)&(pFVar9->SpecifiedColor).field0_0x0 + 4) *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
  local_200._s_0.B =
       *(float *)((longlong)&(pFVar9->SpecifiedColor).field0_0x0 + 8) *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
  local_154 = 0;
  local_200._s_0.A =
       *(float *)((longlong)&(pFVar9->SpecifiedColor).field0_0x0 + 0xc) *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
  fVar11 = fStack_23c * __real_3f000000;
  local_238 = CONCAT44(fVar11,fVar14);
  local_198 = local_238;
  local_228._4_4_ = fVar11 * local_158 + local_1cc.Y;
  local_228._0_4_ = fVar14 * local_158 + local_1cc.X;
  local_160 = local_228;
  local_230 = CONCAT44(fVar11 * local_138 + fVar14 * local_140 +
                       (param_2->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y,
                       fVar14 * local_144 + fVar11 * local_13c +
                       (param_2->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X);
  local_134 = local_230;
  local_12c = param_2->bHasRenderTransform * '\x02' | local_12c & 0xfc;
  local_14c = uVar6;
  FSlateDrawElement::MakeBox
            (param_4,param_5,(FPaintGeometry *)&local_160._s_0,(this->BackgroundImage).Object,EVar10
             ,(FLinearColor *)&local_200._s_0);
  EVar2 = (this->CrossImage->TintColor).ColorUseRule;
  pFVar9 = &this->CrossImage->TintColor;
  if (EVar2 != UseColor_Specified) {
    if (EVar2 == UseColor_ColorTable) {
      pFVar9 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar9);
    }
    else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
      pFVar9 = (FSlateColor *)&param_6->ForegroundColor;
    }
    else {
      pFVar9 = (FSlateColor *)&param_6->SubduedForeground;
    }
  }
  local_1c0 = (param_2->AbsolutePosition).field0_0x0._s_0;
  local_120 = param_2->Scale;
  local_104 = (param_2->AccumulatedRenderTransform).M.M[1][0];
  local_1f0._s_0.R =
       (pFVar9->SpecifiedColor).field0_0x0._s_0.R * (param_6->ColorAndOpacityTint).field0_0x0._s_0.R
  ;
  local_10c = (param_2->AccumulatedRenderTransform).M.M[0][0];
  local_108 = (param_2->AccumulatedRenderTransform).M.M[0][1];
  local_100 = (param_2->AccumulatedRenderTransform).M.M[1][1];
  local_1f0._s_0.G =
       (pFVar9->SpecifiedColor).field0_0x0._s_0.G * (param_6->ColorAndOpacityTint).field0_0x0._s_0.G
  ;
  local_1f0._s_0.B =
       (pFVar9->SpecifiedColor).field0_0x0._s_0.B * (param_6->ColorAndOpacityTint).field0_0x0._s_0.B
  ;
  local_1f0._s_0.A =
       (pFVar9->SpecifiedColor).field0_0x0._s_0.A * (param_6->ColorAndOpacityTint).field0_0x0._s_0.A
  ;
  local_11c = 0;
  local_230 = CONCAT44(fVar11,fVar14);
  local_180 = local_230;
  local_128._s_0.Y = fVar11 * local_120 + local_1c0.Y;
  local_128._s_0.X = fVar14 * local_120 + local_1c0.X;
  local_fc = CONCAT44(fVar11 * local_100 + fVar14 * local_108 +
                      (param_2->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y,
                      fVar14 * local_10c + fVar11 * local_104 +
                      (param_2->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X);
  local_f4 = param_2->bHasRenderTransform * '\x02' | local_f4 & 0xfc;
  local_114 = uVar6;
  FSlateDrawElement::MakeBox
            (param_4,param_5 + 1,(FPaintGeometry *)&local_128._s_0,this->CrossImage,EVar10,
             (FLinearColor *)&local_1f0._s_0);
  EVar2 = (this->SelectorImage->TintColor).ColorUseRule;
  pFVar9 = &this->SelectorImage->TintColor;
  if (EVar2 != UseColor_Specified) {
    if (EVar2 == UseColor_ColorTable) {
      pFVar9 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar9);
    }
    else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
      pFVar9 = (FSlateColor *)&param_6->ForegroundColor;
    }
    else {
      pFVar9 = (FSlateColor *)&param_6->SubduedForeground;
    }
  }
  fVar11 = *(float *)&(this->SelectedColorAttribute).field_0x4;
  local_1e0._s_0.R =
       (pFVar9->SpecifiedColor).field0_0x0._s_0.R * (param_6->ColorAndOpacityTint).field0_0x0._s_0.R
  ;
  local_1e0._s_0.G =
       (pFVar9->SpecifiedColor).field0_0x0._s_0.G * (param_6->ColorAndOpacityTint).field0_0x0._s_0.G
  ;
  local_1e0._s_0.B =
       (pFVar9->SpecifiedColor).field0_0x0._s_0.B * (param_6->ColorAndOpacityTint).field0_0x0._s_0.B
  ;
  local_1e0._s_0.A =
       (pFVar9->SpecifiedColor).field0_0x0._s_0.A * (param_6->ColorAndOpacityTint).field0_0x0._s_0.A
  ;
  if (((((this->field79_0x2b0).Union_IsAttributeSet & 2) != 0) &&
      (TVar1 = this->ExponentDisplacementAttribute, (float)TVar1 != __real_3f800000)) &&
     (__real_3727c5ac < (float)((uint)TVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    fVar11 = powf(fVar11,__real_3f800000 / (float)TVar1);
  }
  __libm_sse2_sincosf_();
  local_e8 = param_2->Scale;
  local_cc = (param_2->AccumulatedRenderTransform).M.M[1][0];
  local_d4 = (param_2->AccumulatedRenderTransform).M.M[0][0];
  local_d0 = (param_2->AccumulatedRenderTransform).M.M[0][1];
  local_e4 = 0;
  local_c8 = (param_2->AccumulatedRenderTransform).M.M[1][1];
  local_1b4 = (param_2->AbsolutePosition).field0_0x0._s_0;
  fVar12 = ((extraout_XMM0_Db * fVar11 * (fVar12 - local_240) + fVar12) - local_240) *
           __real_3f000000;
  fVar13 = ((extraout_XMM0_Da * fVar11 * (fVar13 - fStack_23c) + fVar13) - fStack_23c) *
           __real_3f000000;
  local_168 = CONCAT44(fVar13,fVar12);
  local_f0._s_0.Y = fVar13 * local_e8 + local_1b4.Y;
  local_f0._s_0.X = fVar12 * local_e8 + local_1b4.X;
  local_c4 = CONCAT44(fVar13 * local_c8 + fVar12 * local_d0 +
                      (param_2->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y,
                      fVar12 * local_d4 + fVar13 * local_cc +
                      (param_2->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X);
  local_bc = param_2->bHasRenderTransform * '\x02' | local_bc & 0xfc;
  local_dc = FVar3;
  FSlateDrawElement::MakeBox
            (param_4,param_5 + 2,(FPaintGeometry *)&local_f0._s_0,this->SelectorImage,EVar10,
             (FLinearColor *)&local_1e0._s_0);
  return param_5 + 1;
}

// PrivateRegisterAttributes @ 14d87ee30

void __cdecl UE::ColorGrading::SColorGradingWheel::PrivateRegisterAttributes(FInitializer *param_1)

{
  FName *pFVar1;
  FName local_res10;
  FAttributeEntry local_38;
  undefined1 local_28 [8];
  ForAnyElementType local_20;
  ulonglong uStack_18;
  
  local_28[0] = Paint;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,"SelectedColor");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x298,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_14d87eeb7:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_14d87eeb7;
  }
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,"DesiredWheelSize");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x2a8,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 != 0) {
    if (local_20.Data == (FScriptContainerElement *)0x0) goto LAB_14d87ef3b;
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
  }
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
LAB_14d87ef3b:
  local_28[0] = Paint;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,"ExponentDisplacement");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x2ac,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 != 0) {
    if (local_20.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
  }
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
  return;
}

// ProcessMouseAction @ 14d881340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::ColorGrading::SColorGradingWheel::ProcessMouseAction
          (SColorGradingWheel *this,FGeometry *param_1,FPointerEvent *param_2,bool param_3)

{
  FDeprecateSlateVector2D FVar1;
  longlong *plVar2;
  TTransform2<float> *pTVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_78;
  undefined8 uStack_70;
  TTransform2<float> local_68 [3];
  
  if (((this->field79_0x2b0).Union_IsAttributeSet & 1) != 0) {
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
              ((FSlateAttributeImpl *)&this->DesiredWheelSizeAttribute,(SWidget *)this,Member);
  }
  FVar1 = param_1->Size;
  local_78._0_4_ = FVar1._0_4_;
  local_78._4_4_ = FVar1._4_4_;
  fVar10 = (float)local_78;
  fVar6 = local_78._4_4_;
  if (((this->field79_0x2b0).Union_IsAttributeSet & 1) != 0) {
    if (local_78._4_4_ <= (float)local_78) {
      local_78._0_4_ = local_78._4_4_;
    }
    fVar4 = (float)(int)this->DesiredWheelSizeAttribute;
    fVar10 = (float)local_78;
    fVar6 = (float)local_78;
    if (fVar4 <= (float)local_78) {
      fVar10 = fVar4;
      fVar6 = fVar4;
    }
  }
  local_78 = FVar1;
  pTVar3 = Inverse<TTransform2<float>_>(local_68,&param_1->AccumulatedRenderTransform);
  fVar4 = __real_3f800000;
  local_78._4_4_ = SUB84(param_2->ScreenSpacePosition,4);
  local_78._0_4_ = SUB84(param_2->ScreenSpacePosition,0);
  fVar9 = local_78._4_4_ * (pTVar3->M).M[1][0] + (float)local_78 * (pTVar3->M).M[0][0] +
          (pTVar3->Trans).field0_0x0._s_0.X;
  fVar8 = (float)local_78 * (pTVar3->M).M[0][1] + local_78._4_4_ * (pTVar3->M).M[1][1] +
          (pTVar3->Trans).field0_0x0._s_0.Y;
  fVar5 = fVar10 - *(float *)&this->SelectorImage->ImageSize;
  fVar7 = fVar6 - *(float *)&(this->SelectorImage->ImageSize).field_0x4;
  local_78 = (FDeprecateSlateVector2D)CONCAT44(fVar7,fVar5);
  fVar5 = ((fVar9 + fVar9) - fVar10) / fVar5;
  fVar7 = ((fVar8 + fVar8) - fVar6) / fVar7;
  fVar10 = SQRT(fVar7 * fVar7 + fVar5 * fVar5);
  if ((fVar10 <= __real_3f800000) || (param_3)) {
    fVar6 = FGenericPlatformMath::Atan2
                      ((float)((uint)fVar7 ^ __xmm_80000000800000008000000080000000),fVar5);
    fVar5 = fVar6 - __real_40060a92;
    if (fVar6 < __real_40060a92) {
      fVar5 = fVar6 + ___real_40860a92;
    }
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
              ((FSlateAttributeImpl *)&this->SelectedColorAttribute,(SWidget *)this,Member);
    uStack_70 = *(undefined8 *)&(this->SelectedColorAttribute).field_0x8;
    local_78._4_4_ = (float)((ulonglong)*(undefined8 *)&this->SelectedColorAttribute >> 0x20);
    local_78 = (FDeprecateSlateVector2D)CONCAT44(local_78._4_4_,fVar5 * __real_42652ee0);
    fVar6 = fVar10;
    if (fVar4 <= fVar10) {
      fVar6 = fVar4;
    }
    if ((((this->field79_0x2b0).Union_IsAttributeSet & 2) != 0) &&
       ((float)this->ExponentDisplacementAttribute != fVar4)) {
      fVar6 = powf(fVar6,(float)this->ExponentDisplacementAttribute);
    }
    local_78 = (FDeprecateSlateVector2D)CONCAT44(fVar6,(float)local_78);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged,
               (FReadAccessScope *)local_68);
    if ((*(int *)&(this->OnValueChanged).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->OnValueChanged).field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,&local_78);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_68);
  }
  return fVar10 <= fVar4;
}

// SetDesiredWheelSizeAttribute @ 14d8869f0

void __thiscall
UE::ColorGrading::SColorGradingWheel::SetDesiredWheelSizeAttribute
          (SColorGradingWheel *this,TAttribute<int> *param_1)

{
  byte bVar1;
  bool bVar2;
  void *pvVar3;
  bool bVar4;
  
  bVar1 = (this->field79_0x2b0).Union_IsAttributeSet;
  bVar2 = param_1->bIsSet;
  (this->field79_0x2b0).Union_IsAttributeSet = (bVar1 ^ bVar2) & 1 ^ bVar1;
  bVar4 = SlateAttributePrivate::
          TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          ::Assign((TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                    *)&this->DesiredWheelSizeAttribute,(SWidget *)this,param_1,None);
  if (((bool)(bVar1 & 1) != bVar2) && (!bVar4)) {
    SWidget::Invalidate((SWidget *)this,Layout);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar3 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  return;
}

// SetExponentDisplacementAttribute @ 14d886c80

void __thiscall
UE::ColorGrading::SColorGradingWheel::SetExponentDisplacementAttribute
          (SColorGradingWheel *this,TAttribute<float> *param_1)

{
  byte bVar1;
  bool bVar2;
  void *pvVar3;
  bool bVar4;
  float local_res8 [2];
  
  bVar1 = (this->field79_0x2b0).Union_IsAttributeSet;
  bVar2 = param_1->bIsSet;
  local_res8[0] = 1.0;
  (this->field79_0x2b0).Union_IsAttributeSet = (bVar2 * '\x02' ^ bVar1) & 2 ^ bVar1;
  bVar4 = SlateAttributePrivate::
          TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                    *)&this->ExponentDisplacementAttribute,(SWidget *)this,param_1,local_res8,None);
  if (((bool)(bVar1 >> 1 & 1) != bVar2) && (!bVar4)) {
    SWidget::Invalidate((SWidget *)this,Paint);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar3 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  return;
}

// SetSelectedColorAttribute @ 14d887cc0

void __thiscall
UE::ColorGrading::SColorGradingWheel::SetSelectedColorAttribute
          (SColorGradingWheel *this,TAttribute<FLinearColor> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->SelectedColorAttribute,(SWidget *)this,param_1,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  return;
}

