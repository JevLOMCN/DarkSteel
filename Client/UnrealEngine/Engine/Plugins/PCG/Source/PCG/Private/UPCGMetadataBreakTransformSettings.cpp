// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 16

// StaticClass @ 149902a20

UClass * __cdecl UPCGMetadataBreakTransformSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataBreakTransformSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataBreakTransformSettings",
               &Z_Registration_Info_UClass_UPCGMetadataBreakTransformSettings.InnerSingleton,
               StaticRegisterNativesUPCGMetadataBreakTransformSettings,0x1b8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataBreakTransformSettings>,
               InternalVTableHelperCtorCaller<UPCGMetadataBreakTransformSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataBreakTransformSettings.InnerSingleton;
}

// UPCGMetadataBreakTransformSettings @ 1499c3f90

UPCGMetadataBreakTransformSettings * __thiscall
UPCGMetadataBreakTransformSettings::UPCGMetadataBreakTransformSettings
          (UPCGMetadataBreakTransformSettings *this,FVTableHelper *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource);
  return this;
}

// UPCGMetadataBreakTransformSettings @ 1499c3fe0

UPCGMetadataBreakTransformSettings * __thiscall
UPCGMetadataBreakTransformSettings::UPCGMetadataBreakTransformSettings
          (UPCGMetadataBreakTransformSettings *this,FObjectInitializer *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource);
  return this;
}

// ~UPCGMetadataBreakTransformSettings @ 1499c68c0

void __thiscall
UPCGMetadataBreakTransformSettings::~UPCGMetadataBreakTransformSettings
          (UPCGMetadataBreakTransformSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  DestructItems<FString,int>
            (*(FString **)&(this->InputSource).field_0x28,*(int *)&(this->InputSource).field_0x30);
  pvVar1 = *(void **)&(this->InputSource).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGMetadataSettingsBase::~UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this);
  return;
}

// CreateElement @ 1499db9d0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGMetadataBreakTransformSettings::CreateElement
          (UPCGMetadataBreakTransformSettings *this,
          TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGMetadataBreakTransformElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGMetadataBreakTransformElement__6B_;
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

// GetAllOutputTypes @ 1499f41c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<unsigned_short,TSizedDefaultAllocator<32>_> * __thiscall
UPCGMetadataBreakTransformSettings::GetAllOutputTypes
          (UPCGMetadataBreakTransformSettings *this,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,3,0,&__return_storage_ptr__->AllocatorInstance,3,&__return_storage_ptr__->ArrayMax)
  ;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(undefined4 *)pFVar1 = 0x70005;
  *(undefined2 *)(pFVar1 + 4) = 5;
  return __return_storage_ptr__;
}

// GetInputSource @ 1499f8300

FPCGAttributePropertyInputSelector * __thiscall
UPCGMetadataBreakTransformSettings::GetInputSource
          (UPCGMetadataBreakTransformSettings *this,
          FPCGAttributePropertyInputSelector *__return_storage_ptr__,uint param_1)

{
  FPCGAttributePropertySelector::FPCGAttributePropertySelector
            ((FPCGAttributePropertySelector *)__return_storage_ptr__,
             (FPCGAttributePropertySelector *)&this->InputSource);
  *(undefined ***)__return_storage_ptr__ = &___7FPCGAttributePropertyInputSelector__6B_;
  return __return_storage_ptr__;
}

// GetOutputAttributeName @ 1499f9d50

FName __thiscall
UPCGMetadataBreakTransformSettings::GetOutputAttributeName
          (UPCGMetadataBreakTransformSettings *this,FName param_1,uint param_2)

{
  FName *pFVar1;
  FString *pFVar2;
  FString *pFVar3;
  int iVar4;
  uint in_register_00000084;
  undefined4 in_R9D;
  FName local_res18 [2];
  undefined1 local_68 [8];
  FName local_60;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_res18[0].Number = in_register_00000084;
  local_res18[0].ComparisonIndex.Value = param_2;
  if (local_res18[0] == (FName)0x0) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    pFVar1 = (FName *)(**(code **)(this->_padding_ + 0x508))(this,local_68,in_R9D);
    pFVar2 = ::FName::ToString(pFVar1,&local_18);
    ::FString::FString(&local_38,".");
    pFVar3 = ::FName::ToString(local_res18,&local_28);
    ::FString::ConcatFF(&local_48,pFVar3,&local_38);
    ::FString::ConcatFF(&local_58,&local_48,pFVar2);
    iVar4 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    pFVar1 = ::FName::FName(&local_60,iVar4,(wchar_t *)local_58.Data.AllocatorInstance.Data,
                            FNAME_Add);
    *(FName *)param_1 = *pFVar1;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return param_1;
    }
  }
  return param_1;
}

// GetOutputPinLabel @ 1499fa330

FName __thiscall
UPCGMetadataBreakTransformSettings::GetOutputPinLabel
          (UPCGMetadataBreakTransformSettings *this,uint param_1)

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

// GetPinInitialDefaultValueType @ 1499fa750

EPCGMetadataTypes __thiscall
UPCGMetadataBreakTransformSettings::GetPinInitialDefaultValueType
          (UPCGMetadataBreakTransformSettings *this,FName param_1)

{
  return Transform;
}

// GetPrivateStaticClass @ 1499fb750

UClass * __cdecl UPCGMetadataBreakTransformSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataBreakTransformSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataBreakTransformSettings",
               &Z_Registration_Info_UClass_UPCGMetadataBreakTransformSettings.InnerSingleton,
               StaticRegisterNativesUPCGMetadataBreakTransformSettings,0x1b8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataBreakTransformSettings>,
               InternalVTableHelperCtorCaller<UPCGMetadataBreakTransformSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataBreakTransformSettings.InnerSingleton;
}

// GetResultNum @ 1499fcde0

uint __thiscall
UPCGMetadataBreakTransformSettings::GetResultNum(UPCGMetadataBreakTransformSettings *this)

{
  return 3;
}

// HasDifferentOutputTypes @ 1499fe450

bool __thiscall
UPCGMetadataBreakTransformSettings::HasDifferentOutputTypes
          (UPCGMetadataBreakTransformSettings *this)

{
  return true;
}

// IsSupportedInputType @ 149a01010

bool __thiscall
UPCGMetadataBreakTransformSettings::IsSupportedInputType
          (UPCGMetadataBreakTransformSettings *this,ushort param_1,uint param_2,bool *param_3)

{
  *param_3 = false;
  return param_1 == 8;
}

// PostLoad @ 149a04be0

void __thiscall
UPCGMetadataBreakTransformSettings::PostLoad(UPCGMetadataBreakTransformSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGMetadataBreakTransformSettings @ 149a10060

void __cdecl
UPCGMetadataBreakTransformSettings::StaticRegisterNativesUPCGMetadataBreakTransformSettings(void)

{
  return;
}

