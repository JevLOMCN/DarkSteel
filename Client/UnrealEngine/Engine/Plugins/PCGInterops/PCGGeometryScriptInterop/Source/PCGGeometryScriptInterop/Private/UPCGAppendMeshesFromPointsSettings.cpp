// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 9

// StaticClass @ 14cedc250

UClass * __cdecl UPCGAppendMeshesFromPointsSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAppendMeshesFromPointsSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGAppendMeshesFromPointsSettings",
               &Z_Registration_Info_UClass_UPCGAppendMeshesFromPointsSettings.InnerSingleton,
               StaticRegisterNativesUPCGAppendMeshesFromPointsSettings,0x148,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGAppendMeshesFromPointsSettings>,
               InternalVTableHelperCtorCaller<UPCGAppendMeshesFromPointsSettings>,local_res8,
               UPCGDynamicMeshBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAppendMeshesFromPointsSettings.InnerSingleton;
}

// UPCGAppendMeshesFromPointsSettings @ 14cee3580

UPCGAppendMeshesFromPointsSettings * __thiscall
UPCGAppendMeshesFromPointsSettings::UPCGAppendMeshesFromPointsSettings
          (UPCGAppendMeshesFromPointsSettings *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this_00 = &(this->StaticMesh).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UPCGAppendMeshesFromPointsSettings__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->MeshAttribute);
  this->bExtractMaterials = true;
  this->RequestedLODType = RenderData;
  this->RequestedLODIndex = 0;
  this->bSynchronousLoad = false;
  return this;
}

// UPCGAppendMeshesFromPointsSettings @ 14cee3600

UPCGAppendMeshesFromPointsSettings * __thiscall
UPCGAppendMeshesFromPointsSettings::UPCGAppendMeshesFromPointsSettings
          (UPCGAppendMeshesFromPointsSettings *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this_00 = &(this->StaticMesh).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UPCGAppendMeshesFromPointsSettings__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->MeshAttribute);
  this->bExtractMaterials = true;
  this->RequestedLODType = RenderData;
  this->RequestedLODIndex = 0;
  this->bSynchronousLoad = false;
  return this;
}

// ~UPCGAppendMeshesFromPointsSettings @ 14cee4a10

void __thiscall
UPCGAppendMeshesFromPointsSettings::~UPCGAppendMeshesFromPointsSettings
          (UPCGAppendMeshesFromPointsSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGAppendMeshesFromPointsSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->MeshAttribute).field_0x28,
             *(int *)&(this->MeshAttribute).field_0x30);
  pvVar1 = *(void **)&(this->MeshAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->StaticMesh).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UPCGDynamicMeshBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 14ceea460

TSharedPtr<IPCGElement,1> * __thiscall
UPCGAppendMeshesFromPointsSettings::CreateElement
          (UPCGAppendMeshesFromPointsSettings *this,
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
         ___7__TIntrusiveReferenceController_VFPCGAppendMeshesFromPointsElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGAppendMeshesFromPointsElement__6B_;
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

// GetPrivateStaticClass @ 14cef3020

UClass * __cdecl UPCGAppendMeshesFromPointsSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAppendMeshesFromPointsSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGAppendMeshesFromPointsSettings",
               &Z_Registration_Info_UClass_UPCGAppendMeshesFromPointsSettings.InnerSingleton,
               StaticRegisterNativesUPCGAppendMeshesFromPointsSettings,0x148,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGAppendMeshesFromPointsSettings>,
               InternalVTableHelperCtorCaller<UPCGAppendMeshesFromPointsSettings>,local_res8,
               UPCGDynamicMeshBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAppendMeshesFromPointsSettings.InnerSingleton;
}

// InputPinProperties @ 14cef3ba0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGAppendMeshesFromPointsSettings::InputPinProperties
          (UPCGAppendMeshesFromPointsSettings *this,
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
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,DynamicMesh);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGAppendMeshesFromPoints::InDynMeshPinLabel,pFVar4,false,false,pFVar3);
  pFVar5->PinStatus = Required;
  iVar2 = __return_storage_ptr__->ArrayNum;
  if (iVar2 == __return_storage_ptr__->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGAppendMeshesFromPoints::InPointsPinLabel,pFVar4,false,false,pFVar3);
  pFVar5->PinStatus = Required;
  if (this->Mode == DynamicMesh) {
    iVar2 = __return_storage_ptr__->ArrayNum;
    if (iVar2 == __return_storage_ptr__->ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar3 = FText::GetEmpty();
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,DynamicMesh);
    pFVar5 = FPCGPinProperties::FPCGPinProperties
                       ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                        &PCGAppendMeshesFromPoints::InAppendMeshPinLabel,pFVar4,false,false,pFVar3);
    pFVar5->PinStatus = Required;
  }
  return __return_storage_ptr__;
}

// OutputPinProperties @ 14cef42d0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGAppendMeshesFromPointsSettings::OutputPinProperties
          (UPCGAppendMeshesFromPointsSettings *this,
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

// StaticRegisterNativesUPCGAppendMeshesFromPointsSettings @ 14cef9b80

void __cdecl
UPCGAppendMeshesFromPointsSettings::StaticRegisterNativesUPCGAppendMeshesFromPointsSettings(void)

{
  return;
}

