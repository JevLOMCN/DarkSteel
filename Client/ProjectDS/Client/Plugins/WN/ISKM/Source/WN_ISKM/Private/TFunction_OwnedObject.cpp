// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 12

// CloneToEmptyStorage @ 14a8449b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWN_ISKM_ISKMComponent::SendRenderDynamicData_Concurrent'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 14a8449f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWN_ISKM_Profile::BeginDestroy'::__l8::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

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

// CloneToEmptyStorage @ 14a844a30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWN_ISKM_Profile::__InitRenderDatas'::__l11::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 14a844a70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWN_ISKM_Profile::__InitRenderDatas'::__l2::<lambda_2>,1,0>::
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

// Destroy @ 14a847460

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWN_ISKM_ISKMComponent::SendRenderDynamicData_Concurrent'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a847490

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWN_ISKM_Profile::BeginDestroy'::__l8::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a847495. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a8474a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWN_ISKM_Profile::__InitRenderDatas'::__l11::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a8474a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a8474b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWN_ISKM_Profile::__InitRenderDatas'::__l2::<lambda_2>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a8474b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14a849fd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWN_ISKM_ISKMComponent::SendRenderDynamicData_Concurrent'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a849fe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWN_ISKM_Profile::BeginDestroy'::__l8::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a849ff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWN_ISKM_Profile::__InitRenderDatas'::__l11::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a84a000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UWN_ISKM_Profile::__InitRenderDatas'::__l2::<lambda_2>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

