// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 16

// StaticClass @ 149902330

UClass * __cdecl UPCGMetadataBooleanSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataBooleanSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataBooleanSettings",
               &Z_Registration_Info_UClass_UPCGMetadataBooleanSettings.InnerSingleton,
               StaticRegisterNativesUPCGMetadataBooleanSettings,0x200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataBooleanSettings>,
               InternalVTableHelperCtorCaller<UPCGMetadataBooleanSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataBooleanSettings.InnerSingleton;
}

// UPCGMetadataBooleanSettings @ 1499c3ed0

UPCGMetadataBooleanSettings * __thiscall
UPCGMetadataBooleanSettings::UPCGMetadataBooleanSettings
          (UPCGMetadataBooleanSettings *this,FVTableHelper *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  this->Operation = And;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource1);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource2);
  return this;
}

// UPCGMetadataBooleanSettings @ 1499c3f30

UPCGMetadataBooleanSettings * __thiscall
UPCGMetadataBooleanSettings::UPCGMetadataBooleanSettings
          (UPCGMetadataBooleanSettings *this,FObjectInitializer *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  this->Operation = And;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource1);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource2);
  return this;
}

// ~UPCGMetadataBooleanSettings @ 1499c6840

void __thiscall
UPCGMetadataBooleanSettings::~UPCGMetadataBooleanSettings(UPCGMetadataBooleanSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  DestructItems<FString,int>
            (*(FString **)&(this->InputSource2).field_0x28,*(int *)&(this->InputSource2).field_0x30)
  ;
  pvVar1 = *(void **)&(this->InputSource2).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->InputSource1).field_0x28,*(int *)&(this->InputSource1).field_0x30)
  ;
  pvVar1 = *(void **)&(this->InputSource1).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGMetadataSettingsBase::~UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this);
  return;
}

// ApplyPreconfiguredSettings @ 1499d3a80

void __thiscall
UPCGMetadataBooleanSettings::ApplyPreconfiguredSettings
          (UPCGMetadataBooleanSettings *this,FPCGPreConfiguredSettingsInfo *param_1)

{
  bool bVar1;
  UPackage *pUVar2;
  
  if (Z_Registration_Info_UEnum_EPCGMetadataBooleanOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGMetadataBooleanOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMetadataBooleanOperation,(UObject *)pUVar2,
                       L"EPCGMetadataBooleanOperation");
    if (Z_Registration_Info_UEnum_EPCGMetadataBooleanOperation.OuterSingleton == (UEnum *)0x0) {
      return;
    }
  }
  bVar1 = UEnum::IsValidEnumValue
                    (Z_Registration_Info_UEnum_EPCGMetadataBooleanOperation.OuterSingleton,
                     (longlong)*(int *)param_1);
  if (bVar1) {
    this->Operation = *(EPCGMetadataBooleanOperation *)param_1;
  }
  return;
}

// CreateElement @ 1499db910

TSharedPtr<IPCGElement,1> * __thiscall
UPCGMetadataBooleanSettings::CreateElement
          (UPCGMetadataBooleanSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGMetadataBooleanElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGMetadataBooleanElement__6B_;
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

// GetAdditionalTitleInformation @ 1499f3370

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FString * __thiscall
UPCGMetadataBooleanSettings::GetAdditionalTitleInformation
          (UPCGMetadataBooleanSettings *this,FString *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FText *pFVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FString *pFVar5;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  if (Z_Registration_Info_UEnum_EPCGMetadataBooleanOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGMetadataBooleanOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMetadataBooleanOperation,(UObject *)pUVar1,
                       L"EPCGMetadataBooleanOperation");
    if (Z_Registration_Info_UEnum_EPCGMetadataBooleanOperation.OuterSingleton == (UEnum *)0x0) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
  }
  pFVar2 = UEnum::GetDisplayNameTextByValue
                     (Z_Registration_Info_UEnum_EPCGMetadataBooleanOperation.OuterSingleton,
                      &local_28,(ulonglong)this->Operation);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"PCGMetadataBooleanSettings",L"BooleanOperation",L"Boolean: {0}");
  pFVar4 = FTextFormat::FTextFormat(&local_18,pFVar3,Default);
  pFVar2 = FText::Format<FText>(&local_48,pFVar4,pFVar2);
  pFVar5 = FText::ToString(pFVar2);
  ::FString::FString(__return_storage_ptr__,pFVar5);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference == (ITextData *)0x0) {
    return __return_storage_ptr__;
  }
  (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  return __return_storage_ptr__;
}

// GetInputPinLabel @ 1499f7850

FName __thiscall
UPCGMetadataBooleanSettings::GetInputPinLabel(UPCGMetadataBooleanSettings *this,uint param_1)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  uint in_register_00000014;
  int in_R8D;
  
  if (in_R8D == 0) {
    FVar3 = PCGMetadataSettingsBaseConstants::DoubleInputFirstLabel;
    if (this->Operation == Not) {
      FVar3 = PCGPinConstants::DefaultInputLabel;
    }
    *(FName *)CONCAT44(in_register_00000014,param_1) = FVar3;
    FVar3.Number = in_register_00000014;
    FVar3.ComparisonIndex.Value = param_1;
    return FVar3;
  }
  if (in_R8D != 1) {
    *(undefined8 *)CONCAT44(in_register_00000014,param_1) = 0;
    FVar1.Number = in_register_00000014;
    FVar1.ComparisonIndex.Value = param_1;
    return FVar1;
  }
  *(FName *)CONCAT44(in_register_00000014,param_1) =
       PCGMetadataSettingsBaseConstants::DoubleInputSecondLabel;
  FVar2.Number = in_register_00000014;
  FVar2.ComparisonIndex.Value = param_1;
  return FVar2;
}

// GetInputSource @ 1499f82a0

FPCGAttributePropertyInputSelector * __thiscall
UPCGMetadataBooleanSettings::GetInputSource
          (UPCGMetadataBooleanSettings *this,
          FPCGAttributePropertyInputSelector *__return_storage_ptr__,uint param_1)

{
  FPCGAttributePropertySelector *pFVar1;
  
  if (param_1 == 0) {
    pFVar1 = (FPCGAttributePropertySelector *)&this->InputSource1;
  }
  else {
    if (param_1 != 1) {
      FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(__return_storage_ptr__)
      ;
      return __return_storage_ptr__;
    }
    pFVar1 = (FPCGAttributePropertySelector *)&this->InputSource2;
  }
  FPCGAttributePropertySelector::FPCGAttributePropertySelector
            ((FPCGAttributePropertySelector *)__return_storage_ptr__,pFVar1);
  *(undefined ***)__return_storage_ptr__ = &___7FPCGAttributePropertyInputSelector__6B_;
  return __return_storage_ptr__;
}

// GetOperandNum @ 1499f9bf0

uint __thiscall UPCGMetadataBooleanSettings::GetOperandNum(UPCGMetadataBooleanSettings *this)

{
  return (this->Operation != Not) + 1;
}

// GetOutputType @ 1499fa530

ushort __thiscall
UPCGMetadataBooleanSettings::GetOutputType(UPCGMetadataBooleanSettings *this,ushort param_1)

{
  return 10;
}

// GetPinInitialDefaultValueType @ 1499fa740

EPCGMetadataTypes __thiscall
UPCGMetadataBooleanSettings::GetPinInitialDefaultValueType
          (UPCGMetadataBooleanSettings *this,FName param_1)

{
  return Boolean;
}

// GetPrivateStaticClass @ 1499fb690

UClass * __cdecl UPCGMetadataBooleanSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataBooleanSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataBooleanSettings",
               &Z_Registration_Info_UClass_UPCGMetadataBooleanSettings.InnerSingleton,
               StaticRegisterNativesUPCGMetadataBooleanSettings,0x200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataBooleanSettings>,
               InternalVTableHelperCtorCaller<UPCGMetadataBooleanSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataBooleanSettings.InnerSingleton;
}

// IsSupportedInputType @ 149a00fd0

bool __thiscall
UPCGMetadataBooleanSettings::IsSupportedInputType
          (UPCGMetadataBooleanSettings *this,ushort param_1,uint param_2,bool *param_3)

{
  *param_3 = false;
  if ((param_1 < 0xf) &&
     ((PCG::Private::BroadcastableTypes.Values[param_1][10] != false ||
      (PCG::Private::ConstructibleTypes.Values[10][param_1] != false)))) {
    return true;
  }
  return false;
}

// PostLoad @ 149a04bd0

void __thiscall UPCGMetadataBooleanSettings::PostLoad(UPCGMetadataBooleanSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGMetadataBooleanSettings @ 149a10050

void __cdecl UPCGMetadataBooleanSettings::StaticRegisterNativesUPCGMetadataBooleanSettings(void)

{
  return;
}

