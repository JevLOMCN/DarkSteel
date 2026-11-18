// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IndexedCacheStorage
// Functions: 12

// GetAddress @ 144563a90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Experimental::IndexedCacheStorageManager_Debug::ListFiles'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 144563aa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Experimental::IndexedCacheStorageManager_Debug::ListFiles'::__l2::<lambda_1>,1,0>
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

// Destroy @ 144563ae0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Experimental::IndexedCacheStorageManager_Debug::ListFiles'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144563ae5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 144563b40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Experimental::IndexedCacheStorageManager_Debug::CopyFiles'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 144563b50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Experimental::IndexedCacheStorageManager_Debug::CopyFiles'::__l2::<lambda_1>,1,1>
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

// Destroy @ 144563b90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Experimental::IndexedCacheStorageManager_Debug::CopyFiles'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// CloneToEmptyStorage @ 1445654e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Experimental::FCacheStorageMetaData::CreateCacheStorage'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CreateCacheStorage_FCacheStorageMetaData_Experimental__QEAA_N_K_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144565500

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Experimental::FCacheStorageMetaData::DestroyCacheStorage'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__DestroyCacheStorage_FCacheStorageMetaData_Experimental__QEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 144565ca0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Experimental::FCacheStorageMetaData::CreateCacheStorage'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144565ca5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144565cb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Experimental::FCacheStorageMetaData::DestroyCacheStorage'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144565cb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 144567290

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Experimental::FCacheStorageMetaData::CreateCacheStorage'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1445672a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Experimental::FCacheStorageMetaData::DestroyCacheStorage'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

