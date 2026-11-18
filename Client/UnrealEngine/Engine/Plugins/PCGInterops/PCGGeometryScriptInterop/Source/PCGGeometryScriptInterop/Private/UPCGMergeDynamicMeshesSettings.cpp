// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 8

// StaticClass @ 14cedccd0

UClass * __cdecl UPCGMergeDynamicMeshesSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMergeDynamicMeshesSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGMergeDynamicMeshesSettings",
               &Z_Registration_Info_UClass_UPCGMergeDynamicMeshesSettings.InnerSingleton,
               StaticRegisterNativesUPCGMergeDynamicMeshesSettings,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMergeDynamicMeshesSettings>,
               InternalVTableHelperCtorCaller<UPCGMergeDynamicMeshesSettings>,local_res8,
               UPCGDynamicMeshBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMergeDynamicMeshesSettings.InnerSingleton;
}

// UPCGMergeDynamicMeshesSettings @ 14cee3b50

UPCGMergeDynamicMeshesSettings * __thiscall
UPCGMergeDynamicMeshesSettings::UPCGMergeDynamicMeshesSettings
          (UPCGMergeDynamicMeshesSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGMergeDynamicMeshesSettings__6B_;
  return this;
}

// UPCGMergeDynamicMeshesSettings @ 14cee3b80

UPCGMergeDynamicMeshesSettings * __thiscall
UPCGMergeDynamicMeshesSettings::UPCGMergeDynamicMeshesSettings
          (UPCGMergeDynamicMeshesSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGMergeDynamicMeshesSettings__6B_;
  return this;
}

// ~UPCGMergeDynamicMeshesSettings @ 14cee4b60

void __thiscall
UPCGMergeDynamicMeshesSettings::~UPCGMergeDynamicMeshesSettings
          (UPCGMergeDynamicMeshesSettings *this)

{
  *(undefined ***)this = &___7UPCGDynamicMeshBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 14ceea760

TSharedPtr<IPCGElement,1> * __thiscall
UPCGMergeDynamicMeshesSettings::CreateElement
          (UPCGMergeDynamicMeshesSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGMergeDynamicMeshesElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGMergeDynamicMeshesElement__6B_;
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

// GetPrivateStaticClass @ 14cef3620

UClass * __cdecl UPCGMergeDynamicMeshesSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMergeDynamicMeshesSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGMergeDynamicMeshesSettings",
               &Z_Registration_Info_UClass_UPCGMergeDynamicMeshesSettings.InnerSingleton,
               StaticRegisterNativesUPCGMergeDynamicMeshesSettings,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMergeDynamicMeshesSettings>,
               InternalVTableHelperCtorCaller<UPCGMergeDynamicMeshesSettings>,local_res8,
               UPCGDynamicMeshBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMergeDynamicMeshesSettings.InnerSingleton;
}

// OutputPinProperties @ 14cef4510

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGMergeDynamicMeshesSettings::OutputPinProperties
          (UPCGMergeDynamicMeshesSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,DynamicMesh);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,false,false,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGMergeDynamicMeshesSettings @ 14cef9c30

void __cdecl
UPCGMergeDynamicMeshesSettings::StaticRegisterNativesUPCGMergeDynamicMeshesSettings(void)

{
  return;
}

