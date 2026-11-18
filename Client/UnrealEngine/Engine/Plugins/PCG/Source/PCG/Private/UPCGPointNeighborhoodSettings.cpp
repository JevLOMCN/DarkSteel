// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149b9b170

UClass * __cdecl UPCGPointNeighborhoodSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPointNeighborhoodSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPointNeighborhoodSettings",
               &Z_Registration_Info_UClass_UPCGPointNeighborhoodSettings.InnerSingleton,
               StaticRegisterNativesUPCGPointNeighborhoodSettings,0xf0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGPointNeighborhoodSettings>,
               InternalVTableHelperCtorCaller<UPCGPointNeighborhoodSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPointNeighborhoodSettings.InnerSingleton;
}

// UPCGPointNeighborhoodSettings @ 149be7bc0

UPCGPointNeighborhoodSettings * __thiscall
UPCGPointNeighborhoodSettings::UPCGPointNeighborhoodSettings
          (UPCGPointNeighborhoodSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bSetDistanceToAttribute = false;
  this->_padding_ = (longlong)&___7UPCGPointNeighborhoodSettings__6B_;
  this->SearchDistance = 500.0;
  ::FName::FName(&this->DistanceAttribute,L"Distance");
  this->bSetAveragePositionToAttribute = false;
  ::FName::FName(&this->AveragePositionAttribute,L"AvgPosition");
  this->SetDensity = None;
  this->bSetAveragePosition = false;
  this->bSetAverageColor = false;
  this->bWeightedAverage = false;
  return this;
}

// UPCGPointNeighborhoodSettings @ 149be7c50

UPCGPointNeighborhoodSettings * __thiscall
UPCGPointNeighborhoodSettings::UPCGPointNeighborhoodSettings
          (UPCGPointNeighborhoodSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bSetDistanceToAttribute = false;
  this->_padding_ = (longlong)&___7UPCGPointNeighborhoodSettings__6B_;
  this->SearchDistance = 500.0;
  ::FName::FName(&this->DistanceAttribute,L"Distance");
  this->bSetAveragePositionToAttribute = false;
  ::FName::FName(&this->AveragePositionAttribute,L"AvgPosition");
  this->SetDensity = None;
  this->bSetAveragePosition = false;
  this->bSetAverageColor = false;
  this->bWeightedAverage = false;
  return this;
}

// ~UPCGPointNeighborhoodSettings @ 149bea010

void __thiscall
UPCGPointNeighborhoodSettings::~UPCGPointNeighborhoodSettings(UPCGPointNeighborhoodSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGPointNeighborhoodSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c05c20

TSharedPtr<IPCGElement,1> * __thiscall
UPCGPointNeighborhoodSettings::CreateElement
          (UPCGPointNeighborhoodSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGPointNeighborhoodElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGPointNeighborhoodElement__6B_;
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

// GetPrivateStaticClass @ 149c26510

UClass * __cdecl UPCGPointNeighborhoodSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPointNeighborhoodSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPointNeighborhoodSettings",
               &Z_Registration_Info_UClass_UPCGPointNeighborhoodSettings.InnerSingleton,
               StaticRegisterNativesUPCGPointNeighborhoodSettings,0xf0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGPointNeighborhoodSettings>,
               InternalVTableHelperCtorCaller<UPCGPointNeighborhoodSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPointNeighborhoodSettings.InnerSingleton;
}

// InputPinProperties @ 149c2cab0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGPointNeighborhoodSettings::InputPinProperties
          (UPCGPointNeighborhoodSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointInputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c2eb70

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGPointNeighborhoodSettings::OutputPinProperties
          (UPCGPointNeighborhoodSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGPointNeighborhoodSettings @ 149c355a0

void __cdecl UPCGPointNeighborhoodSettings::StaticRegisterNativesUPCGPointNeighborhoodSettings(void)

{
  return;
}

