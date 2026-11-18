// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 6

// StaticClass @ 14acb1ab0

UClass * __cdecl UEasyParticleComponent_InitialSize_AutoSize::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialSize_AutoSize.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialSize_AutoSize",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialSize_AutoSize.
                InnerSingleton,StaticRegisterNativesUEasyParticleComponent_InitialSize_AutoSize,0x68
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_InitialSize_AutoSize>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialSize_AutoSize>,
               local_res8,UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialSize_AutoSize.InnerSingleton;
}

// UEasyParticleComponent_InitialSize_AutoSize @ 14acb6ed0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_InitialSize_AutoSize * __thiscall
UEasyParticleComponent_InitialSize_AutoSize::UEasyParticleComponent_InitialSize_AutoSize
          (UEasyParticleComponent_InitialSize_AutoSize *this,FVTableHelper *param_1)

{
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialSize_AutoSize__6B_;
  return this;
}

// ~UEasyParticleComponent_InitialSize_AutoSize @ 14acb7ad0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponent_InitialSize_AutoSize::~UEasyParticleComponent_InitialSize_AutoSize
          (UEasyParticleComponent_InitialSize_AutoSize *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialSize_AutoSize__6B_;
  UEasyParticleComponent::~UEasyParticleComponent((UEasyParticleComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14acb9ee0

UClass * __cdecl UEasyParticleComponent_InitialSize_AutoSize::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialSize_AutoSize.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialSize_AutoSize",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialSize_AutoSize.
                InnerSingleton,StaticRegisterNativesUEasyParticleComponent_InitialSize_AutoSize,0x68
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_InitialSize_AutoSize>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialSize_AutoSize>,
               local_res8,UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialSize_AutoSize.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_InitialSize_AutoSize @ 14acbd5a0

void __cdecl
UEasyParticleComponent_InitialSize_AutoSize::
StaticRegisterNativesUEasyParticleComponent_InitialSize_AutoSize(void)

{
  return;
}

// UEasyParticleComponent_InitialSize_AutoSize @ 14acc0f10

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_InitialSize_AutoSize * __thiscall
UEasyParticleComponent_InitialSize_AutoSize::UEasyParticleComponent_InitialSize_AutoSize
          (UEasyParticleComponent_InitialSize_AutoSize *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  UClass *pUVar2;
  FString local_18;
  
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialSize_AutoSize__6B_;
  pUVar2 = Z_Construct_UClass_UEasyParticleComponent_InitialSize_AutoSize_Runtime_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  ::FString::FString(&local_18,"InitialSize AutoSize");
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
  this->ScaleByX = true;
  (this->DesignSize).field0_0x0._s_0.X = 200.0;
  (this->DesignSize).field0_0x0._s_0.Y = 200.0;
  return this;
}

