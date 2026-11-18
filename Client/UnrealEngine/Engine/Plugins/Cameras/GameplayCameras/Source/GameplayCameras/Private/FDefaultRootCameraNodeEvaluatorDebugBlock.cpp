// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// GetTypeID @ 14d56b160

FCameraObjectTypeID * __thiscall
UE::Cameras::FDefaultRootCameraNodeEvaluatorDebugBlock::GetTypeID
          (FDefaultRootCameraNodeEvaluatorDebugBlock *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d56b170

bool __thiscall
UE::Cameras::FDefaultRootCameraNodeEvaluatorDebugBlock::IsKindOf
          (FDefaultRootCameraNodeEvaluatorDebugBlock *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FDefaultRootCameraNodeEvaluatorDebugBlock>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>)param_1->ID !=
      FCameraDebugBlock::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnSerialize @ 14d56b1d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Cameras::FDefaultRootCameraNodeEvaluatorDebugBlock::OnSerialize
          (FDefaultRootCameraNodeEvaluatorDebugBlock *this,FArchive *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 local_res18 [16];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FDefaultRootCameraNodeEvaluatorDebugBlock::GetStaticFields(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FDefaultRootCameraNodeEvaluatorDebugBlock::GetStaticFields(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FDefaultRootCameraNodeEvaluatorDebugBlock::GetStaticFields(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`UE::Cameras::FDefaultRootCameraNodeEvaluatorDebugBlock::GetStaticFields'::__l2::
             _dynamic_atexit_destructor_for__StaticFields__);
      _Init_thread_footer(&`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FDefaultRootCameraNodeEvaluatorDebugBlock::GetStaticFields(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar2 = (int)DAT_155362a30;
  puVar1 = _StaticFields + iVar2;
  puVar3 = _StaticFields;
  while( true ) {
    if ((int)DAT_155362a30 != iVar2) {
      `TCheckedPointerIterator<UE::Cameras::FCameraDebugBlockField_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (puVar3 == puVar1) break;
    (**(code **)(*(longlong *)*puVar3 + 8))((longlong *)*puVar3,this,param_1);
    puVar3 = puVar3 + 1;
  }
  return;
}

// OnDebugDraw @ 14d56b2a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FDefaultRootCameraNodeEvaluatorDebugBlock::OnDebugDraw
          (FDefaultRootCameraNodeEvaluatorDebugBlock *this,FCameraDebugBlockDrawParams *param_1,
          FCameraDebugRenderer *param_2)

{
  return;
}

