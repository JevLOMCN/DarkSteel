// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 9

// StaticClass @ 14a781160

UClass * __cdecl UCommonCustomNavigation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonCustomNavigation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonCustomNavigation",
               &Z_Registration_Info_UClass_UCommonCustomNavigation.InnerSingleton,
               StaticRegisterNativesUCommonCustomNavigation,0x3a0,0x10,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"CommonUI",
               InternalConstructor<UCommonCustomNavigation>,
               InternalVTableHelperCtorCaller<UCommonCustomNavigation>,local_res8,
               UBorder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonCustomNavigation.InnerSingleton;
}

// UCommonCustomNavigation @ 14a7ad5d0

UCommonCustomNavigation * __thiscall
UCommonCustomNavigation::UCommonCustomNavigation
          (UCommonCustomNavigation *this,FVTableHelper *param_1)

{
  UBorder::UBorder((UBorder *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&this->OnNavigationEvent = 0;
  *(undefined8 *)&(this->OnNavigationEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnNavigationEvent).field_0x10 = 0;
  return this;
}

// UCommonCustomNavigation @ 14a7ad620

UCommonCustomNavigation * __thiscall
UCommonCustomNavigation::UCommonCustomNavigation
          (UCommonCustomNavigation *this,FObjectInitializer *param_1)

{
  FMargin local_18;
  
  UBorder::UBorder((UBorder *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  local_18.Left = 0.0;
  local_18.Top = 0.0;
  local_18.Right = 0.0;
  local_18.Bottom = 0.0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&this->OnNavigationEvent = 0;
  *(undefined8 *)&(this->OnNavigationEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnNavigationEvent).field_0x10 = 0;
  UBorder::SetPadding((UBorder *)this,&local_18);
  return this;
}

// ~UCommonCustomNavigation @ 14a7b2ad0

void __thiscall UCommonCustomNavigation::~UCommonCustomNavigation(UCommonCustomNavigation *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNavigationEvent);
  UBorder::~UBorder((UBorder *)this);
  return;
}

// FOnCustomNavigationEvent_DelegateWrapper @ 14a7db470

bool __cdecl
UCommonCustomNavigation::FOnCustomNavigationEvent_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,EUINavigation param_2)

{
  EUINavigation local_res10;
  char local_res11;
  
  local_res11 = '\0';
  local_res10 = param_2;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_res10);
  return local_res11 != '\0';
}

// GetPrivateStaticClass @ 14a7e53a0

UClass * __cdecl UCommonCustomNavigation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonCustomNavigation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonCustomNavigation",
               &Z_Registration_Info_UClass_UCommonCustomNavigation.InnerSingleton,
               StaticRegisterNativesUCommonCustomNavigation,0x3a0,0x10,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"CommonUI",
               InternalConstructor<UCommonCustomNavigation>,
               InternalVTableHelperCtorCaller<UCommonCustomNavigation>,local_res8,
               UBorder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonCustomNavigation.InnerSingleton;
}

// OnNavigation @ 14a7fe2f0

bool __thiscall
UCommonCustomNavigation::OnNavigation(UCommonCustomNavigation *this,EUINavigation param_1)

{
  bool bVar1;
  EUINavigation local_res8;
  char local_res9;
  
  bVar1 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnNavigationEvent);
  if (bVar1) {
    local_res9 = '\0';
    local_res8 = param_1;
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnNavigationEvent,&local_res8);
    return local_res9 != '\0';
  }
  return false;
}

// RebuildWidget @ 14a809470

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UCommonCustomNavigation::RebuildWidget
          (UCommonCustomNavigation *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  code *pcVar4;
  SCustomNavBorder *pSVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  FArguments *pFVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  TSharedRef<SWidget,1> *pTVar14;
  UBorderSlot *this_00;
  UClass *pUVar15;
  TSharedRef<SBorder,1> *pTVar16;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  UCommonCustomNavigation *local_res18;
  FName local_res20;
  undefined1 local_2f8 [8];
  FDelegateAllocation local_2f0;
  FMemScope local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  SCustomNavBorder *local_2c8;
  FSharedReferencer<1> local_2c0;
  TSlateDecl<SCustomNavBorder,RequiredArgs::T0RequiredArgs> local_2b8;
  FDestructionSentinel local_2a0;
  FDestructionSentinel local_288;
  FDelegateAllocation *local_270;
  TSharedRef<SBorder,1> local_268;
  undefined1 local_258 [520];
  undefined1 local_50 [24];
  
  pFVar11 = SCustomNavBorder::FArguments::FArguments((FArguments *)local_258);
  uStack_2d0 = 0;
  local_2f8 = (undefined1  [8])0x0;
  local_2d8 = (FMemScope)OnNavigation;
  local_2f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_2f0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2f8,
             (FWriteAccessScope *)&local_288);
  local_270 = &local_2f0;
  puVar12 = UE::Core::Private::DelegateAllocate(0x30,&local_2f0);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6A_NW4EUINavigation___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonCustomNavigation____A6A_NW4EUINavigation___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UCommonCustomNavigation *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar12[3] = 0;
    local_res18 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UCommonCustomNavigation *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 3),(FObjectPtr)&local_res18);
    *(FMemScope *)(puVar12 + 4) = local_2d8;
    puVar12[5] = CONCAT44(uStack_2cc,uStack_2d0);
  }
  if (local_288.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_288.Accessor,&local_288);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar11->_OnHandleNavigation,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f8);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2d8,&local_res20,true);
  TSlateDecl<SCustomNavBorder,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SCustomNavBorder,RequiredArgs::T0RequiredArgs>
            (&local_2b8,"SCustomNavBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonCustomNavigation.cpp"
             ,0x49,local_res8);
  FMemScope::~FMemScope(&local_2d8);
  FLLMScope::~FLLMScope(local_res10);
  pSVar5 = local_2b8._Widget.Object;
  if (local_2b8._Widget.Object == (SCustomNavBorder *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar14;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_2b8._Widget.Object,(FSlateBaseNamedArgs *)pFVar11);
  SCustomNavBorder::Construct(local_2b8._Widget.Object,pFVar11);
  if (local_2b8._Widget.Object == (SCustomNavBorder *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar14;
    }
  }
  if (((local_2b8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)((local_2b8._Widget.Object)->_padding_ + 0x228))(local_2b8._Widget.Object);
    bVar9 = 0;
    if (cVar8 != '\0') goto LAB_14a80969e;
  }
  else {
LAB_14a80969e:
    bVar9 = 0x20;
  }
  FVar6.ReferenceController = local_2b8._Widget.SharedReferenceCount.ReferenceController;
  *(byte *)&(local_2b8._Widget.Object)->_padding_ =
       (byte)(local_2b8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_2b8._Widget.Object)->_padding_ =
       (byte)(local_2b8._Widget.Object)->_padding_ | bVar9;
  pbVar1 = (byte *)((longlong)&(local_2b8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  local_2b8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2b8._Widget.Object = (SCustomNavBorder *)0x0;
  if (pSVar5 == (SCustomNavBorder *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar14;
    }
  }
  local_2c8 = pSVar5;
  local_2c0.ReferenceController = FVar6.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar6.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SCustomNavBorder **)&this->_padding_ != &local_2c8) {
    this->_padding_ = (longlong)pSVar5;
    local_2c8 = (SCustomNavBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_2c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2c0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2f8,
             (FWriteAccessScope *)&local_2a0);
  if ((local_2f0.DelegateSize != 0) &&
     (local_2f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_2f0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_2f0,0,0,0x10);
    local_2f0.DelegateSize = 0;
  }
  if (local_2a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a0.Accessor,&local_2a0);
  }
  if (local_2f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_2f0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2f8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_50);
  if ((void *)local_50._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_50._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_258._512_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_258);
  iVar10 = UPanelWidget::GetChildrenCount((UPanelWidget *)this);
  if (iVar10 < 1) goto LAB_14a80984b;
  this_00 = (UBorderSlot *)UContentWidget::GetContentSlot((UContentWidget *)this);
  if (this_00 == (UBorderSlot *)0x0) {
LAB_14a80982d:
    this_00 = (UBorderSlot *)0x0;
  }
  else {
    pUVar15 = Z_Construct_UClass_UBorderSlot_NoRegister();
    iVar10 = (int)pUVar15->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar10) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
        &pUVar15->_padding_)) goto LAB_14a80982d;
  }
  pTVar16 = TSharedPtr<SBorder,1>::ToSharedRef((TSharedPtr<SBorder,1> *)&this->_padding_,&local_268)
  ;
  UBorderSlot::BuildSlot(this_00,pTVar16);
LAB_14a80984b:
  if (this->_padding_ == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar14;
    }
  }
  pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
  pSVar3 = (SWidget *)this->_padding_;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar3 == (SWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar14 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar14;
    }
  }
  __return_storage_ptr__->Object = pSVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUCommonCustomNavigation @ 14a81e530

void __cdecl UCommonCustomNavigation::StaticRegisterNativesUCommonCustomNavigation(void)

{
  return;
}

