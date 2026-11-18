// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 37

// StaticClass @ 14a7856f0

UClass * __cdecl UCommonNumericTextBlock::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonNumericTextBlock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonNumericTextBlock",
               &Z_Registration_Info_UClass_UCommonNumericTextBlock.InnerSingleton,
               StaticRegisterNativesUCommonNumericTextBlock,0x480,0x10,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"CommonUI",
               InternalConstructor<UCommonNumericTextBlock>,
               InternalVTableHelperCtorCaller<UCommonNumericTextBlock>,local_res8,
               UCommonTextBlock::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonNumericTextBlock.InnerSingleton;
}

// UCommonNumericTextBlock @ 14a7ae370

UCommonNumericTextBlock * __thiscall
UCommonNumericTextBlock::UCommonNumericTextBlock
          (UCommonNumericTextBlock *this,FVTableHelper *param_1)

{
  FNumberFormattingOptions *pFVar1;
  
  UCommonTextBlock::UCommonTextBlock((UCommonTextBlock *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&this->OnInterpolationStartedEvent = 0;
  *(undefined8 *)&(this->OnInterpolationStartedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnInterpolationStartedEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnInterpolationUpdatedEvent = 0;
  *(undefined8 *)&(this->OnInterpolationUpdatedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnInterpolationUpdatedEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnOutroEvent = 0;
  *(undefined8 *)&(this->OnOutroEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnOutroEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnInterpolationEndedEvent = 0;
  *(undefined8 *)&(this->OnInterpolationEndedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnInterpolationEndedEvent).field_0x10 = 0;
  (this->FormattingSpecification).RoundingMode = '\x01';
  (this->FormattingSpecification).AlwaysSign = false;
  (this->FormattingSpecification).UseGrouping = true;
  pFVar1 = FNumberFormattingOptions::DefaultNoGrouping();
  (this->FormattingSpecification).MinimumIntegralDigits = pFVar1->MinimumIntegralDigits;
  pFVar1 = FNumberFormattingOptions::DefaultNoGrouping();
  (this->FormattingSpecification).MaximumIntegralDigits = pFVar1->MaximumIntegralDigits;
  (this->FormattingSpecification).MinimumFractionalDigits = 0;
  (this->FormattingSpecification).MaximumFractionalDigits = 0;
  (this->TimerTickHandle).Handle = 0;
  return this;
}

// UCommonNumericTextBlock @ 14a7ae440

UCommonNumericTextBlock * __thiscall
UCommonNumericTextBlock::UCommonNumericTextBlock
          (UCommonNumericTextBlock *this,FObjectInitializer *param_1)

{
  FNumberFormattingOptions *pFVar1;
  
  UCommonTextBlock::UCommonTextBlock((UCommonTextBlock *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&this->OnInterpolationStartedEvent = 0;
  *(undefined8 *)&(this->OnInterpolationStartedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnInterpolationStartedEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnInterpolationUpdatedEvent = 0;
  *(undefined8 *)&(this->OnInterpolationUpdatedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnInterpolationUpdatedEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnOutroEvent = 0;
  *(undefined8 *)&(this->OnOutroEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnOutroEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnInterpolationEndedEvent = 0;
  *(undefined8 *)&(this->OnInterpolationEndedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnInterpolationEndedEvent).field_0x10 = 0;
  this->CurrentNumericValue = 0.0;
  this->NumericType = Number;
  (this->FormattingSpecification).RoundingMode = '\x01';
  (this->FormattingSpecification).AlwaysSign = false;
  (this->FormattingSpecification).UseGrouping = true;
  pFVar1 = FNumberFormattingOptions::DefaultNoGrouping();
  (this->FormattingSpecification).MinimumIntegralDigits = pFVar1->MinimumIntegralDigits;
  pFVar1 = FNumberFormattingOptions::DefaultNoGrouping();
  (this->FormattingSpecification).MaximumIntegralDigits = pFVar1->MaximumIntegralDigits;
  (this->FormattingSpecification).MinimumFractionalDigits = 0;
  (this->FormattingSpecification).MaximumFractionalDigits = 0;
  this->EaseOutInterpolationExponent = 1.5;
  this->InterpolationUpdateInterval = 0.0;
  this->PostInterpolationShrinkDuration = 0.25;
  this->PerformSizeInterpolation = true;
  this->IsPercentage_DEPRECATED = false;
  this->CurrentInterpolationState = None;
  (this->TimerTickHandle).Handle = 0;
  return this;
}

// ~UCommonNumericTextBlock @ 14a7b3150

void __thiscall UCommonNumericTextBlock::~UCommonNumericTextBlock(UCommonNumericTextBlock *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  pvVar1 = *(void **)&(this->OnInterpolationEndedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInterpolationEndedEvent);
  pvVar1 = *(void **)&(this->OnOutroEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnOutroEvent);
  pvVar1 = *(void **)&(this->OnInterpolationUpdatedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInterpolationUpdatedEvent);
  pvVar1 = *(void **)&(this->OnInterpolationStartedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInterpolationStartedEvent);
  this->_padding_ = (longlong)&UCommonTextBlock::_vftable__for__UVisual__;
  this->_padding_ = (longlong)&UCommonTextBlock::_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  UTextBlock::~UTextBlock((UTextBlock *)this);
  return;
}

// CalculateInterpolationDuration @ 14a7c3760

float __thiscall
UCommonNumericTextBlock::CalculateInterpolationDuration
          (UCommonNumericTextBlock *this,float param_1,float param_2,float param_3)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  
  dVar1 = __real_3ff0000000000000;
  fVar3 = param_1 - this->CurrentNumericValue;
  if (fVar3 <= 0.0) {
    if (0.0 <= fVar3) {
      param_2 = 0.0;
    }
    else {
      param_2 = (float)((uint)param_2 ^ __xmm_80000000800000008000000080000000);
    }
  }
  if ((float)((uint)param_2 & __xmm_7fffffff7fffffff7fffffff7fffffff) <
      (float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    dVar2 = pow((double)(__real_3f800000 - param_2 / fVar3),
                __real_3ff0000000000000 / (double)this->EaseOutInterpolationExponent);
    fVar3 = (float)(dVar1 / (dVar1 - dVar2));
    if (param_3 <= fVar3) {
      fVar3 = param_3;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    return fVar3;
  }
  fVar4 = fVar3 / param_2;
  if (param_3 <= fVar3 / param_2) {
    fVar4 = param_3;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  return fVar4;
}

// CancelInterpolation @ 14a7c3e30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCommonNumericTextBlock::CancelInterpolation(UCommonNumericTextBlock *this)

{
  FTimerHandle *pFVar1;
  UWorld *this_00;
  FTimerManager *this_01;
  FTimerData *pFVar2;
  UCommonNumericTextBlock *local_18;
  undefined1 local_10;
  
  if (this->CurrentInterpolationState == NumericInterpolation) {
    this->CurrentInterpolationState = None;
    local_10 = 0;
    local_18 = this;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->OnInterpolationEndedEvent,&local_18);
    if (this->PerformSizeInterpolation == false) goto LAB_14a7c3e97;
    EnterSizeInterpolation(this,0.0);
  }
  else if (this->CurrentInterpolationState != SizeInterpolation) goto LAB_14a7c3e97;
  UTextBlock::SetMinDesiredWidth((UTextBlock *)this,0.0);
  this->CurrentInterpolationState = None;
LAB_14a7c3e97:
  if (((this->CurrentInterpolationState == None) &&
      (pFVar1 = &this->TimerTickHandle, pFVar1->Handle != 0)) &&
     (this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this), this_00 != (UWorld *)0x0)) {
    this_01 = UWorld::GetTimerManager(this_00);
    pFVar2 = FTimerManager::FindTimer(this_01,pFVar1);
    if (pFVar2 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_01,(FTimerHandle)pFVar1->Handle);
    }
    pFVar1->Handle = 0;
  }
  return;
}

// EnterNumericInterpolation @ 14a7d4bc0

void __thiscall
UCommonNumericTextBlock::EnterNumericInterpolation
          (UCommonNumericTextBlock *this,float param_1,float param_2,float param_3,float param_4)

{
  UCommonNumericTextBlock *local_res8 [4];
  
  local_res8[0] = this;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->OnInterpolationStartedEvent,local_res8);
  (this->NumericInterpolationState).OutroOffset = param_4;
  (this->NumericInterpolationState).SourceValue = param_1;
  (this->NumericInterpolationState).DestinationValue = param_2;
  (this->NumericInterpolationState).Duration = param_3;
  this->CurrentInterpolationState = NumericInterpolation;
  (this->InterpolationState).ElapsedStateDuration = 0.0;
  (this->NumericInterpolationState).HasTriggeredOutro = false;
  UpdateNumericInterpolation(this);
  return;
}

// EnterSizeInterpolation @ 14a7d4c70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonNumericTextBlock::EnterSizeInterpolation(UCommonNumericTextBlock *this,float param_1)

{
  double dVar1;
  TVector2<double> *pTVar2;
  TVector2<double> local_28 [2];
  
  this->CurrentInterpolationState = SizeInterpolation;
  (this->InterpolationState).ElapsedStateDuration = 0.0;
  pTVar2 = UWidget::GetDesiredSize((UWidget *)this,local_28);
  dVar1 = (pTVar2->field0_0x0)._s_0.X;
  (this->SizeInterpolationState).Duration = param_1;
  (this->SizeInterpolationState).InitialWidth = (int)dVar1;
  UpdateSizeInterpolation(this);
  return;
}

// ExitNumericInterpolation @ 14a7db1c0

void __thiscall
UCommonNumericTextBlock::ExitNumericInterpolation(UCommonNumericTextBlock *this,bool param_1)

{
  UCommonNumericTextBlock *local_18;
  undefined1 local_10;
  
  this->CurrentInterpolationState = None;
  local_18 = this;
  local_10 = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->OnInterpolationEndedEvent,&local_18);
  return;
}

// ExitSizeInterpolation @ 14a7db200

void __thiscall UCommonNumericTextBlock::ExitSizeInterpolation(UCommonNumericTextBlock *this)

{
  UTextBlock::SetMinDesiredWidth((UTextBlock *)this,0.0);
  this->CurrentInterpolationState = None;
  return;
}

// FOnInterpolationEnded_DelegateWrapper @ 14a7db4d0

void __cdecl
UCommonNumericTextBlock::FOnInterpolationEnded_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          UCommonNumericTextBlock *param_2,bool param_3)

{
  UCommonNumericTextBlock *local_18;
  undefined1 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  return;
}

// FOnInterpolationStarted_DelegateWrapper @ 14a7db500

void __cdecl
UCommonNumericTextBlock::FOnInterpolationStarted_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          UCommonNumericTextBlock *param_2)

{
  UCommonNumericTextBlock *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FOnInterpolationUpdated_DelegateWrapper @ 14a7db520

void __cdecl
UCommonNumericTextBlock::FOnInterpolationUpdated_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          UCommonNumericTextBlock *param_2,float param_3,float param_4)

{
  UCommonNumericTextBlock *local_18;
  float local_10;
  float local_c;
  
  local_18 = param_2;
  local_10 = param_3;
  local_c = param_4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  return;
}

// FOnOutro_DelegateWrapper @ 14a7db5c0

void __cdecl
UCommonNumericTextBlock::FOnOutro_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          UCommonNumericTextBlock *param_2)

{
  UCommonNumericTextBlock *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FormatText @ 14a7ddf80

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UCommonNumericTextBlock::FormatText
          (UCommonNumericTextBlock *this,FText *__return_storage_ptr__,float param_1,
          FNumberFormattingOptions *param_2)

{
  ECommonNumericType EVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  FText *pFVar5;
  wchar_t *pwVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FSharedReferencer<1> FVar10;
  float in_XMM0_Da;
  undefined1 auVar11 [16];
  undefined1 local_res8 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_108;
  float local_f8;
  EUnit local_f4;
  FTimespan local_f0;
  FTextFormat local_e8;
  TSharedPtr<FCulture,1> local_d8;
  TSharedPtr<FCulture,1> local_c8;
  TSharedPtr<FCulture,1> local_b8;
  TSharedPtr<FCulture,1> local_a8;
  FFormatArgumentValue local_98;
  undefined4 local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  
  EVar1 = this->NumericType;
  if (EVar1 == Number) {
    local_a8.Object = (FCulture *)0x0;
    local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FText::AsNumber(__return_storage_ptr__,param_1,param_2,&local_a8);
    FVar10.ReferenceController = local_a8.SharedReferenceCount.ReferenceController;
  }
  else if (EVar1 == Percentage) {
    local_b8.Object = (FCulture *)0x0;
    local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FText::AsPercent(__return_storage_ptr__,param_1,param_2,&local_b8);
    FVar10.ReferenceController = local_b8.SharedReferenceCount.ReferenceController;
  }
  else if (EVar1 == Seconds) {
    local_c8.Object = (FCulture *)0x0;
    local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    auVar11._0_8_ = (double)(param_1 * __real_4b189680 + __real_3f000000);
    auVar11._8_8_ = 0;
    auVar11 = roundpd(auVar11,auVar11,1);
    local_f0.Ticks = (long64)auVar11._0_8_;
    FText::AsTimespan(__return_storage_ptr__,&local_f0,&local_c8);
    FVar10.ReferenceController = local_c8.SharedReferenceCount.ReferenceController;
  }
  else {
    if (EVar1 != Distance) {
      pFVar5 = FText::GetEmpty();
      (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
      pIVar2 = (pFVar5->TextData).Reference;
      (__return_storage_ptr__->TextData).Reference = pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
      }
      __return_storage_ptr__->Flags = pFVar5->Flags;
      return __return_storage_ptr__;
    }
    FUnitConversion::QuantizeUnitsToBestFit<float>(in_XMM0_Da,Millimeters);
    pwVar6 = FUnitConversion::GetUnitDisplayString(local_f4);
    pFVar5 = FText::FromString(&local_48,pwVar6);
    local_d8.Object = (FCulture *)0x0;
    local_d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar7 = FText::AsNumber(&local_38,local_f8,param_2,&local_d8);
    pFVar8 = FText::FromString(&local_58,L"{0} {1}");
    pFVar9 = FTextFormat::FTextFormat(&local_28,pFVar8,Default);
    local_98.Type = Text;
    FText::FText((FText *)&local_98.TextValue,pFVar7);
    if ((local_98.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar3)();
      return pFVar5;
    }
    local_78 = 4;
    FText::FText(&local_68,pFVar5);
    if ((local_68.TextData.Reference == (ITextData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar3)();
      return pFVar5;
    }
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_108.AllocatorInstance,2,&local_108.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_108.AllocatorInstance.Data,&local_98,2);
    local_e8.TextFormatData.Object = (pFVar9->TextFormatData).Object;
    local_e8.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar9->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_e8.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_e8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_e8.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(__return_storage_ptr__,&local_e8,&local_108);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
    if ((FFormatArgumentValue *)local_108.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_108.AllocatorInstance.Data);
    }
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    if (local_98.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_98.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar9->TextFormatData).SharedReferenceCount.ReferenceController);
    pIVar2 = (pFVar7->TextData).Reference;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    pIVar2 = (pFVar5->TextData).Reference;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    FVar10.ReferenceController = local_d8.SharedReferenceCount.ReferenceController;
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      FVar10.ReferenceController = local_d8.SharedReferenceCount.ReferenceController;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a7e5e00

UClass * __cdecl UCommonNumericTextBlock::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonNumericTextBlock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonNumericTextBlock",
               &Z_Registration_Info_UClass_UCommonNumericTextBlock.InnerSingleton,
               StaticRegisterNativesUCommonNumericTextBlock,0x480,0x10,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"CommonUI",
               InternalConstructor<UCommonNumericTextBlock>,
               InternalVTableHelperCtorCaller<UCommonNumericTextBlock>,local_res8,
               UCommonTextBlock::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonNumericTextBlock.InnerSingleton;
}

// GetTargetValue @ 14a7e8e90

float __thiscall UCommonNumericTextBlock::GetTargetValue(UCommonNumericTextBlock *this)

{
  if (this->CurrentInterpolationState == NumericInterpolation) {
    return (this->NumericInterpolationState).DestinationValue;
  }
  return this->CurrentNumericValue;
}

// InterpolateToValue @ 14a7f44f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCommonNumericTextBlock::InterpolateToValue
          (UCommonNumericTextBlock *this,float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  ulong64 uVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  UWorld *this_00;
  FTimerManager *this_01;
  FTimerHandle FVar7;
  float fVar8;
  float fVar9;
  UCommonNumericTextBlock *local_res8;
  code *local_88;
  longlong lStack_80;
  
  uVar2 = (this->TimerTickHandle).Handle;
  CancelInterpolation(this);
  if (param_2 <= 0.0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5191245636879515465>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonNumericTextBlock.cpp"
                       ,0xb7,"InMaximumInterpolationDuration > 0.0f");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_2 < param_4) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5191245636879515464>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonNumericTextBlock.cpp"
                       ,0xb8,"InOutroOffset <= InMaximumInterpolationDuration");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_3 < 0.0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5191245636879515463>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonNumericTextBlock.cpp"
                       ,0xb9,"InMinimumChangeRate >= 0.0f");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  dVar5 = __real_3ff0000000000000;
  fVar1 = this->CurrentNumericValue;
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  fVar9 = param_2;
  if (param_4 <= param_2) {
    fVar9 = param_4;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  if (param_1 != fVar1) {
    fVar8 = param_1 - fVar1;
    if (fVar8 <= 0.0) {
      if (0.0 <= fVar8) {
        param_3 = 0.0;
      }
      else {
        param_3 = (float)((uint)param_3 ^ __xmm_80000000800000008000000080000000);
      }
    }
    if ((float)((uint)fVar8 & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        (float)((uint)param_3 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar8 = fVar8 / param_3;
    }
    else {
      dVar4 = pow((double)(__real_3f800000 - param_3 / fVar8),
                  __real_3ff0000000000000 / (double)this->EaseOutInterpolationExponent);
      fVar8 = (float)(dVar5 / (dVar5 - dVar4));
    }
    if (param_2 <= fVar8) {
      fVar8 = param_2;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    local_res8 = this;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->OnInterpolationStartedEvent,&stack0x00000008);
    if (fVar8 <= fVar9) {
      fVar9 = fVar8;
    }
    (this->NumericInterpolationState).SourceValue = fVar1;
    (this->NumericInterpolationState).DestinationValue = param_1;
    (this->NumericInterpolationState).Duration = fVar8;
    this->CurrentInterpolationState = NumericInterpolation;
    (this->InterpolationState).ElapsedStateDuration = 0.0;
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    (this->NumericInterpolationState).HasTriggeredOutro = false;
    (this->NumericInterpolationState).OutroOffset = fVar9;
    UpdateNumericInterpolation(this);
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    if ((this_00 != (UWorld *)0x0) && (this->CurrentInterpolationState != None)) {
      if (uVar2 == 0) {
        this->LastTimerTickTime = (float)this_00->TimeSeconds;
      }
      this_01 = UWorld::GetTimerManager(this_00);
      lStack_80 = (ulonglong)lStack_80._4_4_ << 0x20;
      local_88 = OnTimerTick;
      FVar7 = FTimerManager::SetTimerForNextTick<UCommonNumericTextBlock>
                        (this_01,(UCommonNumericTextBlock *)&stack0xffffffffffffff68,
                         (pmf_ee7e24ff *)this);
                    /* WARNING: Load size is inaccurate */
      (this->TimerTickHandle).Handle = *FVar7.Handle;
    }
  }
  return;
}

// IsInterpolatingNumericValue @ 14a7f5f00

bool __thiscall UCommonNumericTextBlock::IsInterpolatingNumericValue(UCommonNumericTextBlock *this)

{
  return this->CurrentInterpolationState == NumericInterpolation;
}

// MakeNumberFormattingOptions @ 14a7f85b0

FNumberFormattingOptions * __thiscall
UCommonNumericTextBlock::MakeNumberFormattingOptions
          (UCommonNumericTextBlock *this,FNumberFormattingOptions *__return_storage_ptr__)

{
  FNumberFormattingOptions::FNumberFormattingOptions(__return_storage_ptr__);
  __return_storage_ptr__->RoundingMode = (uint)(this->FormattingSpecification).RoundingMode.Value;
  __return_storage_ptr__->AlwaysSign = (this->FormattingSpecification).AlwaysSign;
  __return_storage_ptr__->UseGrouping = (this->FormattingSpecification).UseGrouping;
  __return_storage_ptr__->MinimumIntegralDigits =
       (this->FormattingSpecification).MinimumIntegralDigits;
  __return_storage_ptr__->MaximumIntegralDigits =
       (this->FormattingSpecification).MaximumIntegralDigits;
  __return_storage_ptr__->MinimumFractionalDigits =
       (this->FormattingSpecification).MinimumFractionalDigits;
  __return_storage_ptr__->MaximumFractionalDigits =
       (this->FormattingSpecification).MaximumFractionalDigits;
  return __return_storage_ptr__;
}

// OnTimerTick @ 14a7ff760

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCommonNumericTextBlock::OnTimerTick(UCommonNumericTextBlock *this)

{
  double dVar1;
  EInterpolationState EVar2;
  EInterpolationState EVar3;
  SWidget *pSVar4;
  UWorld *this_00;
  TSharedPtr<SWidget,1> *pTVar5;
  FTimerManager *pFVar6;
  FTimerData *pFVar7;
  FTimerHandle FVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  TSharedPtr<SWidget,1> local_48 [4];
  
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if (this_00 == (UWorld *)0x0) {
    return;
  }
  fVar11 = this->InterpolationUpdateInterval;
  if (this->InterpolationUpdateInterval <= __real_3d4ccccd) {
    fVar11 = __real_3d4ccccd;
  }
  dVar1 = this_00->TimeSeconds;
  fVar10 = (float)dVar1 - this->LastTimerTickTime;
  if (fVar10 <= fVar11) goto LAB_14a7ff924;
  if (this->CurrentInterpolationState != None) {
    pTVar5 = UWidget::GetCachedWidget((UWidget *)this,local_48);
    pSVar4 = pTVar5->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48[0].SharedReferenceCount.ReferenceController);
    if (pSVar4 != (SWidget *)0x0) {
      EVar2 = this->CurrentInterpolationState;
      if (EVar2 == NumericInterpolation) {
        fVar11 = (this->NumericInterpolationState).Duration;
        fVar10 = fVar10 + (this->InterpolationState).ElapsedStateDuration;
        fVar9 = fVar11;
        if (fVar10 <= fVar11) {
          fVar9 = fVar10;
        }
        fVar10 = fVar10 - fVar11;
        (this->InterpolationState).ElapsedStateDuration = fVar9;
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
LAB_14a7ff89c:
        UpdateNumericInterpolation(this);
      }
      else if (EVar2 == SizeInterpolation) {
        fVar11 = (this->SizeInterpolationState).Duration;
        fVar10 = fVar10 + (this->InterpolationState).ElapsedStateDuration;
        fVar9 = fVar11;
        if (fVar10 <= fVar11) {
          fVar9 = fVar10;
        }
        fVar10 = fVar10 - fVar11;
        (this->InterpolationState).ElapsedStateDuration = fVar9;
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
LAB_14a7ff865:
        UpdateSizeInterpolation(this);
      }
      else {
        fVar10 = fVar10 + (this->InterpolationState).ElapsedStateDuration;
        fVar11 = fVar10;
        if (0.0 <= fVar10) {
          fVar11 = 0.0;
        }
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        (this->InterpolationState).ElapsedStateDuration = fVar11;
        if (EVar2 == NumericInterpolation) goto LAB_14a7ff89c;
        if (EVar2 == SizeInterpolation) goto LAB_14a7ff865;
      }
      EVar3 = this->CurrentInterpolationState;
      if (EVar3 != EVar2) {
        (this->InterpolationState).ElapsedStateDuration = fVar10;
        if (EVar3 == NumericInterpolation) {
          UpdateNumericInterpolation(this);
        }
        else if (EVar3 == SizeInterpolation) {
          UpdateSizeInterpolation(this);
        }
      }
    }
  }
  this->LastTimerTickTime = (float)dVar1;
  if (this->CurrentInterpolationState == None) {
    pFVar6 = UWorld::GetTimerManager(this_00);
    pFVar7 = FTimerManager::FindTimer(pFVar6,&this->TimerTickHandle);
    if (pFVar7 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(pFVar6,(FTimerHandle)(this->TimerTickHandle).Handle);
    }
    (this->TimerTickHandle).Handle = 0;
    return;
  }
LAB_14a7ff924:
  pFVar6 = UWorld::GetTimerManager(this_00);
  local_48[0].SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)
       ((ulonglong)local_48[0].SharedReferenceCount.ReferenceController._4_4_ << 0x20);
  local_48[0].Object = (SWidget *)OnTimerTick;
  FVar8 = FTimerManager::SetTimerForNextTick<UCommonNumericTextBlock>
                    (pFVar6,(UCommonNumericTextBlock *)&stack0x00000008,(pmf_ee7e24ff *)this);
                    /* WARNING: Load size is inaccurate */
  (this->TimerTickHandle).Handle = *FVar8.Handle;
  return;
}

// PostLoad @ 14a802930

void __thiscall UCommonNumericTextBlock::PostLoad(UCommonNumericTextBlock *this)

{
  int iVar1;
  FGuid local_18;
  
  UObject::PostLoad((UObject *)this);
  UCommonTextBlock::UpdateFromStyle((UCommonTextBlock *)this);
  local_18 = FCommonCustomVersion::GUID;
  iVar1 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  if (iVar1 < 1) {
    this->NumericType = this->IsPercentage_DEPRECATED != false;
  }
  return;
}

// Serialize @ 14a815940

void __thiscall UCommonNumericTextBlock::Serialize(UCommonNumericTextBlock *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
  if (((param_1->field_0x28 & 1) != 0) && (*(char *)((longlong)&this->_padding_ + 5) != '\0')) {
    UTextBlock::SetTextTransformPolicy((UTextBlock *)this,ToUpper);
    *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a81598c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FCommonCustomVersion::GUID);
  return;
}

// Serialize @ 14a8159a0

void __thiscall
UCommonNumericTextBlock::Serialize(UCommonNumericTextBlock *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  if (((pFVar1->field_0x28 & 1) != 0) && (*(char *)((longlong)&this->_padding_ + 5) != '\0')) {
    UTextBlock::SetTextTransformPolicy((UTextBlock *)this,ToUpper);
    *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
  }
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FCommonCustomVersion::GUID);
  return;
}

// SetCurrentValue @ 14a817d70

void __thiscall
UCommonNumericTextBlock::SetCurrentValue(UCommonNumericTextBlock *this,float param_1)

{
  CancelInterpolation(this);
  this->CurrentNumericValue = param_1;
  UpdateUnderlyingText(this);
  return;
}

// SetNumericType @ 14a81a6c0

void __thiscall
UCommonNumericTextBlock::SetNumericType(UCommonNumericTextBlock *this,ECommonNumericType param_1)

{
  this->NumericType = param_1;
  UpdateUnderlyingText(this);
  return;
}

// StaticRegisterNativesUCommonNumericTextBlock @ 14a81e700

void __cdecl UCommonNumericTextBlock::StaticRegisterNativesUCommonNumericTextBlock(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UCommonNumericTextBlock_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 14a820800

void __thiscall UCommonNumericTextBlock::SynchronizeProperties(UCommonNumericTextBlock *this)

{
  UpdateUnderlyingText(this);
  UCommonTextBlock::SynchronizeProperties((UCommonTextBlock *)this);
  return;
}

// Tick @ 14a8222b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonNumericTextBlock::Tick(UCommonNumericTextBlock *this,float param_1)

{
  EInterpolationState EVar1;
  EInterpolationState EVar2;
  SWidget *pSVar3;
  TSharedPtr<SWidget,1> *pTVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  TSharedPtr<SWidget,1> local_38 [3];
  
  if (this->CurrentInterpolationState == None) {
    return;
  }
  pTVar4 = UWidget::GetCachedWidget((UWidget *)this,local_38);
  pSVar3 = pTVar4->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38[0].SharedReferenceCount.ReferenceController);
  if (pSVar3 == (SWidget *)0x0) {
    return;
  }
  EVar1 = this->CurrentInterpolationState;
  if (EVar1 == NumericInterpolation) {
    fVar5 = (this->NumericInterpolationState).Duration;
    fVar6 = param_1 + (this->InterpolationState).ElapsedStateDuration;
    fVar7 = fVar5;
    if (fVar6 <= fVar5) {
      fVar7 = fVar6;
    }
    fVar6 = fVar6 - fVar5;
    (this->InterpolationState).ElapsedStateDuration = fVar7;
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
LAB_14a82239a:
    UpdateNumericInterpolation(this);
  }
  else {
    if (EVar1 == SizeInterpolation) {
      fVar5 = (this->SizeInterpolationState).Duration;
      fVar6 = param_1 + (this->InterpolationState).ElapsedStateDuration;
      fVar7 = fVar5;
      if (fVar6 <= fVar5) {
        fVar7 = fVar6;
      }
      fVar6 = fVar6 - fVar5;
      (this->InterpolationState).ElapsedStateDuration = fVar7;
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
    }
    else {
      fVar7 = param_1 + (this->InterpolationState).ElapsedStateDuration;
      fVar5 = 0.0;
      fVar6 = fVar7;
      if (fVar7 <= 0.0) {
        fVar6 = 0.0;
        fVar5 = fVar7;
      }
      (this->InterpolationState).ElapsedStateDuration = fVar5;
      if (EVar1 == NumericInterpolation) goto LAB_14a82239a;
      if (EVar1 != SizeInterpolation) goto LAB_14a8223a2;
    }
    UpdateSizeInterpolation(this);
  }
LAB_14a8223a2:
  EVar2 = this->CurrentInterpolationState;
  if (EVar2 != EVar1) {
    (this->InterpolationState).ElapsedStateDuration = fVar6;
    if (EVar2 == NumericInterpolation) {
      UpdateNumericInterpolation(this);
    }
    else if (EVar2 == SizeInterpolation) {
      UpdateSizeInterpolation(this);
    }
  }
  return;
}

// UpdateNumericInterpolation @ 14a827bb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonNumericTextBlock::UpdateNumericInterpolation(UCommonNumericTextBlock *this)

{
  float fVar1;
  TVector2<double> *pTVar2;
  float fVar3;
  float fVar4;
  UCommonNumericTextBlock *local_res8 [4];
  TVector2<double>_u_0 local_38 [3];
  
  if (this->PerformSizeInterpolation != false) {
    pTVar2 = UWidget::GetDesiredSize((UWidget *)this,(TVector2<double> *)&local_38[0]._s_0);
    UTextBlock::SetMinDesiredWidth((UTextBlock *)this,(float)(pTVar2->field0_0x0)._s_0.X);
  }
  fVar1 = __real_3f800000;
  fVar4 = (this->InterpolationState).ElapsedStateDuration /
          (this->NumericInterpolationState).Duration;
  fVar3 = this->CurrentNumericValue;
  if (__real_3f800000 <= fVar4) {
    fVar4 = __real_3f800000;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar4 = powf(__real_3f800000 - fVar4,this->EaseOutInterpolationExponent);
  this->CurrentNumericValue =
       (fVar1 - fVar4) *
       ((this->NumericInterpolationState).DestinationValue -
       (this->NumericInterpolationState).SourceValue) +
       (this->NumericInterpolationState).SourceValue;
  UpdateUnderlyingText(this);
  local_38[0]._12_4_ = this->CurrentNumericValue;
  local_38[0]._0_8_ = this;
  local_38[0]._8_4_ = fVar3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->OnInterpolationUpdatedEvent,local_38);
  fVar3 = (this->NumericInterpolationState).Duration - (this->NumericInterpolationState).OutroOffset
  ;
  if (((this->NumericInterpolationState).HasTriggeredOutro == false) &&
     (fVar3 < (this->InterpolationState).ElapsedStateDuration ||
      fVar3 == (this->InterpolationState).ElapsedStateDuration)) {
    (this->NumericInterpolationState).HasTriggeredOutro = true;
    local_res8[0] = this;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnOutroEvent,
               local_res8);
  }
  fVar3 = (this->NumericInterpolationState).Duration;
  if (fVar3 < (this->InterpolationState).ElapsedStateDuration ||
      fVar3 == (this->InterpolationState).ElapsedStateDuration) {
    this->CurrentInterpolationState = None;
    local_38[0]._8_1_ = 1;
    local_38[0]._0_8_ = this;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->OnInterpolationEndedEvent,local_38);
    if (this->PerformSizeInterpolation != false) {
      EnterSizeInterpolation(this,this->PostInterpolationShrinkDuration);
    }
  }
  return;
}

// UpdateSizeInterpolation @ 14a827d30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonNumericTextBlock::UpdateSizeInterpolation(UCommonNumericTextBlock *this)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  code *pcVar4;
  float fVar5;
  TSharedRef<SWidget,1> *pTVar6;
  FSlateApplication *pFVar7;
  double *pdVar8;
  float fVar9;
  TSharedRef<SWidget,1> local_38 [3];
  
  UTextBlock::SetMinDesiredWidth((UTextBlock *)this,0.0);
  pTVar6 = UWidget::TakeWidget((UWidget *)this,local_38);
  pTVar2 = (pTVar6->SharedReferenceCount).ReferenceController;
  pSVar3 = pTVar6->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38[0].SharedReferenceCount.ReferenceController);
  pcVar4 = *(code **)(pSVar3->_padding_ + 0x170);
  pFVar7 = FSlateApplication::Get();
  (**(code **)(*(longlong *)pFVar7 + 0x58))(pFVar7);
  pdVar8 = (double *)(*pcVar4)(pSVar3,local_38);
  fVar5 = __real_3f800000;
  fVar9 = (this->InterpolationState).ElapsedStateDuration / (this->SizeInterpolationState).Duration;
  iVar1 = (this->SizeInterpolationState).InitialWidth;
  if (__real_3f800000 <= fVar9) {
    fVar9 = __real_3f800000;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  fVar9 = powf(__real_3f800000 - fVar9,this->EaseOutInterpolationExponent);
  UTextBlock::SetMinDesiredWidth
            ((UTextBlock *)this,
             (float)(int)((fVar5 - fVar9) * (float)((int)*pdVar8 - iVar1) + (float)iVar1));
  fVar9 = (this->SizeInterpolationState).Duration;
  if (fVar9 < (this->InterpolationState).ElapsedStateDuration ||
      fVar9 == (this->InterpolationState).ElapsedStateDuration) {
    UTextBlock::SetMinDesiredWidth((UTextBlock *)this,0.0);
    this->CurrentInterpolationState = None;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// UpdateUnderlyingText @ 14a828b00

void __thiscall UCommonNumericTextBlock::UpdateUnderlyingText(UCommonNumericTextBlock *this)

{
  code *pcVar1;
  undefined1 local_res8 [8];
  longlong *local_48;
  undefined4 local_40;
  longlong *local_38;
  undefined4 local_30;
  FNumberFormattingOptions local_28;
  
  FNumberFormattingOptions::FNumberFormattingOptions(&local_28);
  local_28.RoundingMode = (ERoundingMode)(this->FormattingSpecification).RoundingMode.Value;
  local_28.AlwaysSign = (this->FormattingSpecification).AlwaysSign;
  local_28.UseGrouping = (this->FormattingSpecification).UseGrouping;
  local_28.MinimumIntegralDigits = (this->FormattingSpecification).MinimumIntegralDigits;
  local_28.MaximumIntegralDigits = (this->FormattingSpecification).MaximumIntegralDigits;
  local_28.MinimumFractionalDigits = (this->FormattingSpecification).MinimumFractionalDigits;
  local_28.MaximumFractionalDigits = (this->FormattingSpecification).MaximumFractionalDigits;
  (**(code **)(this->_padding_ + 0x378))(this,&local_48,this->CurrentNumericValue,&local_28);
  local_38 = local_48;
  pcVar1 = *(code **)(this->_padding_ + 0x358);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 8))(local_48,local_res8);
  }
  local_30 = local_40;
  (*pcVar1)(this,&local_38);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  return;
}

// execGetTargetValue @ 14a82f650

void __cdecl
UCommonNumericTextBlock::execGetTargetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = 0x464;
  if (*(int *)&param_1[0x1b].field_0x14 != 1) {
    lVar1 = 0x420;
  }
  *(undefined4 *)param_3 = *(undefined4 *)(&param_1->field_0x0 + lVar1);
  return;
}

// execInterpolateToValue @ 14a8301f0

void __cdecl
UCommonNumericTextBlock::execInterpolateToValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [4];
  float local_res20 [2];
  float local_18;
  float local_14 [3];
  
  local_14[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_14,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_14);
  }
  local_18 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  InterpolateToValue((UCommonNumericTextBlock *)param_1,local_14[0],local_18,local_res20[0],
                     local_res10[0]);
  return;
}

// execIsInterpolatingNumericValue @ 14a8304e0

void __cdecl
UCommonNumericTextBlock::execIsInterpolatingNumericValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = *(int *)&param_1[0x1b].field_0x14 == 1;
  return;
}

// execSetCurrentValue @ 14a832be0

void __cdecl
UCommonNumericTextBlock::execSetCurrentValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  CancelInterpolation((UCommonNumericTextBlock *)param_1);
  *(undefined4 *)&param_1[0x1a].field_0x10 = uVar2;
  UpdateUnderlyingText((UCommonNumericTextBlock *)param_1);
  return;
}

// execSetNumericType @ 14a834e50

void __cdecl
UCommonNumericTextBlock::execSetNumericType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x1a].field_0x14 = local_res8[0];
  UpdateUnderlyingText((UCommonNumericTextBlock *)param_1);
  return;
}

