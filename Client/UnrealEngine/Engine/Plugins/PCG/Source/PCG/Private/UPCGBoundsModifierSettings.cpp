// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149a15840

UClass * __cdecl UPCGBoundsModifierSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBoundsModifierSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBoundsModifierSettings",
               &Z_Registration_Info_UClass_UPCGBoundsModifierSettings.InnerSingleton,
               StaticRegisterNativesUPCGBoundsModifierSettings,0x108,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGBoundsModifierSettings>,
               InternalVTableHelperCtorCaller<UPCGBoundsModifierSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBoundsModifierSettings.InnerSingleton;
}

// UPCGBoundsModifierSettings @ 149ad14e0

UPCGBoundsModifierSettings * __thiscall
UPCGBoundsModifierSettings::UPCGBoundsModifierSettings
          (UPCGBoundsModifierSettings *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->Mode = Scale;
  this->_padding_ = (longlong)&___7UPCGBoundsModifierSettings__6B_;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->BoundsMin).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->BoundsMin).field0_0x0._s_0.Y = (double)uVar1;
  (this->BoundsMin).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->BoundsMax).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->BoundsMax).field0_0x0._s_0.Y = (double)uVar1;
  (this->BoundsMax).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  this->bAffectSteepness = false;
  this->Steepness = 1.0;
  return this;
}

// UPCGBoundsModifierSettings @ 149ad1560

UPCGBoundsModifierSettings * __thiscall
UPCGBoundsModifierSettings::UPCGBoundsModifierSettings
          (UPCGBoundsModifierSettings *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->Mode = Scale;
  this->_padding_ = (longlong)&___7UPCGBoundsModifierSettings__6B_;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->BoundsMin).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->BoundsMin).field0_0x0._s_0.Y = (double)uVar1;
  (this->BoundsMin).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->BoundsMax).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->BoundsMax).field0_0x0._s_0.Y = (double)uVar1;
  (this->BoundsMax).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  this->bAffectSteepness = false;
  this->Steepness = 1.0;
  return this;
}

// ~UPCGBoundsModifierSettings @ 149ad35a0

void __thiscall
UPCGBoundsModifierSettings::~UPCGBoundsModifierSettings(UPCGBoundsModifierSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGBoundsModifierSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149afc770

TSharedPtr<IPCGElement,1> * __thiscall
UPCGBoundsModifierSettings::CreateElement
          (UPCGBoundsModifierSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         &___7__TIntrusiveReferenceController_VFPCGBoundsModifier___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FPCGBoundsModifier__6B_;
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

// GetPrivateStaticClass @ 149b17bb0

UClass * __cdecl UPCGBoundsModifierSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBoundsModifierSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBoundsModifierSettings",
               &Z_Registration_Info_UClass_UPCGBoundsModifierSettings.InnerSingleton,
               StaticRegisterNativesUPCGBoundsModifierSettings,0x108,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGBoundsModifierSettings>,
               InternalVTableHelperCtorCaller<UPCGBoundsModifierSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBoundsModifierSettings.InnerSingleton;
}

// InputPinProperties @ 149b1c500

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGBoundsModifierSettings::InputPinProperties
          (UPCGBoundsModifierSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointInputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b20280

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGBoundsModifierSettings::OutputPinProperties
          (UPCGBoundsModifierSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGBoundsModifierSettings @ 149b2cf40

void __cdecl UPCGBoundsModifierSettings::StaticRegisterNativesUPCGBoundsModifierSettings(void)

{
  return;
}

