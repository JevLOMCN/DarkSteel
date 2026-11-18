// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 14

// StaticClass @ 149b9b0b0

UClass * __cdecl UPCGParseStringSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGParseStringSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGParseStringSettings",
               &Z_Registration_Info_UClass_UPCGParseStringSettings.InnerSingleton,
               StaticRegisterNativesUPCGParseStringSettings,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGParseStringSettings>,
               InternalVTableHelperCtorCaller<UPCGParseStringSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGParseStringSettings.InnerSingleton;
}

// UPCGParseStringSettings @ 149be7480

UPCGParseStringSettings * __thiscall
UPCGParseStringSettings::UPCGParseStringSettings
          (UPCGParseStringSettings *this,FVTableHelper *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource);
  this->TargetType = Integer32;
  return this;
}

// UPCGParseStringSettings @ 149be74d0

UPCGParseStringSettings * __thiscall
UPCGParseStringSettings::UPCGParseStringSettings
          (UPCGParseStringSettings *this,FObjectInitializer *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource);
  this->TargetType = Integer32;
  return this;
}

// ~UPCGParseStringSettings @ 149be9d60

void __thiscall UPCGParseStringSettings::~UPCGParseStringSettings(UPCGParseStringSettings *this)

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

// CreateElement @ 149c057a0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGParseStringSettings::CreateElement
          (UPCGParseStringSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGParseStringElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGParseStringElement__6B_;
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

// DefaultValuesAreEnabled @ 149c06be0

bool __thiscall UPCGParseStringSettings::DefaultValuesAreEnabled(UPCGParseStringSettings *this)

{
  return false;
}

// GetAdditionalTitleInformation @ 149c23360

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FString * __thiscall
UPCGParseStringSettings::GetAdditionalTitleInformation
          (UPCGParseStringSettings *this,FString *__return_storage_ptr__)

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
  
  pFVar1 = PCG::Private::GetTypeName(&local_78,(ushort)this->TargetType);
  FText::FromString(&local_68,pFVar1);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = FPCGAttributePropertySelector::ToString
                     ((FPCGAttributePropertySelector *)&this->_padding_,&local_78,false);
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
                     (&local_28,L"PCGParseStringElement",L"FullInfo",L"{0} -> {1} as {2}");
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

// GetAllOutputTypes @ 149c23770

TArray<unsigned_short,TSizedDefaultAllocator<32>_> * __thiscall
UPCGParseStringSettings::GetAllOutputTypes
          (UPCGParseStringSettings *this,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  EPCGMetadataTypes EVar1;
  
  EVar1 = this->TargetType;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,1,0,&__return_storage_ptr__->AllocatorInstance,1,&__return_storage_ptr__->ArrayMax)
  ;
  *(ushort *)(__return_storage_ptr__->AllocatorInstance).Data = (ushort)EVar1;
  return __return_storage_ptr__;
}

// GetInputSource @ 149c23ff0

FPCGAttributePropertyInputSelector * __thiscall
UPCGParseStringSettings::GetInputSource
          (UPCGParseStringSettings *this,FPCGAttributePropertyInputSelector *__return_storage_ptr__,
          uint param_1)

{
  code *pcVar1;
  bool bVar2;
  FPCGAttributePropertyInputSelector *pFVar3;
  
  if (param_1 != 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2904044508012347456>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGParseString.cpp"
                       ,0x40,"Index == 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPCGAttributePropertyInputSelector *)(*pcVar1)();
      return pFVar3;
    }
  }
  FPCGAttributePropertySelector::FPCGAttributePropertySelector
            ((FPCGAttributePropertySelector *)__return_storage_ptr__,
             (FPCGAttributePropertySelector *)&this->InputSource);
  *(undefined ***)__return_storage_ptr__ = &___7FPCGAttributePropertyInputSelector__6B_;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149c26090

UClass * __cdecl UPCGParseStringSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGParseStringSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGParseStringSettings",
               &Z_Registration_Info_UClass_UPCGParseStringSettings.InnerSingleton,
               StaticRegisterNativesUPCGParseStringSettings,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGParseStringSettings>,
               InternalVTableHelperCtorCaller<UPCGParseStringSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGParseStringSettings.InnerSingleton;
}

// HasDifferentOutputTypes @ 149c27390

bool __thiscall UPCGParseStringSettings::HasDifferentOutputTypes(UPCGParseStringSettings *this)

{
  return true;
}

// HasFlippedTitleLines @ 149c274b0

bool __thiscall UPCGParseStringSettings::HasFlippedTitleLines(UPCGParseStringSettings *this)

{
  return false;
}

// IsSupportedInputType @ 149c2d4f0

bool __thiscall
UPCGParseStringSettings::IsSupportedInputType
          (UPCGParseStringSettings *this,ushort param_1,uint param_2,bool *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_2 != 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2904044508012347462>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGParseString.cpp"
                       ,0x46,"InputIndex == 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((param_1 != 0xc) && (param_1 != 9)) {
    return false;
  }
  return true;
}

// StaticRegisterNativesUPCGParseStringSettings @ 149c35510

void __cdecl UPCGParseStringSettings::StaticRegisterNativesUPCGParseStringSettings(void)

{
  return;
}

