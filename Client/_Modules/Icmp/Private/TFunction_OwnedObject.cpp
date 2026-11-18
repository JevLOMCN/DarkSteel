// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Icmp
// Functions: 28

// ~TFunction_OwnedObject<void_(__cdecl*)(FIcmpEchoResult),0,0> @ 1445537b0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FIcmpEchoResult),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(FIcmpEchoResult),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(FIcmpEchoResult),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6AXUFIcmpEchoResult___Z_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// CloneToEmptyStorage @ 144555470

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FIcmpEchoResult),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(FIcmpEchoResult),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6AXUFIcmpEchoResult___Z_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_void_FIcmpEchoResult **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144555490

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TAsyncRunnable<FIcmpEchoManyCompleteResult>::Run'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 1445554d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TAsyncRunnable<FIcmpEchoResult>::Run'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 144555510

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FUdpPingManyAsync::Start'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FUdpPingManyAsync::Start'::`2'::<lambda_1>,0,1>::_vftable_;
  `FUdpPingManyAsync::Start'::__l2::<lambda_1>::<lambda_1>
            (puVar1 + 1,(<lambda_1> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144555570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<TFunction<FIcmpEchoResult___cdecl(void)>_&>'::__l4::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 1445555b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`TAsyncRunnable<FIcmpEchoManyCompleteResult>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1445555f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`TAsyncRunnable<FIcmpEchoResult>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 144555630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FIcmpAsyncResult::FIcmpAsyncResult'::__l5::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__4___0FIcmpAsyncResult__QEAA_PEAVISocketSubsystem__AEBVFString__MIV__TFunction___A6AXUFIcmpEchoResult___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  ::FString::FString((FString *)(puVar1 + 2),(FString *)((longlong)this + 0x10));
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((longlong)this + 0x20);
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 144555690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FUDPPingAsyncResult::FUDPPingAsyncResult'::__l5::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__4___0FUDPPingAsyncResult__QEAA_PEAVISocketSubsystem__AEBVFString__MIV__TFunction___A6AXUFIcmpEchoResult___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  ::FString::FString((FString *)(puVar1 + 2),(FString *)((longlong)this + 0x10));
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((longlong)this + 0x20);
  return puVar1 + 1;
}

// Destroy @ 144555c10

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FIcmpEchoResult),0,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(FIcmpEchoResult),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144555c15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 144555c20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TAsyncRunnable<FIcmpEchoManyCompleteResult>::Run'::__l2::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144555c25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144555c30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TAsyncRunnable<FIcmpEchoResult>::Run'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144555c35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144555c40

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FUdpPingManyAsync::Start'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144555c70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<TFunction<FIcmpEchoResult___cdecl(void)>_&>'::__l4::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144555ca0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`TAsyncRunnable<FIcmpEchoManyCompleteResult>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144555cd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`TAsyncRunnable<FIcmpEchoResult>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144555d00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FIcmpAsyncResult::FIcmpAsyncResult'::__l5::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144555d30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FUDPPingAsyncResult::FUDPPingAsyncResult'::__l5::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 144556660

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FIcmpEchoResult),0,0>::GetAddress
          (TFunction_OwnedObject<void_(__cdecl*)(FIcmpEchoResult),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 144556670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TAsyncRunnable<FIcmpEchoManyCompleteResult>::Run'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144556680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TAsyncRunnable<FIcmpEchoResult>::Run'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144556690

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FUdpPingManyAsync::Start'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1445566a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<TFunction<FIcmpEchoResult___cdecl(void)>_&>'::__l4::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1445566b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`TAsyncRunnable<FIcmpEchoManyCompleteResult>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1445566c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`TAsyncRunnable<FIcmpEchoResult>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1445566d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FIcmpAsyncResult::FIcmpAsyncResult'::__l5::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1445566e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FUDPPingAsyncResult::FUDPPingAsyncResult'::__l5::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

