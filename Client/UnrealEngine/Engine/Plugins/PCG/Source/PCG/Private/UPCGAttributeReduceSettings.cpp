// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 13

// StaticClass @ 149a17e00

UClass * __cdecl UPCGAttributeReduceSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAttributeReduceSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAttributeReduceSettings",
               &Z_Registration_Info_UClass_UPCGAttributeReduceSettings.InnerSingleton,
               StaticRegisterNativesUPCGAttributeReduceSettings,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGAttributeReduceSettings>,
               InternalVTableHelperCtorCaller<UPCGAttributeReduceSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAttributeReduceSettings.InnerSingleton;
}

// UPCGAttributeReduceSettings @ 149ad0ec0

UPCGAttributeReduceSettings * __thiscall
UPCGAttributeReduceSettings::UPCGAttributeReduceSettings
          (UPCGAttributeReduceSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGAttributeReduceSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource);
  this->bWriteToDataDomain = false;
  (this->OutputAttributeName).ComparisonIndex = 0;
  (this->OutputAttributeName).Number = 0;
  this->Operation = Average;
  ::FString::FString(&this->JoinDelimiter,", ");
  this->bMergeOutputAttributes = false;
  return this;
}

// UPCGAttributeReduceSettings @ 149ad0f30

UPCGAttributeReduceSettings * __thiscall
UPCGAttributeReduceSettings::UPCGAttributeReduceSettings
          (UPCGAttributeReduceSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGAttributeReduceSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource);
  this->bWriteToDataDomain = false;
  (this->OutputAttributeName).ComparisonIndex = 0;
  (this->OutputAttributeName).Number = 0;
  this->Operation = Average;
  ::FString::FString(&this->JoinDelimiter,", ");
  this->bMergeOutputAttributes = false;
  return this;
}

// ~UPCGAttributeReduceSettings @ 149ad3310

void __thiscall
UPCGAttributeReduceSettings::~UPCGAttributeReduceSettings(UPCGAttributeReduceSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGAttributeReduceSettings__6B_;
  pFVar1 = (this->JoinDelimiter).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->InputSource).field_0x28,*(int *)&(this->InputSource).field_0x30);
  pvVar2 = *(void **)&(this->InputSource).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// ApplyPreconfiguredSettings @ 149af4a70

void __thiscall
UPCGAttributeReduceSettings::ApplyPreconfiguredSettings
          (UPCGAttributeReduceSettings *this,FPCGPreConfiguredSettingsInfo *param_1)

{
  bool bVar1;
  UPackage *pUVar2;
  
  if (Z_Registration_Info_UEnum_EPCGAttributeReduceOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGAttributeReduceOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGAttributeReduceOperation,(UObject *)pUVar2,
                       L"EPCGAttributeReduceOperation");
    if (Z_Registration_Info_UEnum_EPCGAttributeReduceOperation.OuterSingleton == (UEnum *)0x0) {
      return;
    }
  }
  bVar1 = UEnum::IsValidEnumValue
                    (Z_Registration_Info_UEnum_EPCGAttributeReduceOperation.OuterSingleton,
                     (longlong)*(int *)param_1);
  if (bVar1) {
    this->Operation = *(EPCGAttributeReduceOperation *)param_1;
  }
  return;
}

// CreateElement @ 149afc2f0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGAttributeReduceSettings::CreateElement
          (UPCGAttributeReduceSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGAttributeReduceElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGAttributeReduceElement__6B_;
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

// GetAdditionalTitleInformation @ 149b13b80

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FString * __thiscall
UPCGAttributeReduceSettings::GetAdditionalTitleInformation
          (UPCGAttributeReduceSettings *this,FString *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FName *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  FString *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  FName local_res18;
  FName local_res20;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (Z_Registration_Info_UEnum_EPCGAttributeReduceOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGAttributeReduceOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGAttributeReduceOperation,(UObject *)pUVar1,
                       L"EPCGAttributeReduceOperation");
    if (Z_Registration_Info_UEnum_EPCGAttributeReduceOperation.OuterSingleton == (UEnum *)0x0) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
  }
  UEnum::GetDisplayNameTextByValue
            (Z_Registration_Info_UEnum_EPCGAttributeReduceOperation.OuterSingleton,&local_88,
             (longlong)(int)this->Operation);
  FPCGAttributePropertySelector::GetName((FPCGAttributePropertySelector *)&this->InputSource);
  if (local_res20 == (FName)0x0) {
    pFVar2 = ::FName::FName(&local_res18,L"LastAttribute");
    local_res20 = *pFVar2;
  }
  if ((local_res20 == this->OutputAttributeName) || (this->OutputAttributeName == (FName)0x0)) {
    local_78.TextData.Reference = local_88.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 8))
                (local_88.TextData.Reference,&local_res18);
    }
    local_78.Flags = local_88.Flags;
    pFVar3 = FText::FromName(&local_28,&local_res20);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_68,L"PCGAttributeReduceElement",L"ReduceInplaceWithOperation",
                        L"Reduce {0}: {1}");
    pFVar6 = FTextFormat::FTextFormat((FTextFormat *)&local_38,pFVar4,Default);
    pFVar3 = FText::Format<FText,FText>(&local_58,pFVar6,pFVar3,&local_78);
    pFVar7 = FText::ToString(pFVar3);
    ::FString::FString(__return_storage_ptr__,pFVar7);
    TVar8.Reference = local_68.TextData.Reference;
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      TVar8.Reference = local_68.TextData.Reference;
    }
  }
  else {
    local_78.TextData.Reference = local_88.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 8))
                (local_88.TextData.Reference,&local_res18);
    }
    local_78.Flags = local_88.Flags;
    pFVar3 = FText::FromName(&local_48,&this->OutputAttributeName);
    pFVar4 = FText::FromName(&local_38,&local_res20);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"PCGAttributeReduceElement",L"ReduceInputToOutputWithOperation",
                        L"Reduce {0} to {1}: {2}");
    pFVar6 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar5,Default);
    pFVar3 = FText::Format<FText,FText,FText>(&local_68,pFVar6,pFVar4,pFVar3,&local_78);
    pFVar7 = FText::ToString(pFVar3);
    ::FString::FString(__return_storage_ptr__,pFVar7);
    TVar8.Reference = local_58.TextData.Reference;
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      TVar8.Reference = local_58.TextData.Reference;
    }
  }
  if (TVar8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
  }
  if (local_88.TextData.Reference == (ITextData *)0x0) {
    return __return_storage_ptr__;
  }
  (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149b17730

UClass * __cdecl UPCGAttributeReduceSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAttributeReduceSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAttributeReduceSettings",
               &Z_Registration_Info_UClass_UPCGAttributeReduceSettings.InnerSingleton,
               StaticRegisterNativesUPCGAttributeReduceSettings,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGAttributeReduceSettings>,
               InternalVTableHelperCtorCaller<UPCGAttributeReduceSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAttributeReduceSettings.InnerSingleton;
}

// HasDynamicPins @ 149b1a710

bool __thiscall UPCGAttributeReduceSettings::HasDynamicPins(UPCGAttributeReduceSettings *this)

{
  return this->bWriteToDataDomain;
}

// InputPinProperties @ 149b1c2a0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGAttributeReduceSettings::InputPinProperties
          (UPCGAttributeReduceSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGPinProperties *pFVar5;
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
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  pFVar5->PinStatus = Required;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b20000

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGAttributeReduceSettings::OutputPinProperties
          (UPCGAttributeReduceSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  EPCGDataType EVar5;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  EVar5 = Param;
  if (this->bWriteToDataDomain != false) {
    EVar5 = Any;
  }
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,EVar5);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// PostLoad @ 149b20b70

void __thiscall UPCGAttributeReduceSettings::PostLoad(UPCGAttributeReduceSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGAttributeReduceSettings @ 149b2cee0

void __cdecl UPCGAttributeReduceSettings::StaticRegisterNativesUPCGAttributeReduceSettings(void)

{
  return;
}

