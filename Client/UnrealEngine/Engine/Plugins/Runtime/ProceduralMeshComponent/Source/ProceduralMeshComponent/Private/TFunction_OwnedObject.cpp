// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralMeshComponent
// Functions: 9

// CloneToEmptyStorage @ 14d26a880

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UProceduralMeshComponent::SetMeshSectionVisible'::__l8::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 14d26a8c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UProceduralMeshComponent::UpdateMeshSection'::__l49::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 14d26a900

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FProceduralMeshSceneProxy::FProceduralMeshSceneProxy'::__l15::<lambda_1>,1,1>
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

// Destroy @ 14d26e290

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UProceduralMeshComponent::SetMeshSectionVisible'::__l8::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d26e295. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14d26e2a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UProceduralMeshComponent::UpdateMeshSection'::__l49::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d26e2a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14d26e2b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FProceduralMeshSceneProxy::FProceduralMeshSceneProxy'::__l15::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14d271350

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UProceduralMeshComponent::SetMeshSectionVisible'::__l8::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d271360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UProceduralMeshComponent::UpdateMeshSection'::__l49::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d271370

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FProceduralMeshSceneProxy::FProceduralMeshSceneProxy'::__l15::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

