// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149b300e0

UClass * __cdecl UPCGDeleteTagsSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDeleteTagsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDeleteTagsSettings",
               &Z_Registration_Info_UClass_UPCGDeleteTagsSettings.InnerSingleton,
               StaticRegisterNativesUPCGDeleteTagsSettings,0xe8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGDeleteTagsSettings>,
               InternalVTableHelperCtorCaller<UPCGDeleteTagsSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDeleteTagsSettings.InnerSingleton;
}

// UPCGDeleteTagsSettings @ 149b56d50

UPCGDeleteTagsSettings * __thiscall
UPCGDeleteTagsSettings::UPCGDeleteTagsSettings(UPCGDeleteTagsSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->Operation = DeleteSelectedTags;
  this->_padding_ = (longlong)&___7UPCGDeleteTagsSettings__6B_;
  (this->SelectedTags).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedTags).Data.ArrayNum = 0;
  (this->SelectedTags).Data.ArrayMax = 0;
  this->bTokenizeOnWhiteSpace = false;
  this->Operator = Equal;
  return this;
}

// UPCGDeleteTagsSettings @ 149b56da0

UPCGDeleteTagsSettings * __thiscall
UPCGDeleteTagsSettings::UPCGDeleteTagsSettings
          (UPCGDeleteTagsSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->Operation = DeleteSelectedTags;
  this->_padding_ = (longlong)&___7UPCGDeleteTagsSettings__6B_;
  (this->SelectedTags).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedTags).Data.ArrayNum = 0;
  (this->SelectedTags).Data.ArrayMax = 0;
  this->bTokenizeOnWhiteSpace = false;
  this->Operator = Equal;
  return this;
}

// ~UPCGDeleteTagsSettings @ 149b59040

void __thiscall UPCGDeleteTagsSettings::~UPCGDeleteTagsSettings(UPCGDeleteTagsSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGDeleteTagsSettings__6B_;
  pFVar1 = (this->SelectedTags).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149b6ae10

TSharedPtr<IPCGElement,1> * __thiscall
UPCGDeleteTagsSettings::CreateElement
          (UPCGDeleteTagsSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGDeleteTagsElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGDeleteTagsElement__6B_;
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

// GetAdditionalTitleInformation @ 149b8ced0

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
UPCGDeleteTagsSettings::GetAdditionalTitleInformation
          (UPCGDeleteTagsSettings *this,FString *__return_storage_ptr__)

{
  UPackage *pUVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FText local_48;
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  
  if (Z_Registration_Info_UEnum_EPCGTagFilterOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGTagFilterOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGTagFilterOperation,(UObject *)pUVar1,
                       L"EPCGTagFilterOperation");
    if (Z_Registration_Info_UEnum_EPCGTagFilterOperation.OuterSingleton == (UEnum *)0x0) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
  }
  UEnum::GetDisplayNameTextByValue
            (Z_Registration_Info_UEnum_EPCGTagFilterOperation.OuterSingleton,&local_48,
             (longlong)(int)this->Operation);
  if (this->bTokenizeOnWhiteSpace == false) {
    pTVar2 = PCGHelpers::GetStringArrayFromCommaSeparatedList(&local_28,&this->SelectedTags);
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar5 = pTVar2->ArrayNum;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
    DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    local_38.AllocatorInstance.Data = local_28.AllocatorInstance.Data;
  }
  else {
    pTVar2 = PCGHelpers::GetStringArrayFromCommaSeparatedString
                       (&local_38,&this->SelectedTags,(FPCGContext *)0x0);
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar5 = pTVar2->ArrayNum;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
    DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (iVar5 == 1) {
    FText::ToString(&local_48);
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s (%s)");
    DestructItems<FString,int>((FString *)pFVar4,1);
  }
  else {
    pFVar3 = FText::ToString(&local_48);
    ::FString::FString(__return_storage_ptr__,pFVar3);
    DestructItems<FString,int>((FString *)pFVar4,iVar5);
    if (pFVar4 == (FScriptContainerElement *)0x0) goto LAB_149b8d03d;
  }
  FMemory::Free(pFVar4);
LAB_149b8d03d:
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149b90b00

UClass * __cdecl UPCGDeleteTagsSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDeleteTagsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDeleteTagsSettings",
               &Z_Registration_Info_UClass_UPCGDeleteTagsSettings.InnerSingleton,
               StaticRegisterNativesUPCGDeleteTagsSettings,0xe8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGDeleteTagsSettings>,
               InternalVTableHelperCtorCaller<UPCGDeleteTagsSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDeleteTagsSettings.InnerSingleton;
}

// HasDynamicPins @ 149b91ad0

bool __thiscall UPCGDeleteTagsSettings::HasDynamicPins(UPCGDeleteTagsSettings *this)

{
  return true;
}

// OutputPinProperties @ 149b94570

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGDeleteTagsSettings::OutputPinProperties
          (UPCGDeleteTagsSettings *this,
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

// StaticRegisterNativesUPCGDeleteTagsSettings @ 149b984d0

void __cdecl UPCGDeleteTagsSettings::StaticRegisterNativesUPCGDeleteTagsSettings(void)

{
  return;
}

