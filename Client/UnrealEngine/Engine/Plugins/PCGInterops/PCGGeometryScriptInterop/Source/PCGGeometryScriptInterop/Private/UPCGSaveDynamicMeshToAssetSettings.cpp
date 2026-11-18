// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 9

// StaticClass @ 14cedc310

UClass * __cdecl UPCGSaveDynamicMeshToAssetSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSaveDynamicMeshToAssetSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGSaveDynamicMeshToAssetSettings",
               &Z_Registration_Info_UClass_UPCGSaveDynamicMeshToAssetSettings.InnerSingleton,
               StaticRegisterNativesUPCGSaveDynamicMeshToAssetSettings,0x1c0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSaveDynamicMeshToAssetSettings>,
               InternalVTableHelperCtorCaller<UPCGSaveDynamicMeshToAssetSettings>,local_res8,
               UPCGDynamicMeshBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSaveDynamicMeshToAssetSettings.InnerSingleton;
}

// UPCGSaveDynamicMeshToAssetSettings @ 14cee4040

UPCGSaveDynamicMeshToAssetSettings * __thiscall
UPCGSaveDynamicMeshToAssetSettings::UPCGSaveDynamicMeshToAssetSettings
          (UPCGSaveDynamicMeshToAssetSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bExportMaterialsFromDynamicMesh = true;
  this->_padding_ = (longlong)&___7UPCGSaveDynamicMeshToAssetSettings__6B_;
  (this->ExportParams).bOpenSaveDialog = true;
  (this->ExportParams).AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExportParams).AssetName.Data.ArrayNum = 0;
  (this->ExportParams).AssetName.Data.ArrayMax = 0;
  (this->ExportParams).AssetPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExportParams).AssetPath.Data.ArrayNum = 0;
  (this->ExportParams).AssetPath.Data.ArrayMax = 0;
  (this->ExportParams).bSaveOnExportEnded = true;
  FGeometryScriptCopyMeshToAssetOptions::FGeometryScriptCopyMeshToAssetOptions
            (&this->CopyMeshToAssetOptions);
  (this->MeshWriteLOD).bWriteHiResSource = false;
  (this->MeshWriteLOD).LODIndex = 0;
  return this;
}

// UPCGSaveDynamicMeshToAssetSettings @ 14cee40c0

UPCGSaveDynamicMeshToAssetSettings * __thiscall
UPCGSaveDynamicMeshToAssetSettings::UPCGSaveDynamicMeshToAssetSettings
          (UPCGSaveDynamicMeshToAssetSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bExportMaterialsFromDynamicMesh = true;
  this->_padding_ = (longlong)&___7UPCGSaveDynamicMeshToAssetSettings__6B_;
  (this->ExportParams).bOpenSaveDialog = true;
  (this->ExportParams).AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExportParams).AssetName.Data.ArrayNum = 0;
  (this->ExportParams).AssetName.Data.ArrayMax = 0;
  (this->ExportParams).AssetPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExportParams).AssetPath.Data.ArrayNum = 0;
  (this->ExportParams).AssetPath.Data.ArrayMax = 0;
  (this->ExportParams).bSaveOnExportEnded = true;
  FGeometryScriptCopyMeshToAssetOptions::FGeometryScriptCopyMeshToAssetOptions
            (&this->CopyMeshToAssetOptions);
  (this->MeshWriteLOD).bWriteHiResSource = false;
  (this->MeshWriteLOD).LODIndex = 0;
  return this;
}

// ~UPCGSaveDynamicMeshToAssetSettings @ 14cee4c30

void __thiscall
UPCGSaveDynamicMeshToAssetSettings::~UPCGSaveDynamicMeshToAssetSettings
          (UPCGSaveDynamicMeshToAssetSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGSaveDynamicMeshToAssetSettings__6B_;
  FGeometryScriptCopyMeshToAssetOptions::~FGeometryScriptCopyMeshToAssetOptions
            (&this->CopyMeshToAssetOptions);
  pFVar1 = (this->ExportParams).AssetPath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExportParams).AssetName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPCGDynamicMeshBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 14ceea9a0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGSaveDynamicMeshToAssetSettings::CreateElement
          (UPCGSaveDynamicMeshToAssetSettings *this,
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
         ___7__TIntrusiveReferenceController_VFPCGSaveDynamicMeshToAssetElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGSaveDynamicMeshToAssetElement__6B_;
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

// GetPrivateStaticClass @ 14cef3860

UClass * __cdecl UPCGSaveDynamicMeshToAssetSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSaveDynamicMeshToAssetSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGSaveDynamicMeshToAssetSettings",
               &Z_Registration_Info_UClass_UPCGSaveDynamicMeshToAssetSettings.InnerSingleton,
               StaticRegisterNativesUPCGSaveDynamicMeshToAssetSettings,0x1c0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSaveDynamicMeshToAssetSettings>,
               InternalVTableHelperCtorCaller<UPCGSaveDynamicMeshToAssetSettings>,local_res8,
               UPCGDynamicMeshBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSaveDynamicMeshToAssetSettings.InnerSingleton;
}

// InputPinProperties @ 14cef4020

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSaveDynamicMeshToAssetSettings::InputPinProperties
          (UPCGSaveDynamicMeshToAssetSettings *this,
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
                      &PCGPinConstants::DefaultInputLabel,pFVar4,false,false,pFVar3);
  pFVar5->PinStatus = Required;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 14cef46e0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSaveDynamicMeshToAssetSettings::OutputPinProperties
          (UPCGSaveDynamicMeshToAssetSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FName local_res10;
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Param);
  ::FName::FName(&local_res10,L"OutAssetPath");
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),&local_res10,pFVar4,false,false,
             pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGSaveDynamicMeshToAssetSettings @ 14cef9c60

void __cdecl
UPCGSaveDynamicMeshToAssetSettings::StaticRegisterNativesUPCGSaveDynamicMeshToAssetSettings(void)

{
  return;
}

