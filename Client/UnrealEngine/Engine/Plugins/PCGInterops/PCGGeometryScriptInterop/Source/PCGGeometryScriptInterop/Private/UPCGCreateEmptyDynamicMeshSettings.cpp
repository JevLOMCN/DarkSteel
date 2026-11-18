// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 9

// StaticClass @ 14cedcd90

UClass * __cdecl UPCGCreateEmptyDynamicMeshSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCreateEmptyDynamicMeshSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGCreateEmptyDynamicMeshSettings",
               &Z_Registration_Info_UClass_UPCGCreateEmptyDynamicMeshSettings.InnerSingleton,
               StaticRegisterNativesUPCGCreateEmptyDynamicMeshSettings,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCreateEmptyDynamicMeshSettings>,
               InternalVTableHelperCtorCaller<UPCGCreateEmptyDynamicMeshSettings>,local_res8,
               UPCGDynamicMeshBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCreateEmptyDynamicMeshSettings.InnerSingleton;
}

// UPCGCreateEmptyDynamicMeshSettings @ 14cee3740

UPCGCreateEmptyDynamicMeshSettings * __thiscall
UPCGCreateEmptyDynamicMeshSettings::UPCGCreateEmptyDynamicMeshSettings
          (UPCGCreateEmptyDynamicMeshSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGCreateEmptyDynamicMeshSettings__6B_;
  return this;
}

// UPCGCreateEmptyDynamicMeshSettings @ 14cee3770

UPCGCreateEmptyDynamicMeshSettings * __thiscall
UPCGCreateEmptyDynamicMeshSettings::UPCGCreateEmptyDynamicMeshSettings
          (UPCGCreateEmptyDynamicMeshSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGCreateEmptyDynamicMeshSettings__6B_;
  return this;
}

// ~UPCGCreateEmptyDynamicMeshSettings @ 14cee4aa0

void __thiscall
UPCGCreateEmptyDynamicMeshSettings::~UPCGCreateEmptyDynamicMeshSettings
          (UPCGCreateEmptyDynamicMeshSettings *this)

{
  *(undefined ***)this = &___7UPCGDynamicMeshBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 14ceea5e0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGCreateEmptyDynamicMeshSettings::CreateElement
          (UPCGCreateEmptyDynamicMeshSettings *this,
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
         ___7__TIntrusiveReferenceController_VFPCGCreateEmptyDynamicMeshElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGCreateEmptyDynamicMeshElement__6B_;
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

// GetPrivateStaticClass @ 14cef31a0

UClass * __cdecl UPCGCreateEmptyDynamicMeshSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCreateEmptyDynamicMeshSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGCreateEmptyDynamicMeshSettings",
               &Z_Registration_Info_UClass_UPCGCreateEmptyDynamicMeshSettings.InnerSingleton,
               StaticRegisterNativesUPCGCreateEmptyDynamicMeshSettings,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCreateEmptyDynamicMeshSettings>,
               InternalVTableHelperCtorCaller<UPCGCreateEmptyDynamicMeshSettings>,local_res8,
               UPCGDynamicMeshBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCreateEmptyDynamicMeshSettings.InnerSingleton;
}

// InputPinProperties @ 14cef3e30

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCreateEmptyDynamicMeshSettings::InputPinProperties
          (UPCGCreateEmptyDynamicMeshSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 14cef4360

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCreateEmptyDynamicMeshSettings::OutputPinProperties
          (UPCGCreateEmptyDynamicMeshSettings *this,
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

// StaticRegisterNativesUPCGCreateEmptyDynamicMeshSettings @ 14cef9ba0

void __cdecl
UPCGCreateEmptyDynamicMeshSettings::StaticRegisterNativesUPCGCreateEmptyDynamicMeshSettings(void)

{
  return;
}

