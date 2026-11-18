// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 17

// StaticClass @ 149a16200

UClass * __cdecl UPCGMetadataVectorSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataVectorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataVectorSettings",
               &Z_Registration_Info_UClass_UPCGMetadataVectorSettings.InnerSingleton,
               StaticRegisterNativesUPCGMetadataVectorSettings,0x240,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataVectorSettings>,
               InternalVTableHelperCtorCaller<UPCGMetadataVectorSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataVectorSettings.InnerSingleton;
}

// UPCGMetadataVectorSettings @ 149ad23c0

UPCGMetadataVectorSettings * __thiscall
UPCGMetadataVectorSettings::UPCGMetadataVectorSettings
          (UPCGMetadataVectorSettings *this,FVTableHelper *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->Operation = Cross;
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource1);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource2);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource3);
  return this;
}

// UPCGMetadataVectorSettings @ 149ad2430

UPCGMetadataVectorSettings * __thiscall
UPCGMetadataVectorSettings::UPCGMetadataVectorSettings
          (UPCGMetadataVectorSettings *this,FObjectInitializer *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->Operation = Cross;
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource1);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource2);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource3);
  return this;
}

// ~UPCGMetadataVectorSettings @ 149ad3b10

void __thiscall
UPCGMetadataVectorSettings::~UPCGMetadataVectorSettings(UPCGMetadataVectorSettings *this)

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

// ApplyPreconfiguredSettings @ 149af4cf0

void __thiscall
UPCGMetadataVectorSettings::ApplyPreconfiguredSettings
          (UPCGMetadataVectorSettings *this,FPCGPreConfiguredSettingsInfo *param_1)

{
  bool bVar1;
  UPackage *pUVar2;
  
  if (Z_Registration_Info_UEnum_EPCGMetadataVectorOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGMetadataVectorOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMetadataVectorOperation,(UObject *)pUVar2,
                       L"EPCGMetadataVectorOperation");
    if (Z_Registration_Info_UEnum_EPCGMetadataVectorOperation.OuterSingleton == (UEnum *)0x0) {
      return;
    }
  }
  bVar1 = UEnum::IsValidEnumValue
                    (Z_Registration_Info_UEnum_EPCGMetadataVectorOperation.OuterSingleton,
                     (longlong)*(int *)param_1);
  if (bVar1) {
    this->Operation = *(EPCGMetadataVectorOperation *)param_1;
  }
  return;
}

// CreateElement @ 149afd130

TSharedPtr<IPCGElement,1> * __thiscall
UPCGMetadataVectorSettings::CreateElement
          (UPCGMetadataVectorSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGMetadataVectorElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGMetadataVectorElement__6B_;
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

// GetAdditionalTitleInformation @ 149b14ea0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FString * __thiscall
UPCGMetadataVectorSettings::GetAdditionalTitleInformation
          (UPCGMetadataVectorSettings *this,FString *__return_storage_ptr__)

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
  
  if (Z_Registration_Info_UEnum_EPCGMetadataVectorOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGMetadataVectorOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMetadataVectorOperation,(UObject *)pUVar1,
                       L"EPCGMetadataVectorOperation");
    if (Z_Registration_Info_UEnum_EPCGMetadataVectorOperation.OuterSingleton == (UEnum *)0x0) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
  }
  pFVar2 = UEnum::GetDisplayNameTextByValue
                     (Z_Registration_Info_UEnum_EPCGMetadataVectorOperation.OuterSingleton,&local_28
                      ,(ulonglong)this->Operation);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"PCGMetadataVectorSettings",L"VectorOperation",L"Vector: {0}");
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

// GetInputPinLabel @ 149b160c0

FName __thiscall
UPCGMetadataVectorSettings::GetInputPinLabel(UPCGMetadataVectorSettings *this,uint param_1)

{
  EPCGMetadataVectorOperation EVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  uint in_register_00000014;
  int in_R8D;
  
  if (in_R8D == 0) {
    EVar1 = this->Operation;
    if ((EVar1 != Normalize) && ((EVar1 < Length || ((ushort)(EVar1 + ~RotateAroundAxis) < 0x5d))))
    {
      *(FName *)CONCAT44(in_register_00000014,param_1) =
           PCGMetadataSettingsBaseConstants::DoubleInputFirstLabel;
      FVar7.Number = in_register_00000014;
      FVar7.ComparisonIndex.Value = param_1;
      return FVar7;
    }
    *(FName *)CONCAT44(in_register_00000014,param_1) = PCGPinConstants::DefaultInputLabel;
    FVar8.Number = in_register_00000014;
    FVar8.ComparisonIndex.Value = param_1;
    return FVar8;
  }
  if (in_R8D != 1) {
    if (in_R8D != 2) {
      *(undefined8 *)CONCAT44(in_register_00000014,param_1) = 0;
      FVar2.Number = in_register_00000014;
      FVar2.ComparisonIndex.Value = param_1;
      return FVar2;
    }
    *(FName *)CONCAT44(in_register_00000014,param_1) = PCGMetadataVectorConstants::AngleLabel;
    FVar3.Number = in_register_00000014;
    FVar3.ComparisonIndex.Value = param_1;
    return FVar3;
  }
  if (this->Operation == RotateAroundAxis) {
    *(FName *)CONCAT44(in_register_00000014,param_1) = PCGMetadataVectorConstants::AxisLabel;
    FVar4.Number = in_register_00000014;
    FVar4.ComparisonIndex.Value = param_1;
    return FVar4;
  }
  if (99 < this->Operation) {
    *(FName *)CONCAT44(in_register_00000014,param_1) =
         PCGMetadataSettingsBaseConstants::TransformLabel;
    FVar5.Number = in_register_00000014;
    FVar5.ComparisonIndex.Value = param_1;
    return FVar5;
  }
  *(FName *)CONCAT44(in_register_00000014,param_1) =
       PCGMetadataSettingsBaseConstants::DoubleInputSecondLabel;
  FVar6.Number = in_register_00000014;
  FVar6.ComparisonIndex.Value = param_1;
  return FVar6;
}

// GetInputSource @ 149b164d0

FPCGAttributePropertyInputSelector * __thiscall
UPCGMetadataVectorSettings::GetInputSource
          (UPCGMetadataVectorSettings *this,
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

// GetOperandNum @ 149b16980

uint __thiscall UPCGMetadataVectorSettings::GetOperandNum(UPCGMetadataVectorSettings *this)

{
  EPCGMetadataVectorOperation EVar1;
  
  EVar1 = this->Operation;
  if ((EVar1 != Normalize) && (EVar1 != Length)) {
    return (EVar1 == RotateAroundAxis) + 2;
  }
  return 1;
}

// GetOutputType @ 149b16a30

ushort __thiscall
UPCGMetadataVectorSettings::GetOutputType(UPCGMetadataVectorSettings *this,ushort param_1)

{
  EPCGMetadataVectorOperation EVar1;
  ushort uVar2;
  
  EVar1 = this->Operation;
  if ((EVar1 != Dot) && ((EVar1 - Distance & 0xfffd) != 0)) {
    if (EVar1 == Cross) {
      uVar2 = 1;
      if (param_1 != 4) {
        uVar2 = param_1;
      }
      return uVar2;
    }
    return param_1;
  }
  return 1;
}

// GetPinInitialDefaultValueType @ 149b16b30

EPCGMetadataTypes __thiscall
UPCGMetadataVectorSettings::GetPinInitialDefaultValueType
          (UPCGMetadataVectorSettings *this,FName param_1)

{
  EPCGMetadataTypes EVar1;
  
  if (((short)this->_padding_ != 6) ||
     (EVar1 = Double, param_1 != PCGMetadataVectorConstants::AngleLabel)) {
    EVar1 = Vector;
  }
  return EVar1;
}

// GetPrivateStaticClass @ 149b186f0

UClass * __cdecl UPCGMetadataVectorSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataVectorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataVectorSettings",
               &Z_Registration_Info_UClass_UPCGMetadataVectorSettings.InnerSingleton,
               StaticRegisterNativesUPCGMetadataVectorSettings,0x240,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataVectorSettings>,
               InternalVTableHelperCtorCaller<UPCGMetadataVectorSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataVectorSettings.InnerSingleton;
}

// IsPinDefaultValueEnabled @ 149b1e3a0

bool __thiscall
UPCGMetadataVectorSettings::IsPinDefaultValueEnabled(UPCGMetadataVectorSettings *this,FName param_1)

{
  bool bVar1;
  FName *pFVar2;
  undefined1 local_res8 [8];
  
  if (99 < (ushort)this->_padding_) {
    pFVar2 = (FName *)(**(code **)(*(longlong *)&this[-1].Operation + 0x4f8))
                                (&this[-1].Operation,local_res8,1);
    if (param_1 == *pFVar2) {
      return false;
    }
  }
  bVar1 = UPCGMetadataSettingsBase::IsPinDefaultValueEnabled
                    ((UPCGMetadataSettingsBase *)this,param_1);
  return bVar1;
}

// IsSupportedInputType @ 149b1e500

bool __thiscall
UPCGMetadataVectorSettings::IsSupportedInputType
          (UPCGMetadataVectorSettings *this,ushort param_1,uint param_2,bool *param_3)

{
  *param_3 = false;
  if (this->Operation == RotateAroundAxis) {
    if (param_2 == 2) {
      *param_3 = true;
      return param_1 < 2;
    }
  }
  else if ((99 < this->Operation) && (param_2 == 1)) {
    *param_3 = true;
    return param_1 == 8;
  }
  return (ushort)(param_1 - 4) < 3;
}

// PostLoad @ 149b20c30

void __thiscall UPCGMetadataVectorSettings::PostLoad(UPCGMetadataVectorSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGMetadataVectorSettings @ 149b2d030

void __cdecl UPCGMetadataVectorSettings::StaticRegisterNativesUPCGMetadataVectorSettings(void)

{
  return;
}

