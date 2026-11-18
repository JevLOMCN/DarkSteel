// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 15

// StaticClass @ 149902b40

UClass * __cdecl UPCGMetadataMakeTransformSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataMakeTransformSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataMakeTransformSettings",
               &Z_Registration_Info_UClass_UPCGMetadataMakeTransformSettings.InnerSingleton,
               StaticRegisterNativesUPCGMetadataMakeTransformSettings,0x238,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataMakeTransformSettings>,
               InternalVTableHelperCtorCaller<UPCGMetadataMakeTransformSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataMakeTransformSettings.InnerSingleton;
}

// UPCGMetadataMakeTransformSettings @ 1499c4270

UPCGMetadataMakeTransformSettings * __thiscall
UPCGMetadataMakeTransformSettings::UPCGMetadataMakeTransformSettings
          (UPCGMetadataMakeTransformSettings *this,FVTableHelper *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource1);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource2);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource3);
  return this;
}

// UPCGMetadataMakeTransformSettings @ 1499c42d0

UPCGMetadataMakeTransformSettings * __thiscall
UPCGMetadataMakeTransformSettings::UPCGMetadataMakeTransformSettings
          (UPCGMetadataMakeTransformSettings *this,FObjectInitializer *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource1);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource2);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource3);
  return this;
}

// ~UPCGMetadataMakeTransformSettings @ 1499c6aa0

void __thiscall
UPCGMetadataMakeTransformSettings::~UPCGMetadataMakeTransformSettings
          (UPCGMetadataMakeTransformSettings *this)

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

// CreateElement @ 1499dbcd0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGMetadataMakeTransformSettings::CreateElement
          (UPCGMetadataMakeTransformSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__
          )

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
         ___7__TIntrusiveReferenceController_VFPCGMetadataMakeTransformElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGMetadataMakeTransformElement__6B_;
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

// CreateInitialDefaultValueAttribute @ 1499dce00

bool __thiscall
UPCGMetadataMakeTransformSettings::CreateInitialDefaultValueAttribute
          (UPCGMetadataMakeTransformSettings *this,FName param_1,UPCGMetadata *param_2)

{
  bool bVar1;
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *pFVar2;
  FPCGMetadataDomainID FStack_20;
  
  if (param_1 == PCGMetadataTransformConstants::Scale) {
    pFVar2 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0;
    FStack_20 = PCGMetadataDomainID::Default;
    this_00 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&FStack_20);
    if (this_00 != (FPCGMetadataDomain *)0x0) {
      pFVar2 = FPCGMetadataDomain::CreateAttribute<UE::Math::TVector<double>_>
                         (this_00,(FName)0x0,&UE::Math::TVector<double>::OneVector,true,false);
    }
    return pFVar2 != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0;
  }
  bVar1 = IPCGSettingsDefaultValueProvider::CreateInitialDefaultValueAttribute
                    ((IPCGSettingsDefaultValueProvider *)this,param_1,param_2);
  return bVar1;
}

// GetInputPinLabel @ 1499f7a60

FName __thiscall
UPCGMetadataMakeTransformSettings::GetInputPinLabel
          (UPCGMetadataMakeTransformSettings *this,uint param_1)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  uint in_register_00000014;
  int in_R8D;
  
  if (in_R8D == 0) {
    *(FName *)CONCAT44(in_register_00000014,param_1) = PCGMetadataTransformConstants::Translation;
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
    *(FName *)CONCAT44(in_register_00000014,param_1) = PCGMetadataTransformConstants::Scale;
    FVar2.Number = in_register_00000014;
    FVar2.ComparisonIndex.Value = param_1;
    return FVar2;
  }
  *(FName *)CONCAT44(in_register_00000014,param_1) = PCGMetadataTransformConstants::Rotation;
  FVar3.Number = in_register_00000014;
  FVar3.ComparisonIndex.Value = param_1;
  return FVar3;
}

// GetInputSource @ 1499f8450

FPCGAttributePropertyInputSelector * __thiscall
UPCGMetadataMakeTransformSettings::GetInputSource
          (UPCGMetadataMakeTransformSettings *this,
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

// GetOperandNum @ 1499f9c90

uint __thiscall
UPCGMetadataMakeTransformSettings::GetOperandNum(UPCGMetadataMakeTransformSettings *this)

{
  return 3;
}

// GetOutputType @ 1499fa570

ushort __thiscall
UPCGMetadataMakeTransformSettings::GetOutputType
          (UPCGMetadataMakeTransformSettings *this,ushort param_1)

{
  return 8;
}

// GetPinInitialDefaultValueType @ 1499fa820

EPCGMetadataTypes __thiscall
UPCGMetadataMakeTransformSettings::GetPinInitialDefaultValueType
          (UPCGMetadataMakeTransformSettings *this,FName param_1)

{
  EPCGMetadataTypes EVar1;
  
  if ((param_1 != PCGMetadataTransformConstants::Translation) &&
     (param_1 != PCGMetadataTransformConstants::Scale)) {
    EVar1 = Unknown;
    if (param_1 == PCGMetadataTransformConstants::Rotation) {
      EVar1 = Rotator;
    }
    return EVar1;
  }
  return Vector;
}

// GetPrivateStaticClass @ 1499fba50

UClass * __cdecl UPCGMetadataMakeTransformSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataMakeTransformSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataMakeTransformSettings",
               &Z_Registration_Info_UClass_UPCGMetadataMakeTransformSettings.InnerSingleton,
               StaticRegisterNativesUPCGMetadataMakeTransformSettings,0x238,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataMakeTransformSettings>,
               InternalVTableHelperCtorCaller<UPCGMetadataMakeTransformSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataMakeTransformSettings.InnerSingleton;
}

// IsSupportedInputType @ 149a01150

bool __thiscall
UPCGMetadataMakeTransformSettings::IsSupportedInputType
          (UPCGMetadataMakeTransformSettings *this,ushort param_1,uint param_2,bool *param_3)

{
  if (param_2 == 1) {
    *param_3 = true;
    return (param_1 - 7 & 0xfffb) == 0;
  }
  *param_3 = false;
  return param_1 < 7;
}

// PostLoad @ 149a04c10

void __thiscall UPCGMetadataMakeTransformSettings::PostLoad(UPCGMetadataMakeTransformSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGMetadataMakeTransformSettings @ 149a100a0

void __cdecl
UPCGMetadataMakeTransformSettings::StaticRegisterNativesUPCGMetadataMakeTransformSettings(void)

{
  return;
}

