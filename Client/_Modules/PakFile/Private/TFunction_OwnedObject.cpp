// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 21

// CloneToEmptyStorage @ 142a63f00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPakAsyncReadFileHandle::FPakAsyncReadFileHandle'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___0FPakAsyncReadFileHandle__QEAA_PEBUFPakEntry__AEBV__TRefCountPtr_VFPakFile____PEB_W_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142a63f20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPakPlatformFile::CreatePakFileHandle'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  uchar *puVar1;
  longlong lVar2;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FPakPlatformFile::CreatePakFileHandle'::`2'::<lambda_1>,0,0>::
        _vftable_;
  puVar1 = param_1->InlineAllocation + 8;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  lVar2 = *(longlong *)((longlong)this + 8);
  *(longlong *)puVar1 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = *(undefined8 *)((longlong)this + 0x10);
  return puVar1;
}

// CloneToEmptyStorage @ 142a63f60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPakPlatformFile::Initialize'::__l2::<lambda_1>,1,0>::CloneToEmptyStorage
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

// CloneToEmptyStorage @ 142a63fa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPakFile::LoadLegacyIndex'::__l2::<lambda_1>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FPakFile::LoadLegacyIndex'::`2'::<lambda_1>,0,1>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 142a64000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPakPrecacher::StartBlockTask'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__StartBlockTask_FPakPrecacher__AEAAXAEAUFCacheBlock_3__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142a64020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FFileIoDispatcherBackend::ResolveIoRequests'::__l31::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 142a64060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FFileIoDispatcherBackend::ResolveIoRequests'::__l30::<lambda_2>,1,0>
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

// Destroy @ 142a67900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPakAsyncReadFileHandle::FPakAsyncReadFileHandle'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142a67905. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142a67910

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPakPlatformFile::CreatePakFileHandle'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142a67915. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142a67920

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPakPlatformFile::Initialize'::__l2::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142a67925. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142a67930

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPakFile::LoadLegacyIndex'::__l2::<lambda_1>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 142a67960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPakPrecacher::StartBlockTask'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142a67965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142a67970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FFileIoDispatcherBackend::ResolveIoRequests'::__l31::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142a67975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142a67980

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FFileIoDispatcherBackend::ResolveIoRequests'::__l30::<lambda_2>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142a67985. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 142a72280

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPakAsyncReadFileHandle::FPakAsyncReadFileHandle'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142a72290

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPakPlatformFile::CreatePakFileHandle'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142a722a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPakPlatformFile::Initialize'::__l2::<lambda_1>,1,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142a722b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPakFile::LoadLegacyIndex'::__l2::<lambda_1>,0,1>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142a722c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPakPrecacher::StartBlockTask'::__l2::<lambda_1>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142a722d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FFileIoDispatcherBackend::ResolveIoRequests'::__l31::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142a722e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FFileIoDispatcherBackend::ResolveIoRequests'::__l30::<lambda_2>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

