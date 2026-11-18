// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 9

// StaticClass @ 14da55540

UClass * __cdecl UPVImporterSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVImporterSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVImporterSettings",
               &Z_Registration_Info_UClass_UPVImporterSettings.InnerSingleton,
               StaticRegisterNativesUPVImporterSettings,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPVImporterSettings>,
               InternalVTableHelperCtorCaller<UPVImporterSettings>,local_res8,
               UPVBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVImporterSettings.InnerSingleton;
}

// UPVImporterSettings @ 14da66a10

UPVImporterSettings * __thiscall
UPVImporterSettings::UPVImporterSettings(UPVImporterSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPVImporterSettings__6B_;
  (this->SkeletonFile).FilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletonFile).FilePath.Data.ArrayNum = 0;
  (this->SkeletonFile).FilePath.Data.ArrayMax = 0;
  return this;
}

// UPVImporterSettings @ 14da66a50

UPVImporterSettings * __thiscall UPVImporterSettings::UPVImporterSettings(UPVImporterSettings *this)

{
  UPVBaseSettings::UPVBaseSettings((UPVBaseSettings *)this);
  this->_padding_ = (longlong)&___7UPVImporterSettings__6B_;
  (this->SkeletonFile).FilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletonFile).FilePath.Data.ArrayNum = 0;
  (this->SkeletonFile).FilePath.Data.ArrayMax = 0;
  return this;
}

// ~UPVImporterSettings @ 14da67cc0

void __thiscall UPVImporterSettings::~UPVImporterSettings(UPVImporterSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPVImporterSettings__6B_;
  pFVar1 = (this->SkeletonFile).FilePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPVBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 14da79900

TSharedPtr<IPCGElement,1> * __thiscall
UPVImporterSettings::CreateElement
          (UPVImporterSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         &___7__TIntrusiveReferenceController_VFPVImporterElement___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FPVImporterElement__6B_;
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

// GetOutputPinTypeIdentifier @ 14da97070

FPCGDataTypeIdentifier * __thiscall
UPVImporterSettings::GetOutputPinTypeIdentifier
          (UPVImporterSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__)

{
  FPCGDataTypeBaseId *pFVar1;
  
  pFVar1 = FPVDataTypeInfoGrowth::AsId();
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14da99440

UClass * __cdecl UPVImporterSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVImporterSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVImporterSettings",
               &Z_Registration_Info_UClass_UPVImporterSettings.InnerSingleton,
               StaticRegisterNativesUPVImporterSettings,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPVImporterSettings>,
               InternalVTableHelperCtorCaller<UPVImporterSettings>,local_res8,
               UPVBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVImporterSettings.InnerSingleton;
}

// InputPinProperties @ 14da9aea0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPVImporterSettings::InputPinProperties
          (UPVImporterSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPVImporterSettings @ 14daa98e0

void __cdecl UPVImporterSettings::StaticRegisterNativesUPVImporterSettings(void)

{
  return;
}

