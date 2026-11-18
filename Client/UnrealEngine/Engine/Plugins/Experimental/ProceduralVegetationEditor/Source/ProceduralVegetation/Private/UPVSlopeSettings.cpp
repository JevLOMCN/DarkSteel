// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 9

// StaticClass @ 14da57cd0

UClass * __cdecl UPVSlopeSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVSlopeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVSlopeSettings",
               &Z_Registration_Info_UClass_UPVSlopeSettings.InnerSingleton,
               StaticRegisterNativesUPVSlopeSettings,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UPVSlopeSettings>,
               InternalVTableHelperCtorCaller<UPVSlopeSettings>,local_res8,
               UPVBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVSlopeSettings.InnerSingleton;
}

// UPVSlopeSettings @ 14da670c0

UPVSlopeSettings * __thiscall
UPVSlopeSettings::UPVSlopeSettings(UPVSlopeSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPVSlopeSettings__6B_;
  (this->SlopeParams).SlopeAngle = 22.5;
  (this->SlopeParams).SlopeDirection = 0.0;
  (this->SlopeParams).BendStrength = 2.0;
  (this->SlopeParams).TrunkPivotPoint = Origin;
  return this;
}

// UPVSlopeSettings @ 14da67100

UPVSlopeSettings * __thiscall UPVSlopeSettings::UPVSlopeSettings(UPVSlopeSettings *this)

{
  UPVBaseSettings::UPVBaseSettings((UPVBaseSettings *)this);
  this->_padding_ = (longlong)&___7UPVSlopeSettings__6B_;
  (this->SlopeParams).SlopeAngle = 22.5;
  (this->SlopeParams).SlopeDirection = 0.0;
  (this->SlopeParams).BendStrength = 2.0;
  (this->SlopeParams).TrunkPivotPoint = Origin;
  return this;
}

// ~UPVSlopeSettings @ 14da67eb0

void __thiscall UPVSlopeSettings::~UPVSlopeSettings(UPVSlopeSettings *this)

{
  this->_padding_ = (longlong)&___7UPVBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 14da79d80

TSharedPtr<IPCGElement,1> * __thiscall
UPVSlopeSettings::CreateElement
          (UPVSlopeSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         &___7__TIntrusiveReferenceController_VFPVSlopeElement___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FPVSlopeElement__6B_;
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

// GetInputPinTypeIdentifier @ 14da95df0

FPCGDataTypeIdentifier * __thiscall
UPVSlopeSettings::GetInputPinTypeIdentifier
          (UPVSlopeSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__)

{
  FPCGDataTypeBaseId *pFVar1;
  
  pFVar1 = FPVDataTypeInfoGrowth::AsId();
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetOutputPinTypeIdentifier @ 14da97160

FPCGDataTypeIdentifier * __thiscall
UPVSlopeSettings::GetOutputPinTypeIdentifier
          (UPVSlopeSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__)

{
  FPCGDataTypeBaseId *pFVar1;
  
  pFVar1 = FPVDataTypeInfoGrowth::AsId();
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14da99980

UClass * __cdecl UPVSlopeSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVSlopeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVSlopeSettings",
               &Z_Registration_Info_UClass_UPVSlopeSettings.InnerSingleton,
               StaticRegisterNativesUPVSlopeSettings,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UPVSlopeSettings>,
               InternalVTableHelperCtorCaller<UPVSlopeSettings>,local_res8,
               UPVBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVSlopeSettings.InnerSingleton;
}

// StaticRegisterNativesUPVSlopeSettings @ 14daa9980

void __cdecl UPVSlopeSettings::StaticRegisterNativesUPVSlopeSettings(void)

{
  return;
}

