// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 13

// StaticClass @ 149b32000

UClass * __cdecl UPCGGetActorPropertySettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetActorPropertySettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetActorPropertySettings",
               &Z_Registration_Info_UClass_UPCGGetActorPropertySettings.InnerSingleton,
               StaticRegisterNativesUPCGGetActorPropertySettings,0x1a8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGetActorPropertySettings>,
               InternalVTableHelperCtorCaller<UPCGGetActorPropertySettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetActorPropertySettings.InnerSingleton;
}

// UPCGGetActorPropertySettings @ 149b57aa0

UPCGGetActorPropertySettings * __thiscall
UPCGGetActorPropertySettings::UPCGGetActorPropertySettings
          (UPCGGetActorPropertySettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGGetActorPropertySettings__6B_;
  (this->ActorSelector).ActorFilter = Self;
  (this->ActorSelector).bMustOverlapSelf = false;
  (this->ActorSelector).bIncludeChildren = false;
  (this->ActorSelector).bDisableFilter = false;
  (this->ActorSelector).ActorSelection = ByTag;
  (this->ActorSelector).ActorSelectionTag.ComparisonIndex = 0;
  (this->ActorSelector).ActorSelectionTag.Number = 0;
  (this->ActorSelector).ActorSelectionClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&(this->ActorSelector).ActorReferenceSelector);
  (this->ActorSelector).bSelectMultiple = false;
  (this->ActorSelector).bIgnoreSelfAndChildren = false;
  (this->ActorSelector).bShowActorFilter = true;
  (this->ActorSelector).bShowIncludeChildren = true;
  (this->ActorSelector).bShowActorSelection = true;
  (this->ActorSelector).bShowActorSelectionClass = true;
  (this->ActorSelector).bShowSelectMultiple = true;
  (this->ActorSelector).bShowIgnoreSelfAndChildren = true;
  (this->ActorSelector).ActorSelectionTagString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ActorSelector).ActorSelectionTagString.Data.ArrayNum = 0;
  (this->ActorSelector).ActorSelectionTagString.Data.ArrayMax = 0;
  (this->ActorSelector).bTagContainsWildcards = false;
  (this->ActorSelector).bHasPreparedTag = false;
  (this->ComponentClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->bSelectComponent = false;
  this->bProcessAllComponents = false;
  this->bOutputComponentReference = false;
  (this->PropertyName).ComparisonIndex = 0;
  (this->PropertyName).Number = 0;
  this->bForceObjectAndStructExtraction = false;
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
            (&this->OutputAttributeName);
  this->bSanitizeOutputAttributeName = true;
  this->bOutputActorReference = false;
  this->bAlwaysRequeryActors = true;
  return this;
}

// UPCGGetActorPropertySettings @ 149b57b70

UPCGGetActorPropertySettings * __thiscall
UPCGGetActorPropertySettings::UPCGGetActorPropertySettings
          (UPCGGetActorPropertySettings *this,FObjectInitializer *param_1)

{
  bool bVar1;
  FObjectInitializer *pFVar2;
  FName FVar3;
  
  pFVar2 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar2);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  this->_padding_ = (longlong)&___7UPCGGetActorPropertySettings__6B_;
  (this->ActorSelector).ActorFilter = Self;
  (this->ActorSelector).bMustOverlapSelf = false;
  (this->ActorSelector).bIncludeChildren = false;
  (this->ActorSelector).bDisableFilter = false;
  (this->ActorSelector).ActorSelection = ByTag;
  (this->ActorSelector).ActorSelectionTag.ComparisonIndex = 0;
  (this->ActorSelector).ActorSelectionTag.Number = 0;
  (this->ActorSelector).ActorSelectionClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&(this->ActorSelector).ActorReferenceSelector);
  (this->ActorSelector).bSelectMultiple = false;
  (this->ActorSelector).bIgnoreSelfAndChildren = false;
  (this->ActorSelector).bShowActorFilter = true;
  (this->ActorSelector).bShowIncludeChildren = true;
  (this->ActorSelector).bShowActorSelection = true;
  (this->ActorSelector).bShowActorSelectionClass = true;
  (this->ActorSelector).bShowSelectMultiple = true;
  (this->ActorSelector).bShowIgnoreSelfAndChildren = true;
  (this->ActorSelector).ActorSelectionTagString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ActorSelector).ActorSelectionTagString.Data.ArrayNum = 0;
  (this->ActorSelector).ActorSelectionTagString.Data.ArrayMax = 0;
  (this->ActorSelector).bTagContainsWildcards = false;
  (this->ActorSelector).bHasPreparedTag = false;
  (this->ComponentClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->bProcessAllComponents = false;
  this->bOutputComponentReference = false;
  this->bSelectComponent = false;
  (this->PropertyName).ComparisonIndex = 0;
  (this->PropertyName).Number = 0;
  this->bForceObjectAndStructExtraction = false;
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
            (&this->OutputAttributeName);
  this->bSanitizeOutputAttributeName = true;
  this->bOutputActorReference = false;
  this->bAlwaysRequeryActors = true;
  bVar1 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,false);
  if (bVar1) {
    this->bProcessAllComponents = true;
    FVar3 = PCGMetadataAttributeConstants::SourceAttributeName;
  }
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&this->OutputAttributeName,FVar3,true);
  return this;
}

// ~UPCGGetActorPropertySettings @ 149b594e0

void __thiscall
UPCGGetActorPropertySettings::~UPCGGetActorPropertySettings(UPCGGetActorPropertySettings *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UPCGGetActorPropertySettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->OutputAttributeName).field_0x28,
             *(int *)&(this->OutputAttributeName).field_0x30);
  pvVar1 = *(void **)&(this->OutputAttributeName).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->ActorSelector).ActorSelectionTagString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->ActorSelector).ActorReferenceSelector.field_0x28,
             *(int *)&(this->ActorSelector).ActorReferenceSelector.field_0x30);
  pvVar1 = *(void **)&(this->ActorSelector).ActorReferenceSelector.field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149b6ba10

TSharedPtr<IPCGElement,1> * __thiscall
UPCGGetActorPropertySettings::CreateElement
          (UPCGGetActorPropertySettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<IPCGElement,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IPCGElement *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPCGGetActorPropertyElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGGetActorPropertyElement__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<IPCGElement,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (IPCGElement *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetAdditionalTitleInformation @ 149b8dca0

FString * __thiscall
UPCGGetActorPropertySettings::GetAdditionalTitleInformation
          (UPCGGetActorPropertySettings *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetCurrentPinTypesID @ 149b8e280

FPCGDataTypeIdentifier * __thiscall
UPCGGetActorPropertySettings::GetCurrentPinTypesID
          (UPCGGetActorPropertySettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__,
          UPCGPin *param_1)

{
  code *pcVar1;
  bool bVar2;
  FPCGDataTypeIdentifier *pFVar3;
  
  if (param_1 == (UPCGPin *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPin",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetActorProperty.cpp"
                       ,0x9b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPCGDataTypeIdentifier *)(*pcVar1)();
      return pFVar3;
    }
  }
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier
            (__return_storage_ptr__,&(param_1->Properties).AllowedTypes);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149b917c0

UClass * __cdecl UPCGGetActorPropertySettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetActorPropertySettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetActorPropertySettings",
               &Z_Registration_Info_UClass_UPCGGetActorPropertySettings.InnerSingleton,
               StaticRegisterNativesUPCGGetActorPropertySettings,0x1a8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGetActorPropertySettings>,
               InternalVTableHelperCtorCaller<UPCGGetActorPropertySettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetActorPropertySettings.InnerSingleton;
}

// HasDynamicPins @ 149b91b20

bool __thiscall UPCGGetActorPropertySettings::HasDynamicPins(UPCGGetActorPropertySettings *this)

{
  return true;
}

// InputPinProperties @ 149b93020

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGetActorPropertySettings::InputPinProperties
          (UPCGGetActorPropertySettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((this->ActorSelector).ActorFilter == FromInput) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar3 = FText::GetEmpty();
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
    FPCGPinProperties::FPCGPinProperties
              ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
               &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  }
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b94f40

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGetActorPropertySettings::OutputPinProperties
          (UPCGGetActorPropertySettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Param);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// PostLoad @ 149b95a30

void __thiscall UPCGGetActorPropertySettings::PostLoad(UPCGGetActorPropertySettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGGetActorPropertySettings @ 149b985e0

void __cdecl UPCGGetActorPropertySettings::StaticRegisterNativesUPCGGetActorPropertySettings(void)

{
  return;
}

