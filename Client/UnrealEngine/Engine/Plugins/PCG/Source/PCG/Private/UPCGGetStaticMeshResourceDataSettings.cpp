// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149b9f1a0

UClass * __cdecl UPCGGetStaticMeshResourceDataSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetStaticMeshResourceDataSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetStaticMeshResourceDataSettings",
               &Z_Registration_Info_UClass_UPCGGetStaticMeshResourceDataSettings.InnerSingleton,
               StaticRegisterNativesUPCGGetStaticMeshResourceDataSettings,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGetStaticMeshResourceDataSettings>,
               InternalVTableHelperCtorCaller<UPCGGetStaticMeshResourceDataSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetStaticMeshResourceDataSettings.InnerSingleton;
}

// UPCGGetStaticMeshResourceDataSettings @ 149be69f0

UPCGGetStaticMeshResourceDataSettings * __thiscall
UPCGGetStaticMeshResourceDataSettings::UPCGGetStaticMeshResourceDataSettings
          (UPCGGetStaticMeshResourceDataSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGGetStaticMeshResourceDataSettings__6B_;
  (this->StaticMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticMeshes).ArrayNum = 0;
  (this->StaticMeshes).ArrayMax = 0;
  this->bOverrideFromInput = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->MeshAttribute);
  return this;
}

// UPCGGetStaticMeshResourceDataSettings @ 149be6a40

UPCGGetStaticMeshResourceDataSettings * __thiscall
UPCGGetStaticMeshResourceDataSettings::UPCGGetStaticMeshResourceDataSettings
          (UPCGGetStaticMeshResourceDataSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGGetStaticMeshResourceDataSettings__6B_;
  (this->StaticMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticMeshes).ArrayNum = 0;
  (this->StaticMeshes).ArrayMax = 0;
  this->bOverrideFromInput = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->MeshAttribute);
  return this;
}

// ~UPCGGetStaticMeshResourceDataSettings @ 149be9990

void __thiscall
UPCGGetStaticMeshResourceDataSettings::~UPCGGetStaticMeshResourceDataSettings
          (UPCGGetStaticMeshResourceDataSettings *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UPCGGetStaticMeshResourceDataSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->MeshAttribute).field_0x28,
             *(int *)&(this->MeshAttribute).field_0x30);
  pvVar1 = *(void **)&(this->MeshAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<TSoftObjectPtr<UStaticMesh>,int>
            ((TSoftObjectPtr<UStaticMesh> *)(this->StaticMeshes).AllocatorInstance.Data,
             (this->StaticMeshes).ArrayNum);
  pFVar2 = (this->StaticMeshes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c04c60

TSharedPtr<IPCGElement,1> * __thiscall
UPCGGetStaticMeshResourceDataSettings::CreateElement
          (UPCGGetStaticMeshResourceDataSettings *this,
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
         ___7__TIntrusiveReferenceController_VFPCGGetStaticMeshResourceDataElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGGetStaticMeshResourceDataElement__6B_;
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

// GetPrivateStaticClass @ 149c25250

UClass * __cdecl UPCGGetStaticMeshResourceDataSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetStaticMeshResourceDataSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetStaticMeshResourceDataSettings",
               &Z_Registration_Info_UClass_UPCGGetStaticMeshResourceDataSettings.InnerSingleton,
               StaticRegisterNativesUPCGGetStaticMeshResourceDataSettings,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGetStaticMeshResourceDataSettings>,
               InternalVTableHelperCtorCaller<UPCGGetStaticMeshResourceDataSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetStaticMeshResourceDataSettings.InnerSingleton;
}

// InputPinProperties @ 149c2bd50

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGetStaticMeshResourceDataSettings::InputPinProperties
          (UPCGGetStaticMeshResourceDataSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGPinProperties *pFVar5;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (this->bOverrideFromInput != false) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar3 = FText::GetEmpty();
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Param);
    pFVar5 = FPCGPinProperties::FPCGPinProperties
                       ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                        &PCGGetStaticMeshResourceDataConstants::MeshOverridesPinLabel,pFVar4,true,
                        true,pFVar3);
    pFVar5->PinStatus = Required;
  }
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c2dd00

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGetStaticMeshResourceDataSettings::OutputPinProperties
          (UPCGGetStaticMeshResourceDataSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Resource);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGGetStaticMeshResourceDataSettings @ 149c353e0

void __cdecl
UPCGGetStaticMeshResourceDataSettings::StaticRegisterNativesUPCGGetStaticMeshResourceDataSettings
          (void)

{
  return;
}

