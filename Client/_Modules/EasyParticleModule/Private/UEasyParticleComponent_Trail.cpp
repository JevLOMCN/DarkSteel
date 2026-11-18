// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 6

// StaticClass @ 14acb09b0

UClass * __cdecl UEasyParticleComponent_Trail::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Trail.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Trail",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Trail.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_Trail,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_Trail>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Trail>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_Trail.InnerSingleton;
}

// UEasyParticleComponent_Trail @ 14acb7590

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_Trail * __thiscall
UEasyParticleComponent_Trail::UEasyParticleComponent_Trail
          (UEasyParticleComponent_Trail *this,FVTableHelper *param_1)

{
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Trail__6B_;
  return this;
}

// ~UEasyParticleComponent_Trail @ 14acb7ec0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponent_Trail::~UEasyParticleComponent_Trail(UEasyParticleComponent_Trail *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Trail__6B_;
  UEasyParticleComponent::~UEasyParticleComponent((UEasyParticleComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14acbb0e0

UClass * __cdecl UEasyParticleComponent_Trail::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Trail.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Trail",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Trail.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_Trail,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_Trail>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Trail>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_Trail.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_Trail @ 14acbd720

void __cdecl UEasyParticleComponent_Trail::StaticRegisterNativesUEasyParticleComponent_Trail(void)

{
  return;
}

// UEasyParticleComponent_Trail @ 14acc1e50

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_Trail * __thiscall
UEasyParticleComponent_Trail::UEasyParticleComponent_Trail
          (UEasyParticleComponent_Trail *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  UClass *pUVar2;
  FString local_18;
  
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Trail__6B_;
  pUVar2 = Z_Construct_UClass_UEasyParticleComponent_Trail_Runtime_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  ::FString::FString(&local_18,"Trail");
  plVar1 = &this->_padding_;
  if ((FString *)plVar1 != &local_18) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_18.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_18.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  this->TrailSampleCount = 0x10;
  return this;
}

