// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 12

// StaticClass @ 1499038b0

UClass * __cdecl UPCGAttributeCastSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAttributeCastSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAttributeCastSettings",
               &Z_Registration_Info_UClass_UPCGAttributeCastSettings.InnerSingleton,
               StaticRegisterNativesUPCGAttributeCastSettings,0x150,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGAttributeCastSettings>,
               InternalVTableHelperCtorCaller<UPCGAttributeCastSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAttributeCastSettings.InnerSingleton;
}

// UPCGAttributeCastSettings @ 1499c3020

UPCGAttributeCastSettings * __thiscall
UPCGAttributeCastSettings::UPCGAttributeCastSettings
          (UPCGAttributeCastSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGAttributeCastSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource);
  this->OutputType = Float;
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector(&this->OutputTarget);
  return this;
}

// UPCGAttributeCastSettings @ 1499c3070

UPCGAttributeCastSettings * __thiscall
UPCGAttributeCastSettings::UPCGAttributeCastSettings
          (UPCGAttributeCastSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGAttributeCastSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource);
  this->OutputType = Float;
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector(&this->OutputTarget);
  return this;
}

// ~UPCGAttributeCastSettings @ 1499c61e0

void __thiscall
UPCGAttributeCastSettings::~UPCGAttributeCastSettings(UPCGAttributeCastSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGAttributeCastSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->OutputTarget).field_0x28,*(int *)&(this->OutputTarget).field_0x30)
  ;
  pvVar1 = *(void **)&(this->OutputTarget).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->InputSource).field_0x28,*(int *)&(this->InputSource).field_0x30);
  pvVar1 = *(void **)&(this->InputSource).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// AdditionalTaskName @ 1499d3680

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FName __thiscall UPCGAttributeCastSettings::AdditionalTaskName(UPCGAttributeCastSettings *this)

{
  FString *pFVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  FName in_RDX;
  wchar_t *pwVar4;
  FString local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  pFVar1 = PCG::Private::GetTypeName(&local_58,(ushort)this->OutputType);
  FText::FromString(&local_48,pFVar1);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_28,L"PCGAttributeCastElement",L"AdditionalTaskName",
                      L"Attribute Cast: {0}");
  pFVar3 = FTextFormat::FTextFormat(&local_18,pFVar2,Default);
  pFVar2 = FText::Format<FText>(&local_38,pFVar3,&local_48);
  pFVar1 = FText::ToString(pFVar2);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  ::FName::FName((FName *)in_RDX,pwVar4);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return in_RDX;
}

// ApplyPreconfiguredSettings @ 1499d3900

void __thiscall
UPCGAttributeCastSettings::ApplyPreconfiguredSettings
          (UPCGAttributeCastSettings *this,FPCGPreConfiguredSettingsInfo *param_1)

{
  bool bVar1;
  UEnum *this_00;
  
  this_00 = StaticEnum<enum_EPCGMetadataTypes>();
  if (this_00 != (UEnum *)0x0) {
    bVar1 = UEnum::IsValidEnumValue(this_00,(longlong)*(int *)param_1);
    if (bVar1) {
      this->OutputType = *(EPCGMetadataTypes *)param_1;
    }
  }
  return;
}

// CreateElement @ 1499db0d0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGAttributeCastSettings::CreateElement
          (UPCGAttributeCastSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGAttributeCastElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGAttributeCastElement__6B_;
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

// GetAdditionalTitleInformation @ 1499f2fc0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FString * __thiscall
UPCGAttributeCastSettings::GetAdditionalTitleInformation
          (UPCGAttributeCastSettings *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  pFVar1 = PCG::Private::GetTypeName(&local_78,(ushort)this->OutputType);
  FText::FromString(&local_68,pFVar1);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = FPCGAttributePropertySelector::ToString
                     ((FPCGAttributePropertySelector *)&this->OutputTarget,&local_78,false);
  FText::FromString(&local_58,pFVar1);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = FPCGAttributePropertySelector::ToString
                     ((FPCGAttributePropertySelector *)&this->InputSource,&local_78,false);
  FText::FromString(&local_48,pFVar1);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_28,L"PCGAttributeCastElement",L"FullInfo",L"{0} -> {1} as {2}");
  pFVar3 = FTextFormat::FTextFormat(&local_18,pFVar2,Default);
  pFVar2 = FText::Format<FText,FText,FText>(&local_38,pFVar3,&local_48,&local_58,&local_68);
  pFVar1 = FText::ToString(pFVar2);
  ::FString::FString(__return_storage_ptr__,pFVar1);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1499fa9e0

UClass * __cdecl UPCGAttributeCastSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAttributeCastSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAttributeCastSettings",
               &Z_Registration_Info_UClass_UPCGAttributeCastSettings.InnerSingleton,
               StaticRegisterNativesUPCGAttributeCastSettings,0x150,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGAttributeCastSettings>,
               InternalVTableHelperCtorCaller<UPCGAttributeCastSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAttributeCastSettings.InnerSingleton;
}

// HasDynamicPins @ 1499fe470

bool __thiscall UPCGAttributeCastSettings::HasDynamicPins(UPCGAttributeCastSettings *this)

{
  return true;
}

// OutputPinProperties @ 149a03040

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGAttributeCastSettings::OutputPinProperties
          (UPCGAttributeCastSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGAttributeCastSettings @ 149a0ff10

void __cdecl UPCGAttributeCastSettings::StaticRegisterNativesUPCGAttributeCastSettings(void)

{
  return;
}

