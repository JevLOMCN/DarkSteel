// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// SetText_WrapperImpl @ 14b77d210

void __cdecl UDS_W_CommonTextButton::SetText_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined1 auStackX_8 [8];
  longlong *plStack_18;
  undefined4 uStack_10;
  
  plVar1 = *(longlong **)param_2;
  plVar2 = *(longlong **)((longlong)param_1 + 0x12f0);
  if (plVar2 != plVar1) {
    *(longlong **)((longlong)param_1 + 0x12f0) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x12f8) = *(undefined4 *)((longlong)param_2 + 8);
  plVar1 = *(longlong **)((longlong)param_1 + 0x12e0);
  if (plVar1 != (longlong *)0x0) {
    plStack_18 = *(longlong **)((longlong)param_1 + 0x12f0);
    pcVar3 = *(code **)(*plVar1 + 0x358);
    if (plStack_18 != (longlong *)0x0) {
      (**(code **)(*plStack_18 + 8))(plStack_18,auStackX_8);
    }
    uStack_10 = *(undefined4 *)((longlong)param_1 + 0x12f8);
    (*pcVar3)(plVar1,&plStack_18);
  }
  return;
}

// SetDSText_WrapperImpl @ 14b77d220

void __cdecl UDS_W_CommonTextButton::SetDSText_WrapperImpl(void *param_1,void *param_2)

{
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x1300),param_2);
  if (*(UDS_CommonTextBlock **)((longlong)param_1 + 0x12e0) != (UDS_CommonTextBlock *)0x0) {
    UDS_CommonTextBlock::SetDSText
              (*(UDS_CommonTextBlock **)((longlong)param_1 + 0x12e0),
               (FDS_Text *)((longlong)param_1 + 0x1300));
  }
  return;
}

// StaticClass @ 14b77d230

UClass * __cdecl UDS_W_CommonTextButton::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_CommonTextButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_CommonTextButton",
               &Z_Registration_Info_UClass_UDS_W_CommonTextButton.InnerSingleton,
               StaticRegisterNativesUDS_W_CommonTextButton,0x1350,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_CommonTextButton>,
               InternalVTableHelperCtorCaller<UDS_W_CommonTextButton>,local_res8,
               UDS_W_CommonButton::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_CommonTextButton.InnerSingleton;
}

// UDS_W_CommonTextButton @ 14b781200

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_W_CommonTextButton * __thiscall
UDS_W_CommonTextButton::UDS_W_CommonTextButton(UDS_W_CommonTextButton *this,FVTableHelper *param_1)

{
  UDS_W_CommonButton::UDS_W_CommonButton((UDS_W_CommonButton *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  (this->TextBlock).field0_0x0.DebugPtr = (UDS_CommonTextBlock *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  ::FName::FName(&this->MainTextWidgetName,"MainText");
  FText::FText(&this->Text);
  (this->DSText).StringTableType = None;
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
  return this;
}

// UDS_W_CommonTextButton @ 14b7812d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_W_CommonTextButton * __thiscall
UDS_W_CommonTextButton::UDS_W_CommonTextButton
          (UDS_W_CommonTextButton *this,FObjectInitializer *param_1)

{
  UDS_W_CommonButton::UDS_W_CommonButton((UDS_W_CommonButton *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  (this->TextBlock).field0_0x0.DebugPtr = (UDS_CommonTextBlock *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  ::FName::FName(&this->MainTextWidgetName,"MainText");
  FText::FText(&this->Text);
  (this->DSText).StringTableType = None;
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
  return this;
}

// ~UDS_W_CommonTextButton @ 14b782d50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonTextButton::~UDS_W_CommonTextButton(UDS_W_CommonTextButton *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
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
  pIVar2 = (this->Text).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UDS_W_CommonButton::~UDS_W_CommonButton((UDS_W_CommonButton *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b7850c0

IClassDescriptor * __thiscall
UDS_W_CommonTextButton::GetFieldNotificationDescriptor(UDS_W_CommonTextButton *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_W_CommonTextButton::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b7858a0

UClass * __cdecl UDS_W_CommonTextButton::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_CommonTextButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_CommonTextButton",
               &Z_Registration_Info_UClass_UDS_W_CommonTextButton.InnerSingleton,
               StaticRegisterNativesUDS_W_CommonTextButton,0x1350,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_CommonTextButton>,
               InternalVTableHelperCtorCaller<UDS_W_CommonTextButton>,local_res8,
               UDS_W_CommonButton::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_CommonTextButton.InnerSingleton;
}

// StaticRegisterNativesUDS_W_CommonTextButton @ 14b7864b0

void __cdecl UDS_W_CommonTextButton::StaticRegisterNativesUDS_W_CommonTextButton(void)

{
  return;
}

// NativeDestruct @ 14bd07850

void __thiscall UDS_W_CommonTextButton::NativeDestruct(UDS_W_CommonTextButton *this)

{
  bool bVar1;
  UObject *pUVar2;
  ADS_PlayerController *this_00;
  FWeakObjectPtr aFStackX_8 [4];
  
  if (this->_padding_ != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x15f0),this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x1610),this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x15b0),this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x15d0),this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x1570),this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x1630),this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x1650),this
              );
  }
  if (this->_padding_ != 0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(this->_padding_ + 0x28));
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(this->_padding_ + 0x40));
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(this->_padding_ + 0x58));
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(this->_padding_ + 0x70));
    this->_padding_ = 0;
  }
  if (*(char *)((longlong)&this->_padding_ + 7) == '\x01') {
    ADS_PlayerController::GetPlayerController();
    bVar1 = FWeakObjectPtr::IsValid(aFStackX_8);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(aFStackX_8);
      if (pUVar2[0x3d].field_0x20 == '\x02') {
        this_00 = (ADS_PlayerController *)FWeakObjectPtr::Get(aFStackX_8);
        ADS_PlayerController::SetCursorShape(this_00,Default);
      }
    }
  }
  UDS_UserWidget::NativeDestruct((UDS_UserWidget *)this);
  return;
}

// NativePreConstruct @ 14bd097b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonTextButton::NativePreConstruct(UDS_W_CommonTextButton *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  ForAnyElementType FVar4;
  undefined1 auStackX_8 [8];
  TArray<UWidget_*,TSizedDefaultAllocator<32>_> TStack_18;
  
  UDS_UserWidget::NativePreConstruct((UDS_UserWidget *)this);
  if (this->_padding_ != 0) {
    (**(code **)(this->_padding_ + 0x518))(this);
    if (*(char *)((longlong)&this->_padding_ + 6) != '\0') {
      iVar2 = *(int *)((longlong)&this->_padding_ + 4);
      *(undefined4 *)&this->_padding_ = 0;
      if (iVar2 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)&this->_padding_,0,
                   (int *)((longlong)&this->_padding_ + 4));
      }
    }
    TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_18.ArrayNum = 0;
    TStack_18.ArrayMax = 0;
    UWidgetTree::GetAllWidgets((UWidgetTree *)this->_padding_,&TStack_18);
    iVar2 = TStack_18.ArrayNum;
    uVar3 = (ulonglong)TStack_18.ArrayNum;
    pFVar1 = TStack_18.AllocatorInstance.Data + uVar3 * 8;
    FVar4.Data = TStack_18.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar3 != iVar2) {
        `TCheckedPointerIterator<UWidget_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (auStackX_8);
      }
      if (FVar4.Data == pFVar1) break;
      (**(code **)(this->_padding_ + 0x520))(this,*(undefined8 *)FVar4.Data);
      uVar3 = TStack_18._8_8_ & 0xffffffff;
      FVar4.Data = FVar4.Data + 8;
    }
    (**(code **)(this->_padding_ + 0x528))(this);
    UDS_W_CommonButton::NotifyButtonSwitcher((UDS_W_CommonButton *)this);
    if (TStack_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_18.AllocatorInstance.Data);
    }
  }
  return;
}

// SetDSText @ 14bd1ee00

void __thiscall UDS_W_CommonTextButton::SetDSText(UDS_W_CommonTextButton *this,FDS_Text *param_1)

{
  UDS_CommonTextBlock *this_00;
  
  FDS_Text::operator=(&this->DSText,param_1);
  this_00 = (this->TextBlock).field0_0x0.DebugPtr;
  if (this_00 != (UDS_CommonTextBlock *)0x0) {
    UDS_CommonTextBlock::SetDSText(this_00,&this->DSText);
  }
  return;
}

// SetText @ 14bd22460

void __thiscall UDS_W_CommonTextButton::SetText(UDS_W_CommonTextButton *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  UDS_CommonTextBlock *pUVar3;
  code *pcVar4;
  undefined1 local_res8 [8];
  ITextData *local_18;
  uint local_10;
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->Text).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->Text).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->Text).Flags = param_1->Flags;
  pUVar3 = (this->TextBlock).field0_0x0.DebugPtr;
  if (pUVar3 != (UDS_CommonTextBlock *)0x0) {
    local_18 = (this->Text).TextData.Reference;
    pcVar4 = *(code **)(*(longlong *)pUVar3 + 0x358);
    if (local_18 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18 + 8))(local_18,local_res8);
    }
    local_10 = (this->Text).Flags;
    (*pcVar4)(pUVar3,&local_18);
  }
  return;
}

// SynchronizeProperties @ 14bd22fc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonTextButton::SynchronizeProperties(UDS_W_CommonTextButton *this)

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

