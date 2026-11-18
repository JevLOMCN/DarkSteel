// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemandCore
// Functions: 19

// GetAddress @ 144585330

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandPurgeResult_const_&),1,0>::GetAddress
          (TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandPurgeResult_const_&),1,0>
           *this)

{
  return &this->Obj;
}

// CloneToEmptyStorage @ 144585340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandPurgeResult_const_&),1,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandPurgeResult_const_&),1,0>
                    *this,FFunctionStorage *param_1)

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

// Destroy @ 144585380

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandPurgeResult_const_&),1,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandPurgeResult_const_&),1,0>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144585385. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// GetAddress @ 1445853d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandDefragResult_const_&),1,0>::GetAddress
          (TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandDefragResult_const_&),1,0>
           *this)

{
  return &this->Obj;
}

// CloneToEmptyStorage @ 1445853e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandDefragResult_const_&),1,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandDefragResult_const_&),1,0>
                    *this,FFunctionStorage *param_1)

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

// Destroy @ 144585420

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandDefragResult_const_&),1,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandDefragResult_const_&),1,0>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144585425. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// GetAddress @ 144585470

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandMountResult),1,0>::GetAddress
          (TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandMountResult),1,0> *this)

{
  return &this->Obj;
}

// CloneToEmptyStorage @ 144585480

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandMountResult),1,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandMountResult),1,0> *this,
          FFunctionStorage *param_1)

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

// Destroy @ 1445854c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandMountResult),1,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandMountResult),1,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001445854c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// GetAddress @ 144585510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::Commands::InstallPackage'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 144585520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::Commands::InstallPackage'::__l2::<lambda_1>,1,0>::
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

// Destroy @ 144585560

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::Commands::InstallPackage'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144585565. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 1445855c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandVerifyCacheResult_&&),1,0>::GetAddress
          (TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandVerifyCacheResult_&&),1,0>
           *this)

{
  return &this->Obj;
}

// CloneToEmptyStorage @ 1445855d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandVerifyCacheResult_&&),1,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandVerifyCacheResult_&&),1,0>
                    *this,FFunctionStorage *param_1)

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

// Destroy @ 144585610

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandVerifyCacheResult_&&),1,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandVerifyCacheResult_&&),1,0>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144585615. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandVerifyCacheResult_&&),1,0> @ 1445876d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandVerifyCacheResult_&&),1,0>::
~TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandVerifyCacheResult_&&),1,0>
          (TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandVerifyCacheResult_&&),1,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AX__QEAUFOnDemandVerifyCacheResult_IoStore_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandDefragResult_const_&),1,0> @ 1445876f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandDefragResult_const_&),1,0>::
~TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandDefragResult_const_&),1,0>
          (TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandDefragResult_const_&),1,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEBUFOnDemandDefragResult_IoStore_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandPurgeResult_const_&),1,0> @ 144587710

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandPurgeResult_const_&),1,0>::
~TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandPurgeResult_const_&),1,0>
          (TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandPurgeResult_const_&),1,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEBUFOnDemandPurgeResult_IoStore_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandMountResult),1,0> @ 144587730

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandMountResult),1,0>::
~TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandMountResult),1,0>
          (TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::FOnDemandMountResult),1,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXUFOnDemandMountResult_IoStore_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

