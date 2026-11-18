// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149a16800

UClass * __cdecl UPCGBlurSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBlurSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBlurSettings",
               &Z_Registration_Info_UClass_UPCGBlurSettings.InnerSingleton,
               StaticRegisterNativesUPCGBlurSettings,0x168,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGBlurSettings>,
               InternalVTableHelperCtorCaller<UPCGBlurSettings>,local_res8,UPCGSettings::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBlurSettings.InnerSingleton;
}

// UPCGBlurSettings @ 149ad1360

UPCGBlurSettings * __thiscall
UPCGBlurSettings::UPCGBlurSettings(UPCGBlurSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGBlurSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource);
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector(&this->OutputTarget);
  this->NumIterations = 1;
  this->SearchDistance = 1000.0;
  this->CustomStandardDeviation = 1.0;
  this->BlurMode = Constant;
  this->bUseCustomStandardDeviation = false;
  return this;
}

// UPCGBlurSettings @ 149ad13e0

UPCGBlurSettings * __thiscall
UPCGBlurSettings::UPCGBlurSettings(UPCGBlurSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGBlurSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource);
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector(&this->OutputTarget);
  this->NumIterations = 1;
  this->SearchDistance = 1000.0;
  this->CustomStandardDeviation = 1.0;
  this->BlurMode = Constant;
  this->bUseCustomStandardDeviation = false;
  return this;
}

// ~UPCGBlurSettings @ 149ad34e0

void __thiscall UPCGBlurSettings::~UPCGBlurSettings(UPCGBlurSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGBlurSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->OutputTarget).field_0x28,*(int *)&(this->OutputTarget).field_0x30)
  ;
  pvVar1 = *(void **)&(this->OutputTarget).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->InputSource).field_0x28,*(int *)&(this->InputSource).field_0x30);
  pvVar1 = *(void **)&(this->InputSource).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149afc5f0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGBlurSettings::CreateElement
          (UPCGBlurSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         &___7__TIntrusiveReferenceController_VFPCGBlurElement___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FPCGBlurElement__6B_;
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

// GetPrivateStaticClass @ 149b17a30

UClass * __cdecl UPCGBlurSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBlurSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBlurSettings",
               &Z_Registration_Info_UClass_UPCGBlurSettings.InnerSingleton,
               StaticRegisterNativesUPCGBlurSettings,0x168,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGBlurSettings>,
               InternalVTableHelperCtorCaller<UPCGBlurSettings>,local_res8,UPCGSettings::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBlurSettings.InnerSingleton;
}

// InputPinProperties @ 149b1c3e0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGBlurSettings::InputPinProperties
          (UPCGBlurSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointInputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b20240

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGBlurSettings::OutputPinProperties
          (UPCGBlurSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGBlurSettings @ 149b2cf20

void __cdecl UPCGBlurSettings::StaticRegisterNativesUPCGBlurSettings(void)

{
  return;
}

