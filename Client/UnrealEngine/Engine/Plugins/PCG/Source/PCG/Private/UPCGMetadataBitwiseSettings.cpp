// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 16

// StaticClass @ 149901940

UClass * __cdecl UPCGMetadataBitwiseSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataBitwiseSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataBitwiseSettings",
               &Z_Registration_Info_UClass_UPCGMetadataBitwiseSettings.InnerSingleton,
               StaticRegisterNativesUPCGMetadataBitwiseSettings,0x200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataBitwiseSettings>,
               InternalVTableHelperCtorCaller<UPCGMetadataBitwiseSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataBitwiseSettings.InnerSingleton;
}

// UPCGMetadataBitwiseSettings @ 1499c3e10

UPCGMetadataBitwiseSettings * __thiscall
UPCGMetadataBitwiseSettings::UPCGMetadataBitwiseSettings
          (UPCGMetadataBitwiseSettings *this,FVTableHelper *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  this->Operation = And;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource1);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource2);
  return this;
}

// UPCGMetadataBitwiseSettings @ 1499c3e70

UPCGMetadataBitwiseSettings * __thiscall
UPCGMetadataBitwiseSettings::UPCGMetadataBitwiseSettings
          (UPCGMetadataBitwiseSettings *this,FObjectInitializer *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  this->Operation = And;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource1);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource2);
  return this;
}

// ~UPCGMetadataBitwiseSettings @ 1499c67c0

void __thiscall
UPCGMetadataBitwiseSettings::~UPCGMetadataBitwiseSettings(UPCGMetadataBitwiseSettings *this)

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

// ApplyPreconfiguredSettings @ 1499d3a10

void __thiscall
UPCGMetadataBitwiseSettings::ApplyPreconfiguredSettings
          (UPCGMetadataBitwiseSettings *this,FPCGPreConfiguredSettingsInfo *param_1)

{
  bool bVar1;
  UPackage *pUVar2;
  
  if (Z_Registration_Info_UEnum_EPCGMetadataBitwiseOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGMetadataBitwiseOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMetadataBitwiseOperation,(UObject *)pUVar2,
                       L"EPCGMetadataBitwiseOperation");
    if (Z_Registration_Info_UEnum_EPCGMetadataBitwiseOperation.OuterSingleton == (UEnum *)0x0) {
      return;
    }
  }
  bVar1 = UEnum::IsValidEnumValue
                    (Z_Registration_Info_UEnum_EPCGMetadataBitwiseOperation.OuterSingleton,
                     (longlong)*(int *)param_1);
  if (bVar1) {
    this->Operation = *(EPCGMetadataBitwiseOperation *)param_1;
  }
  return;
}

// CreateElement @ 1499db850

TSharedPtr<IPCGElement,1> * __thiscall
UPCGMetadataBitwiseSettings::CreateElement
          (UPCGMetadataBitwiseSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGMetadataBitwiseElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGMetadataBitwiseElement__6B_;
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

// GetAdditionalTitleInformation @ 1499f3270

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FString * __thiscall
UPCGMetadataBitwiseSettings::GetAdditionalTitleInformation
          (UPCGMetadataBitwiseSettings *this,FString *__return_storage_ptr__)

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
  
  if (Z_Registration_Info_UEnum_EPCGMetadataBitwiseOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGMetadataBitwiseOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMetadataBitwiseOperation,(UObject *)pUVar1,
                       L"EPCGMetadataBitwiseOperation");
    if (Z_Registration_Info_UEnum_EPCGMetadataBitwiseOperation.OuterSingleton == (UEnum *)0x0) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
  }
  pFVar2 = UEnum::GetDisplayNameTextByValue
                     (Z_Registration_Info_UEnum_EPCGMetadataBitwiseOperation.OuterSingleton,
                      &local_28,(ulonglong)this->Operation);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"PCGMetadataBitwiseSettings",L"BitwiseOperation",L"Bitwise: {0}");
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

// GetInputPinLabel @ 1499f77b0

FName __thiscall
UPCGMetadataBitwiseSettings::GetInputPinLabel(UPCGMetadataBitwiseSettings *this,uint param_1)

{
  EPCGMetadataBitwiseOperation EVar1;
  bool bVar2;
  FName FVar3;
  uint in_register_00000014;
  FName FVar4;
  int in_R8D;
  FName local_res8;
  
  FVar4.Number = in_register_00000014;
  FVar4.ComparisonIndex.Value = param_1;
  EVar1 = this->Operation;
  if ((EVar1 == ShiftLeft) || (EVar1 == ShiftRight)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (in_R8D == 0) {
    if ((EVar1 == Not) || (FVar3 = PCGMetadataSettingsBaseConstants::DoubleInputFirstLabel, bVar2))
    {
      FVar3 = PCGPinConstants::DefaultInputLabel;
    }
    *(FName *)FVar4 = FVar3;
    return FVar4;
  }
  if (in_R8D != 1) {
    *(FName *)FVar4 = (FName)0x0;
    return FVar4;
  }
  if (bVar2) {
    FLazyName::Resolve(&PCGMetadataBitwiseConstants::ShiftInputLabel);
    *(FName *)FVar4 = local_res8;
    return FVar4;
  }
  *(FName *)FVar4 = PCGMetadataSettingsBaseConstants::DoubleInputSecondLabel;
  return FVar4;
}

// GetInputSource @ 1499f8240

FPCGAttributePropertyInputSelector * __thiscall
UPCGMetadataBitwiseSettings::GetInputSource
          (UPCGMetadataBitwiseSettings *this,
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

// GetOperandNum @ 1499f9bd0

uint __thiscall UPCGMetadataBitwiseSettings::GetOperandNum(UPCGMetadataBitwiseSettings *this)

{
  return (this->Operation != Not) + 1;
}

// GetOutputType @ 1499fa520

ushort __thiscall
UPCGMetadataBitwiseSettings::GetOutputType(UPCGMetadataBitwiseSettings *this,ushort param_1)

{
  return 3;
}

// GetPinInitialDefaultValueType @ 1499fa730

EPCGMetadataTypes __thiscall
UPCGMetadataBitwiseSettings::GetPinInitialDefaultValueType
          (UPCGMetadataBitwiseSettings *this,FName param_1)

{
  return Integer32;
}

// GetPrivateStaticClass @ 1499fb5d0

UClass * __cdecl UPCGMetadataBitwiseSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataBitwiseSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataBitwiseSettings",
               &Z_Registration_Info_UClass_UPCGMetadataBitwiseSettings.InnerSingleton,
               StaticRegisterNativesUPCGMetadataBitwiseSettings,0x200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataBitwiseSettings>,
               InternalVTableHelperCtorCaller<UPCGMetadataBitwiseSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataBitwiseSettings.InnerSingleton;
}

// IsSupportedInputType @ 149a00fb0

bool __thiscall
UPCGMetadataBitwiseSettings::IsSupportedInputType
          (UPCGMetadataBitwiseSettings *this,ushort param_1,uint param_2,bool *param_3)

{
  *param_3 = false;
  return (ushort)(param_1 - 2) < 2;
}

// PostLoad @ 149a04bc0

void __thiscall UPCGMetadataBitwiseSettings::PostLoad(UPCGMetadataBitwiseSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGMetadataBitwiseSettings @ 149a10040

void __cdecl UPCGMetadataBitwiseSettings::StaticRegisterNativesUPCGMetadataBitwiseSettings(void)

{
  return;
}

