// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 9

// StaticClass @ 14da580d0

UClass * __cdecl UPVBoneReductionSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVBoneReductionSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVBoneReductionSettings",
               &Z_Registration_Info_UClass_UPVBoneReductionSettings.InnerSingleton,
               StaticRegisterNativesUPVBoneReductionSettings,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPVBoneReductionSettings>,
               InternalVTableHelperCtorCaller<UPVBoneReductionSettings>,local_res8,
               UPVBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVBoneReductionSettings.InnerSingleton;
}

// UPVBoneReductionSettings @ 14da66070

UPVBoneReductionSettings * __thiscall
UPVBoneReductionSettings::UPVBoneReductionSettings
          (UPVBoneReductionSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPVBoneReductionSettings__6B_;
  return this;
}

// UPVBoneReductionSettings @ 14da660a0

UPVBoneReductionSettings * __thiscall
UPVBoneReductionSettings::UPVBoneReductionSettings(UPVBoneReductionSettings *this)

{
  UPVBaseSettings::UPVBaseSettings((UPVBaseSettings *)this);
  this->_padding_ = (longlong)&___7UPVBoneReductionSettings__6B_;
  return this;
}

// ~UPVBoneReductionSettings @ 14da67a00

void __thiscall UPVBoneReductionSettings::~UPVBoneReductionSettings(UPVBoneReductionSettings *this)

{
  this->_padding_ = (longlong)&___7UPVBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 14da79540

TSharedPtr<IPCGElement,1> * __thiscall
UPVBoneReductionSettings::CreateElement
          (UPVBoneReductionSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPVBoneReductionElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPVBoneReductionElement__6B_;
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

// GetInputPinTypeIdentifier @ 14da95c10

FPCGDataTypeIdentifier * __thiscall
UPVBoneReductionSettings::GetInputPinTypeIdentifier
          (UPVBoneReductionSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__)

{
  FPCGDataTypeBaseId *pFVar1;
  
  pFVar1 = FPVDataTypeInfoMesh::AsId();
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetOutputPinTypeIdentifier @ 14da96f80

FPCGDataTypeIdentifier * __thiscall
UPVBoneReductionSettings::GetOutputPinTypeIdentifier
          (UPVBoneReductionSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__)

{
  FPCGDataTypeBaseId *pFVar1;
  
  pFVar1 = FPVDataTypeInfoMesh::AsId();
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14da98e40

UClass * __cdecl UPVBoneReductionSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVBoneReductionSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVBoneReductionSettings",
               &Z_Registration_Info_UClass_UPVBoneReductionSettings.InnerSingleton,
               StaticRegisterNativesUPVBoneReductionSettings,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPVBoneReductionSettings>,
               InternalVTableHelperCtorCaller<UPVBoneReductionSettings>,local_res8,
               UPVBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVBoneReductionSettings.InnerSingleton;
}

// StaticRegisterNativesUPVBoneReductionSettings @ 14daa9860

void __cdecl UPVBoneReductionSettings::StaticRegisterNativesUPVBoneReductionSettings(void)

{
  return;
}

