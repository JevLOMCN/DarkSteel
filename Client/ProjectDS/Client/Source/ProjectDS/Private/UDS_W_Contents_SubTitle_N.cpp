// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// SetDSText_WrapperImpl @ 14b77b830

void __cdecl UDS_W_Contents_SubTitle_N::SetDSText_WrapperImpl(void *param_1,void *param_2)

{
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x878),param_2);
  if (*(UDS_CommonRichTextBlock **)((longlong)param_1 + 0x8d8) != (UDS_CommonRichTextBlock *)0x0) {
    UDS_CommonRichTextBlock::SetDSText
              (*(UDS_CommonRichTextBlock **)((longlong)param_1 + 0x8d8),
               (FDS_Text *)((longlong)param_1 + 0x878));
  }
  return;
}

// StaticClass @ 14b77b840

UClass * __cdecl UDS_W_Contents_SubTitle_N::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_Contents_SubTitle_N.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_Contents_SubTitle_N",
               &Z_Registration_Info_UClass_UDS_W_Contents_SubTitle_N.InnerSingleton,
               StaticRegisterNativesUDS_W_Contents_SubTitle_N,0x8e0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_W_Contents_SubTitle_N>,
               InternalVTableHelperCtorCaller<UDS_W_Contents_SubTitle_N>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_Contents_SubTitle_N.InnerSingleton;
}

// UDS_W_Contents_SubTitle_N @ 14b7817e0

UDS_W_Contents_SubTitle_N * __thiscall
UDS_W_Contents_SubTitle_N::UDS_W_Contents_SubTitle_N
          (UDS_W_Contents_SubTitle_N *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->DSText).StringTableID = 0;
  (this->DSText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DSText).StringEnumTableNameID.Number = 0;
  (this->DSText).DateTime.Ticks = 0;
  (this->DSText).TimeSpan.Ticks = 0;
  (this->DSText).TimeExpressionType = None;
  (this->DSText).IsExpression = false;
  (this->DSText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSText).UniqueString.Data.ArrayNum = 0;
  (this->DSText).UniqueString.Data.ArrayMax = 0;
  (this->DSText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSText).FormatArgs.ArrayNum = 0;
  (this->DSText).FormatArgs.ArrayMax = 0;
  (this->Text).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text).Data.ArrayNum = 0;
  (this->Text).Data.ArrayMax = 0;
  (this->TitleRichText).field0_0x0.DebugPtr = (UDS_CommonRichTextBlock *)0x0;
  (this->DSText).StringTableType = None;
  return this;
}

// UDS_W_Contents_SubTitle_N @ 14b781890

UDS_W_Contents_SubTitle_N * __thiscall
UDS_W_Contents_SubTitle_N::UDS_W_Contents_SubTitle_N
          (UDS_W_Contents_SubTitle_N *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->DSText).StringTableID = 0;
  (this->DSText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DSText).StringEnumTableNameID.Number = 0;
  (this->DSText).DateTime.Ticks = 0;
  (this->DSText).TimeSpan.Ticks = 0;
  (this->DSText).TimeExpressionType = None;
  (this->DSText).IsExpression = false;
  (this->DSText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSText).UniqueString.Data.ArrayNum = 0;
  (this->DSText).UniqueString.Data.ArrayMax = 0;
  (this->DSText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSText).FormatArgs.ArrayNum = 0;
  (this->DSText).FormatArgs.ArrayMax = 0;
  (this->Text).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text).Data.ArrayNum = 0;
  (this->Text).Data.ArrayMax = 0;
  (this->TitleRichText).field0_0x0.DebugPtr = (UDS_CommonRichTextBlock *)0x0;
  (this->DSText).StringTableType = None;
  return this;
}

// ~UDS_W_Contents_SubTitle_N @ 14b782fc0

void __thiscall
UDS_W_Contents_SubTitle_N::~UDS_W_Contents_SubTitle_N(UDS_W_Contents_SubTitle_N *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  pFVar1 = (this->Text).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->DSText).FormatArgs.AllocatorInstance.Data,
             (this->DSText).FormatArgs.ArrayNum);
  pFVar1 = (this->DSText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DSText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b785ba0

UClass * __cdecl UDS_W_Contents_SubTitle_N::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_Contents_SubTitle_N.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_Contents_SubTitle_N",
               &Z_Registration_Info_UClass_UDS_W_Contents_SubTitle_N.InnerSingleton,
               StaticRegisterNativesUDS_W_Contents_SubTitle_N,0x8e0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_W_Contents_SubTitle_N>,
               InternalVTableHelperCtorCaller<UDS_W_Contents_SubTitle_N>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_Contents_SubTitle_N.InnerSingleton;
}

// StaticRegisterNativesUDS_W_Contents_SubTitle_N @ 14b786550

void __cdecl UDS_W_Contents_SubTitle_N::StaticRegisterNativesUDS_W_Contents_SubTitle_N(void)

{
  return;
}

// NativePreConstruct @ 14bd09900

void __thiscall UDS_W_Contents_SubTitle_N::NativePreConstruct(UDS_W_Contents_SubTitle_N *this)

{
  UDS_CommonRichTextBlock *pUVar1;
  code *pcVar2;
  FName *pFVar3;
  FText *pFVar4;
  FName local_res8;
  FText local_18;
  
  UDS_UserWidget::NativePreConstruct((UDS_UserWidget *)this);
  pFVar3 = ::FName::FName(&local_res8,"RTEXT_SubTile");
  UDS_UserWidget::BindWidget<UDS_CommonRichTextBlock>
            ((UDS_UserWidget *)this,&this->TitleRichText,*pFVar3);
  pUVar1 = (this->TitleRichText).field0_0x0.DebugPtr;
  if ((pUVar1 != (UDS_CommonRichTextBlock *)0x0) && (1 < (this->Text).Data.ArrayNum)) {
    pcVar2 = *(code **)(pUVar1->_padding_ + 0x358);
    pFVar4 = FText::FromString(&local_18,&this->Text);
    (*pcVar2)(pUVar1,pFVar4);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SetDSText @ 14bd1ee50

void __thiscall
UDS_W_Contents_SubTitle_N::SetDSText(UDS_W_Contents_SubTitle_N *this,FDS_Text *param_1)

{
  UDS_CommonRichTextBlock *this_00;
  
  FDS_Text::operator=(&this->DSText,param_1);
  this_00 = (this->TitleRichText).field0_0x0.DebugPtr;
  if (this_00 != (UDS_CommonRichTextBlock *)0x0) {
    UDS_CommonRichTextBlock::SetDSText(this_00,&this->DSText);
  }
  return;
}

// SynchronizeProperties @ 14bd23020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_Contents_SubTitle_N::SynchronizeProperties(UDS_W_Contents_SubTitle_N *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SObjectWidget *this_00;
  FName FVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  UObject *pUVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UFunction *pUVar9;
  FMRSWRecursiveAccessDetector *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  UObject *pUStackX_8;
  UObject *pUStackX_10;
  undefined1 auStack_290 [8];
  ForAnyElementType FStack_288;
  ulonglong uStack_280;
  longlong lStack_278;
  longlong lStack_270;
  undefined1 uStack_268;
  undefined1 auStack_260 [8];
  ForAnyElementType FStack_258;
  ulonglong uStack_250;
  longlong lStack_248;
  longlong lStack_240;
  uint uStack_238;
  undefined1 uStack_234;
  undefined1 auStack_230 [8];
  FDelegateAllocation FStack_228;
  undefined1 auStack_218 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_200;
  ForAnyElementType FStack_1f8;
  ulonglong uStack_1f0;
  longlong lStack_1e8;
  longlong lStack_1e0;
  undefined1 uStack_1d8;
  undefined1 auStack_1d0 [8];
  FDelegateAllocation FStack_1c8;
  longlong lStack_1b8;
  longlong lStack_1b0;
  uint uStack_1a8;
  undefined1 uStack_1a4;
  undefined1 auStack_1a0 [24];
  longlong lStack_188;
  longlong lStack_180;
  undefined1 uStack_178;
  undefined1 auStack_170 [24];
  FDestructionSentinel FStack_158;
  FDestructionSentinel FStack_140;
  FDestructionSentinel FStack_128;
  FLinearColor_u_0 FStack_110;
  uint uStack_100;
  undefined1 uStack_fc;
  undefined1 auStack_f8 [24];
  FDestructionSentinel FStack_e0;
  FDelegateAllocation *pFStack_c8;
  FDestructionSentinel FStack_c0;
  FDelegateAllocation *pFStack_a8;
  FLinearColor_u_0 FStack_a0;
  undefined1 uStack_90;
  undefined1 auStack_88 [24];
  FReadAccessScope FStack_70;
  FReadAccessScope FStack_58;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  pTVar11 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar1->SharedReferenceCount;
    do {
      pTVar11 = (TReferenceControllerBase<1> *)0x0;
      if (aVar4 == (atomic<int>)0x0) goto LAB_146a96f76;
      LOCK();
      aVar5 = pTVar1->SharedReferenceCount;
      bVar12 = aVar4 == aVar5;
      if (bVar12) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar12);
    this_00 = (SObjectWidget *)this->_padding_;
    pTVar11 = pTVar1;
    if (this_00 != (SObjectWidget *)0x0) {
      bVar12 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
      if (bVar12) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
                   &FStack_70);
        FVar2 = (FName)this->_padding_;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&FStack_70);
        pUVar6 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                           ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
        uStack_1d8 = 1;
        FStack_1c8.DelegateSize = 0;
        FStack_1c8._12_4_ = 0;
        lStack_1e8 = 0;
        lStack_1e0 = 0;
        auStack_1d0 = (undefined1  [8])0x0;
        FStack_1c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_1d0,
                   (FWriteAccessScope *)&FStack_e0);
        pFStack_c8 = &FStack_1c8;
        puVar7 = UE::Core::Private::DelegateAllocate(0x30,&FStack_1c8);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &
                    ___7__TCommonDelegateInstanceState___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[2] = uVar8;
          *puVar7 = &
                    ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
          ;
          *(FName *)(puVar7 + 4) = FVar2;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          puVar7[5] = 0;
          pUStackX_8 = pUVar6;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 5),(FObjectPtr)&pUStackX_8);
          if ((FVar2 == (FName)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InFunctionName != NAME_None",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                                  ,0x56,L""), bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (pUVar6 != (UObject *)0x0) {
            pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar7 + 5));
            pUVar9 = UObject::FindFunctionChecked(pUVar6,FVar2);
            puVar7[3] = pUVar9;
          }
        }
        if (FStack_e0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_e0.Accessor,&FStack_e0);
        }
        uStack_178 = uStack_1d8;
        lStack_188 = lStack_1e8;
        lStack_180 = lStack_1e0;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_170,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_1d0);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_1d0);
        if (FStack_1c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)FStack_1c8.DelegateAllocator);
        }
        pFVar10 = (FMRSWRecursiveAccessDetector *)auStack_1d0;
      }
      else {
        lStack_278 = this->_padding_;
        lStack_270 = this->_padding_;
        uStack_268 = 1;
        uStack_250 = 0;
        uStack_178 = 1;
        auStack_260 = (undefined1  [8])0x0;
        FStack_258.Data = (FScriptContainerElement *)0x0;
        lStack_188 = lStack_278;
        lStack_180 = lStack_270;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_170,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_260);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_260,
                   (FWriteAccessScope *)&FStack_158);
        if (((int)uStack_250 != 0) && (FStack_258.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_258.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_258,0,0,0x10)
          ;
          uStack_250 = uStack_250 & 0xffffffff00000000;
        }
        if (FStack_158.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_158.Accessor,&FStack_158);
        }
        if (FStack_258.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_258.Data);
        }
        pFVar10 = (FMRSWRecursiveAccessDetector *)auStack_260;
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(pFVar10);
      bVar12 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
      if (bVar12) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
                   &FStack_58);
        FVar2 = (FName)this->_padding_;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&FStack_58);
        pUVar6 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                           ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
        uStack_238 = uStack_238 & 0xffffff00;
        uStack_234 = 1;
        FStack_228.DelegateSize = 0;
        FStack_228._12_4_ = 0;
        lStack_248 = ___xmm_3f8000003f800000000000003f800000;
        lStack_240 = _UNK_15090c6d8;
        auStack_230 = (undefined1  [8])0x0;
        FStack_228.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_230,
                   (FWriteAccessScope *)&FStack_c0);
        pFStack_a8 = &FStack_228;
        puVar7 = UE::Core::Private::DelegateAllocate(0x30,&FStack_228);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &
                    ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[2] = uVar8;
          *puVar7 = &
                    ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
          ;
          *(FName *)(puVar7 + 4) = FVar2;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          puVar7[5] = 0;
          pUStackX_10 = pUVar6;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 5),(FObjectPtr)&pUStackX_10);
          if ((FVar2 == (FName)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InFunctionName != NAME_None",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                                  ,0x56,L""), bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (pUVar6 != (UObject *)0x0) {
            pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar7 + 5));
            pUVar9 = UObject::FindFunctionChecked(pUVar6,FVar2);
            puVar7[3] = pUVar9;
          }
        }
        if (FStack_c0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_c0.Accessor,&FStack_c0);
        }
        uStack_1a8 = uStack_238;
        uStack_1a4 = uStack_234;
        lStack_1b8 = lStack_248;
        lStack_1b0 = lStack_240;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_1a0,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_230);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_230);
        if (FStack_228.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)FStack_228.DelegateAllocator);
        }
        pFVar10 = (FMRSWRecursiveAccessDetector *)auStack_230;
      }
      else {
        uStack_1a8 = (uint)this->_padding_;
        lStack_1b8 = this->_padding_;
        lStack_1b0 = this->_padding_;
        uStack_280 = 0;
        uStack_1a4 = 1;
        auStack_290 = (undefined1  [8])0x0;
        FStack_288.Data = (FScriptContainerElement *)0x0;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_1a0,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_290);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_290,
                   (FWriteAccessScope *)&FStack_140);
        if (((int)uStack_280 != 0) && (FStack_288.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_288.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_288,0,0,0x10)
          ;
          uStack_280 = uStack_280 & 0xffffffff00000000;
        }
        if (FStack_140.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_140.Accessor,&FStack_140);
        }
        if (FStack_288.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_288.Data);
        }
        pFVar10 = (FMRSWRecursiveAccessDetector *)auStack_290;
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(pFVar10);
      uStack_90 = uStack_178;
      FStack_a0._0_8_ = lStack_188;
      FStack_a0._8_8_ = lStack_180;
      TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_88,
                 (TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_170);
      SlateAttributePrivate::
      TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      ::Assign((TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                *)&this_00->_padding_,(SWidget *)this_00,(TAttribute<FLinearColor> *)&FStack_a0._s_0
               ,None);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_88);
      if ((void *)auStack_88._8_8_ != (void *)0x0) {
        FMemory::Free((void *)auStack_88._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_88);
      uStack_100 = uStack_1a8;
      FStack_110._0_8_ = lStack_1b8;
      FStack_110._8_8_ = lStack_1b0;
      uStack_fc = uStack_1a4;
      TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_f8,
                 (TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_1a0);
      SlateAttributePrivate::
      TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                *)&this_00->_padding_,(SWidget *)this_00,(TAttribute<FSlateColor> *)&FStack_110._s_0
               ,None);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_f8);
      if ((void *)auStack_f8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)auStack_f8._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_f8);
      auStack_218._0_8_ = this->_padding_;
      auStack_218._8_8_ = this->_padding_;
      auStack_218[0x10] = true;
      uStack_1f0 = 0;
      TStack_200.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_1f8.Data = (FScriptContainerElement *)0x0;
      SObjectWidget::SetPadding(this_00,(TAttribute<FMargin> *)auStack_218);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_200,(FWriteAccessScope *)&FStack_128);
      if (((int)uStack_1f0 != 0) && (FStack_1f8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_1f8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1f8,0,0,0x10);
        uStack_1f0 = uStack_1f0 & 0xffffffff00000000;
      }
      if (FStack_128.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_128.Accessor,&FStack_128);
      }
      if (FStack_1f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_1f8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_200.AccessDetector);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_1a0);
      if ((void *)auStack_1a0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)auStack_1a0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_1a0);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_170);
      if ((void *)auStack_170._8_8_ != (void *)0x0) {
        FMemory::Free((void *)auStack_170._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_170);
    }
  }
LAB_146a96f76:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return;
}

