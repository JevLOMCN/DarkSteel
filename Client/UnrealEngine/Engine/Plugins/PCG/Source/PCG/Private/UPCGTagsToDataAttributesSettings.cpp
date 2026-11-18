// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// StaticClass @ 149900480

UClass * __cdecl UPCGTagsToDataAttributesSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGTagsToDataAttributesSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGTagsToDataAttributesSettings",
               &Z_Registration_Info_UClass_UPCGTagsToDataAttributesSettings.InnerSingleton,
               StaticRegisterNativesUPCGTagsToDataAttributesSettings,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGTagsToDataAttributesSettings>,
               InternalVTableHelperCtorCaller<UPCGTagsToDataAttributesSettings>,local_res8,
               UPCGDataAttributesAndTagsSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGTagsToDataAttributesSettings.InnerSingleton;
}

// UPCGTagsToDataAttributesSettings @ 1499c5510

UPCGTagsToDataAttributesSettings * __thiscall
UPCGTagsToDataAttributesSettings::UPCGTagsToDataAttributesSettings
          (UPCGTagsToDataAttributesSettings *this,FVTableHelper *param_1)

{
  UPCGDataAttributesAndTagsSettingsBase::UPCGDataAttributesAndTagsSettingsBase
            ((UPCGDataAttributesAndTagsSettingsBase *)this,param_1);
  *(undefined ***)this = &___7UPCGTagsToDataAttributesSettings__6B_;
  return this;
}

// UPCGTagsToDataAttributesSettings @ 1499c5540

UPCGTagsToDataAttributesSettings * __thiscall
UPCGTagsToDataAttributesSettings::UPCGTagsToDataAttributesSettings
          (UPCGTagsToDataAttributesSettings *this,FObjectInitializer *param_1)

{
  UPCGDataAttributesAndTagsSettingsBase::UPCGDataAttributesAndTagsSettingsBase
            ((UPCGDataAttributesAndTagsSettingsBase *)this,param_1);
  *(undefined ***)this = &___7UPCGTagsToDataAttributesSettings__6B_;
  return this;
}

// ~UPCGTagsToDataAttributesSettings @ 1499c71e0

void __thiscall
UPCGTagsToDataAttributesSettings::~UPCGTagsToDataAttributesSettings
          (UPCGTagsToDataAttributesSettings *this)

{
  *(undefined ***)this = &___7UPCGDataAttributesAndTagsSettingsBase__6B_;
  *(undefined4 *)&this->field_0x110 = 0;
  if (*(void **)&this->field_0x108 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x108);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FPCGAttributePropertyOutputSelector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FPCGAttributePropertyOutputSelector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FPCGAttributePropertyOutputSelector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0xc8);
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 1499dc6d0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGTagsToDataAttributesSettings::CreateElement
          (UPCGTagsToDataAttributesSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGTagsToDataAttributesElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGTagsToDataAttributesElement__6B_;
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

// GetPrivateStaticClass @ 1499fc590

UClass * __cdecl UPCGTagsToDataAttributesSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGTagsToDataAttributesSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGTagsToDataAttributesSettings",
               &Z_Registration_Info_UClass_UPCGTagsToDataAttributesSettings.InnerSingleton,
               StaticRegisterNativesUPCGTagsToDataAttributesSettings,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGTagsToDataAttributesSettings>,
               InternalVTableHelperCtorCaller<UPCGTagsToDataAttributesSettings>,local_res8,
               UPCGDataAttributesAndTagsSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGTagsToDataAttributesSettings.InnerSingleton;
}

// StaticRegisterNativesUPCGTagsToDataAttributesSettings @ 149a101c0

void __cdecl
UPCGTagsToDataAttributesSettings::StaticRegisterNativesUPCGTagsToDataAttributesSettings(void)

{
  return;
}

