// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 14

// StaticClass @ 149901f10

UClass * __cdecl UPCGMetadataMakeVectorSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataMakeVectorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataMakeVectorSettings",
               &Z_Registration_Info_UClass_UPCGMetadataMakeVectorSettings.InnerSingleton,
               StaticRegisterNativesUPCGMetadataMakeVectorSettings,0x280,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataMakeVectorSettings>,
               InternalVTableHelperCtorCaller<UPCGMetadataMakeVectorSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataMakeVectorSettings.InnerSingleton;
}

// UPCGMetadataMakeVectorSettings @ 1499c4330

UPCGMetadataMakeVectorSettings * __thiscall
UPCGMetadataMakeVectorSettings::UPCGMetadataMakeVectorSettings
          (UPCGMetadataMakeVectorSettings *this,FVTableHelper *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource1);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource2);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource3);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource4);
  this->OutputType = Vector2;
  this->MakeVector3Op = ThreeValues;
  this->MakeVector4Op = FourValues;
  return this;
}

// UPCGMetadataMakeVectorSettings @ 1499c43b0

UPCGMetadataMakeVectorSettings * __thiscall
UPCGMetadataMakeVectorSettings::UPCGMetadataMakeVectorSettings
          (UPCGMetadataMakeVectorSettings *this,FObjectInitializer *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource1);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource2);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource3);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource4);
  this->OutputType = Vector2;
  this->MakeVector3Op = ThreeValues;
  this->MakeVector4Op = FourValues;
  return this;
}

// ~UPCGMetadataMakeVectorSettings @ 1499c6b40

void __thiscall
UPCGMetadataMakeVectorSettings::~UPCGMetadataMakeVectorSettings
          (UPCGMetadataMakeVectorSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  DestructItems<FString,int>
            (*(FString **)&(this->InputSource4).field_0x28,*(int *)&(this->InputSource4).field_0x30)
  ;
  pvVar1 = *(void **)&(this->InputSource4).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
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

// CreateElement @ 1499dbd90

TSharedPtr<IPCGElement,1> * __thiscall
UPCGMetadataMakeVectorSettings::CreateElement
          (UPCGMetadataMakeVectorSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGMetadataMakeVectorElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGMetadataMakeVectorElement__6B_;
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

// GetInputPinLabel @ 1499f7ab0

FName __thiscall
UPCGMetadataMakeVectorSettings::GetInputPinLabel(UPCGMetadataMakeVectorSettings *this,uint param_1)

{
  EPCGMetadataMakeVector4 EVar1;
  FName FVar2;
  FName FVar3;
  uint in_register_00000014;
  uint in_R8D;
  
  FVar2.Number = in_register_00000014;
  FVar2.ComparisonIndex.Value = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    DefaultNames[0] = PCGMetadataMakeVectorConstants::XLabel;
    DefaultNames[1] = PCGMetadataMakeVectorConstants::YLabel;
    DefaultNames[2] = PCGMetadataMakeVectorConstants::ZLabel;
    DefaultNames[3] = PCGMetadataMakeVectorConstants::WLabel;
    _Init_thread_footer(&::_TSS0);
  }
  if (this->OutputType != Vector2) {
    if (this->OutputType == Vector) {
      if (this->MakeVector3Op != ThreeValues) {
        FVar3 = PCGMetadataMakeVectorConstants::ZLabel;
        if (in_R8D == 0) {
          FVar3 = PCGMetadataMakeVectorConstants::XYLabel;
        }
        goto LAB_1499f7b80;
      }
    }
    else {
      EVar1 = this->MakeVector4Op;
      if (EVar1 != FourValues) {
        if (EVar1 == Vector2AndTwoValues) {
          FVar3 = PCGMetadataMakeVectorConstants::XYLabel;
          if ((in_R8D != 0) && (FVar3 = PCGMetadataMakeVectorConstants::WLabel, in_R8D == 1)) {
            FVar3 = PCGMetadataMakeVectorConstants::ZLabel;
          }
        }
        else if (EVar1 == TwoVector2) {
          FVar3 = PCGMetadataMakeVectorConstants::ZWLabel;
          if (in_R8D == 0) {
            FVar3 = PCGMetadataMakeVectorConstants::XYLabel;
          }
        }
        else {
          FVar3 = PCGMetadataMakeVectorConstants::WLabel;
          if (in_R8D == 0) {
            FVar3 = PCGMetadataMakeVectorConstants::XYZLabel;
          }
        }
        goto LAB_1499f7b80;
      }
    }
  }
  FVar3 = DefaultNames[in_R8D];
LAB_1499f7b80:
  *(FName *)FVar2 = FVar3;
  return FVar2;
}

// GetInputSource @ 1499f84c0

FPCGAttributePropertyInputSelector * __thiscall
UPCGMetadataMakeVectorSettings::GetInputSource
          (UPCGMetadataMakeVectorSettings *this,
          FPCGAttributePropertyInputSelector *__return_storage_ptr__,uint param_1)

{
  FPCGAttributePropertySelector *pFVar1;
  
  if (param_1 == 0) {
    pFVar1 = (FPCGAttributePropertySelector *)&this->InputSource1;
  }
  else if (param_1 == 1) {
    pFVar1 = (FPCGAttributePropertySelector *)&this->InputSource2;
  }
  else if (param_1 == 2) {
    pFVar1 = (FPCGAttributePropertySelector *)&this->InputSource3;
  }
  else {
    if (param_1 != 3) {
      FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(__return_storage_ptr__)
      ;
      return __return_storage_ptr__;
    }
    pFVar1 = (FPCGAttributePropertySelector *)&this->InputSource4;
  }
  FPCGAttributePropertySelector::FPCGAttributePropertySelector
            ((FPCGAttributePropertySelector *)__return_storage_ptr__,pFVar1);
  *(undefined ***)__return_storage_ptr__ = &___7FPCGAttributePropertyInputSelector__6B_;
  return __return_storage_ptr__;
}

// GetOperandNum @ 1499f9ca0

uint __thiscall UPCGMetadataMakeVectorSettings::GetOperandNum(UPCGMetadataMakeVectorSettings *this)

{
  EPCGMetadataTypes EVar1;
  
  EVar1 = this->OutputType;
  if (EVar1 != Vector2) {
    if (EVar1 == Vector) {
      if (this->MakeVector3Op != Vector2AndValue) {
        return 3;
      }
    }
    else {
      if (EVar1 != Vector4) {
        return 4;
      }
      if ((this->MakeVector4Op != TwoVector2) && (this->MakeVector4Op != Vector3AndValue)) {
        return (this->MakeVector4Op != Vector2AndTwoValues) + 3;
      }
    }
  }
  return 2;
}

// GetOutputType @ 1499fa580

ushort __thiscall
UPCGMetadataMakeVectorSettings::GetOutputType(UPCGMetadataMakeVectorSettings *this,ushort param_1)

{
  return (ushort)this->OutputType;
}

// GetPinInitialDefaultValueType @ 1499fa850

EPCGMetadataTypes __thiscall
UPCGMetadataMakeVectorSettings::GetPinInitialDefaultValueType
          (UPCGMetadataMakeVectorSettings *this,FName param_1)

{
  EPCGMetadataTypes EVar1;
  
  if (param_1 == PCGMetadataMakeVectorConstants::XYZLabel) {
    return Vector;
  }
  if (param_1 != PCGMetadataMakeVectorConstants::XYLabel) {
    EVar1 = Vector2;
    if (param_1 != PCGMetadataMakeVectorConstants::ZWLabel) {
      EVar1 = Double;
    }
    return EVar1;
  }
  return Vector2;
}

// GetPrivateStaticClass @ 1499fbb10

UClass * __cdecl UPCGMetadataMakeVectorSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataMakeVectorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataMakeVectorSettings",
               &Z_Registration_Info_UClass_UPCGMetadataMakeVectorSettings.InnerSingleton,
               StaticRegisterNativesUPCGMetadataMakeVectorSettings,0x280,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataMakeVectorSettings>,
               InternalVTableHelperCtorCaller<UPCGMetadataMakeVectorSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataMakeVectorSettings.InnerSingleton;
}

// IsSupportedInputType @ 149a01180

bool __thiscall
UPCGMetadataMakeVectorSettings::IsSupportedInputType
          (UPCGMetadataMakeVectorSettings *this,ushort param_1,uint param_2,bool *param_3)

{
  FName local_res8 [4];
  
  *param_3 = false;
  (**(code **)(this->_padding_ + 0x4f8))(this,local_res8);
  if (local_res8[0] == PCGMetadataMakeVectorConstants::XYZLabel) {
    return param_1 < 6;
  }
  if ((local_res8[0] != PCGMetadataMakeVectorConstants::XYLabel) &&
     (local_res8[0] != PCGMetadataMakeVectorConstants::ZWLabel)) {
    return param_1 < 4;
  }
  return param_1 < 5;
}

// PostLoad @ 149a04c20

void __thiscall UPCGMetadataMakeVectorSettings::PostLoad(UPCGMetadataMakeVectorSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGMetadataMakeVectorSettings @ 149a100b0

void __cdecl
UPCGMetadataMakeVectorSettings::StaticRegisterNativesUPCGMetadataMakeVectorSettings(void)

{
  return;
}

