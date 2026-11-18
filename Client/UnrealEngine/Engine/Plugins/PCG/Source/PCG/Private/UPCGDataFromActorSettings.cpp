// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 15

// StaticClass @ 149b31300

UClass * __cdecl UPCGDataFromActorSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataFromActorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataFromActorSettings",
               &Z_Registration_Info_UClass_UPCGDataFromActorSettings.InnerSingleton,
               StaticRegisterNativesUPCGDataFromActorSettings,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGDataFromActorSettings>,
               InternalVTableHelperCtorCaller<UPCGDataFromActorSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataFromActorSettings.InnerSingleton;
}

// UPCGDataFromActorSettings @ 149b567d0

UPCGDataFromActorSettings * __thiscall
UPCGDataFromActorSettings::UPCGDataFromActorSettings
          (UPCGDataFromActorSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGDataFromActorSettings__6B_;
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
  (this->ComponentSelector).ComponentSelection = ByTag;
  (this->ComponentSelector).ComponentSelectionTag.ComparisonIndex = 0;
  (this->ComponentSelector).ComponentSelectionTag.Number = 0;
  (this->ComponentSelector).ComponentSelectionClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ComponentSelector).bShowComponentSelection = true;
  (this->ComponentSelector).bShowComponentSelectionClass = true;
  (this->ComponentSelector).ComponentList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentSelector).ComponentList.ArrayNum = 0;
  (this->ComponentSelector).ComponentList.ArrayMax = 0;
  (this->ComponentSelector).ComponentSelectionTagString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ComponentSelector).ComponentSelectionTagString.Data.ArrayNum = 0;
  (this->ComponentSelector).ComponentSelectionTagString.Data.ArrayMax = 0;
  (this->ComponentSelector).bTagContainsWildcards = false;
  (this->ComponentSelector).bHasPreparedTag = false;
  (this->ExpectedPins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExpectedPins).ArrayNum = 0;
  (this->ExpectedPins).ArrayMax = 0;
  this->Mode = ParseActorComponents;
  this->bIgnorePCGGeneratedComponents = true;
  this->bAlsoOutputSinglePointData = false;
  this->bComponentsMustOverlapSelf = true;
  this->bGetDataOnAllGrids = true;
  this->AllowedGrids = 0;
  this->bMergeSinglePointData = false;
  (this->PropertyName).ComparisonIndex = 0;
  (this->PropertyName).Number = 0;
  this->bAlwaysRequeryActors = false;
  this->bSilenceSanitizedAttributeNameWarnings = false;
  this->bSilenceReservedAttributeNameWarnings = false;
  this->bDisplayModeSettings = true;
  return this;
}

// UPCGDataFromActorSettings @ 149b568e0

UPCGDataFromActorSettings * __thiscall
UPCGDataFromActorSettings::UPCGDataFromActorSettings
          (UPCGDataFromActorSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGDataFromActorSettings__6B_;
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
  (this->ComponentSelector).ComponentSelection = ByTag;
  (this->ComponentSelector).ComponentSelectionTag.ComparisonIndex = 0;
  (this->ComponentSelector).ComponentSelectionTag.Number = 0;
  (this->ComponentSelector).ComponentSelectionClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ComponentSelector).bShowComponentSelection = true;
  (this->ComponentSelector).bShowComponentSelectionClass = true;
  (this->ComponentSelector).ComponentList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentSelector).ComponentList.ArrayNum = 0;
  (this->ComponentSelector).ComponentList.ArrayMax = 0;
  (this->ComponentSelector).ComponentSelectionTagString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ComponentSelector).ComponentSelectionTagString.Data.ArrayNum = 0;
  (this->ComponentSelector).ComponentSelectionTagString.Data.ArrayMax = 0;
  (this->ComponentSelector).bTagContainsWildcards = false;
  (this->ComponentSelector).bHasPreparedTag = false;
  (this->ExpectedPins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExpectedPins).ArrayNum = 0;
  (this->ExpectedPins).ArrayMax = 0;
  this->Mode = ParseActorComponents;
  this->bIgnorePCGGeneratedComponents = true;
  this->bAlsoOutputSinglePointData = false;
  this->bComponentsMustOverlapSelf = true;
  this->bGetDataOnAllGrids = true;
  this->AllowedGrids = 0;
  this->bMergeSinglePointData = false;
  (this->PropertyName).ComparisonIndex = 0;
  (this->PropertyName).Number = 0;
  this->bAlwaysRequeryActors = false;
  this->bSilenceSanitizedAttributeNameWarnings = false;
  this->bSilenceReservedAttributeNameWarnings = false;
  this->bDisplayModeSettings = true;
  return this;
}

// ~UPCGDataFromActorSettings @ 149b58eb0

void __thiscall
UPCGDataFromActorSettings::~UPCGDataFromActorSettings(UPCGDataFromActorSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGDataFromActorSettings__6B_;
  pFVar1 = (this->ExpectedPins).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ComponentSelector).ComponentSelectionTagString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ComponentSelector).ComponentList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActorSelector).ActorSelectionTagString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->ActorSelector).ActorReferenceSelector.field_0x28,
             *(int *)&(this->ActorSelector).ActorReferenceSelector.field_0x30);
  pvVar2 = *(void **)&(this->ActorSelector).ActorReferenceSelector.field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149b6a990

TSharedPtr<IPCGElement,1> * __thiscall
UPCGDataFromActorSettings::CreateElement
          (UPCGDataFromActorSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGDataFromActorElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGDataFromActorElement__6B_;
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

// GetAdditionalTitleInformation @ 149b8c910

FString * __thiscall
UPCGDataFromActorSettings::GetAdditionalTitleInformation
          (UPCGDataFromActorSettings *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetCurrentPinTypesID @ 149b8de30

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

FPCGDataTypeIdentifier * __thiscall
UPCGDataFromActorSettings::GetCurrentPinTypesID
          (UPCGDataFromActorSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__,
          UPCGPin *param_1)

{
  code *pcVar1;
  bool bVar2;
  FPCGDataTypeIdentifier *pFVar3;
  
  if (param_1 == (UPCGPin *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPin",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataFromActor.cpp"
                       ,0x108,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPCGDataTypeIdentifier *)(*pcVar1)();
      return pFVar3;
    }
  }
  bVar2 = UPCGPin::IsOutputPin(param_1);
  if (bVar2) {
    if (this->Mode == GetSinglePoint) {
      FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,Point);
      return __return_storage_ptr__;
    }
    if ((byte)(this->Mode - GetActorReference) < 2) {
      FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,Param);
      return __return_storage_ptr__;
    }
  }
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier
            (__return_storage_ptr__,&(param_1->Properties).AllowedTypes);
  return __return_storage_ptr__;
}

// GetDataFilter @ 149b8e2e0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGDataFromActorSettings::GetDataFilter(UPCGDataFromActorSettings *this)

{
  return Any;
}

// GetDefaultActorSelectorClass @ 149b8e2f0

TSubclassOf<AActor> __thiscall
UPCGDataFromActorSettings::GetDefaultActorSelectorClass(UPCGDataFromActorSettings *this)

{
  TObjectPtr<UClass> in_RDX;
  
  *(undefined8 *)in_RDX.field0_0x0 = 0;
  return (TSubclassOf<AActor>)in_RDX.field0_0x0;
}

// GetPrivateStaticClass @ 149b90680

UClass * __cdecl UPCGDataFromActorSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataFromActorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataFromActorSettings",
               &Z_Registration_Info_UClass_UPCGDataFromActorSettings.InnerSingleton,
               StaticRegisterNativesUPCGDataFromActorSettings,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGDataFromActorSettings>,
               InternalVTableHelperCtorCaller<UPCGDataFromActorSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataFromActorSettings.InnerSingleton;
}

// HasDynamicPins @ 149b91ab0

bool __thiscall UPCGDataFromActorSettings::HasDynamicPins(UPCGDataFromActorSettings *this)

{
  return true;
}

// InputPinProperties @ 149b92590

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGDataFromActorSettings::InputPinProperties
          (UPCGDataFromActorSettings *this,
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

// OutputPinProperties @ 149b94120

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGDataFromActorSettings::OutputPinProperties
          (UPCGDataFromActorSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FName *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  FText *pFVar5;
  FPCGDataTypeIdentifier *pFVar6;
  FName *pFVar7;
  undefined1 local_res8 [8];
  FPCGDataTypeIdentifier local_58;
  FPCGDataTypeIdentifier local_40;
  
  UPCGSettings::OutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  if ((this->Mode == GetDataFromPCGComponent) ||
     (this->Mode == GetDataFromPCGComponentOrParseComponents)) {
    pFVar7 = (FName *)(this->ExpectedPins).AllocatorInstance.Data;
    iVar4 = (this->ExpectedPins).ArrayNum;
    pFVar1 = pFVar7 + iVar4;
    while( true ) {
      if ((this->ExpectedPins).ArrayNum != iVar4) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar7 == pFVar1) break;
      iVar3 = __return_storage_ptr__->ArrayNum;
      if (iVar3 == __return_storage_ptr__->ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar3 + 1;
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      pFVar5 = FText::GetEmpty();
      pFVar6 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_58,Any);
      FPCGPinProperties::FPCGPinProperties
                ((FPCGPinProperties *)(pFVar2 + (longlong)iVar3 * 0x30),pFVar7,pFVar6,true,true,
                 pFVar5);
      pFVar7 = pFVar7 + 1;
    }
    if (this->bAlsoOutputSinglePointData != false) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_58,L"PCGDataFromActorElement",L"SinglePointPinTooltip",
                          L"Matching single point associated to the actors from which data has been retrieved"
                         );
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
        __return_storage_ptr__->ArrayNum = iVar4;
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      pFVar6 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_40,Point);
      FPCGPinProperties::FPCGPinProperties
                ((FPCGPinProperties *)(pFVar2 + (longlong)iVar4 * 0x30),
                 &PCGDataFromActorConstants::SinglePointPinLabel,pFVar6,true,true,pFVar5);
      if (local_58.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        (**(code **)(*(longlong *)local_58.Ids.AllocatorInstance.Data + 0x10))();
      }
    }
  }
  return __return_storage_ptr__;
}

// PostLoad @ 149b95990

void __thiscall UPCGDataFromActorSettings::PostLoad(UPCGDataFromActorSettings *this)

{
  undefined8 *puVar1;
  undefined1 local_res8 [8];
  
  UPCGSettings::PostLoad((UPCGSettings *)this);
  if ((this->ActorSelector).ActorSelection != ByClass) {
    puVar1 = (undefined8 *)(**(code **)(this->_padding_ + 0x4f8))(this,local_res8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)*puVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)*puVar1);
    }
    (this->ActorSelector).ActorSelectionClass.Class.field0_0x0.DebugPtr = (UClass *)*puVar1;
  }
  return;
}

// StaticRegisterNativesUPCGDataFromActorSettings @ 149b98440

void __cdecl UPCGDataFromActorSettings::StaticRegisterNativesUPCGDataFromActorSettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (FClassNativeFunction *)0x0;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

