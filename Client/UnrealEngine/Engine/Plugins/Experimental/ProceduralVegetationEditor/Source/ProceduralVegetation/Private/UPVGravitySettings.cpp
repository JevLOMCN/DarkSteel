// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 9

// StaticClass @ 14da591d0

UClass * __cdecl UPVGravitySettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVGravitySettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVGravitySettings",
               &Z_Registration_Info_UClass_UPVGravitySettings.InnerSingleton,
               StaticRegisterNativesUPVGravitySettings,0xe8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPVGravitySettings>,
               InternalVTableHelperCtorCaller<UPVGravitySettings>,local_res8,
               UPVBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVGravitySettings.InnerSingleton;
}

// UPVGravitySettings @ 14da668f0

UPVGravitySettings * __thiscall
UPVGravitySettings::UPVGravitySettings(UPVGravitySettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPVGravitySettings__6B_;
  (this->GravitySettings).Mode = Gravity;
  (this->GravitySettings).Gravity = 0.0;
  *(undefined8 *)&(this->GravitySettings).Direction.field0_0x0 =
       UE::Math::TVector<float>::DownVector.field0_0x0._0_8_;
  (this->GravitySettings).Direction.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::DownVector.field0_0x0._s_0.Z;
  (this->GravitySettings).AngleCorrection = 0.0;
  (this->GravitySettings).PhototropicBias = 0.0;
  return this;
}

// UPVGravitySettings @ 14da66950

UPVGravitySettings * __thiscall UPVGravitySettings::UPVGravitySettings(UPVGravitySettings *this)

{
  UPVBaseSettings::UPVBaseSettings((UPVBaseSettings *)this);
  this->_padding_ = (longlong)&___7UPVGravitySettings__6B_;
  (this->GravitySettings).Mode = Gravity;
  (this->GravitySettings).Gravity = 0.0;
  *(undefined8 *)&(this->GravitySettings).Direction.field0_0x0 =
       UE::Math::TVector<float>::DownVector.field0_0x0._0_8_;
  (this->GravitySettings).Direction.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::DownVector.field0_0x0._s_0.Z;
  (this->GravitySettings).AngleCorrection = 0.0;
  (this->GravitySettings).PhototropicBias = 0.0;
  return this;
}

// ~UPVGravitySettings @ 14da67c60

void __thiscall UPVGravitySettings::~UPVGravitySettings(UPVGravitySettings *this)

{
  this->_padding_ = (longlong)&___7UPVBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 14da79840

TSharedPtr<IPCGElement,1> * __thiscall
UPVGravitySettings::CreateElement
          (UPVGravitySettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         &___7__TIntrusiveReferenceController_VFPVGravityElement___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FPVGravityElement__6B_;
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

// GetInputPinTypeIdentifier @ 14da95cd0

FPCGDataTypeIdentifier * __thiscall
UPVGravitySettings::GetInputPinTypeIdentifier
          (UPVGravitySettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__)

{
  FPCGDataTypeBaseId *pFVar1;
  
  pFVar1 = FPVDataTypeInfoGrowth::AsId();
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetOutputPinTypeIdentifier @ 14da97040

FPCGDataTypeIdentifier * __thiscall
UPVGravitySettings::GetOutputPinTypeIdentifier
          (UPVGravitySettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__)

{
  FPCGDataTypeBaseId *pFVar1;
  
  pFVar1 = FPVDataTypeInfoGrowth::AsId();
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14da992c0

UClass * __cdecl UPVGravitySettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVGravitySettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVGravitySettings",
               &Z_Registration_Info_UClass_UPVGravitySettings.InnerSingleton,
               StaticRegisterNativesUPVGravitySettings,0xe8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPVGravitySettings>,
               InternalVTableHelperCtorCaller<UPVGravitySettings>,local_res8,
               UPVBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVGravitySettings.InnerSingleton;
}

// StaticRegisterNativesUPVGravitySettings @ 14daa98c0

void __cdecl UPVGravitySettings::StaticRegisterNativesUPVGravitySettings(void)

{
  return;
}

