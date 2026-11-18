// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149a15430

UClass * __cdecl UPCGApplyScaleToBoundsSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGApplyScaleToBoundsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGApplyScaleToBoundsSettings",
               &Z_Registration_Info_UClass_UPCGApplyScaleToBoundsSettings.InnerSingleton,
               StaticRegisterNativesUPCGApplyScaleToBoundsSettings,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGApplyScaleToBoundsSettings>,
               InternalVTableHelperCtorCaller<UPCGApplyScaleToBoundsSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGApplyScaleToBoundsSettings.InnerSingleton;
}

// UPCGApplyScaleToBoundsSettings @ 149ad0560

UPCGApplyScaleToBoundsSettings * __thiscall
UPCGApplyScaleToBoundsSettings::UPCGApplyScaleToBoundsSettings
          (UPCGApplyScaleToBoundsSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGApplyScaleToBoundsSettings__6B_;
  return this;
}

// UPCGApplyScaleToBoundsSettings @ 149ad0590

UPCGApplyScaleToBoundsSettings * __thiscall
UPCGApplyScaleToBoundsSettings::UPCGApplyScaleToBoundsSettings
          (UPCGApplyScaleToBoundsSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGApplyScaleToBoundsSettings__6B_;
  return this;
}

// ~UPCGApplyScaleToBoundsSettings @ 149ad2fb0

void __thiscall
UPCGApplyScaleToBoundsSettings::~UPCGApplyScaleToBoundsSettings
          (UPCGApplyScaleToBoundsSettings *this)

{
  *(undefined ***)this = &___7UPCGApplyScaleToBoundsSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149afbdb0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGApplyScaleToBoundsSettings::CreateElement
          (UPCGApplyScaleToBoundsSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGApplyScaleToBoundsElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGApplyScaleToBoundsElement__6B_;
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

// GetPrivateStaticClass @ 149b171f0

UClass * __cdecl UPCGApplyScaleToBoundsSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGApplyScaleToBoundsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGApplyScaleToBoundsSettings",
               &Z_Registration_Info_UClass_UPCGApplyScaleToBoundsSettings.InnerSingleton,
               StaticRegisterNativesUPCGApplyScaleToBoundsSettings,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGApplyScaleToBoundsSettings>,
               InternalVTableHelperCtorCaller<UPCGApplyScaleToBoundsSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGApplyScaleToBoundsSettings.InnerSingleton;
}

// InputPinProperties @ 149b1bcf0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGApplyScaleToBoundsSettings::InputPinProperties
          (UPCGApplyScaleToBoundsSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointInputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b1fba0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGApplyScaleToBoundsSettings::OutputPinProperties
          (UPCGApplyScaleToBoundsSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGApplyScaleToBoundsSettings @ 149b2ce70

void __cdecl
UPCGApplyScaleToBoundsSettings::StaticRegisterNativesUPCGApplyScaleToBoundsSettings(void)

{
  return;
}

