// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// StaticClass @ 149900280

UClass * __cdecl UPCGDataAttributesToTagsSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataAttributesToTagsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataAttributesToTagsSettings",
               &Z_Registration_Info_UClass_UPCGDataAttributesToTagsSettings.InnerSingleton,
               StaticRegisterNativesUPCGDataAttributesToTagsSettings,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGDataAttributesToTagsSettings>,
               InternalVTableHelperCtorCaller<UPCGDataAttributesToTagsSettings>,local_res8,
               UPCGDataAttributesAndTagsSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataAttributesToTagsSettings.InnerSingleton;
}

// UPCGDataAttributesToTagsSettings @ 1499c3560

UPCGDataAttributesToTagsSettings * __thiscall
UPCGDataAttributesToTagsSettings::UPCGDataAttributesToTagsSettings
          (UPCGDataAttributesToTagsSettings *this,FVTableHelper *param_1)

{
  UPCGDataAttributesAndTagsSettingsBase::UPCGDataAttributesAndTagsSettingsBase
            ((UPCGDataAttributesAndTagsSettingsBase *)this,param_1);
  this->bDiscardNonParseableAttributeTypes = true;
  this->bDiscardAttributeValue = false;
  this->_padding_ = (longlong)&___7UPCGDataAttributesToTagsSettings__6B_;
  return this;
}

// UPCGDataAttributesToTagsSettings @ 1499c3590

UPCGDataAttributesToTagsSettings * __thiscall
UPCGDataAttributesToTagsSettings::UPCGDataAttributesToTagsSettings
          (UPCGDataAttributesToTagsSettings *this,FObjectInitializer *param_1)

{
  UPCGDataAttributesAndTagsSettingsBase::UPCGDataAttributesAndTagsSettingsBase
            ((UPCGDataAttributesAndTagsSettingsBase *)this,param_1);
  this->bDiscardNonParseableAttributeTypes = true;
  this->bDiscardAttributeValue = false;
  this->_padding_ = (longlong)&___7UPCGDataAttributesToTagsSettings__6B_;
  return this;
}

// ~UPCGDataAttributesToTagsSettings @ 1499c63d0

void __thiscall
UPCGDataAttributesToTagsSettings::~UPCGDataAttributesToTagsSettings
          (UPCGDataAttributesToTagsSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGDataAttributesAndTagsSettingsBase__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FPCGAttributePropertyOutputSelector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FPCGAttributePropertyOutputSelector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FPCGAttributePropertyOutputSelector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 1499db310

TSharedPtr<IPCGElement,1> * __thiscall
UPCGDataAttributesToTagsSettings::CreateElement
          (UPCGDataAttributesToTagsSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGDataAttributesToTagsElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGDataAttributesToTagsElement__6B_;
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

// GetPrivateStaticClass @ 1499faf10

UClass * __cdecl UPCGDataAttributesToTagsSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataAttributesToTagsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataAttributesToTagsSettings",
               &Z_Registration_Info_UClass_UPCGDataAttributesToTagsSettings.InnerSingleton,
               StaticRegisterNativesUPCGDataAttributesToTagsSettings,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGDataAttributesToTagsSettings>,
               InternalVTableHelperCtorCaller<UPCGDataAttributesToTagsSettings>,local_res8,
               UPCGDataAttributesAndTagsSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataAttributesToTagsSettings.InnerSingleton;
}

// StaticRegisterNativesUPCGDataAttributesToTagsSettings @ 149a0ffb0

void __cdecl
UPCGDataAttributesToTagsSettings::StaticRegisterNativesUPCGDataAttributesToTagsSettings(void)

{
  return;
}

