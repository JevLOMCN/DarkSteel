// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 16

// StaticClass @ 1499033f0

UClass * __cdecl UPCGMetadataCompareSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataCompareSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataCompareSettings",
               &Z_Registration_Info_UClass_UPCGMetadataCompareSettings.InnerSingleton,
               StaticRegisterNativesUPCGMetadataCompareSettings,0x208,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataCompareSettings>,
               InternalVTableHelperCtorCaller<UPCGMetadataCompareSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataCompareSettings.InnerSingleton;
}

// UPCGMetadataCompareSettings @ 1499c40d0

UPCGMetadataCompareSettings * __thiscall
UPCGMetadataCompareSettings::UPCGMetadataCompareSettings
          (UPCGMetadataCompareSettings *this,FVTableHelper *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  this->Operation = Equal;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource1);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource2);
  this->Tolerance = 1e-08;
  return this;
}

// UPCGMetadataCompareSettings @ 1499c4140

UPCGMetadataCompareSettings * __thiscall
UPCGMetadataCompareSettings::UPCGMetadataCompareSettings
          (UPCGMetadataCompareSettings *this,FObjectInitializer *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  this->Operation = Equal;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource1);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource2);
  this->Tolerance = 1e-08;
  return this;
}

// ~UPCGMetadataCompareSettings @ 1499c6980

void __thiscall
UPCGMetadataCompareSettings::~UPCGMetadataCompareSettings(UPCGMetadataCompareSettings *this)

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

// ApplyPreconfiguredSettings @ 1499d3af0

void __thiscall
UPCGMetadataCompareSettings::ApplyPreconfiguredSettings
          (UPCGMetadataCompareSettings *this,FPCGPreConfiguredSettingsInfo *param_1)

{
  bool bVar1;
  UPackage *pUVar2;
  
  if (Z_Registration_Info_UEnum_EPCGMetadataCompareOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGMetadataCompareOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMetadataCompareOperation,(UObject *)pUVar2,
                       L"EPCGMetadataCompareOperation");
    if (Z_Registration_Info_UEnum_EPCGMetadataCompareOperation.OuterSingleton == (UEnum *)0x0) {
      return;
    }
  }
  bVar1 = UEnum::IsValidEnumValue
                    (Z_Registration_Info_UEnum_EPCGMetadataCompareOperation.OuterSingleton,
                     (longlong)*(int *)param_1);
  if (bVar1) {
    this->Operation = *(EPCGMetadataCompareOperation *)param_1;
  }
  return;
}

// CreateElement @ 1499dbb50

TSharedPtr<IPCGElement,1> * __thiscall
UPCGMetadataCompareSettings::CreateElement
          (UPCGMetadataCompareSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGMetadataCompareElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGMetadataCompareElement__6B_;
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

// GetAdditionalTitleInformation @ 1499f3470

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FString * __thiscall
UPCGMetadataCompareSettings::GetAdditionalTitleInformation
          (UPCGMetadataCompareSettings *this,FString *__return_storage_ptr__)

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
  
  if (Z_Registration_Info_UEnum_EPCGMetadataCompareOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGMetadataCompareOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMetadataCompareOperation,(UObject *)pUVar1,
                       L"EPCGMetadataCompareOperation");
    if (Z_Registration_Info_UEnum_EPCGMetadataCompareOperation.OuterSingleton == (UEnum *)0x0) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
  }
  pFVar2 = UEnum::GetDisplayNameTextByValue
                     (Z_Registration_Info_UEnum_EPCGMetadataCompareOperation.OuterSingleton,
                      &local_28,(ulonglong)this->Operation);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"PCGMetadataCompareSettings",L"CompareWithOperation",
                      L"Compare: {0}");
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

// GetInputPinLabel @ 1499f78a0

FName __thiscall
UPCGMetadataCompareSettings::GetInputPinLabel(UPCGMetadataCompareSettings *this,uint param_1)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  uint in_register_00000014;
  int in_R8D;
  
  if (in_R8D == 0) {
    *(FName *)CONCAT44(in_register_00000014,param_1) =
         PCGMetadataSettingsBaseConstants::DoubleInputFirstLabel;
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

// GetInputSource @ 1499f8380

FPCGAttributePropertyInputSelector * __thiscall
UPCGMetadataCompareSettings::GetInputSource
          (UPCGMetadataCompareSettings *this,
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

// GetOperandNum @ 1499f9c10

uint __thiscall UPCGMetadataCompareSettings::GetOperandNum(UPCGMetadataCompareSettings *this)

{
  return 2;
}

// GetOutputType @ 1499fa550

ushort __thiscall
UPCGMetadataCompareSettings::GetOutputType(UPCGMetadataCompareSettings *this,ushort param_1)

{
  return 10;
}

// GetPinInitialDefaultValueType @ 1499fa770

EPCGMetadataTypes __thiscall
UPCGMetadataCompareSettings::GetPinInitialDefaultValueType
          (UPCGMetadataCompareSettings *this,FName param_1)

{
  return Double;
}

// GetPrivateStaticClass @ 1499fb8d0

UClass * __cdecl UPCGMetadataCompareSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataCompareSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataCompareSettings",
               &Z_Registration_Info_UClass_UPCGMetadataCompareSettings.InnerSingleton,
               StaticRegisterNativesUPCGMetadataCompareSettings,0x208,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataCompareSettings>,
               InternalVTableHelperCtorCaller<UPCGMetadataCompareSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataCompareSettings.InnerSingleton;
}

// IsSupportedInputType @ 149a01050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UPCGMetadataCompareSettings::IsSupportedInputType
          (UPCGMetadataCompareSettings *this,ushort param_1,uint param_2,bool *param_3)

{
  *param_3 = false;
  if ((this->Operation != Equal) && (this->Operation != NotEqual)) {
    switch(param_1) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 9:
    case 10:
    case 0xc:
    case 0xd:
    case 0xe:
      return true;
    default:
      return false;
    }
  }
  return param_1 < 0xf;
}

// PostLoad @ 149a04c00

void __thiscall UPCGMetadataCompareSettings::PostLoad(UPCGMetadataCompareSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGMetadataCompareSettings @ 149a10080

void __cdecl UPCGMetadataCompareSettings::StaticRegisterNativesUPCGMetadataCompareSettings(void)

{
  return;
}

