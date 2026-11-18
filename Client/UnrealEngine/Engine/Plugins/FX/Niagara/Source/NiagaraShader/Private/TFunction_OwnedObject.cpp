// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 12

// CloneToEmptyStorage @ 148df8710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraShaderScript::BuildScriptParametersMetadata'::__l2::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 148df8750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraShaderScript::ReleaseShaderMap'::__l8::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 148df8790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraShaderScript::UpdateCachedData_PostCompile'::__l45::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 148df87d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraShaderScript::QueueForRelease'::__l12::<lambda_1>,1,0>::
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

// Destroy @ 148dfa8b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraShaderScript::BuildScriptParametersMetadata'::__l2::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148dfa8e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraShaderScript::ReleaseShaderMap'::__l8::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148dfa8e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148dfa8f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraShaderScript::UpdateCachedData_PostCompile'::__l45::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148dfa8f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148dfa900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraShaderScript::QueueForRelease'::__l12::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148dfa905. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 148dfe9c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraShaderScript::BuildScriptParametersMetadata'::__l2::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148dfe9d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraShaderScript::ReleaseShaderMap'::__l8::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148dfe9e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraShaderScript::UpdateCachedData_PostCompile'::__l45::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148dfe9f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraShaderScript::QueueForRelease'::__l12::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

