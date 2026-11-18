// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149b9ebe0

UClass * __cdecl UPCGSaveTextureToAssetSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSaveTextureToAssetSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSaveTextureToAssetSettings",
               &Z_Registration_Info_UClass_UPCGSaveTextureToAssetSettings.InnerSingleton,
               StaticRegisterNativesUPCGSaveTextureToAssetSettings,0xf8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSaveTextureToAssetSettings>,
               InternalVTableHelperCtorCaller<UPCGSaveTextureToAssetSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSaveTextureToAssetSettings.InnerSingleton;
}

// UPCGSaveTextureToAssetSettings @ 149be8270

UPCGSaveTextureToAssetSettings * __thiscall
UPCGSaveTextureToAssetSettings::UPCGSaveTextureToAssetSettings
          (UPCGSaveTextureToAssetSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGSaveTextureToAssetSettings__6B_;
  (this->ExporterParams).AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExporterParams).AssetName.Data.ArrayNum = 0;
  (this->ExporterParams).AssetName.Data.ArrayMax = 0;
  (this->ExporterParams).AssetPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExporterParams).AssetPath.Data.ArrayNum = 0;
  (this->ExporterParams).AssetPath.Data.ArrayMax = 0;
  (this->ExporterParams).bOpenSaveDialog = true;
  (this->ExporterParams).bSaveOnExportEnded = true;
  return this;
}

// UPCGSaveTextureToAssetSettings @ 149be82d0

UPCGSaveTextureToAssetSettings * __thiscall
UPCGSaveTextureToAssetSettings::UPCGSaveTextureToAssetSettings
          (UPCGSaveTextureToAssetSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGSaveTextureToAssetSettings__6B_;
  (this->ExporterParams).AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExporterParams).AssetName.Data.ArrayNum = 0;
  (this->ExporterParams).AssetName.Data.ArrayMax = 0;
  (this->ExporterParams).AssetPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExporterParams).AssetPath.Data.ArrayNum = 0;
  (this->ExporterParams).AssetPath.Data.ArrayMax = 0;
  (this->ExporterParams).bOpenSaveDialog = true;
  (this->ExporterParams).bSaveOnExportEnded = true;
  return this;
}

// ~UPCGSaveTextureToAssetSettings @ 149bea230

void __thiscall
UPCGSaveTextureToAssetSettings::~UPCGSaveTextureToAssetSettings
          (UPCGSaveTextureToAssetSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGSaveTextureToAssetSettings__6B_;
  pFVar1 = (this->ExporterParams).AssetPath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExporterParams).AssetName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c063a0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGSaveTextureToAssetSettings::CreateElement
          (UPCGSaveTextureToAssetSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGSaveTextureToAssetElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGSaveTextureToAssetElement__6B_;
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

// GetPrivateStaticClass @ 149c26c90

UClass * __cdecl UPCGSaveTextureToAssetSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSaveTextureToAssetSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSaveTextureToAssetSettings",
               &Z_Registration_Info_UClass_UPCGSaveTextureToAssetSettings.InnerSingleton,
               StaticRegisterNativesUPCGSaveTextureToAssetSettings,0xf8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSaveTextureToAssetSettings>,
               InternalVTableHelperCtorCaller<UPCGSaveTextureToAssetSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSaveTextureToAssetSettings.InnerSingleton;
}

// InputPinProperties @ 149c2d130

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSaveTextureToAssetSettings::InputPinProperties
          (UPCGSaveTextureToAssetSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,BaseTexture);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGPinConstants::DefaultInputLabel,pFVar4,false,false,pFVar3);
  pFVar5->PinStatus = Required;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c2f080

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSaveTextureToAssetSettings::OutputPinProperties
          (UPCGSaveTextureToAssetSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Param);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGSaveTextureToAssetConstants::OutAssetPathLabel,pFVar4,true,false,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGSaveTextureToAssetSettings @ 149c35640

void __cdecl
UPCGSaveTextureToAssetSettings::StaticRegisterNativesUPCGSaveTextureToAssetSettings(void)

{
  return;
}

