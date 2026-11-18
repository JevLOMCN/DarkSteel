// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 15

// StaticClass @ 149902fc0

UClass * __cdecl UPCGMetadataBreakVectorSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataBreakVectorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataBreakVectorSettings",
               &Z_Registration_Info_UClass_UPCGMetadataBreakVectorSettings.InnerSingleton,
               StaticRegisterNativesUPCGMetadataBreakVectorSettings,0x1b8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataBreakVectorSettings>,
               InternalVTableHelperCtorCaller<UPCGMetadataBreakVectorSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataBreakVectorSettings.InnerSingleton;
}

// UPCGMetadataBreakVectorSettings @ 1499c4030

UPCGMetadataBreakVectorSettings * __thiscall
UPCGMetadataBreakVectorSettings::UPCGMetadataBreakVectorSettings
          (UPCGMetadataBreakVectorSettings *this,FVTableHelper *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource);
  return this;
}

// UPCGMetadataBreakVectorSettings @ 1499c4080

UPCGMetadataBreakVectorSettings * __thiscall
UPCGMetadataBreakVectorSettings::UPCGMetadataBreakVectorSettings
          (UPCGMetadataBreakVectorSettings *this,FObjectInitializer *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource);
  return this;
}

// ~UPCGMetadataBreakVectorSettings @ 1499c6920

void __thiscall
UPCGMetadataBreakVectorSettings::~UPCGMetadataBreakVectorSettings
          (UPCGMetadataBreakVectorSettings *this)

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

// CreateElement @ 1499dba90

TSharedPtr<IPCGElement,1> * __thiscall
UPCGMetadataBreakVectorSettings::CreateElement
          (UPCGMetadataBreakVectorSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGMetadataBreakVectorElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGMetadataBreakVectorElement__6B_;
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

// GetInputSource @ 1499f8340

FPCGAttributePropertyInputSelector * __thiscall
UPCGMetadataBreakVectorSettings::GetInputSource
          (UPCGMetadataBreakVectorSettings *this,
          FPCGAttributePropertyInputSelector *__return_storage_ptr__,uint param_1)

{
  FPCGAttributePropertySelector::FPCGAttributePropertySelector
            ((FPCGAttributePropertySelector *)__return_storage_ptr__,
             (FPCGAttributePropertySelector *)&this->InputSource);
  *(undefined ***)__return_storage_ptr__ = &___7FPCGAttributePropertyInputSelector__6B_;
  return __return_storage_ptr__;
}

// GetOutputAttributeName @ 1499f9e80

FName __thiscall
UPCGMetadataBreakVectorSettings::GetOutputAttributeName
          (UPCGMetadataBreakVectorSettings *this,FName param_1,uint param_2)

{
  FString *pFVar1;
  FString *pFVar2;
  FName *pFVar3;
  int iVar4;
  uint in_register_00000084;
  int in_R9D;
  FName local_res18 [2];
  FName local_68;
  FString local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  FString local_20;
  
  local_res18[0].Number = in_register_00000084;
  local_res18[0].ComparisonIndex.Value = param_2;
  if (local_res18[0] == (FName)0x0) {
    *(undefined8 *)param_1 = 0;
    return param_1;
  }
  if (in_R9D == 0) {
    pFVar3 = &PCGMetadataBreakVectorConstants::XLabel;
  }
  else if (in_R9D == 1) {
    pFVar3 = &PCGMetadataBreakVectorConstants::YLabel;
  }
  else {
    if (in_R9D != 2) {
      pFVar1 = ::FName::ToString(&PCGMetadataBreakVectorConstants::WLabel,&local_20);
      ::FString::FString(&local_40,".");
      pFVar2 = ::FName::ToString(local_res18,&local_30);
      ::FString::ConcatFF(&local_50,pFVar2,&local_40);
      ::FString::ConcatFF(&local_60,&local_50,pFVar1);
      iVar4 = local_60.Data.ArrayNum + -1;
      if (local_60.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      pFVar3 = ::FName::FName(&local_68,iVar4,(wchar_t *)local_60.Data.AllocatorInstance.Data,
                              FNAME_Add);
      *(FName *)param_1 = *pFVar3;
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
      local_30.Data.AllocatorInstance.Data = local_20.Data.AllocatorInstance.Data;
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
        local_30.Data.AllocatorInstance.Data = local_20.Data.AllocatorInstance.Data;
      }
      goto LAB_1499fa049;
    }
    pFVar3 = &PCGMetadataBreakVectorConstants::ZLabel;
  }
  pFVar1 = ::FName::ToString(pFVar3,&local_30);
  ::FString::FString(&local_50,".");
  pFVar2 = ::FName::ToString(local_res18,&local_20);
  ::FString::ConcatFF(&local_40,pFVar2,&local_50);
  ::FString::ConcatFF(&local_60,&local_40,pFVar1);
  iVar4 = local_60.Data.ArrayNum + -1;
  if (local_60.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  pFVar3 = ::FName::FName(&local_68,iVar4,(wchar_t *)local_60.Data.AllocatorInstance.Data,FNAME_Add)
  ;
  *(FName *)param_1 = *pFVar3;
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
LAB_1499fa049:
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return param_1;
}

// GetOutputPinLabel @ 1499fa380

FName __thiscall
UPCGMetadataBreakVectorSettings::GetOutputPinLabel
          (UPCGMetadataBreakVectorSettings *this,uint param_1)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  uint in_register_00000014;
  int in_R8D;
  
  if (in_R8D == 0) {
    *(FName *)CONCAT44(in_register_00000014,param_1) = PCGMetadataBreakVectorConstants::XLabel;
    FVar4.Number = in_register_00000014;
    FVar4.ComparisonIndex.Value = param_1;
    return FVar4;
  }
  if (in_R8D != 1) {
    if (in_R8D != 2) {
      *(FName *)CONCAT44(in_register_00000014,param_1) = PCGMetadataBreakVectorConstants::WLabel;
      FVar1.Number = in_register_00000014;
      FVar1.ComparisonIndex.Value = param_1;
      return FVar1;
    }
    *(FName *)CONCAT44(in_register_00000014,param_1) = PCGMetadataBreakVectorConstants::ZLabel;
    FVar2.Number = in_register_00000014;
    FVar2.ComparisonIndex.Value = param_1;
    return FVar2;
  }
  *(FName *)CONCAT44(in_register_00000014,param_1) = PCGMetadataBreakVectorConstants::YLabel;
  FVar3.Number = in_register_00000014;
  FVar3.ComparisonIndex.Value = param_1;
  return FVar3;
}

// GetOutputType @ 1499fa540

ushort __thiscall
UPCGMetadataBreakVectorSettings::GetOutputType(UPCGMetadataBreakVectorSettings *this,ushort param_1)

{
  return 1;
}

// GetPinInitialDefaultValueType @ 1499fa760

EPCGMetadataTypes __thiscall
UPCGMetadataBreakVectorSettings::GetPinInitialDefaultValueType
          (UPCGMetadataBreakVectorSettings *this,FName param_1)

{
  return Vector;
}

// GetPrivateStaticClass @ 1499fb810

UClass * __cdecl UPCGMetadataBreakVectorSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataBreakVectorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataBreakVectorSettings",
               &Z_Registration_Info_UClass_UPCGMetadataBreakVectorSettings.InnerSingleton,
               StaticRegisterNativesUPCGMetadataBreakVectorSettings,0x1b8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataBreakVectorSettings>,
               InternalVTableHelperCtorCaller<UPCGMetadataBreakVectorSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataBreakVectorSettings.InnerSingleton;
}

// GetResultNum @ 1499fcdf0

uint __thiscall UPCGMetadataBreakVectorSettings::GetResultNum(UPCGMetadataBreakVectorSettings *this)

{
  return 4;
}

// IsSupportedInputType @ 149a01030

bool __thiscall
UPCGMetadataBreakVectorSettings::IsSupportedInputType
          (UPCGMetadataBreakVectorSettings *this,ushort param_1,uint param_2,bool *param_3)

{
  *param_3 = false;
  if ((2 < (ushort)(param_1 - 4)) && (param_1 != 0xb)) {
    return false;
  }
  return true;
}

// PostLoad @ 149a04bf0

void __thiscall UPCGMetadataBreakVectorSettings::PostLoad(UPCGMetadataBreakVectorSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGMetadataBreakVectorSettings @ 149a10070

void __cdecl
UPCGMetadataBreakVectorSettings::StaticRegisterNativesUPCGMetadataBreakVectorSettings(void)

{
  return;
}

