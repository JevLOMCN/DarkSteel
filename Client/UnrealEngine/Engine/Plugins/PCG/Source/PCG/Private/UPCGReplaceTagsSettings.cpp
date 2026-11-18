// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149b9bf00

UClass * __cdecl UPCGReplaceTagsSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGReplaceTagsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGReplaceTagsSettings",
               &Z_Registration_Info_UClass_UPCGReplaceTagsSettings.InnerSingleton,
               StaticRegisterNativesUPCGReplaceTagsSettings,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGReplaceTagsSettings>,
               InternalVTableHelperCtorCaller<UPCGReplaceTagsSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGReplaceTagsSettings.InnerSingleton;
}

// UPCGReplaceTagsSettings @ 149be7fa0

UPCGReplaceTagsSettings * __thiscall
UPCGReplaceTagsSettings::UPCGReplaceTagsSettings
          (UPCGReplaceTagsSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGReplaceTagsSettings__6B_;
  (this->SelectedTags).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedTags).Data.ArrayNum = 0;
  (this->SelectedTags).Data.ArrayMax = 0;
  (this->ReplacedTags).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReplacedTags).Data.ArrayNum = 0;
  (this->ReplacedTags).Data.ArrayMax = 0;
  this->bTokenizeOnWhiteSpace = false;
  return this;
}

// UPCGReplaceTagsSettings @ 149be7ff0

UPCGReplaceTagsSettings * __thiscall
UPCGReplaceTagsSettings::UPCGReplaceTagsSettings
          (UPCGReplaceTagsSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGReplaceTagsSettings__6B_;
  (this->SelectedTags).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedTags).Data.ArrayNum = 0;
  (this->SelectedTags).Data.ArrayMax = 0;
  (this->ReplacedTags).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReplacedTags).Data.ArrayNum = 0;
  (this->ReplacedTags).Data.ArrayMax = 0;
  this->bTokenizeOnWhiteSpace = false;
  return this;
}

// ~UPCGReplaceTagsSettings @ 149bea130

void __thiscall UPCGReplaceTagsSettings::~UPCGReplaceTagsSettings(UPCGReplaceTagsSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGReplaceTagsSettings__6B_;
  pFVar1 = (this->ReplacedTags).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SelectedTags).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c05fe0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGReplaceTagsSettings::CreateElement
          (UPCGReplaceTagsSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGReplaceTagsElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGReplaceTagsElement__6B_;
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

// GetAdditionalTitleInformation @ 149c234b0

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
UPCGReplaceTagsSettings::GetAdditionalTitleInformation
          (UPCGReplaceTagsSettings *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  ForAnyElementType FVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  bool bVar7;
  FText local_58;
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  
  if (this->bTokenizeOnWhiteSpace == false) {
    pTVar3 = PCGHelpers::GetStringArrayFromCommaSeparatedList(&local_38,&this->SelectedTags);
    pFVar5 = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar6 = pTVar3->ArrayNum;
    pTVar3->ArrayNum = 0;
    pTVar3->ArrayMax = 0;
    DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
    FVar4.Data = local_38.AllocatorInstance.Data;
  }
  else {
    pTVar3 = PCGHelpers::GetStringArrayFromCommaSeparatedString
                       (&local_48,&this->SelectedTags,(FPCGContext *)0x0);
    pFVar5 = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar6 = pTVar3->ArrayNum;
    pTVar3->ArrayNum = 0;
    pTVar3->ArrayMax = 0;
    DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    FVar4.Data = local_48.AllocatorInstance.Data;
  }
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  bVar7 = this->bTokenizeOnWhiteSpace == false;
  if (bVar7) {
    pTVar3 = PCGHelpers::GetStringArrayFromCommaSeparatedList(&local_38,&this->ReplacedTags);
  }
  else {
    pTVar3 = PCGHelpers::GetStringArrayFromCommaSeparatedString
                       (&local_48,&this->ReplacedTags,(FPCGContext *)0x0);
  }
  pFVar2 = (pTVar3->AllocatorInstance).Data;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = pTVar3->ArrayNum;
  pTVar3->ArrayNum = 0;
  pTVar3->ArrayMax = 0;
  if ((bVar7) &&
     (DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum),
     local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if ((!bVar7) &&
     (DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum),
     local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_58,L"PCGReplaceTagsElement",L"MultipleEntry",L"Multiple");
  if ((iVar6 < 1) || (iVar1 < 1)) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    if (1 < iVar1) {
      FText::ToString(&local_58);
    }
    if (1 < iVar6) {
      FText::ToString(&local_58);
    }
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s -> %s");
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  DestructItems<FString,int>((FString *)pFVar2,iVar1);
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>((FString *)pFVar5,iVar6);
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149c268d0

UClass * __cdecl UPCGReplaceTagsSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGReplaceTagsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGReplaceTagsSettings",
               &Z_Registration_Info_UClass_UPCGReplaceTagsSettings.InnerSingleton,
               StaticRegisterNativesUPCGReplaceTagsSettings,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGReplaceTagsSettings>,
               InternalVTableHelperCtorCaller<UPCGReplaceTagsSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGReplaceTagsSettings.InnerSingleton;
}

// HasDynamicPins @ 149c273f0

bool __thiscall UPCGReplaceTagsSettings::HasDynamicPins(UPCGReplaceTagsSettings *this)

{
  return true;
}

// OutputPinProperties @ 149c2edd0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGReplaceTagsSettings::OutputPinProperties
          (UPCGReplaceTagsSettings *this,
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

// StaticRegisterNativesUPCGReplaceTagsSettings @ 149c355f0

void __cdecl UPCGReplaceTagsSettings::StaticRegisterNativesUPCGReplaceTagsSettings(void)

{
  return;
}

