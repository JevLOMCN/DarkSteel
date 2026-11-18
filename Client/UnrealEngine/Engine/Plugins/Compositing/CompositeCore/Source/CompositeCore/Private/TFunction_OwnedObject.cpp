// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CompositeCore
// Functions: 6

// CloneToEmptyStorage @ 14ea7c9e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCompositeCoreSceneViewExtension::ResetRenderWork_GameThread'::__l2::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

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

// CloneToEmptyStorage @ 14ea7ca20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCompositeCoreSceneViewExtension::SetRenderWork_GameThread'::__l2::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

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

// Destroy @ 14ea7d030

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCompositeCoreSceneViewExtension::ResetRenderWork_GameThread'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ea7d035. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14ea7d040

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCompositeCoreSceneViewExtension::SetRenderWork_GameThread'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14ea7e910

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCompositeCoreSceneViewExtension::ResetRenderWork_GameThread'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14ea7e920

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCompositeCoreSceneViewExtension::SetRenderWork_GameThread'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

