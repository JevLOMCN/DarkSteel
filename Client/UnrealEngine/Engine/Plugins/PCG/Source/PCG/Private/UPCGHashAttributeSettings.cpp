// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 13

// StaticClass @ 149901710

UClass * __cdecl UPCGHashAttributeSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGHashAttributeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGHashAttributeSettings",
               &Z_Registration_Info_UClass_UPCGHashAttributeSettings.InnerSingleton,
               StaticRegisterNativesUPCGHashAttributeSettings,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGHashAttributeSettings>,
               InternalVTableHelperCtorCaller<UPCGHashAttributeSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGHashAttributeSettings.InnerSingleton;
}

// UPCGHashAttributeSettings @ 1499c3a00

UPCGHashAttributeSettings * __thiscall
UPCGHashAttributeSettings::UPCGHashAttributeSettings
          (UPCGHashAttributeSettings *this,FVTableHelper *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource1);
  return this;
}

// UPCGHashAttributeSettings @ 1499c3a50

UPCGHashAttributeSettings * __thiscall
UPCGHashAttributeSettings::UPCGHashAttributeSettings
          (UPCGHashAttributeSettings *this,FObjectInitializer *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource1);
  return this;
}

// ~UPCGHashAttributeSettings @ 1499c6610

void __thiscall
UPCGHashAttributeSettings::~UPCGHashAttributeSettings(UPCGHashAttributeSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
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

// CreateElement @ 1499db610

TSharedPtr<IPCGElement,1> * __thiscall
UPCGHashAttributeSettings::CreateElement
          (UPCGHashAttributeSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGHashAttributeElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGHashAttributeElement__6B_;
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

// GetInputPinLabel @ 1499f7790

FName __thiscall
UPCGHashAttributeSettings::GetInputPinLabel(UPCGHashAttributeSettings *this,uint param_1)

{
  FName FVar1;
  uint in_register_00000014;
  
  *(FName *)CONCAT44(in_register_00000014,param_1) = PCGPinConstants::DefaultInputLabel;
  FVar1.Number = in_register_00000014;
  FVar1.ComparisonIndex.Value = param_1;
  return FVar1;
}

// GetInputSource @ 1499f81d0

FPCGAttributePropertyInputSelector * __thiscall
UPCGHashAttributeSettings::GetInputSource
          (UPCGHashAttributeSettings *this,
          FPCGAttributePropertyInputSelector *__return_storage_ptr__,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  FPCGAttributePropertyInputSelector *pFVar3;
  
  if (param_1 != 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8873251547039924211>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGHashAttribute.cpp"
                       ,0xd,"Index == 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPCGAttributePropertyInputSelector *)(*pcVar1)();
      return pFVar3;
    }
  }
  FPCGAttributePropertySelector::FPCGAttributePropertySelector
            ((FPCGAttributePropertySelector *)__return_storage_ptr__,
             (FPCGAttributePropertySelector *)&this->InputSource1);
  *(undefined ***)__return_storage_ptr__ = &___7FPCGAttributePropertyInputSelector__6B_;
  return __return_storage_ptr__;
}

// GetOperandNum @ 1499f9bc0

uint __thiscall UPCGHashAttributeSettings::GetOperandNum(UPCGHashAttributeSettings *this)

{
  return 1;
}

// GetOutputType @ 1499fa510

ushort __thiscall
UPCGHashAttributeSettings::GetOutputType(UPCGHashAttributeSettings *this,ushort param_1)

{
  return 2;
}

// GetPinInitialDefaultValueType @ 1499fa720

EPCGMetadataTypes __thiscall
UPCGHashAttributeSettings::GetPinInitialDefaultValueType
          (UPCGHashAttributeSettings *this,FName param_1)

{
  return String;
}

// GetPrivateStaticClass @ 1499fb390

UClass * __cdecl UPCGHashAttributeSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGHashAttributeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGHashAttributeSettings",
               &Z_Registration_Info_UClass_UPCGHashAttributeSettings.InnerSingleton,
               StaticRegisterNativesUPCGHashAttributeSettings,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGHashAttributeSettings>,
               InternalVTableHelperCtorCaller<UPCGHashAttributeSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGHashAttributeSettings.InnerSingleton;
}

// IsSupportedInputType @ 149a00fa0

bool __thiscall
UPCGHashAttributeSettings::IsSupportedInputType
          (UPCGHashAttributeSettings *this,ushort param_1,uint param_2,bool *param_3)

{
  return true;
}

// StaticRegisterNativesUPCGHashAttributeSettings @ 149a10010

void __cdecl UPCGHashAttributeSettings::StaticRegisterNativesUPCGHashAttributeSettings(void)

{
  return;
}

