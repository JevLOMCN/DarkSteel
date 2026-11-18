// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149720320

UClass * __cdecl UPCGGetAssetListSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetAssetListSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetAssetListSettings",
               &Z_Registration_Info_UClass_UPCGGetAssetListSettings.InnerSingleton,
               StaticRegisterNativesUPCGGetAssetListSettings,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGGetAssetListSettings>,
               InternalVTableHelperCtorCaller<UPCGGetAssetListSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetAssetListSettings.InnerSingleton;
}

// UPCGGetAssetListSettings @ 1497256a0

UPCGGetAssetListSettings * __thiscall
UPCGGetAssetListSettings::UPCGGetAssetListSettings
          (UPCGGetAssetListSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->AssetListSource = Folder;
  this->_padding_ = (longlong)&___7UPCGGetAssetListSettings__6B_;
  (this->Directory).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Directory).Path.Data.ArrayNum = 0;
  (this->Directory).Path.Data.ArrayMax = 0;
  (this->Collection).ComparisonIndex = 0;
  (this->Collection).Number = 0;
  this->bGetClassPath = false;
  this->bQuiet = false;
  return this;
}

// UPCGGetAssetListSettings @ 1497256f0

UPCGGetAssetListSettings * __thiscall
UPCGGetAssetListSettings::UPCGGetAssetListSettings
          (UPCGGetAssetListSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->AssetListSource = Folder;
  this->_padding_ = (longlong)&___7UPCGGetAssetListSettings__6B_;
  (this->Directory).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Directory).Path.Data.ArrayNum = 0;
  (this->Directory).Path.Data.ArrayMax = 0;
  (this->Collection).ComparisonIndex = 0;
  (this->Collection).Number = 0;
  this->bGetClassPath = false;
  this->bQuiet = false;
  return this;
}

// ~UPCGGetAssetListSettings @ 149725e70

void __thiscall UPCGGetAssetListSettings::~UPCGGetAssetListSettings(UPCGGetAssetListSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGGetAssetListSettings__6B_;
  pFVar1 = (this->Directory).Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149726750

TSharedPtr<IPCGElement,1> * __thiscall
UPCGGetAssetListSettings::CreateElement
          (UPCGGetAssetListSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGGetAssetListElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGGetAssetListElement__6B_;
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

// GetPrivateStaticClass @ 1497272d0

UClass * __cdecl UPCGGetAssetListSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetAssetListSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetAssetListSettings",
               &Z_Registration_Info_UClass_UPCGGetAssetListSettings.InnerSingleton,
               StaticRegisterNativesUPCGGetAssetListSettings,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGGetAssetListSettings>,
               InternalVTableHelperCtorCaller<UPCGGetAssetListSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetAssetListSettings.InnerSingleton;
}

// InputPinProperties @ 1497279e0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGetAssetListSettings::InputPinProperties
          (UPCGGetAssetListSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGGetAssetListSettings @ 149727ff0

void __cdecl UPCGGetAssetListSettings::StaticRegisterNativesUPCGGetAssetListSettings(void)

{
  return;
}

// OutputPinProperties @ 149a03560

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGetAssetListSettings::OutputPinProperties
          (UPCGGetAssetListSettings *this,
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
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

