// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StaticClass @ 1492c6600

UClass * __cdecl UNiagaraEventReceiverEmitterAction::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraEventReceiverEmitterAction",
               &Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction.InnerSingleton,
               StaticRegisterNativesUNiagaraEventReceiverEmitterAction,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraEventReceiverEmitterAction>,
               InternalVTableHelperCtorCaller<UNiagaraEventReceiverEmitterAction>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction.InnerSingleton;
}

// UNiagaraEventReceiverEmitterAction @ 1492d1700

UNiagaraEventReceiverEmitterAction * __thiscall
UNiagaraEventReceiverEmitterAction::UNiagaraEventReceiverEmitterAction
          (UNiagaraEventReceiverEmitterAction *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNiagaraEventReceiverEmitterAction__6B_;
  return this;
}

// UNiagaraEventReceiverEmitterAction @ 1492d1730

UNiagaraEventReceiverEmitterAction * __thiscall
UNiagaraEventReceiverEmitterAction::UNiagaraEventReceiverEmitterAction
          (UNiagaraEventReceiverEmitterAction *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNiagaraEventReceiverEmitterAction__6B_;
  return this;
}

// ~UNiagaraEventReceiverEmitterAction @ 1492d4a60

void __thiscall
UNiagaraEventReceiverEmitterAction::~UNiagaraEventReceiverEmitterAction
          (UNiagaraEventReceiverEmitterAction *this)

{
  *(undefined ***)this = &___7UNiagaraEventReceiverEmitterAction__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1492f0ea0

UClass * __cdecl UNiagaraEventReceiverEmitterAction::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraEventReceiverEmitterAction",
               &Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction.InnerSingleton,
               StaticRegisterNativesUNiagaraEventReceiverEmitterAction,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraEventReceiverEmitterAction>,
               InternalVTableHelperCtorCaller<UNiagaraEventReceiverEmitterAction>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction.InnerSingleton;
}

// PerformAction @ 1492fa330

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
UNiagaraEventReceiverEmitterAction::PerformAction
          (UNiagaraEventReceiverEmitterAction *this,FNiagaraEmitterInstance *param_1,
          FNiagaraEventReceiverProperties *param_2)

{
  return;
}

// StaticRegisterNativesUNiagaraEventReceiverEmitterAction @ 149309da0

void __cdecl
UNiagaraEventReceiverEmitterAction::StaticRegisterNativesUNiagaraEventReceiverEmitterAction(void)

{
  return;
}

