// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitFaceSupport
// Functions: 12

// StaticClass @ 14d2810f0

UClass * __cdecl UAppleARKitLiveLinkSourceFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleARKitLiveLinkSourceFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKitFaceSupport",L"AppleARKitLiveLinkSourceFactory",
               &Z_Registration_Info_UClass_UAppleARKitLiveLinkSourceFactory.InnerSingleton,
               StaticRegisterNativesUAppleARKitLiveLinkSourceFactory,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAppleARKitLiveLinkSourceFactory>,
               InternalVTableHelperCtorCaller<UAppleARKitLiveLinkSourceFactory>,local_res8,
               ULiveLinkSourceFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleARKitLiveLinkSourceFactory.InnerSingleton;
}

// UAppleARKitLiveLinkSourceFactory @ 14d283d50

UAppleARKitLiveLinkSourceFactory * __thiscall
UAppleARKitLiveLinkSourceFactory::UAppleARKitLiveLinkSourceFactory
          (UAppleARKitLiveLinkSourceFactory *this,FVTableHelper *param_1)

{
  ULiveLinkSourceFactory::ULiveLinkSourceFactory((ULiveLinkSourceFactory *)this,param_1);
  *(undefined ***)this = &___7UAppleARKitLiveLinkSourceFactory__6B_;
  return this;
}

// UAppleARKitLiveLinkSourceFactory @ 14d283d80

UAppleARKitLiveLinkSourceFactory * __thiscall
UAppleARKitLiveLinkSourceFactory::UAppleARKitLiveLinkSourceFactory
          (UAppleARKitLiveLinkSourceFactory *this,FObjectInitializer *param_1)

{
  ULiveLinkSourceFactory::ULiveLinkSourceFactory((ULiveLinkSourceFactory *)this,param_1);
  *(undefined ***)this = &___7UAppleARKitLiveLinkSourceFactory__6B_;
  return this;
}

// ~UAppleARKitLiveLinkSourceFactory @ 14d284390

void __thiscall
UAppleARKitLiveLinkSourceFactory::~UAppleARKitLiveLinkSourceFactory
          (UAppleARKitLiveLinkSourceFactory *this)

{
  *(undefined ***)this = &___7UAppleARKitLiveLinkSourceFactory__6B_;
  ULiveLinkSourceFactory::~ULiveLinkSourceFactory((ULiveLinkSourceFactory *)this);
  return;
}

// BuildCreationPanel @ 14d285300

TSharedPtr<SWidget,1> * __thiscall
UAppleARKitLiveLinkSourceFactory::BuildCreationPanel
          (UAppleARKitLiveLinkSourceFactory *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
          *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  SAppleARKitLiveLinkSourceFactory *pSVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  FArguments *pFVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  TSharedPtr<SWidget,1> *pTVar11;
  T0RequiredArgs local_res10 [16];
  FLLMScope local_res20 [2];
  undefined1 local_2c8 [8];
  FDelegateAllocation local_2c0;
  TSlateDecl<SAppleARKitLiveLinkSourceFactory,RequiredArgs::T0RequiredArgs> local_2b0;
  UAppleARKitLiveLinkSourceFactory *local_298;
  FName local_290;
  FMemScope local_288;
  FDestructionSentinel local_280;
  FDestructionSentinel local_268;
  FDelegateAllocation *local_250;
  FArguments local_248;
  
  pFVar8 = SAppleARKitLiveLinkSourceFactory::FArguments::FArguments(&local_248);
  local_2c8 = (undefined1  [8])0x0;
  local_2c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_2c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c8,
             (FWriteAccessScope *)&local_268);
  local_250 = &local_2c0;
  puVar9 = UE::Core::Private::DelegateAllocate(0x38,&local_2c0);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFAppleARKitLiveLinkConnectionSettings___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXV__TSharedPtr_VILiveLinkSource___00__VFString___ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
                *)(puVar9 + 1),param_1);
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[4] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUAppleARKitLiveLinkSourceFactory____A6AXAEBUFAppleARKitLiveLinkConnectionSettings___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXV__TSharedPtr_VILiveLinkSource___00__VFString___ZUFDefaultDelegateUserPolicy______6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UAppleARKitLiveLinkSourceFactory *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[5] = 0;
    local_298 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UAppleARKitLiveLinkSourceFactory *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 5),(FObjectPtr)&local_298);
    puVar9[6] = CreateSourceFromSettings;
  }
  if (local_268.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_268.Accessor,&local_268);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar8->_OnConnectionSettingsAccepted,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2c8);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_290 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_288,&local_290,true);
  TSlateDecl<SAppleARKitLiveLinkSourceFactory,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAppleARKitLiveLinkSourceFactory,RequiredArgs::T0RequiredArgs>
            (&local_2b0,"SAppleARKitLiveLinkSourceFactory",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKitFaceSupport\\Source\\AppleARKitFaceSupport\\Private\\AppleARKitLiveLinkSourceFactory.cpp"
             ,0x19,local_res10);
  FMemScope::~FMemScope(&local_288);
  FLLMScope::~FLLMScope(local_res20);
  pSVar3 = local_2b0._Widget.Object;
  if (local_2b0._Widget.Object == (SAppleARKitLiveLinkSourceFactory *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedPtr<SWidget,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_2b0._Widget.Object,(FSlateBaseNamedArgs *)pFVar8);
  if (local_2b0._Widget.Object == (SAppleARKitLiveLinkSourceFactory *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedPtr<SWidget,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  if (((local_2b0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar6 = (**(code **)((local_2b0._Widget.Object)->_padding_ + 0x228))(local_2b0._Widget.Object);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_14d285518;
  }
  bVar7 = 0x20;
LAB_14d285518:
  *(byte *)&(local_2b0._Widget.Object)->_padding_ =
       (byte)(local_2b0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_2b0._Widget.Object)->_padding_ =
       (byte)(local_2b0._Widget.Object)->_padding_ | bVar7;
  if (local_2b0._Widget.Object == (SAppleARKitLiveLinkSourceFactory *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedPtr<SWidget,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_2b0._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_2b0._Widget.Object == (SAppleARKitLiveLinkSourceFactory *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedPtr<SWidget,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  FVar4.ReferenceController = local_2b0._Widget.SharedReferenceCount.ReferenceController;
  local_2b0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2b0._Widget.Object = (SAppleARKitLiveLinkSourceFactory *)0x0;
  if (pSVar3 == (SAppleARKitLiveLinkSourceFactory *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedPtr<SWidget,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar4.ReferenceController;
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar4.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar4.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c8,
             (FWriteAccessScope *)&local_280);
  if ((local_2c0.DelegateSize != 0) &&
     (local_2c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_2c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_2c0,0,0,0x10);
    local_2c0.DelegateSize = 0;
  }
  if (local_280.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_280.Accessor,&local_280);
  }
  if (local_2c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_2c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_248._OnConnectionSettingsAccepted);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_248);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return __return_storage_ptr__;
}

// CreateSource @ 14d286880

TSharedPtr<ILiveLinkSource,1> * __thiscall
UAppleARKitLiveLinkSourceFactory::CreateSource
          (UAppleARKitLiveLinkSourceFactory *this,
          TSharedPtr<ILiveLinkSource,1> *__return_storage_ptr__,FString *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  UScriptStruct *this_00;
  bool bVar5;
  UPackage *pUVar6;
  FOutputDeviceRedirector *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedPtr<ILiveLinkSource,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  wchar_t *pwVar11;
  FAppleARKitLiveLinkSource *this_01;
  atomic<int> local_res10 [2];
  FString local_28;
  
  local_res10[0] = (atomic<int>)0x2b67;
  if (1 < (param_1->Data).ArrayNum) {
    if (Z_Registration_Info_UScriptStruct_FAppleARKitLiveLinkConnectionSettings.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AppleARKitFaceSupport();
      Z_Registration_Info_UScriptStruct_FAppleARKitLiveLinkConnectionSettings.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAppleARKitLiveLinkConnectionSettings,
                           (UObject *)pUVar6,L"AppleARKitLiveLinkConnectionSettings");
    }
    this_00 = Z_Registration_Info_UScriptStruct_FAppleARKitLiveLinkConnectionSettings.OuterSingleton
    ;
    ::FString::FString(&local_28,L"UAppleARKitLiveLinkSourceFactory");
    pFVar7 = GetGlobalLogSingleton();
    if ((param_1->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    UScriptStruct::ImportText
              (this_00,pwVar11,local_res10,(UObject *)0x0,0,(FOutputDevice *)pFVar7,&local_28,true);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  pTVar8 = ::operator_new(0xb0);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    this_01 = (FAppleARKitLiveLinkSource *)&DAT_00000010;
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
LAB_14d286a18:
    if (((this_01->_padding_ == 0) || (this_01->_padding_ == 0)) ||
       (*(int *)(this_01->_padding_ + 8) < 1)) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      this_01->_padding_ = (longlong)this_01;
      if (pTVar8 != (TReferenceControllerBase<1> *)this_01->_padding_) {
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar3 = (longlong *)this_01->_padding_;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar3 + 8))();
          }
        }
        this_01->_padding_ = (longlong)pTVar8;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    }
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_14d286a78;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    this_01 = (FAppleARKitLiveLinkSource *)(pTVar8 + 1);
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAppleARKitLiveLinkSource___00_SharedPointerInternals__6B_
    ;
    pTVar8[1]._padding_ =
         (longlong)&FAppleARKitLiveLinkSource::_vftable__for__IARKitBlendShapePublisher__;
    *(undefined ***)&pTVar8[1].SharedReferenceCount =
         &FAppleARKitLiveLinkSource::_vftable__for__ILiveLinkSource__;
    pTVar8[2]._padding_ = 0;
    pTVar8[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[4]._padding_ = 0;
    pTVar8[5]._padding_ = 0;
    pTVar8[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[7]._padding_ = 0;
    pTVar8[3]._padding_ = 0;
    pTVar8[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[7].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar8[8]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar8[8]._padding_ + 4) = 0;
    pTVar8[9]._padding_ = 0;
    pTVar8[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[10]._padding_ = 0;
    pTVar8[10].SharedReferenceCount = local_res10[0];
    if (this_01 != (FAppleARKitLiveLinkSource *)0x0) goto LAB_14d286a18;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TSharedPtr<ILiveLinkSource,1> *)(*pcVar4)();
      return pTVar9;
    }
  }
  LOCK();
  pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
  UNLOCK();
LAB_14d286a78:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if (this_01 == (FAppleARKitLiveLinkSource *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TSharedPtr<ILiveLinkSource,1> *)(*pcVar4)();
      return pTVar9;
    }
  }
  FAppleARKitLiveLinkSource::InitializeRemoteListener(this_01);
  pTVar10 = (TReferenceControllerBase<1> *)&this_01->_padding_;
  if (this_01 == (FAppleARKitLiveLinkSource *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)0x0;
  }
  __return_storage_ptr__->Object = (ILiveLinkSource *)pTVar10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return __return_storage_ptr__;
}

// CreateSourceFromSettings @ 14d286b00

void __thiscall
UAppleARKitLiveLinkSourceFactory::CreateSourceFromSettings
          (UAppleARKitLiveLinkSourceFactory *this,FAppleARKitLiveLinkConnectionSettings *param_1,
          TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FAppleARKitLiveLinkSource *this_00;
  longlong *plVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  UPackage *pUVar8;
  TSharedRef<FAppleARKitLiveLinkSource,1> *pTVar9;
  longlong *plVar10;
  FString local_88;
  FScriptContainerElement *local_78;
  int local_70;
  int local_6c;
  longlong *local_68;
  TReferenceControllerBase<1> *local_60;
  TSharedRef<FAppleARKitLiveLinkSource,1> local_58;
  FReadAccessScope local_48;
  
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  if (Z_Registration_Info_UScriptStruct_FAppleARKitLiveLinkConnectionSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_AppleARKitFaceSupport();
    Z_Registration_Info_UScriptStruct_FAppleARKitLiveLinkConnectionSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAppleARKitLiveLinkConnectionSettings,
                         (UObject *)pUVar8,L"AppleARKitLiveLinkConnectionSettings");
  }
  UScriptStruct::ExportText
            (Z_Registration_Info_UScriptStruct_FAppleARKitLiveLinkConnectionSettings.OuterSingleton,
             &local_88,param_1,(void *)0x0,(UObject *)0x0,0,(UObject *)0x0,true);
  pTVar9 = MakeShared<FAppleARKitLiveLinkSource,1,FAppleARKitLiveLinkConnectionSettings_const_&>
                     (&local_58,param_1);
  pTVar1 = (pTVar9->SharedReferenceCount).ReferenceController;
  this_00 = pTVar9->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (this_00 == (FAppleARKitLiveLinkSource *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FAppleARKitLiveLinkSource::InitializeRemoteListener(this_00);
  FVar4.Data = local_88.Data.AllocatorInstance.Data;
  iVar5 = local_88.Data.ArrayNum;
  iVar6 = local_88.Data.ArrayMax;
  plVar10 = &this_00->_padding_;
  if (this_00 == (FAppleARKitLiveLinkSource *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_48);
  if ((*(int *)&param_2->field_0x10 == 0) ||
     (plVar2 = *(longlong **)&param_2->field_0x8, plVar2 == (longlong *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (FVar4.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar4.Data);
    }
  }
  else {
    local_78 = FVar4.Data;
    local_70 = iVar5;
    local_6c = iVar6;
    local_68 = plVar10;
    local_60 = pTVar1;
    (**(code **)(*plVar2 + 0x68))(plVar2,&local_68,&local_78);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return;
}

// GetMenuType @ 14d2877d0

EMenuType __thiscall
UAppleARKitLiveLinkSourceFactory::GetMenuType(UAppleARKitLiveLinkSourceFactory *this)

{
  return SubPanel;
}

// GetPrivateStaticClass @ 14d2878d0

UClass * __cdecl UAppleARKitLiveLinkSourceFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleARKitLiveLinkSourceFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKitFaceSupport",L"AppleARKitLiveLinkSourceFactory",
               &Z_Registration_Info_UClass_UAppleARKitLiveLinkSourceFactory.InnerSingleton,
               StaticRegisterNativesUAppleARKitLiveLinkSourceFactory,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAppleARKitLiveLinkSourceFactory>,
               InternalVTableHelperCtorCaller<UAppleARKitLiveLinkSourceFactory>,local_res8,
               ULiveLinkSourceFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleARKitLiveLinkSourceFactory.InnerSingleton;
}

// GetSourceDisplayName @ 14d287c90

FText * __thiscall
UAppleARKitLiveLinkSourceFactory::GetSourceDisplayName
          (UAppleARKitLiveLinkSourceFactory *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"AppleARKitLiveLinkSourceFactory",L"SourceDisplayName",
             L"Apple ARKit Source");
  return __return_storage_ptr__;
}

// GetSourceTooltip @ 14d287d60

FText * __thiscall
UAppleARKitLiveLinkSourceFactory::GetSourceTooltip
          (UAppleARKitLiveLinkSourceFactory *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"AppleARKitLiveLinkSourceFactory",L"SourceTooltip",
             L"Allows creation of an AppleARKit LiveLink source. ");
  return __return_storage_ptr__;
}

// StaticRegisterNativesUAppleARKitLiveLinkSourceFactory @ 14d28b4f0

void __cdecl
UAppleARKitLiveLinkSourceFactory::StaticRegisterNativesUAppleARKitLiveLinkSourceFactory(void)

{
  return;
}

