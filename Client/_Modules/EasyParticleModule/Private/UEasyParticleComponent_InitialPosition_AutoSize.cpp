// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 6

// StaticClass @ 14aca4390

UClass * __cdecl UEasyParticleComponent_InitialPosition_AutoSize::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialPosition_AutoSize.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialPosition_AutoSize",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialPosition_AutoSize.
                InnerSingleton,StaticRegisterNativesUEasyParticleComponent_InitialPosition_AutoSize,
               0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_InitialPosition_AutoSize>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialPosition_AutoSize>,
               local_res8,UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialPosition_AutoSize.InnerSingleton;
}

// UEasyParticleComponent_InitialPosition_AutoSize @ 14aca9e30

UEasyParticleComponent_InitialPosition_AutoSize * __thiscall
UEasyParticleComponent_InitialPosition_AutoSize::UEasyParticleComponent_InitialPosition_AutoSize
          (UEasyParticleComponent_InitialPosition_AutoSize *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UEasyParticleComponent_InitialPosition_AutoSize__6B_;
  return this;
}

// ~UEasyParticleComponent_InitialPosition_AutoSize @ 14acaaad0

void __thiscall
UEasyParticleComponent_InitialPosition_AutoSize::~UEasyParticleComponent_InitialPosition_AutoSize
          (UEasyParticleComponent_InitialPosition_AutoSize *this)

{
  *(undefined ***)this = &___7UEasyParticleComponent__6B_;
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acad700

UClass * __cdecl UEasyParticleComponent_InitialPosition_AutoSize::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialPosition_AutoSize.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialPosition_AutoSize",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialPosition_AutoSize.
                InnerSingleton,StaticRegisterNativesUEasyParticleComponent_InitialPosition_AutoSize,
               0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_InitialPosition_AutoSize>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialPosition_AutoSize>,
               local_res8,UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialPosition_AutoSize.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_InitialPosition_AutoSize @ 14acae3a0

void __cdecl
UEasyParticleComponent_InitialPosition_AutoSize::
StaticRegisterNativesUEasyParticleComponent_InitialPosition_AutoSize(void)

{
  return;
}

// UEasyParticleComponent_InitialPosition_AutoSize @ 14acc08d0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_InitialPosition_AutoSize * __thiscall
UEasyParticleComponent_InitialPosition_AutoSize::UEasyParticleComponent_InitialPosition_AutoSize
          (UEasyParticleComponent_InitialPosition_AutoSize *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  UClass *pUVar2;
  FString local_18;
  
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  *(undefined ***)this = &___7UEasyParticleComponent_InitialPosition_AutoSize__6B_;
  pUVar2 = Z_Construct_UClass_UEasyParticleComponent_InitialPosition_AutoSize_Runtime_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  *(UClass **)&this->field_0x30 = pUVar2;
  ::FString::FString(&local_18,"InitialPosition AutoSize");
  puVar1 = &this->field_0x38;
  if ((FString *)puVar1 != &local_18) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = local_18.Data.AllocatorInstance.Data;
    *(int *)&this->field_0x40 = local_18.Data.ArrayNum;
    *(int *)&this->field_0x44 = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

