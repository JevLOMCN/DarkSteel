// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 19

// StaticClass @ 149902920

UClass * __cdecl UPCGMetadataMathsSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataMathsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataMathsSettings",
               &Z_Registration_Info_UClass_UPCGMetadataMathsSettings.InnerSingleton,
               StaticRegisterNativesUPCGMetadataMathsSettings,0x240,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGMetadataMathsSettings>,
               InternalVTableHelperCtorCaller<UPCGMetadataMathsSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataMathsSettings.InnerSingleton;
}

// UPCGMetadataMathsSettings @ 1499c4430

UPCGMetadataMathsSettings * __thiscall
UPCGMetadataMathsSettings::UPCGMetadataMathsSettings
          (UPCGMetadataMathsSettings *this,FVTableHelper *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->Operation = Add;
  this->bForceRoundingOpToInt = false;
  this->bForceOpToDouble = false;
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource1);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource2);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource3);
  return this;
}

// UPCGMetadataMathsSettings @ 1499c44a0

UPCGMetadataMathsSettings * __thiscall
UPCGMetadataMathsSettings::UPCGMetadataMathsSettings
          (UPCGMetadataMathsSettings *this,FObjectInitializer *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->Operation = Add;
  this->bForceRoundingOpToInt = false;
  this->bForceOpToDouble = false;
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource1);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource2);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource3);
  return this;
}

// ~UPCGMetadataMathsSettings @ 1499c6c00

void __thiscall
UPCGMetadataMathsSettings::~UPCGMetadataMathsSettings(UPCGMetadataMathsSettings *this)

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

// ApplyPreconfiguredSettings @ 1499d3bd0

void __thiscall
UPCGMetadataMathsSettings::ApplyPreconfiguredSettings
          (UPCGMetadataMathsSettings *this,FPCGPreConfiguredSettingsInfo *param_1)

{
  bool bVar1;
  UPackage *pUVar2;
  
  if (Z_Registration_Info_UEnum_EPCGMetadataMathsOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGMetadataMathsOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMetadataMathsOperation,(UObject *)pUVar2,
                       L"EPCGMetadataMathsOperation");
    if (Z_Registration_Info_UEnum_EPCGMetadataMathsOperation.OuterSingleton == (UEnum *)0x0) {
      return;
    }
  }
  bVar1 = UEnum::IsValidEnumValue
                    (Z_Registration_Info_UEnum_EPCGMetadataMathsOperation.OuterSingleton,
                     (longlong)*(int *)param_1);
  if (bVar1) {
    this->Operation = *(EPCGMetadataMathsOperation *)param_1;
  }
  return;
}

// CreateElement @ 1499dbe50

TSharedPtr<IPCGElement,1> * __thiscall
UPCGMetadataMathsSettings::CreateElement
          (UPCGMetadataMathsSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGMetadataMathsElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGMetadataMathsElement__6B_;
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

// GetAdditionalTitleInformation @ 1499f3570

FString * __thiscall
UPCGMetadataMathsSettings::GetAdditionalTitleInformation
          (UPCGMetadataMathsSettings *this,FString *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FText *this_00;
  FString *pFVar2;
  FText local_18;
  
  if (Z_Registration_Info_UEnum_EPCGMetadataMathsOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGMetadataMathsOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMetadataMathsOperation,(UObject *)pUVar1,
                       L"EPCGMetadataMathsOperation");
    if (Z_Registration_Info_UEnum_EPCGMetadataMathsOperation.OuterSingleton == (UEnum *)0x0) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
  }
  this_00 = UEnum::GetDisplayNameTextByValue
                      (Z_Registration_Info_UEnum_EPCGMetadataMathsOperation.OuterSingleton,&local_18
                       ,(ulonglong)this->Operation);
  pFVar2 = FText::ToString(this_00);
  ::FString::FString(__return_storage_ptr__,pFVar2);
  if (local_18.TextData.Reference == (ITextData *)0x0) {
    return __return_storage_ptr__;
  }
  (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  return __return_storage_ptr__;
}

// GetInputPinLabel @ 1499f7c00

FName __thiscall
UPCGMetadataMathsSettings::GetInputPinLabel(UPCGMetadataMathsSettings *this,uint param_1)

{
  EPCGMetadataMathsOperation EVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  uint in_register_00000014;
  int in_R8D;
  
  if (in_R8D == 0) {
    EVar1 = this->Operation;
    if ((((EVar1 >> 10 & 1) != 0) || (EVar1 == Clamp)) || ((ushort)(EVar1 - ClampMin) < 2)) {
      *(FName *)CONCAT44(in_register_00000014,param_1) = PCGPinConstants::DefaultInputLabel;
      FVar9.Number = in_register_00000014;
      FVar9.ComparisonIndex.Value = param_1;
      return FVar9;
    }
    if (((EVar1 >> 0xb & 1) != 0) || ((ushort)(EVar1 + ~Clamp) < 3)) {
      *(FName *)CONCAT44(in_register_00000014,param_1) =
           PCGMetadataSettingsBaseConstants::DoubleInputFirstLabel;
      FVar8.Number = in_register_00000014;
      FVar8.ComparisonIndex.Value = param_1;
      return FVar8;
    }
  }
  else if (in_R8D == 1) {
    EVar1 = this->Operation;
    if ((EVar1 == ClampMin) || (EVar1 == Clamp)) {
      *(FName *)CONCAT44(in_register_00000014,param_1) =
           PCGMetadataSettingsBaseConstants::ClampMinLabel;
      FVar7.Number = in_register_00000014;
      FVar7.ComparisonIndex.Value = param_1;
      return FVar7;
    }
    if (EVar1 == ClampMax) {
LAB_1499f7c2f:
      *(FName *)CONCAT44(in_register_00000014,param_1) =
           PCGMetadataSettingsBaseConstants::ClampMaxLabel;
      FVar3.Number = in_register_00000014;
      FVar3.ComparisonIndex.Value = param_1;
      return FVar3;
    }
    if (((EVar1 >> 0xb & 1) != 0) || ((EVar1 >> 0xc & 1) != 0)) {
      *(FName *)CONCAT44(in_register_00000014,param_1) =
           PCGMetadataSettingsBaseConstants::DoubleInputSecondLabel;
      FVar6.Number = in_register_00000014;
      FVar6.ComparisonIndex.Value = param_1;
      return FVar6;
    }
  }
  else if (in_R8D == 2) {
    EVar1 = this->Operation;
    if (EVar1 == Clamp) goto LAB_1499f7c2f;
    if (EVar1 == Lerp) {
      *(FName *)CONCAT44(in_register_00000014,param_1) =
           PCGMetadataSettingsBaseConstants::LerpRatioLabel;
      FVar4.Number = in_register_00000014;
      FVar4.ComparisonIndex.Value = param_1;
      return FVar4;
    }
    if ((EVar1 >> 0xc & 1) != 0) {
      *(FName *)CONCAT44(in_register_00000014,param_1) =
           PCGMetadataSettingsBaseConstants::DoubleInputThirdLabel;
      FVar5.Number = in_register_00000014;
      FVar5.ComparisonIndex.Value = param_1;
      return FVar5;
    }
  }
  *(undefined8 *)CONCAT44(in_register_00000014,param_1) = 0;
  FVar2.Number = in_register_00000014;
  FVar2.ComparisonIndex.Value = param_1;
  return FVar2;
}

// GetInputSource @ 1499f8540

FPCGAttributePropertyInputSelector * __thiscall
UPCGMetadataMathsSettings::GetInputSource
          (UPCGMetadataMathsSettings *this,
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

// GetOperandNum @ 1499f9d00

uint __thiscall UPCGMetadataMathsSettings::GetOperandNum(UPCGMetadataMathsSettings *this)

{
  EPCGMetadataMathsOperation EVar1;
  
  EVar1 = this->Operation;
  if ((EVar1 >> 10 & 1) != 0) {
    return 1;
  }
  if ((EVar1 >> 0xb & 1) != 0) {
    return 2;
  }
  return -(uint)((EVar1 & TernaryOp) != 0) & 3;
}

// GetOutputType @ 1499fa590

ushort __thiscall
UPCGMetadataMathsSettings::GetOutputType(UPCGMetadataMathsSettings *this,ushort param_1)

{
  EPCGMetadataMathsOperation EVar1;
  
  if (param_1 < 0xff) {
    if (((param_1 < 2) && (this->bForceRoundingOpToInt != false)) &&
       ((EVar1 = this->Operation, EVar1 == Round ||
        (((EVar1 - Truncate & 0xfffa) == 0 && (EVar1 != Round)))))) {
      return 3;
    }
    if ((((ushort)(param_1 - 2) < 2) && (this->bForceOpToDouble != false)) &&
       ((((EVar1 = this->Operation, EVar1 == Divide || (EVar1 == Sqrt)) || (EVar1 == Pow)) ||
        (EVar1 == Lerp)))) {
      return 1;
    }
  }
  return param_1;
}

// GetPinInitialDefaultValueType @ 1499fa890

EPCGMetadataTypes __thiscall
UPCGMetadataMathsSettings::GetPinInitialDefaultValueType
          (UPCGMetadataMathsSettings *this,FName param_1)

{
  return Double;
}

// GetPrivateStaticClass @ 1499fbbd0

UClass * __cdecl UPCGMetadataMathsSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataMathsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataMathsSettings",
               &Z_Registration_Info_UClass_UPCGMetadataMathsSettings.InnerSingleton,
               StaticRegisterNativesUPCGMetadataMathsSettings,0x240,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGMetadataMathsSettings>,
               InternalVTableHelperCtorCaller<UPCGMetadataMathsSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataMathsSettings.InnerSingleton;
}

// IsPinDefaultValueMetadataTypeValid @ 149a00a80

bool __thiscall
UPCGMetadataMathsSettings::IsPinDefaultValueMetadataTypeValid
          (UPCGMetadataMathsSettings *this,FName param_1,EPCGMetadataTypes param_2)

{
  EPCGMetadataMathsOperation *this_00;
  code *pcVar1;
  char cVar2;
  uint uVar3;
  undefined1 local_res8 [8];
  
  this_00 = &this[-1].Operation;
  if ((short)this->_padding_ != 0x80b) {
    pcVar1 = *(code **)(*(longlong *)this_00 + 0x518);
    uVar3 = UPCGMetadataSettingsBase::GetInputPinIndex((UPCGMetadataSettingsBase *)this_00,param_1);
    cVar2 = (*pcVar1)(this_00,param_2,uVar3,local_res8);
    if (cVar2 == '\0') {
      return false;
    }
  }
  return true;
}

// IsSupportedInputType @ 149a011f0

bool __thiscall
UPCGMetadataMathsSettings::IsSupportedInputType
          (UPCGMetadataMathsSettings *this,ushort param_1,uint param_2,bool *param_3)

{
  *param_3 = false;
  if (this->Operation == Set) {
    return param_1 < 0xf;
  }
  if ((param_1 != 10) && (6 < param_1)) {
    return false;
  }
  return true;
}

// PostLoad @ 149a04c30

void __thiscall UPCGMetadataMathsSettings::PostLoad(UPCGMetadataMathsSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// ShouldForceOutputToDouble @ 149a0fd80

bool __thiscall
UPCGMetadataMathsSettings::ShouldForceOutputToDouble(UPCGMetadataMathsSettings *this,ushort param_1)

{
  EPCGMetadataMathsOperation EVar1;
  
  if ((((ushort)(param_1 - 2) < 2) && (this->bForceOpToDouble != false)) &&
     ((EVar1 = this->Operation, EVar1 == Divide ||
      (((EVar1 == Sqrt || (EVar1 == Pow)) || (EVar1 == Lerp)))))) {
    return true;
  }
  return false;
}

// ShouldForceOutputToInt @ 149a0fdd0

bool __thiscall
UPCGMetadataMathsSettings::ShouldForceOutputToInt(UPCGMetadataMathsSettings *this,ushort param_1)

{
  EPCGMetadataMathsOperation EVar1;
  
  if (((param_1 < 2) && (this->bForceRoundingOpToInt != false)) &&
     ((EVar1 = this->Operation, EVar1 == Round ||
      (((EVar1 - Truncate & 0xfffa) == 0 && (EVar1 != Round)))))) {
    return true;
  }
  return false;
}

// StaticRegisterNativesUPCGMetadataMathsSettings @ 149a100c0

void __cdecl UPCGMetadataMathsSettings::StaticRegisterNativesUPCGMetadataMathsSettings(void)

{
  return;
}

