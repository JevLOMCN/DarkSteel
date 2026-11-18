// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraNanite
// Functions: 9

// CloneToEmptyStorage @ 14da41ee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererNanite::ReleaseComponents'::__l20::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14da41f20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererNanite::PostSystemTick_GameThread'::__l52::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x230,0x10);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FNiagaraRendererNanite::PostSystemTick_GameThread'::`52'::<lambda_1>,0,1>
             ::_vftable_;
  NiagaraRendererNaniteLocal::FUpdateInstancesContext::FUpdateInstancesContext
            ((FUpdateInstancesContext *)(puVar1 + 2),
             (FUpdateInstancesContext *)((longlong)this + 0x10));
  return (FUpdateInstancesContext *)(puVar1 + 2);
}

// CloneToEmptyStorage @ 14da41f80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererNanite::PostSystemTick_GameThread'::__l54::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x230,0x10);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FNiagaraRendererNanite::PostSystemTick_GameThread'::`54'::<lambda_2>,0,1>
             ::_vftable_;
  NiagaraRendererNaniteLocal::FUpdateInstancesContext::FUpdateInstancesContext
            ((FUpdateInstancesContext *)(puVar1 + 2),
             (FUpdateInstancesContext *)((longlong)this + 0x10));
  return (FUpdateInstancesContext *)(puVar1 + 2);
}

// Destroy @ 14da42c60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererNanite::ReleaseComponents'::__l20::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14da42c90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererNanite::PostSystemTick_GameThread'::__l52::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14da42cc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererNanite::PostSystemTick_GameThread'::__l54::<lambda_2>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14da432c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererNanite::ReleaseComponents'::__l20::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14da432d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererNanite::PostSystemTick_GameThread'::__l52::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14da432e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererNanite::PostSystemTick_GameThread'::__l54::<lambda_2>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

