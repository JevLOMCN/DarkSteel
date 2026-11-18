// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149b9d5d0

UClass * __cdecl UPCGResetPointCenterSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGResetPointCenterSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGResetPointCenterSettings",
               &Z_Registration_Info_UClass_UPCGResetPointCenterSettings.InnerSingleton,
               StaticRegisterNativesUPCGResetPointCenterSettings,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGResetPointCenterSettings>,
               InternalVTableHelperCtorCaller<UPCGResetPointCenterSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGResetPointCenterSettings.InnerSingleton;
}

// UPCGResetPointCenterSettings @ 149be80b0

UPCGResetPointCenterSettings * __thiscall
UPCGResetPointCenterSettings::UPCGResetPointCenterSettings
          (UPCGResetPointCenterSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGResetPointCenterSettings__6B_;
  (this->PointCenterLocation).field0_0x0._s_0.X = 0.5;
  (this->PointCenterLocation).field0_0x0._s_0.Y = 0.5;
  (this->PointCenterLocation).field0_0x0._s_0.Z = 0.5;
  return this;
}

// UPCGResetPointCenterSettings @ 149be8100

UPCGResetPointCenterSettings * __thiscall
UPCGResetPointCenterSettings::UPCGResetPointCenterSettings
          (UPCGResetPointCenterSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGResetPointCenterSettings__6B_;
  (this->PointCenterLocation).field0_0x0._s_0.X = 0.5;
  (this->PointCenterLocation).field0_0x0._s_0.Y = 0.5;
  (this->PointCenterLocation).field0_0x0._s_0.Z = 0.5;
  return this;
}

// ~UPCGResetPointCenterSettings @ 149bea1a0

void __thiscall
UPCGResetPointCenterSettings::~UPCGResetPointCenterSettings(UPCGResetPointCenterSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGResetPointCenterSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c06160

TSharedPtr<IPCGElement,1> * __thiscall
UPCGResetPointCenterSettings::CreateElement
          (UPCGResetPointCenterSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGResetPointCenterElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGResetPointCenterElement__6B_;
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

// GetPrivateStaticClass @ 149c26a50

UClass * __cdecl UPCGResetPointCenterSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGResetPointCenterSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGResetPointCenterSettings",
               &Z_Registration_Info_UClass_UPCGResetPointCenterSettings.InnerSingleton,
               StaticRegisterNativesUPCGResetPointCenterSettings,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGResetPointCenterSettings>,
               InternalVTableHelperCtorCaller<UPCGResetPointCenterSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGResetPointCenterSettings.InnerSingleton;
}

// InputPinProperties @ 149c2cf80

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGResetPointCenterSettings::InputPinProperties
          (UPCGResetPointCenterSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointInputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c2efb0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGResetPointCenterSettings::OutputPinProperties
          (UPCGResetPointCenterSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGResetPointCenterSettings @ 149c35610

void __cdecl UPCGResetPointCenterSettings::StaticRegisterNativesUPCGResetPointCenterSettings(void)

{
  return;
}

