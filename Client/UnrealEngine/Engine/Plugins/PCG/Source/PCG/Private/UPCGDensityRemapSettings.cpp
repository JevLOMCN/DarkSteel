// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149b31590

UClass * __cdecl UPCGDensityRemapSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDensityRemapSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDensityRemapSettings",
               &Z_Registration_Info_UClass_UPCGDensityRemapSettings.InnerSingleton,
               StaticRegisterNativesUPCGDensityRemapSettings,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGDensityRemapSettings>,
               InternalVTableHelperCtorCaller<UPCGDensityRemapSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDensityRemapSettings.InnerSingleton;
}

// UPCGDensityRemapSettings @ 149b56e90

UPCGDensityRemapSettings * __thiscall
UPCGDensityRemapSettings::UPCGDensityRemapSettings
          (UPCGDensityRemapSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->InRangeMax = 1.0;
  this->OutRangeMin = 0.0;
  this->_padding_ = (longlong)&___7UPCGDensityRemapSettings__6B_;
  this->InRangeMin = 0.0;
  this->bExcludeValuesOutsideInputRange = false;
  this->OutRangeMax = 1.0;
  return this;
}

// UPCGDensityRemapSettings @ 149b56ee0

UPCGDensityRemapSettings * __thiscall
UPCGDensityRemapSettings::UPCGDensityRemapSettings(UPCGDensityRemapSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar1);
  this->InRangeMax = 1.0;
  this->OutRangeMin = 0.0;
  this->_padding_ = (longlong)&___7UPCGDensityRemapSettings__6B_;
  this->InRangeMin = 0.0;
  this->bExcludeValuesOutsideInputRange = false;
  this->OutRangeMax = 1.0;
  return this;
}

// ~UPCGDensityRemapSettings @ 149b590a0

void __thiscall UPCGDensityRemapSettings::~UPCGDensityRemapSettings(UPCGDensityRemapSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGDensityRemapSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149b6af90

TSharedPtr<IPCGElement,1> * __thiscall
UPCGDensityRemapSettings::CreateElement
          (UPCGDensityRemapSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGDensityRemapElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGDensityRemapElement__6B_;
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

// GetPrivateStaticClass @ 149b90c80

UClass * __cdecl UPCGDensityRemapSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDensityRemapSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDensityRemapSettings",
               &Z_Registration_Info_UClass_UPCGDensityRemapSettings.InnerSingleton,
               StaticRegisterNativesUPCGDensityRemapSettings,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGDensityRemapSettings>,
               InternalVTableHelperCtorCaller<UPCGDensityRemapSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDensityRemapSettings.InnerSingleton;
}

// InputPinProperties @ 149b92720

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGDensityRemapSettings::InputPinProperties
          (UPCGDensityRemapSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointInputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b94620

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGDensityRemapSettings::OutputPinProperties
          (UPCGDensityRemapSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGDensityRemapSettings @ 149b984f0

void __cdecl UPCGDensityRemapSettings::StaticRegisterNativesUPCGDensityRemapSettings(void)

{
  return;
}

