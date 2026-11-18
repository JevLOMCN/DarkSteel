// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 12

// StaticClass @ 149b2fad0

UClass * __cdecl UPCGDeleteAttributesSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDeleteAttributesSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDeleteAttributesSettings",
               &Z_Registration_Info_UClass_UPCGDeleteAttributesSettings.InnerSingleton,
               StaticRegisterNativesUPCGDeleteAttributesSettings,0xf0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGDeleteAttributesSettings>,
               InternalVTableHelperCtorCaller<UPCGDeleteAttributesSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDeleteAttributesSettings.InnerSingleton;
}

// UPCGDeleteAttributesSettings @ 149b56c70

UPCGDeleteAttributesSettings * __thiscall
UPCGDeleteAttributesSettings::UPCGDeleteAttributesSettings
          (UPCGDeleteAttributesSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGDeleteAttributesSettings__6B_;
  (this->SelectedAttributes).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedAttributes).Data.ArrayNum = 0;
  (this->SelectedAttributes).Data.ArrayMax = 0;
  this->Operation = KeepSelectedAttributes;
  this->Operator = Equal;
  this->bTokenizeOnWhiteSpace = false;
  this->MetadataDomain = PCGDataConstants::DefaultDomainName;
  return this;
}

// UPCGDeleteAttributesSettings @ 149b56cd0

UPCGDeleteAttributesSettings * __thiscall
UPCGDeleteAttributesSettings::UPCGDeleteAttributesSettings(UPCGDeleteAttributesSettings *this)

{
  bool bVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar2);
  this->_padding_ = (longlong)&___7UPCGDeleteAttributesSettings__6B_;
  this->Operation = KeepSelectedAttributes;
  (this->SelectedAttributes).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedAttributes).Data.ArrayNum = 0;
  (this->SelectedAttributes).Data.ArrayMax = 0;
  this->Operator = Equal;
  this->bTokenizeOnWhiteSpace = false;
  this->MetadataDomain = PCGDataConstants::DefaultDomainName;
  bVar1 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,false);
  if (bVar1) {
    this->Operation = DeleteSelectedAttributes;
  }
  return this;
}

// ~UPCGDeleteAttributesSettings @ 149b59000

void __thiscall
UPCGDeleteAttributesSettings::~UPCGDeleteAttributesSettings(UPCGDeleteAttributesSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGDeleteAttributesSettings__6B_;
  pFVar1 = (this->SelectedAttributes).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149b6ad50

TSharedPtr<IPCGElement,1> * __thiscall
UPCGDeleteAttributesSettings::CreateElement
          (UPCGDeleteAttributesSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGDeleteAttributesElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGDeleteAttributesElement__6B_;
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

// GetAdditionalTitleInformation @ 149b8cc50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
UPCGDeleteAttributesSettings::GetAdditionalTitleInformation
          (UPCGDeleteAttributesSettings *this,FString *__return_storage_ptr__)

{
  FText *pFVar1;
  FString *pFVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  int iVar7;
  undefined1 local_res8 [8];
  FString local_48;
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  if (this->Operation == KeepSelectedAttributes) {
    pwVar6 = L"Keep";
    pwVar5 = L"OperationKeep";
LAB_149b8ccaf:
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_28,L"PCGDeleteAttributesElement",pwVar5,pwVar6);
    pFVar2 = FText::ToString(pFVar1);
    if (&local_48 != pFVar2) {
      iVar7 = (pFVar2->Data).ArrayNum;
      pFVar4 = (pFVar2->Data).AllocatorInstance.Data;
      local_48.Data.ArrayNum = iVar7;
      if (((iVar7 != 0) || (local_48.Data.ArrayMax != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar7,local_48.Data.ArrayMax,(ForAnyElementType *)&local_48,iVar7,
                     &local_48.Data.ArrayMax), iVar7 != 0)) {
        memcpy(local_48.Data.AllocatorInstance.Data,pFVar4,(longlong)iVar7 * 2);
      }
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      (**(code **)(*(longlong *)local_28.AllocatorInstance.Data + 0x10))();
    }
  }
  else {
    if (this->Operation == DeleteSelectedAttributes) {
      pwVar6 = L"Delete";
      pwVar5 = L"OperationDelete";
      goto LAB_149b8ccaf;
    }
    `UPCGDeleteAttributesSettings::GetAdditionalTitleInformation'::__l11::<lambda_1>::operator()
              (local_res8);
  }
  if (this->bTokenizeOnWhiteSpace == false) {
    pTVar3 = PCGHelpers::GetStringArrayFromCommaSeparatedList(&local_28,&this->SelectedAttributes);
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar7 = pTVar3->ArrayNum;
    pTVar3->ArrayNum = 0;
    pTVar3->ArrayMax = 0;
    DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    local_38.AllocatorInstance.Data = local_28.AllocatorInstance.Data;
  }
  else {
    pTVar3 = PCGHelpers::GetStringArrayFromCommaSeparatedString
                       (&local_38,&this->SelectedAttributes,(FPCGContext *)0x0);
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar7 = pTVar3->ArrayNum;
    pTVar3->ArrayNum = 0;
    pTVar3->ArrayMax = 0;
    DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (iVar7 == 1) {
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s (%s)");
    DestructItems<FString,int>((FString *)pFVar4,1);
  }
  else {
    if (iVar7 == 0) {
      pFVar1 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_28,L"PCGDeleteAttributesElement",L"NoAttributes",L"None");
      FText::ToString(pFVar1);
    }
    else {
      pFVar1 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_28,L"PCGDeleteAttributesElement",L"KeepMultipleAttributes"
                          ,L"Multiple");
      FText::ToString(pFVar1);
    }
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s (%s)");
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      (**(code **)(*(longlong *)local_28.AllocatorInstance.Data + 0x10))();
    }
    DestructItems<FString,int>((FString *)pFVar4,iVar7);
    if (pFVar4 == (FScriptContainerElement *)0x0) goto LAB_149b8cea3;
  }
  FMemory::Free(pFVar4);
LAB_149b8cea3:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149b90a40

UClass * __cdecl UPCGDeleteAttributesSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDeleteAttributesSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDeleteAttributesSettings",
               &Z_Registration_Info_UClass_UPCGDeleteAttributesSettings.InnerSingleton,
               StaticRegisterNativesUPCGDeleteAttributesSettings,0xf0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGDeleteAttributesSettings>,
               InternalVTableHelperCtorCaller<UPCGDeleteAttributesSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDeleteAttributesSettings.InnerSingleton;
}

// HasDynamicPins @ 149b91ac0

bool __thiscall UPCGDeleteAttributesSettings::HasDynamicPins(UPCGDeleteAttributesSettings *this)

{
  return true;
}

// OutputPinProperties @ 149b944e0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGDeleteAttributesSettings::OutputPinProperties
          (UPCGDeleteAttributesSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// PostLoad @ 149b95a10

void __thiscall UPCGDeleteAttributesSettings::PostLoad(UPCGDeleteAttributesSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGDeleteAttributesSettings @ 149b984c0

void __cdecl UPCGDeleteAttributesSettings::StaticRegisterNativesUPCGDeleteAttributesSettings(void)

{
  return;
}

// operator() @ 150547030

bool __thiscall
`UPCGDeleteAttributesSettings::GetAdditionalTitleInformation'::__l11::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6569401561565364323>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6569401561565364323>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

