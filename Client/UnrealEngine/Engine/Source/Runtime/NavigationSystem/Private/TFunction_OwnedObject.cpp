// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 21

// CloneToEmptyStorage @ 146d87580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationDataHandler::RemoveFromNavOctree'::__l8::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FNavigationDataHandler::RemoveFromNavOctree'::`8'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 146d875a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationDataHandler::UpdateNavOctreeElementBounds'::__l11::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FNavigationDataHandler::UpdateNavOctreeElementBounds'::`11'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 146d875d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationDataHandler::AddLevelCollisionToOctree'::__l14::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FNavigationDataHandler::AddLevelCollisionToOctree'::`14'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 146d87600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationDataHandler::AddElementToNavOctree'::__l15::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FNavigationDataHandler::AddElementToNavOctree'::`15'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 146d87620

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationDataHandler::AddElementToNavOctree'::__l126::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FNavigationDataHandler::AddElementToNavOctree'::`126'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 146d87650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationDataHandler::AddElementToNavOctree'[::C]::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation = &_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// Destroy @ 146d90140

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationDataHandler::RemoveFromNavOctree'::__l8::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146d90145. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 146d90150

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationDataHandler::UpdateNavOctreeElementBounds'::__l11::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146d90155. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 146d90160

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationDataHandler::AddLevelCollisionToOctree'::__l14::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146d90165. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 146d90170

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationDataHandler::AddElementToNavOctree'::__l15::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146d90175. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 146d90180

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationDataHandler::AddElementToNavOctree'::__l126::<lambda_2>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146d90185. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 146d90190

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationDataHandler::AddElementToNavOctree'[::C]::<lambda_3>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146d90195. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 146d99530

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationDataHandler::RemoveFromNavOctree'::__l8::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146d99540

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationDataHandler::UpdateNavOctreeElementBounds'::__l11::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146d99550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationDataHandler::AddLevelCollisionToOctree'::__l14::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146d99560

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationDataHandler::AddElementToNavOctree'::__l15::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146d99570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationDataHandler::AddElementToNavOctree'::__l126::<lambda_2>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146d99580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationDataHandler::AddElementToNavOctree'[::C]::<lambda_3>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 146de3ed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ARecastNavMesh::OnStreamingNavDataAdded'::__l20::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`ARecastNavMesh::OnStreamingNavDataAdded'::`20'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// Destroy @ 146de9ad0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ARecastNavMesh::OnStreamingNavDataAdded'::__l20::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146de9ad5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 146dfff30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ARecastNavMesh::OnStreamingNavDataAdded'::__l20::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

