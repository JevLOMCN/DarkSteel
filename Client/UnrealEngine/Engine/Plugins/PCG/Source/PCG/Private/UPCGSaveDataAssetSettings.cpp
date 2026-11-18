// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149901d40

UClass * __cdecl UPCGSaveDataAssetSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSaveDataAssetSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSaveDataAssetSettings",
               &Z_Registration_Info_UClass_UPCGSaveDataAssetSettings.InnerSingleton,
               StaticRegisterNativesUPCGSaveDataAssetSettings,0x130,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGSaveDataAssetSettings>,
               InternalVTableHelperCtorCaller<UPCGSaveDataAssetSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSaveDataAssetSettings.InnerSingleton;
}

// UPCGSaveDataAssetSettings @ 1499c49f0

UPCGSaveDataAssetSettings * __thiscall
UPCGSaveDataAssetSettings::UPCGSaveDataAssetSettings
          (UPCGSaveDataAssetSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGSaveDataAssetSettings__6B_;
  (this->Pins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pins).ArrayNum = 0;
  (this->Pins).ArrayMax = 0;
  (this->CustomDataCollectionExporterClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Params).AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Params).AssetName.Data.ArrayNum = 0;
  (this->Params).AssetName.Data.ArrayMax = 0;
  (this->Params).AssetPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Params).AssetPath.Data.ArrayNum = 0;
  (this->Params).AssetPath.Data.ArrayMax = 0;
  (this->AssetDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetDescription).Data.ArrayNum = 0;
  (this->AssetDescription).Data.ArrayMax = 0;
  (this->Params).bOpenSaveDialog = true;
  (this->Params).bSaveOnExportEnded = true;
  (this->AssetColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  return this;
}

// UPCGSaveDataAssetSettings @ 1499c4a80

UPCGSaveDataAssetSettings * __thiscall
UPCGSaveDataAssetSettings::UPCGSaveDataAssetSettings(UPCGSaveDataAssetSettings *this)

{
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  FObjectInitializer *pFVar3;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> local_18;
  
  pFVar3 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar3);
  this->_padding_ = (longlong)&___7UPCGSaveDataAssetSettings__6B_;
  pTVar1 = &this->Pins;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Pins).ArrayNum = 0;
  (this->Pins).ArrayMax = 0;
  (this->CustomDataCollectionExporterClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Params).bOpenSaveDialog = true;
  (this->Params).AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Params).AssetName.Data.ArrayNum = 0;
  (this->Params).AssetName.Data.ArrayMax = 0;
  (this->Params).AssetPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Params).AssetPath.Data.ArrayNum = 0;
  (this->Params).AssetPath.Data.ArrayMax = 0;
  (this->Params).bSaveOnExportEnded = true;
  (this->AssetDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetDescription).Data.ArrayNum = 0;
  (this->AssetDescription).Data.ArrayMax = 0;
  (this->AssetColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  pTVar4 = UPCGSettings::InputPinProperties((UPCGSettings *)this,&local_18);
  if (pTVar1 != pTVar4) {
    DestructItems<FPCGPinProperties,int>
              ((FPCGPinProperties *)(pTVar1->AllocatorInstance).Data,(this->Pins).ArrayNum);
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar4->AllocatorInstance).Data;
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Pins).ArrayNum = pTVar4->ArrayNum;
    (this->Pins).ArrayMax = pTVar4->ArrayMax;
    pTVar4->ArrayNum = 0;
    pTVar4->ArrayMax = 0;
  }
  DestructItems<FPCGPinProperties,int>
            ((FPCGPinProperties *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FPCGPinProperties *)local_18.AllocatorInstance.Data != (FPCGPinProperties *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return this;
}

// ~UPCGSaveDataAssetSettings @ 1499c6e90

void __thiscall
UPCGSaveDataAssetSettings::~UPCGSaveDataAssetSettings(UPCGSaveDataAssetSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGSaveDataAssetSettings__6B_;
  pFVar1 = (this->AssetDescription).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Params).AssetPath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Params).AssetName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGPinProperties,int>
            ((FPCGPinProperties *)(this->Pins).AllocatorInstance.Data,(this->Pins).ArrayNum);
  pFVar1 = (this->Pins).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 1499dc210

TSharedPtr<IPCGElement,1> * __thiscall
UPCGSaveDataAssetSettings::CreateElement
          (UPCGSaveDataAssetSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGSaveDataAssetElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGSaveDataAssetElement__6B_;
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

// GetPrivateStaticClass @ 1499fc050

UClass * __cdecl UPCGSaveDataAssetSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSaveDataAssetSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSaveDataAssetSettings",
               &Z_Registration_Info_UClass_UPCGSaveDataAssetSettings.InnerSingleton,
               StaticRegisterNativesUPCGSaveDataAssetSettings,0x130,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGSaveDataAssetSettings>,
               InternalVTableHelperCtorCaller<UPCGSaveDataAssetSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSaveDataAssetSettings.InnerSingleton;
}

// InputPinProperties @ 1499ffd80

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSaveDataAssetSettings::InputPinProperties
          (UPCGSaveDataAssetSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FPCGPinProperties *pFVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->Pins).ArrayNum;
  pFVar2 = (FPCGPinProperties *)(this->Pins).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FPCGPinProperties,FPCGPinProperties,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,pFVar2,iVar1);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149a03dd0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSaveDataAssetSettings::OutputPinProperties
          (UPCGSaveDataAssetSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGSaveDataAssetSettings @ 149a10150

void __cdecl UPCGSaveDataAssetSettings::StaticRegisterNativesUPCGSaveDataAssetSettings(void)

{
  return;
}

