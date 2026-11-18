// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 9

// StaticClass @ 14da58df0

UClass * __cdecl UPVFoliagePaletteSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVFoliagePaletteSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVFoliagePaletteSettings",
               &Z_Registration_Info_UClass_UPVFoliagePaletteSettings.InnerSingleton,
               StaticRegisterNativesUPVFoliagePaletteSettings,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPVFoliagePaletteSettings>,
               InternalVTableHelperCtorCaller<UPVFoliagePaletteSettings>,local_res8,
               UPVBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVFoliagePaletteSettings.InnerSingleton;
}

// UPVFoliagePaletteSettings @ 14da66870

UPVFoliagePaletteSettings * __thiscall
UPVFoliagePaletteSettings::UPVFoliagePaletteSettings
          (UPVFoliagePaletteSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bOverrideFoliage = false;
  this->_padding_ = (longlong)&___7UPVFoliagePaletteSettings__6B_;
  (this->FoliageMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FoliageMeshes).ArrayNum = 0;
  (this->FoliageMeshes).ArrayMax = 0;
  return this;
}

// UPVFoliagePaletteSettings @ 14da668b0

UPVFoliagePaletteSettings * __thiscall
UPVFoliagePaletteSettings::UPVFoliagePaletteSettings(UPVFoliagePaletteSettings *this)

{
  UPVBaseSettings::UPVBaseSettings((UPVBaseSettings *)this);
  this->bOverrideFoliage = false;
  this->_padding_ = (longlong)&___7UPVFoliagePaletteSettings__6B_;
  (this->FoliageMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FoliageMeshes).ArrayNum = 0;
  (this->FoliageMeshes).ArrayMax = 0;
  return this;
}

// ~UPVFoliagePaletteSettings @ 14da67c00

void __thiscall
UPVFoliagePaletteSettings::~UPVFoliagePaletteSettings(UPVFoliagePaletteSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPVFoliagePaletteSettings__6B_;
  DestructItems<TSoftObjectPtr<UObject>,int>
            ((TSoftObjectPtr<UObject> *)(this->FoliageMeshes).AllocatorInstance.Data,
             (this->FoliageMeshes).ArrayNum);
  pFVar1 = (this->FoliageMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPVBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 14da79780

TSharedPtr<IPCGElement,1> * __thiscall
UPVFoliagePaletteSettings::CreateElement
          (UPVFoliagePaletteSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         &___7__TIntrusiveReferenceController_VFPVFoliageElement___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FPVFoliageElement__6B_;
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

// GetInputPinTypeIdentifier @ 14da95ca0

FPCGDataTypeIdentifier * __thiscall
UPVFoliagePaletteSettings::GetInputPinTypeIdentifier
          (UPVFoliagePaletteSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__)

{
  FPCGDataTypeBaseId *pFVar1;
  
  pFVar1 = FPVDataTypeInfoMesh::AsId();
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetOutputPinTypeIdentifier @ 14da97010

FPCGDataTypeIdentifier * __thiscall
UPVFoliagePaletteSettings::GetOutputPinTypeIdentifier
          (UPVFoliagePaletteSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__)

{
  FPCGDataTypeBaseId *pFVar1;
  
  pFVar1 = FPVDataTypeInfoMesh::AsId();
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14da99200

UClass * __cdecl UPVFoliagePaletteSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVFoliagePaletteSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVFoliagePaletteSettings",
               &Z_Registration_Info_UClass_UPVFoliagePaletteSettings.InnerSingleton,
               StaticRegisterNativesUPVFoliagePaletteSettings,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPVFoliagePaletteSettings>,
               InternalVTableHelperCtorCaller<UPVFoliagePaletteSettings>,local_res8,
               UPVBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVFoliagePaletteSettings.InnerSingleton;
}

// StaticRegisterNativesUPVFoliagePaletteSettings @ 14daa98b0

void __cdecl UPVFoliagePaletteSettings::StaticRegisterNativesUPVFoliagePaletteSettings(void)

{
  return;
}

