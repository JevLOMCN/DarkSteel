// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 18

// CloneToEmptyStorage @ 14daed570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FGeometryCollectionCacheAdapter::InitializeForRecord'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 14daed5b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FGeometryCollectionCacheAdapter::Playback_PreSolve'::__l76::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Chaos::FGeometryCollectionCacheAdapter::Playback_PreSolve'::`76'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14daed5d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AChaosCacheManager::HandlePostSolve'::__l2::<lambda_2>,1,0>::
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

// CloneToEmptyStorage @ 14daed610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AChaosCacheManager::HandlePreSolve'::__l2::<lambda_2>,1,0>::
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

// CloneToEmptyStorage @ 14daed650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FGeometryCollectionCacheAdapter::Playback_PreSolve'::__l95::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Chaos::FGeometryCollectionCacheAdapter::Playback_PreSolve'::`95'::<lambda_2>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14daed670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FGeometryCollectionCacheAdapter::Playback_PreSolve'::__l108::<lambda_3>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Chaos::FGeometryCollectionCacheAdapter::Playback_PreSolve'::`108'::<lambda_3>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// Destroy @ 14daef060

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FGeometryCollectionCacheAdapter::InitializeForRecord'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014daef065. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14daef070

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FGeometryCollectionCacheAdapter::Playback_PreSolve'::__l76::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014daef075. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14daef080

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AChaosCacheManager::HandlePostSolve'::__l2::<lambda_2>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014daef085. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14daef090

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AChaosCacheManager::HandlePreSolve'::__l2::<lambda_2>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014daef095. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14daef0a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FGeometryCollectionCacheAdapter::Playback_PreSolve'::__l95::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014daef0a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14daef0b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FGeometryCollectionCacheAdapter::Playback_PreSolve'::__l108::<lambda_3>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14daf7570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FGeometryCollectionCacheAdapter::InitializeForRecord'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14daf7580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FGeometryCollectionCacheAdapter::Playback_PreSolve'::__l76::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14daf7590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AChaosCacheManager::HandlePostSolve'::__l2::<lambda_2>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14daf75a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AChaosCacheManager::HandlePreSolve'::__l2::<lambda_2>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14daf75b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FGeometryCollectionCacheAdapter::Playback_PreSolve'::__l95::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14daf75c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Chaos::FGeometryCollectionCacheAdapter::Playback_PreSolve'::__l108::<lambda_3>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

