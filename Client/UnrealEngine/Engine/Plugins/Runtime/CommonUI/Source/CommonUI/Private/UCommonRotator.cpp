// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 24

// StaticClass @ 14a7861c0

UClass * __cdecl UCommonRotator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonRotator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonRotator",
               &Z_Registration_Info_UClass_UCommonRotator.InnerSingleton,
               StaticRegisterNativesUCommonRotator,0x17e0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonRotator>,
               InternalVTableHelperCtorCaller<UCommonRotator>,local_res8,
               UCommonButtonBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonRotator.InnerSingleton;
}

// UCommonRotator @ 14a7ae680

UCommonRotator * __thiscall
UCommonRotator::UCommonRotator(UCommonRotator *this,FVTableHelper *param_1)

{
  UCommonButtonBase::UCommonButtonBase((UCommonButtonBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UCommonRotator__6B_;
  *(undefined8 *)&this->OnNavigation = 0;
  *(undefined8 *)&(this->OnNavigation).field_0x8 = 0;
  *(undefined4 *)&(this->OnNavigation).field_0x10 = 0;
  *(undefined8 *)&this->OnRotatedWithDirection = 0;
  *(undefined8 *)&(this->OnRotatedWithDirection).field_0x8 = 0;
  *(undefined8 *)&(this->OnRotatedWithDirection).field_0x10 = 0;
  *(undefined8 *)&this->OnRotated = 0;
  *(undefined8 *)&(this->OnRotated).field_0x8 = 0;
  *(undefined8 *)&(this->OnRotated).field_0x10 = 0;
  *(undefined8 *)&this->OnRotatedEvent = 0;
  *(undefined8 *)&(this->OnRotatedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnRotatedEvent).field_0x10 = 0;
  (this->MyText).field0_0x0.DebugPtr = (UCommonTextBlock *)0x0;
  (this->TextLabels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextLabels).ArrayNum = 0;
  (this->TextLabels).ArrayMax = 0;
  *(undefined8 *)&(this->OnRotatedEvent).field_0x18 = 2;
  return this;
}

// UCommonRotator @ 14a7ae740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UCommonRotator * __thiscall
UCommonRotator::UCommonRotator(UCommonRotator *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  bool bVar2;
  FObjectInitializer *pFVar3;
  UButton *this_00;
  
  pFVar3 = FObjectInitializer::Get();
  UCommonButtonBase::UCommonButtonBase((UCommonButtonBase *)this,pFVar3);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined8 *)&(this->OnRotatedEvent).field_0x18 = 2;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UCommonRotator__6B_;
  *(undefined8 *)&this->OnNavigation = 0;
  *(undefined8 *)&(this->OnNavigation).field_0x8 = 0;
  *(undefined4 *)&(this->OnNavigation).field_0x10 = 0;
  *(undefined8 *)&this->OnRotatedWithDirection = 0;
  *(undefined8 *)&(this->OnRotatedWithDirection).field_0x8 = 0;
  *(undefined8 *)&(this->OnRotatedWithDirection).field_0x10 = 0;
  *(undefined8 *)&this->OnRotated = 0;
  *(undefined8 *)&(this->OnRotated).field_0x8 = 0;
  *(undefined8 *)&(this->OnRotated).field_0x10 = 0;
  *(undefined8 *)&this->OnRotatedEvent = 0;
  *(undefined8 *)&(this->OnRotatedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnRotatedEvent).field_0x10 = 0;
  (this->MyText).field0_0x0.DebugPtr = (UCommonTextBlock *)0x0;
  (this->TextLabels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextLabels).ArrayNum = 0;
  (this->TextLabels).ArrayMax = 0;
  UUserWidget::SetIsFocusable((UUserWidget *)this,true);
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x1564);
  if (bVar2) {
    this_00 = (UButton *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x1564);
    UButton::InitIsFocusable(this_00,true);
    if (this_00[1]._padding_ != 0) {
      pbVar1 = (byte *)(this_00[1]._padding_ + 0x464);
      *pbVar1 = *pbVar1 | 1;
    }
  }
  return this;
}

// ~UCommonRotator @ 14a7b3270

void __thiscall UCommonRotator::~UCommonRotator(UCommonRotator *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UCommonRotator__6B_;
  DestructItems<FText,int>
            ((FText *)(this->TextLabels).AllocatorInstance.Data,(this->TextLabels).ArrayNum);
  pFVar1 = (this->TextLabels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRotatedEvent).field_0x8,*(int *)&(this->OnRotatedEvent).field_0x10);
  pvVar2 = *(void **)&(this->OnRotatedEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRotatedEvent);
  pvVar2 = *(void **)&(this->OnRotated).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRotated);
  pvVar2 = *(void **)&(this->OnRotatedWithDirection).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRotatedWithDirection);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnNavigation);
  pvVar2 = *(void **)&(this->OnNavigation).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNavigation);
  UCommonButtonBase::~UCommonButtonBase((UCommonButtonBase *)this);
  return;
}

// BP_OnOptionSelected @ 14a7c10b0

void __thiscall UCommonRotator::BP_OnOptionSelected(UCommonRotator *this,int param_1)

{
  UFunction *pUVar1;
  int local_res10 [6];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonRotator_BP_OnOptionSelected);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res10);
  return;
}

// BP_OnOptionsPopulated @ 14a7c10f0

void __thiscall UCommonRotator::BP_OnOptionsPopulated(UCommonRotator *this,int param_1)

{
  UFunction *pUVar1;
  int local_res10 [6];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonRotator_BP_OnOptionsPopulated);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res10);
  return;
}

// GetPrivateStaticClass @ 14a7e6040

UClass * __cdecl UCommonRotator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonRotator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonRotator",
               &Z_Registration_Info_UClass_UCommonRotator.InnerSingleton,
               StaticRegisterNativesUCommonRotator,0x17e0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonRotator>,
               InternalVTableHelperCtorCaller<UCommonRotator>,local_res8,
               UCommonButtonBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonRotator.InnerSingleton;
}

// GetSelectedText @ 14a7e7a80

FText * __thiscall
UCommonRotator::GetSelectedText(UCommonRotator *this,FText *__return_storage_ptr__)

{
  UTextBlock::GetText((UTextBlock *)(this->MyText).field0_0x0.DebugPtr,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HandleNavigation @ 14a7ee150

TSharedPtr<SWidget,1> * __thiscall
UCommonRotator::HandleNavigation
          (UCommonRotator *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,EUINavigation param_1)

{
  if (param_1 == Left) {
    ShiftTextLeftInternal(this,true);
    __return_storage_ptr__->Object = (SWidget *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  if (param_1 == Right) {
    ShiftTextRightInternal(this,true);
  }
  __return_storage_ptr__->Object = (SWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// Initialize @ 14a7f3300

bool __thiscall UCommonRotator::Initialize(UCommonRotator *this)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UCommonRotator *local_res10;
  uint uStack_2c;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  bVar1 = UCommonButtonBase::Initialize((UCommonButtonBase *)this);
  if (bVar1) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnNavigation,
               (FWriteAccessScope *)&local_28);
    local_10 = &(this->OnNavigation).field_0x8;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VSWidget___00__W4EUINavigation___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonRotator____A6A_AV__TSharedPtr_VSWidget___00__W4EUINavigation___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UCommonRotator *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UCommonRotator *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = HandleNavigation;
      puVar2[5] = (ulonglong)uStack_2c << 0x20;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    return true;
  }
  return false;
}

// NativeOnNavigation @ 14a7fb3c0

FNavigationReply * __thiscall
UCommonRotator::NativeOnNavigation
          (UCommonRotator *this,FNavigationReply *__return_storage_ptr__,FGeometry *param_1,
          FNavigationEvent *param_2,FNavigationReply *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((param_2->NavigationType != Left) && (param_2->NavigationType != Right)) {
    (__return_storage_ptr__->EventHandler).Object = (param_3->EventHandler).Object;
    pTVar1 = (param_3->EventHandler).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->EventHandler).SharedReferenceCount.ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    (__return_storage_ptr__->FocusRecipient).Object = (param_3->FocusRecipient).Object;
    pTVar1 = (param_3->FocusRecipient).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->FocusRecipient).SharedReferenceCount.ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(undefined8 *)&__return_storage_ptr__->FocusDelegate = 0;
    *(undefined8 *)&(__return_storage_ptr__->FocusDelegate).field_0x8 = 0;
    *(undefined4 *)&(__return_storage_ptr__->FocusDelegate).field_0x10 = 0;
    TDelegate<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (&__return_storage_ptr__->FocusDelegate,&param_3->FocusDelegate);
    __return_storage_ptr__->BoundaryRule = param_3->BoundaryRule;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->EventHandler).Object = (SWidget *)0x0;
  (__return_storage_ptr__->EventHandler).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->FocusRecipient).Object = (SWidget *)0x0;
  (__return_storage_ptr__->FocusRecipient).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined4 *)&(__return_storage_ptr__->FocusDelegate).field_0x14 = 0;
  *(undefined8 *)&__return_storage_ptr__->FocusDelegate = 0;
  *(undefined8 *)&(__return_storage_ptr__->FocusDelegate).field_0x8 = 0;
  *(undefined4 *)&(__return_storage_ptr__->FocusDelegate).field_0x10 = 0;
  __return_storage_ptr__->BoundaryRule = Custom;
  TDelegate<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&__return_storage_ptr__->FocusDelegate,&this->OnNavigation);
  return __return_storage_ptr__;
}

// PopulateTextLabels @ 14a802130

void __thiscall
UCommonRotator::PopulateTextLabels
          (UCommonRotator *this,TArray<FText,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FText *pFVar4;
  FScriptContainerElement *pFVar5;
  UFunction *pUVar6;
  int local_res8 [2];
  
  pTVar2 = &this->TextLabels;
  if (pTVar2 != param_1) {
    DestructItems<FText,int>((FText *)(pTVar2->AllocatorInstance).Data,(this->TextLabels).ArrayNum);
    iVar3 = param_1->ArrayNum;
    piVar1 = &(this->TextLabels).ArrayMax;
    pFVar4 = (FText *)(param_1->AllocatorInstance).Data;
    (this->TextLabels).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  local_res8[0] = (this->TextLabels).ArrayNum;
  this->SelectedIndex = 0;
  pUVar6 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonRotator_BP_OnOptionsPopulated);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar6,local_res8);
  DestructItems<FText,int>((FText *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (pFVar5 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar5);
  return;
}

// SetSelectedItem @ 14a81b250

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonRotator::SetSelectedItem(UCommonRotator *this,int param_1)

{
  UCommonTextBlock *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UFunction *pUVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  int local_res10 [2];
  longlong *local_28;
  undefined4 local_20;
  
  if ((-1 < param_1) && (param_1 < (this->TextLabels).ArrayNum)) {
    this->SelectedIndex = param_1;
    pUVar1 = (this->MyText).field0_0x0.DebugPtr;
    pcVar2 = *(code **)(pUVar1->_padding_ + 0x358);
    uVar4 = 0;
    if (param_1 < (this->TextLabels).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar6 = (this->TextLabels).AllocatorInstance.Data + (longlong)param_1 * 0x10;
    local_28 = *(longlong **)pFVar6;
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 8))(local_28,local_res8);
    }
    local_20 = *(undefined4 *)(pFVar6 + 8);
    (*pcVar2)(pUVar1,&local_28);
    local_res10[0] = this->SelectedIndex;
    pUVar5 = UObject::FindFunctionChecked((UObject *)this,NAME_UCommonRotator_BP_OnOptionSelected);
    (**(code **)(*(longlong *)this + 0x260))(this,pUVar5,local_res10);
    return;
  }
  if (2 < (byte)LogCommonUI._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
  }
  return;
}

// ShiftTextLeft @ 14a81d390

void __thiscall UCommonRotator::ShiftTextLeft(UCommonRotator *this)

{
  ShiftTextLeftInternal(this,false);
  return;
}

// ShiftTextLeftInternal @ 14a81d3a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonRotator::ShiftTextLeftInternal(UCommonRotator *this,bool param_1)

{
  int *piVar1;
  ESlateVisibility EVar2;
  bool bVar3;
  int iVar4;
  int local_res18;
  undefined1 local_res1c;
  FReadAccessScope local_28;
  
  EVar2 = UWidget::GetVisibility((UWidget *)this);
  bVar3 = UWidget::GetIsEnabled((UWidget *)this);
  if (((bVar3) && ((this->field_0x4e1 & 6) == 6)) && (1 < (byte)(EVar2 - Collapsed))) {
    iVar4 = this->SelectedIndex;
    piVar1 = &(this->TextLabels).ArrayNum;
    if (iVar4 < 1) {
      iVar4 = *piVar1;
    }
    iVar4 = iVar4 + -1;
    this->SelectedIndex = iVar4;
    if ((-1 < iVar4) && (iVar4 < *piVar1)) {
      (**(code **)(*(longlong *)this + 0x620))(this);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnRotated,
                 &local_28);
      iVar4 = *(int *)&(this->OnRotated).field_0x10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      if (0 < iVar4) {
        local_res18 = this->SelectedIndex;
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnRotated,
                   &local_res18);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnRotatedWithDirection,&local_28);
      iVar4 = *(int *)&(this->OnRotatedWithDirection).field_0x10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      if (0 < iVar4) {
        local_res18 = this->SelectedIndex;
        local_res1c = 1;
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                   &this->OnRotatedWithDirection,&local_res18);
      }
      TMulticastDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> *)
                 &this->OnRotatedEvent,this->SelectedIndex,param_1);
    }
  }
  return;
}

// ShiftTextRight @ 14a81d4e0

void __thiscall UCommonRotator::ShiftTextRight(UCommonRotator *this)

{
  ShiftTextRightInternal(this,false);
  return;
}

// ShiftTextRightInternal @ 14a81d4f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonRotator::ShiftTextRightInternal(UCommonRotator *this,bool param_1)

{
  int iVar1;
  ESlateVisibility EVar2;
  bool bVar3;
  int iVar4;
  int local_res18;
  undefined1 local_res1c;
  FReadAccessScope local_28;
  
  EVar2 = UWidget::GetVisibility((UWidget *)this);
  bVar3 = UWidget::GetIsEnabled((UWidget *)this);
  if (((bVar3) && ((this->field_0x4e1 & 6) == 6)) && (1 < (byte)(EVar2 - Collapsed))) {
    iVar1 = (this->TextLabels).ArrayNum;
    iVar4 = 0;
    if (this->SelectedIndex < iVar1 + -1) {
      iVar4 = this->SelectedIndex + 1;
    }
    this->SelectedIndex = iVar4;
    if ((-1 < iVar4) && (iVar4 < iVar1)) {
      (**(code **)(*(longlong *)this + 0x620))(this);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnRotated,
                 &local_28);
      iVar1 = *(int *)&(this->OnRotated).field_0x10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      if (0 < iVar1) {
        local_res18 = this->SelectedIndex;
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnRotated,
                   &local_res18);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnRotatedWithDirection,&local_28);
      iVar1 = *(int *)&(this->OnRotatedWithDirection).field_0x10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      if (0 < iVar1) {
        local_res18 = this->SelectedIndex;
        local_res1c = 0;
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                   &this->OnRotatedWithDirection,&local_res18);
      }
      TMulticastDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> *)
                 &this->OnRotatedEvent,this->SelectedIndex,param_1);
    }
  }
  return;
}

// StaticRegisterNativesUCommonRotator @ 14a81e7c0

void __cdecl UCommonRotator::StaticRegisterNativesUCommonRotator(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UCommonRotator_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetSelectedIndex @ 14a82f030

void __cdecl UCommonRotator::execGetSelectedIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x98].field_0x10;
  return;
}

// execGetSelectedText @ 14a82f170

void __cdecl UCommonRotator::execGetSelectedText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UTextBlock::GetText(*(UTextBlock **)&param_1[0x97].field_0x20,&local_18);
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execPopulateTextLabels @ 14a8310a0

void __cdecl UCommonRotator::execPopulateTextLabels(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  UObject *pUVar2;
  FProperty *pFVar3;
  ForAnyElementType FVar4;
  int iVar5;
  FText *pFVar6;
  UFunction *pUVar7;
  undefined4 local_res8 [2];
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  FText *local_28;
  undefined8 local_20;
  
  local_28 = (FText *)0x0;
  local_20 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar6 = local_28;
  local_38.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar5 = (int)local_20;
  local_30 = (int)local_20;
  if ((int)local_20 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(int)local_20,0,&local_38,(int)local_20,&local_2c);
    ConstructItems<FText,FText,int>(local_38.Data,pFVar6,iVar5);
  }
  pUVar2 = param_1 + 0x98;
  if (pUVar2 != (UObject *)&local_38) {
    DestructItems<FText,int>
              ((FText *)*(FScriptContainerElement **)pUVar2,*(int *)&param_1[0x98].field_0x8);
    iVar5 = local_30;
    FVar4.Data = local_38.Data;
    puVar1 = &param_1[0x98].field_0xc;
    *(int *)&param_1[0x98].field_0x8 = local_30;
    if ((local_30 == 0) && (*(int *)puVar1 == 0)) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_30,*(int *)puVar1,(ForAnyElementType *)pUVar2,local_30,(int *)puVar1);
      ConstructItems<FText,FText,int>(*(FScriptContainerElement **)pUVar2,(FText *)FVar4.Data,iVar5)
      ;
    }
  }
  local_res8[0] = *(undefined4 *)&param_1[0x98].field_0x8;
  *(undefined4 *)&param_1[0x98].field_0x10 = 0;
  pUVar7 = UObject::FindFunctionChecked(param_1,NAME_UCommonRotator_BP_OnOptionsPopulated);
  (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar7,local_res8);
  DestructItems<FText,int>((FText *)local_38.Data,local_30);
  if ((FText *)local_38.Data != (FText *)0x0) {
    FMemory::Free(local_38.Data);
  }
  DestructItems<FText,int>(local_28,(int)local_20);
  if (local_28 != (FText *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execSetSelectedItem @ 14a835680

void __cdecl UCommonRotator::execSetSelectedItem(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x620))(param_1,local_res8[0]);
  return;
}

// execShiftTextLeft @ 14a836a20

void __cdecl UCommonRotator::execShiftTextLeft(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ShiftTextLeftInternal((UCommonRotator *)param_1,false);
  return;
}

// execShiftTextRight @ 14a836a50

void __cdecl UCommonRotator::execShiftTextRight(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ShiftTextRightInternal((UCommonRotator *)param_1,false);
  return;
}

