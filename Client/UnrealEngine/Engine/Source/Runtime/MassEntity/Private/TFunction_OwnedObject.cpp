// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 55

// GetAddress @ 1471b65e0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UScriptStruct_*_(__cdecl*)(void),0,0>::GetAddress
          (TFunction_OwnedObject<UScriptStruct_*_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// CloneToEmptyStorage @ 1471b65f0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UScriptStruct_*_(__cdecl*)(void),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<UScriptStruct_*_(__cdecl*)(void),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6APEAVUScriptStruct__XZ_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_UScriptStruct_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 1471b6610

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UScriptStruct_*_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<UScriptStruct_*_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001471b6615. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// GetAddress @ 1471b67e0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UClass_*_(__cdecl*)(void),0,0>::GetAddress
          (TFunction_OwnedObject<UClass_*_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// CloneToEmptyStorage @ 1471b67f0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UClass_*_(__cdecl*)(void),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<UClass_*_(__cdecl*)(void),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6APEAVUClass__XZ_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_UClass_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 1471b6810

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UClass_*_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<UClass_*_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001471b6815. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// ~TFunction_OwnedObject<UClass_*_(__cdecl*)(void),0,0> @ 1471de3b0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UClass_*_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<UClass_*_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<UClass_*_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6APEAVUClass__XZ_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// ~TFunction_OwnedObject<UScriptStruct_*_(__cdecl*)(void),0,0> @ 1471de3d0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UScriptStruct_*_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<UScriptStruct_*_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<UScriptStruct_*_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6APEAVUScriptStruct__XZ_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(FMassArchetypeHandle),0,0> @ 1471de3f0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FMassArchetypeHandle),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(FMassArchetypeHandle),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(FMassArchetypeHandle),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXUFMassArchetypeHandle___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<bool_(__cdecl*)(UStruct_const_*),0,0> @ 1471de410

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(UStruct_const_*),0,0>::
~TFunction_OwnedObject<bool_(__cdecl*)(UStruct_const_*),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(UStruct_const_*),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6A_NPEBVUStruct___Z_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// CloneToEmptyStorage @ 147203b30

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FMassArchetypeHandle),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(FMassArchetypeHandle),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXUFMassArchetypeHandle___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_FMassArchetypeHandle **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 147203b50

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(UStruct_const_*),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<bool_(__cdecl*)(UStruct_const_*),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6A_NPEBVUStruct___Z_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_bool_UStruct_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 147203b70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMassChildOfRelationEntityCreation::Execute'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  UObject *pUVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UMassChildOfRelationEntityCreation::Execute'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  pUVar1 = *(UObject **)((longlong)this + 0x10);
  *(UObject **)(param_1->InlineAllocation + 0x10) = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 147203bc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMassRelationEntityDestruction::Execute'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  UObject *pUVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UMassRelationEntityDestruction::Execute'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  pUVar1 = *(UObject **)((longlong)this + 0x10);
  *(UObject **)(param_1->InlineAllocation + 0x10) = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 147203c10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMassObserverManager::Initialize'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FMassObserverManager::Initialize'::`2'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 147203c40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMassProcessingPhaseManager::Start'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FMassProcessingPhaseManager::Start'::`2'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 147203c70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMassProcessingPhase::ExecuteTick'::__l28::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FMassProcessingPhase::ExecuteTick'::`28'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 147203c90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMassRelationRoleDestruction::ConfigureRelationObserver'::__l12::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UMassRelationRoleDestruction::ConfigureRelationObserver'::`12'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined4 *)(param_1->InlineAllocation + 0x10) = *(undefined4 *)((longlong)this + 0x10);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 147203cc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMassProcessingPhaseManager::Start'::__l2::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FMassProcessingPhaseManager::Start'::`2'::<lambda_2>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 147203cf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Mass::FEntityBuilder::Commit'::__l56::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0xa8,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UE::Mass::FEntityBuilder::Commit'::`56'::<lambda_2>,0,1>::
             _vftable_;
  `UE::Mass::FEntityBuilder::Commit'::__l56::<lambda_2>::<lambda_2>
            (puVar1 + 1,(<lambda_2> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 147203d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMassRelationRoleDestruction::ConfigureRelationObserver'::__l14::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UMassRelationRoleDestruction::ConfigureRelationObserver'::`14'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 147203d70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMassCompositeProcessor::DispatchProcessorTasks'::__l2::<lambda_3>,1,0>::
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

// CloneToEmptyStorage @ 147203db0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMassRelationRoleDestruction::ConfigureRelationObserver'::__l17::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UMassRelationRoleDestruction::ConfigureRelationObserver'::`17'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined4 *)(param_1->InlineAllocation + 0x10) = *(undefined4 *)((longlong)this + 0x10);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 147203de0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMassRelationRoleDestruction::ConfigureRelationObserver'::__l19::<lambda_4>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UMassRelationRoleDestruction::ConfigureRelationObserver'::`19'::<lambda_4>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 147203e00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMassRelationRoleDestruction::ConfigureRelationObserver'::__l9::<lambda_5>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UMassRelationRoleDestruction::ConfigureRelationObserver'::`9'::<lambda_5>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 147210e10

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FMassArchetypeHandle),0,0>::
Destroy(TFunction_OwnedObject<void_(__cdecl*)(FMassArchetypeHandle),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147210e15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 147210e20

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(UStruct_const_*),0,0>::Destroy
          (TFunction_OwnedObject<bool_(__cdecl*)(UStruct_const_*),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147210e25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 147210e30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMassChildOfRelationEntityCreation::Execute'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147210e35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 147210e40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMassRelationEntityDestruction::Execute'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147210e45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 147210e50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMassObserverManager::Initialize'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147210e55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 147210e60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMassProcessingPhaseManager::Start'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147210e65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 147210e70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMassProcessingPhase::ExecuteTick'::__l28::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147210e75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 147210e80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMassRelationRoleDestruction::ConfigureRelationObserver'::__l12::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147210e85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 147210e90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMassProcessingPhaseManager::Start'::__l2::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147210e95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 147210ea0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Mass::FEntityBuilder::Commit'::__l56::<lambda_2>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 147210ed0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMassRelationRoleDestruction::ConfigureRelationObserver'::__l14::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147210ed5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 147210ee0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMassCompositeProcessor::DispatchProcessorTasks'::__l2::<lambda_3>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147210ee5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 147210ef0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMassRelationRoleDestruction::ConfigureRelationObserver'::__l17::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147210ef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 147210f00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMassRelationRoleDestruction::ConfigureRelationObserver'::__l19::<lambda_4>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147210f05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 147210f10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMassRelationRoleDestruction::ConfigureRelationObserver'::__l9::<lambda_5>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147210f15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14721e260

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FMassArchetypeHandle),0,0>::
GetAddress(TFunction_OwnedObject<void_(__cdecl*)(FMassArchetypeHandle),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14721e270

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(UStruct_const_*),0,0>::GetAddress
          (TFunction_OwnedObject<bool_(__cdecl*)(UStruct_const_*),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14721e280

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMassChildOfRelationEntityCreation::Execute'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14721e290

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMassRelationEntityDestruction::Execute'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14721e2a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMassObserverManager::Initialize'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14721e2b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMassProcessingPhaseManager::Start'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14721e2c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMassProcessingPhase::ExecuteTick'::__l28::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14721e2d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMassRelationRoleDestruction::ConfigureRelationObserver'::__l12::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14721e2e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMassProcessingPhaseManager::Start'::__l2::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14721e2f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Mass::FEntityBuilder::Commit'::__l56::<lambda_2>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14721e300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMassRelationRoleDestruction::ConfigureRelationObserver'::__l14::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14721e310

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMassCompositeProcessor::DispatchProcessorTasks'::__l2::<lambda_3>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14721e320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMassRelationRoleDestruction::ConfigureRelationObserver'::__l17::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14721e330

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMassRelationRoleDestruction::ConfigureRelationObserver'::__l19::<lambda_4>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14721e340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMassRelationRoleDestruction::ConfigureRelationObserver'::__l9::<lambda_5>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

