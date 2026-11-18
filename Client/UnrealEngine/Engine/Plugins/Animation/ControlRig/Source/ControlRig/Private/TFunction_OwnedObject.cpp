// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 378

// CloneToEmptyStorage @ 14a246390

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FModularRigModel::FindModuleInstancesOfClass'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FModularRigModel::FindModuleInstancesOfClass'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a2463b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::GetAllModules'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularRigController::GetAllModules'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a2463d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRig::GetControlsInOrder'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularRig::GetControlsInOrder'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a2463f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::GetPossibleBindings'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UModularRigController::GetPossibleBindings'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a246450

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRig::GetPreloadDependencies'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularRig::GetPreloadDependencies'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a246470

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::ImportModuleSettingsFromString'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularRigController::ImportModuleSettingsFromString'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a246490

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UControlRigReplay::PerformTest'::__l2::<lambda_1>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UControlRigReplay::PerformTest'::`2'::<lambda_1>,0,1>::_vftable_
  ;
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  lVar1 = *(longlong *)((longlong)this + 0x20);
  puVar2[4] = lVar1;
  puVar2[9] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x30);
    if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x48);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14a246510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::RefreshModuleVariables'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UModularRigController::RefreshModuleVariables'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a246570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::RefreshModuleVariables'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularRigController::RefreshModuleVariables'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a246590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::RestoreComponents'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigReplayTracks::RestoreComponents'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((longlong)this + 0x18);
  puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x30);
  puVar2[6] = lVar1;
  puVar2[0xb] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x40);
    if (*(undefined8 **)((longlong)this + 0x58) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x58);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14a246620

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::RestoreHierarchy'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x70,0x10);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FControlRigReplayTracks::RestoreHierarchy'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  `FControlRigReplayTracks::RestoreHierarchy'::__l2::<lambda_1>::<lambda_1>
            (puVar1 + 2,(<lambda_1> *)((longlong)this + 0x10));
  return puVar1 + 2;
}

// CloneToEmptyStorage @ 14a246680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::RestoreMetaData'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigReplayTracks::RestoreMetaData'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((longlong)this + 0x18);
  puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x30);
  puVar2[6] = lVar1;
  puVar2[0xb] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x40);
    if (*(undefined8 **)((longlong)this + 0x58) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x58);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14a246710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::RestorePose'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigReplayTracks::RestorePose'::`2'::<lambda_1>,0,1>::
             _vftable_;
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((longlong)this + 0x18);
  puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x30);
  puVar2[6] = lVar1;
  puVar2[0xb] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x40);
    if (*(undefined8 **)((longlong)this + 0x58) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x58);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14a2467a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FModularRigModel::SortModuleNames'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FModularRigModel::SortModuleNames'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a2467c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::StoreComponents'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FControlRigReplayTracks::StoreComponents'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a2467e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::StoreHierarchy'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigReplayTracks::StoreHierarchy'::`2'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a246840

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::StoreMetaData'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FControlRigReplayTracks::StoreMetaData'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a246860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::StorePose'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FControlRigReplayTracks::StorePose'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a246880

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::SwapModulesOfClass'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UModularRigController::SwapModulesOfClass'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a2468e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRig::UpdateSupportedEvents'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularRig::UpdateSupportedEvents'::`2'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a246900

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigBoneElement>'::__l5::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4____GetElementsOfType_UFRigBoneElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigBoneElement__V__TSizedDefaultAllocator__0CA______N_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a246920

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigConnectorElement>'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4____GetElementsOfType_UFRigConnectorElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigConnectorElement__V__TSizedDefaultAllocator__0CA______N_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a246940

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigControlElement>'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4____GetElementsOfType_UFRigControlElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigControlElement__V__TSizedDefaultAllocator__0CA______N_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a246960

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigCurveElement>'::__l5::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4____GetElementsOfType_UFRigCurveElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigCurveElement__V__TSizedDefaultAllocator__0CA______N_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a246980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::ForEachElement'::__l5::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigReplayTracks::ForEachElement'::`5'::<lambda_1>,0,1>::
             _vftable_;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  puVar2[8] = *(undefined8 *)((longlong)this + 0x40);
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14a246a00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::RestoreComponents'::__l5::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x60,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigReplayTracks::RestoreComponents'::`5'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((longlong)this + 0x18);
  puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x30);
  puVar2[6] = lVar1;
  puVar2[0xb] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x40);
    if (*(undefined8 **)((longlong)this + 0x58) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x58);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14a246a90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::StoreComponents'::__l5::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FControlRigReplayTracks::StoreComponents'::`5'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a246ab0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRig::UpdateModuleHierarchyFromCDO'::__l5::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularRig::UpdateModuleHierarchyFromCDO'::`5'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a246ad0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FModularRigModel::PatchModelsOnLoad'::__l7::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FModularRigModel::PatchModelsOnLoad'::`7'::<lambda_1>,0,0>::_vftable_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a246af0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTransformableControlHandle::OnControlModified'::__l17::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UTransformableControlHandle::OnControlModified'::`17'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a246b10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UControlRigReplay::StartReplay'::__l2::<lambda_3>::operator()'::__l11::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<``UControlRigReplay::StartReplay'::`2'::<lambda_3>::operator()'::`11'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a246b30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTransformableControlHandle::GetEvaluationTask'::__l14::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UTransformableControlHandle::GetEvaluationTask'::`14'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a246b90

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UControlRig::Execute'::__l2::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UControlRig::Execute'::`2'::<lambda_2>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a246bb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTransformableControlHandle::OnControlModified'::__l30::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UTransformableControlHandle::OnControlModified'::`30'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a246bd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UControlRigReplay::ValidateExpectedResults'::__l92::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UControlRigReplay::ValidateExpectedResults'::`92'::<lambda_2>,0,1>
             ::_vftable_;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14a246c50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigModule::RegisterTransformableCustomization'::__l2::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FControlRigModule::RegisterTransformableCustomization'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a246c70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::ImportModuleSettingsFromString'::__l105::<lambda_3>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UModularRigController::ImportModuleSettingsFromString'::`105'::<lambda_3>,0,1>
             ::_vftable_;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  ::FString::FString((FString *)(puVar1 + 2),(FString *)((longlong)this + 0x10));
  ::FString::FString((FString *)(puVar1 + 4),(FString *)((longlong)this + 0x20));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 14a246cf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigModule::RegisterTransformableCustomization'::__l2::<lambda_4>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FControlRigModule::RegisterTransformableCustomization'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a246d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::ImportModuleSettingsFromString'::__l149::<lambda_4>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UModularRigController::ImportModuleSettingsFromString'::`149'::<lambda_4>,0,1>
             ::_vftable_;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  ::FString::FString((FString *)(puVar1 + 2),(FString *)((longlong)this + 0x10));
  ::FString::FString((FString *)(puVar1 + 4),(FString *)((longlong)this + 0x20));
  return puVar1 + 1;
}

// Destroy @ 14a24eb00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FModularRigModel::FindModuleInstancesOfClass'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a24eb05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a24eb10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::GetAllModules'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a24eb15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a24eb20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRig::GetControlsInOrder'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a24eb25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a24eb30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::GetPossibleBindings'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a24eb60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRig::GetPreloadDependencies'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a24eb65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a24eb70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::ImportModuleSettingsFromString'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a24eb75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a24eb80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UControlRigReplay::PerformTest'::__l2::<lambda_1>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a24ebb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::RefreshModuleVariables'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a24ebe0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::RefreshModuleVariables'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a24ebe5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a24ebf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::RestoreComponents'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a24ec20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::RestoreHierarchy'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a24ec50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::RestoreMetaData'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a24ec80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::RestorePose'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a24ecb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FModularRigModel::SortModuleNames'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a24ecb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a24ecc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::StoreComponents'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a24ecc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a24ecd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::StoreHierarchy'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a24ed00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::StoreMetaData'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a24ed05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a24ed10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::StorePose'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a24ed15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a24ed20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::SwapModulesOfClass'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a24ed50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRig::UpdateSupportedEvents'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a24ed55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a24ed60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigBoneElement>'::__l5::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a24ed65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a24ed70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigConnectorElement>'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a24ed75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a24ed80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigControlElement>'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a24ed85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a24ed90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigCurveElement>'::__l5::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a24ed95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a24eda0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::ForEachElement'::__l5::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a24edd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::RestoreComponents'::__l5::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a24ee00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::StoreComponents'::__l5::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a24ee05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a24ee10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRig::UpdateModuleHierarchyFromCDO'::__l5::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a24ee15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a24ee20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FModularRigModel::PatchModelsOnLoad'::__l7::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a24ee25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a24ee30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTransformableControlHandle::OnControlModified'::__l17::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a24ee35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a24ee40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UControlRigReplay::StartReplay'::__l2::<lambda_3>::operator()'::__l11::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a24ee45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a24ee50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTransformableControlHandle::GetEvaluationTask'::__l14::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a24ee80

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UControlRig::Execute'::__l2::<lambda_2>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a24ee85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a24ee90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTransformableControlHandle::OnControlModified'::__l30::<lambda_2>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a24ee95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a24eea0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UControlRigReplay::ValidateExpectedResults'::__l92::<lambda_2>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a24eed0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigModule::RegisterTransformableCustomization'::__l2::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a24eed5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a24eee0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::ImportModuleSettingsFromString'::__l105::<lambda_3>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a24ef10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigModule::RegisterTransformableCustomization'::__l2::<lambda_4>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a24ef15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a24ef20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::ImportModuleSettingsFromString'::__l149::<lambda_4>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14a25db60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FModularRigModel::FindModuleInstancesOfClass'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a25db70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::GetAllModules'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a25db80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRig::GetControlsInOrder'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a25db90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::GetPossibleBindings'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a25dba0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRig::GetPreloadDependencies'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a25dbb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::ImportModuleSettingsFromString'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a25dbc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UControlRigReplay::PerformTest'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14a25dbd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::RefreshModuleVariables'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a25dbe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::RefreshModuleVariables'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a25dbf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::RestoreComponents'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14a25dc00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::RestoreHierarchy'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14a25dc10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::RestoreMetaData'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14a25dc20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::RestorePose'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14a25dc30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FModularRigModel::SortModuleNames'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a25dc40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::StoreComponents'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a25dc50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::StoreHierarchy'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a25dc60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::StoreMetaData'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a25dc70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::StorePose'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a25dc80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::SwapModulesOfClass'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a25dc90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRig::UpdateSupportedEvents'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a25dca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigBoneElement>'::__l5::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a25dcb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigConnectorElement>'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a25dcc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigControlElement>'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a25dcd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigCurveElement>'::__l5::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a25dce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::ForEachElement'::__l5::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14a25dcf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::RestoreComponents'::__l5::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14a25dd00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigReplayTracks::StoreComponents'::__l5::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a25dd10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRig::UpdateModuleHierarchyFromCDO'::__l5::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a25dd20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FModularRigModel::PatchModelsOnLoad'::__l7::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a25dd30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTransformableControlHandle::OnControlModified'::__l17::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a25dd40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UControlRigReplay::StartReplay'::__l2::<lambda_3>::operator()'::__l11::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a25dd50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTransformableControlHandle::GetEvaluationTask'::__l14::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a25dd60

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UControlRig::Execute'::__l2::<lambda_2>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a25dd70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTransformableControlHandle::OnControlModified'::__l30::<lambda_2>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a25dd80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UControlRigReplay::ValidateExpectedResults'::__l92::<lambda_2>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14a25dd90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigModule::RegisterTransformableCustomization'::__l2::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a25dda0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::ImportModuleSettingsFromString'::__l105::<lambda_3>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a25ddb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigModule::RegisterTransformableCustomization'::__l2::<lambda_4>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a25ddc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigController::ImportModuleSettingsFromString'::__l149::<lambda_4>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// ~TFunction_OwnedObject<void_(__cdecl*)(FRigElementResolveResult_&),0,0> @ 14a2dde10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FRigElementResolveResult_&),0,0>
::~TFunction_OwnedObject<void_(__cdecl*)(FRigElementResolveResult_&),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(FRigElementResolveResult_&),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAUFRigElementResolveResult___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(int,URigHierarchy::FMetadataStorage_*),0,0> @ 14a2dde30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(int,URigHierarchy::FMetadataStorage_*),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(int,URigHierarchy::FMetadataStorage_*),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(int,URigHierarchy::FMetadataStorage_*),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXHPEAUFMetadataStorage_URigHierarchy___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 14a2f65d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FRigElementResolveResult_&),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<void_(__cdecl*)(FRigElementResolveResult_&),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXAEAUFRigElementResolveResult___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_FRigElementResolveResult_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a2f65f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(int,URigHierarchy::FMetadataStorage_*),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(int,URigHierarchy::FMetadataStorage_*),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXHPEAUFMetadataStorage_URigHierarchy___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_int_FMetadataStorage_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a2f6610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`URigHierarchy::SendEvent'::__l8::<lambda_1>_>'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 14a2f6650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigRuleManager::FilterInvalidModules'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x40,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UModularRigRuleManager::FilterInvalidModules'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a2f66c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigRuleManager::FindMatches'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularRigRuleManager::FindMatches'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a2f66e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetRootElements'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__GetRootElements_URigHierarchy__QEBA_AV__TArray_PEAUFRigBaseElement__V__TSizedDefaultAllocator__0CA_____XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a2f6700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetSafeNewComponentName'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`URigHierarchy::GetSafeNewComponentName'::`2'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a2f6760

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetSafeNewName'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`URigHierarchy::GetSafeNewName'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a2f6780

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UFKControlRig::SetControlOffsetsFromBoneInitials'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UFKControlRig::SetControlOffsetsFromBoneInitials'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a2f67a0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`URigHierarchy::SortKeys'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1__SortKeys_URigHierarchy__QEBA_AV__TArray_UFRigElementKey__V__TSizedDefaultAllocator__0CA_____AEBV4__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  `URigHierarchy::SortKeys'::__l2::<lambda_1>::<lambda_1>
            (puVar1 + 1,(<lambda_1> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 14a2f6800

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigNullElement>'::__l5::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4____GetElementsOfType_UFRigNullElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigNullElement__V__TSizedDefaultAllocator__0CA______N_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a2f6820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigReferenceElement>'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4____GetElementsOfType_UFRigReferenceElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigReferenceElement__V__TSizedDefaultAllocator__0CA______N_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a2f6840

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigSocketElement>'::__l5::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4____GetElementsOfType_UFRigSocketElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigSocketElement__V__TSizedDefaultAllocator__0CA______N_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a2f6860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetFilteredElements<FRigBaseElement>'::__l5::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__4____GetFilteredElements_UFRigBaseElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigBaseElement__V__TSizedDefaultAllocator__0CA_____V__TFunction___A6A_NPEAUFRigBaseElement___Z___N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  lVar1 = *(longlong *)((longlong)this + 0x20);
  puVar2[4] = lVar1;
  puVar2[9] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x30);
    if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x48);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14a2f68f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetFilteredElements<FRigControlElement>'::__l5::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__4____GetFilteredElements_UFRigControlElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigControlElement__V__TSizedDefaultAllocator__0CA_____V__TFunction___A6A_NPEAUFRigControlElement___Z___N_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  lVar1 = *(longlong *)((longlong)this + 0x20);
  puVar2[4] = lVar1;
  puVar2[9] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x30);
    if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x48);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14a2f6980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::ShrinkElementStorage'::__l5::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`URigHierarchy::ShrinkElementStorage'::`5'::<lambda_1>,0,0>::_vftable_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a2f69a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::ResetPoseToInitial'::__l8::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`URigHierarchy::ResetPoseToInitial'::`8'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a2f69c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``URigHierarchy::GetKeysByPredicate'::__l2::<lambda_1>::operator()'::__l9::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<``URigHierarchy::GetKeysByPredicate'::`2'::<lambda_1>::operator()'::`9'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[3] = 0;
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[5] = 0;
  puVar2[4] = uVar1;
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a2f6a40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetActiveChildren'::__l10::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`URigHierarchy::GetActiveChildren'::`10'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a2f6a60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigRuleManager::FilterByConnectorRules'::__l13::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UModularRigRuleManager::FilterByConnectorRules'::`13'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a2f6ac0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::EnsureCacheValidityImpl'::__l2::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`URigHierarchy::EnsureCacheValidityImpl'::`2'::<lambda_2>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a2f6ae0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetSafeNewDisplayName'::__l2::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`URigHierarchy::GetSafeNewDisplayName'::`2'::<lambda_2>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a2f6b00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::SortElementStorage'::__l2::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`URigHierarchy::SortElementStorage'::`2'::<lambda_2>,0,1>::
             _vftable_;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  `URigHierarchy::SortElementStorage'::__l2::<lambda_1>::<lambda_1>
            (puVar1 + 2,(<lambda_1> *)((longlong)this + 0x10));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 14a2f6b60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetAnimationChannels'::__l8::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`URigHierarchy::GetAnimationChannels'::`8'::<lambda_2>,0,0>::_vftable_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a2f6b80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetActiveChildren'::__l12::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`URigHierarchy::GetActiveChildren'::`12'::<lambda_2>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a2f6ba0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::SortElementStorage'::__l2::<lambda_3>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x58,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`URigHierarchy::SortElementStorage'::`2'::<lambda_3>,0,1>::
             _vftable_;
  `URigHierarchy::SortElementStorage'::__l2::<lambda_3>::<lambda_3>
            (puVar1 + 1,(<lambda_3> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 14a2f6c00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UFKControlRig::Execute_Internal'::__l9::<lambda_3>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UFKControlRig::Execute_Internal'::`9'::<lambda_3>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a2f6c60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::SortElementStorage'::__l2::<lambda_4>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x58,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`URigHierarchy::SortElementStorage'::`2'::<lambda_4>,0,1>::
             _vftable_;
  `URigHierarchy::SortElementStorage'::__l2::<lambda_4>::<lambda_4>
            (puVar1 + 1,(<lambda_4> *)((longlong)this + 8));
  return puVar1 + 1;
}

// Destroy @ 14a2ff3a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FRigElementResolveResult_&),0,0>
::Destroy(TFunction_OwnedObject<void_(__cdecl*)(FRigElementResolveResult_&),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a2ff3a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14a2ff3b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(int,URigHierarchy::FMetadataStorage_*),0,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(int,URigHierarchy::FMetadataStorage_*),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a2ff3b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14a2ff3c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`URigHierarchy::SendEvent'::__l8::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a2ff3f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigRuleManager::FilterInvalidModules'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a2ff420

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigRuleManager::FindMatches'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a2ff425. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a2ff430

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetRootElements'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a2ff435. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a2ff440

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetSafeNewComponentName'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a2ff470

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetSafeNewName'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a2ff475. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a2ff480

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UFKControlRig::SetControlOffsetsFromBoneInitials'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a2ff485. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a2ff490

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`URigHierarchy::SortKeys'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a2ff4c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigNullElement>'::__l5::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a2ff4c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a2ff4d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigReferenceElement>'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a2ff4d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a2ff4e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigSocketElement>'::__l5::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a2ff4e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a2ff4f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetFilteredElements<FRigBaseElement>'::__l5::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a2ff520

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetFilteredElements<FRigControlElement>'::__l5::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a2ff550

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::ShrinkElementStorage'::__l5::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a2ff555. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a2ff560

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::ResetPoseToInitial'::__l8::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a2ff565. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a2ff570

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``URigHierarchy::GetKeysByPredicate'::__l2::<lambda_1>::operator()'::__l9::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a2ff5a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetActiveChildren'::__l10::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a2ff5a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a2ff5b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigRuleManager::FilterByConnectorRules'::__l13::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a2ff5e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::EnsureCacheValidityImpl'::__l2::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a2ff5e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a2ff5f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetSafeNewDisplayName'::__l2::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a2ff5f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a2ff600

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::SortElementStorage'::__l2::<lambda_2>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a2ff630

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetAnimationChannels'::__l8::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a2ff635. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a2ff640

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetActiveChildren'::__l12::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a2ff645. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a2ff650

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::SortElementStorage'::__l2::<lambda_3>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a2ff680

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UFKControlRig::Execute_Internal'::__l9::<lambda_3>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a2ff6b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::SortElementStorage'::__l2::<lambda_4>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14a308bd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FRigElementResolveResult_&),0,0>
::GetAddress(TFunction_OwnedObject<void_(__cdecl*)(FRigElementResolveResult_&),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14a308be0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(int,URigHierarchy::FMetadataStorage_*),0,0>::GetAddress
          (TFunction_OwnedObject<void_(__cdecl*)(int,URigHierarchy::FMetadataStorage_*),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14a308bf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`URigHierarchy::SendEvent'::__l8::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a308c00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigRuleManager::FilterInvalidModules'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a308c10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigRuleManager::FindMatches'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a308c20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetRootElements'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a308c30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetSafeNewComponentName'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a308c40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetSafeNewName'::__l2::<lambda_1>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a308c50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UFKControlRig::SetControlOffsetsFromBoneInitials'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a308c60

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`URigHierarchy::SortKeys'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a308c70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigNullElement>'::__l5::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a308c80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigReferenceElement>'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a308c90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigSocketElement>'::__l5::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a308ca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetFilteredElements<FRigBaseElement>'::__l5::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14a308cb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetFilteredElements<FRigControlElement>'::__l5::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14a308cc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::ShrinkElementStorage'::__l5::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a308cd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::ResetPoseToInitial'::__l8::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a308ce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``URigHierarchy::GetKeysByPredicate'::__l2::<lambda_1>::operator()'::__l9::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a308cf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetActiveChildren'::__l10::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a308d00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularRigRuleManager::FilterByConnectorRules'::__l13::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a308d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::EnsureCacheValidityImpl'::__l2::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a308d20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetSafeNewDisplayName'::__l2::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a308d30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::SortElementStorage'::__l2::<lambda_2>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a308d40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetAnimationChannels'::__l8::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a308d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetActiveChildren'::__l12::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a308d60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::SortElementStorage'::__l2::<lambda_3>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a308d70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UFKControlRig::Execute_Internal'::__l9::<lambda_3>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a308d80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::SortElementStorage'::__l2::<lambda_4>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 14a3f1770

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l46::<lambda_10>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x48,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::`46'::<lambda_10>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x40);
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  puVar2[8] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f17e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l46::<lambda_10>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::`46'::<lambda_10>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f1840

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l53::<lambda_11>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x48,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::`53'::<lambda_11>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x40);
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  puVar2[8] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f18b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l53::<lambda_11>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::`53'::<lambda_11>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f1910

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l60::<lambda_12>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x48,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::`60'::<lambda_12>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x40);
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  puVar2[8] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f1980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l60::<lambda_12>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::`60'::<lambda_12>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f19e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l67::<lambda_13>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x48,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::`67'::<lambda_13>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x40);
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  puVar2[8] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f1a50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l67::<lambda_13>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::`67'::<lambda_13>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f1ab0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigTransformElement>'::__l5::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4____GetElementsOfType_UFRigTransformElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigTransformElement__V__TSizedDefaultAllocator__0CA______N_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a3f1ad0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l5::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x40,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::`5'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f1b40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l5::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::`5'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f1ba0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigDispatch_GetAnimAttribute::GetArgumentInfos'::__l5::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FRigDispatch_GetAnimAttribute::GetArgumentInfos'::`5'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a3f1bc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigDispatch_SetAnimAttribute::GetArgumentInfos'::__l5::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FRigDispatch_SetAnimAttribute::GetArgumentInfos'::`5'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a3f1be0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::__l8::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::`8'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f1c40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::__l8::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::`8'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f1ca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMovieSceneControlRigParameterSection::RecreateWithThisControlRig'::__l24::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UMovieSceneControlRigParameterSection::RecreateWithThisControlRig'::`24'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a3f1cc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMovieSceneControlRigParameterTrack::RenameParameterName'::__l12::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UMovieSceneControlRigParameterTrack::RenameParameterName'::`12'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f1d20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigDispatch_GetAnimAttribute::GetArgumentInfos'::__l5::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FRigDispatch_GetAnimAttribute::GetArgumentInfos'::`5'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a3f1d40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::__l9::<lambda_2>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::`9'::<lambda_2>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f1da0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::__l12::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::`12'::<lambda_2>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f1e00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l12::<lambda_2>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x40,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::`12'::<lambda_2>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f1e70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l12::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::`12'::<lambda_2>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f1ed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::__l10::<lambda_3>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::`10'::<lambda_3>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f1f30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::__l16::<lambda_3>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::`16'::<lambda_3>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f1f90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l14::<lambda_3>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x40,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::`14'::<lambda_3>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f2000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l14::<lambda_3>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::`14'::<lambda_3>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f2060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l21::<lambda_4>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x40,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::`21'::<lambda_4>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f20d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l21::<lambda_4>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::`21'::<lambda_4>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f2130

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::__l23::<lambda_4>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::`23'::<lambda_4>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f2190

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::__l11::<lambda_4>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::`11'::<lambda_4>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f21f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l23::<lambda_5>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x40,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::`23'::<lambda_5>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f2260

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l23::<lambda_5>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::`23'::<lambda_5>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f22c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::__l30::<lambda_5>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::`30'::<lambda_5>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f2320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::__l12::<lambda_5>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::`12'::<lambda_5>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f2380

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l27::<lambda_6>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x40,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::`27'::<lambda_6>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f23f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l27::<lambda_6>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::`27'::<lambda_6>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f2450

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::__l37::<lambda_6>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::`37'::<lambda_6>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f24b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::__l13::<lambda_6>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::`13'::<lambda_6>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f2510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l31::<lambda_7>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x40,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::`31'::<lambda_7>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f2580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l31::<lambda_7>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::`31'::<lambda_7>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f25e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::__l44::<lambda_7>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::`44'::<lambda_7>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f2640

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::__l14::<lambda_7>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::`14'::<lambda_7>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f26a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l35::<lambda_8>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x40,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::`35'::<lambda_8>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f2710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l35::<lambda_8>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::`35'::<lambda_8>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f2770

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::__l51::<lambda_8>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::`51'::<lambda_8>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f27d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::__l15::<lambda_8>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::`15'::<lambda_8>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f2830

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::__l16::<lambda_9>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::`16'::<lambda_9>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f2890

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l39::<lambda_9>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x48,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::`39'::<lambda_9>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x40);
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  puVar2[8] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f2900

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l39::<lambda_9>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::`39'::<lambda_9>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a3f2960

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::__l58::<lambda_9>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::`58'::<lambda_9>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// Destroy @ 14a401db0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l46::<lambda_10>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a401de0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l46::<lambda_10>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a401e10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l53::<lambda_11>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a401e40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l53::<lambda_11>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a401e70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l60::<lambda_12>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a401ea0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l60::<lambda_12>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a401ed0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l67::<lambda_13>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a401f00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l67::<lambda_13>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a401f30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigTransformElement>'::__l5::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a401f35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a401f40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l5::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a401f70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l5::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a401fa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigDispatch_GetAnimAttribute::GetArgumentInfos'::__l5::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a401fa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a401fb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigDispatch_SetAnimAttribute::GetArgumentInfos'::__l5::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a401fb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a401fc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::__l8::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a401ff0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::__l8::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a402020

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMovieSceneControlRigParameterSection::RecreateWithThisControlRig'::__l24::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a402025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a402030

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMovieSceneControlRigParameterTrack::RenameParameterName'::__l12::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a402060

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigDispatch_GetAnimAttribute::GetArgumentInfos'::__l5::<lambda_2>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a402065. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a402070

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::__l9::<lambda_2>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a4020a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::__l12::<lambda_2>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a4020d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l12::<lambda_2>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a402100

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l12::<lambda_2>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a402130

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::__l10::<lambda_3>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a402160

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::__l16::<lambda_3>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a402190

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l14::<lambda_3>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a4021c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l14::<lambda_3>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a4021f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l21::<lambda_4>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a402220

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l21::<lambda_4>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a402250

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::__l23::<lambda_4>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a402280

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::__l11::<lambda_4>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a4022b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l23::<lambda_5>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a4022e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l23::<lambda_5>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a402310

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::__l30::<lambda_5>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a402340

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::__l12::<lambda_5>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a402370

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l27::<lambda_6>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a4023a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l27::<lambda_6>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a4023d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::__l37::<lambda_6>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a402400

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::__l13::<lambda_6>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a402430

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l31::<lambda_7>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a402460

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l31::<lambda_7>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a402490

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::__l44::<lambda_7>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a4024c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::__l14::<lambda_7>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a4024f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l35::<lambda_8>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a402520

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l35::<lambda_8>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a402550

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::__l51::<lambda_8>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a402580

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::__l15::<lambda_8>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a4025b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::__l16::<lambda_9>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a4025e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l39::<lambda_9>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a402610

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l39::<lambda_9>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a402640

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::__l58::<lambda_9>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14a410940

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l46::<lambda_10>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l46::<lambda_10>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410960

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l53::<lambda_11>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l53::<lambda_11>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l60::<lambda_12>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l60::<lambda_12>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a4109a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l67::<lambda_13>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a4109b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l67::<lambda_13>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a4109c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`URigHierarchy::GetElementsOfType<FRigTransformElement>'::__l5::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a4109d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l5::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a4109e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l5::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a4109f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigDispatch_GetAnimAttribute::GetArgumentInfos'::__l5::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410a00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigDispatch_SetAnimAttribute::GetArgumentInfos'::__l5::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410a10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::__l8::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410a20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::__l8::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410a30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMovieSceneControlRigParameterSection::RecreateWithThisControlRig'::__l24::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410a40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMovieSceneControlRigParameterTrack::RenameParameterName'::__l12::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410a50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigDispatch_GetAnimAttribute::GetArgumentInfos'::__l5::<lambda_2>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410a60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::__l9::<lambda_2>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410a70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::__l12::<lambda_2>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410a80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l12::<lambda_2>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410a90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l12::<lambda_2>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410aa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::__l10::<lambda_3>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410ab0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::__l16::<lambda_3>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410ac0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l14::<lambda_3>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410ad0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l14::<lambda_3>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410ae0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l21::<lambda_4>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410af0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l21::<lambda_4>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410b00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::__l23::<lambda_4>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410b10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::__l11::<lambda_4>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410b20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l23::<lambda_5>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410b30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l23::<lambda_5>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410b40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::__l30::<lambda_5>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410b50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::__l12::<lambda_5>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410b60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l27::<lambda_6>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410b70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l27::<lambda_6>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410b80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::__l37::<lambda_6>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410b90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::__l13::<lambda_6>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410ba0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l31::<lambda_7>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410bb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l31::<lambda_7>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410bc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::__l44::<lambda_7>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410bd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::__l14::<lambda_7>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410be0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l35::<lambda_8>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410bf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l35::<lambda_8>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410c00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::__l51::<lambda_8>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410c10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::__l15::<lambda_8>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410c20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomControlFunction'::__l16::<lambda_9>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410c30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddCustomVariableFunction'::__l39::<lambda_9>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410c40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddVariableFunction'::__l39::<lambda_9>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a410c50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FControlRigVariableMappings::AddControlFunction'::__l58::<lambda_9>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// ~TFunction_OwnedObject<bool_(__cdecl*)(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&),0,0> @ 14a517d70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&),0,0>::
~TFunction_OwnedObject<bool_(__cdecl*)(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NAEBVTRigVMTypeIndex__AEBUFRigVMRegistryHandle___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 14a51ef90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<bool_(__cdecl*)(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBVTRigVMTypeIndex__AEBUFRigVMRegistryHandle___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_bool_TRigVMTypeIndex_ptr_FRigVMRegistryHandle_ptr **)
   (param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a51efb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigUnit_FindItemsWithMetadata::StaticExecute'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FRigUnit_FindItemsWithMetadata::StaticExecute'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a51f010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigUnit_FindItemsWithMetadataTag::StaticExecute'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FRigUnit_FindItemsWithMetadataTag::StaticExecute'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a51f030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigUnit_FindItemsWithMetadataTagArray::StaticExecute'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FRigUnit_FindItemsWithMetadataTagArray::StaticExecute'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14a51f090

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigUnit_ScaleConstraint::StaticExecute'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x260,0x10);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FRigUnit_ScaleConstraint::StaticExecute'::`2'::<lambda_1>,0,1>::
             _vftable_;
  FControlRigExecuteContext::FControlRigExecuteContext
            ((FControlRigExecuteContext *)(puVar1 + 2),
             (FControlRigExecuteContext *)((longlong)this + 0x10));
  return (FControlRigExecuteContext *)(puVar1 + 2);
}

// CloneToEmptyStorage @ 14a51f0f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigUnit_ScaleConstraintLocalSpaceOffset::StaticExecute'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x260,0x10);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FRigUnit_ScaleConstraintLocalSpaceOffset::StaticExecute'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  FControlRigExecuteContext::FControlRigExecuteContext
            ((FControlRigExecuteContext *)(puVar1 + 2),
             (FControlRigExecuteContext *)((longlong)this + 0x10));
  return (FControlRigExecuteContext *)(puVar1 + 2);
}

// CloneToEmptyStorage @ 14a51f150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigUnit_CollectionGetAll::StaticExecute'::__l10::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FRigUnit_CollectionGetAll::StaticExecute'::`10'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14a51f170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigUnit_GetItemsInModule::StaticExecute'::__l13::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FRigUnit_GetItemsInModule::StaticExecute'::`13'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// Destroy @ 14a520d50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&),0,0>::
Destroy(TFunction_OwnedObject<bool_(__cdecl*)(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&),0,0>
        *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a520d55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14a520d60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigUnit_FindItemsWithMetadata::StaticExecute'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a520d90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigUnit_FindItemsWithMetadataTag::StaticExecute'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a520d95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a520da0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigUnit_FindItemsWithMetadataTagArray::StaticExecute'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a520dd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigUnit_ScaleConstraint::StaticExecute'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a520e00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigUnit_ScaleConstraintLocalSpaceOffset::StaticExecute'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14a520e30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigUnit_CollectionGetAll::StaticExecute'::__l10::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a520e35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14a520e40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigUnit_GetItemsInModule::StaticExecute'::__l13::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14a5304a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&),0,0>::
GetAddress(TFunction_OwnedObject<bool_(__cdecl*)(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&),0,0>
           *this)

{
  return &this->Obj;
}

// GetAddress @ 14a5304b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigUnit_FindItemsWithMetadata::StaticExecute'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a5304c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigUnit_FindItemsWithMetadataTag::StaticExecute'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a5304d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigUnit_FindItemsWithMetadataTagArray::StaticExecute'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a5304e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigUnit_ScaleConstraint::StaticExecute'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14a5304f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigUnit_ScaleConstraintLocalSpaceOffset::StaticExecute'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14a530500

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigUnit_CollectionGetAll::StaticExecute'::__l10::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14a530510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigUnit_GetItemsInModule::StaticExecute'::__l13::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

