// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Launch
// Functions: 25

// ~TFunction_OwnedObject<void_(__cdecl*)(FPackageLocalizationManager_&),0,0> @ 148d9c6c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FPackageLocalizationManager_&),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(FPackageLocalizationManager_&),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(FPackageLocalizationManager_&),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFPackageLocalizationManager___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 148da0790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FPackageLocalizationManager_&),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<void_(__cdecl*)(FPackageLocalizationManager_&),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFPackageLocalizationManager___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_FPackageLocalizationManager_ptr **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148da07b0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l51::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 148da07f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScopedSampleMallocChurn::FScopedSampleMallocChurn'::__l1::<lambda_24_>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_24_>__0___0FScopedSampleMallocChurn__QEAA_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148da0810

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l55::<lambda_2>,1,0>::
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

// CloneToEmptyStorage @ 148da0850

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l127::<lambda_4>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FEngineLoop::Tick'::`127'::<lambda_4>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148da0870

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l206::<lambda_5>,1,0>::
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

// CloneToEmptyStorage @ 148da08b0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l61::<lambda_6>,1,0>::
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

// CloneToEmptyStorage @ 148da08f0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l222::<lambda_7>,1,0>::
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

// Destroy @ 148da1050

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FPackageLocalizationManager_&),0,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(FPackageLocalizationManager_&),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148da1055. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 148da1060

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l51::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148da1065. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148da1070

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScopedSampleMallocChurn::FScopedSampleMallocChurn'::__l1::<lambda_24_>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148da1075. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148da1080

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l55::<lambda_2>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148da1085. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148da1090

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l127::<lambda_4>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148da1095. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148da10a0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l206::<lambda_5>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148da10a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148da10b0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l61::<lambda_6>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148da10b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148da10c0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l222::<lambda_7>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148da10c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 148da3d00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FPackageLocalizationManager_&),0,0>::GetAddress
          (TFunction_OwnedObject<void_(__cdecl*)(FPackageLocalizationManager_&),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 148da3d10

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l51::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148da3d20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScopedSampleMallocChurn::FScopedSampleMallocChurn'::__l1::<lambda_24_>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148da3d30

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l55::<lambda_2>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148da3d40

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l127::<lambda_4>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148da3d50

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l206::<lambda_5>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148da3d60

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l61::<lambda_6>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148da3d70

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FEngineLoop::Tick'::__l222::<lambda_7>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

