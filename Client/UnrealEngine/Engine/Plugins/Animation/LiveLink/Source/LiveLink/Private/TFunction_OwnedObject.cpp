// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 15

// CloneToEmptyStorage @ 14d029980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FGuid),FDefaultTSDelegateUserPolicy>,FGuid_&>'::__l7::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 14d0299c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&>'::__l7::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 14d029a00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,enum_ELiveLinkSubjectState),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&,enum_ELiveLinkSubjectState_&>'::__l7::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 14d029a40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,bool),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&,bool_&>'::__l7::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 14d029a80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>'::__l7::<lambda_1>,1,0>
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

// Destroy @ 14d038c10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FGuid),FDefaultTSDelegateUserPolicy>,FGuid_&>'::__l7::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14d038c40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&>'::__l7::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14d038c70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,enum_ELiveLinkSubjectState),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&,enum_ELiveLinkSubjectState_&>'::__l7::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14d038ca0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,bool),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&,bool_&>'::__l7::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14d038cd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>'::__l7::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d038cd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14d048090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FGuid),FDefaultTSDelegateUserPolicy>,FGuid_&>'::__l7::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d0480a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&>'::__l7::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d0480b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,enum_ELiveLinkSubjectState),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&,enum_ELiveLinkSubjectState_&>'::__l7::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d0480c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,bool),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&,bool_&>'::__l7::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d0480d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>'::__l7::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

