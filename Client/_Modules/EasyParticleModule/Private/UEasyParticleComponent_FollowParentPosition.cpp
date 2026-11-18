// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 6

// StaticClass @ 14aca60f0

UClass * __cdecl UEasyParticleComponent_FollowParentPosition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_FollowParentPosition.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_FollowParentPosition",
               &Z_Registration_Info_UClass_UEasyParticleComponent_FollowParentPosition.
                InnerSingleton,StaticRegisterNativesUEasyParticleComponent_FollowParentPosition,0x50
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_FollowParentPosition>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_FollowParentPosition>,
               local_res8,UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_FollowParentPosition.InnerSingleton;
}

// UEasyParticleComponent_FollowParentPosition @ 14aca9a20

UEasyParticleComponent_FollowParentPosition * __thiscall
UEasyParticleComponent_FollowParentPosition::UEasyParticleComponent_FollowParentPosition
          (UEasyParticleComponent_FollowParentPosition *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UEasyParticleComponent_FollowParentPosition__6B_;
  return this;
}

// ~UEasyParticleComponent_FollowParentPosition @ 14acaa7c0

void __thiscall
UEasyParticleComponent_FollowParentPosition::~UEasyParticleComponent_FollowParentPosition
          (UEasyParticleComponent_FollowParentPosition *this)

{
  *(undefined ***)this = &___7UEasyParticleComponent__6B_;
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acacd40

UClass * __cdecl UEasyParticleComponent_FollowParentPosition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_FollowParentPosition.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_FollowParentPosition",
               &Z_Registration_Info_UClass_UEasyParticleComponent_FollowParentPosition.
                InnerSingleton,StaticRegisterNativesUEasyParticleComponent_FollowParentPosition,0x50
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_FollowParentPosition>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_FollowParentPosition>,
               local_res8,UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_FollowParentPosition.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_FollowParentPosition @ 14acae2d0

void __cdecl
UEasyParticleComponent_FollowParentPosition::
StaticRegisterNativesUEasyParticleComponent_FollowParentPosition(void)

{
  return;
}

// UEasyParticleComponent_FollowParentPosition @ 14acb6820

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_FollowParentPosition * __thiscall
UEasyParticleComponent_FollowParentPosition::UEasyParticleComponent_FollowParentPosition
          (UEasyParticleComponent_FollowParentPosition *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  UClass *pUVar2;
  FString local_18;
  
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  *(undefined ***)this = &___7UEasyParticleComponent_FollowParentPosition__6B_;
  pUVar2 = Z_Construct_UClass_UEasyParticleComponent_FollowParentPosition_Runtime_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  *(UClass **)&this->field_0x30 = pUVar2;
  ::FString::FString(&local_18,"FollowParentPosition");
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

