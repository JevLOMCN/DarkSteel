// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 15

// StaticClass @ 149900d40

UClass * __cdecl UPCGMetadataMakeRotatorSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataMakeRotatorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataMakeRotatorSettings",
               &Z_Registration_Info_UClass_UPCGMetadataMakeRotatorSettings.InnerSingleton,
               StaticRegisterNativesUPCGMetadataMakeRotatorSettings,0x240,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataMakeRotatorSettings>,
               InternalVTableHelperCtorCaller<UPCGMetadataMakeRotatorSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataMakeRotatorSettings.InnerSingleton;
}

// UPCGMetadataMakeRotatorSettings @ 1499c41b0

UPCGMetadataMakeRotatorSettings * __thiscall
UPCGMetadataMakeRotatorSettings::UPCGMetadataMakeRotatorSettings
          (UPCGMetadataMakeRotatorSettings *this,FVTableHelper *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource1);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource2);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource3);
  this->Operation = MakeRotFromAxes;
  return this;
}

// UPCGMetadataMakeRotatorSettings @ 1499c4210

UPCGMetadataMakeRotatorSettings * __thiscall
UPCGMetadataMakeRotatorSettings::UPCGMetadataMakeRotatorSettings
          (UPCGMetadataMakeRotatorSettings *this,FObjectInitializer *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource1);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource2);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource3);
  this->Operation = MakeRotFromAxes;
  return this;
}

// ~UPCGMetadataMakeRotatorSettings @ 1499c6a00

void __thiscall
UPCGMetadataMakeRotatorSettings::~UPCGMetadataMakeRotatorSettings
          (UPCGMetadataMakeRotatorSettings *this)

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

// ApplyPreconfiguredSettings @ 1499d3b60

void __thiscall
UPCGMetadataMakeRotatorSettings::ApplyPreconfiguredSettings
          (UPCGMetadataMakeRotatorSettings *this,FPCGPreConfiguredSettingsInfo *param_1)

{
  bool bVar1;
  UPackage *pUVar2;
  
  if (Z_Registration_Info_UEnum_EPCGMetadataMakeRotatorOp.OuterSingleton == (UEnum *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGMetadataMakeRotatorOp.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMetadataMakeRotatorOp,(UObject *)pUVar2,
                       L"EPCGMetadataMakeRotatorOp");
    if (Z_Registration_Info_UEnum_EPCGMetadataMakeRotatorOp.OuterSingleton == (UEnum *)0x0) {
      return;
    }
  }
  bVar1 = UEnum::IsValidEnumValue
                    (Z_Registration_Info_UEnum_EPCGMetadataMakeRotatorOp.OuterSingleton,
                     (longlong)*(int *)param_1);
  if (bVar1) {
    this->Operation = *(EPCGMetadataMakeRotatorOp *)param_1;
  }
  return;
}

// CreateElement @ 1499dbc10

TSharedPtr<IPCGElement,1> * __thiscall
UPCGMetadataMakeRotatorSettings::CreateElement
          (UPCGMetadataMakeRotatorSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGMetadataMakeRotatorElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGMetadataMakeRotatorElement__6B_;
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

// CreateInitialDefaultValueAttribute @ 1499dcd00

bool __thiscall
UPCGMetadataMakeRotatorSettings::CreateInitialDefaultValueAttribute
          (UPCGMetadataMakeRotatorSettings *this,FName param_1,UPCGMetadata *param_2)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  TVector<double>_u_0 local_48;
  FName local_28;
  FPCGMetadataDomainID FStack_20;
  
  if ((param_1 == PCGMetadataMakeRotatorConstants::XLabel) ||
     (param_1 == PCGMetadataMakeRotatorConstants::ForwardLabel)) {
    local_48._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
    local_48._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
    uVar2 = SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z,0);
    uVar3 = (undefined4)
            ((ulonglong)UE::Math::TVector<double>::ForwardVector.field0_0x0._16_8_ >> 0x20);
  }
  else if ((param_1 == PCGMetadataMakeRotatorConstants::YLabel) ||
          (param_1 == PCGMetadataMakeRotatorConstants::RightLabel)) {
    local_48._s_0.X = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
    local_48._s_0.Y = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
    uVar2 = SUB84(UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z,0);
    uVar3 = (undefined4)
            ((ulonglong)UE::Math::TVector<double>::RightVector.field0_0x0._16_8_ >> 0x20);
  }
  else if ((param_1 == PCGMetadataMakeRotatorConstants::ZLabel) ||
          (param_1 == PCGMetadataMakeRotatorConstants::UpLabel)) {
    local_48._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
    local_48._s_0.Y = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
    uVar2 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z,0);
    uVar3 = (undefined4)((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._16_8_ >> 0x20);
  }
  else {
    local_48._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_48._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar2 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar3 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20)
    ;
  }
  pFVar1 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0;
  local_48._s_0.Z = (double)CONCAT44(uVar3,uVar2);
  local_28.ComparisonIndex.Value = 0;
  local_28.Number = 0;
  FStack_20 = PCGMetadataDomainID::Default;
  this_00 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&FStack_20);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::CreateAttribute<UE::Math::TVector<double>_>
                       (this_00,local_28,(TVector<double> *)&local_48._s_0,true,false);
  }
  return pFVar1 != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0;
}

// GetInputPinLabel @ 1499f78e0

FName __thiscall
UPCGMetadataMakeRotatorSettings::GetInputPinLabel
          (UPCGMetadataMakeRotatorSettings *this,uint param_1)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  FName FVar11;
  FName FVar12;
  FName FVar13;
  FName FVar14;
  uint in_register_00000014;
  int in_R8D;
  
  switch(this->Operation) {
  case MakeRotFromX:
    *(FName *)CONCAT44(in_register_00000014,param_1) = PCGMetadataMakeRotatorConstants::XLabel;
    FVar13.Number = in_register_00000014;
    FVar13.ComparisonIndex.Value = param_1;
    return FVar13;
  case MakeRotFromY:
    *(FName *)CONCAT44(in_register_00000014,param_1) = PCGMetadataMakeRotatorConstants::YLabel;
    FVar12.Number = in_register_00000014;
    FVar12.ComparisonIndex.Value = param_1;
    return FVar12;
  case MakeRotFromZ:
    *(FName *)CONCAT44(in_register_00000014,param_1) = PCGMetadataMakeRotatorConstants::ZLabel;
    FVar11.Number = in_register_00000014;
    FVar11.ComparisonIndex.Value = param_1;
    return FVar11;
  case MakeRotFromXY:
    FVar14 = PCGMetadataMakeRotatorConstants::YLabel;
    if (in_R8D == 0) {
      FVar14 = PCGMetadataMakeRotatorConstants::XLabel;
    }
    *(FName *)CONCAT44(in_register_00000014,param_1) = FVar14;
    FVar10.Number = in_register_00000014;
    FVar10.ComparisonIndex.Value = param_1;
    return FVar10;
  case MakeRotFromYX:
    FVar14 = PCGMetadataMakeRotatorConstants::YLabel;
    if (in_R8D == 1) {
      FVar14 = PCGMetadataMakeRotatorConstants::XLabel;
    }
    *(FName *)CONCAT44(in_register_00000014,param_1) = FVar14;
    FVar9.Number = in_register_00000014;
    FVar9.ComparisonIndex.Value = param_1;
    return FVar9;
  case MakeRotFromXZ:
    FVar14 = PCGMetadataMakeRotatorConstants::ZLabel;
    if (in_R8D == 0) {
      FVar14 = PCGMetadataMakeRotatorConstants::XLabel;
    }
    *(FName *)CONCAT44(in_register_00000014,param_1) = FVar14;
    FVar8.Number = in_register_00000014;
    FVar8.ComparisonIndex.Value = param_1;
    return FVar8;
  case MakeRotFromZX:
    FVar14 = PCGMetadataMakeRotatorConstants::ZLabel;
    if (in_R8D == 1) {
      FVar14 = PCGMetadataMakeRotatorConstants::XLabel;
    }
    *(FName *)CONCAT44(in_register_00000014,param_1) = FVar14;
    FVar7.Number = in_register_00000014;
    FVar7.ComparisonIndex.Value = param_1;
    return FVar7;
  case MakeRotFromYZ:
    FVar14 = PCGMetadataMakeRotatorConstants::ZLabel;
    if (in_R8D == 0) {
      FVar14 = PCGMetadataMakeRotatorConstants::YLabel;
    }
    *(FName *)CONCAT44(in_register_00000014,param_1) = FVar14;
    FVar6.Number = in_register_00000014;
    FVar6.ComparisonIndex.Value = param_1;
    return FVar6;
  case MakeRotFromZY:
    FVar14 = PCGMetadataMakeRotatorConstants::ZLabel;
    if (in_R8D == 1) {
      FVar14 = PCGMetadataMakeRotatorConstants::YLabel;
    }
    *(FName *)CONCAT44(in_register_00000014,param_1) = FVar14;
    FVar5.Number = in_register_00000014;
    FVar5.ComparisonIndex.Value = param_1;
    return FVar5;
  case MakeRotFromAxes:
    break;
  case MakeRotFromAngles:
    if (in_R8D != 0) {
      FVar14 = PCGMetadataMakeRotatorConstants::YawLabel;
      if (in_R8D == 1) {
        FVar14 = PCGMetadataMakeRotatorConstants::PitchLabel;
      }
      *(FName *)CONCAT44(in_register_00000014,param_1) = FVar14;
      FVar2.Number = in_register_00000014;
      FVar2.ComparisonIndex.Value = param_1;
      return FVar2;
    }
    *(FName *)CONCAT44(in_register_00000014,param_1) = PCGMetadataMakeRotatorConstants::RollLabel;
    FVar1.Number = in_register_00000014;
    FVar1.ComparisonIndex.Value = param_1;
    return FVar1;
  default:
    *(undefined8 *)CONCAT44(in_register_00000014,param_1) = 0;
    FVar14.Number = in_register_00000014;
    FVar14.ComparisonIndex.Value = param_1;
    return FVar14;
  }
  if (in_R8D != 0) {
    FVar14 = PCGMetadataMakeRotatorConstants::UpLabel;
    if (in_R8D == 1) {
      FVar14 = PCGMetadataMakeRotatorConstants::RightLabel;
    }
    *(FName *)CONCAT44(in_register_00000014,param_1) = FVar14;
    FVar4.Number = in_register_00000014;
    FVar4.ComparisonIndex.Value = param_1;
    return FVar4;
  }
  *(FName *)CONCAT44(in_register_00000014,param_1) = PCGMetadataMakeRotatorConstants::ForwardLabel;
  FVar3.Number = in_register_00000014;
  FVar3.ComparisonIndex.Value = param_1;
  return FVar3;
}

// GetInputSource @ 1499f83e0

FPCGAttributePropertyInputSelector * __thiscall
UPCGMetadataMakeRotatorSettings::GetInputSource
          (UPCGMetadataMakeRotatorSettings *this,
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

// GetOperandNum @ 1499f9c20

uint __thiscall
UPCGMetadataMakeRotatorSettings::GetOperandNum(UPCGMetadataMakeRotatorSettings *this)

{
  switch(this->Operation) {
  case MakeRotFromX:
  case MakeRotFromY:
  case MakeRotFromZ:
    return 1;
  case MakeRotFromXY:
  case MakeRotFromYX:
  case MakeRotFromXZ:
  case MakeRotFromZX:
  case MakeRotFromYZ:
  case MakeRotFromZY:
    return 2;
  default:
    return 3;
  }
}

// GetOutputType @ 1499fa560

ushort __thiscall
UPCGMetadataMakeRotatorSettings::GetOutputType(UPCGMetadataMakeRotatorSettings *this,ushort param_1)

{
  return 0xb;
}

// GetPinInitialDefaultValueType @ 1499fa780

EPCGMetadataTypes __thiscall
UPCGMetadataMakeRotatorSettings::GetPinInitialDefaultValueType
          (UPCGMetadataMakeRotatorSettings *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  EPCGMetadataTypes EVar3;
  
  switch((char)this->_padding_) {
  case '\0':
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
  case '\x05':
  case '\x06':
  case '\a':
  case '\b':
  case '\t':
    return Vector;
  case '\n':
    return Double;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMakeRotator.cpp"
                     ,0xf1,L"");
  if (!bVar2) {
    return Unknown;
  }
  pcVar1 = (code *)swi(3);
  EVar3 = (*pcVar1)();
  return EVar3;
}

// GetPrivateStaticClass @ 1499fb990

UClass * __cdecl UPCGMetadataMakeRotatorSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataMakeRotatorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataMakeRotatorSettings",
               &Z_Registration_Info_UClass_UPCGMetadataMakeRotatorSettings.InnerSingleton,
               StaticRegisterNativesUPCGMetadataMakeRotatorSettings,0x240,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataMakeRotatorSettings>,
               InternalVTableHelperCtorCaller<UPCGMetadataMakeRotatorSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataMakeRotatorSettings.InnerSingleton;
}

// IsSupportedInputType @ 149a01120

bool __thiscall
UPCGMetadataMakeRotatorSettings::IsSupportedInputType
          (UPCGMetadataMakeRotatorSettings *this,ushort param_1,uint param_2,bool *param_3)

{
  *param_3 = false;
  if (this->Operation == MakeRotFromAngles) {
    return param_1 < 4;
  }
  return param_1 < 6;
}

// StaticRegisterNativesUPCGMetadataMakeRotatorSettings @ 149a10090

void __cdecl
UPCGMetadataMakeRotatorSettings::StaticRegisterNativesUPCGMetadataMakeRotatorSettings(void)

{
  return;
}

