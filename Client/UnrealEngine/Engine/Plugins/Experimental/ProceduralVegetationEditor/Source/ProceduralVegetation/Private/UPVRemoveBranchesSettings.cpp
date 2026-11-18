// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 9

// StaticClass @ 14da57290

UClass * __cdecl UPVRemoveBranchesSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVRemoveBranchesSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVRemoveBranchesSettings",
               &Z_Registration_Info_UClass_UPVRemoveBranchesSettings.InnerSingleton,
               StaticRegisterNativesUPVRemoveBranchesSettings,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPVRemoveBranchesSettings>,
               InternalVTableHelperCtorCaller<UPVRemoveBranchesSettings>,local_res8,
               UPVBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVRemoveBranchesSettings.InnerSingleton;
}

// UPVRemoveBranchesSettings @ 14da66fc0

UPVRemoveBranchesSettings * __thiscall
UPVRemoveBranchesSettings::UPVRemoveBranchesSettings
          (UPVRemoveBranchesSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->BranchRemoveBasis = Length;
  this->_padding_ = (longlong)&___7UPVRemoveBranchesSettings__6B_;
  this->Threshold = 0.0;
  return this;
}

// UPVRemoveBranchesSettings @ 14da67000

UPVRemoveBranchesSettings * __thiscall
UPVRemoveBranchesSettings::UPVRemoveBranchesSettings(UPVRemoveBranchesSettings *this)

{
  UPVBaseSettings::UPVBaseSettings((UPVBaseSettings *)this);
  this->BranchRemoveBasis = Length;
  this->_padding_ = (longlong)&___7UPVRemoveBranchesSettings__6B_;
  this->Threshold = 0.0;
  return this;
}

// ~UPVRemoveBranchesSettings @ 14da67e70

void __thiscall
UPVRemoveBranchesSettings::~UPVRemoveBranchesSettings(UPVRemoveBranchesSettings *this)

{
  this->_padding_ = (longlong)&___7UPVBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 14da79c00

TSharedPtr<IPCGElement,1> * __thiscall
UPVRemoveBranchesSettings::CreateElement
          (UPVRemoveBranchesSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPVRemoveBranchesElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPVRemoveBranchesElement__6B_;
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

// GetInputPinTypeIdentifier @ 14da95d90

FPCGDataTypeIdentifier * __thiscall
UPVRemoveBranchesSettings::GetInputPinTypeIdentifier
          (UPVRemoveBranchesSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__)

{
  FPCGDataTypeBaseId *pFVar1;
  
  pFVar1 = FPVDataTypeInfoGrowth::AsId();
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetOutputPinTypeIdentifier @ 14da97100

FPCGDataTypeIdentifier * __thiscall
UPVRemoveBranchesSettings::GetOutputPinTypeIdentifier
          (UPVRemoveBranchesSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__)

{
  FPCGDataTypeBaseId *pFVar1;
  
  pFVar1 = FPVDataTypeInfoGrowth::AsId();
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14da99800

UClass * __cdecl UPVRemoveBranchesSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVRemoveBranchesSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVRemoveBranchesSettings",
               &Z_Registration_Info_UClass_UPVRemoveBranchesSettings.InnerSingleton,
               StaticRegisterNativesUPVRemoveBranchesSettings,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPVRemoveBranchesSettings>,
               InternalVTableHelperCtorCaller<UPVRemoveBranchesSettings>,local_res8,
               UPVBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVRemoveBranchesSettings.InnerSingleton;
}

// StaticRegisterNativesUPVRemoveBranchesSettings @ 14daa9960

void __cdecl UPVRemoveBranchesSettings::StaticRegisterNativesUPVRemoveBranchesSettings(void)

{
  return;
}

