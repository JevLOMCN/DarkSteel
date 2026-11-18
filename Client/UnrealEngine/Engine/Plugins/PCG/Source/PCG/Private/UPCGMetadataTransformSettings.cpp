// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 17

// StaticClass @ 149a18790

UClass * __cdecl UPCGMetadataTransformSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataTransformSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataTransformSettings",
               &Z_Registration_Info_UClass_UPCGMetadataTransformSettings.InnerSingleton,
               StaticRegisterNativesUPCGMetadataTransformSettings,0x240,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataTransformSettings>,
               InternalVTableHelperCtorCaller<UPCGMetadataTransformSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataTransformSettings.InnerSingleton;
}

// UPCGMetadataTransformSettings @ 149ad2220

UPCGMetadataTransformSettings * __thiscall
UPCGMetadataTransformSettings::UPCGMetadataTransformSettings
          (UPCGMetadataTransformSettings *this,FVTableHelper *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  this->Operation = Compose;
  this->TransformLerpMode = QuatInterp;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource1);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource2);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource3);
  return this;
}

// UPCGMetadataTransformSettings @ 149ad2290

UPCGMetadataTransformSettings * __thiscall
UPCGMetadataTransformSettings::UPCGMetadataTransformSettings
          (UPCGMetadataTransformSettings *this,FObjectInitializer *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  this->Operation = Compose;
  this->TransformLerpMode = QuatInterp;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource1);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource2);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource3);
  return this;
}

// ~UPCGMetadataTransformSettings @ 149ad39f0

void __thiscall
UPCGMetadataTransformSettings::~UPCGMetadataTransformSettings(UPCGMetadataTransformSettings *this)

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

// ApplyPreconfiguredSettings @ 149af4c10

void __thiscall
UPCGMetadataTransformSettings::ApplyPreconfiguredSettings
          (UPCGMetadataTransformSettings *this,FPCGPreConfiguredSettingsInfo *param_1)

{
  bool bVar1;
  UPackage *pUVar2;
  
  if (Z_Registration_Info_UEnum_EPCGMetadataTransformOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGMetadataTransformOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMetadataTransformOperation,(UObject *)pUVar2,
                       L"EPCGMetadataTransformOperation");
    if (Z_Registration_Info_UEnum_EPCGMetadataTransformOperation.OuterSingleton == (UEnum *)0x0) {
      return;
    }
  }
  bVar1 = UEnum::IsValidEnumValue
                    (Z_Registration_Info_UEnum_EPCGMetadataTransformOperation.OuterSingleton,
                     (longlong)*(int *)param_1);
  if (bVar1) {
    this->Operation = *(EPCGMetadataTransformOperation *)param_1;
  }
  return;
}

// CreateElement @ 149afcfb0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGMetadataTransformSettings::CreateElement
          (UPCGMetadataTransformSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGMetadataTransformElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGMetadataTransformElement__6B_;
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

// GetAdditionalTitleInformation @ 149b14ca0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FString * __thiscall
UPCGMetadataTransformSettings::GetAdditionalTitleInformation
          (UPCGMetadataTransformSettings *this,FString *__return_storage_ptr__)

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
  
  if (Z_Registration_Info_UEnum_EPCGMetadataTransformOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGMetadataTransformOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMetadataTransformOperation,(UObject *)pUVar1,
                       L"EPCGMetadataTransformOperation");
    if (Z_Registration_Info_UEnum_EPCGMetadataTransformOperation.OuterSingleton == (UEnum *)0x0) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
  }
  pFVar2 = UEnum::GetDisplayNameTextByValue
                     (Z_Registration_Info_UEnum_EPCGMetadataTransformOperation.OuterSingleton,
                      &local_28,(ulonglong)this->Operation);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"PCGMetadataTransformSettings",L"TransformOperation",
                      L"Transform: {0}");
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

// GetInputPinLabel @ 149b16010

FName __thiscall
UPCGMetadataTransformSettings::GetInputPinLabel(UPCGMetadataTransformSettings *this,uint param_1)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  uint in_register_00000014;
  int in_R8D;
  
  if (in_R8D == 0) {
    FVar4 = PCGMetadataSettingsBaseConstants::DoubleInputFirstLabel;
    if (this->Operation == Invert) {
      FVar4 = PCGPinConstants::DefaultInputLabel;
    }
    *(FName *)CONCAT44(in_register_00000014,param_1) = FVar4;
    FVar4.Number = in_register_00000014;
    FVar4.ComparisonIndex.Value = param_1;
    return FVar4;
  }
  if (in_R8D != 1) {
    if (in_R8D != 2) {
      *(undefined8 *)CONCAT44(in_register_00000014,param_1) = 0;
      FVar1.Number = in_register_00000014;
      FVar1.ComparisonIndex.Value = param_1;
      return FVar1;
    }
    *(FName *)CONCAT44(in_register_00000014,param_1) =
         PCGMetadataSettingsBaseConstants::LerpRatioLabel;
    FVar2.Number = in_register_00000014;
    FVar2.ComparisonIndex.Value = param_1;
    return FVar2;
  }
  *(FName *)CONCAT44(in_register_00000014,param_1) =
       PCGMetadataSettingsBaseConstants::DoubleInputSecondLabel;
  FVar3.Number = in_register_00000014;
  FVar3.ComparisonIndex.Value = param_1;
  return FVar3;
}

// GetInputSource @ 149b16400

FPCGAttributePropertyInputSelector * __thiscall
UPCGMetadataTransformSettings::GetInputSource
          (UPCGMetadataTransformSettings *this,
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

// GetOperandNum @ 149b16930

uint __thiscall UPCGMetadataTransformSettings::GetOperandNum(UPCGMetadataTransformSettings *this)

{
  if (this->Operation == Invert) {
    return 1;
  }
  return (this->Operation == Lerp) + 2;
}

// GetPinDefaultValueType @ 149b16a80

EPCGMetadataTypes __thiscall
UPCGMetadataTransformSettings::GetPinDefaultValueType
          (UPCGMetadataTransformSettings *this,FName param_1)

{
  EPCGMetadataTypes EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000149b16a83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(this->_padding_ + 0x40))();
  return EVar1;
}

// GetPinInitialDefaultValueType @ 149b16b00

EPCGMetadataTypes __thiscall
UPCGMetadataTransformSettings::GetPinInitialDefaultValueType
          (UPCGMetadataTransformSettings *this,FName param_1)

{
  EPCGMetadataTypes EVar1;
  
  EVar1 = Transform;
  if (param_1 == PCGMetadataSettingsBaseConstants::LerpRatioLabel) {
    EVar1 = Double;
  }
  return EVar1;
}

// GetPrivateStaticClass @ 149b18570

UClass * __cdecl UPCGMetadataTransformSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataTransformSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataTransformSettings",
               &Z_Registration_Info_UClass_UPCGMetadataTransformSettings.InnerSingleton,
               StaticRegisterNativesUPCGMetadataTransformSettings,0x240,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataTransformSettings>,
               InternalVTableHelperCtorCaller<UPCGMetadataTransformSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataTransformSettings.InnerSingleton;
}

// IsPinDefaultValueEnabled @ 149b1e370

bool __thiscall
UPCGMetadataTransformSettings::IsPinDefaultValueEnabled
          (UPCGMetadataTransformSettings *this,FName param_1)

{
  bool bVar1;
  
  if (param_1 == PCGMetadataSettingsBaseConstants::LerpRatioLabel) {
    bVar1 = UPCGMetadataSettingsBase::IsPinDefaultValueEnabled
                      ((UPCGMetadataSettingsBase *)this,param_1);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// IsSupportedInputType @ 149b1e4b0

bool __thiscall
UPCGMetadataTransformSettings::IsSupportedInputType
          (UPCGMetadataTransformSettings *this,ushort param_1,uint param_2,bool *param_3)

{
  if (param_2 == 2) {
    *param_3 = true;
    return param_1 < 2;
  }
  *param_3 = false;
  return param_1 == 8;
}

// PostLoad @ 149b20c10

void __thiscall UPCGMetadataTransformSettings::PostLoad(UPCGMetadataTransformSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGMetadataTransformSettings @ 149b2d010

void __cdecl UPCGMetadataTransformSettings::StaticRegisterNativesUPCGMetadataTransformSettings(void)

{
  return;
}

