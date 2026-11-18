// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149b9d060

UClass * __cdecl UPCGSelectPointsSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSelectPointsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSelectPointsSettings",
               &Z_Registration_Info_UClass_UPCGSelectPointsSettings.InnerSingleton,
               StaticRegisterNativesUPCGSelectPointsSettings,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGSelectPointsSettings>,
               InternalVTableHelperCtorCaller<UPCGSelectPointsSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSelectPointsSettings.InnerSingleton;
}

// UPCGSelectPointsSettings @ 149be83d0

UPCGSelectPointsSettings * __thiscall
UPCGSelectPointsSettings::UPCGSelectPointsSettings
          (UPCGSelectPointsSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->Ratio = 0.1;
  this->_padding_ = (longlong)&___7UPCGSelectPointsSettings__6B_;
  return this;
}

// UPCGSelectPointsSettings @ 149be8410

UPCGSelectPointsSettings * __thiscall
UPCGSelectPointsSettings::UPCGSelectPointsSettings
          (UPCGSelectPointsSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->Ratio = 0.1;
  this->_padding_ = (longlong)&___7UPCGSelectPointsSettings__6B_;
  return this;
}

// ~UPCGSelectPointsSettings @ 149bea2a0

void __thiscall UPCGSelectPointsSettings::~UPCGSelectPointsSettings(UPCGSelectPointsSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGSelectPointsSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c06520

TSharedPtr<IPCGElement,1> * __thiscall
UPCGSelectPointsSettings::CreateElement
          (UPCGSelectPointsSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGSelectPointsElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGSelectPointsElement__6B_;
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

// GetPrivateStaticClass @ 149c26e10

UClass * __cdecl UPCGSelectPointsSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSelectPointsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSelectPointsSettings",
               &Z_Registration_Info_UClass_UPCGSelectPointsSettings.InnerSingleton,
               StaticRegisterNativesUPCGSelectPointsSettings,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGSelectPointsSettings>,
               InternalVTableHelperCtorCaller<UPCGSelectPointsSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSelectPointsSettings.InnerSingleton;
}

// InputPinProperties @ 149c2d2b0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSelectPointsSettings::InputPinProperties
          (UPCGSelectPointsSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointInputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c2f1a0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSelectPointsSettings::OutputPinProperties
          (UPCGSelectPointsSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGSelectPointsSettings @ 149c35660

void __cdecl UPCGSelectPointsSettings::StaticRegisterNativesUPCGSelectPointsSettings(void)

{
  return;
}

// UseSeed @ 149c363a0

bool __thiscall UPCGSelectPointsSettings::UseSeed(UPCGSelectPointsSettings *this)

{
  return true;
}

