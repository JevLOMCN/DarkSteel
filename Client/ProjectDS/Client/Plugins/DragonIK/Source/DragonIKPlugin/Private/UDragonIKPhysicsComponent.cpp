// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 137

// StaticClass @ 14d2a36d0

UClass * __cdecl UDragonIKPhysicsComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDragonIKPhysicsComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DragonIKPlugin",L"DragonIKPhysicsComponent",
               &Z_Registration_Info_UClass_UDragonIKPhysicsComponent.InnerSingleton,
               StaticRegisterNativesUDragonIKPhysicsComponent,0x480,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDragonIKPhysicsComponent>,
               InternalVTableHelperCtorCaller<UDragonIKPhysicsComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDragonIKPhysicsComponent.InnerSingleton;
}

// UDragonIKPhysicsComponent @ 14d2a5d30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDragonIKPhysicsComponent * __thiscall
UDragonIKPhysicsComponent::UDragonIKPhysicsComponent
          (UDragonIKPhysicsComponent *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->physanim_tag_index = 1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->Raw_Animation_Transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->Raw_Animation_Transforms).ArrayNum = 0;
  (this->Raw_Animation_Transforms).ArrayMax = 0;
  ::FName::FName(&this->Custom_Root_Bone,"pelvis");
  (this->individual_bone_selection).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->individual_bone_selection).ArrayNum = 0;
  (this->individual_bone_selection).ArrayMax = 0;
  (this->control_bone_relative_transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->control_bone_relative_transforms).ArrayNum = 0;
  (this->control_bone_relative_transforms).ArrayMax = 0;
  ::FName::FName(&this->Root_Clamping_Bone,"None");
  (this->Influence_Stopping_Bones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Influence_Stopping_Bones).ArrayNum = 0;
  (this->Influence_Stopping_Bones).ArrayMax = 0;
  (this->Override_Handle_Strength_Multiplier).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Override_Handle_Strength_Multiplier).ArrayNum = 0;
  (this->Override_Handle_Strength_Multiplier).ArrayMax = 0;
  (this->Parent_Bone_Map).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parent_Bone_Map).ArrayNum = 0;
  (this->Parent_Bone_Map).ArrayMax = 0;
  (this->Last_Second_Parent_Bone_Map).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Last_Second_Parent_Bone_Map).ArrayNum = 0;
  (this->Last_Second_Parent_Bone_Map).ArrayMax = 0;
  (this->bone_to_bone_map).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->bone_to_bone_map).ArrayNum = 0;
  (this->bone_to_bone_map).ArrayMax = 0;
  this->saved_mass_kg = 10.0;
  this->slight_delay_counter = 0.0;
  this->Linear_Strength = 1000;
  this->Angular_Strength = 1000;
  this->Linear_Damp = 5;
  this->Angular_Damp = 5;
  this->Interpolation_Speed = 10;
  this->Teleport_Distance = 500.0;
  this->teleport_freeze_count = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Body_Delta_Transform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Body_Delta_Transform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->Body_Delta_Transform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Body_Delta_Transform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Body_Delta_Transform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Body_Delta_Transform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->Body_Delta_Transform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Body_Delta_Transform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Body_Delta_Transform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Body_Delta_Transform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->Body_Delta_Transform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->Body_Delta_Transform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  *(undefined8 *)&this->Parent_Child_Connection_Array = 0;
  *(undefined8 *)&(this->Parent_Child_Connection_Array).field_0x8 = 0;
  *(undefined8 *)&(this->Parent_Child_Connection_Array).field_0x20 = 0;
  this->parent_child_ragdoll_state = false;
  *(undefined4 *)&(this->Parent_Child_Connection_Array).field_0x28 = 0;
  *(undefined4 *)&(this->Parent_Child_Connection_Array).field_0x2c = 0x80;
  *(undefined4 *)&(this->Parent_Child_Connection_Array).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Parent_Child_Connection_Array).field_0x34 = 0;
  *(undefined8 *)&(this->Parent_Child_Connection_Array).field_0x40 = 0;
  *(undefined4 *)&(this->Parent_Child_Connection_Array).field_0x48 = 0;
  this->use_auto_blending_logic = true;
  this->Autoblendalpha = 1.0;
  this->is_released = false;
  this->modify_physics_states = false;
  this->Hit_Enable_Speed = 5.0;
  this->Hit_Disable_Speed = 5.0;
  this->hit_delay_time = 1.0;
  this->temporary_disable_speed = 5.0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->Physanim_Enter_Curve);
  this->blend_to_zero = false;
  this->blend_min_value = 0.0;
  this->get_up_timer = 0.0;
  this->ragdoll_mode = false;
  this->ragdoll_lock = false;
  this->tick_counter = 0;
  (this->Bodies_Physics_Blend).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bodies_Physics_Blend).ArrayNum = 0;
  (this->Bodies_Physics_Blend).ArrayMax = 0;
  (this->Extra_Bone_Delay_Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Extra_Bone_Delay_Array).ArrayNum = 0;
  (this->Extra_Bone_Delay_Array).ArrayMax = 0;
  (this->Bodies_Physics_Hit_Bools).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bodies_Physics_Hit_Bools).ArrayNum = 0;
  (this->Bodies_Physics_Hit_Bools).ArrayMax = 0;
  (this->Grab_Handle_Tasks_Queue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Grab_Handle_Tasks_Queue).ArrayNum = 0;
  (this->Grab_Handle_Tasks_Queue).ArrayMax = 0;
  (this->Remap_Physics_States_Queue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Remap_Physics_States_Queue).ArrayNum = 0;
  (this->Remap_Physics_States_Queue).ArrayMax = 0;
  (this->Physics_States).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Physics_States).ArrayNum = 0;
  (this->Physics_States).ArrayMax = 0;
  (this->Grab_Handle_Locks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Grab_Handle_Locks).ArrayNum = 0;
  (this->Grab_Handle_Locks).ArrayMax = 0;
  (this->Autoblend_Reverse_Bools).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Autoblend_Reverse_Bools).ArrayNum = 0;
  (this->Autoblend_Reverse_Bools).ArrayMax = 0;
  this->component_grabbing_state = false;
  this->Grab_Tasks_Pending = false;
  this->Need_To_Remap_PhysicsStates = false;
  this->largest_blend_value = 0.0;
  ::FString::FString(&this->test_debug,"None");
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->relative_mesh_transform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->relative_mesh_transform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->relative_mesh_transform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->relative_mesh_transform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->relative_mesh_transform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->relative_mesh_transform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->relative_mesh_transform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->relative_mesh_transform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->relative_mesh_transform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->relative_mesh_transform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->relative_mesh_transform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->relative_mesh_transform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->active_ragdoll = false;
  this->first_time_delay = 0;
  *(undefined8 *)&this->active_ragdoll_tmap = 0;
  *(undefined8 *)&(this->active_ragdoll_tmap).field_0x8 = 0;
  *(undefined8 *)&(this->active_ragdoll_tmap).field_0x20 = 0;
  *(undefined4 *)&(this->active_ragdoll_tmap).field_0x28 = 0;
  *(undefined4 *)&(this->active_ragdoll_tmap).field_0x2c = 0x80;
  *(undefined4 *)&(this->active_ragdoll_tmap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->active_ragdoll_tmap).field_0x34 = 0;
  *(undefined8 *)&(this->active_ragdoll_tmap).field_0x40 = 0;
  *(undefined4 *)&(this->active_ragdoll_tmap).field_0x48 = 0;
  (this->custom_override_transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->custom_override_transforms).ArrayNum = 0;
  (this->custom_override_transforms).ArrayMax = 0;
  (this->custom_override_bool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->custom_override_bool).ArrayNum = 0;
  (this->custom_override_bool).ArrayMax = 0;
  return this;
}

// ~UDragonIKPhysicsComponent @ 14d2a6810

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::~UDragonIKPhysicsComponent(UDragonIKPhysicsComponent *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->custom_override_bool).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->custom_override_transforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->active_ragdoll_tmap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->active_ragdoll_tmap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->active_ragdoll_tmap);
  pFVar1 = (this->test_debug).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Autoblend_Reverse_Bools).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Grab_Handle_Locks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Physics_States).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Remap_Physics_States_Queue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Grab_Handle_Tasks_Queue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Bodies_Physics_Hit_Bools).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Extra_Bone_Delay_Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Bodies_Physics_Blend).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Physanim_Enter_Curve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Physanim_Enter_Curve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->Physanim_Enter_Curve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->Physanim_Enter_Curve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->Physanim_Enter_Curve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Physanim_Enter_Curve).EditorCurveData._padding_);
  *(undefined4 *)&(this->Parent_Child_Connection_Array).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Parent_Child_Connection_Array).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Parent_Child_Connection_Array);
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->bone_to_bone_map).AllocatorInstance.Data,(this->bone_to_bone_map).ArrayNum);
  pFVar1 = (this->bone_to_bone_map).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Last_Second_Parent_Bone_Map).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Parent_Bone_Map).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Override_Handle_Strength_Multiplier).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Influence_Stopping_Bones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->control_bone_relative_transforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->individual_bone_selection).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Raw_Animation_Transforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14d2a9420

UClass * __cdecl UDragonIKPhysicsComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDragonIKPhysicsComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DragonIKPlugin",L"DragonIKPhysicsComponent",
               &Z_Registration_Info_UClass_UDragonIKPhysicsComponent.InnerSingleton,
               StaticRegisterNativesUDragonIKPhysicsComponent,0x480,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDragonIKPhysicsComponent>,
               InternalVTableHelperCtorCaller<UDragonIKPhysicsComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDragonIKPhysicsComponent.InnerSingleton;
}

// Multicast_CacheSimulationStates @ 14d2a95a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Multicast_CacheSimulationStates(UDragonIKPhysicsComponent *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKPhysicsComponent_Multicast_CacheSimulationStates
                     );
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014d2a95cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// Multicast_Control_Bone_Handle @ 14d2a95e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Multicast_Control_Bone_Handle
          (UDragonIKPhysicsComponent *this,FName param_1,TTransform<double> *param_2,bool param_3)

{
  UFunction *pUVar1;
  undefined1 auStack_b8 [32];
  FName local_98 [2];
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  undefined1 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_88 = (param_2->Rotation).XY.m128d_f64[0];
  dStack_80 = (param_2->Rotation).XY.m128d_f64[1];
  local_78 = (param_2->Rotation).ZW.m128d_f64[0];
  dStack_70 = (param_2->Rotation).ZW.m128d_f64[1];
  local_68 = (param_2->Translation).XY.m128d_f64[0];
  dStack_60 = (param_2->Translation).XY.m128d_f64[1];
  local_58 = (param_2->Translation).ZW.m128d_f64[0];
  dStack_50 = (param_2->Translation).ZW.m128d_f64[1];
  local_48 = (param_2->Scale3D).XY.m128d_f64[0];
  dStack_40 = (param_2->Scale3D).XY.m128d_f64[1];
  local_38 = (param_2->Scale3D).ZW.m128d_f64[0];
  dStack_30 = (param_2->Scale3D).ZW.m128d_f64[1];
  local_98[0] = param_1;
  local_28 = param_3;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKPhysicsComponent_Multicast_Control_Bone_Handle);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_98);
  return;
}

// Multicast_DragonIKSimulatePhysics @ 14d2a9690

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Multicast_DragonIKSimulatePhysics
          (UDragonIKPhysicsComponent *this,USkeletalMeshComponent *param_1,FName param_2,
          bool param_3)

{
  UFunction *pUVar1;
  USkeletalMeshComponent *local_28;
  FName local_20;
  undefined1 local_18;
  
  local_28 = param_1;
  local_20 = param_2;
  local_18 = param_3;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UDragonIKPhysicsComponent_Multicast_DragonIKSimulatePhysics);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_28);
  return;
}

// Multicast_FirstTimeInitialization @ 14d2a96e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Multicast_FirstTimeInitialization
          (UDragonIKPhysicsComponent *this,USkeletalMeshComponent *param_1)

{
  UFunction *pUVar1;
  USkeletalMeshComponent *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UDragonIKPhysicsComponent_Multicast_FirstTimeInitialization);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// Multicast_Modify_Reset_Bone_Info @ 14d2a9720

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Multicast_Modify_Reset_Bone_Info
          (UDragonIKPhysicsComponent *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  UFunction *pUVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != param_1) {
    uVar1 = param_1->ArrayNum;
    _Src = (param_1->AllocatorInstance).Data;
    local_18.ArrayMax = 0;
    local_18.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar1,0,&local_18.AllocatorInstance,uVar1,&local_18.ArrayMax);
      memcpy(local_18.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 << 3);
    }
  }
  pUVar2 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UDragonIKPhysicsComponent_Multicast_Modify_Reset_Bone_Info);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// Multicast_OnHitCallback @ 14d2a97f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Multicast_OnHitCallback(UDragonIKPhysicsComponent *this,FName param_1)

{
  UFunction *pUVar1;
  FName local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKPhysicsComponent_Multicast_OnHitCallback);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// Multicast_PerformActiveRagdoll @ 14d2a9830

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Multicast_PerformActiveRagdoll
          (UDragonIKPhysicsComponent *this,float param_1)

{
  UFunction *pUVar1;
  float local_res10 [6];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKPhysicsComponent_Multicast_PerformActiveRagdoll)
  ;
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// Multicast_ReGrabAllHandles @ 14d2a9870

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Multicast_ReGrabAllHandles(UDragonIKPhysicsComponent *this,bool param_1)

{
  UFunction *pUVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKPhysicsComponent_Multicast_ReGrabAllHandles);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// Multicast_ReleaseAllHandles @ 14d2a98b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Multicast_ReleaseAllHandles(UDragonIKPhysicsComponent *this,bool param_1)

{
  UFunction *pUVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKPhysicsComponent_Multicast_ReleaseAllHandles);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// Multicast_SetInterpolation @ 14d2a98f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Multicast_SetInterpolation(UDragonIKPhysicsComponent *this,int param_1)

{
  UFunction *pUVar1;
  int local_res10 [6];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKPhysicsComponent_Multicast_SetInterpolation);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// Multicast_UpdatePhysanimData @ 14d2a9930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Multicast_UpdatePhysanimData
          (UDragonIKPhysicsComponent *this,int param_1,int param_2,int param_3,int param_4)

{
  UFunction *pUVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  local_1c = param_4;
  local_28 = param_1;
  local_24 = param_2;
  local_20 = param_3;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKPhysicsComponent_Multicast_UpdatePhysanimData);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_28);
  return;
}

// Server_CacheSimulationStates @ 14d2a99a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Server_CacheSimulationStates(UDragonIKPhysicsComponent *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKPhysicsComponent_Server_CacheSimulationStates);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014d2a99cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// Server_Control_Bone_Handle @ 14d2a99e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Server_Control_Bone_Handle
          (UDragonIKPhysicsComponent *this,FName param_1,TTransform<double> *param_2,bool param_3)

{
  UFunction *pUVar1;
  undefined1 auStack_b8 [32];
  FName local_98 [2];
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  undefined1 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_88 = (param_2->Rotation).XY.m128d_f64[0];
  dStack_80 = (param_2->Rotation).XY.m128d_f64[1];
  local_78 = (param_2->Rotation).ZW.m128d_f64[0];
  dStack_70 = (param_2->Rotation).ZW.m128d_f64[1];
  local_68 = (param_2->Translation).XY.m128d_f64[0];
  dStack_60 = (param_2->Translation).XY.m128d_f64[1];
  local_58 = (param_2->Translation).ZW.m128d_f64[0];
  dStack_50 = (param_2->Translation).ZW.m128d_f64[1];
  local_48 = (param_2->Scale3D).XY.m128d_f64[0];
  dStack_40 = (param_2->Scale3D).XY.m128d_f64[1];
  local_38 = (param_2->Scale3D).ZW.m128d_f64[0];
  dStack_30 = (param_2->Scale3D).ZW.m128d_f64[1];
  local_98[0] = param_1;
  local_28 = param_3;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKPhysicsComponent_Server_Control_Bone_Handle);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_98);
  return;
}

// Server_DragonIKSimulatePhysics @ 14d2a9a90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Server_DragonIKSimulatePhysics
          (UDragonIKPhysicsComponent *this,USkeletalMeshComponent *param_1,FName param_2,
          bool param_3)

{
  UFunction *pUVar1;
  USkeletalMeshComponent *local_28;
  FName local_20;
  undefined1 local_18;
  
  local_28 = param_1;
  local_20 = param_2;
  local_18 = param_3;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKPhysicsComponent_Server_DragonIKSimulatePhysics)
  ;
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_28);
  return;
}

// Server_FirstTimeInitialization @ 14d2a9ae0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Server_FirstTimeInitialization
          (UDragonIKPhysicsComponent *this,USkeletalMeshComponent *param_1)

{
  UFunction *pUVar1;
  USkeletalMeshComponent *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKPhysicsComponent_Server_FirstTimeInitialization)
  ;
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// Server_Modify_Reset_Bone_Info @ 14d2a9b20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Server_Modify_Reset_Bone_Info
          (UDragonIKPhysicsComponent *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  UFunction *pUVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != param_1) {
    uVar1 = param_1->ArrayNum;
    _Src = (param_1->AllocatorInstance).Data;
    local_18.ArrayMax = 0;
    local_18.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar1,0,&local_18.AllocatorInstance,uVar1,&local_18.ArrayMax);
      memcpy(local_18.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 << 3);
    }
  }
  pUVar2 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKPhysicsComponent_Server_Modify_Reset_Bone_Info);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// Server_OnHitCallback @ 14d2a9bf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Server_OnHitCallback(UDragonIKPhysicsComponent *this,FName param_1)

{
  UFunction *pUVar1;
  FName local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKPhysicsComponent_Server_OnHitCallback);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// Server_PerformActiveRagdoll @ 14d2a9c30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Server_PerformActiveRagdoll
          (UDragonIKPhysicsComponent *this,float param_1)

{
  UFunction *pUVar1;
  float local_res10 [6];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKPhysicsComponent_Server_PerformActiveRagdoll);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// Server_ReGrabAllHandles @ 14d2a9c70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Server_ReGrabAllHandles(UDragonIKPhysicsComponent *this,bool param_1)

{
  UFunction *pUVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKPhysicsComponent_Server_ReGrabAllHandles);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// Server_ReleaseAllHandles @ 14d2a9cb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Server_ReleaseAllHandles(UDragonIKPhysicsComponent *this,bool param_1)

{
  UFunction *pUVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKPhysicsComponent_Server_ReleaseAllHandles);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// Server_SetInterpolation @ 14d2a9cf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Server_SetInterpolation(UDragonIKPhysicsComponent *this,int param_1)

{
  UFunction *pUVar1;
  int local_res10 [6];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKPhysicsComponent_Server_SetInterpolation);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// Server_UpdatePhysanimData @ 14d2a9d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Server_UpdatePhysanimData
          (UDragonIKPhysicsComponent *this,int param_1,int param_2,int param_3,int param_4)

{
  UFunction *pUVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  local_1c = param_4;
  local_28 = param_1;
  local_24 = param_2;
  local_20 = param_3;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKPhysicsComponent_Server_UpdatePhysanimData);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_28);
  return;
}

// StaticRegisterNativesUDragonIKPhysicsComponent @ 14d2a9e80

void __cdecl UDragonIKPhysicsComponent::StaticRegisterNativesUDragonIKPhysicsComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x21;
  local_18.DataPtr = Z_Construct_UClass_UDragonIKPhysicsComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ValidateGeneratedRepEnums @ 14d2a9ed0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::ValidateGeneratedRepEnums
          (UDragonIKPhysicsComponent *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  int *piVar5;
  FName FVar6;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&Name_handler_holder,L"handler_holder");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&Name_individual_bone_selection,L"individual_bone_selection");
    _Init_thread_footer(&::_TSS1);
  }
  if ((param_1->ArrayNum < 3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x20);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  FVar4 = FVar6;
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  if (Name_handler_holder == FVar4) {
    if ((param_1->ArrayNum < 4) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x30);
    bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
    if (bVar3) {
      FVar6 = *(FName *)((longlong)pvVar1 + 0x20);
    }
    if (Name_individual_bone_selection == FVar6) {
      return;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsValid",
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\DragonIKPlugin\\UHT\\DragonIKPhysicsComponent.gen.cpp"
                     ,0xb77,
                     L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDragonIKPhysicsComponent"
                    );
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// execCacheSimulationStates @ 14d2aa5a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UDragonIKPhysicsComponent::execCacheSimulationStates(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  CacheSimulationStates((UDragonIKPhysicsComponent *)param_1);
  return;
}

// execControl_Bone_Handle @ 14d2aa5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UDragonIKPhysicsComponent::execControl_Bone_Handle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auStack_118 [32];
  int local_f8 [2];
  FName local_f0;
  TTransform<double> local_e8;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_58._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_38._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_f8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  local_e8.Rotation.XY.m128d_f64[0] = (double)local_88._0_8_;
  local_e8.Rotation.XY.m128d_f64[1] = (double)local_88._8_8_;
  local_e8.Rotation.ZW.m128d_f64[0] = (double)local_78._0_8_;
  local_e8.Rotation.ZW.m128d_f64[1] = (double)local_78._8_8_;
  local_e8.Translation.XY.m128d_f64[0] = (double)local_68._0_8_;
  local_e8.Translation.XY.m128d_f64[1] = (double)local_68._8_8_;
  local_e8.Translation.ZW.m128d_f64[0] = (double)local_58._0_8_;
  local_e8.Translation.ZW.m128d_f64[1] = (double)local_58._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e8.Scale3D.XY.m128d_f64[0] = (double)local_48._0_8_;
  local_e8.Scale3D.XY.m128d_f64[1] = (double)local_48._8_8_;
  local_e8.Scale3D.ZW.m128d_f64[0] = (double)local_38._0_8_;
  local_e8.Scale3D.ZW.m128d_f64[1] = (double)local_38._8_8_;
  Control_Bone_Handle((UDragonIKPhysicsComponent *)param_1,local_f0,&local_e8,local_f8[0] != 0);
  return;
}

// execFirstTimeInitialization @ 14d2aa770

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UDragonIKPhysicsComponent::execFirstTimeInitialization
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  USkeletalMeshComponent *local_res10;
  
  local_res10 = (USkeletalMeshComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FirstTimeInitialization((UDragonIKPhysicsComponent *)param_1,local_res10);
  return;
}

// execModify_Reset_Bone_Info @ 14d2aa800

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UDragonIKPhysicsComponent::execModify_Reset_Bone_Info
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  longlong lVar2;
  void *local_28;
  undefined8 local_20;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  _Src = local_28;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (longlong)(int)local_20;
  local_18.ArrayNum = (int)local_20;
  if ((int)local_20 == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_20,0,&local_18.AllocatorInstance,(int)local_20,&local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar2 << 3);
  }
  Modify_Reset_Bone_Info((UDragonIKPhysicsComponent *)param_1,&local_18);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execMulticast_CacheSimulationStates @ 14d2aa910

void __cdecl
UDragonIKPhysicsComponent::execMulticast_CacheSimulationStates
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  char cVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar1 = (**(code **)(*(longlong *)param_1 + 0x5b8))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"Multicast_CacheSimulationStates_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d2aa957. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x5c0))(param_1);
  return;
}

// execMulticast_Control_Bone_Handle @ 14d2aa970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UDragonIKPhysicsComponent::execMulticast_Control_Bone_Handle
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  bool bVar3;
  undefined1 auStack_118 [32];
  int local_f8 [2];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_f0 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_58._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_38._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_f8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  bVar3 = local_f8[0] != 0;
  local_e8 = local_88._0_8_;
  uStack_e0 = local_88._8_8_;
  local_d8 = local_78._0_8_;
  uStack_d0 = local_78._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c8 = local_68._0_8_;
  uStack_c0 = local_68._8_8_;
  local_b8 = local_58._0_8_;
  uStack_b0 = local_58._8_8_;
  local_a8 = local_48._0_4_;
  uStack_a4 = local_48._4_4_;
  uStack_a0 = local_48._8_4_;
  uStack_9c = local_48._12_4_;
  local_98 = local_38._0_4_;
  uStack_94 = local_38._4_4_;
  uStack_90 = local_38._8_4_;
  uStack_8c = local_38._12_4_;
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x538))(param_1,local_f0,&local_e8,bVar3);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Multicast_Control_Bone_Handle_Validate");
  }
  else {
    local_e8 = local_88._0_8_;
    uStack_e0 = local_88._8_8_;
    local_d8 = local_78._0_8_;
    uStack_d0 = local_78._8_8_;
    local_c8 = local_68._0_8_;
    uStack_c0 = local_68._8_8_;
    local_b8 = local_58._0_8_;
    uStack_b0 = local_58._8_8_;
    local_a8 = local_48._0_4_;
    uStack_a4 = local_48._4_4_;
    uStack_a0 = local_48._8_4_;
    uStack_9c = local_48._12_4_;
    local_98 = local_38._0_4_;
    uStack_94 = local_38._4_4_;
    uStack_90 = local_38._8_4_;
    uStack_8c = local_38._12_4_;
    (**(code **)(*(longlong *)param_1 + 0x540))(param_1,local_f0,&local_e8,bVar3);
  }
  return;
}

// execMulticast_DragonIKSimulatePhysics @ 14d2aab90

void __cdecl
UDragonIKPhysicsComponent::execMulticast_DragonIKSimulatePhysics
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  bool bVar3;
  int local_res8 [2];
  undefined8 local_res10;
  undefined8 local_res20;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x5d8))(param_1,local_res20,local_res10,bVar3);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Multicast_DragonIKSimulatePhysics_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x5e0))(param_1,local_res20,local_res10,bVar3);
  return;
}

// execMulticast_FirstTimeInitialization @ 14d2aace0

void __cdecl
UDragonIKPhysicsComponent::execMulticast_FirstTimeInitialization
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x638))(param_1,local_res8);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Multicast_FirstTimeInitialization_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x640))(param_1,local_res8);
  return;
}

// execMulticast_Modify_Reset_Bone_Info @ 14d2aada0

void __cdecl
UDragonIKPhysicsComponent::execMulticast_Modify_Reset_Bone_Info
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x518))(param_1,&local_18);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Multicast_Modify_Reset_Bone_Info_Validate");
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x520))(param_1,&local_18);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execMulticast_OnHitCallback @ 14d2aae70

void __cdecl
UDragonIKPhysicsComponent::execMulticast_OnHitCallback
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined8 local_res8;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x5f8))(param_1,local_res8);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Multicast_OnHitCallback_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x600))(param_1,local_res8);
  return;
}

// execMulticast_PerformActiveRagdoll @ 14d2aaf30

void __cdecl
UDragonIKPhysicsComponent::execMulticast_PerformActiveRagdoll
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x4f8))(param_1,local_res8[0]);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Multicast_PerformActiveRagdoll_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x500))(param_1,local_res8[0]);
  return;
}

// execMulticast_ReGrabAllHandles @ 14d2aaff0

void __cdecl
UDragonIKPhysicsComponent::execMulticast_ReGrabAllHandles
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  bool bVar3;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x618))(param_1,bVar3);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Multicast_ReGrabAllHandles_Validate");
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x620))(param_1,bVar3);
  }
  return;
}

// execMulticast_ReleaseAllHandles @ 14d2ab0c0

void __cdecl
UDragonIKPhysicsComponent::execMulticast_ReleaseAllHandles
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  bool bVar3;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x598))(param_1,bVar3);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Multicast_ReleaseAllHandles_Validate");
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x5a0))(param_1,bVar3);
  }
  return;
}

// execMulticast_SetInterpolation @ 14d2ab190

void __cdecl
UDragonIKPhysicsComponent::execMulticast_SetInterpolation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x558))(param_1,local_res8[0]);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Multicast_SetInterpolation_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x560))(param_1,local_res8[0]);
  return;
}

// execMulticast_UpdatePhysanimData @ 14d2ab250

void __cdecl
UDragonIKPhysicsComponent::execMulticast_UpdatePhysanimData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined4 local_res8 [2];
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined4 local_28 [4];
  
  local_28[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x578))
                    (param_1,local_28[0],local_res20[0],local_res10[0],local_res8[0]);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Multicast_UpdatePhysanimData_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x580))
            (param_1,local_28[0],local_res20[0],local_res10[0],local_res8[0]);
  return;
}

// execOnHitCallback @ 14d2ab3e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UDragonIKPhysicsComponent::execOnHitCallback(UObject *param_1,FFrame *param_2,void *param_3)

{
  TVector<double> *pTVar1;
  FProperty *pFVar2;
  FName *pFVar3;
  TVector<double> *pTVar4;
  TVector<double> *pTVar5;
  FHitResult *pFVar6;
  FName local_res10;
  FName local_res20;
  TVector<double> local_168;
  undefined4 uStack_150;
  undefined1 uStack_14c;
  undefined2 uStack_14b;
  undefined1 uStack_149;
  TVector<double> local_148;
  FHitResult local_128;
  
  memset(&local_128,0,0x100);
  uStack_150 = 0xffffffff;
  uStack_14b = 0;
  uStack_149 = 0;
  local_128.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_128.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_128.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_128.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_168.field0_0x0._s_0.Z = 0.0;
  uStack_14c = 0;
  local_128.HitObjectHandle.InstanceIndex = -1;
  local_128.HitObjectHandle.ResolutionStatus = Invalid;
  local_128.HitObjectHandle._29_3_ = 0;
  local_128.Time = 1.0;
  local_128.MyItem = -1;
  local_128.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  pFVar6 = &local_128;
  if ((FHitResult *)param_2->MostRecentPropertyAddress != (FHitResult *)0x0) {
    pFVar6 = (FHitResult *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  pTVar1 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar5 = &local_148;
  if (pTVar1 != (TVector<double> *)0x0) {
    pTVar5 = pTVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  pTVar1 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pTVar4 = &local_168;
  if (pTVar1 != (TVector<double> *)0x0) {
    pTVar4 = pTVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar3 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnHitCallback((UDragonIKPhysicsComponent *)param_1,pFVar6,local_res20,pTVar5,pTVar4,pFVar3);
  return;
}

// execPerformActiveRagdoll @ 14d2ab630

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UDragonIKPhysicsComponent::execPerformActiveRagdoll(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PerformActiveRagdoll((UDragonIKPhysicsComponent *)param_1,local_res10[0]);
  return;
}

// execReGrabAllHandles @ 14d2ab6c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UDragonIKPhysicsComponent::execReGrabAllHandles(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ReGrabAllHandles((UDragonIKPhysicsComponent *)param_1,local_res10[0] != 0);
  return;
}

// execReleaseAllHandles @ 14d2ab750

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UDragonIKPhysicsComponent::execReleaseAllHandles(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ReleaseAllHandles((UDragonIKPhysicsComponent *)param_1,local_res10[0] != 0);
  return;
}

// execServer_CacheSimulationStates @ 14d2ab7e0

void __cdecl
UDragonIKPhysicsComponent::execServer_CacheSimulationStates
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  char cVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar1 = (**(code **)(*(longlong *)param_1 + 0x5c8))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"Server_CacheSimulationStates_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d2ab827. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x5d0))(param_1);
  return;
}

// execServer_Control_Bone_Handle @ 14d2ab840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UDragonIKPhysicsComponent::execServer_Control_Bone_Handle
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  bool bVar3;
  undefined1 auStack_118 [32];
  int local_f8 [2];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_f0 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_58._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_38._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_f8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  bVar3 = local_f8[0] != 0;
  local_e8 = local_88._0_8_;
  uStack_e0 = local_88._8_8_;
  local_d8 = local_78._0_8_;
  uStack_d0 = local_78._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c8 = local_68._0_8_;
  uStack_c0 = local_68._8_8_;
  local_b8 = local_58._0_8_;
  uStack_b0 = local_58._8_8_;
  local_a8 = local_48._0_4_;
  uStack_a4 = local_48._4_4_;
  uStack_a0 = local_48._8_4_;
  uStack_9c = local_48._12_4_;
  local_98 = local_38._0_4_;
  uStack_94 = local_38._4_4_;
  uStack_90 = local_38._8_4_;
  uStack_8c = local_38._12_4_;
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x548))(param_1,local_f0,&local_e8,bVar3);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Server_Control_Bone_Handle_Validate");
  }
  else {
    local_e8 = local_88._0_8_;
    uStack_e0 = local_88._8_8_;
    local_d8 = local_78._0_8_;
    uStack_d0 = local_78._8_8_;
    local_c8 = local_68._0_8_;
    uStack_c0 = local_68._8_8_;
    local_b8 = local_58._0_8_;
    uStack_b0 = local_58._8_8_;
    local_a8 = local_48._0_4_;
    uStack_a4 = local_48._4_4_;
    uStack_a0 = local_48._8_4_;
    uStack_9c = local_48._12_4_;
    local_98 = local_38._0_4_;
    uStack_94 = local_38._4_4_;
    uStack_90 = local_38._8_4_;
    uStack_8c = local_38._12_4_;
    (**(code **)(*(longlong *)param_1 + 0x550))(param_1,local_f0,&local_e8,bVar3);
  }
  return;
}

// execServer_DragonIKSimulatePhysics @ 14d2aba60

void __cdecl
UDragonIKPhysicsComponent::execServer_DragonIKSimulatePhysics
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  bool bVar3;
  int local_res8 [2];
  undefined8 local_res10;
  undefined8 local_res20;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x5e8))(param_1,local_res20,local_res10,bVar3);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Server_DragonIKSimulatePhysics_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x5f0))(param_1,local_res20,local_res10,bVar3);
  return;
}

// execServer_FirstTimeInitialization @ 14d2abbb0

void __cdecl
UDragonIKPhysicsComponent::execServer_FirstTimeInitialization
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x648))(param_1,local_res8);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Server_FirstTimeInitialization_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x650))(param_1,local_res8);
  return;
}

// execServer_Modify_Reset_Bone_Info @ 14d2abc70

void __cdecl
UDragonIKPhysicsComponent::execServer_Modify_Reset_Bone_Info
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x528))(param_1,&local_18);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Server_Modify_Reset_Bone_Info_Validate");
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x530))(param_1,&local_18);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execServer_OnHitCallback @ 14d2abd40

void __cdecl
UDragonIKPhysicsComponent::execServer_OnHitCallback(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined8 local_res8;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x608))(param_1,local_res8);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Server_OnHitCallback_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x610))(param_1,local_res8);
  return;
}

// execServer_PerformActiveRagdoll @ 14d2abe00

void __cdecl
UDragonIKPhysicsComponent::execServer_PerformActiveRagdoll
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x508))(param_1,local_res8[0]);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Server_PerformActiveRagdoll_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x510))(param_1,local_res8[0]);
  return;
}

// execServer_ReGrabAllHandles @ 14d2abec0

void __cdecl
UDragonIKPhysicsComponent::execServer_ReGrabAllHandles
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  bool bVar3;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x628))(param_1,bVar3);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Server_ReGrabAllHandles_Validate");
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x630))(param_1,bVar3);
  }
  return;
}

// execServer_ReleaseAllHandles @ 14d2abf90

void __cdecl
UDragonIKPhysicsComponent::execServer_ReleaseAllHandles
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  bool bVar3;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x5a8))(param_1,bVar3);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Server_ReleaseAllHandles_Validate");
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x5b0))(param_1,bVar3);
  }
  return;
}

// execServer_SetInterpolation @ 14d2ac060

void __cdecl
UDragonIKPhysicsComponent::execServer_SetInterpolation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x568))(param_1,local_res8[0]);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Server_SetInterpolation_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x570))(param_1,local_res8[0]);
  return;
}

// execServer_UpdatePhysanimData @ 14d2ac120

void __cdecl
UDragonIKPhysicsComponent::execServer_UpdatePhysanimData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined4 local_res8 [2];
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined4 local_28 [4];
  
  local_28[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x588))
                    (param_1,local_28[0],local_res20[0],local_res10[0],local_res8[0]);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Server_UpdatePhysanimData_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x590))
            (param_1,local_28[0],local_res20[0],local_res10[0],local_res8[0]);
  return;
}

// execSetInterpolation @ 14d2ac2b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UDragonIKPhysicsComponent::execSetInterpolation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetInterpolation((UDragonIKPhysicsComponent *)param_1,local_res10[0]);
  return;
}

// execUpdatePhysanimData @ 14d2ac340

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UDragonIKPhysicsComponent::execUpdatePhysanimData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  int local_res20 [2];
  int local_18;
  int local_14 [3];
  
  local_14[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_14,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_14);
  }
  local_18 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UpdatePhysanimData((UDragonIKPhysicsComponent *)param_1,local_14[0],local_18,local_res20[0],
                     local_res10[0]);
  return;
}

// execUpdateSpecificPhysanimData @ 14d2ac4a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UDragonIKPhysicsComponent::execUpdateSpecificPhysanimData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  int local_res20 [2];
  int local_18;
  int local_14;
  FName local_10;
  
  local_10.ComparisonIndex.Value = 0;
  local_10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_10);
  }
  local_14 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_14,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_14);
  }
  local_18 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UpdateSpecificPhysanimData
            ((UDragonIKPhysicsComponent *)param_1,local_10,local_14,local_18,local_res20[0],
             local_res10[0]);
  return;
}

// UDragonIKPhysicsComponent @ 14d32e0f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDragonIKPhysicsComponent * __thiscall
UDragonIKPhysicsComponent::UDragonIKPhysicsComponent(UDragonIKPhysicsComponent *this)

{
  byte *pbVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  FName *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  FObjectInitializer *pFVar10;
  UDragonIKPhysicsComponent *pUVar11;
  FRichCurve *this_00;
  undefined1 in_R9B;
  float fVar12;
  FKeyHandle local_res8 [4];
  FKeyHandle local_res18 [4];
  uint in_stack_ffffffffffffff48;
  FKeyHandle FVar13;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FKeyHandle local_50 [4];
  
  pFVar10 = FObjectInitializer::Get();
  UActorComponent::UActorComponent((UActorComponent *)this,pFVar10);
  this->physanim_tag_index = 1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->Raw_Animation_Transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->Raw_Animation_Transforms).ArrayNum = 0;
  (this->Raw_Animation_Transforms).ArrayMax = 0;
  ::FName::FName(&this->Custom_Root_Bone,"pelvis");
  pTVar2 = &this->individual_bone_selection;
  (this->control_bone_relative_transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->individual_bone_selection).ArrayNum = 0;
  (this->individual_bone_selection).ArrayMax = 0;
  (this->control_bone_relative_transforms).ArrayNum = 0;
  (this->control_bone_relative_transforms).ArrayMax = 0;
  ::FName::FName(&this->Root_Clamping_Bone,"None");
  (this->Override_Handle_Strength_Multiplier).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  pTVar3 = &this->Influence_Stopping_Bones;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Influence_Stopping_Bones).ArrayNum = 0;
  (this->Influence_Stopping_Bones).ArrayMax = 0;
  (this->Override_Handle_Strength_Multiplier).ArrayNum = 0;
  (this->Override_Handle_Strength_Multiplier).ArrayMax = 0;
  (this->Parent_Bone_Map).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parent_Bone_Map).ArrayNum = 0;
  (this->Parent_Bone_Map).ArrayMax = 0;
  (this->Last_Second_Parent_Bone_Map).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Last_Second_Parent_Bone_Map).ArrayNum = 0;
  (this->Last_Second_Parent_Bone_Map).ArrayMax = 0;
  (this->bone_to_bone_map).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->bone_to_bone_map).ArrayNum = 0;
  (this->bone_to_bone_map).ArrayMax = 0;
  this->saved_mass_kg = 10.0;
  this->slight_delay_counter = 0.0;
  this->Linear_Strength = 1000;
  this->Angular_Strength = 1000;
  this->Linear_Damp = 5;
  this->Angular_Damp = 5;
  this->Interpolation_Speed = 10;
  this->Teleport_Distance = 500.0;
  this->teleport_freeze_count = 0;
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar12 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Body_Delta_Transform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Body_Delta_Transform).Rotation.XY.m128d_f64[1] = (double)fVar6;
  (this->Body_Delta_Transform).Rotation.ZW.m128d_f64[0] = (double)fVar12;
  (this->Body_Delta_Transform).Rotation.ZW.m128d_f64[1] = (double)fVar7;
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Body_Delta_Transform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Body_Delta_Transform).Translation.XY.m128d_f64[1] = (double)fVar6;
  (this->Body_Delta_Transform).Translation.ZW.m128d_f64[0] = (double)fVar12;
  (this->Body_Delta_Transform).Translation.ZW.m128d_f64[1] = (double)fVar7;
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Body_Delta_Transform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Body_Delta_Transform).Scale3D.XY.m128d_f64[1] = (double)fVar6;
  (this->Body_Delta_Transform).Scale3D.ZW.m128d_f64[0] = (double)fVar12;
  (this->Body_Delta_Transform).Scale3D.ZW.m128d_f64[1] = (double)fVar7;
  *(undefined8 *)&this->Parent_Child_Connection_Array = 0;
  *(undefined8 *)&(this->Parent_Child_Connection_Array).field_0x8 = 0;
  *(undefined8 *)&(this->Parent_Child_Connection_Array).field_0x20 = 0;
  this->parent_child_ragdoll_state = false;
  *(undefined4 *)&(this->Parent_Child_Connection_Array).field_0x28 = 0;
  *(undefined4 *)&(this->Parent_Child_Connection_Array).field_0x2c = 0x80;
  *(undefined4 *)&(this->Parent_Child_Connection_Array).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Parent_Child_Connection_Array).field_0x34 = 0;
  *(undefined8 *)&(this->Parent_Child_Connection_Array).field_0x40 = 0;
  *(undefined4 *)&(this->Parent_Child_Connection_Array).field_0x48 = 0;
  this->use_auto_blending_logic = true;
  this->Autoblendalpha = 1.0;
  this->is_released = false;
  this->modify_physics_states = false;
  this->Hit_Enable_Speed = 5.0;
  this->Hit_Disable_Speed = 5.0;
  this->hit_delay_time = 1.0;
  this->temporary_disable_speed = 5.0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->Physanim_Enter_Curve);
  this->blend_to_zero = false;
  this->blend_min_value = 0.0;
  this->get_up_timer = 0.0;
  this->ragdoll_mode = false;
  this->ragdoll_lock = false;
  this->tick_counter = 0;
  (this->Bodies_Physics_Blend).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bodies_Physics_Blend).ArrayNum = 0;
  (this->Bodies_Physics_Blend).ArrayMax = 0;
  (this->Extra_Bone_Delay_Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Extra_Bone_Delay_Array).ArrayNum = 0;
  (this->Extra_Bone_Delay_Array).ArrayMax = 0;
  (this->Bodies_Physics_Hit_Bools).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bodies_Physics_Hit_Bools).ArrayNum = 0;
  (this->Bodies_Physics_Hit_Bools).ArrayMax = 0;
  (this->Grab_Handle_Tasks_Queue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Grab_Handle_Tasks_Queue).ArrayNum = 0;
  (this->Grab_Handle_Tasks_Queue).ArrayMax = 0;
  (this->Remap_Physics_States_Queue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Remap_Physics_States_Queue).ArrayNum = 0;
  (this->Remap_Physics_States_Queue).ArrayMax = 0;
  (this->Physics_States).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Physics_States).ArrayNum = 0;
  (this->Physics_States).ArrayMax = 0;
  (this->Grab_Handle_Locks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Grab_Handle_Locks).ArrayNum = 0;
  (this->Grab_Handle_Locks).ArrayMax = 0;
  (this->Autoblend_Reverse_Bools).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Autoblend_Reverse_Bools).ArrayNum = 0;
  (this->Autoblend_Reverse_Bools).ArrayMax = 0;
  this->component_grabbing_state = false;
  this->Grab_Tasks_Pending = false;
  this->Need_To_Remap_PhysicsStates = false;
  this->largest_blend_value = 0.0;
  ::FString::FString(&this->test_debug,"None");
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar12 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->relative_mesh_transform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->relative_mesh_transform).Rotation.XY.m128d_f64[1] = (double)fVar6;
  (this->relative_mesh_transform).Rotation.ZW.m128d_f64[0] = (double)fVar12;
  (this->relative_mesh_transform).Rotation.ZW.m128d_f64[1] = (double)fVar7;
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->relative_mesh_transform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->relative_mesh_transform).Translation.XY.m128d_f64[1] = (double)fVar6;
  (this->relative_mesh_transform).Translation.ZW.m128d_f64[0] = (double)fVar12;
  (this->relative_mesh_transform).Translation.ZW.m128d_f64[1] = (double)fVar7;
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->relative_mesh_transform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->relative_mesh_transform).Scale3D.XY.m128d_f64[1] = (double)fVar6;
  (this->relative_mesh_transform).Scale3D.ZW.m128d_f64[0] = (double)fVar12;
  (this->relative_mesh_transform).Scale3D.ZW.m128d_f64[1] = (double)fVar7;
  *(undefined8 *)&this->active_ragdoll_tmap = 0;
  *(undefined8 *)&(this->active_ragdoll_tmap).field_0x8 = 0;
  *(undefined8 *)&(this->active_ragdoll_tmap).field_0x20 = 0;
  this->active_ragdoll = false;
  this->first_time_delay = 0;
  *(undefined4 *)&(this->active_ragdoll_tmap).field_0x28 = 0;
  *(undefined4 *)&(this->active_ragdoll_tmap).field_0x2c = 0x80;
  *(undefined4 *)&(this->active_ragdoll_tmap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->active_ragdoll_tmap).field_0x34 = 0;
  *(undefined8 *)&(this->active_ragdoll_tmap).field_0x40 = 0;
  *(undefined4 *)&(this->active_ragdoll_tmap).field_0x48 = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  (this->custom_override_transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->custom_override_transforms).ArrayNum = 0;
  (this->custom_override_transforms).ArrayMax = 0;
  (this->custom_override_bool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->custom_override_bool).ArrayNum = 0;
  (this->custom_override_bool).ArrayMax = 0;
  UActorComponent::SetIsReplicatedByDefault((UActorComponent *)this,true);
  if ((this->individual_bone_selection).ArrayNum == 0) {
    ::FName::FName(&local_88,"pelvis");
    pFVar4 = (FName *)(pTVar2->AllocatorInstance).Data;
    if ((pFVar4 <= &local_88) && (&local_88 < pFVar4 + (this->individual_bone_selection).ArrayMax))
    {
      in_R9B = 0xc0;
      in_stack_ffffffffffffff48 = (uint)&local_88;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pUVar11 = (UDragonIKPhysicsComponent *)(*pcVar5)();
        return pUVar11;
      }
    }
    iVar9 = (this->individual_bone_selection).ArrayNum;
    if (iVar9 == (this->individual_bone_selection).ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar2->AllocatorInstance,
                         &(this->individual_bone_selection).ArrayMax);
    }
    (this->individual_bone_selection).ArrayNum = iVar9 + 1;
    *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_88;
    ::FName::FName(&local_80,"upperarm_r");
    pFVar4 = (FName *)(pTVar2->AllocatorInstance).Data;
    if ((pFVar4 <= &local_80) && (&local_80 < pFVar4 + (this->individual_bone_selection).ArrayMax))
    {
      in_R9B = 0xc0;
      in_stack_ffffffffffffff48 = (uint)&local_80;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pUVar11 = (UDragonIKPhysicsComponent *)(*pcVar5)();
        return pUVar11;
      }
    }
    iVar9 = (this->individual_bone_selection).ArrayNum;
    if (iVar9 == (this->individual_bone_selection).ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar2->AllocatorInstance,
                         &(this->individual_bone_selection).ArrayMax);
    }
    (this->individual_bone_selection).ArrayNum = iVar9 + 1;
    *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_80;
    ::FName::FName(&local_78,"upperarm_l");
    pFVar4 = (FName *)(pTVar2->AllocatorInstance).Data;
    if ((pFVar4 <= &local_78) && (&local_78 < pFVar4 + (this->individual_bone_selection).ArrayMax))
    {
      in_R9B = 0xc0;
      in_stack_ffffffffffffff48 = (uint)&local_78;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pUVar11 = (UDragonIKPhysicsComponent *)(*pcVar5)();
        return pUVar11;
      }
    }
    iVar9 = (this->individual_bone_selection).ArrayNum;
    if (iVar9 == (this->individual_bone_selection).ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar2->AllocatorInstance,
                         &(this->individual_bone_selection).ArrayMax);
    }
    (this->individual_bone_selection).ArrayNum = iVar9 + 1;
    *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_78;
    ::FName::FName(&local_70,"hand_l");
    pFVar4 = (FName *)(pTVar2->AllocatorInstance).Data;
    if ((pFVar4 <= &local_70) && (&local_70 < pFVar4 + (this->individual_bone_selection).ArrayMax))
    {
      in_R9B = 0xc0;
      in_stack_ffffffffffffff48 = (uint)&local_70;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pUVar11 = (UDragonIKPhysicsComponent *)(*pcVar5)();
        return pUVar11;
      }
    }
    iVar9 = (this->individual_bone_selection).ArrayNum;
    if (iVar9 == (this->individual_bone_selection).ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar2->AllocatorInstance,
                         &(this->individual_bone_selection).ArrayMax);
    }
    (this->individual_bone_selection).ArrayNum = iVar9 + 1;
    *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_70;
    ::FName::FName(&local_68,"hand_r");
    pFVar4 = (FName *)(pTVar2->AllocatorInstance).Data;
    if ((pFVar4 <= &local_68) && (&local_68 < pFVar4 + (this->individual_bone_selection).ArrayMax))
    {
      in_R9B = 0xc0;
      in_stack_ffffffffffffff48 = (uint)&local_68;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pUVar11 = (UDragonIKPhysicsComponent *)(*pcVar5)();
        return pUVar11;
      }
    }
    iVar9 = (this->individual_bone_selection).ArrayNum;
    if (iVar9 == (this->individual_bone_selection).ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar2->AllocatorInstance,
                         &(this->individual_bone_selection).ArrayMax);
    }
    (this->individual_bone_selection).ArrayNum = iVar9 + 1;
    *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_68;
    ::FName::FName(&local_60,"head");
    pFVar4 = (FName *)(pTVar2->AllocatorInstance).Data;
    if ((pFVar4 <= &local_60) && (&local_60 < pFVar4 + (this->individual_bone_selection).ArrayMax))
    {
      in_R9B = 0xc0;
      in_stack_ffffffffffffff48 = (uint)&local_60;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pUVar11 = (UDragonIKPhysicsComponent *)(*pcVar5)();
        return pUVar11;
      }
    }
    iVar9 = (this->individual_bone_selection).ArrayNum;
    if (iVar9 == (this->individual_bone_selection).ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar2->AllocatorInstance,
                         &(this->individual_bone_selection).ArrayMax);
    }
    (this->individual_bone_selection).ArrayNum = iVar9 + 1;
    *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_60;
  }
  if ((this->Influence_Stopping_Bones).ArrayNum == 0) {
    ::FName::FName(&local_58,"pelvis");
    pFVar4 = (FName *)(pTVar3->AllocatorInstance).Data;
    if ((pFVar4 <= &local_58) && (&local_58 < pFVar4 + (this->Influence_Stopping_Bones).ArrayMax)) {
      in_R9B = 0xc0;
      in_stack_ffffffffffffff48 = (uint)&local_58;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pUVar11 = (UDragonIKPhysicsComponent *)(*pcVar5)();
        return pUVar11;
      }
    }
    iVar9 = (this->Influence_Stopping_Bones).ArrayNum;
    if (iVar9 == (this->Influence_Stopping_Bones).ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar3->AllocatorInstance,&(this->Influence_Stopping_Bones).ArrayMax
                        );
    }
    (this->Influence_Stopping_Bones).ArrayNum = iVar9 + 1;
    *(FName *)((pTVar3->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_58;
  }
  this_00 = FRuntimeFloatCurve::GetRichCurve(&this->Physanim_Enter_Curve);
  FKeyHandle::FKeyHandle(local_res8);
  FVar13.Index = in_stack_ffffffffffffff48 & 0xffffff00;
  FRichCurve::AddKey(this_00,fVar12,0.0,(bool)in_R9B,FVar13);
  FKeyHandle::FKeyHandle(local_res18);
  FVar13.Index = FVar13.Index & 0xffffff00;
  FRichCurve::AddKey(this_00,fVar12,__real_3f000000,(bool)in_R9B,FVar13);
  FKeyHandle::FKeyHandle(local_50);
  FRichCurve::AddKey(this_00,fVar12,__real_3fc00000,(bool)in_R9B,
                     (FKeyHandle)(FVar13.Index & 0xffffff00));
  return this;
}

// operator() @ 14d32f040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`UDragonIKPhysicsComponent::UpdateBodyBlends'::__l8::<lambda_1>::operator()
          (void *this,FBodyInstance *param_1)

{
  short sVar1;
  longlong lVar2;
  UPhysicsHandleComponent *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FName FVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188 [8];
  TRotator<double> local_180;
  double local_168;
  double dStack_160;
  double local_158;
  TRotator<double> local_148;
  TVector<double>_u_0 local_128;
  TQuat<double> local_108;
  double local_d8;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  sVar1 = param_1->InstanceBoneIndex;
  lVar8 = (longlong)sVar1;
  lVar2 = *(longlong *)this;
  uVar9 = (uint)~(int)sVar1 >> 0x1f;
  uVar5 = 0;
  if ((int)sVar1 < *(int *)(lVar2 + 0x310)) {
    uVar5 = uVar9;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_1->PhysicsBlendWeight =
       *(float *)(*(longlong *)(lVar2 + 0x308) + lVar8 * 4) * *(float *)(*(longlong *)this + 0x24c);
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)sVar1 < *(int *)(lVar2 + 0x380)) {
    uVar5 = uVar9;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(char *)(lVar8 + *(longlong *)(lVar2 + 0x378)) != '\0') {
    lVar2 = *(longlong *)this;
    uVar5 = 0;
    if ((int)sVar1 < *(int *)(lVar2 + 0x310)) {
      uVar5 = uVar9;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(float *)(*(longlong *)this + 0x2f4) ==
        *(float *)(*(longlong *)(lVar2 + 0x308) + lVar8 * 4)) {
      FBodyInstance::SetInstanceSimulatePhysics(param_1,false,false,false);
    }
  }
  lVar2 = *(longlong *)this;
  iVar7 = (int)sVar1;
  uVar5 = 0;
  if ((int)sVar1 < *(int *)(lVar2 + 0x340)) {
    uVar5 = uVar9;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(char *)(lVar8 + *(longlong *)(lVar2 + 0x338)) == '\x01') {
    lVar2 = *(longlong *)this;
    uVar5 = 0;
    if (iVar7 < *(int *)(lVar2 + 0x370)) {
      uVar5 = uVar9;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((*(char *)(lVar8 + *(longlong *)(lVar2 + 0x368)) == '\0') &&
       (param_1->PhysicsBlendWeight == 0.0)) {
      USkinnedMeshComponent::GetBoneTransform
                (*(USkinnedMeshComponent **)(*(longlong *)this + 0xd0),&local_c8,iVar7);
      lVar2 = *(longlong *)(*(longlong *)this + 0xd8);
      uVar5 = 0;
      if (iVar7 < *(int *)(lVar2 + 0x2c8)) {
        uVar5 = uVar9;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_108.X = local_c8.Rotation.XY.m128d_f64[0];
      local_108.Y = local_c8.Rotation.XY.m128d_f64[1];
      this_00 = *(UPhysicsHandleComponent **)(*(longlong *)(lVar2 + 0x2c0) + lVar8 * 8);
      local_108.Z = local_c8.Rotation.ZW.m128d_f64[0];
      local_108.W = local_c8.Rotation.ZW.m128d_f64[1];
      UE::Math::TQuat<double>::Rotator(&local_108,&local_180);
      local_158 = local_c8.Translation.ZW.m128d_f64[0];
      local_168 = local_c8.Translation.XY.m128d_f64[0];
      dStack_160 = local_c8.Translation.XY.m128d_f64[1];
      local_d8 = local_c8.Translation.ZW.m128d_f64[0];
      FVar6 = USkinnedMeshComponent::GetBoneName
                        (*(USkinnedMeshComponent **)(*(longlong *)this + 0xd0),(int)local_188);
      local_148.Pitch = local_180.Pitch;
      local_148.Yaw = local_180.Yaw;
      local_148.Roll = local_180.Roll;
      local_128._s_0.X = local_c8.Translation.XY.m128d_f64[0];
      local_128._s_0.Y = local_c8.Translation.XY.m128d_f64[1];
      local_128._s_0.Z = local_d8;
      UPhysicsHandleComponent::GrabComponentAtLocationWithRotation
                (this_00,*(UPrimitiveComponent **)(*(longlong *)this + 0xd0),*(FName *)FVar6,
                 (TVector<double> *)&local_128._s_0,&local_148);
      lVar2 = *(longlong *)this;
      uVar5 = 0;
      if (iVar7 < *(int *)(lVar2 + 0x370)) {
        uVar5 = uVar9;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(undefined1 *)(lVar8 + *(longlong *)(lVar2 + 0x368)) = 1;
      lVar2 = *(longlong *)this;
      uVar5 = 0;
      if ((int)sVar1 < *(int *)(lVar2 + 0x340)) {
        uVar5 = uVar9;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(undefined1 *)(lVar8 + *(longlong *)(lVar2 + 0x338)) = 0;
      *(undefined1 *)(*(longlong *)this + 0x389) = 1;
    }
  }
  return;
}

// operator() @ 14d32f4d0

void __thiscall
`UDragonIKPhysicsComponent::ModifyAllHandleTransforms'::__l47::<lambda_1>::operator()
          (void *this,FBodyInstance *param_1)

{
  short sVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  lVar2 = *(longlong *)this;
  sVar1 = param_1->InstanceBoneIndex;
  uVar5 = 0;
  if ((int)sVar1 < *(int *)(lVar2 + 200)) {
    uVar5 = (uint)~(int)sVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FBodyInstance::SetBodyTransform
            (param_1,(TTransform<double> *)((longlong)sVar1 * 0x60 + *(longlong *)(lVar2 + 0xc0)),
             TeleportPhysics,true);
  return;
}

// operator() @ 14d32f570

void __thiscall
`UDragonIKPhysicsComponent::UpdateBodyBlends'::__l52::<lambda_2>::operator()
          (void *this,FBodyInstance *param_1)

{
  short sVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(longlong *)this;
  sVar1 = param_1->InstanceBoneIndex;
  if (((*(char *)(lVar2 + 0x389) == '\0') && (*(char *)(lVar2 + 0x38a) == '\x01')) &&
     (param_1->PhysicsBlendWeight == 0.0)) {
    uVar6 = (uint)~(int)sVar1 >> 0x1f;
    uVar5 = 0;
    if ((int)sVar1 < *(int *)(lVar2 + 0x350)) {
      uVar5 = uVar6;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FBodyInstance::SetInstanceSimulatePhysics
              (param_1,*(bool *)(*(longlong *)(lVar2 + 0x348) + (longlong)sVar1),false,false);
    lVar2 = *(longlong *)this;
    uVar5 = 0;
    if ((int)sVar1 < *(int *)(lVar2 + 0x350)) {
      uVar5 = uVar6;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined1 *)((longlong)sVar1 + *(longlong *)(lVar2 + 0x348)) = 0;
  }
  return;
}

// operator() @ 14d32f6a0

void __thiscall
`UDragonIKPhysicsComponent::UpdateBodyBlends'::__l57::<lambda_3>::operator()
          (void *this,FBodyInstance *param_1)

{
  short sVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  sVar1 = param_1->InstanceBoneIndex;
  lVar6 = (longlong)sVar1;
  lVar2 = *(longlong *)this;
  uVar7 = (uint)~(int)sVar1 >> 0x1f;
  uVar5 = 0;
  if ((int)sVar1 < *(int *)(lVar2 + 0x330)) {
    uVar5 = uVar7;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(char *)(lVar6 + *(longlong *)(lVar2 + 0x328)) == '\x01') {
    lVar2 = *(longlong *)this;
    uVar5 = 0;
    if ((int)sVar1 < *(int *)(lVar2 + 0x360)) {
      uVar5 = uVar7;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)(lVar6 + *(longlong *)(lVar2 + 0x358)) == '\x01') {
      if ((param_1->_padding_ & 1) != 0) {
        return;
      }
      lVar2 = *(longlong *)this;
      uVar5 = 0;
      if ((int)sVar1 < *(int *)(lVar2 + 0x310)) {
        uVar5 = uVar7;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(float *)(*(longlong *)(lVar2 + 0x308) + lVar6 * 4) <=
          *(float *)(*(longlong *)this + 0x2f4)) {
        return;
      }
      bVar4 = true;
      goto LAB_14d32f84d;
    }
  }
  if ((param_1->_padding_ & 1) == 0) {
    return;
  }
  lVar2 = *(longlong *)this;
  uVar5 = 0;
  if ((int)sVar1 < *(int *)(lVar2 + 0x310)) {
    uVar5 = uVar7;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(float *)(*(longlong *)this + 0x2f4) != *(float *)(*(longlong *)(lVar2 + 0x308) + lVar6 * 4))
  {
    return;
  }
  bVar4 = false;
LAB_14d32f84d:
  FBodyInstance::SetInstanceSimulatePhysics(param_1,bVar4,false,false);
  return;
}

// operator() @ 14d32f880

void __thiscall
`UDragonIKPhysicsComponent::UpdateBodyBlends'::__l59::<lambda_4>::operator()
          (void *this,FBodyInstance *param_1)

{
  short sVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  lVar2 = *(longlong *)this;
  sVar1 = param_1->InstanceBoneIndex;
  uVar5 = 0;
  if ((int)sVar1 < *(int *)(lVar2 + 0x360)) {
    uVar5 = (uint)~(int)sVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((*(char *)((longlong)sVar1 + *(longlong *)(lVar2 + 0x358)) == '\x01') &&
     ((param_1->_padding_ & 1) == 0)) {
    FBodyInstance::SetInstanceSimulatePhysics(param_1,true,false,true);
  }
  return;
}

// operator() @ 14d32f920

void __thiscall
`UDragonIKPhysicsComponent::UpdateBodyBlends'::__l67::<lambda_5>::operator()
          (void *this,FBodyInstance *param_1)

{
  short sVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  sVar1 = param_1->InstanceBoneIndex;
  lVar2 = *(longlong *)this;
  uVar6 = (uint)~(int)sVar1 >> 0x1f;
  uVar5 = 0;
  if ((int)sVar1 < *(int *)(lVar2 + 0x360)) {
    uVar5 = uVar6;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(char *)((longlong)sVar1 + *(longlong *)(lVar2 + 0x358)) == '\0') {
    lVar2 = *(longlong *)this;
    uVar5 = 0;
    if ((int)sVar1 < *(int *)(lVar2 + 0x310)) {
      uVar5 = uVar6;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(float *)(*(longlong *)(lVar2 + 0x308) + (longlong)sVar1 * 4) <=
        *(float *)(*(longlong *)this + 0x2f4)) {
      FBodyInstance::SetInstanceSimulatePhysics(param_1,false,false,false);
    }
  }
  return;
}

// BeginPlay @ 14d3362f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDragonIKPhysicsComponent::BeginPlay(UDragonIKPhysicsComponent *this)

{
  byte *pbVar1;
  uint uVar2;
  AActor *this_00;
  code *pcVar3;
  bool bVar4;
  UWorld *pUVar5;
  UFunction *pUVar6;
  
  bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
  if (!bVar4) {
    if (this == (UDragonIKPhysicsComponent *)0x0) goto LAB_14780c6b0;
    this_00 = (AActor *)this->_padding_;
    bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)this_00);
    if ((!bVar4) || (this_00 == (AActor *)0x0)) goto LAB_14780c6b0;
    pUVar5 = AActor::GetWorld(this_00);
    bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar5);
    if (!bVar4) goto LAB_14780c6b0;
  }
  FObjectTrace::OutputObjectLifetimeBegin((UObject *)this);
LAB_14780c6b0:
  if ((this->_padding_ & 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bRegistered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x64d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->_padding_ & 0x20000000) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bHasBegunPlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x64e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar2 = *(uint *)(this->_padding_ + 0xd4);
  if (((uVar2 >> 0x12 & 1) != 0) || (-1 < (char)uVar2)) {
    pUVar6 = UObject::FindFunctionChecked((UObject *)this,NAME_UActorComponent_ReceiveBeginPlay);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar6,0);
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 0x20;
  return;
}

// BoneIsChildOf @ 14d3365a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDragonIKPhysicsComponent::BoneIsChildOf
          (UDragonIKPhysicsComponent *this,FName param_1,FName param_2)

{
  int iVar1;
  int iVar2;
  FName local_res8;
  
  iVar1 = USkinnedMeshComponent::GetBoneIndex
                    ((USkinnedMeshComponent *)this->owning_skeleton,param_1);
  iVar2 = USkinnedMeshComponent::GetBoneIndex
                    ((USkinnedMeshComponent *)this->owning_skeleton,param_2);
  if ((iVar2 != -1) && (iVar2 < iVar1)) {
    iVar2 = 0;
    iVar1 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)this->owning_skeleton);
    if (0 < iVar1) {
      do {
        USkinnedMeshComponent::GetParentBone
                  ((USkinnedMeshComponent *)this->owning_skeleton,(FName)&local_res8);
        if (local_res8 == param_2) {
          return true;
        }
        iVar2 = iVar2 + 1;
        iVar1 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)this->owning_skeleton);
      } while (iVar2 < iVar1);
    }
  }
  return false;
}

// CacheSimulationStates @ 14d336660

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDragonIKPhysicsComponent::CacheSimulationStates(UDragonIKPhysicsComponent *this)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 local_res8;
  
  uVar6 = 0;
  if (0 < (this->Bodies_Physics_Hit_Bools).ArrayNum) {
    lVar7 = 0;
    do {
      USkinnedMeshComponent::GetBoneName
                ((USkinnedMeshComponent *)this->owning_skeleton,(int)&local_res8);
      cVar3 = (**(code **)(this->owning_skeleton->_padding_ + 0x4f8))
                        (this->owning_skeleton,local_res8);
      iVar1 = (this->Physics_States).ArrayNum;
      if (cVar3 == '\0') {
        uVar5 = 0;
        if ((int)uVar6 < iVar1) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (this->Physics_States).AllocatorInstance.Data[lVar7] = (FScriptContainerElement)0x0;
      }
      else {
        uVar5 = 0;
        if ((int)uVar6 < iVar1) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (this->Physics_States).AllocatorInstance.Data[lVar7] = (FScriptContainerElement)0x1;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 1;
    } while ((int)uVar6 < (this->Bodies_Physics_Hit_Bools).ArrayNum);
  }
  return;
}

// CalculateParentInfluenceBones @ 14d336790

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::CalculateParentInfluenceBones(UDragonIKPhysicsComponent *this)

{
  FName *pFVar1;
  FName *pFVar2;
  USkeletalMeshComponent *pUVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FName FVar11;
  FName FVar12;
  FName *pFVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  USkeletalMeshComponent **ppUVar18;
  USkeletalMeshComponent **ppUVar19;
  uint uVar20;
  longlong local_res10;
  longlong local_res18;
  FName local_res20;
  FName local_70;
  FName local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [16];
  
  ppUVar19 = &this->owning_skeleton;
  iVar9 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)*ppUVar19);
  if (0 < iVar9) {
    pFVar1 = &this->Root_Clamping_Bone;
    iVar15 = 0;
    iVar9 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)*ppUVar19);
    if (0 < iVar9) {
      do {
        USkinnedMeshComponent::GetBoneName((USkinnedMeshComponent *)*ppUVar19,(int)&local_70);
        ::FName::FName(&local_res20,"None");
        if (((pFVar1->ComparisonIndex).Value == local_res20.ComparisonIndex.Value) &&
           ((this->Root_Clamping_Bone).Number == local_res20.Number)) {
          pFVar13 = (FName *)(this->individual_bone_selection).AllocatorInstance.Data;
          pFVar2 = pFVar13 + (this->individual_bone_selection).ArrayNum;
          for (; pFVar13 != pFVar2; pFVar13 = pFVar13 + 1) {
            if (*pFVar13 == local_70) {
              *pFVar1 = local_70;
              break;
            }
          }
        }
        iVar15 = iVar15 + 1;
        iVar9 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)*ppUVar19);
      } while (iVar15 < iVar9);
    }
    ppUVar18 = &this->owning_skeleton;
    uVar20 = 0;
    iVar9 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)*ppUVar19);
    if (0 < iVar9) {
      local_res18 = 0;
      do {
        FVar12 = *pFVar1;
        uVar14 = ~uVar20 >> 0x1f;
        uVar16 = 0;
        if ((int)uVar20 < (this->Parent_Bone_Map).ArrayNum) {
          uVar16 = uVar14;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar16 = 0;
        lVar17 = 0;
        *(FName *)((this->Parent_Bone_Map).AllocatorInstance.Data + local_res18) = FVar12;
        if (0 < (this->Influence_Stopping_Bones).ArrayNum) {
          local_res10 = 0;
          do {
            pUVar3 = *ppUVar18;
            uVar10 = 0;
            if ((int)uVar16 < (this->Influence_Stopping_Bones).ArrayNum) {
              uVar10 = ~uVar16 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FVar12 = *(FName *)((this->Influence_Stopping_Bones).AllocatorInstance.Data +
                               local_res10);
            FVar11 = USkinnedMeshComponent::GetBoneName
                               ((USkinnedMeshComponent *)*ppUVar18,(int)local_60);
            bVar8 = USkinnedMeshComponent::BoneIsChildOf
                              ((USkinnedMeshComponent *)pUVar3,*(FName *)FVar11,FVar12);
            if (bVar8) {
              pUVar3 = *ppUVar18;
              uVar10 = 0;
              if ((int)uVar16 < (this->Influence_Stopping_Bones).ArrayNum) {
                uVar10 = ~uVar16 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar10 = 0;
              if ((int)uVar20 < (this->Parent_Bone_Map).ArrayNum) {
                uVar10 = uVar14;
              }
              FVar12 = *(FName *)((this->Influence_Stopping_Bones).AllocatorInstance.Data +
                                 lVar17 * 8);
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              bVar8 = USkinnedMeshComponent::BoneIsChildOf
                                ((USkinnedMeshComponent *)pUVar3,
                                 *(FName *)((this->Parent_Bone_Map).AllocatorInstance.Data +
                                           local_res18),FVar12);
              if (!bVar8) {
                uVar10 = 0;
                if ((int)uVar16 < (this->Influence_Stopping_Bones).ArrayNum) {
                  uVar10 = ~uVar16 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar10 = 0;
                if ((int)uVar20 < (this->Parent_Bone_Map).ArrayNum) {
                  uVar10 = uVar14;
                }
                uVar4 = *(undefined8 *)
                         ((this->Influence_Stopping_Bones).AllocatorInstance.Data + lVar17 * 8);
                if ((uVar10 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                *(undefined8 *)((this->Parent_Bone_Map).AllocatorInstance.Data + local_res18) =
                     uVar4;
              }
            }
            uVar10 = 0;
            if ((int)uVar16 < (this->Influence_Stopping_Bones).ArrayNum) {
              uVar10 = ~uVar16 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar5 = (this->Influence_Stopping_Bones).AllocatorInstance.Data;
            FVar12 = USkinnedMeshComponent::GetBoneName
                               ((USkinnedMeshComponent *)*ppUVar18,(int)local_58);
            if (*(longlong *)FVar12 == *(longlong *)(pFVar5 + lVar17 * 8)) {
              uVar10 = 0;
              if ((int)uVar16 < (this->Influence_Stopping_Bones).ArrayNum) {
                uVar10 = ~uVar16 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar10 = 0;
              if ((int)uVar20 < (this->Parent_Bone_Map).ArrayNum) {
                uVar10 = uVar14;
              }
              uVar4 = *(undefined8 *)
                       ((this->Influence_Stopping_Bones).AllocatorInstance.Data + lVar17 * 8);
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              *(undefined8 *)((this->Parent_Bone_Map).AllocatorInstance.Data + local_res18) = uVar4;
            }
            local_res10 = local_res10 + 8;
            uVar16 = uVar16 + 1;
            lVar17 = lVar17 + 1;
          } while ((int)uVar16 < (this->Influence_Stopping_Bones).ArrayNum);
        }
        local_res18 = local_res18 + 8;
        uVar20 = uVar20 + 1;
        iVar9 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)*ppUVar18);
      } while ((int)uVar20 < iVar9);
    }
  }
  ppUVar19 = &this->owning_skeleton;
  uVar20 = 0;
  if (0 < (this->Parent_Bone_Map).ArrayNum) {
    lVar17 = 0;
    do {
      uVar16 = 0;
      if ((int)uVar20 < (this->Parent_Bone_Map).ArrayNum) {
        uVar16 = ~uVar20 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar12 = *(FName *)((this->Parent_Bone_Map).AllocatorInstance.Data + lVar17);
      FVar11 = USkinnedMeshComponent::GetBoneName((USkinnedMeshComponent *)*ppUVar19,(int)local_50);
      FVar11 = *(FName *)FVar11;
      iVar9 = USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)*ppUVar19,FVar11);
      iVar15 = USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)*ppUVar19,FVar12);
      if ((iVar15 != -1) && (iVar15 < iVar9)) {
        do {
          USkinnedMeshComponent::GetParentBone((USkinnedMeshComponent *)*ppUVar19,(FName)&local_68);
          FVar7 = local_68;
          if (local_68 == FVar12) goto LAB_14d336d85;
          bVar8 = ::FName::Equals(local_68,"None");
          FVar11 = FVar7;
        } while (!bVar8);
      }
      FVar11 = this->Custom_Root_Bone;
LAB_14d336d85:
      uVar16 = 0;
      if ((int)uVar20 < (this->Last_Second_Parent_Bone_Map).ArrayNum) {
        uVar16 = ~uVar20 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar20 = uVar20 + 1;
      *(FName *)((this->Last_Second_Parent_Bone_Map).AllocatorInstance.Data + lVar17) = FVar11;
      lVar17 = lVar17 + 8;
    } while ((int)uVar20 < (this->Parent_Bone_Map).ArrayNum);
  }
  return;
}

// Control_Bone_Handle @ 14d336f20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Control_Bone_Handle
          (UDragonIKPhysicsComponent *this,FName param_1,TTransform<double> *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  
  if ((this->handler_holder != (ADragonIKPhysicsHolder *)0x0) &&
     (this->owning_skeleton != (USkeletalMeshComponent *)0x0)) {
    uVar19 = USkinnedMeshComponent::GetBoneIndex
                       ((USkinnedMeshComponent *)this->owning_skeleton,param_1);
    if (-1 < (int)uVar19) {
      uVar20 = 0;
      if ((int)uVar19 < (this->custom_override_bool).ArrayNum) {
        uVar20 = ~uVar19 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      dVar8 = (param_2->Rotation).ZW.m128d_f64[0];
      dVar9 = (param_2->Rotation).ZW.m128d_f64[1];
      dVar10 = (param_2->Translation).XY.m128d_f64[0];
      dVar11 = (param_2->Translation).XY.m128d_f64[1];
      uVar4 = *(undefined4 *)(param_2->Rotation).XY.m128d_f64;
      uVar5 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 4);
      uVar6 = *(undefined4 *)((param_2->Rotation).XY.m128d_f64 + 1);
      uVar7 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 0xc);
      (this->custom_override_bool).AllocatorInstance.Data[(int)uVar19] =
           (FScriptContainerElement)param_3;
      dVar12 = (param_2->Translation).ZW.m128d_f64[0];
      dVar13 = (param_2->Translation).ZW.m128d_f64[1];
      uVar20 = 0;
      if ((int)uVar19 < (this->custom_override_transforms).ArrayNum) {
        uVar20 = ~uVar19 >> 0x1f;
      }
      dVar14 = (param_2->Scale3D).XY.m128d_f64[0];
      dVar15 = (param_2->Scale3D).XY.m128d_f64[1];
      dVar16 = (param_2->Scale3D).ZW.m128d_f64[0];
      dVar17 = (param_2->Scale3D).ZW.m128d_f64[1];
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->custom_override_transforms).AllocatorInstance.Data;
      lVar21 = (longlong)(int)uVar19 * 0x60;
      pFVar1 = pFVar2 + lVar21;
      *(undefined4 *)pFVar1 = uVar4;
      *(undefined4 *)(pFVar1 + 4) = uVar5;
      *(undefined4 *)(pFVar1 + 8) = uVar6;
      *(undefined4 *)(pFVar1 + 0xc) = uVar7;
      *(double *)(pFVar2 + lVar21 + 0x10) = dVar8;
      *(double *)(pFVar2 + lVar21 + 0x10 + 8) = dVar9;
      *(double *)(pFVar2 + lVar21 + 0x20) = dVar10;
      *(double *)(pFVar2 + lVar21 + 0x20 + 8) = dVar11;
      *(double *)(pFVar2 + lVar21 + 0x30) = dVar12;
      *(double *)(pFVar2 + lVar21 + 0x30 + 8) = dVar13;
      *(double *)(pFVar2 + lVar21 + 0x40) = dVar14;
      *(double *)(pFVar2 + lVar21 + 0x40 + 8) = dVar15;
      *(double *)(pFVar2 + lVar21 + 0x50) = dVar16;
      *(double *)(pFVar2 + lVar21 + 0x50 + 8) = dVar17;
    }
  }
  return;
}

// CreateAllHandles @ 14d3370e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDragonIKPhysicsComponent::CreateAllHandles(UDragonIKPhysicsComponent *this)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  UActorComponent *this_00;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  UWorld *pUVar9;
  UClass *pUVar10;
  ADragonIKPhysicsHolder *pAVar11;
  FString *pFVar12;
  FName *pFVar13;
  UPhysicsHandleComponent *pUVar14;
  longlong *plVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  wchar_t *pwVar18;
  uint uVar19;
  TTransform<double> *pTVar20;
  wchar_t *pwVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  float fVar26;
  undefined1 auStackY_178 [32];
  longlong local_138;
  FNameEntryId local_130;
  uint uStack_12c;
  longlong local_128;
  FName local_120;
  FString local_118;
  FName local_108;
  FString local_100;
  FString local_f0;
  undefined1 local_d8 [112];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pTVar20 = &UE::Math::TTransform<double>::Identity;
  if ((this->handler_holder == (ADragonIKPhysicsHolder *)0x0) &&
     (this->owning_skeleton != (USkeletalMeshComponent *)0x0)) {
    FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_d8);
    local_d8[0x30] = AlwaysSpawn;
    pUVar9 = AActor::GetWorld((AActor *)this->_padding_);
    pUVar10 = Z_Construct_UClass_ADragonIKPhysicsHolder_NoRegister();
    pAVar11 = (ADragonIKPhysicsHolder *)
              UWorld::SpawnActor(pUVar9,pUVar10,&UE::Math::TTransform<double>::Identity,
                                 (FActorSpawnParameters *)local_d8);
    if (pAVar11 == (ADragonIKPhysicsHolder *)0x0) {
      pAVar11 = (ADragonIKPhysicsHolder *)0x0;
    }
    else {
      pUVar10 = Z_Construct_UClass_ADragonIKPhysicsHolder_NoRegister();
      iVar6 = (int)pUVar10->_padding_;
      if ((*(int *)(pAVar11->_padding_ + 0x38) < iVar6) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar11->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
          &pUVar10->_padding_)) {
        pFVar12 = GetTypeName<ADragonIKPhysicsHolder>(&local_100);
        pwVar21 = L"";
        if ((pFVar12->Data).ArrayNum == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        }
        pFVar12 = GetFullNameForCastLogError<AActor>(&local_f0,(AActor *)pAVar11);
        if ((pFVar12->Data).ArrayNum != 0) {
          pwVar21 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar21,pwVar18);
      }
    }
    this->handler_holder = pAVar11;
    if (local_d8._64_8_ != 0) {
      plVar15 = (longlong *)(local_d8 + 0x50);
      if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
        plVar15 = (longlong *)local_d8._104_8_;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
  }
  lVar24 = *(longlong *)(this->_padding_ + 0x1b8);
  if (lVar24 != 0) {
    pTVar20 = (TTransform<double> *)(lVar24 + 0x1f0);
  }
  AActor::SetActorTransform((AActor *)this->handler_holder,pTVar20,false,(FHitResult *)0x0,None);
  this->handler_holder->connected_actor = (AActor *)this->_padding_;
  pAVar11 = this->handler_holder;
  iVar6 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)this->owning_skeleton);
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar6,&(pAVar11->physics_handle_array).AllocatorInstance,
                     &(pAVar11->physics_handle_array).ArrayNum,
                     &(pAVar11->physics_handle_array).ArrayMax);
  memset((pAVar11->physics_handle_array).AllocatorInstance.Data + (longlong)iVar7 * 8,0,
         (longlong)iVar6 << 3);
  iVar6 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)this->owning_skeleton);
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar6,&(this->custom_override_bool).AllocatorInstance,
                     &(this->custom_override_bool).ArrayNum,&(this->custom_override_bool).ArrayMax);
  memset((this->custom_override_bool).AllocatorInstance.Data + iVar7,0,(longlong)iVar6);
  iVar6 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)this->owning_skeleton);
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,iVar6,&(this->custom_override_transforms).AllocatorInstance,
                     &(this->custom_override_transforms).ArrayNum,
                     &(this->custom_override_transforms).ArrayMax);
  DefaultConstructItems<UE::Math::TTransform<double>,int>
            ((this->custom_override_transforms).AllocatorInstance.Data + (longlong)iVar7 * 0x60,
             iVar6);
  iVar6 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)this->owning_skeleton);
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,iVar6,&(this->control_bone_relative_transforms).AllocatorInstance,
                     &(this->control_bone_relative_transforms).ArrayNum,
                     &(this->control_bone_relative_transforms).ArrayMax);
  DefaultConstructItems<UE::Math::TTransform<double>,int>
            ((this->control_bone_relative_transforms).AllocatorInstance.Data +
             (longlong)iVar7 * 0x60,iVar6);
  if ((this->owning_skeleton != (USkeletalMeshComponent *)0x0) &&
     (this->handler_holder != (ADragonIKPhysicsHolder *)0x0)) {
    uVar19 = 0;
    iVar6 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)this->owning_skeleton);
    fVar4 = __real_3f800000;
    if (0 < iVar6) {
      lVar23 = 0;
      lVar24 = 0;
      local_128 = 0;
LAB_14d337410:
      ::FString::FString(&local_118,"Physics Hanlde Comp ");
      ::FString::AppendInt(&local_118,uVar19);
      if (local_118.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = local_118.Data.ArrayNum + -1;
      }
      pFVar13 = ::FName::FName(&local_108,iVar6,(wchar_t *)local_118.Data.AllocatorInstance.Data,
                               FNAME_Add);
      FVar1 = *pFVar13;
      USkinnedMeshComponent::GetBoneName
                ((USkinnedMeshComponent *)this->owning_skeleton,(int)&local_130);
      uVar22 = ~uVar19 >> 0x1f;
      uVar17 = 0;
      if ((int)uVar19 < (this->Grab_Handle_Tasks_Queue).ArrayNum) {
        uVar17 = uVar22;
      }
      if ((uVar17 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->Grab_Handle_Tasks_Queue).AllocatorInstance.Data[lVar23] = (FScriptContainerElement)0x0;
      uVar17 = 0;
      if ((int)uVar19 < (this->Physics_States).ArrayNum) {
        uVar17 = uVar22;
      }
      if ((uVar17 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->Physics_States).AllocatorInstance.Data[lVar23] = (FScriptContainerElement)0x0;
      uVar17 = 0;
      if ((int)uVar19 < (this->Grab_Handle_Locks).ArrayNum) {
        uVar17 = uVar22;
      }
      if ((uVar17 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->Grab_Handle_Locks).AllocatorInstance.Data[lVar23] = (FScriptContainerElement)0x0;
      uVar17 = 0;
      if ((int)uVar19 < (this->Remap_Physics_States_Queue).ArrayNum) {
        uVar17 = uVar22;
      }
      if ((uVar17 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->Remap_Physics_States_Queue).AllocatorInstance.Data[lVar23] =
           (FScriptContainerElement)0x0;
      pFVar16 = (this->individual_bone_selection).AllocatorInstance.Data;
      pFVar2 = pFVar16 + (longlong)(this->individual_bone_selection).ArrayNum * 8;
      for (; pFVar16 != pFVar2; pFVar16 = pFVar16 + 8) {
        if (*(longlong *)pFVar16 == CONCAT44(uStack_12c,local_130.Value)) {
          uVar17 = 0;
          local_138 = 0;
          fVar26 = fVar4;
          if ((this->Override_Handle_Strength_Multiplier).ArrayNum < 1) goto LAB_14d337714;
          lVar25 = 0;
          goto LAB_14d337620;
        }
      }
      goto LAB_14d337c16;
    }
  }
LAB_14d337c88:
  this->active_ragdoll = false;
  return;
  while( true ) {
    local_138 = local_138 + 1;
    uVar17 = uVar17 + 1;
    lVar25 = lVar25 + 0xc;
    lVar24 = local_128;
    if ((this->Override_Handle_Strength_Multiplier).ArrayNum <= (int)uVar17) break;
LAB_14d337620:
    uVar8 = 0;
    if ((int)uVar17 < (this->Override_Handle_Strength_Multiplier).ArrayNum) {
      uVar8 = ~uVar17 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (this->Override_Handle_Strength_Multiplier).AllocatorInstance.Data;
    if ((*(uint *)(pFVar2 + lVar25) == local_130.Value) &&
       (*(uint *)(pFVar2 + lVar25 + 4) == uStack_12c)) {
      uVar8 = 0;
      if ((int)uVar17 < (this->Override_Handle_Strength_Multiplier).ArrayNum) {
        uVar8 = ~uVar17 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar24 = local_128;
      fVar26 = *(float *)((this->Override_Handle_Strength_Multiplier).AllocatorInstance.Data +
                         local_138 * 0xc + 8);
      break;
    }
  }
LAB_14d337714:
  pUVar14 = NewObject<UPhysicsHandleComponent>
                      ((UObject *)this->handler_holder,FVar1,RF_NoFlags,(UObject *)0x0,false,
                       (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  pAVar11 = this->handler_holder;
  uVar17 = 0;
  if ((int)uVar19 < (pAVar11->physics_handle_array).ArrayNum) {
    uVar17 = uVar22;
  }
  if ((uVar17 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(UPhysicsHandleComponent **)((pAVar11->physics_handle_array).AllocatorInstance.Data + lVar24) =
       pUVar14;
  pAVar11 = this->handler_holder;
  uVar17 = 0;
  if ((int)uVar19 < (pAVar11->physics_handle_array).ArrayNum) {
    uVar17 = uVar22;
  }
  if ((uVar17 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(byte *)(*(longlong *)((pAVar11->physics_handle_array).AllocatorInstance.Data + lVar23 * 8)
                + 0x98) & 1) == 0) {
    pAVar11 = this->handler_holder;
    uVar17 = 0;
    if ((int)uVar19 < (pAVar11->physics_handle_array).ArrayNum) {
      uVar17 = uVar22;
    }
    if ((uVar17 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = *(UActorComponent **)
               ((pAVar11->physics_handle_array).AllocatorInstance.Data + lVar23 * 8);
    pUVar9 = AActor::GetWorld((AActor *)this->_padding_);
    UActorComponent::RegisterComponentWithWorld(this_00,pUVar9,(FRegisterComponentContext *)0x0);
    pAVar11 = this->handler_holder;
    uVar17 = 0;
    if ((int)uVar19 < (pAVar11->physics_handle_array).ArrayNum) {
      uVar17 = uVar22;
    }
    if ((uVar17 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UActorComponent::RegisterComponent
              (*(UActorComponent **)
                ((pAVar11->physics_handle_array).AllocatorInstance.Data + lVar23 * 8));
  }
  pAVar11 = this->handler_holder;
  iVar6 = this->Linear_Damp;
  uVar17 = 0;
  if ((int)uVar19 < (pAVar11->physics_handle_array).ArrayNum) {
    uVar17 = uVar22;
  }
  if ((uVar17 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(float *)(*(longlong *)((pAVar11->physics_handle_array).AllocatorInstance.Data + lVar23 * 8) +
            0xd4) = (float)iVar6 * fVar26;
  pAVar11 = this->handler_holder;
  iVar6 = this->Angular_Damp;
  uVar17 = 0;
  if ((int)uVar19 < (pAVar11->physics_handle_array).ArrayNum) {
    uVar17 = uVar22;
  }
  if ((uVar17 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(float *)(*(longlong *)((pAVar11->physics_handle_array).AllocatorInstance.Data + lVar23 * 8) +
            0xdc) = (float)iVar6 * fVar26;
  pAVar11 = this->handler_holder;
  iVar6 = this->Linear_Strength;
  uVar17 = 0;
  if ((int)uVar19 < (pAVar11->physics_handle_array).ArrayNum) {
    uVar17 = uVar22;
  }
  if ((uVar17 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(float *)(*(longlong *)((pAVar11->physics_handle_array).AllocatorInstance.Data + lVar23 * 8) +
            0xd8) = (float)iVar6 * fVar26;
  pAVar11 = this->handler_holder;
  iVar6 = this->Angular_Strength;
  uVar17 = 0;
  if ((int)uVar19 < (pAVar11->physics_handle_array).ArrayNum) {
    uVar17 = uVar22;
  }
  if ((uVar17 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(float *)(*(longlong *)((pAVar11->physics_handle_array).AllocatorInstance.Data + lVar23 * 8) +
            0xe0) = (float)iVar6 * fVar26;
  iVar6 = this->Interpolation_Speed;
  pAVar11 = this->handler_holder;
  uVar17 = 0;
  if ((int)uVar19 < (pAVar11->physics_handle_array).ArrayNum) {
    uVar17 = uVar22;
  }
  if ((uVar17 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(float *)(*(longlong *)((pAVar11->physics_handle_array).AllocatorInstance.Data + lVar23 * 8) +
            0x1b0) = (float)(iVar6 * 10);
  pAVar11 = this->handler_holder;
  uVar17 = 0;
  if ((int)uVar19 < (pAVar11->physics_handle_array).ArrayNum) {
    uVar17 = uVar22;
  }
  if ((uVar17 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plVar15 = *(longlong **)((pAVar11->physics_handle_array).AllocatorInstance.Data + lVar23 * 8);
  (**(code **)(*plVar15 + 0x2b8))(plVar15,0);
  pAVar11 = this->handler_holder;
  uVar17 = 0;
  if ((int)uVar19 < (pAVar11->physics_handle_array).ArrayNum) {
    uVar17 = uVar22;
  }
  if ((uVar17 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  AActor::AddInstanceComponent
            ((AActor *)pAVar11,
             *(UActorComponent **)
              ((pAVar11->physics_handle_array).AllocatorInstance.Data + lVar23 * 8));
  ::FName::FName(&local_120,"None");
  if (((this->Root_Clamping_Bone).ComparisonIndex.Value == local_120.ComparisonIndex.Value) &&
     ((this->Root_Clamping_Bone).Number == local_120.Number)) {
    FVar1.Number = uStack_12c;
    FVar1.ComparisonIndex.Value = local_130.Value;
    this->Root_Clamping_Bone = FVar1;
  }
LAB_14d337c16:
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  lVar24 = lVar24 + 8;
  uVar19 = uVar19 + 1;
  lVar23 = lVar23 + 1;
  local_128 = lVar24;
  iVar6 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)this->owning_skeleton);
  if (iVar6 <= (int)uVar19) goto LAB_14d337c88;
  goto LAB_14d337410;
}

// FirstTimeInitialization @ 14d345300

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::FirstTimeInitialization
          (UDragonIKPhysicsComponent *this,USkeletalMeshComponent *param_1)

{
  if ((param_1 != (USkeletalMeshComponent *)0x0) &&
     (this->owning_skeleton == (USkeletalMeshComponent *)0x0)) {
    SetSkeletonInput(this,param_1);
    (**(code **)(param_1->_padding_ + 0x780))(param_1,3);
    CreateAllHandles(this);
    GrabAllHandles(this);
  }
  return;
}

// GetLastSecondParentBone @ 14d348410

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FName __thiscall
UDragonIKPhysicsComponent::GetLastSecondParentBone
          (UDragonIKPhysicsComponent *this,FName param_1,FName param_2)

{
  FName FVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  FName in_R9;
  FName local_res8;
  
  iVar3 = USkinnedMeshComponent::GetBoneIndex
                    ((USkinnedMeshComponent *)this->owning_skeleton,param_2);
  iVar4 = USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)this->owning_skeleton,in_R9);
  if ((iVar4 != -1) && (iVar4 < iVar3)) {
    do {
      USkinnedMeshComponent::GetParentBone
                ((USkinnedMeshComponent *)this->owning_skeleton,(FName)&local_res8);
      FVar1 = local_res8;
      if (local_res8 == in_R9) {
        *(FName *)param_1 = param_2;
        return param_1;
      }
      bVar2 = ::FName::Equals(local_res8,"None");
      param_2 = FVar1;
    } while (!bVar2);
  }
  *(FName *)param_1 = this->Custom_Root_Bone;
  return param_1;
}

// GetLifetimeReplicatedProps @ 14d3484c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::GetLifetimeReplicatedProps
          (UDragonIKPhysicsComponent *this,
          TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FProperty *pFVar4;
  FName local_res18;
  FDoRepLifetimeParams local_28;
  
  UActorComponent::GetLifetimeReplicatedProps((UActorComponent *)this,param_1);
  pFVar2 = ::FName::FName(&local_res18,0x19,L"individual_bone_selection",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_UDragonIKPhysicsComponent_NoRegister();
  Z_Construct_UClass_UDragonIKPhysicsComponent_NoRegister();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_28);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_28._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
  }
  local_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_28._0_8_ = (void *)0x0;
  local_28.bIsPushBased = false;
  local_28._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_28);
  pFVar2 = ::FName::FName(&local_res18,0xe,L"handler_holder",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_UDragonIKPhysicsComponent_NoRegister();
  Z_Construct_UClass_UDragonIKPhysicsComponent_NoRegister();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_28);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_28._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
  }
  local_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_28.Condition = COND_None;
  local_28.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_28.bIsPushBased = false;
  local_28._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_28);
  return;
}

// GrabAllHandles @ 14d348b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDragonIKPhysicsComponent::GrabAllHandles(UDragonIKPhysicsComponent *this)

{
  UPhysicsHandleComponent *this_00;
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FName FVar10;
  TTransform<double> *pTVar11;
  ADragonIKPhysicsHolder *pAVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined1 auStackY_228 [32];
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> local_1f8;
  undefined1 local_1e8 [8];
  TRotator<double> local_1e0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  TRotator<double> local_1a8;
  TVector<double>_u_0 local_188;
  TQuat<double> local_168;
  double local_138;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pAVar12 = this->handler_holder;
  if (pAVar12 != (ADragonIKPhysicsHolder *)0x0) {
    uVar14 = 0;
    uVar15 = uVar14;
    if (0 < (pAVar12->physics_handle_array).ArrayNum) {
      do {
        uVar13 = (uint)uVar14;
        uVar16 = ~uVar13 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar13 < (pAVar12->physics_handle_array).ArrayNum) {
          uVar8 = uVar16;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(longlong *)((pAVar12->physics_handle_array).AllocatorInstance.Data + uVar15 * 8) != 0)
        {
          uVar9 = 0;
          uVar8 = uVar9;
          if ((int)uVar13 < (this->Grab_Handle_Locks).ArrayNum) {
            uVar8 = uVar16;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if ((this->Grab_Handle_Locks).AllocatorInstance.Data[uVar15] ==
              (FScriptContainerElement)0x0) {
            USkinnedMeshComponent::GetBoneTransform
                      ((USkinnedMeshComponent *)this->owning_skeleton,&local_128,uVar13);
            pAVar12 = this->handler_holder;
            uVar8 = uVar9;
            if ((int)uVar13 < (pAVar12->physics_handle_array).ArrayNum) {
              uVar8 = uVar16;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            local_168.X = local_128.Rotation.XY.m128d_f64[0];
            local_168.Y = local_128.Rotation.XY.m128d_f64[1];
            this_00 = *(UPhysicsHandleComponent **)
                       ((pAVar12->physics_handle_array).AllocatorInstance.Data + uVar15 * 8);
            local_168.Z = local_128.Rotation.ZW.m128d_f64[0];
            local_168.W = local_128.Rotation.ZW.m128d_f64[1];
            UE::Math::TQuat<double>::Rotator(&local_168,&local_1e0);
            dVar6 = local_128.Translation.XY.m128d_f64[1];
            dVar5 = local_128.Translation.XY.m128d_f64[0];
            dVar4 = local_1e0.Roll;
            dVar3 = local_1e0.Yaw;
            dVar2 = local_1e0.Pitch;
            local_1b8 = local_128.Translation.ZW.m128d_f64[0];
            local_138 = local_128.Translation.ZW.m128d_f64[0];
            local_1c8 = local_128.Translation.XY.m128d_f64[0];
            dStack_1c0 = local_128.Translation.XY.m128d_f64[1];
            FVar10 = USkinnedMeshComponent::GetBoneName
                               ((USkinnedMeshComponent *)this->owning_skeleton,(int)local_1e8);
            local_1a8.Pitch = dVar2;
            local_1a8.Yaw = dVar3;
            local_1a8.Roll = dVar4;
            local_188._s_0.X = dVar5;
            local_188._s_0.Y = dVar6;
            local_188._s_0.Z = local_138;
            UPhysicsHandleComponent::GrabComponentAtLocationWithRotation
                      (this_00,(UPrimitiveComponent *)this->owning_skeleton,*(FName *)FVar10,
                       (TVector<double> *)&local_188._s_0,&local_1a8);
            if ((int)uVar13 < (this->Grab_Handle_Locks).ArrayNum) {
              uVar9 = uVar16;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            (this->Grab_Handle_Locks).AllocatorInstance.Data[uVar15] = (FScriptContainerElement)0x1;
          }
        }
        pAVar12 = this->handler_holder;
        uVar14 = (ulonglong)(uVar13 + 1);
        uVar15 = uVar15 + 1;
      } while ((int)(uVar13 + 1) < (pAVar12->physics_handle_array).ArrayNum);
    }
    this->component_grabbing_state = true;
    this->is_released = false;
    this->slight_delay_counter = 0.0;
    local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f8.ArrayNum = 0;
    local_1f8.ArrayMax = 0;
    USceneComponent::GetParentComponents((USceneComponent *)this->owning_skeleton,&local_1f8);
    if (0 < local_1f8.ArrayNum) {
      this->mesh_parent_reference = *(USceneComponent **)local_1f8.AllocatorInstance.Data;
      pTVar11 = USceneComponent::GetRelativeTransform
                          ((USceneComponent *)this->owning_skeleton,&local_c8);
      dVar2 = (pTVar11->Rotation).XY.m128d_f64[1];
      (this->relative_mesh_transform).Rotation.XY.m128d_f64[0] = (pTVar11->Rotation).XY.m128d_f64[0]
      ;
      (this->relative_mesh_transform).Rotation.XY.m128d_f64[1] = dVar2;
      dVar2 = (pTVar11->Rotation).ZW.m128d_f64[1];
      (this->relative_mesh_transform).Rotation.ZW.m128d_f64[0] = (pTVar11->Rotation).ZW.m128d_f64[0]
      ;
      (this->relative_mesh_transform).Rotation.ZW.m128d_f64[1] = dVar2;
      dVar2 = (pTVar11->Translation).XY.m128d_f64[1];
      (this->relative_mesh_transform).Translation.XY.m128d_f64[0] =
           (pTVar11->Translation).XY.m128d_f64[0];
      (this->relative_mesh_transform).Translation.XY.m128d_f64[1] = dVar2;
      dVar2 = (pTVar11->Translation).ZW.m128d_f64[1];
      (this->relative_mesh_transform).Translation.ZW.m128d_f64[0] =
           (pTVar11->Translation).ZW.m128d_f64[0];
      (this->relative_mesh_transform).Translation.ZW.m128d_f64[1] = dVar2;
      dVar2 = (pTVar11->Scale3D).XY.m128d_f64[1];
      (this->relative_mesh_transform).Scale3D.XY.m128d_f64[0] = (pTVar11->Scale3D).XY.m128d_f64[0];
      (this->relative_mesh_transform).Scale3D.XY.m128d_f64[1] = dVar2;
      dVar2 = (pTVar11->Scale3D).ZW.m128d_f64[1];
      (this->relative_mesh_transform).Scale3D.ZW.m128d_f64[0] = (pTVar11->Scale3D).ZW.m128d_f64[0];
      (this->relative_mesh_transform).Scale3D.ZW.m128d_f64[1] = dVar2;
    }
    if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.AllocatorInstance.Data);
    }
  }
  return;
}

// IsParentBone @ 14d34b810

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDragonIKPhysicsComponent::IsParentBone
          (UDragonIKPhysicsComponent *this,FName *param_1,FName *param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = USkinnedMeshComponent::GetBoneIndex
                    ((USkinnedMeshComponent *)this->owning_skeleton,*param_1);
  if (iVar2 != -1) {
    bVar1 = USkinnedMeshComponent::BoneIsChildOf
                      ((USkinnedMeshComponent *)this->owning_skeleton,*param_2,*param_1);
    if ((bVar1) && (*param_2 != *param_1)) {
      return true;
    }
  }
  if (*param_2 == this->Root_Clamping_Bone) {
    return *param_1 == *param_2;
  }
  return false;
}

// MapParentChildRelationships @ 14d350500

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> * __thiscall
UDragonIKPhysicsComponent::MapParentChildRelationships
          (UDragonIKPhysicsComponent *this,
          TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
          *__return_storage_ptr__,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  FName *pFVar1;
  int iVar2;
  USkeletalMeshComponent *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *pTVar8;
  uint uVar9;
  FName *pFVar10;
  longlong lVar11;
  FName *pFVar12;
  undefined1 local_res8 [16];
  FName local_res20;
  FName *local_50;
  FName *local_48;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  if ((this->handler_holder != (ADragonIKPhysicsHolder *)0x0) &&
     (this->owning_skeleton != (USkeletalMeshComponent *)0x0)) {
    iVar2 = param_1->ArrayNum;
    pFVar12 = (FName *)(param_1->AllocatorInstance).Data;
    pFVar1 = pFVar12 + iVar2;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar12 == pFVar1) break;
      ::FName::FName(&local_res20,"Nil");
      iVar6 = param_1->ArrayNum;
      uVar9 = 0;
      if (0 < iVar6) {
        lVar11 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar9 < iVar6) {
            uVar5 = ~uVar9 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar8 = (TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                      *)(*pcVar3)();
            return pTVar8;
          }
          pFVar10 = (FName *)((param_1->AllocatorInstance).Data + lVar11);
          iVar6 = USkinnedMeshComponent::GetBoneIndex
                            ((USkinnedMeshComponent *)this->owning_skeleton,*pFVar10);
          if ((((iVar6 != -1) &&
               (bVar4 = USkinnedMeshComponent::BoneIsChildOf
                                  ((USkinnedMeshComponent *)this->owning_skeleton,*pFVar12,*pFVar10)
               , bVar4)) && (*pFVar12 != *pFVar10)) ||
             ((*pFVar12 == this->Root_Clamping_Bone && (*pFVar10 == *pFVar12)))) {
            this_00 = this->owning_skeleton;
            uVar5 = 0;
            if ((int)uVar9 < param_1->ArrayNum) {
              uVar5 = ~uVar9 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              pTVar8 = (TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                        *)(*pcVar3)();
              return pTVar8;
            }
            iVar6 = USkinnedMeshComponent::GetBoneIndex
                              ((USkinnedMeshComponent *)this_00,
                               *(FName *)((param_1->AllocatorInstance).Data + lVar11));
            iVar7 = USkinnedMeshComponent::GetBoneIndex
                              ((USkinnedMeshComponent *)this->owning_skeleton,local_res20);
            if ((iVar7 < iVar6) || (iVar7 == -1)) {
              uVar5 = 0;
              if ((int)uVar9 < param_1->ArrayNum) {
                uVar5 = ~uVar9 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pTVar8 = (TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                          *)(*pcVar3)();
                return pTVar8;
              }
              local_res20 = *(FName *)((param_1->AllocatorInstance).Data + lVar11);
            }
          }
          iVar6 = param_1->ArrayNum;
          uVar9 = uVar9 + 1;
          lVar11 = lVar11 + 8;
        } while ((int)uVar9 < iVar6);
      }
      local_48 = &local_res20;
      local_50 = pFVar12;
      TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
                ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,
                 (TPairInitializer<FName_const_&,FName_const_&> *)(local_res8 + 8),(bool *)&local_50
                );
      pFVar12 = pFVar12 + 1;
    }
  }
  return __return_storage_ptr__;
}

// ModifyAllHandleTransforms @ 14d3507d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::ModifyAllHandleTransforms(UDragonIKPhysicsComponent *this)

{
  undefined4 *puVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  UPhysicsHandleComponent *this_00;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  uint uVar31;
  bool bVar32;
  uint uVar33;
  int iVar34;
  uint uVar35;
  FName FVar36;
  FName *pFVar37;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  ADragonIKPhysicsHolder *pAVar38;
  int iVar39;
  uint uVar40;
  TTransform<double> *pTVar41;
  char *pcVar42;
  USkeletalMeshComponent *pUVar43;
  uint uVar44;
  longlong lVar45;
  int *piVar46;
  uint uVar47;
  uint uVar48;
  longlong lVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined1 auStackY_658 [32];
  UDragonIKPhysicsComponent *local_628;
  code *local_620;
  UDragonIKPhysicsComponent **local_618;
  undefined1 local_610 [16];
  double local_600;
  undefined1 local_5f8 [8];
  undefined1 local_5f0 [8];
  double local_5e8;
  double local_5e0;
  double local_5d8;
  double local_5c8;
  double dStack_5c0;
  double local_5b8;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  double local_598;
  TRotator<double> local_590;
  TRotator<double> local_578;
  TVector<double>_u_0 local_558;
  TQuat<double> local_538;
  double local_518;
  double dStack_510;
  double local_508;
  double local_500;
  double dStack_4f8;
  double local_4f0;
  double local_4d8;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  TTransform<double> local_468;
  TTransform<double> local_408;
  TTransform<double> local_3a8;
  TTransform<double> local_348;
  TTransform<double> local_2e8;
  TTransform<double> local_288;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  uVar31 = _UNK_15061cc8c;
  uVar44 = _UNK_15061cc88;
  uVar35 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar48 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_658;
  pAVar38 = this->handler_holder;
  if (pAVar38 == (ADragonIKPhysicsHolder *)0x0) {
    return;
  }
  if (this->owning_skeleton == (USkeletalMeshComponent *)0x0) {
    return;
  }
  if (this->component_grabbing_state != true) {
    return;
  }
  if ((pAVar38->physics_handle_array).ArrayNum < 1) {
    return;
  }
  pcVar42 = (char *)this;
  if (this->active_ragdoll == false) {
    if ((this->parent_child_ragdoll_state != false) &&
       (uVar47 = 0, 0 < (this->control_bone_relative_transforms).ArrayNum)) {
      lVar45 = 0;
      do {
        FVar36 = USkinnedMeshComponent::GetBoneName
                           ((USkinnedMeshComponent *)this->owning_skeleton,(int)local_5f0);
        pFVar37 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                  ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                          *)&this->Parent_Child_Connection_Array,*(FName *)FVar36);
        local_2e8.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_2e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_2e8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_2e8.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_2e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_2e8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_2e8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_2e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_2e8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_2e8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_2e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_2e8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_2e8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_2e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_2e8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_2e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_2e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_2e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        if ((pFVar37 == (FName *)0x0) || (this->ragdoll_mode != false)) {
          uVar40 = 0;
          if ((int)uVar47 < (this->Raw_Animation_Transforms).ArrayNum) {
            uVar40 = ~uVar47 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (this->Raw_Animation_Transforms).AllocatorInstance.Data;
          iVar34 = (this->control_bone_relative_transforms).ArrayNum;
          pFVar2 = pFVar3 + lVar45;
          uVar58 = *(undefined4 *)pFVar2;
          uVar59 = *(undefined4 *)(pFVar2 + 4);
          uVar60 = *(undefined4 *)(pFVar2 + 8);
          uVar61 = *(undefined4 *)(pFVar2 + 0xc);
          pFVar2 = pFVar3 + lVar45 + 0x10;
          uVar62 = *(undefined4 *)pFVar2;
          uVar63 = *(undefined4 *)(pFVar2 + 4);
          uVar64 = *(undefined4 *)(pFVar2 + 8);
          uVar65 = *(undefined4 *)(pFVar2 + 0xc);
          pFVar2 = pFVar3 + lVar45 + 0x20;
          uVar54 = *(undefined4 *)pFVar2;
          uVar55 = *(undefined4 *)(pFVar2 + 4);
          uVar56 = *(undefined4 *)(pFVar2 + 8);
          uVar57 = *(undefined4 *)(pFVar2 + 0xc);
          pFVar2 = pFVar3 + lVar45 + 0x30;
          uVar66 = *(undefined4 *)pFVar2;
          uVar67 = *(undefined4 *)(pFVar2 + 4);
          uVar21 = *(undefined4 *)(pFVar2 + 8);
          uVar22 = *(undefined4 *)(pFVar2 + 0xc);
          pFVar2 = pFVar3 + lVar45 + 0x40;
          uVar23 = *(undefined4 *)pFVar2;
          uVar24 = *(undefined4 *)(pFVar2 + 4);
          uVar25 = *(undefined4 *)(pFVar2 + 8);
          uVar26 = *(undefined4 *)(pFVar2 + 0xc);
          pFVar3 = pFVar3 + lVar45 + 0x50;
          uVar27 = *(undefined4 *)pFVar3;
          uVar28 = *(undefined4 *)(pFVar3 + 4);
          uVar29 = *(undefined4 *)(pFVar3 + 8);
          uVar30 = *(undefined4 *)(pFVar3 + 0xc);
          uVar40 = 0;
          if ((int)uVar47 < iVar34) {
            uVar40 = ~uVar47 >> 0x1f;
          }
        }
        else {
          uVar33 = USkinnedMeshComponent::GetBoneIndex
                             ((USkinnedMeshComponent *)this->owning_skeleton,*pFVar37);
          USkinnedMeshComponent::GetBoneTransform
                    ((USkinnedMeshComponent *)this->owning_skeleton,&local_108,uVar33);
          iVar34 = (this->Raw_Animation_Transforms).ArrayNum;
          uVar40 = 0;
          if ((int)uVar33 < iVar34) {
            uVar40 = ~uVar33 >> 0x1f;
          }
          if (uVar40 == 0) {
            iVar34 = 0x506109c0;
            bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            uVar40 = (uint)CONCAT71(extraout_var_00,bVar32);
            if (bVar32) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          pTVar41 = (TTransform<double> *)
                    ((this->Raw_Animation_Transforms).AllocatorInstance.Data +
                    (longlong)(int)uVar33 * 0x60);
          lVar49 = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                    (double)CONCAT44(uVar31 & *(uint *)((longlong)(pTVar41->Scale3D).ZW.m128d_f64 +
                                                       0xc),
                                     uVar44 & *(uint *)((pTVar41->Scale3D).ZW.m128d_f64 + 1)));
          auVar13._8_4_ = (int)lVar49;
          auVar13._0_8_ =
               -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                (double)CONCAT44(uVar35 & *(uint *)((longlong)(pTVar41->Scale3D).ZW.m128d_f64 + 4),
                                 uVar48 & *(uint *)(pTVar41->Scale3D).ZW.m128d_f64));
          auVar13._12_4_ = (int)((ulonglong)lVar49 >> 0x20);
          uVar33 = movmskpd(iVar34,auVar13);
          lVar49 = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
                    (double)CONCAT44(uVar31 & *(uint *)((longlong)(pTVar41->Scale3D).XY.m128d_f64 +
                                                       0xc),
                                     uVar44 & *(uint *)((pTVar41->Scale3D).XY.m128d_f64 + 1)));
          auVar11._8_4_ = (int)lVar49;
          auVar11._0_8_ =
               -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
                (double)CONCAT44(uVar35 & *(uint *)((longlong)(pTVar41->Scale3D).XY.m128d_f64 + 4),
                                 uVar48 & *(uint *)(pTVar41->Scale3D).XY.m128d_f64));
          auVar11._12_4_ = (int)((ulonglong)lVar49 >> 0x20);
          iVar34 = movmskpd(uVar40,auVar11);
          if ((uVar33 & 0x3fffffff) == 0 && iVar34 == 0) {
            local_1c8.Rotation.XY.m128d_f64[1] =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
            local_1c8.Rotation.XY.m128d_f64[0] =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
            local_1c8.Rotation.ZW.m128d_f64[1] =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
            local_1c8.Rotation.ZW.m128d_f64[0] =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
            local_1c8.Translation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
            local_1c8.Translation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
            local_1c8.Scale3D.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
            local_1c8.Scale3D.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          }
          else {
            UE::Math::TTransform<double>::InverseFast(pTVar41,&local_1c8);
          }
          local_348.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_348.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_348.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_348.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_348.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_348.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_348.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_348.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_348.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_348.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_348.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_348.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_348.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_348.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_348.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_348.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_348.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_348.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&local_348,&local_1c8,&local_108);
          local_2e8.Rotation.XY.m128d_f64[0] = local_348.Rotation.XY.m128d_f64[0];
          local_2e8.Rotation.XY.m128d_f64[1] = local_348.Rotation.XY.m128d_f64[1];
          local_2e8.Rotation.ZW.m128d_f64[0] = local_348.Rotation.ZW.m128d_f64[0];
          local_2e8.Rotation.ZW.m128d_f64[1] = local_348.Rotation.ZW.m128d_f64[1];
          uVar40 = 0;
          if ((int)uVar47 < (this->Raw_Animation_Transforms).ArrayNum) {
            uVar40 = ~uVar47 >> 0x1f;
          }
          local_2e8.Translation.XY.m128d_f64[0] = local_348.Translation.XY.m128d_f64[0];
          local_2e8.Translation.XY.m128d_f64[1] = local_348.Translation.XY.m128d_f64[1];
          local_2e8.Translation.ZW.m128d_f64[0] = local_348.Translation.ZW.m128d_f64[0];
          local_2e8.Translation.ZW.m128d_f64[1] = local_348.Translation.ZW.m128d_f64[1];
          local_2e8.Scale3D.XY.m128d_f64[0] = local_348.Scale3D.XY.m128d_f64[0];
          local_2e8.Scale3D.XY.m128d_f64[1] = local_348.Scale3D.XY.m128d_f64[1];
          local_2e8.Scale3D.ZW.m128d_f64[0] = local_348.Scale3D.ZW.m128d_f64[0];
          local_2e8.Scale3D.ZW.m128d_f64[1] = local_348.Scale3D.ZW.m128d_f64[1];
          if ((uVar40 == 0) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_288.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_288.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_288.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_288.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_288.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_288.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_288.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_288.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_288.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_288.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_288.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_288.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_288.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_288.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_288.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_288.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_288.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_288.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&local_288,
                     (TTransform<double> *)
                     ((this->Raw_Animation_Transforms).AllocatorInstance.Data +
                     (longlong)(int)uVar47 * 0x60),&local_2e8);
          iVar34 = (this->control_bone_relative_transforms).ArrayNum;
          uVar40 = 0;
          if ((int)uVar47 < iVar34) {
            uVar40 = ~uVar47 >> 0x1f;
          }
          uVar58 = local_288.Rotation.XY.m128d_f64[0]._0_4_;
          uVar59 = local_288.Rotation.XY.m128d_f64[0]._4_4_;
          uVar60 = local_288.Rotation.XY.m128d_f64[1]._0_4_;
          uVar61 = local_288.Rotation.XY.m128d_f64[1]._4_4_;
          uVar62 = local_288.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar63 = local_288.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar64 = local_288.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar65 = local_288.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar54 = local_288.Translation.XY.m128d_f64[0]._0_4_;
          uVar55 = local_288.Translation.XY.m128d_f64[0]._4_4_;
          uVar56 = local_288.Translation.XY.m128d_f64[1]._0_4_;
          uVar57 = local_288.Translation.XY.m128d_f64[1]._4_4_;
          uVar66 = local_288.Translation.ZW.m128d_f64[0]._0_4_;
          uVar67 = local_288.Translation.ZW.m128d_f64[0]._4_4_;
          uVar21 = local_288.Translation.ZW.m128d_f64[1]._0_4_;
          uVar22 = local_288.Translation.ZW.m128d_f64[1]._4_4_;
          uVar23 = local_288.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar24 = local_288.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar25 = local_288.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar26 = local_288.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar27 = local_288.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar28 = local_288.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar29 = local_288.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar30 = local_288.Scale3D.ZW.m128d_f64[1]._4_4_;
        }
        pcVar42 = (char *)(longlong)iVar34;
        if (uVar40 == 0) {
          pcVar42 = "(Index >= 0) & (Index < ArrayNum)";
          bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar32) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pAVar38 = (ADragonIKPhysicsHolder *)
                  (this->control_bone_relative_transforms).AllocatorInstance.Data;
        uVar47 = uVar47 + 1;
        puVar1 = (undefined4 *)((longlong)&pAVar38->_padding_ + lVar45);
        *puVar1 = uVar58;
        puVar1[1] = uVar59;
        puVar1[2] = uVar60;
        puVar1[3] = uVar61;
        puVar1 = (undefined4 *)((longlong)&pAVar38->_padding_ + lVar45);
        *puVar1 = uVar62;
        puVar1[1] = uVar63;
        puVar1[2] = uVar64;
        puVar1[3] = uVar65;
        puVar1 = (undefined4 *)((longlong)&pAVar38->_padding_ + lVar45);
        *puVar1 = uVar54;
        puVar1[1] = uVar55;
        puVar1[2] = uVar56;
        puVar1[3] = uVar57;
        puVar1 = (undefined4 *)((longlong)&pAVar38->_padding_ + lVar45);
        *puVar1 = uVar66;
        puVar1[1] = uVar67;
        puVar1[2] = uVar21;
        puVar1[3] = uVar22;
        puVar1 = (undefined4 *)((longlong)&pAVar38->_padding_ + lVar45);
        *puVar1 = uVar23;
        puVar1[1] = uVar24;
        puVar1[2] = uVar25;
        puVar1[3] = uVar26;
        puVar1 = (undefined4 *)((longlong)&pAVar38->_padding_ + lVar45);
        *puVar1 = uVar27;
        puVar1[1] = uVar28;
        puVar1[2] = uVar29;
        puVar1[3] = uVar30;
        lVar45 = lVar45 + 0x60;
      } while ((int)uVar47 < (this->control_bone_relative_transforms).ArrayNum);
    }
  }
  else {
    uVar47 = 0;
    if (0 < (this->control_bone_relative_transforms).ArrayNum) {
      lVar45 = 0;
      do {
        FVar36 = USkinnedMeshComponent::GetBoneName
                           ((USkinnedMeshComponent *)this->owning_skeleton,(int)local_5f8);
        pFVar37 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                  ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                          *)&this->active_ragdoll_tmap,*(FName *)FVar36);
        local_408.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_408.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_408.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_408.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_408.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_408.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_408.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_408.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_408.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_408.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_408.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_408.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_408.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_408.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_408.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_408.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_408.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_408.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        if (((*(int *)&(this->active_ragdoll_tmap).field_0x8 ==
              *(int *)&(this->active_ragdoll_tmap).field_0x34) || (pFVar37 == (FName *)0x0)) ||
           (this->ragdoll_mode != false)) {
          uVar40 = 0;
          if ((int)uVar47 < (this->Raw_Animation_Transforms).ArrayNum) {
            uVar40 = ~uVar47 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (this->Raw_Animation_Transforms).AllocatorInstance.Data;
          iVar34 = (this->control_bone_relative_transforms).ArrayNum;
          pFVar2 = pFVar3 + lVar45;
          uVar58 = *(undefined4 *)pFVar2;
          uVar59 = *(undefined4 *)(pFVar2 + 4);
          uVar60 = *(undefined4 *)(pFVar2 + 8);
          uVar61 = *(undefined4 *)(pFVar2 + 0xc);
          pFVar2 = pFVar3 + lVar45 + 0x10;
          uVar62 = *(undefined4 *)pFVar2;
          uVar63 = *(undefined4 *)(pFVar2 + 4);
          uVar64 = *(undefined4 *)(pFVar2 + 8);
          uVar65 = *(undefined4 *)(pFVar2 + 0xc);
          pFVar2 = pFVar3 + lVar45 + 0x20;
          uVar54 = *(undefined4 *)pFVar2;
          uVar55 = *(undefined4 *)(pFVar2 + 4);
          uVar56 = *(undefined4 *)(pFVar2 + 8);
          uVar57 = *(undefined4 *)(pFVar2 + 0xc);
          pFVar2 = pFVar3 + lVar45 + 0x30;
          uVar66 = *(undefined4 *)pFVar2;
          uVar67 = *(undefined4 *)(pFVar2 + 4);
          uVar21 = *(undefined4 *)(pFVar2 + 8);
          uVar22 = *(undefined4 *)(pFVar2 + 0xc);
          pFVar2 = pFVar3 + lVar45 + 0x40;
          uVar23 = *(undefined4 *)pFVar2;
          uVar24 = *(undefined4 *)(pFVar2 + 4);
          uVar25 = *(undefined4 *)(pFVar2 + 8);
          uVar26 = *(undefined4 *)(pFVar2 + 0xc);
          pFVar3 = pFVar3 + lVar45 + 0x50;
          uVar27 = *(undefined4 *)pFVar3;
          uVar28 = *(undefined4 *)(pFVar3 + 4);
          uVar29 = *(undefined4 *)(pFVar3 + 8);
          uVar30 = *(undefined4 *)(pFVar3 + 0xc);
          uVar40 = 0;
          if ((int)uVar47 < iVar34) {
            uVar40 = ~uVar47 >> 0x1f;
          }
        }
        else {
          uVar33 = USkinnedMeshComponent::GetBoneIndex
                             ((USkinnedMeshComponent *)this->owning_skeleton,*pFVar37);
          USkinnedMeshComponent::GetBoneTransform
                    ((USkinnedMeshComponent *)this->owning_skeleton,&local_168,uVar33);
          iVar34 = (this->Raw_Animation_Transforms).ArrayNum;
          uVar40 = 0;
          if ((int)uVar33 < iVar34) {
            uVar40 = ~uVar33 >> 0x1f;
          }
          if (uVar40 == 0) {
            iVar34 = 0x506109c0;
            bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            uVar40 = (uint)CONCAT71(extraout_var,bVar32);
            if (bVar32) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          pTVar41 = (TTransform<double> *)
                    ((this->Raw_Animation_Transforms).AllocatorInstance.Data +
                    (longlong)(int)uVar33 * 0x60);
          lVar49 = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                    (double)CONCAT44(uVar31 & *(uint *)((longlong)(pTVar41->Scale3D).ZW.m128d_f64 +
                                                       0xc),
                                     uVar44 & *(uint *)((pTVar41->Scale3D).ZW.m128d_f64 + 1)));
          auVar12._8_4_ = (int)lVar49;
          auVar12._0_8_ =
               -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                (double)CONCAT44(uVar35 & *(uint *)((longlong)(pTVar41->Scale3D).ZW.m128d_f64 + 4),
                                 uVar48 & *(uint *)(pTVar41->Scale3D).ZW.m128d_f64));
          auVar12._12_4_ = (int)((ulonglong)lVar49 >> 0x20);
          uVar33 = movmskpd(iVar34,auVar12);
          lVar49 = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
                    (double)CONCAT44(uVar31 & *(uint *)((longlong)(pTVar41->Scale3D).XY.m128d_f64 +
                                                       0xc),
                                     uVar44 & *(uint *)((pTVar41->Scale3D).XY.m128d_f64 + 1)));
          auVar5._8_4_ = (int)lVar49;
          auVar5._0_8_ = -(ulonglong)
                          ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
                          (double)CONCAT44(uVar35 & *(uint *)((longlong)
                                                              (pTVar41->Scale3D).XY.m128d_f64 + 4),
                                           uVar48 & *(uint *)(pTVar41->Scale3D).XY.m128d_f64));
          auVar5._12_4_ = (int)((ulonglong)lVar49 >> 0x20);
          iVar34 = movmskpd(uVar40,auVar5);
          if ((uVar33 & 0x3fffffff) == 0 && iVar34 == 0) {
            local_228.Rotation.XY.m128d_f64[1] =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
            local_228.Rotation.XY.m128d_f64[0] =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
            local_228.Rotation.ZW.m128d_f64[1] =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
            local_228.Rotation.ZW.m128d_f64[0] =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
            local_228.Translation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
            local_228.Translation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
            local_228.Scale3D.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
            local_228.Scale3D.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          }
          else {
            UE::Math::TTransform<double>::InverseFast(pTVar41,&local_228);
          }
          local_468.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_468.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_468.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_468.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_468.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_468.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_468.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_468.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_468.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_468.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_468.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_468.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_468.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_468.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_468.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_468.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_468.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_468.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&local_468,&local_228,&local_168);
          local_408.Rotation.XY.m128d_f64[0] = local_468.Rotation.XY.m128d_f64[0];
          local_408.Rotation.XY.m128d_f64[1] = local_468.Rotation.XY.m128d_f64[1];
          local_408.Rotation.ZW.m128d_f64[0] = local_468.Rotation.ZW.m128d_f64[0];
          local_408.Rotation.ZW.m128d_f64[1] = local_468.Rotation.ZW.m128d_f64[1];
          uVar40 = 0;
          if ((int)uVar47 < (this->Raw_Animation_Transforms).ArrayNum) {
            uVar40 = ~uVar47 >> 0x1f;
          }
          local_408.Translation.XY.m128d_f64[0] = local_468.Translation.XY.m128d_f64[0];
          local_408.Translation.XY.m128d_f64[1] = local_468.Translation.XY.m128d_f64[1];
          local_408.Translation.ZW.m128d_f64[0] = local_468.Translation.ZW.m128d_f64[0];
          local_408.Translation.ZW.m128d_f64[1] = local_468.Translation.ZW.m128d_f64[1];
          local_408.Scale3D.XY.m128d_f64[0] = local_468.Scale3D.XY.m128d_f64[0];
          local_408.Scale3D.XY.m128d_f64[1] = local_468.Scale3D.XY.m128d_f64[1];
          local_408.Scale3D.ZW.m128d_f64[0] = local_468.Scale3D.ZW.m128d_f64[0];
          local_408.Scale3D.ZW.m128d_f64[1] = local_468.Scale3D.ZW.m128d_f64[1];
          if ((uVar40 == 0) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_3a8.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_3a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_3a8.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_3a8.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_3a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_3a8.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_3a8.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_3a8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_3a8.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_3a8.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_3a8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_3a8.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_3a8.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_3a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_3a8.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_3a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_3a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_3a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&local_3a8,
                     (TTransform<double> *)
                     ((this->Raw_Animation_Transforms).AllocatorInstance.Data +
                     (longlong)(int)uVar47 * 0x60),&local_408);
          iVar34 = (this->control_bone_relative_transforms).ArrayNum;
          uVar40 = 0;
          if ((int)uVar47 < iVar34) {
            uVar40 = ~uVar47 >> 0x1f;
          }
          uVar58 = local_3a8.Rotation.XY.m128d_f64[0]._0_4_;
          uVar59 = local_3a8.Rotation.XY.m128d_f64[0]._4_4_;
          uVar60 = local_3a8.Rotation.XY.m128d_f64[1]._0_4_;
          uVar61 = local_3a8.Rotation.XY.m128d_f64[1]._4_4_;
          uVar62 = local_3a8.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar63 = local_3a8.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar64 = local_3a8.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar65 = local_3a8.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar54 = local_3a8.Translation.XY.m128d_f64[0]._0_4_;
          uVar55 = local_3a8.Translation.XY.m128d_f64[0]._4_4_;
          uVar56 = local_3a8.Translation.XY.m128d_f64[1]._0_4_;
          uVar57 = local_3a8.Translation.XY.m128d_f64[1]._4_4_;
          uVar66 = local_3a8.Translation.ZW.m128d_f64[0]._0_4_;
          uVar67 = local_3a8.Translation.ZW.m128d_f64[0]._4_4_;
          uVar21 = local_3a8.Translation.ZW.m128d_f64[1]._0_4_;
          uVar22 = local_3a8.Translation.ZW.m128d_f64[1]._4_4_;
          uVar23 = local_3a8.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar24 = local_3a8.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar25 = local_3a8.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar26 = local_3a8.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar27 = local_3a8.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar28 = local_3a8.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar29 = local_3a8.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar30 = local_3a8.Scale3D.ZW.m128d_f64[1]._4_4_;
        }
        pcVar42 = (char *)(longlong)iVar34;
        if (uVar40 == 0) {
          pcVar42 = "(Index >= 0) & (Index < ArrayNum)";
          bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar32) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pAVar38 = (ADragonIKPhysicsHolder *)
                  (this->control_bone_relative_transforms).AllocatorInstance.Data;
        uVar47 = uVar47 + 1;
        puVar1 = (undefined4 *)((longlong)&pAVar38->_padding_ + lVar45);
        *puVar1 = uVar58;
        puVar1[1] = uVar59;
        puVar1[2] = uVar60;
        puVar1[3] = uVar61;
        puVar1 = (undefined4 *)((longlong)&pAVar38->_padding_ + lVar45);
        *puVar1 = uVar62;
        puVar1[1] = uVar63;
        puVar1[2] = uVar64;
        puVar1[3] = uVar65;
        puVar1 = (undefined4 *)((longlong)&pAVar38->_padding_ + lVar45);
        *puVar1 = uVar54;
        puVar1[1] = uVar55;
        puVar1[2] = uVar56;
        puVar1[3] = uVar57;
        puVar1 = (undefined4 *)((longlong)&pAVar38->_padding_ + lVar45);
        *puVar1 = uVar66;
        puVar1[1] = uVar67;
        puVar1[2] = uVar21;
        puVar1[3] = uVar22;
        puVar1 = (undefined4 *)((longlong)&pAVar38->_padding_ + lVar45);
        *puVar1 = uVar23;
        puVar1[1] = uVar24;
        puVar1[2] = uVar25;
        puVar1[3] = uVar26;
        puVar1 = (undefined4 *)((longlong)&pAVar38->_padding_ + lVar45);
        *puVar1 = uVar27;
        puVar1[1] = uVar28;
        puVar1[2] = uVar29;
        puVar1[3] = uVar30;
        lVar45 = lVar45 + 0x60;
      } while ((int)uVar47 < (this->control_bone_relative_transforms).ArrayNum);
    }
  }
  if ((this->get_up_timer <= __real_3f800000) || (this->is_released != false)) goto LAB_14d35150e;
  dVar14 = (this->Body_Delta_Transform).Translation.ZW.m128d_f64[0] -
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  dVar15 = (this->Body_Delta_Transform).Translation.ZW.m128d_f64[1] -
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  dVar50 = (this->Body_Delta_Transform).Translation.XY.m128d_f64[0] -
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  dVar52 = (this->Body_Delta_Transform).Translation.XY.m128d_f64[1] -
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  local_5e8 = __real_3f1a36e2e0000000;
  lVar45 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar31,SUB84(dVar15,0) & uVar44));
  auVar6._8_4_ = (int)lVar45;
  auVar6._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar35,
                                   SUB84(dVar14,0) & uVar48));
  auVar6._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
  uVar47 = movmskpd((int)pcVar42,auVar6);
  lVar45 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar52 >> 0x20) & uVar31,SUB84(dVar52,0) & uVar44));
  auVar16._8_4_ = (int)lVar45;
  auVar16._0_8_ =
       -(ulonglong)
        (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar50 >> 0x20) & uVar35,SUB84(dVar50,0) & uVar48));
  auVar16._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
  iVar34 = movmskpd((int)pAVar38,auVar16);
  if ((uVar47 & 0x3fffffff) == 0 && iVar34 == 0) {
    dVar19 = (this->Body_Delta_Transform).Rotation.ZW.m128d_f64[0];
    dVar20 = (this->Body_Delta_Transform).Rotation.ZW.m128d_f64[1];
    dVar50 = (this->Body_Delta_Transform).Rotation.XY.m128d_f64[0];
    dVar52 = (this->Body_Delta_Transform).Rotation.XY.m128d_f64[1];
    local_5e0 = __real_3f1a36e2e0000000;
    dVar51 = dVar19 - UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    dVar53 = dVar20 - UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    dVar19 = dVar19 + UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    dVar20 = dVar20 + UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    dVar14 = dVar50 - UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    dVar15 = dVar52 - UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    dVar50 = dVar50 + UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    dVar52 = dVar52 + UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    lVar45 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar53 >> 0x20) & uVar31,SUB84(dVar53,0) & uVar44))
    ;
    auVar7._8_4_ = (int)lVar45;
    auVar7._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar51 >> 0x20) & uVar35,
                                     SUB84(dVar51,0) & uVar48));
    auVar7._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
    iVar39 = movmskpd(0,auVar7);
    lVar45 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar31,SUB84(dVar15,0) & uVar44))
    ;
    auVar8._8_4_ = (int)lVar45;
    auVar8._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar35,
                                     SUB84(dVar14,0) & uVar48));
    auVar8._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
    uVar47 = movmskpd(iVar34,auVar8);
    uVar40 = iVar39 << 2 | uVar47;
    if (uVar40 != 0) {
      lVar45 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & uVar31,SUB84(dVar20,0) & uVar44
                                ));
      auVar9._8_4_ = (int)lVar45;
      auVar9._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & uVar35,
                                       SUB84(dVar19,0) & uVar48));
      auVar9._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
      uVar40 = movmskpd(uVar40,auVar9);
      lVar45 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar52 >> 0x20) & uVar31,SUB84(dVar52,0) & uVar44
                                ));
      auVar18._8_4_ = (int)lVar45;
      auVar18._0_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar50 >> 0x20) & uVar35,SUB84(dVar50,0) & uVar48));
      auVar18._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
      uVar47 = movmskpd(uVar47,auVar18);
      if ((uVar40 & 0x3fffffff) != 0 || uVar47 != 0) goto LAB_14d3513bc;
    }
    dVar14 = (this->Body_Delta_Transform).Scale3D.ZW.m128d_f64[0] -
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    dVar15 = (this->Body_Delta_Transform).Scale3D.ZW.m128d_f64[1] -
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    dVar50 = (this->Body_Delta_Transform).Scale3D.XY.m128d_f64[0] -
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    dVar52 = (this->Body_Delta_Transform).Scale3D.XY.m128d_f64[1] -
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    local_5d8 = __real_3f1a36e2e0000000;
    lVar45 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar31,SUB84(dVar15,0) & uVar44))
    ;
    auVar10._8_4_ = (int)lVar45;
    auVar10._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar35,SUB84(dVar14,0) & uVar48));
    auVar10._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
    uVar40 = movmskpd(0,auVar10);
    lVar45 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar52 >> 0x20) & uVar31,SUB84(dVar52,0) & uVar44))
    ;
    auVar17._8_4_ = (int)lVar45;
    auVar17._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar50 >> 0x20) & uVar35,SUB84(dVar50,0) & uVar48));
    auVar17._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
    iVar34 = movmskpd(uVar47,auVar17);
    if ((uVar40 & 0x3fffffff) != 0 || iVar34 != 0) goto LAB_14d3513bc;
    pUVar43 = this->owning_skeleton;
LAB_14d35139a:
    iVar34 = this->teleport_freeze_count;
    if (9 < iVar34) {
      this->teleport_freeze_count = 0;
      iVar34 = 0;
    }
  }
  else {
LAB_14d3513bc:
    pUVar43 = this->owning_skeleton;
    local_518 = (this->Body_Delta_Transform).Translation.XY.m128d_f64[0];
    dStack_510 = (this->Body_Delta_Transform).Translation.XY.m128d_f64[1];
    local_508 = (this->Body_Delta_Transform).Translation.ZW.m128d_f64[0];
    local_500 = (double)pUVar43->_padding_;
    dStack_4f8 = (double)pUVar43->_padding_;
    local_4f0 = (double)pUVar43->_padding_;
    if (SQRT((dStack_510 - dStack_4f8) * (dStack_510 - dStack_4f8) +
             (local_518 - local_500) * (local_518 - local_500) +
             (local_508 - local_4f0) * (local_508 - local_4f0)) <= (double)this->Teleport_Distance)
    goto LAB_14d35139a;
    iVar34 = this->teleport_freeze_count;
    if (iVar34 == 0) {
      iVar34 = 1;
      this->teleport_freeze_count = 1;
    }
    if (9 < iVar34) goto LAB_14d35150e;
  }
  piVar46 = &this->teleport_freeze_count;
  if (0 < iVar34) {
    local_5c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_5c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_5b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    (**(code **)(pUVar43->_padding_ + 0x760))
              (SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0),&local_5c8,0);
    local_600 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z *
                ___xmm_3f91df46a00000003f91df46a0000000;
    local_610._8_4_ =
         SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * _UNK_150689668,0);
    local_610._0_8_ =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X *
         ___xmm_3f91df46a00000003f91df46a0000000;
    local_610._12_4_ =
         (int)((ulonglong)(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * _UNK_150689668)
              >> 0x20);
    (**(code **)(this->owning_skeleton->_padding_ + 0x8f0))(this->owning_skeleton,local_610,0);
    *piVar46 = *piVar46 + 1;
    if (*piVar46 == 5) {
      local_618 = &local_628;
      local_620 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UDragonIKPhysicsComponent::ModifyAllHandleTransforms'::__l47::<lambda_1>,void,FBodyInstance_*>
                  ::Call;
      local_628 = this;
      USkeletalMeshComponent::ForEachBodyBelow
                (this->owning_skeleton,this->Custom_Root_Bone,true,false,
                 (TFunctionRef<void___cdecl(FBodyInstance_*)> *)&local_620);
    }
  }
LAB_14d35150e:
  iVar34 = (this->Raw_Animation_Transforms).ArrayNum;
  pUVar43 = this->owning_skeleton;
  dVar14 = (double)pUVar43->_padding_;
  (this->Body_Delta_Transform).Rotation.XY.m128d_f64[0] = (double)pUVar43->_padding_;
  (this->Body_Delta_Transform).Rotation.XY.m128d_f64[1] = dVar14;
  dVar14 = (double)pUVar43->_padding_;
  (this->Body_Delta_Transform).Rotation.ZW.m128d_f64[0] = (double)pUVar43->_padding_;
  (this->Body_Delta_Transform).Rotation.ZW.m128d_f64[1] = dVar14;
  dVar14 = (double)pUVar43->_padding_;
  (this->Body_Delta_Transform).Translation.XY.m128d_f64[0] = (double)pUVar43->_padding_;
  (this->Body_Delta_Transform).Translation.XY.m128d_f64[1] = dVar14;
  dVar14 = (double)pUVar43->_padding_;
  (this->Body_Delta_Transform).Translation.ZW.m128d_f64[0] = (double)pUVar43->_padding_;
  (this->Body_Delta_Transform).Translation.ZW.m128d_f64[1] = dVar14;
  dVar14 = (double)pUVar43->_padding_;
  (this->Body_Delta_Transform).Scale3D.XY.m128d_f64[0] = (double)pUVar43->_padding_;
  (this->Body_Delta_Transform).Scale3D.XY.m128d_f64[1] = dVar14;
  dVar14 = (double)pUVar43->_padding_;
  (this->Body_Delta_Transform).Scale3D.ZW.m128d_f64[0] = (double)pUVar43->_padding_;
  (this->Body_Delta_Transform).Scale3D.ZW.m128d_f64[1] = dVar14;
  if ((0 < iVar34) && (0 < (this->custom_override_bool).ArrayNum)) {
    uVar48 = 0;
    pAVar38 = this->handler_holder;
    if (0 < (pAVar38->physics_handle_array).ArrayNum) {
      lVar49 = 0;
      lVar45 = 0;
      do {
        uVar44 = ~uVar48 >> 0x1f;
        uVar35 = 0;
        if ((int)uVar48 < (pAVar38->physics_handle_array).ArrayNum) {
          uVar35 = uVar44;
        }
        if ((uVar35 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(longlong *)((pAVar38->physics_handle_array).AllocatorInstance.Data + lVar49 * 8) != 0)
        {
          uVar35 = 0;
          if ((int)uVar48 < (this->Raw_Animation_Transforms).ArrayNum) {
            uVar35 = uVar44;
          }
          if ((uVar35 == 0) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (this->Raw_Animation_Transforms).AllocatorInstance.Data;
          local_488 = *(undefined8 *)(pFVar3 + lVar45 + 0x40);
          uStack_480 = *(undefined8 *)(pFVar3 + lVar45 + 0x40 + 8);
          local_478 = *(undefined8 *)(pFVar3 + lVar45 + 0x50);
          uStack_470 = *(undefined8 *)(pFVar3 + lVar45 + 0x50 + 8);
          pFVar2 = pFVar3 + lVar45;
          uVar58 = *(undefined4 *)pFVar2;
          uVar59 = *(undefined4 *)(pFVar2 + 4);
          uVar60 = *(undefined4 *)(pFVar2 + 8);
          uVar61 = *(undefined4 *)(pFVar2 + 0xc);
          pFVar2 = pFVar3 + lVar45 + 0x10;
          uVar62 = *(undefined4 *)pFVar2;
          uVar63 = *(undefined4 *)(pFVar2 + 4);
          uVar64 = *(undefined4 *)(pFVar2 + 8);
          uVar65 = *(undefined4 *)(pFVar2 + 0xc);
          pFVar2 = pFVar3 + lVar45 + 0x20;
          uVar54 = *(undefined4 *)pFVar2;
          uVar55 = *(undefined4 *)(pFVar2 + 4);
          uVar56 = *(undefined4 *)(pFVar2 + 8);
          uVar57 = *(undefined4 *)(pFVar2 + 0xc);
          uVar66 = *(undefined4 *)(pFVar3 + lVar45 + 0x30);
          uVar67 = *(undefined4 *)(pFVar3 + lVar45 + 0x30 + 4);
          uVar35 = 0;
          if ((int)uVar48 < (this->custom_override_bool).ArrayNum) {
            uVar35 = uVar44;
          }
          if ((uVar35 == 0) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((this->custom_override_bool).AllocatorInstance.Data[lVar49] !=
              (FScriptContainerElement)0x0) {
            uVar35 = 0;
            if ((int)uVar48 < (this->custom_override_transforms).ArrayNum) {
              uVar35 = uVar44;
            }
            if ((uVar35 == 0) &&
               (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar32)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar3 = (this->custom_override_transforms).AllocatorInstance.Data;
            local_488 = *(undefined8 *)(pFVar3 + lVar45 + 0x40);
            uStack_480 = *(undefined8 *)(pFVar3 + lVar45 + 0x40 + 8);
            local_478 = *(undefined8 *)(pFVar3 + lVar45 + 0x50);
            uStack_470 = *(undefined8 *)(pFVar3 + lVar45 + 0x50 + 8);
            pFVar2 = pFVar3 + lVar45;
            uVar58 = *(undefined4 *)pFVar2;
            uVar59 = *(undefined4 *)(pFVar2 + 4);
            uVar60 = *(undefined4 *)(pFVar2 + 8);
            uVar61 = *(undefined4 *)(pFVar2 + 0xc);
            pFVar2 = pFVar3 + lVar45 + 0x10;
            uVar62 = *(undefined4 *)pFVar2;
            uVar63 = *(undefined4 *)(pFVar2 + 4);
            uVar64 = *(undefined4 *)(pFVar2 + 8);
            uVar65 = *(undefined4 *)(pFVar2 + 0xc);
            pFVar2 = pFVar3 + lVar45 + 0x20;
            uVar54 = *(undefined4 *)pFVar2;
            uVar55 = *(undefined4 *)(pFVar2 + 4);
            uVar56 = *(undefined4 *)(pFVar2 + 8);
            uVar57 = *(undefined4 *)(pFVar2 + 0xc);
            uVar66 = *(undefined4 *)(pFVar3 + lVar45 + 0x30);
            uVar67 = *(undefined4 *)(pFVar3 + lVar45 + 0x30 + 4);
          }
          if ((this->parent_child_ragdoll_state != false) || (this->active_ragdoll != false)) {
            uVar35 = 0;
            if ((int)uVar48 < (this->control_bone_relative_transforms).ArrayNum) {
              uVar35 = uVar44;
            }
            if ((uVar35 == 0) &&
               (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar32)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar3 = (this->control_bone_relative_transforms).AllocatorInstance.Data;
            local_488 = *(undefined8 *)(pFVar3 + lVar45 + 0x40);
            uStack_480 = *(undefined8 *)(pFVar3 + lVar45 + 0x40 + 8);
            local_478 = *(undefined8 *)(pFVar3 + lVar45 + 0x50);
            uStack_470 = *(undefined8 *)(pFVar3 + lVar45 + 0x50 + 8);
            pFVar2 = pFVar3 + lVar45;
            uVar58 = *(undefined4 *)pFVar2;
            uVar59 = *(undefined4 *)(pFVar2 + 4);
            uVar60 = *(undefined4 *)(pFVar2 + 8);
            uVar61 = *(undefined4 *)(pFVar2 + 0xc);
            pFVar2 = pFVar3 + lVar45 + 0x10;
            uVar62 = *(undefined4 *)pFVar2;
            uVar63 = *(undefined4 *)(pFVar2 + 4);
            uVar64 = *(undefined4 *)(pFVar2 + 8);
            uVar65 = *(undefined4 *)(pFVar2 + 0xc);
            pFVar2 = pFVar3 + lVar45 + 0x20;
            uVar54 = *(undefined4 *)pFVar2;
            uVar55 = *(undefined4 *)(pFVar2 + 4);
            uVar56 = *(undefined4 *)(pFVar2 + 8);
            uVar57 = *(undefined4 *)(pFVar2 + 0xc);
            uVar66 = *(undefined4 *)(pFVar3 + lVar45 + 0x30);
            uVar67 = *(undefined4 *)(pFVar3 + lVar45 + 0x30 + 4);
          }
          pAVar38 = this->handler_holder;
          uVar35 = 0;
          if ((int)uVar48 < (pAVar38->physics_handle_array).ArrayNum) {
            uVar35 = uVar44;
          }
          if ((uVar35 == 0) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          this_00 = *(UPhysicsHandleComponent **)
                     ((pAVar38->physics_handle_array).AllocatorInstance.Data + lVar49 * 8);
          local_538.X._0_4_ = uVar58;
          local_538.X._4_4_ = uVar59;
          local_538.Y._0_4_ = uVar60;
          local_538.Y._4_4_ = uVar61;
          local_538.Z._0_4_ = uVar62;
          local_538.Z._4_4_ = uVar63;
          local_538.W._0_4_ = uVar64;
          local_538.W._4_4_ = uVar65;
          UE::Math::TQuat<double>::Rotator(&local_538,&local_590);
          local_598 = (double)CONCAT44(uVar67,uVar66);
          local_578.Pitch = local_590.Pitch;
          local_578.Yaw = local_590.Yaw;
          local_578.Roll = local_590.Roll;
          local_5a8 = uVar54;
          uStack_5a4 = uVar55;
          uStack_5a0 = uVar56;
          uStack_59c = uVar57;
          local_558._0_4_ = uVar54;
          local_558._4_4_ = uVar55;
          local_558._8_4_ = uVar56;
          local_558._12_4_ = uVar57;
          local_558._s_0.Z = local_598;
          local_4d8 = local_598;
          UPhysicsHandleComponent::SetTargetLocationAndRotation
                    (this_00,(TVector<double> *)&local_558._s_0,&local_578);
        }
        pAVar38 = this->handler_holder;
        uVar48 = uVar48 + 1;
        lVar49 = lVar49 + 1;
        lVar45 = lVar45 + 0x60;
      } while ((int)uVar48 < (pAVar38->physics_handle_array).ArrayNum);
    }
  }
  return;
}

// Modify_Reset_Bone_Info @ 14d351d90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Modify_Reset_Bone_Info
          (UDragonIKPhysicsComponent *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  ADragonIKPhysicsHolder *pAVar5;
  UActorComponent *this_00;
  longlong *plVar6;
  code *pcVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FName *pFVar12;
  UPhysicsHandleComponent *pUVar13;
  UWorld *pUVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  float fVar24;
  FNameEntryId local_res18;
  uint uStackX_1c;
  ulonglong local_res20;
  FName local_98;
  FName local_90;
  FString local_88 [4];
  
  uVar17 = 0;
  pTVar2 = &this->individual_bone_selection;
  if (pTVar2 != param_1) {
    iVar10 = param_1->ArrayNum;
    piVar1 = &(this->individual_bone_selection).ArrayMax;
    pFVar3 = (param_1->AllocatorInstance).Data;
    (this->individual_bone_selection).ArrayNum = iVar10;
    if ((iVar10 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar10,*piVar1,&pTVar2->AllocatorInstance,iVar10,piVar1);
      if (iVar10 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar3,(longlong)iVar10 << 3);
      }
    }
  }
  if (((this->owning_skeleton == (USkeletalMeshComponent *)0x0) ||
      (this->handler_holder == (ADragonIKPhysicsHolder *)0x0)) ||
     (iVar10 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)this->owning_skeleton),
     fVar8 = __real_3f800000, iVar10 < 1)) {
LAB_14d352832:
    ReGrabAllHandles(this,false);
    pFVar3 = (param_1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    return;
  }
  local_res20 = 0;
  uVar20 = uVar17;
  uVar21 = uVar17;
LAB_14d351e90:
  ::FString::FString(local_88,"Physics Hanlde Comp ");
  uVar18 = (uint)uVar17;
  ::FString::AppendInt(local_88,uVar18);
  uVar11 = 0;
  uVar16 = (int)local_88[0].Data._8_8_ - 1;
  if ((int)local_88[0].Data._8_8_ == 0) {
    uVar16 = uVar11;
  }
  pFVar12 = ::FName::FName(&local_90,uVar16,(wchar_t *)local_88[0].Data.AllocatorInstance.Data,
                           FNAME_Add);
  FVar4 = *pFVar12;
  USkinnedMeshComponent::GetBoneName
            ((USkinnedMeshComponent *)this->owning_skeleton,(int)&local_res18);
  uVar22 = ~uVar18 >> 0x1f;
  uVar16 = uVar11;
  if ((int)uVar18 < (this->Grab_Handle_Tasks_Queue).ArrayNum) {
    uVar16 = uVar22;
  }
  if ((uVar16 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  (this->Grab_Handle_Tasks_Queue).AllocatorInstance.Data[uVar21] = (FScriptContainerElement)0x0;
  uVar16 = uVar11;
  if ((int)uVar18 < (this->Remap_Physics_States_Queue).ArrayNum) {
    uVar16 = uVar22;
  }
  if ((uVar16 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  (this->Remap_Physics_States_Queue).AllocatorInstance.Data[uVar21] = (FScriptContainerElement)0x0;
  pFVar15 = (this->individual_bone_selection).AllocatorInstance.Data;
  pFVar3 = pFVar15 + (longlong)(this->individual_bone_selection).ArrayNum * 8;
  for (; pFVar15 != pFVar3; pFVar15 = pFVar15 + 8) {
    if (*(longlong *)pFVar15 == CONCAT44(uStackX_1c,local_res18.Value)) {
      pAVar5 = this->handler_holder;
      uVar16 = 0;
      if ((int)uVar18 < (pAVar5->physics_handle_array).ArrayNum) {
        uVar16 = uVar22;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(longlong *)((pAVar5->physics_handle_array).AllocatorInstance.Data + uVar20) != 0)
      goto LAB_14d3527d3;
      uVar16 = 0;
      lVar19 = 0;
      fVar24 = fVar8;
      if ((this->Override_Handle_Strength_Multiplier).ArrayNum < 1) goto LAB_14d352335;
      lVar23 = 0;
      goto LAB_14d352240;
    }
  }
  pAVar5 = this->handler_holder;
  uVar16 = uVar11;
  if ((int)uVar18 < (pAVar5->physics_handle_array).ArrayNum) {
    uVar16 = uVar22;
  }
  if ((uVar16 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(longlong *)((pAVar5->physics_handle_array).AllocatorInstance.Data + uVar21 * 8) != 0) {
    pAVar5 = this->handler_holder;
    uVar16 = uVar11;
    if ((int)uVar18 < (pAVar5->physics_handle_array).ArrayNum) {
      uVar16 = uVar22;
    }
    if ((uVar16 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (**(code **)(**(longlong **)((pAVar5->physics_handle_array).AllocatorInstance.Data + uVar21 * 8)
                + 0x500))();
    pAVar5 = this->handler_holder;
    uVar16 = uVar11;
    if ((int)uVar18 < (pAVar5->physics_handle_array).ArrayNum) {
      uVar16 = uVar22;
    }
    if ((uVar16 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    UActorComponent::UnregisterComponent
              (*(UActorComponent **)
                ((pAVar5->physics_handle_array).AllocatorInstance.Data + uVar21 * 8));
    pAVar5 = this->handler_holder;
    uVar16 = uVar11;
    if ((int)uVar18 < (pAVar5->physics_handle_array).ArrayNum) {
      uVar16 = uVar22;
    }
    if ((uVar16 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (**(code **)(**(longlong **)((pAVar5->physics_handle_array).AllocatorInstance.Data + uVar21 * 8)
                + 0x4a0))();
    pAVar5 = this->handler_holder;
    if ((int)uVar18 < (pAVar5->physics_handle_array).ArrayNum) {
      uVar11 = uVar22;
    }
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(undefined8 *)((pAVar5->physics_handle_array).AllocatorInstance.Data + uVar21 * 8) = 0;
  }
  goto LAB_14d3527d3;
  while( true ) {
    uVar16 = uVar16 + 1;
    lVar19 = lVar19 + 1;
    lVar23 = lVar23 + 0xc;
    if ((this->Override_Handle_Strength_Multiplier).ArrayNum <= (int)uVar16) break;
LAB_14d352240:
    uVar11 = 0;
    if ((int)uVar16 < (this->Override_Handle_Strength_Multiplier).ArrayNum) {
      uVar11 = ~uVar16 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar3 = (this->Override_Handle_Strength_Multiplier).AllocatorInstance.Data;
    if ((*(uint *)(pFVar3 + lVar23) == local_res18.Value) &&
       (*(uint *)(pFVar3 + lVar23 + 4) == uStackX_1c)) {
      uVar11 = 0;
      if ((int)uVar16 < (this->Override_Handle_Strength_Multiplier).ArrayNum) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      fVar24 = *(float *)((this->Override_Handle_Strength_Multiplier).AllocatorInstance.Data +
                         lVar19 * 0xc + 8);
      break;
    }
  }
LAB_14d352335:
  pUVar13 = NewObject<UPhysicsHandleComponent>
                      ((UObject *)this->handler_holder,FVar4,RF_NoFlags,(UObject *)0x0,false,
                       (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  pAVar5 = this->handler_holder;
  uVar16 = 0;
  if ((int)uVar18 < (pAVar5->physics_handle_array).ArrayNum) {
    uVar16 = uVar22;
  }
  if ((uVar16 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  *(UPhysicsHandleComponent **)((pAVar5->physics_handle_array).AllocatorInstance.Data + uVar21 * 8)
       = pUVar13;
  pAVar5 = this->handler_holder;
  uVar11 = 0;
  uVar16 = uVar11;
  if ((int)uVar18 < (pAVar5->physics_handle_array).ArrayNum) {
    uVar16 = uVar22;
  }
  if ((uVar16 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((*(byte *)(*(longlong *)((pAVar5->physics_handle_array).AllocatorInstance.Data + uVar21 * 8) +
                0x98) & 1) == 0) {
    pAVar5 = this->handler_holder;
    uVar16 = uVar11;
    if ((int)uVar18 < (pAVar5->physics_handle_array).ArrayNum) {
      uVar16 = uVar22;
    }
    if ((uVar16 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this_00 = *(UActorComponent **)
               ((pAVar5->physics_handle_array).AllocatorInstance.Data + uVar21 * 8);
    pUVar14 = AActor::GetWorld((AActor *)this->_padding_);
    UActorComponent::RegisterComponentWithWorld(this_00,pUVar14,(FRegisterComponentContext *)0x0);
    pAVar5 = this->handler_holder;
    uVar16 = uVar11;
    if ((int)uVar18 < (pAVar5->physics_handle_array).ArrayNum) {
      uVar16 = uVar22;
    }
    if ((uVar16 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    UActorComponent::RegisterComponent
              (*(UActorComponent **)
                ((pAVar5->physics_handle_array).AllocatorInstance.Data + uVar21 * 8));
  }
  pAVar5 = this->handler_holder;
  iVar10 = this->Linear_Damp;
  if ((int)uVar18 < (pAVar5->physics_handle_array).ArrayNum) {
    uVar11 = uVar22;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar11 = 0;
  *(float *)(*(longlong *)((pAVar5->physics_handle_array).AllocatorInstance.Data + uVar21 * 8) +
            0xd4) = (float)iVar10 * fVar24;
  pAVar5 = this->handler_holder;
  iVar10 = this->Angular_Damp;
  uVar16 = uVar11;
  if ((int)uVar18 < (pAVar5->physics_handle_array).ArrayNum) {
    uVar16 = uVar22;
  }
  if ((uVar16 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  *(float *)(*(longlong *)((pAVar5->physics_handle_array).AllocatorInstance.Data + uVar21 * 8) +
            0xdc) = (float)iVar10 * fVar24;
  pAVar5 = this->handler_holder;
  iVar10 = this->Linear_Strength;
  uVar16 = uVar11;
  if ((int)uVar18 < (pAVar5->physics_handle_array).ArrayNum) {
    uVar16 = uVar22;
  }
  if ((uVar16 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  *(float *)(*(longlong *)((pAVar5->physics_handle_array).AllocatorInstance.Data + uVar21 * 8) +
            0xd8) = (float)iVar10 * fVar24;
  pAVar5 = this->handler_holder;
  iVar10 = this->Angular_Strength;
  uVar16 = uVar11;
  if ((int)uVar18 < (pAVar5->physics_handle_array).ArrayNum) {
    uVar16 = uVar22;
  }
  if ((uVar16 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  *(float *)(*(longlong *)((pAVar5->physics_handle_array).AllocatorInstance.Data + uVar21 * 8) +
            0xe0) = (float)iVar10 * fVar24;
  pAVar5 = this->handler_holder;
  if ((int)uVar18 < (pAVar5->physics_handle_array).ArrayNum) {
    uVar11 = uVar22;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  plVar6 = *(longlong **)((pAVar5->physics_handle_array).AllocatorInstance.Data + uVar21 * 8);
  (**(code **)(*plVar6 + 0x2b8))(plVar6,0);
  pAVar5 = this->handler_holder;
  uVar16 = 0;
  if ((int)uVar18 < (pAVar5->physics_handle_array).ArrayNum) {
    uVar16 = uVar22;
  }
  if ((uVar16 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  AActor::AddInstanceComponent
            ((AActor *)pAVar5,
             *(UActorComponent **)
              ((pAVar5->physics_handle_array).AllocatorInstance.Data + uVar21 * 8));
  ::FName::FName(&local_98,"None");
  uVar20 = local_res20;
  if (((this->Root_Clamping_Bone).ComparisonIndex.Value == local_98.ComparisonIndex.Value) &&
     ((this->Root_Clamping_Bone).Number == local_98.Number)) {
    FVar4.Number = uStackX_1c;
    FVar4.ComparisonIndex.Value = local_res18.Value;
    this->Root_Clamping_Bone = FVar4;
  }
LAB_14d3527d3:
  if (local_88[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88[0].Data.AllocatorInstance.Data);
  }
  uVar20 = uVar20 + 8;
  uVar17 = (ulonglong)(uVar18 + 1);
  uVar21 = uVar21 + 1;
  local_res20 = uVar20;
  iVar10 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)this->owning_skeleton);
  if (iVar10 <= (int)(uVar18 + 1)) goto LAB_14d352832;
  goto LAB_14d351e90;
}

// Multicast_CacheSimulationStates_Implementation @ 14d3528b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Multicast_CacheSimulationStates_Implementation
          (UDragonIKPhysicsComponent *this)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 local_res8;
  
  uVar6 = 0;
  if (0 < (this->Bodies_Physics_Hit_Bools).ArrayNum) {
    lVar7 = 0;
    do {
      USkinnedMeshComponent::GetBoneName
                ((USkinnedMeshComponent *)this->owning_skeleton,(int)&local_res8);
      cVar3 = (**(code **)(this->owning_skeleton->_padding_ + 0x4f8))
                        (this->owning_skeleton,local_res8);
      iVar1 = (this->Physics_States).ArrayNum;
      if (cVar3 == '\0') {
        uVar5 = 0;
        if ((int)uVar6 < iVar1) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (this->Physics_States).AllocatorInstance.Data[lVar7] = (FScriptContainerElement)0x0;
      }
      else {
        uVar5 = 0;
        if ((int)uVar6 < iVar1) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (this->Physics_States).AllocatorInstance.Data[lVar7] = (FScriptContainerElement)0x1;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 1;
    } while ((int)uVar6 < (this->Bodies_Physics_Hit_Bools).ArrayNum);
  }
  return;
}

// Multicast_CacheSimulationStates_Validate @ 14d3529e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDragonIKPhysicsComponent::Multicast_CacheSimulationStates_Validate(UDragonIKPhysicsComponent *this)

{
  return true;
}

// Multicast_Control_Bone_Handle_Implementation @ 14d3529f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Multicast_Control_Bone_Handle_Implementation
          (UDragonIKPhysicsComponent *this,FName param_1,TTransform<double> *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  
  dVar3 = (param_2->Rotation).XY.m128d_f64[0];
  dVar4 = (param_2->Rotation).XY.m128d_f64[1];
  dVar5 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar6 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar7 = (param_2->Translation).XY.m128d_f64[0];
  dVar8 = (param_2->Translation).XY.m128d_f64[1];
  dVar9 = (param_2->Translation).ZW.m128d_f64[0];
  dVar10 = (param_2->Translation).ZW.m128d_f64[1];
  dVar11 = (param_2->Scale3D).XY.m128d_f64[0];
  dVar12 = (param_2->Scale3D).XY.m128d_f64[1];
  dVar13 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar14 = (param_2->Scale3D).ZW.m128d_f64[1];
  if ((this->handler_holder != (ADragonIKPhysicsHolder *)0x0) &&
     (this->owning_skeleton != (USkeletalMeshComponent *)0x0)) {
    uVar16 = USkinnedMeshComponent::GetBoneIndex
                       ((USkinnedMeshComponent *)this->owning_skeleton,param_1);
    if (-1 < (int)uVar16) {
      uVar17 = 0;
      if ((int)uVar16 < (this->custom_override_bool).ArrayNum) {
        uVar17 = ~uVar16 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (this->custom_override_bool).AllocatorInstance.Data[(int)uVar16] =
           (FScriptContainerElement)param_3;
      uVar17 = 0;
      if ((int)uVar16 < (this->custom_override_transforms).ArrayNum) {
        uVar17 = ~uVar16 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->custom_override_transforms).AllocatorInstance.Data;
      lVar18 = (longlong)(int)uVar16 * 0x60;
      *(double *)(pFVar1 + lVar18) = dVar3;
      *(double *)(pFVar1 + lVar18 + 8) = dVar4;
      *(double *)(pFVar1 + lVar18 + 0x10) = dVar5;
      *(double *)(pFVar1 + lVar18 + 0x10 + 8) = dVar6;
      *(double *)(pFVar1 + lVar18 + 0x20) = dVar7;
      *(double *)(pFVar1 + lVar18 + 0x20 + 8) = dVar8;
      *(double *)(pFVar1 + lVar18 + 0x30) = dVar9;
      *(double *)(pFVar1 + lVar18 + 0x30 + 8) = dVar10;
      *(double *)(pFVar1 + lVar18 + 0x40) = dVar11;
      *(double *)(pFVar1 + lVar18 + 0x40 + 8) = dVar12;
      *(double *)(pFVar1 + lVar18 + 0x50) = dVar13;
      *(double *)(pFVar1 + lVar18 + 0x50 + 8) = dVar14;
    }
  }
  return;
}

// Multicast_Control_Bone_Handle_Validate @ 14d352ba0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDragonIKPhysicsComponent::Multicast_Control_Bone_Handle_Validate
          (UDragonIKPhysicsComponent *this,FName param_1,TTransform<double> *param_2,bool param_3)

{
  return true;
}

// Multicast_DragonIKSimulatePhysics_Implementation @ 14d352c80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Multicast_DragonIKSimulatePhysics_Implementation
          (UDragonIKPhysicsComponent *this,USkeletalMeshComponent *param_1,FName param_2,
          bool param_3)

{
  FName local_res18 [2];
  
  local_res18[0] = param_2;
  USkeletalMeshComponent::SetAllBodiesBelowSimulatePhysics(param_1,local_res18,true,param_3);
  return;
}

// Multicast_DragonIKSimulatePhysics_Validate @ 14d352cb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDragonIKPhysicsComponent::Multicast_DragonIKSimulatePhysics_Validate
          (UDragonIKPhysicsComponent *this,USkeletalMeshComponent *param_1,FName param_2,
          bool param_3)

{
  return true;
}

// Multicast_FirstTimeInitialization_Implementation @ 14d352de0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Multicast_FirstTimeInitialization_Implementation
          (UDragonIKPhysicsComponent *this,USkeletalMeshComponent *param_1)

{
  if ((param_1 != (USkeletalMeshComponent *)0x0) &&
     (this->owning_skeleton == (USkeletalMeshComponent *)0x0)) {
    SetSkeletonInput(this,param_1);
    (**(code **)(param_1->_padding_ + 0x780))(param_1,3);
    CreateAllHandles(this);
    GrabAllHandles(this);
  }
  return;
}

// Multicast_FirstTimeInitialization_Validate @ 14d352e50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDragonIKPhysicsComponent::Multicast_FirstTimeInitialization_Validate
          (UDragonIKPhysicsComponent *this,USkeletalMeshComponent *param_1)

{
  return true;
}

// Multicast_Modify_Reset_Bone_Info_Implementation @ 14d353080

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Multicast_Modify_Reset_Bone_Info_Implementation
          (UDragonIKPhysicsComponent *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *_Src;
  longlong lVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.ArrayNum = param_1->ArrayNum;
  lVar1 = (longlong)local_18.ArrayNum;
  _Src = (param_1->AllocatorInstance).Data;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  Modify_Reset_Bone_Info(this,&local_18);
  return;
}

// Multicast_Modify_Reset_Bone_Info_Validate @ 14d353120

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDragonIKPhysicsComponent::Multicast_Modify_Reset_Bone_Info_Validate
          (UDragonIKPhysicsComponent *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  return true;
}

// Multicast_OnHitCallback_Implementation @ 14d353130

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Multicast_OnHitCallback_Implementation
          (UDragonIKPhysicsComponent *this,FName param_1)

{
  FName local_res18 [2];
  TVector<double> local_148;
  undefined4 uStack_130;
  undefined1 uStack_12c;
  undefined2 uStack_12b;
  undefined1 uStack_129;
  TVector<double> local_128;
  FHitResult local_108;
  
  ::FName::FName(local_res18,"");
  memset(&local_108,0,0x100);
  uStack_130 = 0xffffffff;
  uStack_12b = 0;
  uStack_129 = 0;
  local_148.field0_0x0._s_0.Z = 0.0;
  uStack_12c = 0;
  local_108.Time = 1.0;
  local_108.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_108.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_108.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_108.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_108.MyItem = -1;
  local_108.HitObjectHandle.InstanceIndex = -1;
  local_108.HitObjectHandle.ResolutionStatus = Invalid;
  local_108.HitObjectHandle._29_3_ = 0;
  local_108.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  OnHitCallback(this,&local_108,param_1,&local_148,&local_128,local_res18);
  return;
}

// Multicast_OnHitCallback_Validate @ 14d353200

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDragonIKPhysicsComponent::Multicast_OnHitCallback_Validate
          (UDragonIKPhysicsComponent *this,FName param_1)

{
  return true;
}

// Multicast_PerformActiveRagdoll_Implementation @ 14d353210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Multicast_PerformActiveRagdoll_Implementation
          (UDragonIKPhysicsComponent *this,float param_1)

{
  ADragonIKPhysicsHolder *pAVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator> *pTVar5;
  UPrimitiveComponent *pUVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  undefined1 auStackY_e8 [32];
  UDragonIKPhysicsComponent *pUStack_b8;
  code *pcStack_b0;
  UDragonIKPhysicsComponent **ppUStack_a8;
  undefined1 auStack_98 [72];
  undefined4 uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  this->active_ragdoll = true;
  if (this->handler_holder == (ADragonIKPhysicsHolder *)0x0) {
    this->slight_delay_counter = 0.0;
  }
  else if (this->owning_skeleton == (USkeletalMeshComponent *)0x0) {
    this->slight_delay_counter = 0.0;
  }
  else {
    USkeletalMeshComponent::SetAllBodiesBelowSimulatePhysics
              (this->owning_skeleton,&this->Root_Clamping_Bone,true,true);
    if (this->handler_holder == (ADragonIKPhysicsHolder *)0x0) {
      this->slight_delay_counter = 0.0;
    }
    else {
      pTVar5 = (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                *)MapParentChildRelationships
                            (this,(TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                                   *)auStack_98,&this->individual_bone_selection);
      if ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
           *)&this->active_ragdoll_tmap != pTVar5) {
        TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
        Move<TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>_>
                  ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                    *)&this->active_ragdoll_tmap,pTVar5);
      }
      uStack_50 = 0;
      if ((void *)auStack_98._64_8_ != (void *)0x0) {
        FMemory::Free((void *)auStack_98._64_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)auStack_98);
      uVar4 = USkinnedMeshComponent::GetBoneIndex
                        ((USkinnedMeshComponent *)this->owning_skeleton,this->Custom_Root_Bone);
      lVar8 = (longlong)(int)uVar4;
      uVar9 = ~uVar4 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar4 < (this->Grab_Handle_Locks).ArrayNum) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((this->Grab_Handle_Locks).AllocatorInstance.Data[lVar8] == (FScriptContainerElement)0x1) {
        pAVar1 = this->handler_holder;
        uVar7 = 0;
        if ((int)uVar4 < (pAVar1->physics_handle_array).ArrayNum) {
          uVar7 = uVar9;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(longlong *)((pAVar1->physics_handle_array).AllocatorInstance.Data + lVar8 * 8) != 0) {
          pAVar1 = this->handler_holder;
          uVar7 = 0;
          if ((int)uVar4 < (pAVar1->physics_handle_array).ArrayNum) {
            uVar7 = uVar9;
          }
          if ((uVar7 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pUVar6 = UPhysicsHandleComponent::GetGrabbedComponent
                             (*(UPhysicsHandleComponent **)
                               ((pAVar1->physics_handle_array).AllocatorInstance.Data + lVar8 * 8));
          if (pUVar6 != (UPrimitiveComponent *)0x0) {
            pAVar1 = this->handler_holder;
            uVar7 = 0;
            if ((int)uVar4 < (pAVar1->physics_handle_array).ArrayNum) {
              uVar7 = uVar9;
            }
            if ((uVar7 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            (**(code **)(**(longlong **)
                           ((pAVar1->physics_handle_array).AllocatorInstance.Data + lVar8 * 8) +
                        0x500))();
            uVar7 = 0;
            if ((int)uVar4 < (this->Grab_Handle_Locks).ArrayNum) {
              uVar7 = uVar9;
            }
            if ((uVar7 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            (this->Grab_Handle_Locks).AllocatorInstance.Data[lVar8] = (FScriptContainerElement)0x0;
          }
        }
      }
      this->is_released = true;
      fVar10 = (float)(**(code **)(this->owning_skeleton->_padding_ + 0x980))();
      this->saved_mass_kg = fVar10;
      (**(code **)(this->owning_skeleton->_padding_ + 0x978))
                (this->owning_skeleton,this->Root_Clamping_Bone,param_1);
      ppUStack_a8 = &pUStack_b8;
      pcStack_b0 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UDragonIKPhysicsComponent::PerformActiveRagdoll'::__l8::<lambda_1>,void,FBodyInstance_*>
                   ::Call;
      pUStack_b8 = this;
      USkeletalMeshComponent::ForEachBodyBelow
                (this->owning_skeleton,this->Root_Clamping_Bone,true,false,
                 (TFunctionRef<void___cdecl(FBodyInstance_*)> *)&pcStack_b0);
      this->slight_delay_counter = 0.0;
    }
  }
  return;
}

// Multicast_PerformActiveRagdoll_Validate @ 14d353220

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDragonIKPhysicsComponent::Multicast_PerformActiveRagdoll_Validate
          (UDragonIKPhysicsComponent *this,float param_1)

{
  return true;
}

// Multicast_ReGrabAllHandles_Implementation @ 14d353230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Multicast_ReGrabAllHandles_Implementation
          (UDragonIKPhysicsComponent *this,bool param_1)

{
  FScriptContainerElement FVar1;
  int iVar2;
  USkeletalMeshComponent *pUVar3;
  ADragonIKPhysicsHolder *pAVar4;
  UPhysicsHandleComponent *this_00;
  bool bVar5;
  code *pcVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  FName FVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  float fVar22;
  undefined1 auStackY_218 [32];
  longlong lStack_1e0;
  longlong lStack_1d8;
  int iStack_1d0;
  int iStack_1cc;
  undefined8 uStack_1c8;
  FName FStack_1c0;
  UDragonIKPhysicsComponent *pUStack_1b8;
  int iStack_1b0;
  code *pcStack_1a8;
  UDragonIKPhysicsComponent **ppUStack_1a0;
  undefined1 auStack_198 [8];
  TRotator<double> TStack_190;
  double dStack_178;
  double dStack_170;
  double dStack_168;
  TRotator<double> TStack_158;
  TVector<double>_u_0 TStack_138;
  TQuat<double> TStack_118;
  double dStack_e8;
  TTransform<double> TStack_d8;
  ulonglong uStack_78;
  
  uStack_78 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pUVar3 = this->owning_skeleton;
  if ((pUVar3 != (USkeletalMeshComponent *)0x0) &&
     (this->handler_holder != (ADragonIKPhysicsHolder *)0x0)) {
    (**(code **)(pUVar3->_padding_ + 0x978))(pUVar3,this->Root_Clamping_Bone,this->saved_mass_kg);
    fVar7 = __real_3f800000;
    bVar13 = __real_3f800000 != this->largest_blend_value;
    bVar5 = this->largest_blend_value <= __real_3f800000;
    this->active_ragdoll = false;
    if ((bVar5 && bVar13) &&
       ((this->use_auto_blending_logic != false && (this->is_released == false)))) {
      this->Need_To_Remap_PhysicsStates = true;
    }
    uVar18 = 0;
    if (0 < (this->handler_holder->physics_handle_array).ArrayNum) {
      lStack_1d8 = 0;
      lStack_1e0 = 0;
      do {
        uVar19 = ~uVar18 >> 0x1f;
        uVar17 = 0;
        if ((int)uVar18 < (this->Autoblend_Reverse_Bools).ArrayNum) {
          uVar17 = uVar19;
        }
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (this->Autoblend_Reverse_Bools).AllocatorInstance.Data[lStack_1e0] =
             (FScriptContainerElement)0x0;
        uVar17 = 0;
        if ((int)uVar18 < (this->Bodies_Physics_Blend).ArrayNum) {
          uVar17 = uVar19;
        }
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)((this->Bodies_Physics_Blend).AllocatorInstance.Data + lStack_1e0 * 4) =
             0x3f800000;
        pAVar4 = this->handler_holder;
        uVar17 = 0;
        if ((int)uVar18 < (pAVar4->physics_handle_array).ArrayNum) {
          uVar17 = uVar19;
        }
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(longlong *)((pAVar4->physics_handle_array).AllocatorInstance.Data + lStack_1d8) != 0)
        {
          if (this->Need_To_Remap_PhysicsStates == false) {
            USkinnedMeshComponent::GetBoneTransform
                      ((USkinnedMeshComponent *)this->owning_skeleton,&TStack_d8,uVar18);
            USkinnedMeshComponent::GetBoneName
                      ((USkinnedMeshComponent *)this->owning_skeleton,(int)&iStack_1d0);
            uVar17 = 0;
            lVar20 = 0;
            fVar22 = fVar7;
            if (0 < (this->Override_Handle_Strength_Multiplier).ArrayNum) {
              lVar21 = 0;
              do {
                uVar14 = 0;
                if ((int)uVar17 < (this->Override_Handle_Strength_Multiplier).ArrayNum) {
                  uVar14 = ~uVar17 >> 0x1f;
                }
                if ((uVar14 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pFVar16 = (this->Override_Handle_Strength_Multiplier).AllocatorInstance.Data;
                if ((*(int *)(pFVar16 + lVar21) == iStack_1d0) &&
                   (*(int *)(pFVar16 + lVar21 + 4) == iStack_1cc)) {
                  uVar14 = 0;
                  if ((int)uVar17 < (this->Override_Handle_Strength_Multiplier).ArrayNum) {
                    uVar14 = ~uVar17 >> 0x1f;
                  }
                  if ((uVar14 == 0) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar13)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  fVar22 = *(float *)((this->Override_Handle_Strength_Multiplier).AllocatorInstance.
                                      Data + lVar20 * 0xc + 8);
                  break;
                }
                uVar17 = uVar17 + 1;
                lVar20 = lVar20 + 1;
                lVar21 = lVar21 + 0xc;
              } while ((int)uVar17 < (this->Override_Handle_Strength_Multiplier).ArrayNum);
            }
            pAVar4 = this->handler_holder;
            iVar2 = this->Linear_Damp;
            uVar17 = 0;
            if ((int)uVar18 < (pAVar4->physics_handle_array).ArrayNum) {
              uVar17 = uVar19;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(float *)(*(longlong *)
                        ((pAVar4->physics_handle_array).AllocatorInstance.Data + lStack_1e0 * 8) +
                      0xd4) = (float)iVar2 * fVar22;
            pAVar4 = this->handler_holder;
            iVar2 = this->Angular_Damp;
            uVar17 = 0;
            if ((int)uVar18 < (pAVar4->physics_handle_array).ArrayNum) {
              uVar17 = uVar19;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(float *)(*(longlong *)
                        ((pAVar4->physics_handle_array).AllocatorInstance.Data + lStack_1e0 * 8) +
                      0xdc) = (float)iVar2 * fVar22;
            pAVar4 = this->handler_holder;
            iVar2 = this->Linear_Strength;
            uVar17 = 0;
            if ((int)uVar18 < (pAVar4->physics_handle_array).ArrayNum) {
              uVar17 = uVar19;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(float *)(*(longlong *)
                        ((pAVar4->physics_handle_array).AllocatorInstance.Data + lStack_1e0 * 8) +
                      0xd8) = (float)iVar2 * fVar22;
            pAVar4 = this->handler_holder;
            iVar2 = this->Angular_Strength;
            uVar17 = 0;
            if ((int)uVar18 < (pAVar4->physics_handle_array).ArrayNum) {
              uVar17 = uVar19;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(float *)(*(longlong *)
                        ((pAVar4->physics_handle_array).AllocatorInstance.Data + lStack_1e0 * 8) +
                      0xe0) = (float)iVar2 * fVar22;
            pAVar4 = this->handler_holder;
            uVar17 = 0;
            if ((int)uVar18 < (pAVar4->physics_handle_array).ArrayNum) {
              uVar17 = uVar19;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            TStack_118.X = TStack_d8.Rotation.XY.m128d_f64[0];
            TStack_118.Y = TStack_d8.Rotation.XY.m128d_f64[1];
            this_00 = *(UPhysicsHandleComponent **)
                       ((pAVar4->physics_handle_array).AllocatorInstance.Data + lStack_1e0 * 8);
            TStack_118.Z = TStack_d8.Rotation.ZW.m128d_f64[0];
            TStack_118.W = TStack_d8.Rotation.ZW.m128d_f64[1];
            UE::Math::TQuat<double>::Rotator(&TStack_118,&TStack_190);
            dVar12 = TStack_d8.Translation.XY.m128d_f64[1];
            dVar11 = TStack_d8.Translation.XY.m128d_f64[0];
            dVar10 = TStack_190.Roll;
            dVar9 = TStack_190.Yaw;
            dVar8 = TStack_190.Pitch;
            dStack_168 = TStack_d8.Translation.ZW.m128d_f64[0];
            dStack_e8 = TStack_d8.Translation.ZW.m128d_f64[0];
            dStack_178 = TStack_d8.Translation.XY.m128d_f64[0];
            dStack_170 = TStack_d8.Translation.XY.m128d_f64[1];
            FVar15 = USkinnedMeshComponent::GetBoneName
                               ((USkinnedMeshComponent *)this->owning_skeleton,(int)auStack_198);
            TStack_158.Pitch = dVar8;
            TStack_158.Yaw = dVar9;
            TStack_158.Roll = dVar10;
            TStack_138._s_0.X = dVar11;
            TStack_138._s_0.Y = dVar12;
            TStack_138._s_0.Z = dStack_e8;
            UPhysicsHandleComponent::GrabComponentAtLocationWithRotation
                      (this_00,(UPrimitiveComponent *)this->owning_skeleton,*(FName *)FVar15,
                       (TVector<double> *)&TStack_138._s_0,&TStack_158);
            uVar17 = 0;
            if ((int)uVar18 < (this->Grab_Handle_Locks).ArrayNum) {
              uVar17 = uVar19;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar16 = (this->Grab_Handle_Locks).AllocatorInstance.Data;
          }
          else {
            uVar17 = 0;
            if ((int)uVar18 < (this->Grab_Handle_Tasks_Queue).ArrayNum) {
              uVar17 = uVar19;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar16 = (this->Grab_Handle_Tasks_Queue).AllocatorInstance.Data;
          }
          pFVar16[lStack_1e0] = (FScriptContainerElement)0x1;
        }
        if (this->Need_To_Remap_PhysicsStates != false) {
          uVar17 = 0;
          if ((int)uVar18 < (this->Physics_States).ArrayNum) {
            uVar17 = uVar19;
          }
          if ((uVar17 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar1 = (this->Physics_States).AllocatorInstance.Data[lStack_1e0];
          uVar17 = 0;
          if ((int)uVar18 < (this->Remap_Physics_States_Queue).ArrayNum) {
            uVar17 = uVar19;
          }
          if ((uVar17 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          (this->Remap_Physics_States_Queue).AllocatorInstance.Data[lStack_1e0] = FVar1;
        }
        lStack_1e0 = lStack_1e0 + 1;
        lStack_1d8 = lStack_1d8 + 8;
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < (this->handler_holder->physics_handle_array).ArrayNum);
    }
    if (((this->Need_To_Remap_PhysicsStates != false) && (this->use_auto_blending_logic != false))
       && (this->is_released == false)) {
      USkeletalMeshComponent::SetAllBodiesBelowSimulatePhysics
                (this->owning_skeleton,&this->Root_Clamping_Bone,false,true);
    }
    this->is_released = false;
    this->slight_delay_counter = 0.0;
    this->get_up_timer = 0.0;
    if (((param_1) && (this->handler_holder != (ADragonIKPhysicsHolder *)0x0)) &&
       (this->owning_skeleton != (USkeletalMeshComponent *)0x0)) {
      USkinnedMeshComponent::GetBoneName
                ((USkinnedMeshComponent *)this->owning_skeleton,(int)&FStack_1c0);
      iStack_1b0 = USkinnedMeshComponent::GetBoneIndex
                             ((USkinnedMeshComponent *)this->owning_skeleton,
                              this->Root_Clamping_Bone);
      ppUStack_1a0 = &pUStack_1b8;
      pcStack_1a8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UDragonIKPhysicsComponent::Physanim_Safe_Exit_Ragdoll'::__l5::<lambda_1>,void,FBodyInstance_*>
                    ::Call;
      pUStack_1b8 = this;
      USkeletalMeshComponent::ForEachBodyBelow
                (this->owning_skeleton,FStack_1c0,true,false,
                 (TFunctionRef<void___cdecl(FBodyInstance_*)> *)&pcStack_1a8);
      if (this->mesh_parent_reference != (USceneComponent *)0x0) {
        uStack_1c8 = 0;
        (**(code **)(this->owning_skeleton->_padding_ + 0x508))();
      }
      USceneComponent::SetRelativeTransform
                ((USceneComponent *)this->owning_skeleton,&this->relative_mesh_transform,false,
                 (FHitResult *)0x0,ResetPhysics);
    }
  }
  return;
}

// Multicast_ReGrabAllHandles_Validate @ 14d353240

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDragonIKPhysicsComponent::Multicast_ReGrabAllHandles_Validate
          (UDragonIKPhysicsComponent *this,bool param_1)

{
  return true;
}

// Multicast_ReleaseAllHandles_Implementation @ 14d353250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Multicast_ReleaseAllHandles_Implementation
          (UDragonIKPhysicsComponent *this,bool param_1)

{
  ADragonIKPhysicsHolder *pAVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  UPrimitiveComponent *pUVar7;
  TTransform<double> *pTVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStackY_f8 [32];
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> TStack_c8;
  UDragonIKPhysicsComponent *pUStack_b8;
  code *pcStack_b0;
  UDragonIKPhysicsComponent **ppUStack_a8;
  TTransform<double> TStack_98;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  uVar9 = 0;
  if ((this->owning_skeleton == (USkeletalMeshComponent *)0x0) ||
     (this->handler_holder == (ADragonIKPhysicsHolder *)0x0)) {
    this->slight_delay_counter = 0.0;
  }
  else {
    uVar11 = uVar9;
    if (0 < (this->handler_holder->physics_handle_array).ArrayNum) {
      do {
        uVar10 = (uint)uVar9;
        uVar12 = ~uVar10 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar10 < (this->Grab_Handle_Locks).ArrayNum) {
          uVar5 = uVar12;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((this->Grab_Handle_Locks).AllocatorInstance.Data[uVar11] == (FScriptContainerElement)0x1
           ) {
          pAVar1 = this->handler_holder;
          uVar6 = 0;
          uVar5 = uVar6;
          if ((int)uVar10 < (pAVar1->physics_handle_array).ArrayNum) {
            uVar5 = uVar12;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(longlong *)((pAVar1->physics_handle_array).AllocatorInstance.Data + uVar11 * 8) != 0
             ) {
            pAVar1 = this->handler_holder;
            uVar5 = uVar6;
            if ((int)uVar10 < (pAVar1->physics_handle_array).ArrayNum) {
              uVar5 = uVar12;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pUVar7 = UPhysicsHandleComponent::GetGrabbedComponent
                               (*(UPhysicsHandleComponent **)
                                 ((pAVar1->physics_handle_array).AllocatorInstance.Data + uVar11 * 8
                                 ));
            if (pUVar7 != (UPrimitiveComponent *)0x0) {
              pAVar1 = this->handler_holder;
              uVar5 = uVar6;
              if ((int)uVar10 < (pAVar1->physics_handle_array).ArrayNum) {
                uVar5 = uVar12;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              (**(code **)(**(longlong **)
                             ((pAVar1->physics_handle_array).AllocatorInstance.Data + uVar11 * 8) +
                          0x500))();
              if ((int)uVar10 < (this->Grab_Handle_Locks).ArrayNum) {
                uVar6 = uVar12;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              (this->Grab_Handle_Locks).AllocatorInstance.Data[uVar11] =
                   (FScriptContainerElement)0x0;
            }
          }
        }
        uVar9 = (ulonglong)(uVar10 + 1);
        uVar11 = uVar11 + 1;
      } while ((int)(uVar10 + 1) < (this->handler_holder->physics_handle_array).ArrayNum);
    }
    ppUStack_a8 = &pUStack_b8;
    this->is_released = true;
    pcStack_b0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UDragonIKPhysicsComponent::ReleaseAllHandles'::__l8::<lambda_1>,void,FBodyInstance_*>
                 ::Call;
    pUStack_b8 = this;
    USkeletalMeshComponent::ForEachBodyBelow
              (this->owning_skeleton,this->Root_Clamping_Bone,true,false,
               (TFunctionRef<void___cdecl(FBodyInstance_*)> *)&pcStack_b0);
    TStack_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_c8.ArrayNum = 0;
    TStack_c8.ArrayMax = 0;
    USceneComponent::GetParentComponents((USceneComponent *)this->owning_skeleton,&TStack_c8);
    if (0 < TStack_c8.ArrayNum) {
      this->mesh_parent_reference = *(USceneComponent **)TStack_c8.AllocatorInstance.Data;
      pTVar8 = USceneComponent::GetRelativeTransform
                         ((USceneComponent *)this->owning_skeleton,&TStack_98);
      dVar3 = (pTVar8->Rotation).XY.m128d_f64[1];
      (this->relative_mesh_transform).Rotation.XY.m128d_f64[0] = (pTVar8->Rotation).XY.m128d_f64[0];
      (this->relative_mesh_transform).Rotation.XY.m128d_f64[1] = dVar3;
      dVar3 = (pTVar8->Rotation).ZW.m128d_f64[1];
      (this->relative_mesh_transform).Rotation.ZW.m128d_f64[0] = (pTVar8->Rotation).ZW.m128d_f64[0];
      (this->relative_mesh_transform).Rotation.ZW.m128d_f64[1] = dVar3;
      dVar3 = (pTVar8->Translation).XY.m128d_f64[1];
      (this->relative_mesh_transform).Translation.XY.m128d_f64[0] =
           (pTVar8->Translation).XY.m128d_f64[0];
      (this->relative_mesh_transform).Translation.XY.m128d_f64[1] = dVar3;
      dVar3 = (pTVar8->Translation).ZW.m128d_f64[1];
      (this->relative_mesh_transform).Translation.ZW.m128d_f64[0] =
           (pTVar8->Translation).ZW.m128d_f64[0];
      (this->relative_mesh_transform).Translation.ZW.m128d_f64[1] = dVar3;
      dVar3 = (pTVar8->Scale3D).XY.m128d_f64[1];
      (this->relative_mesh_transform).Scale3D.XY.m128d_f64[0] = (pTVar8->Scale3D).XY.m128d_f64[0];
      (this->relative_mesh_transform).Scale3D.XY.m128d_f64[1] = dVar3;
      dVar3 = (pTVar8->Scale3D).ZW.m128d_f64[1];
      (this->relative_mesh_transform).Scale3D.ZW.m128d_f64[0] = (pTVar8->Scale3D).ZW.m128d_f64[0];
      (this->relative_mesh_transform).Scale3D.ZW.m128d_f64[1] = dVar3;
    }
    if (param_1) {
      USkeletalMeshComponent::SetAllBodiesSimulatePhysics(this->owning_skeleton,true);
      this->ragdoll_mode = true;
    }
    if (this->use_auto_blending_logic == false) {
      this->ragdoll_mode = false;
    }
    if (TStack_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_c8.AllocatorInstance.Data);
    }
    this->slight_delay_counter = 0.0;
  }
  return;
}

// Multicast_ReleaseAllHandles_Validate @ 14d353260

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDragonIKPhysicsComponent::Multicast_ReleaseAllHandles_Validate
          (UDragonIKPhysicsComponent *this,bool param_1)

{
  return true;
}

// Multicast_SetInterpolation_Implementation @ 14d3534a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Multicast_SetInterpolation_Implementation
          (UDragonIKPhysicsComponent *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ADragonIKPhysicsHolder *pAVar6;
  
  pAVar6 = this->handler_holder;
  if (((pAVar6 != (ADragonIKPhysicsHolder *)0x0) &&
      (this->owning_skeleton != (USkeletalMeshComponent *)0x0)) &&
     (uVar4 = 0, 0 < (pAVar6->physics_handle_array).ArrayNum)) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (pAVar6->physics_handle_array).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(longlong *)((pAVar6->physics_handle_array).AllocatorInstance.Data + lVar5) != 0) {
        pAVar6 = this->handler_holder;
        this->Interpolation_Speed = param_1;
        uVar3 = 0;
        if ((int)uVar4 < (pAVar6->physics_handle_array).ArrayNum) {
          uVar3 = ~uVar4 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        UPhysicsHandleComponent::SetLinearStiffness
                  (*(UPhysicsHandleComponent **)
                    ((pAVar6->physics_handle_array).AllocatorInstance.Data + lVar5),
                   (float)(this->Interpolation_Speed * 10));
      }
      pAVar6 = this->handler_holder;
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (pAVar6->physics_handle_array).ArrayNum);
  }
  return;
}

// Multicast_SetInterpolation_Validate @ 14d353600

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDragonIKPhysicsComponent::Multicast_SetInterpolation_Validate
          (UDragonIKPhysicsComponent *this,int param_1)

{
  return 0 < param_1;
}

// Multicast_UpdatePhysanimData_Implementation @ 14d353760

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Multicast_UpdatePhysanimData_Implementation
          (UDragonIKPhysicsComponent *this,int param_1,int param_2,int param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  ADragonIKPhysicsHolder *pAVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  float fVar15;
  int iStackX_8;
  int iStackX_c;
  int iStackX_10;
  int iStackX_18;
  int iStackX_20;
  
  fVar3 = __real_3f800000;
  pAVar10 = this->handler_holder;
  if (((pAVar10 != (ADragonIKPhysicsHolder *)0x0) &&
      (this->owning_skeleton != (USkeletalMeshComponent *)0x0)) &&
     (uVar13 = 0, 0 < (pAVar10->physics_handle_array).ArrayNum)) {
    lVar12 = 0;
    iStackX_10 = param_1;
    iStackX_18 = param_2;
    iStackX_20 = param_3;
    do {
      uVar11 = ~uVar13 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar13 < (pAVar10->physics_handle_array).ArrayNum) {
        uVar9 = uVar11;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(longlong *)((pAVar10->physics_handle_array).AllocatorInstance.Data + lVar12) != 0) {
        USkinnedMeshComponent::GetBoneName
                  ((USkinnedMeshComponent *)this->owning_skeleton,(int)&iStackX_8);
        uVar9 = 0;
        lVar14 = 0;
        fVar15 = fVar3;
        if (0 < (this->Override_Handle_Strength_Multiplier).ArrayNum) {
          lVar8 = 0;
          do {
            uVar7 = 0;
            if ((int)uVar9 < (this->Override_Handle_Strength_Multiplier).ArrayNum) {
              uVar7 = ~uVar9 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar1 = (this->Override_Handle_Strength_Multiplier).AllocatorInstance.Data;
            if ((*(int *)(pFVar1 + lVar8) == iStackX_8) &&
               (*(int *)(pFVar1 + lVar8 + 4) == iStackX_c)) {
              uVar7 = 0;
              if ((int)uVar9 < (this->Override_Handle_Strength_Multiplier).ArrayNum) {
                uVar7 = ~uVar9 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              fVar15 = *(float *)((this->Override_Handle_Strength_Multiplier).AllocatorInstance.Data
                                 + lVar14 * 0xc + 8);
              break;
            }
            uVar9 = uVar9 + 1;
            lVar14 = lVar14 + 1;
            lVar8 = lVar8 + 0xc;
          } while ((int)uVar9 < (this->Override_Handle_Strength_Multiplier).ArrayNum);
        }
        iVar5 = iStackX_20;
        iVar4 = iStackX_10;
        pAVar10 = this->handler_holder;
        this->Linear_Strength = iStackX_10;
        this->Linear_Damp = iStackX_20;
        this->Angular_Strength = param_4;
        this->Angular_Damp = param_4;
        uVar9 = 0;
        if ((int)uVar13 < (pAVar10->physics_handle_array).ArrayNum) {
          uVar9 = uVar11;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UPhysicsHandleComponent::SetLinearStiffness
                  (*(UPhysicsHandleComponent **)
                    ((pAVar10->physics_handle_array).AllocatorInstance.Data + lVar12),
                   (float)iVar4 * fVar15);
        pAVar10 = this->handler_holder;
        uVar9 = 0;
        if ((int)uVar13 < (pAVar10->physics_handle_array).ArrayNum) {
          uVar9 = uVar11;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UPhysicsHandleComponent::SetAngularStiffness
                  (*(UPhysicsHandleComponent **)
                    ((pAVar10->physics_handle_array).AllocatorInstance.Data + lVar12),
                   (float)iStackX_18 * fVar15);
        pAVar10 = this->handler_holder;
        uVar9 = 0;
        if ((int)uVar13 < (pAVar10->physics_handle_array).ArrayNum) {
          uVar9 = uVar11;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UPhysicsHandleComponent::SetLinearDamping
                  (*(UPhysicsHandleComponent **)
                    ((pAVar10->physics_handle_array).AllocatorInstance.Data + lVar12),
                   (float)iVar5 * fVar15);
        pAVar10 = this->handler_holder;
        uVar9 = 0;
        if ((int)uVar13 < (pAVar10->physics_handle_array).ArrayNum) {
          uVar9 = uVar11;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UPhysicsHandleComponent::SetAngularDamping
                  (*(UPhysicsHandleComponent **)
                    ((pAVar10->physics_handle_array).AllocatorInstance.Data + lVar12),
                   (float)param_4 * fVar15);
      }
      pAVar10 = this->handler_holder;
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 8;
    } while ((int)uVar13 < (pAVar10->physics_handle_array).ArrayNum);
  }
  return;
}

// Multicast_UpdatePhysanimData_Validate @ 14d353770

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDragonIKPhysicsComponent::Multicast_UpdatePhysanimData_Validate
          (UDragonIKPhysicsComponent *this,int param_1,int param_2,int param_3,int param_4)

{
  return true;
}

// OnHitCallback @ 14d353830

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::OnHitCallback
          (UDragonIKPhysicsComponent *this,FHitResult *param_1,FName param_2,
          TVector<double> *param_3,TVector<double> *param_4,FName *param_5)

{
  FName *pFVar1;
  USkeletalMeshComponent *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  TVector<double> *pTVar10;
  FName *pFVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  FName local_58;
  longlong local_50;
  longlong local_48;
  TVector<double> local_40;
  
  if ((((this->owning_skeleton != (USkeletalMeshComponent *)0x0) &&
       (this->component_grabbing_state != false)) && (this->use_auto_blending_logic != false)) &&
     (this->is_released == false)) {
    iVar6 = USkinnedMeshComponent::GetBoneIndex
                      ((USkinnedMeshComponent *)this->owning_skeleton,param_2);
    iVar7 = USkinnedMeshComponent::GetBoneIndex
                      ((USkinnedMeshComponent *)this->owning_skeleton,param_1->MyBoneName);
    ::FName::FName(&local_58,"None");
    if (-1 < iVar6) {
      dVar4 = *(double *)&(param_1->Normal).field_0x8;
      (param_4->field0_0x0)._s_0.X = *(double *)&param_1->Normal;
      (param_4->field0_0x0)._s_0.Y = dVar4;
      (param_4->field0_0x0)._s_0.Z = *(double *)&(param_1->Normal).field_0x10;
      local_58 = param_2;
      pTVar10 = USkinnedMeshComponent::GetBoneLocation
                          ((USkinnedMeshComponent *)this->owning_skeleton,&local_40,param_2,
                           WorldSpace);
      dVar4 = (pTVar10->field0_0x0)._s_0.Y;
      (param_3->field0_0x0)._s_0.X = (pTVar10->field0_0x0)._s_0.X;
      (param_3->field0_0x0)._s_0.Y = dVar4;
      (param_3->field0_0x0)._s_0.Z = (pTVar10->field0_0x0)._s_0.Z;
      *param_5 = local_58;
    }
    if (-1 < iVar7) {
      dVar4 = *(double *)&(param_1->Normal).field_0x8;
      local_58 = param_1->MyBoneName;
      (param_4->field0_0x0)._s_0.X = *(double *)&param_1->Normal;
      (param_4->field0_0x0)._s_0.Y = dVar4;
      (param_4->field0_0x0)._s_0.Z = *(double *)&(param_1->Normal).field_0x10;
      dVar4 = *(double *)&(param_1->ImpactPoint).field_0x8;
      (param_3->field0_0x0)._s_0.X = *(double *)&param_1->ImpactPoint;
      (param_3->field0_0x0)._s_0.Y = dVar4;
      (param_3->field0_0x0)._s_0.Z = *(double *)&(param_1->ImpactPoint).field_0x10;
      *param_5 = local_58;
    }
    if ((this->ragdoll_mode == false) && (bVar5 = ::FName::Equals(local_58,"None"), !bVar5)) {
      uVar8 = USkinnedMeshComponent::GetBoneIndex
                        ((USkinnedMeshComponent *)this->owning_skeleton,local_58);
      uVar13 = 0;
      lVar15 = (longlong)(int)uVar8;
      if (0 < (this->Bodies_Physics_Hit_Bools).ArrayNum) {
        local_50 = 0;
        lVar17 = 0;
        uVar16 = ~uVar8 >> 0x1f;
        do {
          USkinnedMeshComponent::GetBoneName
                    ((USkinnedMeshComponent *)this->owning_skeleton,(int)&local_48);
          this_00 = this->owning_skeleton;
          uVar9 = 0;
          if ((int)uVar8 < (this->Last_Second_Parent_Bone_Map).ArrayNum) {
            uVar9 = uVar16;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar9 = USkinnedMeshComponent::GetBoneIndex
                            ((USkinnedMeshComponent *)this_00,
                             *(FName *)((this->Last_Second_Parent_Bone_Map).AllocatorInstance.Data +
                                       lVar15 * 8));
          pFVar11 = (FName *)(this->Influence_Stopping_Bones).AllocatorInstance.Data;
          pFVar1 = pFVar11 + (this->Influence_Stopping_Bones).ArrayNum;
          for (; (uVar12 = uVar9, pFVar11 != pFVar1 && (uVar12 = uVar8, *pFVar11 != local_58));
              pFVar11 = pFVar11 + 1) {
          }
          if (-1 < (int)uVar12) {
            uVar14 = ~uVar13 >> 0x1f;
            uVar9 = 0;
            if ((int)uVar13 < (this->bone_to_bone_map).ArrayNum) {
              uVar9 = uVar14;
            }
            if ((uVar9 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar2 = (this->bone_to_bone_map).AllocatorInstance.Data;
            uVar9 = 0;
            if ((int)uVar12 < *(int *)(pFVar2 + local_50 + 8)) {
              uVar9 = ~uVar12 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (*(int *)(*(longlong *)(pFVar2 + local_50) + (longlong)(int)uVar12 * 4) != 1) {
              uVar9 = 0;
              if ((int)uVar8 < (this->Parent_Bone_Map).ArrayNum) {
                uVar9 = uVar16;
              }
              if ((uVar9 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (local_48 !=
                  *(longlong *)((this->Parent_Bone_Map).AllocatorInstance.Data + lVar15 * 8)) {
                uVar9 = 0;
                if ((int)uVar8 < (this->Last_Second_Parent_Bone_Map).ArrayNum) {
                  uVar9 = uVar16;
                }
                if ((uVar9 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if (local_48 !=
                    *(longlong *)
                     ((this->Last_Second_Parent_Bone_Map).AllocatorInstance.Data + lVar15 * 8))
                goto LAB_14d353c8e;
              }
            }
            uVar9 = 0;
            if ((int)uVar13 < (this->Bodies_Physics_Hit_Bools).ArrayNum) {
              uVar9 = uVar14;
            }
            if ((uVar9 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            (this->Bodies_Physics_Hit_Bools).AllocatorInstance.Data[lVar17] =
                 (FScriptContainerElement)0x1;
            uVar9 = 0;
            if ((int)uVar13 < (this->Extra_Bone_Delay_Array).ArrayNum) {
              uVar9 = uVar14;
            }
            if ((uVar9 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            *(undefined4 *)((this->Extra_Bone_Delay_Array).AllocatorInstance.Data + lVar17 * 4) = 0;
            this->get_up_timer = 0.0;
          }
LAB_14d353c8e:
          local_50 = local_50 + 0x10;
          uVar13 = uVar13 + 1;
          lVar17 = lVar17 + 1;
        } while ((int)uVar13 < (this->Bodies_Physics_Hit_Bools).ArrayNum);
      }
    }
  }
  return;
}

// PerformActiveRagdoll @ 14d3547e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::PerformActiveRagdoll(UDragonIKPhysicsComponent *this,float param_1)

{
  ADragonIKPhysicsHolder *pAVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator> *pTVar5;
  UPrimitiveComponent *pUVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  undefined1 auStackY_e8 [32];
  UDragonIKPhysicsComponent *local_b8;
  code *local_b0;
  UDragonIKPhysicsComponent **local_a8;
  undefined1 local_98 [72];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  this->active_ragdoll = true;
  if (this->handler_holder == (ADragonIKPhysicsHolder *)0x0) {
    this->slight_delay_counter = 0.0;
  }
  else if (this->owning_skeleton == (USkeletalMeshComponent *)0x0) {
    this->slight_delay_counter = 0.0;
  }
  else {
    USkeletalMeshComponent::SetAllBodiesBelowSimulatePhysics
              (this->owning_skeleton,&this->Root_Clamping_Bone,true,true);
    if (this->handler_holder == (ADragonIKPhysicsHolder *)0x0) {
      this->slight_delay_counter = 0.0;
    }
    else {
      pTVar5 = (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                *)MapParentChildRelationships
                            (this,(TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                                   *)local_98,&this->individual_bone_selection);
      if ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
           *)&this->active_ragdoll_tmap != pTVar5) {
        TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
        Move<TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>_>
                  ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                    *)&this->active_ragdoll_tmap,pTVar5);
      }
      local_50 = 0;
      if ((void *)local_98._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_98._64_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      uVar4 = USkinnedMeshComponent::GetBoneIndex
                        ((USkinnedMeshComponent *)this->owning_skeleton,this->Custom_Root_Bone);
      lVar8 = (longlong)(int)uVar4;
      uVar9 = ~uVar4 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar4 < (this->Grab_Handle_Locks).ArrayNum) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((this->Grab_Handle_Locks).AllocatorInstance.Data[lVar8] == (FScriptContainerElement)0x1) {
        pAVar1 = this->handler_holder;
        uVar7 = 0;
        if ((int)uVar4 < (pAVar1->physics_handle_array).ArrayNum) {
          uVar7 = uVar9;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(longlong *)((pAVar1->physics_handle_array).AllocatorInstance.Data + lVar8 * 8) != 0) {
          pAVar1 = this->handler_holder;
          uVar7 = 0;
          if ((int)uVar4 < (pAVar1->physics_handle_array).ArrayNum) {
            uVar7 = uVar9;
          }
          if ((uVar7 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pUVar6 = UPhysicsHandleComponent::GetGrabbedComponent
                             (*(UPhysicsHandleComponent **)
                               ((pAVar1->physics_handle_array).AllocatorInstance.Data + lVar8 * 8));
          if (pUVar6 != (UPrimitiveComponent *)0x0) {
            pAVar1 = this->handler_holder;
            uVar7 = 0;
            if ((int)uVar4 < (pAVar1->physics_handle_array).ArrayNum) {
              uVar7 = uVar9;
            }
            if ((uVar7 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            (**(code **)(**(longlong **)
                           ((pAVar1->physics_handle_array).AllocatorInstance.Data + lVar8 * 8) +
                        0x500))();
            uVar7 = 0;
            if ((int)uVar4 < (this->Grab_Handle_Locks).ArrayNum) {
              uVar7 = uVar9;
            }
            if ((uVar7 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            (this->Grab_Handle_Locks).AllocatorInstance.Data[lVar8] = (FScriptContainerElement)0x0;
          }
        }
      }
      this->is_released = true;
      fVar10 = (float)(**(code **)(this->owning_skeleton->_padding_ + 0x980))();
      this->saved_mass_kg = fVar10;
      (**(code **)(this->owning_skeleton->_padding_ + 0x978))
                (this->owning_skeleton,this->Root_Clamping_Bone,param_1);
      local_a8 = &local_b8;
      local_b0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UDragonIKPhysicsComponent::PerformActiveRagdoll'::__l8::<lambda_1>,void,FBodyInstance_*>
                 ::Call;
      local_b8 = this;
      USkeletalMeshComponent::ForEachBodyBelow
                (this->owning_skeleton,this->Root_Clamping_Bone,true,false,
                 (TFunctionRef<void___cdecl(FBodyInstance_*)> *)&local_b0);
      this->slight_delay_counter = 0.0;
    }
  }
  return;
}

// Physanim_Safe_Exit_Ragdoll @ 14d354ba0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Physanim_Safe_Exit_Ragdoll(UDragonIKPhysicsComponent *this)

{
  FName local_res10 [3];
  UDragonIKPhysicsComponent *local_28;
  int local_20;
  code *local_18;
  UDragonIKPhysicsComponent **local_10;
  
  if ((this->handler_holder != (ADragonIKPhysicsHolder *)0x0) &&
     (this->owning_skeleton != (USkeletalMeshComponent *)0x0)) {
    USkinnedMeshComponent::GetBoneName
              ((USkinnedMeshComponent *)this->owning_skeleton,(int)local_res10);
    local_20 = USkinnedMeshComponent::GetBoneIndex
                         ((USkinnedMeshComponent *)this->owning_skeleton,this->Root_Clamping_Bone);
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UDragonIKPhysicsComponent::Physanim_Safe_Exit_Ragdoll'::__l5::<lambda_1>,void,FBodyInstance_*>
               ::Call;
    local_28 = this;
    USkeletalMeshComponent::ForEachBodyBelow
              (this->owning_skeleton,local_res10[0],true,false,
               (TFunctionRef<void___cdecl(FBodyInstance_*)> *)&local_18);
    if (this->mesh_parent_reference != (USceneComponent *)0x0) {
      (**(code **)(this->owning_skeleton->_padding_ + 0x508))();
    }
    USceneComponent::SetRelativeTransform
              ((USceneComponent *)this->owning_skeleton,&this->relative_mesh_transform,false,
               (FHitResult *)0x0,ResetPhysics);
  }
  return;
}

// ReGrabAllHandles @ 14d3553a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::ReGrabAllHandles(UDragonIKPhysicsComponent *this,bool param_1)

{
  FScriptContainerElement FVar1;
  int iVar2;
  USkeletalMeshComponent *pUVar3;
  ADragonIKPhysicsHolder *pAVar4;
  UPhysicsHandleComponent *this_00;
  bool bVar5;
  code *pcVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  FName FVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  float fVar22;
  undefined1 auStackY_218 [32];
  longlong local_1e0;
  longlong local_1d8;
  int local_1d0;
  int local_1cc;
  undefined8 local_1c8;
  FName local_1c0;
  UDragonIKPhysicsComponent *local_1b8;
  int local_1b0;
  code *local_1a8;
  UDragonIKPhysicsComponent **local_1a0;
  undefined1 local_198 [8];
  TRotator<double> local_190;
  double local_178;
  double dStack_170;
  double local_168;
  TRotator<double> local_158;
  TVector<double>_u_0 local_138;
  TQuat<double> local_118;
  double local_e8;
  TTransform<double> local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pUVar3 = this->owning_skeleton;
  if ((pUVar3 != (USkeletalMeshComponent *)0x0) &&
     (this->handler_holder != (ADragonIKPhysicsHolder *)0x0)) {
    (**(code **)(pUVar3->_padding_ + 0x978))(pUVar3,this->Root_Clamping_Bone,this->saved_mass_kg);
    fVar7 = __real_3f800000;
    bVar13 = __real_3f800000 != this->largest_blend_value;
    bVar5 = this->largest_blend_value <= __real_3f800000;
    this->active_ragdoll = false;
    if ((bVar5 && bVar13) &&
       ((this->use_auto_blending_logic != false && (this->is_released == false)))) {
      this->Need_To_Remap_PhysicsStates = true;
    }
    uVar18 = 0;
    if (0 < (this->handler_holder->physics_handle_array).ArrayNum) {
      local_1d8 = 0;
      local_1e0 = 0;
      do {
        uVar19 = ~uVar18 >> 0x1f;
        uVar17 = 0;
        if ((int)uVar18 < (this->Autoblend_Reverse_Bools).ArrayNum) {
          uVar17 = uVar19;
        }
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (this->Autoblend_Reverse_Bools).AllocatorInstance.Data[local_1e0] =
             (FScriptContainerElement)0x0;
        uVar17 = 0;
        if ((int)uVar18 < (this->Bodies_Physics_Blend).ArrayNum) {
          uVar17 = uVar19;
        }
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)((this->Bodies_Physics_Blend).AllocatorInstance.Data + local_1e0 * 4) =
             0x3f800000;
        pAVar4 = this->handler_holder;
        uVar17 = 0;
        if ((int)uVar18 < (pAVar4->physics_handle_array).ArrayNum) {
          uVar17 = uVar19;
        }
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(longlong *)((pAVar4->physics_handle_array).AllocatorInstance.Data + local_1d8) != 0) {
          if (this->Need_To_Remap_PhysicsStates == false) {
            USkinnedMeshComponent::GetBoneTransform
                      ((USkinnedMeshComponent *)this->owning_skeleton,&local_d8,uVar18);
            USkinnedMeshComponent::GetBoneName
                      ((USkinnedMeshComponent *)this->owning_skeleton,(int)&local_1d0);
            uVar17 = 0;
            lVar20 = 0;
            fVar22 = fVar7;
            if (0 < (this->Override_Handle_Strength_Multiplier).ArrayNum) {
              lVar21 = 0;
              do {
                uVar14 = 0;
                if ((int)uVar17 < (this->Override_Handle_Strength_Multiplier).ArrayNum) {
                  uVar14 = ~uVar17 >> 0x1f;
                }
                if ((uVar14 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pFVar16 = (this->Override_Handle_Strength_Multiplier).AllocatorInstance.Data;
                if ((*(int *)(pFVar16 + lVar21) == local_1d0) &&
                   (*(int *)(pFVar16 + lVar21 + 4) == local_1cc)) {
                  uVar14 = 0;
                  if ((int)uVar17 < (this->Override_Handle_Strength_Multiplier).ArrayNum) {
                    uVar14 = ~uVar17 >> 0x1f;
                  }
                  if ((uVar14 == 0) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar13)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  fVar22 = *(float *)((this->Override_Handle_Strength_Multiplier).AllocatorInstance.
                                      Data + lVar20 * 0xc + 8);
                  break;
                }
                uVar17 = uVar17 + 1;
                lVar20 = lVar20 + 1;
                lVar21 = lVar21 + 0xc;
              } while ((int)uVar17 < (this->Override_Handle_Strength_Multiplier).ArrayNum);
            }
            pAVar4 = this->handler_holder;
            iVar2 = this->Linear_Damp;
            uVar17 = 0;
            if ((int)uVar18 < (pAVar4->physics_handle_array).ArrayNum) {
              uVar17 = uVar19;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(float *)(*(longlong *)
                        ((pAVar4->physics_handle_array).AllocatorInstance.Data + local_1e0 * 8) +
                      0xd4) = (float)iVar2 * fVar22;
            pAVar4 = this->handler_holder;
            iVar2 = this->Angular_Damp;
            uVar17 = 0;
            if ((int)uVar18 < (pAVar4->physics_handle_array).ArrayNum) {
              uVar17 = uVar19;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(float *)(*(longlong *)
                        ((pAVar4->physics_handle_array).AllocatorInstance.Data + local_1e0 * 8) +
                      0xdc) = (float)iVar2 * fVar22;
            pAVar4 = this->handler_holder;
            iVar2 = this->Linear_Strength;
            uVar17 = 0;
            if ((int)uVar18 < (pAVar4->physics_handle_array).ArrayNum) {
              uVar17 = uVar19;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(float *)(*(longlong *)
                        ((pAVar4->physics_handle_array).AllocatorInstance.Data + local_1e0 * 8) +
                      0xd8) = (float)iVar2 * fVar22;
            pAVar4 = this->handler_holder;
            iVar2 = this->Angular_Strength;
            uVar17 = 0;
            if ((int)uVar18 < (pAVar4->physics_handle_array).ArrayNum) {
              uVar17 = uVar19;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(float *)(*(longlong *)
                        ((pAVar4->physics_handle_array).AllocatorInstance.Data + local_1e0 * 8) +
                      0xe0) = (float)iVar2 * fVar22;
            pAVar4 = this->handler_holder;
            uVar17 = 0;
            if ((int)uVar18 < (pAVar4->physics_handle_array).ArrayNum) {
              uVar17 = uVar19;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_118.X = local_d8.Rotation.XY.m128d_f64[0];
            local_118.Y = local_d8.Rotation.XY.m128d_f64[1];
            this_00 = *(UPhysicsHandleComponent **)
                       ((pAVar4->physics_handle_array).AllocatorInstance.Data + local_1e0 * 8);
            local_118.Z = local_d8.Rotation.ZW.m128d_f64[0];
            local_118.W = local_d8.Rotation.ZW.m128d_f64[1];
            UE::Math::TQuat<double>::Rotator(&local_118,&local_190);
            dVar12 = local_d8.Translation.XY.m128d_f64[1];
            dVar11 = local_d8.Translation.XY.m128d_f64[0];
            dVar10 = local_190.Roll;
            dVar9 = local_190.Yaw;
            dVar8 = local_190.Pitch;
            local_168 = local_d8.Translation.ZW.m128d_f64[0];
            local_e8 = local_d8.Translation.ZW.m128d_f64[0];
            local_178 = local_d8.Translation.XY.m128d_f64[0];
            dStack_170 = local_d8.Translation.XY.m128d_f64[1];
            FVar15 = USkinnedMeshComponent::GetBoneName
                               ((USkinnedMeshComponent *)this->owning_skeleton,(int)local_198);
            local_158.Pitch = dVar8;
            local_158.Yaw = dVar9;
            local_158.Roll = dVar10;
            local_138._s_0.X = dVar11;
            local_138._s_0.Y = dVar12;
            local_138._s_0.Z = local_e8;
            UPhysicsHandleComponent::GrabComponentAtLocationWithRotation
                      (this_00,(UPrimitiveComponent *)this->owning_skeleton,*(FName *)FVar15,
                       (TVector<double> *)&local_138._s_0,&local_158);
            uVar17 = 0;
            if ((int)uVar18 < (this->Grab_Handle_Locks).ArrayNum) {
              uVar17 = uVar19;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar16 = (this->Grab_Handle_Locks).AllocatorInstance.Data;
          }
          else {
            uVar17 = 0;
            if ((int)uVar18 < (this->Grab_Handle_Tasks_Queue).ArrayNum) {
              uVar17 = uVar19;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar16 = (this->Grab_Handle_Tasks_Queue).AllocatorInstance.Data;
          }
          pFVar16[local_1e0] = (FScriptContainerElement)0x1;
        }
        if (this->Need_To_Remap_PhysicsStates != false) {
          uVar17 = 0;
          if ((int)uVar18 < (this->Physics_States).ArrayNum) {
            uVar17 = uVar19;
          }
          if ((uVar17 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar1 = (this->Physics_States).AllocatorInstance.Data[local_1e0];
          uVar17 = 0;
          if ((int)uVar18 < (this->Remap_Physics_States_Queue).ArrayNum) {
            uVar17 = uVar19;
          }
          if ((uVar17 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          (this->Remap_Physics_States_Queue).AllocatorInstance.Data[local_1e0] = FVar1;
        }
        local_1e0 = local_1e0 + 1;
        local_1d8 = local_1d8 + 8;
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < (this->handler_holder->physics_handle_array).ArrayNum);
    }
    if (((this->Need_To_Remap_PhysicsStates != false) && (this->use_auto_blending_logic != false))
       && (this->is_released == false)) {
      USkeletalMeshComponent::SetAllBodiesBelowSimulatePhysics
                (this->owning_skeleton,&this->Root_Clamping_Bone,false,true);
    }
    this->is_released = false;
    this->slight_delay_counter = 0.0;
    this->get_up_timer = 0.0;
    if (((param_1) && (this->handler_holder != (ADragonIKPhysicsHolder *)0x0)) &&
       (this->owning_skeleton != (USkeletalMeshComponent *)0x0)) {
      USkinnedMeshComponent::GetBoneName
                ((USkinnedMeshComponent *)this->owning_skeleton,(int)&local_1c0);
      local_1b0 = USkinnedMeshComponent::GetBoneIndex
                            ((USkinnedMeshComponent *)this->owning_skeleton,this->Root_Clamping_Bone
                            );
      local_1a0 = &local_1b8;
      local_1a8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UDragonIKPhysicsComponent::Physanim_Safe_Exit_Ragdoll'::__l5::<lambda_1>,void,FBodyInstance_*>
                  ::Call;
      local_1b8 = this;
      USkeletalMeshComponent::ForEachBodyBelow
                (this->owning_skeleton,local_1c0,true,false,
                 (TFunctionRef<void___cdecl(FBodyInstance_*)> *)&local_1a8);
      if (this->mesh_parent_reference != (USceneComponent *)0x0) {
        local_1c8 = 0;
        (**(code **)(this->owning_skeleton->_padding_ + 0x508))();
      }
      USceneComponent::SetRelativeTransform
                ((USceneComponent *)this->owning_skeleton,&this->relative_mesh_transform,false,
                 (FHitResult *)0x0,ResetPhysics);
    }
  }
  return;
}

// ReleaseAllHandles @ 14d355d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::ReleaseAllHandles(UDragonIKPhysicsComponent *this,bool param_1)

{
  ADragonIKPhysicsHolder *pAVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  UPrimitiveComponent *pUVar7;
  TTransform<double> *pTVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStackY_f8 [32];
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> local_c8;
  UDragonIKPhysicsComponent *local_b8;
  code *local_b0;
  UDragonIKPhysicsComponent **local_a8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  uVar9 = 0;
  if ((this->owning_skeleton == (USkeletalMeshComponent *)0x0) ||
     (this->handler_holder == (ADragonIKPhysicsHolder *)0x0)) {
    this->slight_delay_counter = 0.0;
  }
  else {
    uVar11 = uVar9;
    if (0 < (this->handler_holder->physics_handle_array).ArrayNum) {
      do {
        uVar10 = (uint)uVar9;
        uVar12 = ~uVar10 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar10 < (this->Grab_Handle_Locks).ArrayNum) {
          uVar5 = uVar12;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((this->Grab_Handle_Locks).AllocatorInstance.Data[uVar11] == (FScriptContainerElement)0x1
           ) {
          pAVar1 = this->handler_holder;
          uVar6 = 0;
          uVar5 = uVar6;
          if ((int)uVar10 < (pAVar1->physics_handle_array).ArrayNum) {
            uVar5 = uVar12;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(longlong *)((pAVar1->physics_handle_array).AllocatorInstance.Data + uVar11 * 8) != 0
             ) {
            pAVar1 = this->handler_holder;
            uVar5 = uVar6;
            if ((int)uVar10 < (pAVar1->physics_handle_array).ArrayNum) {
              uVar5 = uVar12;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pUVar7 = UPhysicsHandleComponent::GetGrabbedComponent
                               (*(UPhysicsHandleComponent **)
                                 ((pAVar1->physics_handle_array).AllocatorInstance.Data + uVar11 * 8
                                 ));
            if (pUVar7 != (UPrimitiveComponent *)0x0) {
              pAVar1 = this->handler_holder;
              uVar5 = uVar6;
              if ((int)uVar10 < (pAVar1->physics_handle_array).ArrayNum) {
                uVar5 = uVar12;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              (**(code **)(**(longlong **)
                             ((pAVar1->physics_handle_array).AllocatorInstance.Data + uVar11 * 8) +
                          0x500))();
              if ((int)uVar10 < (this->Grab_Handle_Locks).ArrayNum) {
                uVar6 = uVar12;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              (this->Grab_Handle_Locks).AllocatorInstance.Data[uVar11] =
                   (FScriptContainerElement)0x0;
            }
          }
        }
        uVar9 = (ulonglong)(uVar10 + 1);
        uVar11 = uVar11 + 1;
      } while ((int)(uVar10 + 1) < (this->handler_holder->physics_handle_array).ArrayNum);
    }
    local_a8 = &local_b8;
    this->is_released = true;
    local_b0 = UE::Core::Private::Function::
               TFunctionRefCaller<`UDragonIKPhysicsComponent::ReleaseAllHandles'::__l8::<lambda_1>,void,FBodyInstance_*>
               ::Call;
    local_b8 = this;
    USkeletalMeshComponent::ForEachBodyBelow
              (this->owning_skeleton,this->Root_Clamping_Bone,true,false,
               (TFunctionRef<void___cdecl(FBodyInstance_*)> *)&local_b0);
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 0;
    local_c8.ArrayMax = 0;
    USceneComponent::GetParentComponents((USceneComponent *)this->owning_skeleton,&local_c8);
    if (0 < local_c8.ArrayNum) {
      this->mesh_parent_reference = *(USceneComponent **)local_c8.AllocatorInstance.Data;
      pTVar8 = USceneComponent::GetRelativeTransform
                         ((USceneComponent *)this->owning_skeleton,&local_98);
      dVar3 = (pTVar8->Rotation).XY.m128d_f64[1];
      (this->relative_mesh_transform).Rotation.XY.m128d_f64[0] = (pTVar8->Rotation).XY.m128d_f64[0];
      (this->relative_mesh_transform).Rotation.XY.m128d_f64[1] = dVar3;
      dVar3 = (pTVar8->Rotation).ZW.m128d_f64[1];
      (this->relative_mesh_transform).Rotation.ZW.m128d_f64[0] = (pTVar8->Rotation).ZW.m128d_f64[0];
      (this->relative_mesh_transform).Rotation.ZW.m128d_f64[1] = dVar3;
      dVar3 = (pTVar8->Translation).XY.m128d_f64[1];
      (this->relative_mesh_transform).Translation.XY.m128d_f64[0] =
           (pTVar8->Translation).XY.m128d_f64[0];
      (this->relative_mesh_transform).Translation.XY.m128d_f64[1] = dVar3;
      dVar3 = (pTVar8->Translation).ZW.m128d_f64[1];
      (this->relative_mesh_transform).Translation.ZW.m128d_f64[0] =
           (pTVar8->Translation).ZW.m128d_f64[0];
      (this->relative_mesh_transform).Translation.ZW.m128d_f64[1] = dVar3;
      dVar3 = (pTVar8->Scale3D).XY.m128d_f64[1];
      (this->relative_mesh_transform).Scale3D.XY.m128d_f64[0] = (pTVar8->Scale3D).XY.m128d_f64[0];
      (this->relative_mesh_transform).Scale3D.XY.m128d_f64[1] = dVar3;
      dVar3 = (pTVar8->Scale3D).ZW.m128d_f64[1];
      (this->relative_mesh_transform).Scale3D.ZW.m128d_f64[0] = (pTVar8->Scale3D).ZW.m128d_f64[0];
      (this->relative_mesh_transform).Scale3D.ZW.m128d_f64[1] = dVar3;
    }
    if (param_1) {
      USkeletalMeshComponent::SetAllBodiesSimulatePhysics(this->owning_skeleton,true);
      this->ragdoll_mode = true;
    }
    if (this->use_auto_blending_logic == false) {
      this->ragdoll_mode = false;
    }
    if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    this->slight_delay_counter = 0.0;
  }
  return;
}

// Server_CacheSimulationStates_Implementation @ 14d357550

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Server_CacheSimulationStates_Implementation
          (UDragonIKPhysicsComponent *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKPhysicsComponent_Multicast_CacheSimulationStates
                     );
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014d2a95cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// Server_CacheSimulationStates_Validate @ 14d357560

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDragonIKPhysicsComponent::Server_CacheSimulationStates_Validate(UDragonIKPhysicsComponent *this)

{
  return true;
}

// Server_Control_Bone_Handle_Implementation @ 14d357570

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Server_Control_Bone_Handle_Implementation
          (UDragonIKPhysicsComponent *this,FName param_1,TTransform<double> *param_2,bool param_3)

{
  TTransform<double> local_68;
  
  local_68.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  local_68.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
  local_68.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  local_68.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
  local_68.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  local_68.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
  local_68.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  local_68.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
  local_68.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  local_68.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
  local_68.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  local_68.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
  Multicast_Control_Bone_Handle(this,param_1,&local_68,param_3);
  return;
}

// Server_Control_Bone_Handle_Validate @ 14d3575d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDragonIKPhysicsComponent::Server_Control_Bone_Handle_Validate
          (UDragonIKPhysicsComponent *this,FName param_1,TTransform<double> *param_2,bool param_3)

{
  return true;
}

// Server_DragonIKSimulatePhysics_Implementation @ 14d357620

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Server_DragonIKSimulatePhysics_Implementation
          (UDragonIKPhysicsComponent *this,USkeletalMeshComponent *param_1,FName param_2,
          bool param_3)

{
  UFunction *pUVar1;
  USkeletalMeshComponent *pUStack_28;
  FName FStack_20;
  undefined1 uStack_18;
  
  pUStack_28 = param_1;
  FStack_20 = param_2;
  uStack_18 = param_3;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UDragonIKPhysicsComponent_Multicast_DragonIKSimulatePhysics);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&pUStack_28);
  return;
}

// Server_DragonIKSimulatePhysics_Validate @ 14d357630

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDragonIKPhysicsComponent::Server_DragonIKSimulatePhysics_Validate
          (UDragonIKPhysicsComponent *this,USkeletalMeshComponent *param_1,FName param_2,
          bool param_3)

{
  return true;
}

// Server_FirstTimeInitialization_Implementation @ 14d357660

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Server_FirstTimeInitialization_Implementation
          (UDragonIKPhysicsComponent *this,USkeletalMeshComponent *param_1)

{
  UFunction *pUVar1;
  USkeletalMeshComponent *apUStackX_8 [4];
  
  apUStackX_8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UDragonIKPhysicsComponent_Multicast_FirstTimeInitialization);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,apUStackX_8);
  return;
}

// Server_FirstTimeInitialization_Validate @ 14d357680

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDragonIKPhysicsComponent::Server_FirstTimeInitialization_Validate
          (UDragonIKPhysicsComponent *this,USkeletalMeshComponent *param_1)

{
  return true;
}

// Server_Modify_Reset_Bone_Info_Implementation @ 14d3576e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Server_Modify_Reset_Bone_Info_Implementation
          (UDragonIKPhysicsComponent *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  UFunction *pUVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> TStack_18;
  
  if (0 < param_1->ArrayNum) {
    TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_18.ArrayNum = 0;
    TStack_18.ArrayMax = 0;
    if (&TStack_18 != param_1) {
      uVar1 = param_1->ArrayNum;
      _Src = (param_1->AllocatorInstance).Data;
      TStack_18.ArrayMax = 0;
      TStack_18.ArrayNum = uVar1;
      if (uVar1 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,uVar1,0,&TStack_18.AllocatorInstance,uVar1,&TStack_18.ArrayMax);
        memcpy(TStack_18.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 << 3);
      }
    }
    pUVar2 = UObject::FindFunctionChecked
                       ((UObject *)this,
                        NAME_UDragonIKPhysicsComponent_Multicast_Modify_Reset_Bone_Info);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&TStack_18);
    if (TStack_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_18.AllocatorInstance.Data);
    }
    return;
  }
  return;
}

// Server_Modify_Reset_Bone_Info_Validate @ 14d357700

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDragonIKPhysicsComponent::Server_Modify_Reset_Bone_Info_Validate
          (UDragonIKPhysicsComponent *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  return param_1->ArrayNum != 0;
}

// Server_OnHitCallback_Implementation @ 14d357710

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Server_OnHitCallback_Implementation
          (UDragonIKPhysicsComponent *this,FName param_1)

{
  UFunction *pUVar1;
  FName aFStackX_8 [4];
  
  aFStackX_8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKPhysicsComponent_Multicast_OnHitCallback);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,aFStackX_8);
  return;
}

// Server_OnHitCallback_Validate @ 14d357720

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDragonIKPhysicsComponent::Server_OnHitCallback_Validate
          (UDragonIKPhysicsComponent *this,FName param_1)

{
  return true;
}

// Server_PerformActiveRagdoll_Implementation @ 14d357730

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Server_PerformActiveRagdoll_Implementation
          (UDragonIKPhysicsComponent *this,float param_1)

{
  UFunction *pUVar1;
  float afStackX_10 [6];
  
  afStackX_10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKPhysicsComponent_Multicast_PerformActiveRagdoll)
  ;
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,afStackX_10);
  return;
}

// Server_PerformActiveRagdoll_Validate @ 14d357740

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDragonIKPhysicsComponent::Server_PerformActiveRagdoll_Validate
          (UDragonIKPhysicsComponent *this,float param_1)

{
  return true;
}

// Server_ReGrabAllHandles_Implementation @ 14d357750

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Server_ReGrabAllHandles_Implementation
          (UDragonIKPhysicsComponent *this,bool param_1)

{
  UFunction *pUVar1;
  undefined1 auStackX_10 [24];
  
  auStackX_10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKPhysicsComponent_Multicast_ReGrabAllHandles);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,auStackX_10);
  return;
}

// Server_ReGrabAllHandles_Validate @ 14d357760

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDragonIKPhysicsComponent::Server_ReGrabAllHandles_Validate
          (UDragonIKPhysicsComponent *this,bool param_1)

{
  return true;
}

// Server_ReleaseAllHandles_Implementation @ 14d357770

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Server_ReleaseAllHandles_Implementation
          (UDragonIKPhysicsComponent *this,bool param_1)

{
  UFunction *pUVar1;
  undefined1 auStackX_10 [24];
  
  auStackX_10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKPhysicsComponent_Multicast_ReleaseAllHandles);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,auStackX_10);
  return;
}

// Server_ReleaseAllHandles_Validate @ 14d357780

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDragonIKPhysicsComponent::Server_ReleaseAllHandles_Validate
          (UDragonIKPhysicsComponent *this,bool param_1)

{
  return true;
}

// Server_SetInterpolation_Implementation @ 14d357850

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Server_SetInterpolation_Implementation
          (UDragonIKPhysicsComponent *this,int param_1)

{
  UFunction *pUVar1;
  int aiStackX_10 [6];
  
  aiStackX_10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKPhysicsComponent_Multicast_SetInterpolation);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,aiStackX_10);
  return;
}

// Server_SetInterpolation_Validate @ 14d357860

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDragonIKPhysicsComponent::Server_SetInterpolation_Validate
          (UDragonIKPhysicsComponent *this,int param_1)

{
  return 0 < param_1;
}

// Server_UpdatePhysanimData_Implementation @ 14d357890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::Server_UpdatePhysanimData_Implementation
          (UDragonIKPhysicsComponent *this,int param_1,int param_2,int param_3,int param_4)

{
  UFunction *pUVar1;
  undefined1 auStack_48 [32];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  iStack_1c = param_4;
  iStack_28 = param_1;
  iStack_24 = param_2;
  iStack_20 = param_3;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKPhysicsComponent_Multicast_UpdatePhysanimData);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&iStack_28);
  return;
}

// Server_UpdatePhysanimData_Validate @ 14d3578a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDragonIKPhysicsComponent::Server_UpdatePhysanimData_Validate
          (UDragonIKPhysicsComponent *this,int param_1,int param_2,int param_3,int param_4)

{
  return true;
}

// SetInterpolation @ 14d357da0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::SetInterpolation(UDragonIKPhysicsComponent *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ADragonIKPhysicsHolder *pAVar6;
  
  pAVar6 = this->handler_holder;
  if (((pAVar6 != (ADragonIKPhysicsHolder *)0x0) &&
      (this->owning_skeleton != (USkeletalMeshComponent *)0x0)) &&
     (uVar4 = 0, 0 < (pAVar6->physics_handle_array).ArrayNum)) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (pAVar6->physics_handle_array).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(longlong *)((pAVar6->physics_handle_array).AllocatorInstance.Data + lVar5) != 0) {
        pAVar6 = this->handler_holder;
        this->Interpolation_Speed = param_1;
        uVar3 = 0;
        if ((int)uVar4 < (pAVar6->physics_handle_array).ArrayNum) {
          uVar3 = ~uVar4 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        UPhysicsHandleComponent::SetLinearStiffness
                  (*(UPhysicsHandleComponent **)
                    ((pAVar6->physics_handle_array).AllocatorInstance.Data + lVar5),
                   (float)(this->Interpolation_Speed * 10));
      }
      pAVar6 = this->handler_holder;
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (pAVar6->physics_handle_array).ArrayNum);
  }
  return;
}

// SetSkeletonInput @ 14d357f00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::SetSkeletonInput
          (UDragonIKPhysicsComponent *this,USkeletalMeshComponent *param_1)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar9;
  FString *pFVar10;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar11;
  code *pcVar12;
  FName FVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  FString local_178;
  longlong local_168;
  size_t local_160;
  FName local_158;
  FName local_150;
  FName local_148;
  undefined8 local_140 [2];
  ForAnyElementType local_130 [2];
  ForAnyElementType local_120 [2];
  ForAnyElementType local_110 [2];
  undefined8 local_100 [2];
  undefined8 local_f0 [2];
  undefined8 local_e0 [2];
  undefined8 local_d0 [2];
  ForAnyElementType local_c0 [2];
  ForAnyElementType local_b0 [2];
  undefined8 local_a0 [2];
  undefined8 local_90 [2];
  undefined8 local_80 [2];
  ForAnyElementType local_70 [2];
  ForAnyElementType local_60 [4];
  
  pTVar2 = &this->Bodies_Physics_Blend;
  this->owning_skeleton = param_1;
  if (pTVar2 != (TArray<float,TSizedDefaultAllocator<32>_> *)local_140) {
    pFVar20 = (pTVar2->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Bodies_Physics_Blend).ArrayNum = 0;
    (this->Bodies_Physics_Blend).ArrayMax = 0;
  }
  pTVar2 = &this->Extra_Bone_Delay_Array;
  if (pTVar2 != (TArray<float,TSizedDefaultAllocator<32>_> *)local_130) {
    pFVar20 = (pTVar2->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Extra_Bone_Delay_Array).ArrayNum = 0;
    (this->Extra_Bone_Delay_Array).ArrayMax = 0;
  }
  pTVar3 = &this->Bodies_Physics_Hit_Bools;
  if (pTVar3 != (TArray<bool,TSizedDefaultAllocator<32>_> *)local_120) {
    pFVar20 = (pTVar3->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Bodies_Physics_Hit_Bools).ArrayNum = 0;
    (this->Bodies_Physics_Hit_Bools).ArrayMax = 0;
  }
  pTVar4 = &this->Grab_Handle_Tasks_Queue;
  if (pTVar4 != (TArray<bool,TSizedDefaultAllocator<32>_> *)local_110) {
    pFVar20 = (pTVar4->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Grab_Handle_Tasks_Queue).ArrayNum = 0;
    (this->Grab_Handle_Tasks_Queue).ArrayMax = 0;
  }
  pTVar5 = &this->Physics_States;
  if (pTVar5 != (TArray<bool,TSizedDefaultAllocator<32>_> *)local_100) {
    pFVar20 = (pTVar5->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Physics_States).ArrayNum = 0;
    (this->Physics_States).ArrayMax = 0;
  }
  pTVar5 = &this->Grab_Handle_Locks;
  if (pTVar5 != (TArray<bool,TSizedDefaultAllocator<32>_> *)local_f0) {
    pFVar20 = (pTVar5->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Grab_Handle_Locks).ArrayNum = 0;
    (this->Grab_Handle_Locks).ArrayMax = 0;
  }
  pTVar5 = &this->Remap_Physics_States_Queue;
  if (pTVar5 != (TArray<bool,TSizedDefaultAllocator<32>_> *)local_e0) {
    pFVar20 = (pTVar5->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Remap_Physics_States_Queue).ArrayNum = 0;
    (this->Remap_Physics_States_Queue).ArrayMax = 0;
  }
  pTVar6 = &this->Raw_Animation_Transforms;
  if (pTVar6 != (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)local_d0) {
    pFVar20 = (pTVar6->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Raw_Animation_Transforms).ArrayNum = 0;
    (this->Raw_Animation_Transforms).ArrayMax = 0;
  }
  pTVar7 = &this->Parent_Bone_Map;
  if (pTVar7 != (TArray<FName,TSizedDefaultAllocator<32>_> *)local_c0) {
    pFVar20 = (pTVar7->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Parent_Bone_Map).ArrayNum = 0;
    (this->Parent_Bone_Map).ArrayMax = 0;
  }
  pTVar5 = &this->Autoblend_Reverse_Bools;
  if (pTVar5 != (TArray<bool,TSizedDefaultAllocator<32>_> *)local_b0) {
    pFVar20 = (pTVar5->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Autoblend_Reverse_Bools).ArrayNum = 0;
    (this->Autoblend_Reverse_Bools).ArrayMax = 0;
  }
  pTVar6 = &this->control_bone_relative_transforms;
  if (pTVar6 != (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)local_a0) {
    pFVar20 = (pTVar6->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->control_bone_relative_transforms).ArrayNum = 0;
    (this->control_bone_relative_transforms).ArrayMax = 0;
  }
  pTVar6 = &this->custom_override_transforms;
  if (pTVar6 != (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)local_90) {
    pFVar20 = (pTVar6->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->custom_override_transforms).ArrayNum = 0;
    (this->custom_override_transforms).ArrayMax = 0;
  }
  pTVar8 = &this->custom_override_bool;
  if (pTVar8 != (TArray<bool,TSizedDefaultAllocator<32>_> *)local_80) {
    pFVar20 = (pTVar8->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->custom_override_bool).ArrayNum = 0;
    (this->custom_override_bool).ArrayMax = 0;
  }
  pTVar9 = &this->Last_Second_Parent_Bone_Map;
  if (pTVar9 != (TArray<FName,TSizedDefaultAllocator<32>_> *)local_70) {
    pFVar20 = (pTVar9->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Last_Second_Parent_Bone_Map).ArrayNum = 0;
    (this->Last_Second_Parent_Bone_Map).ArrayMax = 0;
  }
  iVar15 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)this->owning_skeleton);
  iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar15,&(this->Bodies_Physics_Blend).AllocatorInstance,
                      &(this->Bodies_Physics_Blend).ArrayNum,&(this->Bodies_Physics_Blend).ArrayMax)
  ;
  memset((this->Bodies_Physics_Blend).AllocatorInstance.Data + (longlong)iVar16 * 4,0,
         (longlong)iVar15 << 2);
  iVar15 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)this->owning_skeleton);
  iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar15,&pTVar2->AllocatorInstance,&(this->Extra_Bone_Delay_Array).ArrayNum
                      ,&(this->Extra_Bone_Delay_Array).ArrayMax);
  memset((pTVar2->AllocatorInstance).Data + (longlong)iVar16 * 4,0,(longlong)iVar15 << 2);
  iVar15 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)this->owning_skeleton);
  iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,iVar15,&pTVar3->AllocatorInstance,
                      &(this->Bodies_Physics_Hit_Bools).ArrayNum,
                      &(this->Bodies_Physics_Hit_Bools).ArrayMax);
  memset((pTVar3->AllocatorInstance).Data + iVar16,0,(longlong)iVar15);
  iVar15 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)this->owning_skeleton);
  iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,iVar15,&pTVar4->AllocatorInstance,
                      &(this->Grab_Handle_Tasks_Queue).ArrayNum,
                      &(this->Grab_Handle_Tasks_Queue).ArrayMax);
  memset((pTVar4->AllocatorInstance).Data + iVar16,0,(longlong)iVar15);
  iVar15 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)this->owning_skeleton);
  iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,iVar15,&(this->Physics_States).AllocatorInstance,
                      &(this->Physics_States).ArrayNum,&(this->Physics_States).ArrayMax);
  memset((this->Physics_States).AllocatorInstance.Data + iVar16,0,(longlong)iVar15);
  iVar15 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)this->owning_skeleton);
  iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,iVar15,&(this->Grab_Handle_Locks).AllocatorInstance,
                      &(this->Grab_Handle_Locks).ArrayNum,&(this->Grab_Handle_Locks).ArrayMax);
  memset((this->Grab_Handle_Locks).AllocatorInstance.Data + iVar16,0,(longlong)iVar15);
  iVar15 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)this->owning_skeleton);
  iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,iVar15,&(this->Remap_Physics_States_Queue).AllocatorInstance,
                      &(this->Remap_Physics_States_Queue).ArrayNum,
                      &(this->Remap_Physics_States_Queue).ArrayMax);
  memset((this->Remap_Physics_States_Queue).AllocatorInstance.Data + iVar16,0,(longlong)iVar15);
  iVar15 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)this->owning_skeleton);
  iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x60,0x10,iVar15,&(this->Raw_Animation_Transforms).AllocatorInstance,
                      &(this->Raw_Animation_Transforms).ArrayNum,
                      &(this->Raw_Animation_Transforms).ArrayMax);
  DefaultConstructItems<UE::Math::TTransform<double>,int>
            ((this->Raw_Animation_Transforms).AllocatorInstance.Data + (longlong)iVar16 * 0x60,
             iVar15);
  ::FString::FString(&local_178,"changed..");
  pFVar10 = &this->test_debug;
  if (pFVar10 != &local_178) {
    pFVar20 = (pFVar10->Data).AllocatorInstance.Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pFVar10->Data).AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
    (this->test_debug).Data.ArrayNum = local_178.Data.ArrayNum;
    (this->test_debug).Data.ArrayMax = local_178.Data.ArrayMax;
    local_178.Data.ArrayNum = 0;
    local_178.Data.ArrayMax = 0;
    local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  uVar23 = 0;
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  iVar15 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)this->owning_skeleton);
  iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,4,iVar15,&pTVar7->AllocatorInstance,&(this->Parent_Bone_Map).ArrayNum,
                      &(this->Parent_Bone_Map).ArrayMax);
  memset((pTVar7->AllocatorInstance).Data + (longlong)iVar16 * 8,0,(longlong)iVar15 << 3);
  iVar15 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)this->owning_skeleton);
  iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,iVar15,&pTVar5->AllocatorInstance,
                      &(this->Autoblend_Reverse_Bools).ArrayNum,
                      &(this->Autoblend_Reverse_Bools).ArrayMax);
  memset((pTVar5->AllocatorInstance).Data + iVar16,0,(longlong)iVar15);
  iVar15 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)this->owning_skeleton);
  iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,4,iVar15,&pTVar9->AllocatorInstance,
                      &(this->Last_Second_Parent_Bone_Map).ArrayNum,
                      &(this->Last_Second_Parent_Bone_Map).ArrayMax);
  memset((pTVar9->AllocatorInstance).Data + (longlong)iVar16 * 8,0,(longlong)iVar15 << 3);
  CalculateParentInfluenceBones(this);
  uVar17 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)this->owning_skeleton);
  uVar21 = (ulonglong)(int)uVar17;
  pTVar11 = &this->bone_to_bone_map;
  piVar1 = &(this->bone_to_bone_map).ArrayNum;
  if (pTVar11 !=
      (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)local_60) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar11->AllocatorInstance).Data,*piVar1)
    ;
    pFVar20 = (pTVar11->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->bone_to_bone_map).ArrayMax = 0;
    *piVar1 = 0;
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)0x0,0);
  iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x10,8,uVar17,&pTVar11->AllocatorInstance,piVar1,
                      &(this->bone_to_bone_map).ArrayMax);
  memset((pTVar11->AllocatorInstance).Data + (longlong)iVar15 * 0x10,0,uVar21 << 4);
  if (0 < (int)uVar17) {
    local_160 = uVar21 * 4;
    local_168 = 0;
    uVar26 = uVar23;
    do {
      lVar24 = local_168;
      uVar22 = (uint)uVar23;
      uVar19 = ~uVar22 >> 0x1f;
      uVar25 = 0;
      if ((int)uVar22 < (this->Extra_Bone_Delay_Array).ArrayNum) {
        uVar25 = uVar19;
      }
      if ((uVar25 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      *(undefined4 *)((this->Extra_Bone_Delay_Array).AllocatorInstance.Data + lVar24) = 0;
      uVar25 = 0;
      if ((int)uVar22 < *piVar1) {
        uVar25 = uVar19;
      }
      if ((uVar25 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar20 = (this->bone_to_bone_map).AllocatorInstance.Data + uVar26;
      iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,(int)uVar21,(ForAnyElementType *)pFVar20,(int *)(pFVar20 + 8),
                          (int *)(pFVar20 + 0xc));
      memset((void *)(*(longlong *)&pFVar20->field_0x0 + (longlong)iVar15 * 4),0,local_160);
      uVar25 = 0;
      lVar24 = 0;
      do {
        USkinnedMeshComponent::GetBoneName
                  ((USkinnedMeshComponent *)this->owning_skeleton,(int)&local_150);
        USkinnedMeshComponent::GetBoneName
                  ((USkinnedMeshComponent *)this->owning_skeleton,(int)&local_158);
        FVar13 = local_158;
        iVar15 = USkinnedMeshComponent::GetBoneIndex
                           ((USkinnedMeshComponent *)this->owning_skeleton,local_150);
        iVar16 = USkinnedMeshComponent::GetBoneIndex
                           ((USkinnedMeshComponent *)this->owning_skeleton,FVar13);
        if ((iVar16 != -1) && (iVar16 < iVar15)) {
          iVar16 = 0;
          iVar15 = USkinnedMeshComponent::GetNumBones
                             ((USkinnedMeshComponent *)this->owning_skeleton);
          if (0 < iVar15) {
            do {
              USkinnedMeshComponent::GetParentBone
                        ((USkinnedMeshComponent *)this->owning_skeleton,(FName)&local_148);
              if (local_148 == FVar13) {
                uVar18 = 0;
                if ((int)uVar22 < *piVar1) {
                  uVar18 = uVar19;
                }
                if ((uVar18 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pFVar20 = (this->bone_to_bone_map).AllocatorInstance.Data;
                uVar18 = 0;
                if ((int)uVar25 < *(int *)(pFVar20 + uVar26 + 8)) {
                  uVar18 = ~uVar25 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                *(undefined4 *)(*(longlong *)(pFVar20 + uVar26) + lVar24) = 1;
                goto LAB_14d358859;
              }
              iVar16 = iVar16 + 1;
              iVar15 = USkinnedMeshComponent::GetNumBones
                                 ((USkinnedMeshComponent *)this->owning_skeleton);
            } while (iVar16 < iVar15);
          }
        }
        uVar18 = 0;
        if ((int)uVar22 < *piVar1) {
          uVar18 = uVar19;
        }
        if ((uVar18 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar20 = (this->bone_to_bone_map).AllocatorInstance.Data;
        uVar18 = 0;
        if ((int)uVar25 < *(int *)(pFVar20 + uVar26 + 8)) {
          uVar18 = ~uVar25 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        *(undefined4 *)(*(longlong *)(pFVar20 + uVar26) + lVar24) = 0xffffffff;
LAB_14d358859:
        uVar25 = uVar25 + 1;
        lVar24 = lVar24 + 4;
      } while ((int)uVar25 < (int)uVar17);
      uVar23 = (ulonglong)(uVar22 + 1);
      uVar21 = (ulonglong)uVar17;
      local_168 = local_168 + 4;
      uVar26 = uVar26 + 0x10;
    } while ((int)(uVar22 + 1) < (int)uVar17);
  }
  return;
}

// TickComponent @ 14d35c560

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::TickComponent
          (UDragonIKPhysicsComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  float fVar1;
  
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  if (this->tick_counter < 100) {
    this->tick_counter = this->tick_counter + 1;
  }
  fVar1 = __real_38d1b717;
  if (this->blend_to_zero != false) {
    fVar1 = 0.0;
  }
  this->blend_min_value = fVar1;
  ModifyAllHandleTransforms(this);
  UpdateBodyBlends(this);
  return;
}

// UpdateBodyBlends @ 14d35dfa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDragonIKPhysicsComponent::UpdateBodyBlends(UDragonIKPhysicsComponent *this)

{
  float fVar1;
  USkeletalMeshComponent *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  UWorld *pUVar6;
  FRichCurve *pFVar7;
  FScriptContainerElement *pFVar8;
  TFunctionRef<void___cdecl(FBodyInstance_*)> *pTVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  UDragonIKPhysicsComponent *local_res8;
  UDragonIKPhysicsComponent *local_res10;
  UDragonIKPhysicsComponent *local_res18;
  UDragonIKPhysicsComponent *local_res20;
  UDragonIKPhysicsComponent *local_e8;
  code *local_e0;
  UDragonIKPhysicsComponent **local_d8;
  code *local_d0;
  UDragonIKPhysicsComponent **local_c8;
  code *local_c0;
  UDragonIKPhysicsComponent **local_b8;
  code *local_b0;
  UDragonIKPhysicsComponent **local_a8;
  code *local_a0;
  UDragonIKPhysicsComponent **local_98;
  
  this_00 = this->owning_skeleton;
  if (((this_00 == (USkeletalMeshComponent *)0x0) ||
      (this->handler_holder == (ADragonIKPhysicsHolder *)0x0)) || (this->is_released != false)) {
    if ((this->use_auto_blending_logic == true) &&
       (uVar13 = 0, 0 < (this->Bodies_Physics_Blend).ArrayNum)) {
      lVar14 = 0;
      while( true ) {
        uVar5 = 0;
        if ((int)uVar13 < (this->Bodies_Physics_Blend).ArrayNum) {
          uVar5 = ~uVar13 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) break;
        uVar13 = uVar13 + 1;
        *(undefined4 *)((this->Bodies_Physics_Blend).AllocatorInstance.Data + lVar14) = 0x3f800000;
        lVar14 = lVar14 + 4;
        if ((this->Bodies_Physics_Blend).ArrayNum <= (int)uVar13) {
          return;
        }
      }
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pUVar6 = (UWorld *)this_00->_padding_;
    if (pUVar6 == (UWorld *)0x0) {
      pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00);
    }
    fVar1 = pUVar6->DeltaTimeSeconds;
    uVar17 = 0;
    this->largest_blend_value = 0.0;
    this->get_up_timer = fVar1 + this->get_up_timer;
    fVar1 = __real_3f800000;
    uVar13 = 0;
    uVar5 = 0;
    uVar12 = uVar17;
    uVar15 = uVar17;
    uVar16 = uVar17;
    if (0 < (this->Bodies_Physics_Blend).ArrayNum) {
      do {
        uVar11 = (uint)uVar12;
        uVar18 = ~uVar11 >> 0x1f;
        uVar4 = 0;
        if ((int)uVar11 < (this->Extra_Bone_Delay_Array).ArrayNum) {
          uVar4 = uVar18;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar19 = this->hit_delay_time;
        pFVar8 = (this->Extra_Bone_Delay_Array).AllocatorInstance.Data + uVar16;
        if (fVar19 < *(float *)pFVar8 || fVar19 == *(float *)pFVar8) {
          uVar4 = uVar5;
          if ((int)uVar11 < (this->Extra_Bone_Delay_Array).ArrayNum) {
            uVar4 = uVar18;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar8 = (this->Extra_Bone_Delay_Array).AllocatorInstance.Data;
        }
        else {
          pUVar6 = AActor::GetWorld((AActor *)this->_padding_);
          fVar19 = pUVar6->DeltaTimeSeconds;
          uVar4 = uVar5;
          if ((int)uVar11 < (this->Extra_Bone_Delay_Array).ArrayNum) {
            uVar4 = uVar18;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar8 = (this->Extra_Bone_Delay_Array).AllocatorInstance.Data;
          fVar19 = fVar19 + *(float *)(pFVar8 + uVar15 * 4);
        }
        *(float *)(pFVar8 + uVar15 * 4) = fVar19;
        lVar14 = (longlong)(int)uVar11;
        if (this->use_auto_blending_logic == false) {
          uVar4 = uVar13;
          if ((int)uVar11 < (this->Autoblend_Reverse_Bools).ArrayNum) {
            uVar4 = uVar18;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((this->Autoblend_Reverse_Bools).AllocatorInstance.Data[lVar14] ==
              (FScriptContainerElement)0x0) {
            pUVar6 = AActor::GetWorld((AActor *)this->_padding_);
            fVar19 = pUVar6->DeltaTimeSeconds;
            fVar20 = this->Hit_Enable_Speed;
            uVar4 = uVar13;
            if ((int)uVar11 < (this->Bodies_Physics_Blend).ArrayNum) {
              uVar4 = uVar18;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar8 = (this->Bodies_Physics_Blend).AllocatorInstance.Data;
            *(float *)(pFVar8 + lVar14 * 4) = fVar19 * fVar20 + *(float *)(pFVar8 + lVar14 * 4);
          }
          else {
            pFVar7 = FRuntimeFloatCurve::GetRichCurve(&this->Physanim_Enter_Curve);
            fVar19 = FRichCurve::Eval(pFVar7,this->get_up_timer,0.0);
            uVar4 = uVar13;
            if ((int)uVar11 < (this->Bodies_Physics_Blend).ArrayNum) {
              uVar4 = uVar18;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(float *)((this->Bodies_Physics_Blend).AllocatorInstance.Data + uVar15 * 4) = fVar19;
          }
          uVar4 = uVar13;
          if ((int)uVar11 < (this->Bodies_Physics_Blend).ArrayNum) {
            uVar4 = uVar18;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar8 = (this->Bodies_Physics_Blend).AllocatorInstance.Data + uVar15 * 4;
          if (fVar1 < *(float *)pFVar8 || fVar1 == *(float *)pFVar8) {
            uVar4 = uVar13;
            if ((int)uVar11 < (this->Physics_States).ArrayNum) {
              uVar4 = uVar18;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((this->Physics_States).AllocatorInstance.Data[lVar14] ==
                (FScriptContainerElement)0x0) {
              uVar4 = uVar13;
              if ((int)uVar11 < (this->Autoblend_Reverse_Bools).ArrayNum) {
                uVar4 = uVar18;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              (this->Autoblend_Reverse_Bools).AllocatorInstance.Data[uVar15] =
                   (FScriptContainerElement)0x1;
            }
          }
        }
        else {
          uVar4 = uVar13;
          if ((int)uVar11 < (this->Bodies_Physics_Hit_Bools).ArrayNum) {
            uVar4 = uVar18;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((this->Bodies_Physics_Hit_Bools).AllocatorInstance.Data[lVar14] ==
              (FScriptContainerElement)0x0) {
            if (this->ragdoll_mode == false) {
              pUVar6 = AActor::GetWorld((AActor *)this->_padding_);
              fVar19 = pUVar6->DeltaTimeSeconds;
              fVar20 = this->Hit_Disable_Speed;
              uVar4 = uVar13;
              if ((int)uVar11 < (this->Bodies_Physics_Blend).ArrayNum) {
                uVar4 = uVar18;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar8 = (this->Bodies_Physics_Blend).AllocatorInstance.Data;
              *(float *)(pFVar8 + lVar14 * 4) = *(float *)(pFVar8 + lVar14 * 4) - fVar19 * fVar20;
            }
            else {
              pFVar7 = FRuntimeFloatCurve::GetRichCurve(&this->Physanim_Enter_Curve);
              fVar19 = FRichCurve::Eval(pFVar7,this->get_up_timer,0.0);
              uVar4 = uVar13;
              if ((int)uVar11 < (this->Bodies_Physics_Blend).ArrayNum) {
                uVar4 = uVar18;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              *(float *)((this->Bodies_Physics_Blend).AllocatorInstance.Data + uVar15 * 4) = fVar19;
            }
          }
          else {
            uVar4 = uVar13;
            if ((int)uVar11 < (this->Bodies_Physics_Hit_Bools).ArrayNum) {
              uVar4 = uVar18;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((this->Bodies_Physics_Hit_Bools).AllocatorInstance.Data[lVar14] ==
                (FScriptContainerElement)0x1) {
              pUVar6 = AActor::GetWorld((AActor *)this->_padding_);
              fVar19 = pUVar6->DeltaTimeSeconds;
              fVar20 = this->Hit_Enable_Speed;
              uVar4 = uVar13;
              if ((int)uVar11 < (this->Bodies_Physics_Blend).ArrayNum) {
                uVar4 = uVar18;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar8 = (this->Bodies_Physics_Blend).AllocatorInstance.Data;
              *(float *)(pFVar8 + lVar14 * 4) = fVar19 * fVar20 + *(float *)(pFVar8 + lVar14 * 4);
              uVar4 = uVar13;
              if ((int)uVar11 < (this->Extra_Bone_Delay_Array).ArrayNum) {
                uVar4 = uVar18;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if (this->hit_delay_time ==
                  *(float *)((this->Extra_Bone_Delay_Array).AllocatorInstance.Data + uVar15 * 4)) {
                uVar4 = uVar13;
                if ((int)uVar11 < (this->Bodies_Physics_Hit_Bools).ArrayNum) {
                  uVar4 = uVar18;
                }
                if ((uVar4 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                (this->Bodies_Physics_Hit_Bools).AllocatorInstance.Data[uVar15] =
                     (FScriptContainerElement)0x0;
              }
            }
          }
        }
        fVar19 = this->blend_min_value;
        uVar4 = uVar13;
        if ((int)uVar11 < (this->Bodies_Physics_Blend).ArrayNum) {
          uVar4 = uVar18;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar20 = *(float *)((this->Bodies_Physics_Blend).AllocatorInstance.Data + uVar15 * 4);
        if (fVar1 <= fVar20) {
          fVar20 = fVar1;
        }
        uVar4 = uVar13;
        if ((int)uVar11 < (this->Bodies_Physics_Blend).ArrayNum) {
          uVar4 = uVar18;
        }
        if (fVar20 <= fVar19) {
          fVar20 = fVar19;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(float *)((this->Bodies_Physics_Blend).AllocatorInstance.Data + uVar15 * 4) = fVar20;
        uVar4 = uVar13;
        if ((int)uVar11 < (this->Bodies_Physics_Blend).ArrayNum) {
          uVar4 = uVar18;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar19 = *(float *)((this->Bodies_Physics_Blend).AllocatorInstance.Data + uVar15 * 4);
        if (this->largest_blend_value <= fVar19 && fVar19 != this->largest_blend_value) {
          uVar4 = uVar13;
          if ((int)uVar11 < (this->Bodies_Physics_Blend).ArrayNum) {
            uVar4 = uVar18;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          this->largest_blend_value =
               *(float *)((this->Bodies_Physics_Blend).AllocatorInstance.Data + uVar15 * 4);
        }
        uVar12 = (ulonglong)(uVar11 + 1);
        uVar15 = uVar15 + 1;
        uVar16 = uVar16 + 4;
      } while ((int)(uVar11 + 1) < (this->Bodies_Physics_Blend).ArrayNum);
    }
    local_d8 = &local_res8;
    this->Grab_Tasks_Pending = false;
    local_e0 = UE::Core::Private::Function::
               TFunctionRefCaller<`UDragonIKPhysicsComponent::UpdateBodyBlends'::__l8::<lambda_1>,void,FBodyInstance_*>
               ::Call;
    local_res8 = this;
    USkeletalMeshComponent::ForEachBodyBelow
              (this->owning_skeleton,this->Custom_Root_Bone,true,false,
               (TFunctionRef<void___cdecl(FBodyInstance_*)> *)&local_e0);
    if (this->Grab_Tasks_Pending == false) {
      if (this->Need_To_Remap_PhysicsStates == true) {
        local_c8 = &local_res10;
        local_d0 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UDragonIKPhysicsComponent::UpdateBodyBlends'::__l52::<lambda_2>,void,FBodyInstance_*>
                   ::Call;
        local_res10 = this;
        USkeletalMeshComponent::ForEachBodyBelow
                  (this->owning_skeleton,this->Root_Clamping_Bone,true,false,
                   (TFunctionRef<void___cdecl(FBodyInstance_*)> *)&local_d0);
      }
      pFVar8 = (this->Remap_Physics_States_Queue).AllocatorInstance.Data;
      pFVar10 = pFVar8 + (this->Remap_Physics_States_Queue).ArrayNum;
      for (; pFVar8 != pFVar10; pFVar8 = pFVar8 + 1) {
        if (*pFVar8 == (FScriptContainerElement)0x1) goto LAB_14d35e90b;
      }
      this->Need_To_Remap_PhysicsStates = false;
    }
LAB_14d35e90b:
    if (this->modify_physics_states == true) {
      local_b8 = &local_res18;
      local_c0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UDragonIKPhysicsComponent::UpdateBodyBlends'::__l57::<lambda_3>,void,FBodyInstance_*>
                 ::Call;
      pTVar9 = (TFunctionRef<void___cdecl(FBodyInstance_*)> *)&local_c0;
      local_res18 = this;
    }
    else {
      local_a8 = &local_res20;
      local_b0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UDragonIKPhysicsComponent::UpdateBodyBlends'::__l59::<lambda_4>,void,FBodyInstance_*>
                 ::Call;
      pTVar9 = (TFunctionRef<void___cdecl(FBodyInstance_*)> *)&local_b0;
      local_res20 = this;
    }
    USkeletalMeshComponent::ForEachBodyBelow
              (this->owning_skeleton,this->Custom_Root_Bone,true,false,pTVar9);
    uVar15 = 1;
    uVar12 = uVar17;
    uVar16 = uVar17;
    if (0 < (this->Bodies_Physics_Blend).ArrayNum) {
      do {
        uVar11 = (uint)uVar12;
        uVar4 = uVar13;
        if ((int)uVar11 < (this->Bodies_Physics_Blend).ArrayNum) {
          uVar4 = ~uVar11 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (this->blend_min_value <
            *(float *)((this->Bodies_Physics_Blend).AllocatorInstance.Data + uVar16 * 4)) {
          uVar4 = uVar5;
          if ((int)uVar11 < (this->Physics_States).ArrayNum) {
            uVar4 = ~uVar11 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((this->Physics_States).AllocatorInstance.Data[uVar16] == (FScriptContainerElement)0x0)
          {
            uVar15 = uVar17;
          }
        }
        uVar12 = (ulonglong)(uVar11 + 1);
        uVar16 = uVar16 + 1;
      } while ((int)(uVar11 + 1) < (this->Bodies_Physics_Blend).ArrayNum);
      if ((char)uVar15 == '\0') {
        return;
      }
    }
    if (this->ragdoll_mode != false) {
      local_98 = &local_e8;
      local_a0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UDragonIKPhysicsComponent::UpdateBodyBlends'::__l67::<lambda_5>,void,FBodyInstance_*>
                 ::Call;
      local_e8 = this;
      USkeletalMeshComponent::ForEachBodyBelow
                (this->owning_skeleton,this->Custom_Root_Bone,true,false,
                 (TFunctionRef<void___cdecl(FBodyInstance_*)> *)&local_a0);
      this->ragdoll_mode = false;
    }
  }
  return;
}

// UpdatePhysanimData @ 14d35f660

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::UpdatePhysanimData
          (UDragonIKPhysicsComponent *this,int param_1,int param_2,int param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  ADragonIKPhysicsHolder *pAVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  float fVar15;
  int local_res8;
  int local_resc;
  int local_res10;
  int local_res18;
  int local_res20;
  
  fVar3 = __real_3f800000;
  pAVar10 = this->handler_holder;
  if (((pAVar10 != (ADragonIKPhysicsHolder *)0x0) &&
      (this->owning_skeleton != (USkeletalMeshComponent *)0x0)) &&
     (uVar13 = 0, 0 < (pAVar10->physics_handle_array).ArrayNum)) {
    lVar12 = 0;
    local_res10 = param_1;
    local_res18 = param_2;
    local_res20 = param_3;
    do {
      uVar11 = ~uVar13 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar13 < (pAVar10->physics_handle_array).ArrayNum) {
        uVar9 = uVar11;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(longlong *)((pAVar10->physics_handle_array).AllocatorInstance.Data + lVar12) != 0) {
        USkinnedMeshComponent::GetBoneName
                  ((USkinnedMeshComponent *)this->owning_skeleton,(int)&local_res8);
        uVar9 = 0;
        lVar14 = 0;
        fVar15 = fVar3;
        if (0 < (this->Override_Handle_Strength_Multiplier).ArrayNum) {
          lVar8 = 0;
          do {
            uVar7 = 0;
            if ((int)uVar9 < (this->Override_Handle_Strength_Multiplier).ArrayNum) {
              uVar7 = ~uVar9 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar1 = (this->Override_Handle_Strength_Multiplier).AllocatorInstance.Data;
            if ((*(int *)(pFVar1 + lVar8) == local_res8) &&
               (*(int *)(pFVar1 + lVar8 + 4) == local_resc)) {
              uVar7 = 0;
              if ((int)uVar9 < (this->Override_Handle_Strength_Multiplier).ArrayNum) {
                uVar7 = ~uVar9 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              fVar15 = *(float *)((this->Override_Handle_Strength_Multiplier).AllocatorInstance.Data
                                 + lVar14 * 0xc + 8);
              break;
            }
            uVar9 = uVar9 + 1;
            lVar14 = lVar14 + 1;
            lVar8 = lVar8 + 0xc;
          } while ((int)uVar9 < (this->Override_Handle_Strength_Multiplier).ArrayNum);
        }
        iVar5 = local_res20;
        iVar4 = local_res10;
        pAVar10 = this->handler_holder;
        this->Linear_Strength = local_res10;
        this->Linear_Damp = local_res20;
        this->Angular_Strength = param_4;
        this->Angular_Damp = param_4;
        uVar9 = 0;
        if ((int)uVar13 < (pAVar10->physics_handle_array).ArrayNum) {
          uVar9 = uVar11;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UPhysicsHandleComponent::SetLinearStiffness
                  (*(UPhysicsHandleComponent **)
                    ((pAVar10->physics_handle_array).AllocatorInstance.Data + lVar12),
                   (float)iVar4 * fVar15);
        pAVar10 = this->handler_holder;
        uVar9 = 0;
        if ((int)uVar13 < (pAVar10->physics_handle_array).ArrayNum) {
          uVar9 = uVar11;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UPhysicsHandleComponent::SetAngularStiffness
                  (*(UPhysicsHandleComponent **)
                    ((pAVar10->physics_handle_array).AllocatorInstance.Data + lVar12),
                   (float)local_res18 * fVar15);
        pAVar10 = this->handler_holder;
        uVar9 = 0;
        if ((int)uVar13 < (pAVar10->physics_handle_array).ArrayNum) {
          uVar9 = uVar11;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UPhysicsHandleComponent::SetLinearDamping
                  (*(UPhysicsHandleComponent **)
                    ((pAVar10->physics_handle_array).AllocatorInstance.Data + lVar12),
                   (float)iVar5 * fVar15);
        pAVar10 = this->handler_holder;
        uVar9 = 0;
        if ((int)uVar13 < (pAVar10->physics_handle_array).ArrayNum) {
          uVar9 = uVar11;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UPhysicsHandleComponent::SetAngularDamping
                  (*(UPhysicsHandleComponent **)
                    ((pAVar10->physics_handle_array).AllocatorInstance.Data + lVar12),
                   (float)param_4 * fVar15);
      }
      pAVar10 = this->handler_holder;
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 8;
    } while ((int)uVar13 < (pAVar10->physics_handle_array).ArrayNum);
  }
  return;
}

// UpdateSpecificPhysanimData @ 14d35faa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDragonIKPhysicsComponent::UpdateSpecificPhysanimData
          (UDragonIKPhysicsComponent *this,FName param_1,int param_2,int param_3,int param_4,
          int param_5)

{
  ADragonIKPhysicsHolder *pAVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  uint local_res8;
  uint local_resc;
  FName local_res10;
  int local_res18;
  int local_res20;
  
  if (this->handler_holder == (ADragonIKPhysicsHolder *)0x0) {
    return;
  }
  if (this->owning_skeleton == (USkeletalMeshComponent *)0x0) {
    return;
  }
  uVar7 = 0;
  if ((this->handler_holder->physics_handle_array).ArrayNum < 1) {
    return;
  }
  local_res10.Number = param_1.Number;
  uVar13 = local_res10.Number;
  uVar9 = uVar7;
  uVar11 = uVar7;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  while( true ) {
    USkinnedMeshComponent::GetBoneName
              ((USkinnedMeshComponent *)this->owning_skeleton,(int)&local_res8);
    pAVar1 = this->handler_holder;
    uVar10 = (uint)uVar11;
    uVar12 = ~uVar10 >> 0x1f;
    uVar5 = 0;
    if ((int)uVar10 < (pAVar1->physics_handle_array).ArrayNum) {
      uVar5 = uVar12;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    fVar14 = __real_3f800000;
    if (((*(longlong *)((pAVar1->physics_handle_array).AllocatorInstance.Data + uVar9) != 0) &&
        (param_1.ComparisonIndex.Value.Value == local_res8)) && (uVar13 == local_resc)) break;
    uVar11 = (ulonglong)(uVar10 + 1);
    uVar9 = uVar9 + 8;
    if ((this->handler_holder->physics_handle_array).ArrayNum <= (int)(uVar10 + 1)) {
      return;
    }
  }
  uVar13 = 0;
  uVar9 = uVar7;
  if (0 < (this->Override_Handle_Strength_Multiplier).ArrayNum) {
    do {
      uVar6 = (uint)uVar7;
      uVar5 = uVar13;
      if ((int)uVar6 < (this->Override_Handle_Strength_Multiplier).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->Override_Handle_Strength_Multiplier).AllocatorInstance.Data;
      if ((*(uint *)(pFVar2 + uVar9) == local_res8) && (*(uint *)(pFVar2 + uVar9 + 4) == local_resc)
         ) {
        uVar5 = uVar13;
        if ((int)uVar6 < (this->Override_Handle_Strength_Multiplier).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        fVar14 = *(float *)((this->Override_Handle_Strength_Multiplier).AllocatorInstance.Data +
                           (longlong)(int)uVar6 * 0xc + 8);
        break;
      }
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar9 = uVar9 + 0xc;
    } while ((int)(uVar6 + 1) < (this->Override_Handle_Strength_Multiplier).ArrayNum);
  }
  pAVar1 = this->handler_holder;
  this->Linear_Strength = local_res18;
  this->Linear_Damp = param_4;
  this->Angular_Strength = param_5;
  this->Angular_Damp = param_5;
  uVar5 = uVar13;
  if ((int)uVar10 < (pAVar1->physics_handle_array).ArrayNum) {
    uVar5 = uVar12;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar8 = (longlong)(int)uVar10;
  UPhysicsHandleComponent::SetLinearStiffness
            (*(UPhysicsHandleComponent **)
              ((pAVar1->physics_handle_array).AllocatorInstance.Data + lVar8 * 8),
             (float)local_res18 * fVar14);
  pAVar1 = this->handler_holder;
  uVar5 = uVar13;
  if ((int)uVar10 < (pAVar1->physics_handle_array).ArrayNum) {
    uVar5 = uVar12;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UPhysicsHandleComponent::SetAngularStiffness
            (*(UPhysicsHandleComponent **)
              ((pAVar1->physics_handle_array).AllocatorInstance.Data + lVar8 * 8),
             (float)local_res20 * fVar14);
  pAVar1 = this->handler_holder;
  uVar5 = uVar13;
  if ((int)uVar10 < (pAVar1->physics_handle_array).ArrayNum) {
    uVar5 = uVar12;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UPhysicsHandleComponent::SetLinearDamping
            (*(UPhysicsHandleComponent **)
              ((pAVar1->physics_handle_array).AllocatorInstance.Data + lVar8 * 8),
             (float)param_4 * fVar14);
  pAVar1 = this->handler_holder;
  if ((int)uVar10 < (pAVar1->physics_handle_array).ArrayNum) {
    uVar13 = uVar12;
  }
  if ((uVar13 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UPhysicsHandleComponent::SetAngularDamping
            (*(UPhysicsHandleComponent **)
              ((pAVar1->physics_handle_array).AllocatorInstance.Data + lVar8 * 8),
             (float)param_5 * fVar14);
  return;
}

