// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 9

// StaticClass @ 14cedc5e0

UClass * __cdecl UPCGStaticMeshToDynamicMeshSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGStaticMeshToDynamicMeshSettings.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGStaticMeshToDynamicMeshSettings",
               &Z_Registration_Info_UClass_UPCGStaticMeshToDynamicMeshSettings.InnerSingleton,
               StaticRegisterNativesUPCGStaticMeshToDynamicMeshSettings,0x118,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGStaticMeshToDynamicMeshSettings>,
               InternalVTableHelperCtorCaller<UPCGStaticMeshToDynamicMeshSettings>,local_res8,
               UPCGDynamicMeshBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGStaticMeshToDynamicMeshSettings.InnerSingleton;
}

// UPCGStaticMeshToDynamicMeshSettings @ 14cee4300

UPCGStaticMeshToDynamicMeshSettings * __thiscall
UPCGStaticMeshToDynamicMeshSettings::UPCGStaticMeshToDynamicMeshSettings
          (UPCGStaticMeshToDynamicMeshSettings *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this_00 = &(this->StaticMesh).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UPCGStaticMeshToDynamicMeshSettings__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->bExtractMaterials = true;
  (this->OverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideMaterials).ArrayNum = 0;
  (this->OverrideMaterials).ArrayMax = 0;
  this->RequestedLODType = MaxAvailable;
  this->RequestedLODIndex = 0;
  this->bSynchronousLoad = false;
  return this;
}

// UPCGStaticMeshToDynamicMeshSettings @ 14cee4390

UPCGStaticMeshToDynamicMeshSettings * __thiscall
UPCGStaticMeshToDynamicMeshSettings::UPCGStaticMeshToDynamicMeshSettings
          (UPCGStaticMeshToDynamicMeshSettings *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this_00 = &(this->StaticMesh).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UPCGStaticMeshToDynamicMeshSettings__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->bExtractMaterials = true;
  (this->OverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideMaterials).ArrayNum = 0;
  (this->OverrideMaterials).ArrayMax = 0;
  this->RequestedLODType = MaxAvailable;
  this->RequestedLODIndex = 0;
  this->bSynchronousLoad = false;
  return this;
}

// ~UPCGStaticMeshToDynamicMeshSettings @ 14cee4d10

void __thiscall
UPCGStaticMeshToDynamicMeshSettings::~UPCGStaticMeshToDynamicMeshSettings
          (UPCGStaticMeshToDynamicMeshSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGStaticMeshToDynamicMeshSettings__6B_;
  DestructItems<TSoftObjectPtr<UMaterialInterface>,int>
            ((TSoftObjectPtr<UMaterialInterface> *)(this->OverrideMaterials).AllocatorInstance.Data,
             (this->OverrideMaterials).ArrayNum);
  pFVar1 = (this->OverrideMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->StaticMesh).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this->_padding_ = (longlong)&___7UPCGDynamicMeshBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 14ceeabe0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGStaticMeshToDynamicMeshSettings::CreateElement
          (UPCGStaticMeshToDynamicMeshSettings *this,
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
         ___7__TIntrusiveReferenceController_VFPCGStaticMeshToDynamicMeshElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGStaticMeshToDynamicMeshElement__6B_;
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

// GetPrivateStaticClass @ 14cef3aa0

UClass * __cdecl UPCGStaticMeshToDynamicMeshSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGStaticMeshToDynamicMeshSettings.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGStaticMeshToDynamicMeshSettings",
               &Z_Registration_Info_UClass_UPCGStaticMeshToDynamicMeshSettings.InnerSingleton,
               StaticRegisterNativesUPCGStaticMeshToDynamicMeshSettings,0x118,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGStaticMeshToDynamicMeshSettings>,
               InternalVTableHelperCtorCaller<UPCGStaticMeshToDynamicMeshSettings>,local_res8,
               UPCGDynamicMeshBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGStaticMeshToDynamicMeshSettings.InnerSingleton;
}

// InputPinProperties @ 14cef4160

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGStaticMeshToDynamicMeshSettings::InputPinProperties
          (UPCGStaticMeshToDynamicMeshSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 14cef4790

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGStaticMeshToDynamicMeshSettings::OutputPinProperties
          (UPCGStaticMeshToDynamicMeshSettings *this,
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

// StaticRegisterNativesUPCGStaticMeshToDynamicMeshSettings @ 14cef9c90

void __cdecl
UPCGStaticMeshToDynamicMeshSettings::StaticRegisterNativesUPCGStaticMeshToDynamicMeshSettings(void)

{
  return;
}

