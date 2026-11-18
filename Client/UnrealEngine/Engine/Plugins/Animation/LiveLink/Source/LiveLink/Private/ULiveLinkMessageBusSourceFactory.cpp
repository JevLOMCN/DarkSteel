// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 14

// StaticClass @ 14cff4020

UClass * __cdecl ULiveLinkMessageBusSourceFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkMessageBusSourceFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkMessageBusSourceFactory",
               &Z_Registration_Info_UClass_ULiveLinkMessageBusSourceFactory.InnerSingleton,
               StaticRegisterNativesULiveLinkMessageBusSourceFactory,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkMessageBusSourceFactory>,
               InternalVTableHelperCtorCaller<ULiveLinkMessageBusSourceFactory>,local_res8,
               ULiveLinkSourceFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkMessageBusSourceFactory.InnerSingleton;
}

// ULiveLinkMessageBusSourceFactory @ 14d013fd0

ULiveLinkMessageBusSourceFactory * __thiscall
ULiveLinkMessageBusSourceFactory::ULiveLinkMessageBusSourceFactory
          (ULiveLinkMessageBusSourceFactory *this,FVTableHelper *param_1)

{
  ULiveLinkSourceFactory::ULiveLinkSourceFactory((ULiveLinkSourceFactory *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkMessageBusSourceFactory__6B_;
  return this;
}

// ULiveLinkMessageBusSourceFactory @ 14d014000

ULiveLinkMessageBusSourceFactory * __thiscall
ULiveLinkMessageBusSourceFactory::ULiveLinkMessageBusSourceFactory
          (ULiveLinkMessageBusSourceFactory *this,FObjectInitializer *param_1)

{
  ULiveLinkSourceFactory::ULiveLinkSourceFactory((ULiveLinkSourceFactory *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkMessageBusSourceFactory__6B_;
  return this;
}

// ~ULiveLinkMessageBusSourceFactory @ 14d017320

void __thiscall
ULiveLinkMessageBusSourceFactory::~ULiveLinkMessageBusSourceFactory
          (ULiveLinkMessageBusSourceFactory *this)

{
  *(undefined ***)this = &___7ULiveLinkMessageBusSourceFactory__6B_;
  ULiveLinkSourceFactory::~ULiveLinkSourceFactory((ULiveLinkSourceFactory *)this);
  return;
}

// BuildCreationPanel @ 14d025850

TSharedPtr<SWidget,1> * __thiscall
ULiveLinkMessageBusSourceFactory::BuildCreationPanel
          (ULiveLinkMessageBusSourceFactory *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
          *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  SLiveLinkMessageBusSourceFactory *pSVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  FArguments *pFVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  TSharedPtr<SWidget,1> *pTVar11;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  ULiveLinkMessageBusSourceFactory *local_res20;
  undefined1 local_2c8 [8];
  FDelegateAllocation local_2c0;
  TSlateDecl<SLiveLinkMessageBusSourceFactory,RequiredArgs::T0RequiredArgs> local_2b0;
  FName local_298;
  FMemScope local_290;
  FDestructionSentinel local_288;
  FDestructionSentinel local_270;
  FDelegateAllocation *local_258;
  FArguments local_250;
  
  pFVar8 = SLiveLinkMessageBusSourceFactory::FArguments::FArguments(&local_250);
  local_2c8 = (undefined1  [8])0x0;
  local_2c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_2c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c8,
             (FWriteAccessScope *)&local_270);
  local_258 = &local_2c0;
  puVar9 = UE::Core::Private::DelegateAllocate(0x38,&local_2c0);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFProviderPollResult___00___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXV__TSharedPtr_VILiveLinkSource___00__VFString___ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
                *)(puVar9 + 1),param_1);
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[4] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVULiveLinkMessageBusSourceFactory____A6AXV__TSharedPtr_UFProviderPollResult___00___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXV__TSharedPtr_VILiveLinkSource___00__VFString___ZUFDefaultDelegateUserPolicy______6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (ULiveLinkMessageBusSourceFactory *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[5] = 0;
    local_res20 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (ULiveLinkMessageBusSourceFactory *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 5),(FObjectPtr)&local_res20);
    puVar9[6] = OnSourceSelected;
  }
  if (local_270.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_270.Accessor,&local_270);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar8->_OnSourceSelected,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2c8);
  pFVar8->_FactoryClass = *(UClass **)&this->field_0x10;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_298 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_290,&local_298,true);
  TSlateDecl<SLiveLinkMessageBusSourceFactory,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SLiveLinkMessageBusSourceFactory,RequiredArgs::T0RequiredArgs>
            (&local_2b0,"SLiveLinkMessageBusSourceFactory",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkMessageBusSourceFactory.cpp"
             ,0x1c,local_res8);
  FMemScope::~FMemScope(&local_290);
  FLLMScope::~FLLMScope(local_res10);
  pSVar3 = local_2b0._Widget.Object;
  if (local_2b0._Widget.Object == (SLiveLinkMessageBusSourceFactory *)0x0) {
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
  SLiveLinkMessageBusSourceFactory::Construct(local_2b0._Widget.Object,pFVar8);
  if (local_2b0._Widget.Object == (SLiveLinkMessageBusSourceFactory *)0x0) {
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
    if (cVar6 == '\0') goto LAB_14d025a82;
  }
  bVar7 = 0x20;
LAB_14d025a82:
  *(byte *)&(local_2b0._Widget.Object)->_padding_ =
       (byte)(local_2b0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_2b0._Widget.Object)->_padding_ =
       (byte)(local_2b0._Widget.Object)->_padding_ | bVar7;
  if (local_2b0._Widget.Object == (SLiveLinkMessageBusSourceFactory *)0x0) {
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
  if (local_2b0._Widget.Object == (SLiveLinkMessageBusSourceFactory *)0x0) {
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
  local_2b0._Widget.Object = (SLiveLinkMessageBusSourceFactory *)0x0;
  if (pSVar3 == (SLiveLinkMessageBusSourceFactory *)0x0) {
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
             (FWriteAccessScope *)&local_288);
  if ((local_2c0.DelegateSize != 0) &&
     (local_2c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_2c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_2c0,0,0,0x10);
    local_2c0.DelegateSize = 0;
  }
  if (local_288.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_288.Accessor,&local_288);
  }
  if (local_2c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_2c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_250._OnSourceSelected);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_250);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return __return_storage_ptr__;
}

// CreateConnectionString @ 14d031880

FString * __cdecl
ULiveLinkMessageBusSourceFactory::CreateConnectionString
          (FString *__return_storage_ptr__,FProviderPollResult *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"Name=\"%s\"");
  return __return_storage_ptr__;
}

// CreateSource @ 14d0368c0

TSharedPtr<ILiveLinkSource,1> * __thiscall
ULiveLinkMessageBusSourceFactory::CreateSource
          (ULiveLinkMessageBusSourceFactory *this,
          TSharedPtr<ILiveLinkSource,1> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  FText *pFVar4;
  FText *pFVar5;
  undefined8 *puVar6;
  wchar_t *pwVar7;
  FString local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  FText local_18;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar3 = FParse::Value(pwVar7,L"Name=",&local_48,true,(wchar_t **)0x0);
  if (bVar3) {
    local_38 = 0;
    local_30 = 0;
    pcVar1 = *(code **)(*(longlong *)this + 0x2f0);
    pFVar4 = FText::GetEmpty();
    pFVar5 = FText::FromString(&local_18,&local_48);
    puVar6 = (undefined8 *)(*pcVar1)(this,local_28,pFVar5,pFVar4,&local_38,0);
    __return_storage_ptr__->Object = (ILiveLinkSource *)*puVar6;
    pTVar2 = (TReferenceControllerBase<1> *)puVar6[1];
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  else {
    __return_storage_ptr__->Object = (ILiveLinkSource *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetMenuType @ 14d0500d0

EMenuType __thiscall
ULiveLinkMessageBusSourceFactory::GetMenuType(ULiveLinkMessageBusSourceFactory *this)

{
  return SubPanel;
}

// GetPrivateStaticClass @ 14d0527e0

UClass * __cdecl ULiveLinkMessageBusSourceFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkMessageBusSourceFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkMessageBusSourceFactory",
               &Z_Registration_Info_UClass_ULiveLinkMessageBusSourceFactory.InnerSingleton,
               StaticRegisterNativesULiveLinkMessageBusSourceFactory,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkMessageBusSourceFactory>,
               InternalVTableHelperCtorCaller<ULiveLinkMessageBusSourceFactory>,local_res8,
               ULiveLinkSourceFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkMessageBusSourceFactory.InnerSingleton;
}

// GetSourceDisplayName @ 14d055480

FText * __thiscall
ULiveLinkMessageBusSourceFactory::GetSourceDisplayName
          (ULiveLinkMessageBusSourceFactory *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"LiveLinkMessageBusSourceFactory",L"SourceDisplayName",
             L"Message Bus Source");
  return __return_storage_ptr__;
}

// GetSourceTooltip @ 14d056160

FText * __thiscall
ULiveLinkMessageBusSourceFactory::GetSourceTooltip
          (ULiveLinkMessageBusSourceFactory *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"LiveLinkMessageBusSourceFactory",L"SourceTooltip",
             L"Creates a connection to a Message Bus based Live Link Source");
  return __return_storage_ptr__;
}

// MakeSource @ 14d061900

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FLiveLinkMessageBusSource,1> * __thiscall
ULiveLinkMessageBusSourceFactory::MakeSource
          (ULiveLinkMessageBusSourceFactory *this,
          TSharedPtr<FLiveLinkMessageBusSource,1> *__return_storage_ptr__,FText *param_1,
          FText *param_2,FMessageAddress *param_3,double param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<FLiveLinkMessageBusSource,1> *pTVar4;
  
  pTVar3 = ::operator_new(0xd0);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FLiveLinkMessageBusSource *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFLiveLinkMessageBusSource___00_SharedPointerInternals__6B_
    ;
    FLiveLinkMessageBusSource::FLiveLinkMessageBusSource
              ((FLiveLinkMessageBusSource *)(pTVar3 + 1),param_1,param_2,param_3,param_4);
    if ((FLiveLinkMessageBusSource *)(pTVar3 + 1) == (FLiveLinkMessageBusSource *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<FLiveLinkMessageBusSource,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (FLiveLinkMessageBusSource *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// OnSourceSelected @ 14d06ae80

void __thiscall
ULiveLinkMessageBusSourceFactory::OnSourceSelected
          (ULiveLinkMessageBusSourceFactory *this,TSharedPtr<FProviderPollResult,1> *param_1,
          TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
          *param_2)

{
  double dVar1;
  FProviderPollResult *pFVar2;
  code *pcVar3;
  longlong *plVar4;
  ForAnyElementType FVar5;
  int iVar6;
  int iVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  FText *pFVar10;
  FText *pFVar11;
  FString local_b8;
  FScriptContainerElement *local_a8;
  int local_a0;
  int local_9c;
  undefined8 local_98;
  TReferenceControllerBase<1> *local_90;
  undefined8 local_88;
  TReferenceControllerBase<1> *local_80;
  FText local_78;
  FText local_68;
  FReadAccessScope local_58 [2];
  
  pFVar2 = param_1->Object;
  if (pFVar2 != (FProviderPollResult *)0x0) {
    dVar1 = pFVar2->MachineTimeOffset;
    pcVar3 = *(code **)(*(longlong *)this + 0x2f0);
    pFVar10 = FText::FromString(&local_68,&pFVar2->MachineName);
    if ((param_1->Object == (FProviderPollResult *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar11 = FText::FromString(&local_78,&param_1->Object->Name);
    (*pcVar3)(this,&local_98,pFVar11,pFVar10,pFVar2,dVar1);
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    ::FString::PrintfImpl(&local_b8,L"Name=\"%s\"");
    pTVar8 = local_90;
    FVar5.Data = local_b8.Data.AllocatorInstance.Data;
    iVar6 = local_b8.Data.ArrayNum;
    iVar7 = local_b8.Data.ArrayMax;
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    if (local_90 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_90->SharedReferenceCount = (atomic<int>)((int)local_90->SharedReferenceCount + 1);
      UNLOCK();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,local_58);
    if ((*(int *)&param_2->field_0x10 == 0) ||
       (plVar4 = *(longlong **)&param_2->field_0x8, plVar4 == (longlong *)0x0)) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      if (FVar5.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar5.Data);
      }
    }
    else {
      local_a8 = FVar5.Data;
      local_a0 = iVar6;
      local_9c = iVar7;
      local_88 = local_98;
      local_80 = pTVar8;
      (**(code **)(*plVar4 + 0x68))(plVar4,&local_88,&local_a8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return;
}

// StaticRegisterNativesULiveLinkMessageBusSourceFactory @ 14d0807f0

void __cdecl
ULiveLinkMessageBusSourceFactory::StaticRegisterNativesULiveLinkMessageBusSourceFactory(void)

{
  return;
}

