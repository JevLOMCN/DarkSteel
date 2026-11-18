// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVIWriter
// Functions: 6

// CloneToEmptyStorage @ 14464fbb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCapturedFrames::StartUnArchiving'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 14464fbf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FCapturedFrames::StartUnArchiving'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
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

// Destroy @ 14464fe30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCapturedFrames::StartUnArchiving'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014464fe35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14464fe40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FCapturedFrames::StartUnArchiving'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 144650410

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCapturedFrames::StartUnArchiving'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144650420

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FCapturedFrames::StartUnArchiving'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

