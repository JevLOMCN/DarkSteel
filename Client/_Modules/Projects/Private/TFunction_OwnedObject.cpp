// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 9

// CloneToEmptyStorage @ 141e15d30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FProjectEditorRecord::QueueUpdate'::__l5::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 141e15d70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPluginManager::MountExplicitlyLoadedPluginLocalizationData'::__l119::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 141e15db0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPluginManager::UnmountExplicitlyLoadedPluginLocalizationData'::__l167::<lambda_1>,1,1>
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

// Destroy @ 141e191d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FProjectEditorRecord::QueueUpdate'::__l5::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 141e19200

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPluginManager::MountExplicitlyLoadedPluginLocalizationData'::__l119::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 141e19230

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPluginManager::UnmountExplicitlyLoadedPluginLocalizationData'::__l167::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 141e21c90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FProjectEditorRecord::QueueUpdate'::__l5::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 141e21ca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPluginManager::MountExplicitlyLoadedPluginLocalizationData'::__l119::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 141e21cb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPluginManager::UnmountExplicitlyLoadedPluginLocalizationData'::__l167::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

