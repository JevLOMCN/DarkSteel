// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b5b9ca0

UClass * __cdecl UDS_TextBlock::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TextBlock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TextBlock",
               &Z_Registration_Info_UClass_UDS_TextBlock.InnerSingleton,
               StaticRegisterNativesUDS_TextBlock,0x390,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TextBlock>,
               InternalVTableHelperCtorCaller<UDS_TextBlock>,local_res8,UTextBlock::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TextBlock.InnerSingleton;
}

// UDS_TextBlock @ 14b5bd2e0

UDS_TextBlock * __thiscall UDS_TextBlock::UDS_TextBlock(UDS_TextBlock *this,FVTableHelper *param_1)

{
  UTextBlock::UTextBlock((UTextBlock *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// ~UDS_TextBlock @ 14b5be030

void __thiscall UDS_TextBlock::~UDS_TextBlock(UDS_TextBlock *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  UTextBlock::~UTextBlock((UTextBlock *)this);
  return;
}

// GetPrivateStaticClass @ 14b5bf960

UClass * __cdecl UDS_TextBlock::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TextBlock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TextBlock",
               &Z_Registration_Info_UClass_UDS_TextBlock.InnerSingleton,
               StaticRegisterNativesUDS_TextBlock,0x390,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TextBlock>,
               InternalVTableHelperCtorCaller<UDS_TextBlock>,local_res8,UTextBlock::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TextBlock.InnerSingleton;
}

// StaticRegisterNativesUDS_TextBlock @ 14b5c00a0

void __cdecl UDS_TextBlock::StaticRegisterNativesUDS_TextBlock(void)

{
  return;
}

// UDS_TextBlock @ 14bc84280

UDS_TextBlock * __thiscall
UDS_TextBlock::UDS_TextBlock(UDS_TextBlock *this,FObjectInitializer *param_1)

{
  UTextBlock::UTextBlock((UTextBlock *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// BeginDestroy @ 14bc87e20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_TextBlock::BeginDestroy(UDS_TextBlock *this)

{
  UWorld *pUVar1;
  UGameViewportSubsystem *this_00;
  
  if ((this->field_0xf9 & 0x20) != 0) {
    pUVar1 = (UWorld *)(**(code **)(*(longlong *)this + 0x180))();
    this_00 = UGameViewportSubsystem::Get(pUVar1);
    if (this_00 != (UGameViewportSubsystem *)0x0) {
      UGameViewportSubsystem::RemoveWidget(this_00,(UWidget *)this);
    }
  }
  UObject::BeginDestroy((UObject *)this);
                    /* WARNING: Could not recover jumptable at 0x0001469a3148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2b0))(this,0);
  return;
}

// ReleaseSlateResources @ 14bcc3c50

void __thiscall UDS_TextBlock::ReleaseSlateResources(UDS_TextBlock *this,bool param_1)

{
  undefined8 uStack_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  uStack_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)&this->field_0x380 != &uStack_18) {
    *(undefined8 *)&this->field_0x380 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->field_0x388,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// SynchronizeProperties @ 14bccbb90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_TextBlock::SynchronizeProperties(UDS_TextBlock *this)

{
  STextBlock *pSVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  TAttribute<FSlateColor> *pTVar5;
  TAttribute<FLinearColor> *pTVar6;
  FMRSWRecursiveAccessDetector *pFVar7;
  undefined1 uStackX_8;
  undefined1 uStackX_9;
  undefined1 auStackX_10 [8];
  FName FStackX_18;
  FName FStackX_20;
  undefined1 auStack_3a0 [8];
  ForAnyElementType FStack_398;
  ulonglong uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined1 uStack_378;
  undefined1 auStack_370 [8];
  ForAnyElementType FStack_368;
  ulonglong uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined4 uStack_348;
  undefined1 uStack_344;
  undefined1 auStack_340 [24];
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined1 uStack_318;
  undefined1 auStack_310 [24];
  TAttribute<float> TStack_2f8;
  TAttribute<ETextTransformPolicy> TStack_2d8;
  ITextData *pIStack_2b8;
  uint uStack_2b0;
  undefined1 uStack_2a8;
  undefined1 auStack_2a0 [24];
  TAttribute<FSlateBrush_const_*> TStack_288;
  FDestructionSentinel FStack_260;
  FDestructionSentinel FStack_248;
  FDestructionSentinel FStack_230;
  FDestructionSentinel FStack_218;
  TVector2<double>_u_0 TStack_200;
  undefined1 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  TAttribute<FText> TStack_1d0;
  FLinearColor_u_0 FStack_1a0;
  undefined4 uStack_190;
  undefined1 uStack_18c;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> TStack_188;
  FReadAccessScope FStack_170;
  FReadAccessScope FStack_158;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  FLinearColor_u_0 FStack_e0;
  undefined1 uStack_d0;
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> TStack_c8;
  TAttribute<FSlateFontInfo> TStack_b0;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  (**(code **)(*(longlong *)this + 0x370))(this,&pIStack_2b8);
  bVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x210);
  if (bVar3) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x210,
               &FStack_170);
    FStackX_18.ComparisonIndex.Value = *(uint *)&this->field_0x220;
    FStackX_18.Number = *(uint *)&this->field_0x224;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_170);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x210,
               (FWriteAccessScope *)&FStack_260);
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x218);
    if (FStack_260.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_260.Accessor,&FStack_260);
    }
    pTVar5 = TAttribute<FSlateColor>::Create<UObject>
                       ((TAttribute<FSlateColor> *)auStack_140,pUVar4,&FStackX_18);
    uStack_358 = *(undefined8 *)&(pTVar5->Value).SpecifiedColor.field0_0x0;
    uStack_350 = *(undefined8 *)((longlong)&(pTVar5->Value).SpecifiedColor.field0_0x0 + 8);
    uStack_348._0_1_ = (pTVar5->Value).ColorUseRule;
    uStack_348._1_1_ = (pTVar5->Value).ColorTableId;
    uStack_348._2_2_ = *(undefined2 *)&(pTVar5->Value).field_0x12;
    uStack_344 = pTVar5->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_340,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar5->Getter);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_128);
    if ((void *)auStack_128._8_8_ != (void *)0x0) {
      FMemory::Free((void *)auStack_128._8_8_);
    }
    pFVar7 = (FMRSWRecursiveAccessDetector *)auStack_128;
  }
  else {
    uStack_348 = *(undefined4 *)&this->field_0x208;
    uStack_358 = *(undefined8 *)&this->field_0x1f8;
    uStack_350 = *(undefined8 *)&this->field_0x200;
    uStack_390 = 0;
    auStack_3a0 = (undefined1  [8])0x0;
    FStack_398.Data = (FScriptContainerElement *)0x0;
    uStack_344 = 1;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_340,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_3a0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_3a0,
               (FWriteAccessScope *)&FStack_248);
    if (((int)uStack_390 != 0) && (FStack_398.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_398.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_398,0,0,0x10);
      uStack_390 = uStack_390 & 0xffffffff00000000;
    }
    if (FStack_248.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_248.Accessor,&FStack_248);
    }
    if (FStack_398.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_398.Data);
    }
    pFVar7 = (FMRSWRecursiveAccessDetector *)auStack_3a0;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(pFVar7);
  bVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x360);
  if (bVar3) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x360,
               &FStack_158);
    FStackX_20.ComparisonIndex.Value = *(uint *)&this->field_0x370;
    FStackX_20.Number = *(uint *)&this->field_0x374;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_158);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x360,
               (FWriteAccessScope *)&FStack_230);
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x368);
    if (FStack_230.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_230.Accessor,&FStack_230);
    }
    pTVar6 = TAttribute<FLinearColor>::Create<UObject>
                       ((TAttribute<FLinearColor> *)auStack_110,pUVar4,&FStackX_20);
    uStack_328 = *(undefined8 *)&(pTVar6->Value).field0_0x0;
    uStack_320 = *(undefined8 *)((longlong)&(pTVar6->Value).field0_0x0 + 8);
    uStack_318 = pTVar6->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_310,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar6->Getter);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_f8);
    if ((void *)auStack_f8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)auStack_f8._8_8_);
    }
    pFVar7 = (FMRSWRecursiveAccessDetector *)auStack_f8;
  }
  else {
    uStack_388 = *(undefined8 *)&this->field_0x350;
    uStack_380 = *(undefined8 *)&this->field_0x358;
    uStack_378 = 1;
    uStack_360 = 0;
    auStack_370 = (undefined1  [8])0x0;
    FStack_368.Data = (FScriptContainerElement *)0x0;
    uStack_318 = 1;
    uStack_328 = uStack_388;
    uStack_320 = uStack_380;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_310,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_370);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_370,
               (FWriteAccessScope *)&FStack_218);
    if (((int)uStack_360 != 0) && (FStack_368.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_368.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_368,0,0,0x10);
      uStack_360 = uStack_360 & 0xffffffff00000000;
    }
    if (FStack_218.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_218.Accessor,&FStack_218);
    }
    if (FStack_368.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_368.Data);
    }
    pFVar7 = (FMRSWRecursiveAccessDetector *)auStack_370;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(pFVar7);
  pSVar1 = *(STextBlock **)&this->field_0x380;
  if (pSVar1 != (STextBlock *)0x0) {
    TStack_1d0.Value.TextData.Reference = pIStack_2b8;
    if (pIStack_2b8 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIStack_2b8 + 8))(pIStack_2b8,auStackX_10);
    }
    TStack_1d0.Value.Flags = uStack_2b0;
    TStack_1d0.bIsSet = (bool)uStack_2a8;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
              (&TStack_1d0.Getter,
               (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_2a0);
    STextBlock::SetText(pSVar1,&TStack_1d0);
    if (*(longlong *)&this->field_0x380 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pSVar1 = *(STextBlock **)&this->field_0x380;
    FSlateFontInfo::FSlateFontInfo(&TStack_b0.Value,(FSlateFontInfo *)&this->field_0x230);
    TStack_b0.bIsSet = true;
    TStack_b0.Getter._16_8_ = 0;
    TStack_b0.Getter._0_8_ = 0;
    TStack_b0.Getter._8_8_ = 0;
    STextBlock::SetFont(pSVar1,&TStack_b0);
    if (*(longlong *)&this->field_0x380 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TStack_288.Value = (FSlateBrush *)&this->field_0x290;
    TStack_288.bIsSet = true;
    TStack_288.Getter._16_8_ = 0;
    TStack_288.Getter._0_8_ = 0;
    TStack_288.Getter._8_8_ = 0;
    STextBlock::SetStrikeBrush(*(STextBlock **)&this->field_0x380,&TStack_288);
    if (*(longlong *)&this->field_0x380 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pSVar1 = *(STextBlock **)&this->field_0x380;
    uStack_190 = uStack_348;
    FStack_1a0._0_8_ = uStack_358;
    FStack_1a0._8_8_ = uStack_350;
    uStack_18c = uStack_344;
    TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
              (&TStack_188,
               (TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_340);
    STextBlock::SetColorAndOpacity(pSVar1,(TAttribute<FSlateColor> *)&FStack_1a0._s_0);
    if (*(longlong *)&this->field_0x380 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TStack_200._s_0.X = (double)*(undefined8 *)&this->field_0x340;
    TStack_200._s_0.Y = (double)*(undefined8 *)&this->field_0x348;
    uStack_1f0 = 1;
    uStack_1d8 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    STextBlock::SetShadowOffset
              (*(STextBlock **)&this->field_0x380,
               (TAttribute<UE::Math::TVector2<double>_> *)&TStack_200._s_0);
    if (*(longlong *)&this->field_0x380 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pSVar1 = *(STextBlock **)&this->field_0x380;
    FStack_e0._0_8_ = uStack_328;
    FStack_e0._8_8_ = uStack_320;
    uStack_d0 = uStack_318;
    TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
              (&TStack_c8,
               (TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_310);
    STextBlock::SetShadowColorAndOpacity(pSVar1,(TAttribute<FLinearColor> *)&FStack_e0._s_0);
    if (*(longlong *)&this->field_0x380 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TStack_2f8.Value = *(float *)&this->field_0x228;
    TStack_2f8.Getter._0_8_ = 0;
    TStack_2f8.Getter._8_8_ = 0;
    TStack_2f8.bIsSet = true;
    TStack_2f8.Getter._16_8_ = 0;
    STextBlock::SetMinDesiredWidth(*(STextBlock **)&this->field_0x380,&TStack_2f8);
    if (*(longlong *)&this->field_0x380 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TStack_2d8.Value = this->field_0x379;
    TStack_2d8.Getter._16_8_ = 0;
    TStack_2d8.bIsSet = true;
    TStack_2d8.Getter._0_8_ = 0;
    TStack_2d8.Getter._8_8_ = 0;
    STextBlock::SetTransformPolicy(*(STextBlock **)&this->field_0x380,&TStack_2d8);
    if (*(longlong *)&this->field_0x380 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uStackX_8 = this->field_0x37a;
    uStackX_9 = 1;
    STextBlock::SetOverflowPolicy(*(STextBlock **)&this->field_0x380,SUB82(&uStackX_8,0));
    if (*(longlong *)&this->field_0x380 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UTextLayoutWidget::SynchronizeTextLayoutProperties<STextBlock>
              ((UTextLayoutWidget *)this,*(STextBlock **)&this->field_0x380);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_310);
  if ((void *)auStack_310._8_8_ != (void *)0x0) {
    FMemory::Free((void *)auStack_310._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_310);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_340);
  if ((void *)auStack_340._8_8_ != (void *)0x0) {
    FMemory::Free((void *)auStack_340._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_340);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_2a0);
  if ((void *)auStack_2a0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)auStack_2a0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_2a0);
  if (pIStack_2b8 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIStack_2b8 + 0x10))();
  }
  return;
}

