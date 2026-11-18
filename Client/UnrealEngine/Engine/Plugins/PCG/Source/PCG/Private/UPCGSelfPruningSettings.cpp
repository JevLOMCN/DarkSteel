// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149b9b620

UClass * __cdecl UPCGSelfPruningSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSelfPruningSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSelfPruningSettings",
               &Z_Registration_Info_UClass_UPCGSelfPruningSettings.InnerSingleton,
               StaticRegisterNativesUPCGSelfPruningSettings,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGSelfPruningSettings>,
               InternalVTableHelperCtorCaller<UPCGSelfPruningSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSelfPruningSettings.InnerSingleton;
}

// UPCGSelfPruningSettings @ 149be8450

UPCGSelfPruningSettings * __thiscall
UPCGSelfPruningSettings::UPCGSelfPruningSettings(UPCGSelfPruningSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar1);
  this->_padding_ = (longlong)&___7UPCGSelfPruningSettings__6B_;
  (this->Parameters).PruningType = LargeToSmall;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&(this->Parameters).ComparisonSource);
  (this->Parameters).RadiusSimilarityFactor = 0.25;
  (this->Parameters).bRandomizedPruning = true;
  (this->Parameters).bUseCollisionAttribute = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&(this->Parameters).CollisionAttribute);
  (this->Parameters).CollisionQueryFlag = Simple;
  FPCGAttributePropertySelector::SetPointProperty
            ((FPCGAttributePropertySelector *)&(this->Parameters).ComparisonSource,Extents,true);
  return this;
}

// UPCGSelfPruningSettings @ 149be84e0

UPCGSelfPruningSettings * __thiscall
UPCGSelfPruningSettings::UPCGSelfPruningSettings
          (UPCGSelfPruningSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGSelfPruningSettings__6B_;
  (this->Parameters).PruningType = LargeToSmall;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&(this->Parameters).ComparisonSource);
  (this->Parameters).RadiusSimilarityFactor = 0.25;
  (this->Parameters).bRandomizedPruning = true;
  (this->Parameters).bUseCollisionAttribute = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&(this->Parameters).CollisionAttribute);
  (this->Parameters).CollisionQueryFlag = Simple;
  return this;
}

// ~UPCGSelfPruningSettings @ 149bea2c0

void __thiscall UPCGSelfPruningSettings::~UPCGSelfPruningSettings(UPCGSelfPruningSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGSelfPruningSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->Parameters).CollisionAttribute.field_0x28,
             *(int *)&(this->Parameters).CollisionAttribute.field_0x30);
  pvVar1 = *(void **)&(this->Parameters).CollisionAttribute.field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->Parameters).ComparisonSource.field_0x28,
             *(int *)&(this->Parameters).ComparisonSource.field_0x30);
  pvVar1 = *(void **)&(this->Parameters).ComparisonSource.field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c065e0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGSelfPruningSettings::CreateElement
          (UPCGSelfPruningSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGSelfPruningElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGSelfPruningElement__6B_;
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

// GetPrivateStaticClass @ 149c26ed0

UClass * __cdecl UPCGSelfPruningSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSelfPruningSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSelfPruningSettings",
               &Z_Registration_Info_UClass_UPCGSelfPruningSettings.InnerSingleton,
               StaticRegisterNativesUPCGSelfPruningSettings,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGSelfPruningSettings>,
               InternalVTableHelperCtorCaller<UPCGSelfPruningSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSelfPruningSettings.InnerSingleton;
}

// InputPinProperties @ 149c2d2d0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSelfPruningSettings::InputPinProperties
          (UPCGSelfPruningSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointInputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c2f1c0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSelfPruningSettings::OutputPinProperties
          (UPCGSelfPruningSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// PostLoad @ 149c2f3d0

void __thiscall UPCGSelfPruningSettings::PostLoad(UPCGSelfPruningSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGSelfPruningSettings @ 149c35670

void __cdecl UPCGSelfPruningSettings::StaticRegisterNativesUPCGSelfPruningSettings(void)

{
  return;
}

