// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149b9dd50

UClass * __cdecl UPCGNormalToDensitySettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGNormalToDensitySettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGNormalToDensitySettings",
               &Z_Registration_Info_UClass_UPCGNormalToDensitySettings.InnerSingleton,
               StaticRegisterNativesUPCGNormalToDensitySettings,0xf8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGNormalToDensitySettings>,
               InternalVTableHelperCtorCaller<UPCGNormalToDensitySettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGNormalToDensitySettings.InnerSingleton;
}

// UPCGNormalToDensitySettings @ 149be72a0

UPCGNormalToDensitySettings * __thiscall
UPCGNormalToDensitySettings::UPCGNormalToDensitySettings
          (UPCGNormalToDensitySettings *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGNormalToDensitySettings__6B_;
  uVar1 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  (this->Normal).field0_0x0._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  (this->Normal).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  this->Strength = 1.0;
  (this->Normal).field0_0x0._s_0.Z = (double)uVar1;
  this->Offset = 0.0;
  this->DensityMode = Set;
  return this;
}

// UPCGNormalToDensitySettings @ 149be7310

UPCGNormalToDensitySettings * __thiscall
UPCGNormalToDensitySettings::UPCGNormalToDensitySettings
          (UPCGNormalToDensitySettings *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGNormalToDensitySettings__6B_;
  uVar1 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  (this->Normal).field0_0x0._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  (this->Normal).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  this->Strength = 1.0;
  (this->Normal).field0_0x0._s_0.Z = (double)uVar1;
  this->Offset = 0.0;
  this->DensityMode = Set;
  return this;
}

// ~UPCGNormalToDensitySettings @ 149be9d00

void __thiscall
UPCGNormalToDensitySettings::~UPCGNormalToDensitySettings(UPCGNormalToDensitySettings *this)

{
  this->_padding_ = (longlong)&___7UPCGNormalToDensitySettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c05560

TSharedPtr<IPCGElement,1> * __thiscall
UPCGNormalToDensitySettings::CreateElement
          (UPCGNormalToDensitySettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGNormalToDensityElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGNormalToDensityElement__6B_;
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

// GetPrivateStaticClass @ 149c25e50

UClass * __cdecl UPCGNormalToDensitySettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGNormalToDensitySettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGNormalToDensitySettings",
               &Z_Registration_Info_UClass_UPCGNormalToDensitySettings.InnerSingleton,
               StaticRegisterNativesUPCGNormalToDensitySettings,0xf8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGNormalToDensitySettings>,
               InternalVTableHelperCtorCaller<UPCGNormalToDensitySettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGNormalToDensitySettings.InnerSingleton;
}

// InputPinProperties @ 149c2c700

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGNormalToDensitySettings::InputPinProperties
          (UPCGNormalToDensitySettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointInputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c2e7a0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGNormalToDensitySettings::OutputPinProperties
          (UPCGNormalToDensitySettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGNormalToDensitySettings @ 149c354e0

void __cdecl UPCGNormalToDensitySettings::StaticRegisterNativesUPCGNormalToDensitySettings(void)

{
  return;
}

