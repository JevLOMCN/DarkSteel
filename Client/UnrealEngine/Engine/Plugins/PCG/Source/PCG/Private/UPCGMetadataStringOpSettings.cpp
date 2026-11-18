// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 15

// StaticClass @ 149a180c0

UClass * __cdecl UPCGMetadataStringOpSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataStringOpSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataStringOpSettings",
               &Z_Registration_Info_UClass_UPCGMetadataStringOpSettings.InnerSingleton,
               StaticRegisterNativesUPCGMetadataStringOpSettings,0x240,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataStringOpSettings>,
               InternalVTableHelperCtorCaller<UPCGMetadataStringOpSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataStringOpSettings.InnerSingleton;
}

// UPCGMetadataStringOpSettings @ 149ad2140

UPCGMetadataStringOpSettings * __thiscall
UPCGMetadataStringOpSettings::UPCGMetadataStringOpSettings
          (UPCGMetadataStringOpSettings *this,FVTableHelper *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  this->Operation = Append;
  (this->SearchCase).Value = '\0';
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource1);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource2);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource3);
  return this;
}

// UPCGMetadataStringOpSettings @ 149ad21b0

UPCGMetadataStringOpSettings * __thiscall
UPCGMetadataStringOpSettings::UPCGMetadataStringOpSettings
          (UPCGMetadataStringOpSettings *this,FObjectInitializer *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  this->Operation = Append;
  (this->SearchCase).Value = '\0';
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource1);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource2);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource3);
  return this;
}

// ~UPCGMetadataStringOpSettings @ 149ad3950

void __thiscall
UPCGMetadataStringOpSettings::~UPCGMetadataStringOpSettings(UPCGMetadataStringOpSettings *this)

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

// ApplyPreconfiguredSettings @ 149af4ba0

void __thiscall
UPCGMetadataStringOpSettings::ApplyPreconfiguredSettings
          (UPCGMetadataStringOpSettings *this,FPCGPreConfiguredSettingsInfo *param_1)

{
  bool bVar1;
  UPackage *pUVar2;
  
  if (Z_Registration_Info_UEnum_EPCGMetadataStringOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGMetadataStringOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMetadataStringOperation,(UObject *)pUVar2,
                       L"EPCGMetadataStringOperation");
    if (Z_Registration_Info_UEnum_EPCGMetadataStringOperation.OuterSingleton == (UEnum *)0x0) {
      return;
    }
  }
  bVar1 = UEnum::IsValidEnumValue
                    (Z_Registration_Info_UEnum_EPCGMetadataStringOperation.OuterSingleton,
                     (longlong)*(int *)param_1);
  if (bVar1) {
    this->Operation = *(EPCGMetadataStringOperation *)param_1;
  }
  return;
}

// CreateElement @ 149afcef0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGMetadataStringOpSettings::CreateElement
          (UPCGMetadataStringOpSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGMetadataStringOpElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGMetadataStringOpElement__6B_;
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

// GetAdditionalTitleInformation @ 149b14ba0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FString * __thiscall
UPCGMetadataStringOpSettings::GetAdditionalTitleInformation
          (UPCGMetadataStringOpSettings *this,FString *__return_storage_ptr__)

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
  
  if (Z_Registration_Info_UEnum_EPCGMetadataStringOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGMetadataStringOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMetadataStringOperation,(UObject *)pUVar1,
                       L"EPCGMetadataStringOperation");
    if (Z_Registration_Info_UEnum_EPCGMetadataStringOperation.OuterSingleton == (UEnum *)0x0) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
  }
  pFVar2 = UEnum::GetDisplayNameTextByValue
                     (Z_Registration_Info_UEnum_EPCGMetadataStringOperation.OuterSingleton,&local_28
                      ,(ulonglong)this->Operation);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"PCGMetadataStringOpSettings",L"StringOperation",L"String: {0}");
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

// GetInputPinLabel @ 149b15f50

FName __thiscall
UPCGMetadataStringOpSettings::GetInputPinLabel(UPCGMetadataStringOpSettings *this,uint param_1)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  uint in_register_00000014;
  int in_R8D;
  
  switch(this->Operation) {
  case Append:
  case Substring:
  case Matches:
    if (in_R8D == 0) {
      *(FName *)CONCAT44(in_register_00000014,param_1) =
           PCGMetadataSettingsBaseConstants::DoubleInputFirstLabel;
      FVar6.Number = in_register_00000014;
      FVar6.ComparisonIndex.Value = param_1;
      return FVar6;
    }
    if (in_R8D == 1) {
      *(FName *)CONCAT44(in_register_00000014,param_1) =
           PCGMetadataSettingsBaseConstants::DoubleInputSecondLabel;
      FVar3.Number = in_register_00000014;
      FVar3.ComparisonIndex.Value = param_1;
      return FVar3;
    }
  case Replace:
    if (in_R8D == 0) {
switchD_149b15f6e_caseD_4:
      *(FName *)CONCAT44(in_register_00000014,param_1) = PCGPinConstants::DefaultInputLabel;
      FVar2.Number = in_register_00000014;
      FVar2.ComparisonIndex.Value = param_1;
      return FVar2;
    }
    if (in_R8D == 1) {
      *(FName *)CONCAT44(in_register_00000014,param_1) = PCGMetadataStringOpConstants::ToFindLabel;
      FVar5.Number = in_register_00000014;
      FVar5.ComparisonIndex.Value = param_1;
      return FVar5;
    }
    if (in_R8D == 2) {
      *(FName *)CONCAT44(in_register_00000014,param_1) =
           PCGMetadataStringOpConstants::ToReplaceLabel;
      FVar4.Number = in_register_00000014;
      FVar4.ComparisonIndex.Value = param_1;
      return FVar4;
    }
  default:
    *(undefined8 *)CONCAT44(in_register_00000014,param_1) = 0;
    FVar1.Number = in_register_00000014;
    FVar1.ComparisonIndex.Value = param_1;
    return FVar1;
  case ToUpper:
  case ToLower:
  case TrimStart:
  case TrimEnd:
  case TrimStartAndEnd:
    goto switchD_149b15f6e_caseD_4;
  }
}

// GetInputSource @ 149b16390

FPCGAttributePropertyInputSelector * __thiscall
UPCGMetadataStringOpSettings::GetInputSource
          (UPCGMetadataStringOpSettings *this,
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

// GetOperandNum @ 149b168d0

uint __thiscall UPCGMetadataStringOpSettings::GetOperandNum(UPCGMetadataStringOpSettings *this)

{
  switch(this->Operation) {
  case Append:
  case Substring:
  case Matches:
    return 2;
  case Replace:
    return 3;
  case ToUpper:
  case ToLower:
  case TrimStart:
  case TrimEnd:
  case TrimStartAndEnd:
    return 1;
  default:
    return 0;
  }
}

// GetOutputType @ 149b16a10

ushort __thiscall
UPCGMetadataStringOpSettings::GetOutputType(UPCGMetadataStringOpSettings *this,ushort param_1)

{
  return 9;
}

// GetPinInitialDefaultValueType @ 149b16af0

EPCGMetadataTypes __thiscall
UPCGMetadataStringOpSettings::GetPinInitialDefaultValueType
          (UPCGMetadataStringOpSettings *this,FName param_1)

{
  return String;
}

// GetPrivateStaticClass @ 149b184b0

UClass * __cdecl UPCGMetadataStringOpSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataStringOpSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataStringOpSettings",
               &Z_Registration_Info_UClass_UPCGMetadataStringOpSettings.InnerSingleton,
               StaticRegisterNativesUPCGMetadataStringOpSettings,0x240,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataStringOpSettings>,
               InternalVTableHelperCtorCaller<UPCGMetadataStringOpSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataStringOpSettings.InnerSingleton;
}

// IsSupportedInputType @ 149b1e4a0

bool __thiscall
UPCGMetadataStringOpSettings::IsSupportedInputType
          (UPCGMetadataStringOpSettings *this,ushort param_1,uint param_2,bool *param_3)

{
  *param_3 = false;
  return true;
}

// StaticRegisterNativesUPCGMetadataStringOpSettings @ 149b2d000

void __cdecl UPCGMetadataStringOpSettings::StaticRegisterNativesUPCGMetadataStringOpSettings(void)

{
  return;
}

