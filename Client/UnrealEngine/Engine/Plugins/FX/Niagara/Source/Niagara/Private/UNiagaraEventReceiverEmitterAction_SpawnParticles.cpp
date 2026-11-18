// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StaticClass @ 1492c66f0

UClass * __cdecl UNiagaraEventReceiverEmitterAction_SpawnParticles::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraEventReceiverEmitterAction_SpawnParticles",
               &Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles.
                InnerSingleton,
               StaticRegisterNativesUNiagaraEventReceiverEmitterAction_SpawnParticles,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraEventReceiverEmitterAction_SpawnParticles>,
               InternalVTableHelperCtorCaller<UNiagaraEventReceiverEmitterAction_SpawnParticles>,
               local_res8,UNiagaraEventReceiverEmitterAction::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles.InnerSingleton
  ;
}

// UNiagaraEventReceiverEmitterAction_SpawnParticles @ 1492d1760

UNiagaraEventReceiverEmitterAction_SpawnParticles * __thiscall
UNiagaraEventReceiverEmitterAction_SpawnParticles::UNiagaraEventReceiverEmitterAction_SpawnParticles
          (UNiagaraEventReceiverEmitterAction_SpawnParticles *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraEventReceiverEmitterAction_SpawnParticles__6B_;
  return this;
}

// UNiagaraEventReceiverEmitterAction_SpawnParticles @ 1492d1790

UNiagaraEventReceiverEmitterAction_SpawnParticles * __thiscall
UNiagaraEventReceiverEmitterAction_SpawnParticles::UNiagaraEventReceiverEmitterAction_SpawnParticles
          (UNiagaraEventReceiverEmitterAction_SpawnParticles *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraEventReceiverEmitterAction_SpawnParticles__6B_;
  return this;
}

// ~UNiagaraEventReceiverEmitterAction_SpawnParticles @ 1492d4a80

void __thiscall
UNiagaraEventReceiverEmitterAction_SpawnParticles::
~UNiagaraEventReceiverEmitterAction_SpawnParticles
          (UNiagaraEventReceiverEmitterAction_SpawnParticles *this)

{
  this->_padding_ = (longlong)&___7UNiagaraEventReceiverEmitterAction__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1492f0f50

UClass * __cdecl UNiagaraEventReceiverEmitterAction_SpawnParticles::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraEventReceiverEmitterAction_SpawnParticles",
               &Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles.
                InnerSingleton,
               StaticRegisterNativesUNiagaraEventReceiverEmitterAction_SpawnParticles,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraEventReceiverEmitterAction_SpawnParticles>,
               InternalVTableHelperCtorCaller<UNiagaraEventReceiverEmitterAction_SpawnParticles>,
               local_res8,UNiagaraEventReceiverEmitterAction::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles.InnerSingleton
  ;
}

// PerformAction @ 1492fa340

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNiagaraEventReceiverEmitterAction_SpawnParticles::PerformAction
          (UNiagaraEventReceiverEmitterAction_SpawnParticles *this,FNiagaraEmitterInstance *param_1,
          FNiagaraEventReceiverProperties *param_2)

{
  return;
}

// StaticRegisterNativesUNiagaraEventReceiverEmitterAction_SpawnParticles @ 149309db0

void __cdecl
UNiagaraEventReceiverEmitterAction_SpawnParticles::
StaticRegisterNativesUNiagaraEventReceiverEmitterAction_SpawnParticles(void)

{
  return;
}

