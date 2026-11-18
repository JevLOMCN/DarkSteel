// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 16

// StaticClass @ 149a17bc0

UClass * __cdecl UPCGMetadataRotatorSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataRotatorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataRotatorSettings",
               &Z_Registration_Info_UClass_UPCGMetadataRotatorSettings.InnerSingleton,
               StaticRegisterNativesUPCGMetadataRotatorSettings,0x240,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataRotatorSettings>,
               InternalVTableHelperCtorCaller<UPCGMetadataRotatorSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataRotatorSettings.InnerSingleton;
}

// UPCGMetadataRotatorSettings @ 149ad2060

UPCGMetadataRotatorSettings * __thiscall
UPCGMetadataRotatorSettings::UPCGMetadataRotatorSettings
          (UPCGMetadataRotatorSettings *this,FVTableHelper *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->Operation = Combine;
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource1);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource2);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource3);
  return this;
}

// UPCGMetadataRotatorSettings @ 149ad20d0

UPCGMetadataRotatorSettings * __thiscall
UPCGMetadataRotatorSettings::UPCGMetadataRotatorSettings
          (UPCGMetadataRotatorSettings *this,FObjectInitializer *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->Operation = Combine;
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource1);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource2);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource3);
  return this;
}

// ~UPCGMetadataRotatorSettings @ 149ad38b0

void __thiscall
UPCGMetadataRotatorSettings::~UPCGMetadataRotatorSettings(UPCGMetadataRotatorSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  DestructItems<FString,int>
            (*(FString **)&(this->InputSource3).field_0x28,*(int *)&(this->InputSource3).field_0x30)
  ;
  pvVar1 = *(void **)&(this->InputSource3).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
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

// ApplyPreconfiguredSettings @ 149af4b30

void __thiscall
UPCGMetadataRotatorSettings::ApplyPreconfiguredSettings
          (UPCGMetadataRotatorSettings *this,FPCGPreConfiguredSettingsInfo *param_1)

{
  bool bVar1;
  UPackage *pUVar2;
  
  if (Z_Registration_Info_UEnum_EPCGMetadataRotatorOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGMetadataRotatorOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMetadataRotatorOperation,(UObject *)pUVar2,
                       L"EPCGMetadataRotatorOperation");
    if (Z_Registration_Info_UEnum_EPCGMetadataRotatorOperation.OuterSingleton == (UEnum *)0x0) {
      return;
    }
  }
  bVar1 = UEnum::IsValidEnumValue
                    (Z_Registration_Info_UEnum_EPCGMetadataRotatorOperation.OuterSingleton,
                     (longlong)*(int *)param_1);
  if (bVar1) {
    this->Operation = *(EPCGMetadataRotatorOperation *)param_1;
  }
  return;
}

// CreateElement @ 149afce30

TSharedPtr<IPCGElement,1> * __thiscall
UPCGMetadataRotatorSettings::CreateElement
          (UPCGMetadataRotatorSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGMetadataRotatorElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGMetadataRotatorElement__6B_;
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

// GetAdditionalTitleInformation @ 149b14aa0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FString * __thiscall
UPCGMetadataRotatorSettings::GetAdditionalTitleInformation
          (UPCGMetadataRotatorSettings *this,FString *__return_storage_ptr__)

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
  
  if (Z_Registration_Info_UEnum_EPCGMetadataRotatorOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGMetadataRotatorOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMetadataRotatorOperation,(UObject *)pUVar1,
                       L"EPCGMetadataRotatorOperation");
    if (Z_Registration_Info_UEnum_EPCGMetadataRotatorOperation.OuterSingleton == (UEnum *)0x0) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
  }
  pFVar2 = UEnum::GetDisplayNameTextByValue
                     (Z_Registration_Info_UEnum_EPCGMetadataRotatorOperation.OuterSingleton,
                      &local_28,(ulonglong)this->Operation);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"PCGMetadataRotatorSettings",L"RotatorOperation",L"Rotator: {0}");
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

// GetInputPinLabel @ 149b15ed0

FName __thiscall
UPCGMetadataRotatorSettings::GetInputPinLabel(UPCGMetadataRotatorSettings *this,uint param_1)

{
  EPCGMetadataRotatorOperation EVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  uint in_register_00000014;
  int in_R8D;
  
  if (in_R8D == 0) {
    EVar1 = this->Operation;
    if (((EVar1 == Invert) || (EVar1 == Normalize)) ||
       (FVar5 = PCGMetadataSettingsBaseConstants::DoubleInputFirstLabel, 99 < EVar1)) {
      FVar5 = PCGPinConstants::DefaultInputLabel;
    }
    *(FName *)CONCAT44(in_register_00000014,param_1) = FVar5;
    FVar5.Number = in_register_00000014;
    FVar5.ComparisonIndex.Value = param_1;
    return FVar5;
  }
  if (in_R8D != 1) {
    if (in_R8D != 2) {
      *(undefined8 *)CONCAT44(in_register_00000014,param_1) = 0;
      FVar2.Number = in_register_00000014;
      FVar2.ComparisonIndex.Value = param_1;
      return FVar2;
    }
    *(FName *)CONCAT44(in_register_00000014,param_1) =
         PCGMetadataSettingsBaseConstants::LerpRatioLabel;
    FVar3.Number = in_register_00000014;
    FVar3.ComparisonIndex.Value = param_1;
    return FVar3;
  }
  FVar5 = PCGMetadataSettingsBaseConstants::DoubleInputSecondLabel;
  if (99 < this->Operation) {
    FVar5 = PCGMetadataSettingsBaseConstants::TransformLabel;
  }
  *(FName *)CONCAT44(in_register_00000014,param_1) = FVar5;
  FVar4.Number = in_register_00000014;
  FVar4.ComparisonIndex.Value = param_1;
  return FVar4;
}

// GetInputSource @ 149b16320

FPCGAttributePropertyInputSelector * __thiscall
UPCGMetadataRotatorSettings::GetInputSource
          (UPCGMetadataRotatorSettings *this,
          FPCGAttributePropertyInputSelector *__return_storage_ptr__,uint param_1)

{
  FPCGAttributePropertySelector *pFVar1;
  
  if (param_1 == 0) {
    pFVar1 = (FPCGAttributePropertySelector *)&this->InputSource1;
  }
  else if (param_1 == 1) {
    pFVar1 = (FPCGAttributePropertySelector *)&this->InputSource2;
  }
  else {
    if (param_1 != 2) {
      FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(__return_storage_ptr__)
      ;
      return __return_storage_ptr__;
    }
    pFVar1 = (FPCGAttributePropertySelector *)&this->InputSource3;
  }
  FPCGAttributePropertySelector::FPCGAttributePropertySelector
            ((FPCGAttributePropertySelector *)__return_storage_ptr__,pFVar1);
  *(undefined ***)__return_storage_ptr__ = &___7FPCGAttributePropertyInputSelector__6B_;
  return __return_storage_ptr__;
}

// GetOperandNum @ 149b168a0

uint __thiscall UPCGMetadataRotatorSettings::GetOperandNum(UPCGMetadataRotatorSettings *this)

{
  EPCGMetadataRotatorOperation EVar1;
  
  EVar1 = this->Operation;
  if ((EVar1 != Invert) && (EVar1 != Normalize)) {
    return (EVar1 == Lerp) + 2;
  }
  return 1;
}

// GetPinInitialDefaultValueType @ 149b16aa0

EPCGMetadataTypes __thiscall
UPCGMetadataRotatorSettings::GetPinInitialDefaultValueType
          (UPCGMetadataRotatorSettings *this,FName param_1)

{
  EPCGMetadataTypes EVar1;
  
  if (((param_1 != PCGPinConstants::DefaultInputLabel) &&
      (param_1 != PCGMetadataSettingsBaseConstants::DoubleInputFirstLabel)) &&
     (param_1 != PCGMetadataSettingsBaseConstants::DoubleInputSecondLabel)) {
    if (param_1 == PCGMetadataSettingsBaseConstants::TransformLabel) {
      return Transform;
    }
    EVar1 = Unknown;
    if (param_1 == PCGMetadataSettingsBaseConstants::LerpRatioLabel) {
      EVar1 = Double;
    }
    return EVar1;
  }
  return Rotator;
}

// GetPrivateStaticClass @ 149b183f0

UClass * __cdecl UPCGMetadataRotatorSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataRotatorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataRotatorSettings",
               &Z_Registration_Info_UClass_UPCGMetadataRotatorSettings.InnerSingleton,
               StaticRegisterNativesUPCGMetadataRotatorSettings,0x240,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataRotatorSettings>,
               InternalVTableHelperCtorCaller<UPCGMetadataRotatorSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataRotatorSettings.InnerSingleton;
}

// IsPinDefaultValueMetadataTypeValid @ 149b1e410

bool __thiscall
UPCGMetadataRotatorSettings::IsPinDefaultValueMetadataTypeValid
          (UPCGMetadataRotatorSettings *this,FName param_1,EPCGMetadataTypes param_2)

{
  if ((param_2 < Name) && ((0x822U >> (param_2 & 0x1f) & 1) != 0)) {
    return true;
  }
  return false;
}

// IsSupportedInputType @ 149b1e450

bool __thiscall
UPCGMetadataRotatorSettings::IsSupportedInputType
          (UPCGMetadataRotatorSettings *this,ushort param_1,uint param_2,bool *param_3)

{
  if (param_2 == 2) {
    *param_3 = true;
    return param_1 < 2;
  }
  if ((param_2 == 1) && (99 < this->Operation)) {
    *param_3 = true;
    return param_1 == 8;
  }
  *param_3 = false;
  return (param_1 - 7 & 0xfffb) == 0;
}

// PostLoad @ 149b20c00

void __thiscall UPCGMetadataRotatorSettings::PostLoad(UPCGMetadataRotatorSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGMetadataRotatorSettings @ 149b2cff0

void __cdecl UPCGMetadataRotatorSettings::StaticRegisterNativesUPCGMetadataRotatorSettings(void)

{
  return;
}

