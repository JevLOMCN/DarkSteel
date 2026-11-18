// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149b9d7b0

UClass * __cdecl UPCGMutateSeedSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMutateSeedSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMutateSeedSettings",
               &Z_Registration_Info_UClass_UPCGMutateSeedSettings.InnerSingleton,
               StaticRegisterNativesUPCGMutateSeedSettings,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGMutateSeedSettings>,
               InternalVTableHelperCtorCaller<UPCGMutateSeedSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMutateSeedSettings.InnerSingleton;
}

// UPCGMutateSeedSettings @ 149be70e0

UPCGMutateSeedSettings * __thiscall
UPCGMutateSeedSettings::UPCGMutateSeedSettings(UPCGMutateSeedSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGMutateSeedSettings__6B_;
  return this;
}

// UPCGMutateSeedSettings @ 149be7110

UPCGMutateSeedSettings * __thiscall
UPCGMutateSeedSettings::UPCGMutateSeedSettings
          (UPCGMutateSeedSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGMutateSeedSettings__6B_;
  return this;
}

// ~UPCGMutateSeedSettings @ 149be9c80

void __thiscall UPCGMutateSeedSettings::~UPCGMutateSeedSettings(UPCGMutateSeedSettings *this)

{
  *(undefined ***)this = &___7UPCGMutateSeedSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c054a0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGMutateSeedSettings::CreateElement
          (UPCGMutateSeedSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGMutateSeedElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGMutateSeedElement__6B_;
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

// GetPrivateStaticClass @ 149c25b50

UClass * __cdecl UPCGMutateSeedSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMutateSeedSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMutateSeedSettings",
               &Z_Registration_Info_UClass_UPCGMutateSeedSettings.InnerSingleton,
               StaticRegisterNativesUPCGMutateSeedSettings,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGMutateSeedSettings>,
               InternalVTableHelperCtorCaller<UPCGMutateSeedSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMutateSeedSettings.InnerSingleton;
}

// InputPinProperties @ 149c2c540

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGMutateSeedSettings::InputPinProperties
          (UPCGMutateSeedSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointInputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c2e680

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGMutateSeedSettings::OutputPinProperties
          (UPCGMutateSeedSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGMutateSeedSettings @ 149c354a0

void __cdecl UPCGMutateSeedSettings::StaticRegisterNativesUPCGMutateSeedSettings(void)

{
  return;
}

// UseSeed @ 149c36340

bool __thiscall UPCGMutateSeedSettings::UseSeed(UPCGMutateSeedSettings *this)

{
  return true;
}

