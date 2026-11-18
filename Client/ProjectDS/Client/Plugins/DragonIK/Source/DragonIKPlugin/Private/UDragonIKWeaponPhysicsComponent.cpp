// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 134

// StaticClass @ 14d2acc30

UClass * __cdecl UDragonIKWeaponPhysicsComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDragonIKWeaponPhysicsComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DragonIKPlugin",L"DragonIKWeaponPhysicsComponent",
               &Z_Registration_Info_UClass_UDragonIKWeaponPhysicsComponent.InnerSingleton,
               StaticRegisterNativesUDragonIKWeaponPhysicsComponent,0x650,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDragonIKWeaponPhysicsComponent>,
               InternalVTableHelperCtorCaller<UDragonIKWeaponPhysicsComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDragonIKWeaponPhysicsComponent.InnerSingleton;
}

// UDragonIKWeaponPhysicsComponent @ 14d2b03a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UDragonIKWeaponPhysicsComponent * __thiscall
UDragonIKWeaponPhysicsComponent::UDragonIKWeaponPhysicsComponent
          (UDragonIKWeaponPhysicsComponent *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  (this->Raw_Animation_Transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Raw_Animation_Transforms).ArrayNum = 0;
  (this->Raw_Animation_Transforms).ArrayMax = 0;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  this->physics_constraint_used = false;
  this->arm_length = 0.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->dominant_shoulder).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->dominant_shoulder).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->dominant_shoulder).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->dominant_shoulder).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->dominant_shoulder).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->dominant_shoulder).Scale3D.ZW.m128d_f64 = auVar8;
  (this->dominant_shoulder_name).ComparisonIndex = 0;
  (this->dominant_shoulder_name).Number = 0;
  this->Dynamic_Linear_strength = 0.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Temp_Interp_Hand_Transform).Rotation.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar2,0);
  auVar10._0_8_ = (double)fVar1;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Temp_Interp_Hand_Transform).Rotation.ZW.m128d_f64 = auVar10;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Temp_Interp_Hand_Transform).Translation.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar2,0);
  auVar12._0_8_ = (double)fVar1;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Temp_Interp_Hand_Transform).Translation.ZW.m128d_f64 = auVar12;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Temp_Interp_Hand_Transform).Scale3D.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar2,0);
  auVar14._0_8_ = (double)fVar1;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Temp_Interp_Hand_Transform).Scale3D.ZW.m128d_f64 = auVar14;
  (this->dominant_hand_name).ComparisonIndex = 0;
  (this->dominant_hand_name).Number = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar15._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar15._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar15._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->dominant_hand_transform).Rotation.XY.m128d_f64 = auVar15;
  auVar16._8_4_ = SUB84((double)fVar2,0);
  auVar16._0_8_ = (double)fVar1;
  auVar16._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->dominant_hand_transform).Rotation.ZW.m128d_f64 = auVar16;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar17._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar17._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar17._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->dominant_hand_transform).Translation.XY.m128d_f64 = auVar17;
  auVar18._8_4_ = SUB84((double)fVar2,0);
  auVar18._0_8_ = (double)fVar1;
  auVar18._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->dominant_hand_transform).Translation.ZW.m128d_f64 = auVar18;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar19._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar19._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar19._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->dominant_hand_transform).Scale3D.XY.m128d_f64 = auVar19;
  auVar20._8_4_ = SUB84((double)fVar2,0);
  auVar20._0_8_ = (double)fVar1;
  auVar20._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->dominant_hand_transform).Scale3D.ZW.m128d_f64 = auVar20;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar21._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar21._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar21._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Temp_Dom_Transform).Rotation.XY.m128d_f64 = auVar21;
  auVar22._8_4_ = SUB84((double)fVar2,0);
  auVar22._0_8_ = (double)fVar1;
  auVar22._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Temp_Dom_Transform).Rotation.ZW.m128d_f64 = auVar22;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar23._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar23._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar23._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Temp_Dom_Transform).Translation.XY.m128d_f64 = auVar23;
  auVar24._8_4_ = SUB84((double)fVar2,0);
  auVar24._0_8_ = (double)fVar1;
  auVar24._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Temp_Dom_Transform).Translation.ZW.m128d_f64 = auVar24;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar25._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar25._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar25._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Temp_Dom_Transform).Scale3D.XY.m128d_f64 = auVar25;
  auVar26._8_4_ = SUB84((double)fVar2,0);
  auVar26._0_8_ = (double)fVar1;
  auVar26._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Temp_Dom_Transform).Scale3D.ZW.m128d_f64 = auVar26;
  *&(this->Frozen_Hand_Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Frozen_Hand_Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Frozen_Hand_Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Frozen_Hand_Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Frozen_Hand_Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Frozen_Hand_Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->frozen_lerp_alpha = 1.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar27._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar27._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar27._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_hand_transform).Rotation.XY.m128d_f64 = auVar27;
  auVar28._8_4_ = SUB84((double)fVar2,0);
  auVar28._0_8_ = (double)fVar1;
  auVar28._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_hand_transform).Rotation.ZW.m128d_f64 = auVar28;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar29._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar29._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar29._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_hand_transform).Translation.XY.m128d_f64 = auVar29;
  auVar30._8_4_ = SUB84((double)fVar2,0);
  auVar30._0_8_ = (double)fVar1;
  auVar30._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_hand_transform).Translation.ZW.m128d_f64 = auVar30;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar31._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar31._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar31._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_hand_transform).Scale3D.XY.m128d_f64 = auVar31;
  auVar32._8_4_ = SUB84((double)fVar2,0);
  auVar32._0_8_ = (double)fVar1;
  auVar32._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_hand_transform).Scale3D.ZW.m128d_f64 = auVar32;
  this->Weapon_Freeze_Bool = false;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar33._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar33._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar33._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_weapon_transform).Rotation.XY.m128d_f64 = auVar33;
  auVar34._8_4_ = SUB84((double)fVar2,0);
  auVar34._0_8_ = (double)fVar1;
  auVar34._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_weapon_transform).Rotation.ZW.m128d_f64 = auVar34;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar35._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar35._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar35._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_weapon_transform).Translation.XY.m128d_f64 = auVar35;
  auVar36._8_4_ = SUB84((double)fVar2,0);
  auVar36._0_8_ = (double)fVar1;
  auVar36._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_weapon_transform).Translation.ZW.m128d_f64 = auVar36;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar37._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar37._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar37._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_weapon_transform).Scale3D.XY.m128d_f64 = auVar37;
  auVar38._8_4_ = SUB84((double)fVar2,0);
  auVar38._0_8_ = (double)fVar1;
  auVar38._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_weapon_transform).Scale3D.ZW.m128d_f64 = auVar38;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar39._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar39._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar39._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_relative_wep_transform).Rotation.XY.m128d_f64 = auVar39;
  auVar40._8_4_ = SUB84((double)fVar2,0);
  auVar40._0_8_ = (double)fVar1;
  auVar40._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_relative_wep_transform).Rotation.ZW.m128d_f64 = auVar40;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar41._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar41._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar41._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_relative_wep_transform).Translation.XY.m128d_f64 = auVar41
  ;
  auVar42._8_4_ = SUB84((double)fVar2,0);
  auVar42._0_8_ = (double)fVar1;
  auVar42._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_relative_wep_transform).Translation.ZW.m128d_f64 = auVar42
  ;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar43._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar43._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar43._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_relative_wep_transform).Scale3D.XY.m128d_f64 = auVar43;
  auVar44._8_4_ = SUB84((double)fVar2,0);
  auVar44._0_8_ = (double)fVar1;
  auVar44._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_relative_wep_transform).Scale3D.ZW.m128d_f64 = auVar44;
  ::FName::FName(&this->weapon_grabbed_bone,"None");
  ::FName::FName(&this->weapon_bone,"None");
  (this->arm_grabbing_status).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->arm_grabbing_status).ArrayNum = 0;
  (this->arm_grabbing_status).ArrayMax = 0;
  (this->arm_reset_queue_index).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->arm_reset_queue_index).ArrayNum = 0;
  (this->arm_reset_queue_index).ArrayMax = 0;
  (this->handbone_array_boneName).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->handbone_array_boneName).ArrayNum = 0;
  (this->handbone_array_boneName).ArrayMax = 0;
  (this->handbone_array_boneIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->handbone_array_boneIndex).ArrayNum = 0;
  (this->handbone_array_boneIndex).ArrayMax = 0;
  (this->should_override_hand_location).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->should_override_hand_location).ArrayNum = 0;
  (this->should_override_hand_location).ArrayMax = 0;
  (this->should_override_hand_rotation).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->should_override_hand_rotation).ArrayNum = 0;
  (this->should_override_hand_rotation).ArrayMax = 0;
  (this->arm_override_transform).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->arm_override_transform).ArrayNum = 0;
  (this->arm_override_transform).ArrayMax = 0;
  (this->Frozen_Elbow_Component_Status).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Frozen_Elbow_Component_Status).ArrayNum = 0;
  (this->Frozen_Elbow_Component_Status).ArrayMax = 0;
  ::FName::FName(&this->read_this,
                 "A description on how to use the dragonik weapon handler component");
  this->Max_Arm_Length_Percent = 1.0;
  this->physanim_tag_index = 1;
  this->Linear_Strength = 500;
  this->Angular_Strength = 500;
  this->Linear_Damp = 0x32;
  this->Angular_Damp = 0x32;
  this->Interpolation_Speed = 10;
  this->unfreeze_speed = 1.0;
  this->is_grabbing = false;
  this->Teleport_Distance = 100.0;
  this->teleport_freeze_count = 0;
  *&(this->Saved_Relative_Hand_Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Saved_Relative_Hand_Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Saved_Relative_Hand_Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Saved_Relative_Hand_Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Saved_Relative_Hand_Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Saved_Relative_Hand_Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->Weapon_Delta_Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Weapon_Delta_Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Weapon_Delta_Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Weapon_Delta_Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Weapon_Delta_Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Weapon_Delta_Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->this_should_override_weapon_transform = false;
  *&(this->overrided_weapon_transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->overrided_weapon_transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->overrided_weapon_transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->overrided_weapon_transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->overrided_weapon_transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->overrided_weapon_transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->perform_grab_weapon = false;
  this->Wep_Offset_Calculated = false;
  this->perform_physics_simulation = false;
  this->perform_gravity_simulation = false;
  this->grab_counter = 0.0;
  return this;
}

// ~UDragonIKWeaponPhysicsComponent @ 14d2b0970

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::~UDragonIKWeaponPhysicsComponent
          (UDragonIKWeaponPhysicsComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->Frozen_Elbow_Component_Status).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->arm_override_transform).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->should_override_hand_rotation).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->should_override_hand_location).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->handbone_array_boneIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->handbone_array_boneName).AllocatorInstance.Data,
             (this->handbone_array_boneName).ArrayNum);
  pFVar1 = (this->handbone_array_boneName).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->arm_reset_queue_index).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->arm_grabbing_status).AllocatorInstance.Data;
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

// GetPrivateStaticClass @ 14d2b0ce0

UClass * __cdecl UDragonIKWeaponPhysicsComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDragonIKWeaponPhysicsComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DragonIKPlugin",L"DragonIKWeaponPhysicsComponent",
               &Z_Registration_Info_UClass_UDragonIKWeaponPhysicsComponent.InnerSingleton,
               StaticRegisterNativesUDragonIKWeaponPhysicsComponent,0x650,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDragonIKWeaponPhysicsComponent>,
               InternalVTableHelperCtorCaller<UDragonIKWeaponPhysicsComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDragonIKWeaponPhysicsComponent.InnerSingleton;
}

// Multicast_Attach_Hand_Only @ 14d2b0e50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_Attach_Hand_Only
          (UDragonIKWeaponPhysicsComponent *this,FName param_1,bool param_2)

{
  UFunction *pUVar1;
  FName local_18;
  undefined1 local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UDragonIKWeaponPhysicsComponent_Multicast_Attach_Hand_Only);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,&local_18);
  return;
}

// Multicast_Destroy_Weapon @ 14d2b0ea0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_Destroy_Weapon
          (UDragonIKWeaponPhysicsComponent *this,AActor *param_1)

{
  UFunction *pUVar1;
  AActor *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKWeaponPhysicsComponent_Multicast_Destroy_Weapon)
  ;
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res8);
  return;
}

// Multicast_DisableWeaponsArms @ 14d2b0ee0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_DisableWeaponsArms
          (UDragonIKWeaponPhysicsComponent *this,bool param_1)

{
  UFunction *pUVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UDragonIKWeaponPhysicsComponent_Multicast_DisableWeaponsArms);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res10);
  return;
}

// Multicast_EnableWeaponsArms @ 14d2b0f20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_EnableWeaponsArms(UDragonIKWeaponPhysicsComponent *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UDragonIKWeaponPhysicsComponent_Multicast_EnableWeaponsArms);
                    /* WARNING: Could not recover jumptable at 0x00014d2b0f4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,0,*(code **)(*(longlong *)this + 0x260));
  return;
}

// Multicast_FirstTimeInitialization @ 14d2b0f60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_FirstTimeInitialization
          (UDragonIKWeaponPhysicsComponent *this,USkeletalMeshComponent *param_1)

{
  UFunction *pUVar1;
  USkeletalMeshComponent *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UDragonIKWeaponPhysicsComponent_Multicast_FirstTimeInitialization);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res8);
  return;
}

// Multicast_Freeze_Elbows_Function @ 14d2b0fa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_Freeze_Elbows_Function
          (UDragonIKWeaponPhysicsComponent *this,FName param_1)

{
  UFunction *pUVar1;
  FName local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UDragonIKWeaponPhysicsComponent_Multicast_Freeze_Elbows_Function);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res8);
  return;
}

// Multicast_Grab_Weapon @ 14d2b0fe0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_Grab_Weapon
          (UDragonIKWeaponPhysicsComponent *this,FName param_1,bool param_2,bool param_3,
          FName param_4)

{
  UFunction *pUVar1;
  FName local_28;
  undefined1 local_20;
  undefined1 local_1f;
  FName local_1c;
  
  local_1c = param_4;
  local_28 = param_1;
  local_20 = param_2;
  local_1f = param_3;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKWeaponPhysicsComponent_Multicast_Grab_Weapon);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,&local_28);
  return;
}

// Multicast_Release_Hand_Only @ 14d2b1040

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_Release_Hand_Only
          (UDragonIKWeaponPhysicsComponent *this,FName param_1)

{
  UFunction *pUVar1;
  FName local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UDragonIKWeaponPhysicsComponent_Multicast_Release_Hand_Only);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res8);
  return;
}

// Multicast_Release_Hand_Plus_Override @ 14d2b1080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_Release_Hand_Plus_Override
          (UDragonIKWeaponPhysicsComponent *this,FName param_1,TTransform<double> *param_2,
          bool param_3,bool param_4)

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
  bool local_27;
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
  local_27 = param_4;
  local_98[0] = param_1;
  local_28 = param_3;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UDragonIKWeaponPhysicsComponent_Multicast_Release_Hand_Plus_Override);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_98);
  return;
}

// Multicast_Release_Weapon @ 14d2b1140

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_Release_Weapon
          (UDragonIKWeaponPhysicsComponent *this,bool param_1,bool param_2,bool param_3)

{
  UFunction *pUVar1;
  undefined1 local_res10;
  undefined1 local_res11;
  undefined1 local_res12;
  
  local_res10 = param_1;
  local_res11 = param_2;
  local_res12 = param_3;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKWeaponPhysicsComponent_Multicast_Release_Weapon)
  ;
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,&local_res10);
  return;
}

// Multicast_Unfreeze_Elbows_Function @ 14d2b1190

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_Unfreeze_Elbows_Function
          (UDragonIKWeaponPhysicsComponent *this,FName param_1)

{
  UFunction *pUVar1;
  FName local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UDragonIKWeaponPhysicsComponent_Multicast_Unfreeze_Elbows_Function);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res8);
  return;
}

// Multicast_Weapon_Transform_Override @ 14d2b11d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_Weapon_Transform_Override
          (UDragonIKWeaponPhysicsComponent *this,TTransform<double> *param_1,bool param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_a8 [32];
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
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = (param_1->Rotation).XY.m128d_f64[0];
  dStack_80 = (param_1->Rotation).XY.m128d_f64[1];
  local_78 = (param_1->Rotation).ZW.m128d_f64[0];
  dStack_70 = (param_1->Rotation).ZW.m128d_f64[1];
  local_68 = (param_1->Translation).XY.m128d_f64[0];
  dStack_60 = (param_1->Translation).XY.m128d_f64[1];
  local_58 = (param_1->Translation).ZW.m128d_f64[0];
  dStack_50 = (param_1->Translation).ZW.m128d_f64[1];
  local_48 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_40 = (param_1->Scale3D).XY.m128d_f64[1];
  local_38 = (param_1->Scale3D).ZW.m128d_f64[0];
  dStack_30 = (param_1->Scale3D).ZW.m128d_f64[1];
  local_28 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UDragonIKWeaponPhysicsComponent_Multicast_Weapon_Transform_Override);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,&local_88);
  return;
}

// Server_Attach_Hand_Only @ 14d2b1270

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Server_Attach_Hand_Only
          (UDragonIKWeaponPhysicsComponent *this,FName param_1,bool param_2)

{
  UFunction *pUVar1;
  FName local_18;
  undefined1 local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKWeaponPhysicsComponent_Server_Attach_Hand_Only);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,&local_18);
  return;
}

// Server_Destroy_Weapon @ 14d2b12c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Server_Destroy_Weapon
          (UDragonIKWeaponPhysicsComponent *this,AActor *param_1)

{
  UFunction *pUVar1;
  AActor *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKWeaponPhysicsComponent_Server_Destroy_Weapon);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res8);
  return;
}

// Server_DisableWeaponsArms @ 14d2b1300

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Server_DisableWeaponsArms
          (UDragonIKWeaponPhysicsComponent *this,bool param_1)

{
  UFunction *pUVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKWeaponPhysicsComponent_Server_DisableWeaponsArms
                     );
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res10);
  return;
}

// Server_EnableWeaponsArms @ 14d2b1340

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Server_EnableWeaponsArms(UDragonIKWeaponPhysicsComponent *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKWeaponPhysicsComponent_Server_EnableWeaponsArms)
  ;
                    /* WARNING: Could not recover jumptable at 0x00014d2b136d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,0,*(code **)(*(longlong *)this + 0x260));
  return;
}

// Server_FirstTimeInitialization @ 14d2b1380

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Server_FirstTimeInitialization
          (UDragonIKWeaponPhysicsComponent *this,USkeletalMeshComponent *param_1)

{
  UFunction *pUVar1;
  USkeletalMeshComponent *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UDragonIKWeaponPhysicsComponent_Server_FirstTimeInitialization);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res8);
  return;
}

// Server_Freeze_Elbows_Function @ 14d2b13c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Server_Freeze_Elbows_Function
          (UDragonIKWeaponPhysicsComponent *this,FName param_1)

{
  UFunction *pUVar1;
  FName local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UDragonIKWeaponPhysicsComponent_Server_Freeze_Elbows_Function);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res8);
  return;
}

// Server_Grab_Weapon @ 14d2b1400

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Server_Grab_Weapon
          (UDragonIKWeaponPhysicsComponent *this,FName param_1,bool param_2,bool param_3,
          FName param_4)

{
  UFunction *pUVar1;
  FName local_28;
  undefined1 local_20;
  undefined1 local_1f;
  FName local_1c;
  
  local_1c = param_4;
  local_28 = param_1;
  local_20 = param_2;
  local_1f = param_3;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKWeaponPhysicsComponent_Server_Grab_Weapon);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,&local_28);
  return;
}

// Server_Release_Hand_Only @ 14d2b1460

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Server_Release_Hand_Only
          (UDragonIKWeaponPhysicsComponent *this,FName param_1)

{
  UFunction *pUVar1;
  FName local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKWeaponPhysicsComponent_Server_Release_Hand_Only)
  ;
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res8);
  return;
}

// Server_Release_Hand_Plus_Override @ 14d2b14a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Server_Release_Hand_Plus_Override
          (UDragonIKWeaponPhysicsComponent *this,FName param_1,TTransform<double> *param_2,
          bool param_3,bool param_4)

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
  bool local_27;
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
  local_27 = param_4;
  local_98[0] = param_1;
  local_28 = param_3;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UDragonIKWeaponPhysicsComponent_Server_Release_Hand_Plus_Override);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_98);
  return;
}

// Server_Release_Weapon @ 14d2b1560

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Server_Release_Weapon
          (UDragonIKWeaponPhysicsComponent *this,bool param_1,bool param_2,bool param_3)

{
  UFunction *pUVar1;
  undefined1 local_res10;
  undefined1 local_res11;
  undefined1 local_res12;
  
  local_res10 = param_1;
  local_res11 = param_2;
  local_res12 = param_3;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKWeaponPhysicsComponent_Server_Release_Weapon);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,&local_res10);
  return;
}

// Server_Unfreeze_Elbows_Function @ 14d2b15b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Server_Unfreeze_Elbows_Function
          (UDragonIKWeaponPhysicsComponent *this,FName param_1)

{
  UFunction *pUVar1;
  FName local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UDragonIKWeaponPhysicsComponent_Server_Unfreeze_Elbows_Function);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res8);
  return;
}

// Server_Weapon_Transform_Override @ 14d2b15f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Server_Weapon_Transform_Override
          (UDragonIKWeaponPhysicsComponent *this,TTransform<double> *param_1,bool param_2)

{
  UFunction *pUVar1;
  undefined1 auStack_a8 [32];
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
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = (param_1->Rotation).XY.m128d_f64[0];
  dStack_80 = (param_1->Rotation).XY.m128d_f64[1];
  local_78 = (param_1->Rotation).ZW.m128d_f64[0];
  dStack_70 = (param_1->Rotation).ZW.m128d_f64[1];
  local_68 = (param_1->Translation).XY.m128d_f64[0];
  dStack_60 = (param_1->Translation).XY.m128d_f64[1];
  local_58 = (param_1->Translation).ZW.m128d_f64[0];
  dStack_50 = (param_1->Translation).ZW.m128d_f64[1];
  local_48 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_40 = (param_1->Scale3D).XY.m128d_f64[1];
  local_38 = (param_1->Scale3D).ZW.m128d_f64[0];
  dStack_30 = (param_1->Scale3D).ZW.m128d_f64[1];
  local_28 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UDragonIKWeaponPhysicsComponent_Server_Weapon_Transform_Override);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,&local_88);
  return;
}

// StaticRegisterNativesUDragonIKWeaponPhysicsComponent @ 14d2b1690

void __cdecl
UDragonIKWeaponPhysicsComponent::StaticRegisterNativesUDragonIKWeaponPhysicsComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x24;
  local_18.DataPtr = Z_Construct_UClass_UDragonIKWeaponPhysicsComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ValidateGeneratedRepEnums @ 14d2b1710

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::ValidateGeneratedRepEnums
          (UDragonIKWeaponPhysicsComponent *this,
          TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&Name_weapon_input_component,L"weapon_input_component");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (param_1->ArrayNum < 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x20);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  else {
    FVar4.ComparisonIndex.Value = 0;
    FVar4.Number = 0;
  }
  if (Name_weapon_input_component != FVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\DragonIKPlugin\\UHT\\DragonIKWeaponPhysicsComponent.gen.cpp"
                       ,0xb45,
                       L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDragonIKWeaponPhysicsComponent"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// execAttach_Hand_Only @ 14d2b22d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UDragonIKWeaponPhysicsComponent::execAttach_Hand_Only
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  FName local_res20;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
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
  Attach_Hand_Only((UDragonIKWeaponPhysicsComponent *)param_1,local_res20,local_res10[0] != 0);
  return;
}

// execDestroy_Weapon @ 14d2b24c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UDragonIKWeaponPhysicsComponent::execDestroy_Weapon(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  AActor *local_res10;
  
  local_res10 = (AActor *)0x0;
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
  Destroy_Weapon((UDragonIKWeaponPhysicsComponent *)param_1,local_res10);
  return;
}

// execDisableWeaponsArms @ 14d2b2550

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UDragonIKWeaponPhysicsComponent::execDisableWeaponsArms
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  DisableWeaponsArms((UDragonIKWeaponPhysicsComponent *)param_1,local_res10[0] != 0);
  return;
}

// execEnableWeaponsArms @ 14d2b25e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UDragonIKWeaponPhysicsComponent::execEnableWeaponsArms
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EnableWeaponsArms((UDragonIKWeaponPhysicsComponent *)param_1);
  return;
}

// execFirstTimeInitialization @ 14d2b2600

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UDragonIKWeaponPhysicsComponent::execFirstTimeInitialization
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
  FirstTimeInitialization((UDragonIKWeaponPhysicsComponent *)param_1,local_res10);
  return;
}

// execFreeze_Elbows_Function @ 14d2b2690

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UDragonIKWeaponPhysicsComponent::execFreeze_Elbows_Function
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Freeze_Elbows_Function((UDragonIKWeaponPhysicsComponent *)param_1,local_res10);
  return;
}

// execGrab_Weapon @ 14d2b2720

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UDragonIKWeaponPhysicsComponent::execGrab_Weapon(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool bVar3;
  int local_res10 [2];
  int local_res20 [2];
  FName local_28;
  FName local_20;
  
  local_20.ComparisonIndex.Value = 0;
  local_20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
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
  bVar2 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar3 = local_res20[0] != 0;
  local_28.ComparisonIndex.Value = 0;
  local_28.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Grab_Weapon((UDragonIKWeaponPhysicsComponent *)param_1,local_20,bVar2,bVar3,local_28);
  return;
}

// execMulticast_Attach_Hand_Only @ 14d2b2b90

void __cdecl
UDragonIKWeaponPhysicsComponent::execMulticast_Attach_Hand_Only
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  bool bVar3;
  int local_res8 [2];
  undefined8 local_res10;
  
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
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x538))(param_1,local_res10,bVar3);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Multicast_Attach_Hand_Only_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x540))(param_1,local_res10,bVar3);
  return;
}

// execMulticast_Destroy_Weapon @ 14d2b2ca0

void __cdecl
UDragonIKWeaponPhysicsComponent::execMulticast_Destroy_Weapon
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
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x618))(param_1,local_res8);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Multicast_Destroy_Weapon_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x620))(param_1,local_res8);
  return;
}

// execMulticast_DisableWeaponsArms @ 14d2b2d60

void __cdecl
UDragonIKWeaponPhysicsComponent::execMulticast_DisableWeaponsArms
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
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x5d8))(param_1,bVar3);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Multicast_DisableWeaponsArms_Validate");
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x5e0))(param_1,bVar3);
  }
  return;
}

// execMulticast_EnableWeaponsArms @ 14d2b2e30

void __cdecl
UDragonIKWeaponPhysicsComponent::execMulticast_EnableWeaponsArms
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  char cVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar1 = (**(code **)(*(longlong *)param_1 + 0x5b8))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"Multicast_EnableWeaponsArms_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d2b2e77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x5c0))(param_1);
  return;
}

// execMulticast_FirstTimeInitialization @ 14d2b2e90

void __cdecl
UDragonIKWeaponPhysicsComponent::execMulticast_FirstTimeInitialization
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
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x658))(param_1,local_res8);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Multicast_FirstTimeInitialization_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x660))(param_1,local_res8);
  return;
}

// execMulticast_Freeze_Elbows_Function @ 14d2b2f50

void __cdecl
UDragonIKWeaponPhysicsComponent::execMulticast_Freeze_Elbows_Function
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
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x518))(param_1,local_res8);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Multicast_Freeze_Elbows_Function_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x520))(param_1,local_res8);
  return;
}

// execMulticast_Grab_Weapon @ 14d2b3010

void __cdecl
UDragonIKWeaponPhysicsComponent::execMulticast_Grab_Weapon
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int local_res8 [2];
  int local_res10 [4];
  undefined8 local_res20;
  undefined8 local_38 [2];
  
  local_38[0] = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
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
  bVar4 = local_res10[0] != 0;
  local_res20 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x638))(param_1,local_38[0],bVar3,bVar4,local_res20);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Multicast_Grab_Weapon_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x640))(param_1,local_38[0],bVar3,bVar4,local_res20);
  return;
}

// execMulticast_Release_Hand_Only @ 14d2b31d0

void __cdecl
UDragonIKWeaponPhysicsComponent::execMulticast_Release_Hand_Only
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
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x598))(param_1,local_res8);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Multicast_Release_Hand_Only_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x5a0))(param_1,local_res8);
  return;
}

// execMulticast_Release_Hand_Plus_Override @ 14d2b3290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UDragonIKWeaponPhysicsComponent::execMulticast_Release_Hand_Plus_Override
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  int local_108;
  int local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_100 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_98._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_108 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  bVar3 = local_108 != 0;
  local_104 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_104,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_104);
  }
  bVar4 = local_104 != 0;
  local_f8 = local_98._0_8_;
  uStack_f0 = local_98._8_8_;
  local_e8 = local_88._0_8_;
  uStack_e0 = local_88._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_d8 = local_78._0_8_;
  uStack_d0 = local_78._8_8_;
  local_c8 = local_68._0_8_;
  uStack_c0 = local_68._8_8_;
  local_b8 = local_58._0_4_;
  uStack_b4 = local_58._4_4_;
  uStack_b0 = local_58._8_4_;
  uStack_ac = local_58._12_4_;
  local_a8 = local_48._0_4_;
  uStack_a4 = local_48._4_4_;
  uStack_a0 = local_48._8_4_;
  uStack_9c = local_48._12_4_;
  local_118 = bVar4;
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x578))(param_1,local_100,&local_f8,bVar3);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Multicast_Release_Hand_Plus_Override_Validate");
  }
  else {
    local_f8 = local_98._0_8_;
    uStack_f0 = local_98._8_8_;
    local_e8 = local_88._0_8_;
    uStack_e0 = local_88._8_8_;
    local_d8 = local_78._0_8_;
    uStack_d0 = local_78._8_8_;
    local_c8 = local_68._0_8_;
    uStack_c0 = local_68._8_8_;
    local_b8 = local_58._0_4_;
    uStack_b4 = local_58._4_4_;
    uStack_b0 = local_58._8_4_;
    uStack_ac = local_58._12_4_;
    local_a8 = local_48._0_4_;
    uStack_a4 = local_48._4_4_;
    uStack_a0 = local_48._8_4_;
    uStack_9c = local_48._12_4_;
    local_118 = bVar4;
    (**(code **)(*(longlong *)param_1 + 0x580))(param_1,local_100,&local_f8,bVar3);
  }
  return;
}

// execMulticast_Release_Weapon @ 14d2b3500

void __cdecl
UDragonIKWeaponPhysicsComponent::execMulticast_Release_Weapon
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int local_res8 [2];
  int local_res10 [2];
  int local_res20 [2];
  
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
  bVar4 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar5 = local_res20[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x5f8))(param_1,bVar3,bVar4,bVar5);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Multicast_Release_Weapon_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x600))(param_1,bVar3,bVar4,bVar5);
  return;
}

// execMulticast_Unfreeze_Elbows_Function @ 14d2b3670

void __cdecl
UDragonIKWeaponPhysicsComponent::execMulticast_Unfreeze_Elbows_Function
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
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x4f8))(param_1,local_res8);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Multicast_Unfreeze_Elbows_Function_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x500))(param_1,local_res8);
  return;
}

// execMulticast_Weapon_Transform_Override @ 14d2b3730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UDragonIKWeaponPhysicsComponent::execMulticast_Weapon_Transform_Override
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  bool bVar3;
  undefined1 auStack_118 [32];
  int local_f8 [4];
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
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x558))(param_1,&local_e8,bVar3);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Multicast_Weapon_Transform_Override_Validate");
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
    (**(code **)(*(longlong *)param_1 + 0x560))(param_1,&local_e8,bVar3);
  }
  return;
}

// execRelease_Hand_Only @ 14d2b3ab0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UDragonIKWeaponPhysicsComponent::execRelease_Hand_Only
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Release_Hand_Only((UDragonIKWeaponPhysicsComponent *)param_1,local_res10);
  return;
}

// execRelease_Hand_Plus_Override @ 14d2b3b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UDragonIKWeaponPhysicsComponent::execRelease_Hand_Plus_Override
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  undefined1 auStack_128 [32];
  int local_f8;
  int local_f4;
  FName local_f0;
  TTransform<double> local_e8;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
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
  local_f8 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  bVar2 = local_f8 != 0;
  local_f4 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f4);
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
  Release_Hand_Plus_Override
            ((UDragonIKWeaponPhysicsComponent *)param_1,local_f0,&local_e8,bVar2,local_f4 != 0);
  return;
}

// execRelease_Weapon @ 14d2b3d50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UDragonIKWeaponPhysicsComponent::execRelease_Weapon(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool bVar3;
  int local_res10 [2];
  int local_res20 [2];
  int local_28 [4];
  
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
  bVar2 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar3 = local_res20[0] != 0;
  local_28[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Release_Weapon((UDragonIKWeaponPhysicsComponent *)param_1,bVar2,bVar3,local_28[0] != 0);
  return;
}

// execServer_Attach_Hand_Only @ 14d2b3e80

void __cdecl
UDragonIKWeaponPhysicsComponent::execServer_Attach_Hand_Only
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  bool bVar3;
  int local_res8 [2];
  undefined8 local_res10;
  
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
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x548))(param_1,local_res10,bVar3);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Server_Attach_Hand_Only_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x550))(param_1,local_res10,bVar3);
  return;
}

// execServer_Destroy_Weapon @ 14d2b3f90

void __cdecl
UDragonIKWeaponPhysicsComponent::execServer_Destroy_Weapon
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
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x628))(param_1,local_res8);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Server_Destroy_Weapon_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x630))(param_1,local_res8);
  return;
}

// execServer_DisableWeaponsArms @ 14d2b4050

void __cdecl
UDragonIKWeaponPhysicsComponent::execServer_DisableWeaponsArms
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
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x5e8))(param_1,bVar3);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Server_DisableWeaponsArms_Validate");
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x5f0))(param_1,bVar3);
  }
  return;
}

// execServer_EnableWeaponsArms @ 14d2b4120

void __cdecl
UDragonIKWeaponPhysicsComponent::execServer_EnableWeaponsArms
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  char cVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar1 = (**(code **)(*(longlong *)param_1 + 0x5c8))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"Server_EnableWeaponsArms_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d2b4167. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x5d0))(param_1);
  return;
}

// execServer_FirstTimeInitialization @ 14d2b4180

void __cdecl
UDragonIKWeaponPhysicsComponent::execServer_FirstTimeInitialization
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
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x668))(param_1,local_res8);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Server_FirstTimeInitialization_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x670))(param_1,local_res8);
  return;
}

// execServer_Freeze_Elbows_Function @ 14d2b4240

void __cdecl
UDragonIKWeaponPhysicsComponent::execServer_Freeze_Elbows_Function
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
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x528))(param_1,local_res8);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Server_Freeze_Elbows_Function_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x530))(param_1,local_res8);
  return;
}

// execServer_Grab_Weapon @ 14d2b4300

void __cdecl
UDragonIKWeaponPhysicsComponent::execServer_Grab_Weapon
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int local_res8 [2];
  int local_res10 [4];
  undefined8 local_res20;
  undefined8 local_38 [2];
  
  local_38[0] = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
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
  bVar4 = local_res10[0] != 0;
  local_res20 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x648))(param_1,local_38[0],bVar3,bVar4,local_res20);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Server_Grab_Weapon_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x650))(param_1,local_38[0],bVar3,bVar4,local_res20);
  return;
}

// execServer_Release_Hand_Only @ 14d2b44c0

void __cdecl
UDragonIKWeaponPhysicsComponent::execServer_Release_Hand_Only
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
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x5a8))(param_1,local_res8);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Server_Release_Hand_Only_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x5b0))(param_1,local_res8);
  return;
}

// execServer_Release_Hand_Plus_Override @ 14d2b4580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UDragonIKWeaponPhysicsComponent::execServer_Release_Hand_Plus_Override
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  int local_108;
  int local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_100 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_98._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_108 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  bVar3 = local_108 != 0;
  local_104 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_104,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_104);
  }
  bVar4 = local_104 != 0;
  local_f8 = local_98._0_8_;
  uStack_f0 = local_98._8_8_;
  local_e8 = local_88._0_8_;
  uStack_e0 = local_88._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_d8 = local_78._0_8_;
  uStack_d0 = local_78._8_8_;
  local_c8 = local_68._0_8_;
  uStack_c0 = local_68._8_8_;
  local_b8 = local_58._0_4_;
  uStack_b4 = local_58._4_4_;
  uStack_b0 = local_58._8_4_;
  uStack_ac = local_58._12_4_;
  local_a8 = local_48._0_4_;
  uStack_a4 = local_48._4_4_;
  uStack_a0 = local_48._8_4_;
  uStack_9c = local_48._12_4_;
  local_118 = bVar4;
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x588))(param_1,local_100,&local_f8,bVar3);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Server_Release_Hand_Plus_Override_Validate");
  }
  else {
    local_f8 = local_98._0_8_;
    uStack_f0 = local_98._8_8_;
    local_e8 = local_88._0_8_;
    uStack_e0 = local_88._8_8_;
    local_d8 = local_78._0_8_;
    uStack_d0 = local_78._8_8_;
    local_c8 = local_68._0_8_;
    uStack_c0 = local_68._8_8_;
    local_b8 = local_58._0_4_;
    uStack_b4 = local_58._4_4_;
    uStack_b0 = local_58._8_4_;
    uStack_ac = local_58._12_4_;
    local_a8 = local_48._0_4_;
    uStack_a4 = local_48._4_4_;
    uStack_a0 = local_48._8_4_;
    uStack_9c = local_48._12_4_;
    local_118 = bVar4;
    (**(code **)(*(longlong *)param_1 + 0x590))(param_1,local_100,&local_f8,bVar3);
  }
  return;
}

// execServer_Release_Weapon @ 14d2b47f0

void __cdecl
UDragonIKWeaponPhysicsComponent::execServer_Release_Weapon
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int local_res8 [2];
  int local_res10 [2];
  int local_res20 [2];
  
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
  bVar4 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar5 = local_res20[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x608))(param_1,bVar3,bVar4,bVar5);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Server_Release_Weapon_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x610))(param_1,bVar3,bVar4,bVar5);
  return;
}

// execServer_Unfreeze_Elbows_Function @ 14d2b4960

void __cdecl
UDragonIKWeaponPhysicsComponent::execServer_Unfreeze_Elbows_Function
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
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x508))(param_1,local_res8);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Server_Unfreeze_Elbows_Function_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x510))(param_1,local_res8);
  return;
}

// execServer_Weapon_Transform_Override @ 14d2b4a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UDragonIKWeaponPhysicsComponent::execServer_Weapon_Transform_Override
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  bool bVar3;
  undefined1 auStack_118 [32];
  int local_f8 [4];
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
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x568))(param_1,&local_e8,bVar3);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"Server_Weapon_Transform_Override_Validate");
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
    (**(code **)(*(longlong *)param_1 + 0x570))(param_1,&local_e8,bVar3);
  }
  return;
}

// execUnfreeze_Elbows_Function @ 14d2b4c00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UDragonIKWeaponPhysicsComponent::execUnfreeze_Elbows_Function
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Unfreeze_Elbows_Function((UDragonIKWeaponPhysicsComponent *)param_1,local_res10);
  return;
}

// execWeapon_Transform_Override @ 14d2b4c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UDragonIKWeaponPhysicsComponent::execWeapon_Transform_Override
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auStack_118 [32];
  int local_f8 [4];
  TTransform<double> local_e8;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
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
  Weapon_Transform_Override((UDragonIKWeaponPhysicsComponent *)param_1,&local_e8,local_f8[0] != 0);
  return;
}

// UDragonIKWeaponPhysicsComponent @ 14d32eac0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UDragonIKWeaponPhysicsComponent * __thiscall
UDragonIKWeaponPhysicsComponent::UDragonIKWeaponPhysicsComponent
          (UDragonIKWeaponPhysicsComponent *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  __m128d _Var45;
  FObjectInitializer *pFVar46;
  
  pFVar46 = FObjectInitializer::Get();
  UActorComponent::UActorComponent((UActorComponent *)this,pFVar46);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  (this->Raw_Animation_Transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Raw_Animation_Transforms).ArrayNum = 0;
  (this->Raw_Animation_Transforms).ArrayMax = 0;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  this->physics_constraint_used = false;
  this->arm_length = 0.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->dominant_shoulder).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->dominant_shoulder).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->dominant_shoulder).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->dominant_shoulder).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->dominant_shoulder).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->dominant_shoulder).Scale3D.ZW.m128d_f64 = auVar8;
  (this->dominant_shoulder_name).ComparisonIndex = 0;
  (this->dominant_shoulder_name).Number = 0;
  this->Dynamic_Linear_strength = 0.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Temp_Interp_Hand_Transform).Rotation.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar2,0);
  auVar10._0_8_ = (double)fVar1;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Temp_Interp_Hand_Transform).Rotation.ZW.m128d_f64 = auVar10;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Temp_Interp_Hand_Transform).Translation.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar2,0);
  auVar12._0_8_ = (double)fVar1;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Temp_Interp_Hand_Transform).Translation.ZW.m128d_f64 = auVar12;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Temp_Interp_Hand_Transform).Scale3D.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar2,0);
  auVar14._0_8_ = (double)fVar1;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Temp_Interp_Hand_Transform).Scale3D.ZW.m128d_f64 = auVar14;
  (this->dominant_hand_name).ComparisonIndex = 0;
  (this->dominant_hand_name).Number = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar15._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar15._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar15._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->dominant_hand_transform).Rotation.XY.m128d_f64 = auVar15;
  auVar16._8_4_ = SUB84((double)fVar2,0);
  auVar16._0_8_ = (double)fVar1;
  auVar16._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->dominant_hand_transform).Rotation.ZW.m128d_f64 = auVar16;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar17._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar17._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar17._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->dominant_hand_transform).Translation.XY.m128d_f64 = auVar17;
  auVar18._8_4_ = SUB84((double)fVar2,0);
  auVar18._0_8_ = (double)fVar1;
  auVar18._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->dominant_hand_transform).Translation.ZW.m128d_f64 = auVar18;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar19._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar19._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar19._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->dominant_hand_transform).Scale3D.XY.m128d_f64 = auVar19;
  auVar20._8_4_ = SUB84((double)fVar2,0);
  auVar20._0_8_ = (double)fVar1;
  auVar20._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->dominant_hand_transform).Scale3D.ZW.m128d_f64 = auVar20;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar21._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar21._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar21._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Temp_Dom_Transform).Rotation.XY.m128d_f64 = auVar21;
  auVar22._8_4_ = SUB84((double)fVar2,0);
  auVar22._0_8_ = (double)fVar1;
  auVar22._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Temp_Dom_Transform).Rotation.ZW.m128d_f64 = auVar22;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar23._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar23._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar23._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Temp_Dom_Transform).Translation.XY.m128d_f64 = auVar23;
  auVar24._8_4_ = SUB84((double)fVar2,0);
  auVar24._0_8_ = (double)fVar1;
  auVar24._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Temp_Dom_Transform).Translation.ZW.m128d_f64 = auVar24;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar25._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar25._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar25._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Temp_Dom_Transform).Scale3D.XY.m128d_f64 = auVar25;
  auVar26._8_4_ = SUB84((double)fVar2,0);
  auVar26._0_8_ = (double)fVar1;
  auVar26._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Temp_Dom_Transform).Scale3D.ZW.m128d_f64 = auVar26;
  *&(this->Frozen_Hand_Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Frozen_Hand_Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Frozen_Hand_Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Frozen_Hand_Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Frozen_Hand_Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Frozen_Hand_Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->frozen_lerp_alpha = 1.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar27._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar27._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar27._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_hand_transform).Rotation.XY.m128d_f64 = auVar27;
  auVar28._8_4_ = SUB84((double)fVar2,0);
  auVar28._0_8_ = (double)fVar1;
  auVar28._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_hand_transform).Rotation.ZW.m128d_f64 = auVar28;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar29._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar29._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar29._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_hand_transform).Translation.XY.m128d_f64 = auVar29;
  auVar30._8_4_ = SUB84((double)fVar2,0);
  auVar30._0_8_ = (double)fVar1;
  auVar30._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_hand_transform).Translation.ZW.m128d_f64 = auVar30;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar31._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar31._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar31._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_hand_transform).Scale3D.XY.m128d_f64 = auVar31;
  auVar32._8_4_ = SUB84((double)fVar2,0);
  auVar32._0_8_ = (double)fVar1;
  auVar32._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_hand_transform).Scale3D.ZW.m128d_f64 = auVar32;
  this->Weapon_Freeze_Bool = false;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar33._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar33._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar33._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_weapon_transform).Rotation.XY.m128d_f64 = auVar33;
  auVar34._8_4_ = SUB84((double)fVar2,0);
  auVar34._0_8_ = (double)fVar1;
  auVar34._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_weapon_transform).Rotation.ZW.m128d_f64 = auVar34;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar35._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar35._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar35._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_weapon_transform).Translation.XY.m128d_f64 = auVar35;
  auVar36._8_4_ = SUB84((double)fVar2,0);
  auVar36._0_8_ = (double)fVar1;
  auVar36._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_weapon_transform).Translation.ZW.m128d_f64 = auVar36;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar37._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar37._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar37._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_weapon_transform).Scale3D.XY.m128d_f64 = auVar37;
  auVar38._8_4_ = SUB84((double)fVar2,0);
  auVar38._0_8_ = (double)fVar1;
  auVar38._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_weapon_transform).Scale3D.ZW.m128d_f64 = auVar38;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar39._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar39._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar39._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_relative_wep_transform).Rotation.XY.m128d_f64 = auVar39;
  auVar40._8_4_ = SUB84((double)fVar2,0);
  auVar40._0_8_ = (double)fVar1;
  auVar40._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_relative_wep_transform).Rotation.ZW.m128d_f64 = auVar40;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar41._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar41._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar41._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_relative_wep_transform).Translation.XY.m128d_f64 = auVar41
  ;
  auVar42._8_4_ = SUB84((double)fVar2,0);
  auVar42._0_8_ = (double)fVar1;
  auVar42._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_relative_wep_transform).Translation.ZW.m128d_f64 = auVar42
  ;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar43._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar43._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar43._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_relative_wep_transform).Scale3D.XY.m128d_f64 = auVar43;
  auVar44._8_4_ = SUB84((double)fVar2,0);
  auVar44._0_8_ = (double)fVar1;
  auVar44._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->last_saved_relative_wep_transform).Scale3D.ZW.m128d_f64 = auVar44;
  ::FName::FName(&this->weapon_grabbed_bone,"None");
  ::FName::FName(&this->weapon_bone,"None");
  (this->arm_grabbing_status).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->arm_grabbing_status).ArrayNum = 0;
  (this->arm_grabbing_status).ArrayMax = 0;
  (this->arm_reset_queue_index).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->arm_reset_queue_index).ArrayNum = 0;
  (this->arm_reset_queue_index).ArrayMax = 0;
  (this->handbone_array_boneName).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->handbone_array_boneName).ArrayNum = 0;
  (this->handbone_array_boneName).ArrayMax = 0;
  (this->handbone_array_boneIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->handbone_array_boneIndex).ArrayNum = 0;
  (this->handbone_array_boneIndex).ArrayMax = 0;
  (this->should_override_hand_location).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->should_override_hand_location).ArrayNum = 0;
  (this->should_override_hand_location).ArrayMax = 0;
  (this->should_override_hand_rotation).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->should_override_hand_rotation).ArrayNum = 0;
  (this->should_override_hand_rotation).ArrayMax = 0;
  (this->arm_override_transform).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->arm_override_transform).ArrayNum = 0;
  (this->arm_override_transform).ArrayMax = 0;
  (this->Frozen_Elbow_Component_Status).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Frozen_Elbow_Component_Status).ArrayNum = 0;
  (this->Frozen_Elbow_Component_Status).ArrayMax = 0;
  ::FName::FName(&this->read_this,
                 "A description on how to use the dragonik weapon handler component");
  this->Max_Arm_Length_Percent = 1.0;
  this->physanim_tag_index = 1;
  this->Linear_Strength = 500;
  this->Angular_Strength = 500;
  this->Linear_Damp = 0x32;
  this->Angular_Damp = 0x32;
  this->Interpolation_Speed = 10;
  this->unfreeze_speed = 1.0;
  this->is_grabbing = false;
  this->Teleport_Distance = 100.0;
  this->teleport_freeze_count = 0;
  *&(this->Saved_Relative_Hand_Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Saved_Relative_Hand_Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Saved_Relative_Hand_Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Saved_Relative_Hand_Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Saved_Relative_Hand_Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Saved_Relative_Hand_Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->Weapon_Delta_Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Weapon_Delta_Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Weapon_Delta_Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Weapon_Delta_Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Weapon_Delta_Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Weapon_Delta_Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->this_should_override_weapon_transform = false;
  *&(this->overrided_weapon_transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->overrided_weapon_transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->overrided_weapon_transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->overrided_weapon_transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->overrided_weapon_transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  _Var45 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  this->field_0x42 = this->field_0x42 | 2;
  *&(this->overrided_weapon_transform).Scale3D.ZW.m128d_f64 = _Var45.m128d_f64;
  this->perform_grab_weapon = false;
  this->Wep_Offset_Calculated = false;
  this->perform_physics_simulation = false;
  this->perform_gravity_simulation = false;
  this->grab_counter = 0.0;
  UActorComponent::SetIsReplicatedByDefault((UActorComponent *)this,true);
  return this;
}

// Attach_Hand_Only @ 14d3353b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Attach_Hand_Only
          (UDragonIKWeaponPhysicsComponent *this,FName param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FString *pFVar5;
  FName local_res10;
  FString local_28;
  
  uVar4 = 0xffffffff;
  if ((0 < (this->handbone_array_boneName).ArrayNum) &&
     (0 < (this->handbone_array_boneIndex).ArrayNum)) {
    local_res10 = param_1;
    pFVar5 = ::FName::ToString(&local_res10,&local_28);
    uVar3 = TArray<FString,TSizedDefaultAllocator<32>_>::Find(&this->handbone_array_boneName,pFVar5)
    ;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (-1 < (int)uVar3) {
      uVar4 = 0;
      if ((int)uVar3 < (this->handbone_array_boneIndex).ArrayNum) {
        uVar4 = ~uVar3 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = *(uint *)((this->handbone_array_boneIndex).AllocatorInstance.Data +
                       (longlong)(int)uVar3 * 4);
    }
    if (-1 < (int)uVar4) {
      if ((int)uVar4 < (this->arm_grabbing_status).ArrayNum) {
        if (((int)uVar4 < 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (this->arm_grabbing_status).AllocatorInstance.Data[(int)uVar4] =
             (FScriptContainerElement)0x1;
      }
      uVar3 = 0;
      if ((int)uVar4 < (this->arm_reset_queue_index).ArrayNum) {
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
      (this->arm_reset_queue_index).AllocatorInstance.Data[(int)uVar4] =
           (FScriptContainerElement)0x1;
    }
  }
  return;
}

// BeginPlay @ 14d336590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UDragonIKWeaponPhysicsComponent::BeginPlay(UDragonIKWeaponPhysicsComponent *this)

{
  uint uVar1;
  AActor *this_00;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  UFunction *pUVar5;
  
  bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
  if (!bVar3) {
    if (this == (UDragonIKWeaponPhysicsComponent *)0x0) goto LAB_14780c6b0;
    this_00 = *(AActor **)&this->field_0xa8;
    bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)this_00);
    if ((!bVar3) || (this_00 == (AActor *)0x0)) goto LAB_14780c6b0;
    pUVar4 = AActor::GetWorld(this_00);
    bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar4);
    if (!bVar3) goto LAB_14780c6b0;
  }
  FObjectTrace::OutputObjectLifetimeBegin((UObject *)this);
LAB_14780c6b0:
  if ((this->field_0x98 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bRegistered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x64d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->field_0x9b & 0x20) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bHasBegunPlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x64e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = *(uint *)(*(longlong *)&this->field_0x10 + 0xd4);
  if (((uVar1 >> 0x12 & 1) != 0) || (-1 < (char)uVar1)) {
    pUVar5 = UObject::FindFunctionChecked((UObject *)this,NAME_UActorComponent_ReceiveBeginPlay);
    (**(code **)(*(longlong *)this + 0x260))(this,pUVar5,0);
  }
  this->field_0x9b = this->field_0x9b | 0x20;
  return;
}

// DelayedGrabEvent @ 14d338240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::DelayedGrabEvent(UDragonIKWeaponPhysicsComponent *this)

{
  TTransform<double> *pTVar1;
  FName FVar2;
  UPhysicsHandleComponent *this_00;
  FName FVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined4 extraout_EAX;
  int iVar19;
  TTransform<double> *pTVar20;
  UPhysicsAsset *pUVar21;
  FBodyInstance *pFVar22;
  FName *pFVar23;
  TVector<double> *pTVar24;
  FName FVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  USkeletalMeshComponent *pUVar29;
  UPrimitiveComponent *pUVar30;
  UPhysicsConstraintComponent *this_01;
  bool bVar31;
  longlong lVar32;
  uint uVar33;
  uint uVar34;
  double dVar35;
  undefined1 auVar36 [16];
  double dVar41;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined4 uVar42;
  undefined4 uVar43;
  double dVar44;
  double dVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  float fVar50;
  undefined1 auStackY_298 [32];
  FName local_268 [2];
  TVector<double>_u_0 local_258;
  TVector<double>_u_0 local_238;
  TVector<double>_u_0 local_218;
  TVector<double>_u_0 local_1f8;
  double dStack_1e0;
  undefined1 local_1d8 [16];
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  undefined1 local_108 [96];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_298;
  iVar18 = USkinnedMeshComponent::GetBoneIndex
                     ((USkinnedMeshComponent *)this->owning_skeleton,this->weapon_grabbed_bone);
  if (iVar18 < 0) {
    return;
  }
  pUVar30 = this->active_weapon_component;
  pUVar29 = this->owning_skeleton;
  FVar2 = this->weapon_grabbed_bone;
  pTVar1 = &this->Saved_Relative_Hand_Transform;
  dVar9 = *(double *)&pUVar30->field_0x1f8;
  (pTVar1->Rotation).XY.m128d_f64[0] = *(double *)&pUVar30->field_0x1f0;
  (this->Saved_Relative_Hand_Transform).Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = *(double *)&pUVar30->field_0x208;
  (this->Saved_Relative_Hand_Transform).Rotation.ZW.m128d_f64[0] = *(double *)&pUVar30->field_0x200;
  (this->Saved_Relative_Hand_Transform).Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = *(double *)&pUVar30->field_0x218;
  (this->Saved_Relative_Hand_Transform).Translation.XY.m128d_f64[0] =
       *(double *)&pUVar30->field_0x210;
  (this->Saved_Relative_Hand_Transform).Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = *(double *)&pUVar30->field_0x228;
  (this->Saved_Relative_Hand_Transform).Translation.ZW.m128d_f64[0] =
       *(double *)&pUVar30->field_0x220;
  (this->Saved_Relative_Hand_Transform).Translation.ZW.m128d_f64[1] = dVar9;
  uVar46 = *(undefined4 *)&pUVar30->field_0x234;
  uVar47 = *(undefined4 *)&pUVar30->field_0x238;
  uVar48 = *(undefined4 *)&pUVar30->field_0x23c;
  *(undefined4 *)(this->Saved_Relative_Hand_Transform).Scale3D.XY.m128d_f64 =
       *(undefined4 *)&pUVar30->field_0x230;
  *(undefined4 *)((longlong)(this->Saved_Relative_Hand_Transform).Scale3D.XY.m128d_f64 + 4) = uVar46
  ;
  *(undefined4 *)((this->Saved_Relative_Hand_Transform).Scale3D.XY.m128d_f64 + 1) = uVar47;
  *(undefined4 *)((longlong)(this->Saved_Relative_Hand_Transform).Scale3D.XY.m128d_f64 + 0xc) =
       uVar48;
  dVar9 = *(double *)&pUVar30->field_0x248;
  (this->Saved_Relative_Hand_Transform).Scale3D.ZW.m128d_f64[0] = *(double *)&pUVar30->field_0x240;
  (this->Saved_Relative_Hand_Transform).Scale3D.ZW.m128d_f64[1] = dVar9;
  pTVar20 = (TTransform<double> *)
            (**(code **)(pUVar29->_padding_ + 0x520))(pUVar29,local_108,FVar2,0);
  uVar34 = _UNK_15061cc8c;
  uVar33 = _UNK_15061cc88;
  uVar17 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar16 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  auVar36._8_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
        (double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)(pTVar20->Scale3D).ZW.m128d_f64 + 0xc)
                         ,_UNK_15061cc88 & *(uint *)((pTVar20->Scale3D).ZW.m128d_f64 + 1)));
  auVar36._0_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
        (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                         *(uint *)((longlong)(pTVar20->Scale3D).ZW.m128d_f64 + 4),
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                         *(uint *)(pTVar20->Scale3D).ZW.m128d_f64));
  uVar26 = movmskpd((int)pUVar29,auVar36);
  lVar32 = -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
            (double)CONCAT44(_UNK_15061cc8c &
                             *(uint *)((longlong)(pTVar20->Scale3D).XY.m128d_f64 + 0xc),
                             _UNK_15061cc88 & *(uint *)((pTVar20->Scale3D).XY.m128d_f64 + 1)));
  auVar40._8_4_ = (int)lVar32;
  auVar40._0_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
        (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                         *(uint *)((longlong)(pTVar20->Scale3D).XY.m128d_f64 + 4),
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                         *(uint *)(pTVar20->Scale3D).XY.m128d_f64));
  auVar40._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
  iVar18 = movmskpd((int)pTVar20,auVar40);
  if ((uVar26 & 0x3fffffff) == 0 && iVar18 == 0) {
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
    local_1c8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_1c8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    UE::Math::TTransform<double>::InverseFast(pTVar20,&local_1c8);
  }
  pTVar20 = &local_168;
  local_168.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_168.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_168.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_168.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_168.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_168.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_168.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_168.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_168.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_168.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_168.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_168.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_168.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_168.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_168.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_168.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(pTVar20,pTVar1,&local_1c8);
  FVar2 = __real_3f1a36e2e0000000;
  pUVar30 = this->active_weapon_component;
  (pTVar1->Rotation).XY.m128d_f64[0] = local_168.Rotation.XY.m128d_f64[0];
  (this->Saved_Relative_Hand_Transform).Rotation.XY.m128d_f64[1] =
       local_168.Rotation.XY.m128d_f64[1];
  (this->Saved_Relative_Hand_Transform).Rotation.ZW.m128d_f64[0] =
       local_168.Rotation.ZW.m128d_f64[0];
  (this->Saved_Relative_Hand_Transform).Rotation.ZW.m128d_f64[1] =
       local_168.Rotation.ZW.m128d_f64[1];
  (this->Saved_Relative_Hand_Transform).Translation.XY.m128d_f64[0] =
       local_168.Translation.XY.m128d_f64[0];
  (this->Saved_Relative_Hand_Transform).Translation.XY.m128d_f64[1] =
       local_168.Translation.XY.m128d_f64[1];
  (this->Saved_Relative_Hand_Transform).Translation.ZW.m128d_f64[0] =
       local_168.Translation.ZW.m128d_f64[0];
  (this->Saved_Relative_Hand_Transform).Translation.ZW.m128d_f64[1] =
       local_168.Translation.ZW.m128d_f64[1];
  (this->Saved_Relative_Hand_Transform).Scale3D.XY.m128d_f64[0] = local_168.Scale3D.XY.m128d_f64[0];
  (this->Saved_Relative_Hand_Transform).Scale3D.XY.m128d_f64[1] = local_168.Scale3D.XY.m128d_f64[1];
  dVar9 = (this->dominant_hand_transform).Rotation.XY.m128d_f64[0];
  dVar10 = (this->dominant_hand_transform).Rotation.XY.m128d_f64[1];
  (this->Saved_Relative_Hand_Transform).Scale3D.ZW.m128d_f64[0] = local_168.Scale3D.ZW.m128d_f64[0];
  (this->Saved_Relative_Hand_Transform).Scale3D.ZW.m128d_f64[1] = local_168.Scale3D.ZW.m128d_f64[1];
  dVar35 = (this->dominant_hand_transform).Rotation.ZW.m128d_f64[0];
  dVar41 = (this->dominant_hand_transform).Rotation.ZW.m128d_f64[1];
  (this->last_saved_hand_transform).Rotation.XY.m128d_f64[0] = dVar9;
  (this->last_saved_hand_transform).Rotation.XY.m128d_f64[1] = dVar10;
  dVar9 = (this->dominant_hand_transform).Translation.XY.m128d_f64[0];
  dVar10 = (this->dominant_hand_transform).Translation.XY.m128d_f64[1];
  (this->last_saved_hand_transform).Rotation.ZW.m128d_f64[0] = dVar35;
  (this->last_saved_hand_transform).Rotation.ZW.m128d_f64[1] = dVar41;
  dVar35 = (this->dominant_hand_transform).Translation.ZW.m128d_f64[0];
  dVar41 = (this->dominant_hand_transform).Translation.ZW.m128d_f64[1];
  (this->last_saved_hand_transform).Translation.XY.m128d_f64[0] = dVar9;
  (this->last_saved_hand_transform).Translation.XY.m128d_f64[1] = dVar10;
  dVar9 = (this->dominant_hand_transform).Scale3D.XY.m128d_f64[0];
  dVar10 = (this->dominant_hand_transform).Scale3D.XY.m128d_f64[1];
  (this->last_saved_hand_transform).Translation.ZW.m128d_f64[0] = dVar35;
  (this->last_saved_hand_transform).Translation.ZW.m128d_f64[1] = dVar41;
  dVar35 = (this->dominant_hand_transform).Scale3D.ZW.m128d_f64[0];
  dVar41 = (this->dominant_hand_transform).Scale3D.ZW.m128d_f64[1];
  (this->last_saved_hand_transform).Scale3D.XY.m128d_f64[0] = dVar9;
  (this->last_saved_hand_transform).Scale3D.XY.m128d_f64[1] = dVar10;
  (this->last_saved_hand_transform).Scale3D.ZW.m128d_f64[0] = dVar35;
  (this->last_saved_hand_transform).Scale3D.ZW.m128d_f64[1] = dVar41;
  dVar9 = *(double *)&pUVar30->field_0x1f8;
  (this->last_saved_weapon_transform).Rotation.XY.m128d_f64[0] = *(double *)&pUVar30->field_0x1f0;
  (this->last_saved_weapon_transform).Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = *(double *)&pUVar30->field_0x208;
  (this->last_saved_weapon_transform).Rotation.ZW.m128d_f64[0] = *(double *)&pUVar30->field_0x200;
  (this->last_saved_weapon_transform).Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = *(double *)&pUVar30->field_0x218;
  (this->last_saved_weapon_transform).Translation.XY.m128d_f64[0] = *(double *)&pUVar30->field_0x210
  ;
  (this->last_saved_weapon_transform).Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = *(double *)&pUVar30->field_0x228;
  (this->last_saved_weapon_transform).Translation.ZW.m128d_f64[0] = *(double *)&pUVar30->field_0x220
  ;
  (this->last_saved_weapon_transform).Translation.ZW.m128d_f64[1] = dVar9;
  dVar9 = *(double *)&pUVar30->field_0x238;
  (this->last_saved_weapon_transform).Scale3D.XY.m128d_f64[0] = *(double *)&pUVar30->field_0x230;
  (this->last_saved_weapon_transform).Scale3D.XY.m128d_f64[1] = dVar9;
  dVar9 = *(double *)&pUVar30->field_0x248;
  (this->last_saved_weapon_transform).Scale3D.ZW.m128d_f64[0] = *(double *)&pUVar30->field_0x240;
  (this->last_saved_weapon_transform).Scale3D.ZW.m128d_f64[1] = dVar9;
  dVar35 = (this->last_saved_hand_transform).Translation.ZW.m128d_f64[0] -
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  dVar41 = (this->last_saved_hand_transform).Translation.ZW.m128d_f64[1] -
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  dVar9 = (this->last_saved_hand_transform).Translation.XY.m128d_f64[0] -
          UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  dVar10 = (this->last_saved_hand_transform).Translation.XY.m128d_f64[1] -
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  auVar37._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) & uVar17,SUB84(dVar35,0) & uVar16);
  auVar37._8_4_ = SUB84(dVar41,0) & uVar33;
  auVar37._12_4_ = (uint)((ulonglong)dVar41 >> 0x20) & uVar34;
  lVar32 = -(ulonglong)((double)FVar2 < auVar37._8_8_);
  auVar4._8_4_ = (int)lVar32;
  auVar4._0_8_ = -(ulonglong)((double)FVar2 < auVar37._0_8_);
  auVar4._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
  uVar26 = movmskpd((int)pTVar20,auVar4);
  lVar32 = -(ulonglong)
            ((double)FVar2 <
            (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & uVar34,SUB84(dVar10,0) & uVar33));
  auVar11._8_4_ = (int)lVar32;
  auVar11._0_8_ =
       -(ulonglong)
        ((double)FVar2 <
        (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar17,SUB84(dVar9,0) & uVar16));
  auVar11._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
  iVar18 = movmskpd(extraout_EAX,auVar11);
  if ((uVar26 & 0x3fffffff) == 0 && iVar18 == 0) {
    dVar14 = (this->last_saved_hand_transform).Rotation.ZW.m128d_f64[0];
    dVar15 = (this->last_saved_hand_transform).Rotation.ZW.m128d_f64[1];
    dVar44 = (this->last_saved_hand_transform).Rotation.XY.m128d_f64[0];
    dVar45 = (this->last_saved_hand_transform).Rotation.XY.m128d_f64[1];
    dVar9 = dVar14 - UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    dVar10 = dVar15 - UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    dVar14 = dVar14 + UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    dVar15 = dVar15 + UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    dVar35 = dVar44 - UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    dVar41 = dVar45 - UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    dVar44 = dVar44 + UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    dVar45 = dVar45 + UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    lVar32 = -(ulonglong)
              ((double)FVar2 <
              (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & uVar34,SUB84(dVar10,0) & uVar33))
    ;
    auVar5._8_4_ = (int)lVar32;
    auVar5._0_8_ = -(ulonglong)
                    ((double)FVar2 <
                    (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar17,
                                     SUB84(dVar9,0) & uVar16));
    auVar5._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
    iVar27 = movmskpd(0,auVar5);
    lVar32 = -(ulonglong)
              ((double)FVar2 <
              (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) & uVar34,SUB84(dVar41,0) & uVar33))
    ;
    auVar6._8_4_ = (int)lVar32;
    auVar6._0_8_ = -(ulonglong)
                    ((double)FVar2 <
                    (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) & uVar17,
                                     SUB84(dVar35,0) & uVar16));
    auVar6._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
    uVar26 = movmskpd(iVar18,auVar6);
    uVar28 = iVar27 << 2 | uVar26;
    if (uVar28 != 0) {
      lVar32 = -(ulonglong)
                ((double)FVar2 <
                (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar34,SUB84(dVar15,0) & uVar33
                                ));
      auVar7._8_4_ = (int)lVar32;
      auVar7._0_8_ = -(ulonglong)
                      ((double)FVar2 <
                      (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar17,
                                       SUB84(dVar14,0) & uVar16));
      auVar7._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
      uVar28 = movmskpd(uVar28,auVar7);
      lVar32 = -(ulonglong)
                ((double)FVar2 <
                (double)CONCAT44((uint)((ulonglong)dVar45 >> 0x20) & uVar34,SUB84(dVar45,0) & uVar33
                                ));
      auVar13._8_4_ = (int)lVar32;
      auVar13._0_8_ =
           -(ulonglong)
            ((double)FVar2 <
            (double)CONCAT44((uint)((ulonglong)dVar44 >> 0x20) & uVar17,SUB84(dVar44,0) & uVar16));
      auVar13._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
      uVar26 = movmskpd(uVar26,auVar13);
      if ((uVar28 & 0x3fffffff) != 0 || uVar26 != 0) goto LAB_14d33869e;
    }
    dVar35 = (this->last_saved_hand_transform).Scale3D.ZW.m128d_f64[0] -
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    dVar41 = (this->last_saved_hand_transform).Scale3D.ZW.m128d_f64[1] -
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    dVar9 = (this->last_saved_hand_transform).Scale3D.XY.m128d_f64[0] -
            UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    dVar10 = (this->last_saved_hand_transform).Scale3D.XY.m128d_f64[1] -
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    auVar38._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) & uVar17,SUB84(dVar35,0) & uVar16);
    auVar38._8_4_ = SUB84(dVar41,0) & uVar33;
    auVar38._12_4_ = (uint)((ulonglong)dVar41 >> 0x20) & uVar34;
    local_268[0] = FVar2;
    lVar32 = -(ulonglong)((double)FVar2 < auVar38._8_8_);
    auVar8._8_4_ = (int)lVar32;
    auVar8._0_8_ = -(ulonglong)((double)FVar2 < auVar38._0_8_);
    auVar8._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
    uVar28 = movmskpd(0,auVar8);
    lVar32 = -(ulonglong)
              ((double)FVar2 <
              (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & uVar34,SUB84(dVar10,0) & uVar33))
    ;
    auVar12._8_4_ = (int)lVar32;
    auVar12._0_8_ =
         -(ulonglong)
          ((double)FVar2 <
          (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar17,SUB84(dVar9,0) & uVar16));
    auVar12._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
    iVar18 = movmskpd(uVar26,auVar12);
    if ((uVar28 & 0x3fffffff) == 0 && iVar18 == 0) {
      pUVar29 = this->owning_skeleton;
      iVar18 = USkinnedMeshComponent::GetBoneIndex
                         ((USkinnedMeshComponent *)pUVar29,this->weapon_grabbed_bone);
      USkinnedMeshComponent::GetBoneTransform((USkinnedMeshComponent *)pUVar29,&local_1c8,iVar18);
      (this->last_saved_hand_transform).Rotation.XY.m128d_f64[0] =
           local_1c8.Rotation.XY.m128d_f64[0];
      (this->last_saved_hand_transform).Rotation.XY.m128d_f64[1] =
           local_1c8.Rotation.XY.m128d_f64[1];
      (this->last_saved_hand_transform).Rotation.ZW.m128d_f64[0] =
           local_1c8.Rotation.ZW.m128d_f64[0];
      (this->last_saved_hand_transform).Rotation.ZW.m128d_f64[1] =
           local_1c8.Rotation.ZW.m128d_f64[1];
      (this->last_saved_hand_transform).Translation.XY.m128d_f64[0] =
           local_1c8.Translation.XY.m128d_f64[0];
      (this->last_saved_hand_transform).Translation.XY.m128d_f64[1] =
           local_1c8.Translation.XY.m128d_f64[1];
      (this->last_saved_hand_transform).Translation.ZW.m128d_f64[0] =
           local_1c8.Translation.ZW.m128d_f64[0];
      (this->last_saved_hand_transform).Translation.ZW.m128d_f64[1] =
           local_1c8.Translation.ZW.m128d_f64[1];
      (this->last_saved_hand_transform).Scale3D.XY.m128d_f64[0] = local_1c8.Scale3D.XY.m128d_f64[0];
      (this->last_saved_hand_transform).Scale3D.XY.m128d_f64[1] = local_1c8.Scale3D.XY.m128d_f64[1];
      (this->last_saved_hand_transform).Scale3D.ZW.m128d_f64[0] = local_1c8.Scale3D.ZW.m128d_f64[0];
      (this->last_saved_hand_transform).Scale3D.ZW.m128d_f64[1] = local_1c8.Scale3D.ZW.m128d_f64[1];
      return;
    }
  }
LAB_14d33869e:
  local_268[0] = FVar2;
  bVar31 = this->perform_physics_simulation != false;
  lVar32 = *(longlong *)pUVar30;
  if (bVar31) {
    (**(code **)(lVar32 + 0x780))(pUVar30,3);
    pUVar30 = this->active_weapon_component;
    lVar32 = *(longlong *)pUVar30;
  }
  (**(code **)(lVar32 + 0x6f0))(pUVar30,bVar31);
  (**(code **)(*(longlong *)this->active_weapon_component + 0x918))
            (this->active_weapon_component,this->perform_gravity_simulation);
  local_1f8._s_0.X = (this->last_saved_hand_transform).Rotation.XY.m128d_f64[0];
  local_1f8._s_0.Y = (this->last_saved_hand_transform).Rotation.XY.m128d_f64[1];
  local_1f8._s_0.Z = (this->last_saved_hand_transform).Rotation.ZW.m128d_f64[0];
  dStack_1e0 = (this->last_saved_hand_transform).Rotation.ZW.m128d_f64[1];
  this_00 = this->weapon_physics_handle;
  UE::Math::TQuat<double>::Rotator
            ((TQuat<double> *)&local_1f8._s_0,(TRotator<double> *)&local_218._s_0);
  local_258._s_0.Z = (this->last_saved_hand_transform).Translation.ZW.m128d_f64[0];
  local_258._s_0.X = (this->last_saved_hand_transform).Translation.XY.m128d_f64[0];
  local_258._s_0.Y = (this->last_saved_hand_transform).Translation.XY.m128d_f64[1];
  local_238._s_0.X = (double)CONCAT44(local_218._4_4_,local_218._0_4_);
  local_238._8_4_ = local_218._8_4_;
  local_238._12_4_ = local_218._12_4_;
  local_238._s_0.Z = local_218._s_0.Z;
  local_1f8._s_0.Z = local_258._s_0.Z;
  UPhysicsHandleComponent::GrabComponentAtLocationWithRotation
            (this_00,this->active_weapon_component,this->weapon_bone,
             (TVector<double> *)&local_258._s_0,(TRotator<double> *)&local_238._s_0);
  local_258._s_0.X = (this->dominant_shoulder).Translation.XY.m128d_f64[0];
  local_258._s_0.Y = (this->dominant_shoulder).Translation.XY.m128d_f64[1];
  local_258._s_0.Z = (this->dominant_shoulder).Translation.ZW.m128d_f64[0];
  USceneComponent::SetWorldLocation
            ((USceneComponent *)this->weapon_physics_constraint,(TVector<double> *)&local_258._s_0,
             false,(FHitResult *)0x0,TeleportPhysics);
  (**(code **)(this->weapon_physics_constraint->_padding_ + 0x508))
            (this->weapon_physics_constraint,this->owning_skeleton);
  pUVar30 = this->active_weapon_component;
  local_258._s_0.X = (this->dominant_shoulder).Translation.XY.m128d_f64[0];
  local_258._s_0.Y = (this->dominant_shoulder).Translation.XY.m128d_f64[1];
  local_258._s_0.Z = (this->dominant_shoulder).Translation.ZW.m128d_f64[0];
  dVar10 = (((VectorRegister4Double *)&pUVar30->field_0x210)->XY).m128d_f64[0];
  dVar35 = *(double *)&pUVar30->field_0x218;
  dVar9 = ((__m128d *)&pUVar30->field_0x220)->m128d_f64[0];
  USceneComponent::SetWorldLocation
            ((USceneComponent *)pUVar30,(TVector<double> *)&local_258._s_0,false,(FHitResult *)0x0,
             TeleportPhysics);
  pUVar29 = this->owning_skeleton;
  iVar18 = 0;
  FVar25 = this->dominant_shoulder_name;
  if ((((pUVar29 == (USkeletalMeshComponent *)0x0) ||
       (pUVar21 = USkinnedMeshComponent::GetPhysicsAsset((USkinnedMeshComponent *)pUVar29),
       pUVar21 == (UPhysicsAsset *)0x0)) ||
      (iVar27 = USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)pUVar29,FVar25),
      iVar27 == -1)) ||
     ((pFVar22 = (FBodyInstance *)(**(code **)(pUVar29->_padding_ + 0x818))(pUVar29,FVar25,1),
      pFVar22 == (FBodyInstance *)0x0 ||
      (bVar31 = FBodyInstance::IsValidBodyInstance(pFVar22), !bVar31)))) {
    iVar27 = 0;
    do {
      FVar25 = USkinnedMeshComponent::GetParentBone
                         ((USkinnedMeshComponent *)this->owning_skeleton,(FName)local_268);
      pUVar29 = this->owning_skeleton;
      FVar25 = *(FName *)FVar25;
      if (((pUVar29 != (USkeletalMeshComponent *)0x0) &&
          (pUVar21 = USkinnedMeshComponent::GetPhysicsAsset((USkinnedMeshComponent *)pUVar29),
          pUVar21 != (UPhysicsAsset *)0x0)) &&
         ((iVar19 = USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)pUVar29,FVar25),
          iVar19 != -1 &&
          ((pFVar22 = (FBodyInstance *)(**(code **)(pUVar29->_padding_ + 0x818))(pUVar29,FVar25),
           pFVar22 != (FBodyInstance *)0x0 &&
           (bVar31 = FBodyInstance::IsValidBodyInstance(pFVar22), bVar31)))))) {
        this_01 = this->weapon_physics_constraint;
        pFVar23 = ::FName::FName(local_268,"None");
        goto LAB_14d338972;
      }
      iVar27 = iVar27 + 1;
    } while (iVar27 < 5);
  }
  else {
    this_01 = this->weapon_physics_constraint;
    pFVar23 = ::FName::FName(local_268,"None");
    FVar25 = this->dominant_shoulder_name;
LAB_14d338972:
    UPhysicsConstraintComponent::SetConstrainedComponents
              (this_01,(UPrimitiveComponent *)this->owning_skeleton,FVar25,
               this->active_weapon_component,*pFVar23);
  }
  this->physics_constraint_used = true;
  local_258._s_0.X = dVar10;
  local_258._s_0.Y = dVar35;
  local_258._s_0.Z = dVar9;
  USceneComponent::SetWorldLocation
            ((USceneComponent *)this->active_weapon_component,(TVector<double> *)&local_258._s_0,
             false,(FHitResult *)0x0,TeleportPhysics);
  pUVar30 = this->active_weapon_component;
  local_1f8._s_0.Z = (double)*(undefined8 *)&pUVar30->field_0x220;
  dVar10 = (this->dominant_shoulder).Translation.XY.m128d_f64[0] - *(double *)&pUVar30->field_0x210;
  dVar9 = (this->dominant_shoulder).Translation.XY.m128d_f64[0];
  dVar15 = (this->dominant_shoulder).Translation.XY.m128d_f64[1];
  dVar14 = (this->dominant_shoulder).Translation.ZW.m128d_f64[0];
  dVar41 = (this->dominant_shoulder).Translation.XY.m128d_f64[1] - *(double *)&pUVar30->field_0x218;
  dVar35 = (this->dominant_shoulder).Translation.ZW.m128d_f64[0] - local_1f8._s_0.Z;
  pTVar24 = USkinnedMeshComponent::GetBoneLocation
                      ((USkinnedMeshComponent *)this->owning_skeleton,
                       (TVector<double> *)&local_1f8._s_0,this->dominant_hand_name,WorldSpace);
  pUVar29 = this->owning_skeleton;
  FVar25 = this->dominant_hand_name;
  FVar3 = this->dominant_shoulder_name;
  dVar9 = dVar9 - (pTVar24->field0_0x0)._s_0.X;
  dVar15 = dVar15 - (pTVar24->field0_0x0)._s_0.Y;
  dVar14 = dVar14 - (pTVar24->field0_0x0)._s_0.Z;
  if (pUVar29 == (USkeletalMeshComponent *)0x0) {
    fVar50 = 0.0;
  }
  else {
    iVar27 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)pUVar29);
    iVar19 = USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)pUVar29,FVar3);
    if (iVar19 == -1) {
      fVar50 = 0.0;
    }
    else {
      iVar19 = USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)pUVar29,FVar25);
      if (iVar19 == -1) {
        fVar50 = 0.0;
      }
      else {
        bVar31 = USkinnedMeshComponent::BoneIsChildOf((USkinnedMeshComponent *)pUVar29,FVar25,FVar3)
        ;
        fVar50 = 0.0;
        if (bVar31) {
          local_238._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_238._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          local_238._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          local_238._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          local_238._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          uVar46 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar47 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uVar48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar49 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          if (0 < iVar27) {
            do {
              local_238._8_4_ = uVar48;
              local_238._12_4_ = uVar49;
              USkinnedMeshComponent::GetBoneName((USkinnedMeshComponent *)pUVar29,(int)local_268);
              USkinnedMeshComponent::GetBoneLocation
                        ((USkinnedMeshComponent *)pUVar29,(TVector<double> *)&local_218._s_0,
                         local_268[0],WorldSpace);
              dVar44 = (double)CONCAT44(uVar47,uVar46) -
                       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                        UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
              uVar33 = SUB84(dVar44,0) & uVar16;
              uVar34 = (uint)((ulonglong)dVar44 >> 0x20) & uVar17;
              uVar42 = local_238._8_4_;
              uVar43 = local_238._12_4_;
              if ((((double)CONCAT44(uVar34,uVar33) < (double)FVar2 ||
                    (double)CONCAT44(uVar34,uVar33) == (double)FVar2) &&
                  (dVar44 = (double)CONCAT44(uVar49,uVar48) -
                            (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_
                                             ,UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_
                                            ), uVar33 = SUB84(dVar44,0) & uVar16,
                  uVar34 = (uint)((ulonglong)dVar44 >> 0x20) & uVar17, uVar42 = uVar48,
                  uVar43 = uVar49,
                  (double)CONCAT44(uVar34,uVar33) < (double)FVar2 ||
                  (double)CONCAT44(uVar34,uVar33) == (double)FVar2)) &&
                 (uVar33 = SUB84(local_238._s_0.Z -
                                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0) & uVar16
                 , uVar34 = (uint)((ulonglong)
                                   (local_238._s_0.Z -
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z) >> 0x20)
                            & uVar17,
                 (double)CONCAT44(uVar34,uVar33) < (double)FVar2 ||
                 (double)CONCAT44(uVar34,uVar33) == (double)FVar2)) {
                local_238._s_0.Z = local_218._s_0.Z;
                uVar42 = local_218._8_4_;
                uVar43 = local_218._12_4_;
                uVar46 = local_218._0_4_;
                uVar47 = local_218._4_4_;
              }
              dVar44 = (double)CONCAT44(local_218._4_4_,local_218._0_4_) -
                       (double)CONCAT44(uVar47,uVar46);
              dVar45 = (double)CONCAT44(local_218._12_4_,local_218._8_4_) -
                       (double)CONCAT44(uVar43,uVar42);
              auVar39._0_8_ =
                   dVar45 * dVar45 + dVar44 * dVar44 +
                   (local_218._s_0.Z - local_238._s_0.Z) * (local_218._s_0.Z - local_238._s_0.Z);
              auVar39._8_8_ = 0;
              auVar40 = sqrtpd(auVar39,auVar39);
              fVar50 = (float)(auVar40._0_8_ + (double)fVar50);
              if (local_268[0] == FVar3) break;
              FVar25 = USkinnedMeshComponent::GetParentBone
                                 ((USkinnedMeshComponent *)pUVar29,(FName)local_1d8);
              iVar19 = USkinnedMeshComponent::GetBoneIndex
                                 ((USkinnedMeshComponent *)pUVar29,*(FName *)FVar25);
              if (iVar19 == -1) break;
              iVar18 = iVar18 + 1;
              local_238._s_0.Z = local_218._s_0.Z;
              local_238._4_4_ = local_218._4_4_;
              local_238._0_4_ = local_218._0_4_;
              local_238._8_4_ = local_218._8_4_;
              local_238._12_4_ = local_218._12_4_;
              uVar46 = local_218._0_4_;
              uVar47 = local_218._4_4_;
              uVar48 = local_218._8_4_;
              uVar49 = local_218._12_4_;
            } while (iVar18 < iVar27);
          }
        }
      }
    }
  }
  fVar50 = ((float)((uint)((float)SQRT(dVar15 * dVar15 + dVar9 * dVar9 + dVar14 * dVar14) - fVar50)
                   & __xmm_7fffffff7fffffff7fffffff7fffffff) +
           (float)SQRT(dVar41 * dVar41 + dVar10 * dVar10 + dVar35 * dVar35)) *
           this->Max_Arm_Length_Percent;
  this->arm_length = fVar50;
  UPhysicsConstraintComponent::SetLinearXLimit(this->weapon_physics_constraint,LCM_Limited,fVar50);
  UPhysicsConstraintComponent::SetLinearYLimit
            (this->weapon_physics_constraint,LCM_Limited,this->arm_length);
  UPhysicsConstraintComponent::SetLinearZLimit
            (this->weapon_physics_constraint,LCM_Limited,this->arm_length);
  UPhysicsConstraintComponent::SetLinearBreakable(this->weapon_physics_constraint,false,0.0);
  this->is_grabbing = true;
  this->perform_grab_weapon = false;
  return;
}

// Destroy_Weapon @ 14d338d70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Destroy_Weapon
          (UDragonIKWeaponPhysicsComponent *this,AActor *param_1)

{
  FLinearColor FVar1;
  FText *pFVar2;
  UWorld *pUVar3;
  FLinearColor_u_0 local_38;
  FText local_28 [2];
  
  if (this->active_weapon_component != (UPrimitiveComponent *)0x0) {
    AActor::Destroy(*(AActor **)&this->active_weapon_component->field_0xa8,false,true);
    FVar1 = FLinearColor::Yellow;
    pFVar2 = FText::AsCultureInvariant(local_28," DESTROY TEST!");
    pUVar3 = AActor::GetWorld((AActor *)this->owning_skeleton->_padding_);
    local_38 = FVar1.field0_0x0;
    UKismetSystemLibrary::PrintText
              ((UObject *)pUVar3,pFVar2,true,false,(FLinearColor *)&local_38._s_0,__real_4121999a,
               (FName)0x0);
  }
  return;
}

// DisableWeaponsArms @ 14d338e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::DisableWeaponsArms
          (UDragonIKWeaponPhysicsComponent *this,bool param_1)

{
  int iVar1;
  UPrimitiveComponent *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FName *pFVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  FName local_88 [2];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar2 = this->active_weapon_component;
  if (pUVar2 != (UPrimitiveComponent *)0x0) {
    (**(code **)(*(longlong *)pUVar2 + 0x6f0))(pUVar2,0);
    (**(code **)(*(longlong *)this->active_weapon_component + 0x508))
              (this->active_weapon_component,this->owning_skeleton,
               &FAttachmentTransformRules::KeepWorldTransform);
    if (param_1) {
      pUVar2 = this->active_weapon_component;
      local_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_78.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_78.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_78.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_78.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_78.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_78.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_78.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_78.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_78.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_78.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_78,&this->Saved_Relative_Hand_Transform,&this->dominant_hand_transform);
      USceneComponent::SetWorldTransform
                ((USceneComponent *)pUVar2,&local_78,false,(FHitResult *)0x0,None);
    }
    uVar9 = 0;
    if (0 < (this->handbone_array_boneName).ArrayNum) {
      lVar10 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (this->handbone_array_boneName).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->handbone_array_boneName).AllocatorInstance.Data;
        iVar1 = *(int *)(pFVar3 + lVar10 + 8);
        iVar8 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar8 = 0;
        }
        pFVar7 = ::FName::FName(local_88,iVar8,*(wchar_t **)(pFVar3 + lVar10),FNAME_Add);
        Release_Hand_Only(this,*pFVar7);
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x10;
      } while ((int)uVar9 < (this->handbone_array_boneName).ArrayNum);
    }
  }
  return;
}

// EnableWeaponsArms @ 14d339050

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::EnableWeaponsArms(UDragonIKWeaponPhysicsComponent *this)

{
  int iVar1;
  UPrimitiveComponent *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FName *pFVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  FName local_res8;
  
  pUVar2 = this->active_weapon_component;
  if (pUVar2 != (UPrimitiveComponent *)0x0) {
    (**(code **)(*(longlong *)pUVar2 + 0x6f0))(pUVar2,1);
    (**(code **)(*(longlong *)this->active_weapon_component + 0x518))
              (this->active_weapon_component,&FDetachmentTransformRules::KeepWorldTransform);
    uVar9 = 0;
    if (0 < (this->handbone_array_boneName).ArrayNum) {
      lVar10 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (this->handbone_array_boneName).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->handbone_array_boneName).AllocatorInstance.Data;
        iVar1 = *(int *)(pFVar3 + lVar10 + 8);
        iVar8 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar8 = 0;
        }
        pFVar7 = ::FName::FName(&local_res8,iVar8,*(wchar_t **)(pFVar3 + lVar10),FNAME_Add);
        Attach_Hand_Only(this,*pFVar7,false);
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x10;
      } while ((int)uVar9 < (this->handbone_array_boneName).ArrayNum);
    }
  }
  return;
}

// FirstTimeInitialization @ 14d345360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d345968) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::FirstTimeInitialization
          (UDragonIKWeaponPhysicsComponent *this,USkeletalMeshComponent *param_1)

{
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar6;
  int *piVar7;
  FName FVar8;
  UObject *pUVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  bool bVar12;
  FName *pFVar13;
  UPhysicsHandleComponent *pUVar14;
  UClass *pUVar15;
  UPhysicsConstraintComponent *pUVar16;
  UWorld *pUVar17;
  longlong *plVar18;
  int iVar19;
  longlong lVar20;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar21;
  undefined1 auStackY_178 [32];
  FScriptContainerElement local_128;
  FScriptContainerElement local_127;
  FScriptContainerElement local_126;
  FScriptContainerElement local_125;
  FScriptContainerElement local_124 [4];
  undefined4 local_120 [2];
  FString local_118;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_108;
  longlong local_100;
  FString local_f8;
  FString local_e8;
  FName local_d0;
  FName local_c8 [2];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  if (param_1 != (USkeletalMeshComponent *)0x0) {
    local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
    this->owning_skeleton = param_1;
    ::FString::FString(&local_e8,"Weapon Physics Handle");
    ::FString::AppendInt(&local_e8,this->physanim_tag_index);
    ::FString::FString(&local_f8,"Weapon Physics Constraint");
    ::FString::AppendInt(&local_f8,this->physanim_tag_index);
    iVar19 = local_e8.Data.ArrayNum + -1;
    if (local_e8.Data.ArrayNum == 0) {
      iVar19 = 0;
    }
    pFVar13 = ::FName::FName(&local_d0,iVar19,(wchar_t *)local_e8.Data.AllocatorInstance.Data,
                             FNAME_Add);
    pUVar14 = NewObject<UPhysicsHandleComponent>
                        ((UObject *)this->owning_skeleton->_padding_,*pFVar13,RF_NoFlags,
                         (UObject *)0x0,false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    this->weapon_physics_handle = pUVar14;
    iVar19 = local_f8.Data.ArrayNum + -1;
    if (local_f8.Data.ArrayNum == 0) {
      iVar19 = 0;
    }
    pFVar13 = ::FName::FName(local_c8,iVar19,(wchar_t *)local_f8.Data.AllocatorInstance.Data,
                             FNAME_Add);
    FVar8 = *pFVar13;
    pUVar9 = (UObject *)this->owning_skeleton->_padding_;
    if (FVar8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                (pUVar9,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar15 = Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar15);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._24_4_ = RF_NoFlags;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = pUVar9;
    local_b8._16_8_ = FVar8;
    pUVar16 = (UPhysicsConstraintComponent *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar18 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar18 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    this->weapon_physics_constraint = pUVar16;
    pUVar14 = this->weapon_physics_handle;
    if ((pUVar14->_padding_ & 1) == 0) {
      pUVar17 = AActor::GetWorld((AActor *)this->owning_skeleton->_padding_);
      UActorComponent::RegisterComponentWithWorld
                ((UActorComponent *)pUVar14,pUVar17,(FRegisterComponentContext *)0x0);
      UActorComponent::RegisterComponent((UActorComponent *)this->weapon_physics_handle);
    }
    pUVar16 = this->weapon_physics_constraint;
    if ((pUVar16->_padding_ & 1) == 0) {
      pUVar17 = AActor::GetWorld((AActor *)this->owning_skeleton->_padding_);
      UActorComponent::RegisterComponentWithWorld
                ((UActorComponent *)pUVar16,pUVar17,(FRegisterComponentContext *)0x0);
      UActorComponent::RegisterComponent((UActorComponent *)this->weapon_physics_constraint);
    }
    UActorComponent::SetIsReplicated((UActorComponent *)this->weapon_physics_handle,true);
    UActorComponent::SetIsReplicated((UActorComponent *)this->weapon_physics_constraint,true);
    this->weapon_physics_handle->LinearDamping = (float)this->Linear_Damp;
    this->weapon_physics_handle->AngularDamping = (float)this->Angular_Damp;
    this->weapon_physics_handle->LinearStiffness = (float)this->Linear_Strength;
    this->weapon_physics_handle->AngularStiffness = (float)this->Angular_Strength;
    this->weapon_physics_handle->InterpolationSpeed = (float)(this->Interpolation_Speed * 10);
    (**(code **)(this->weapon_physics_handle->_padding_ + 0x2b8))(this->weapon_physics_handle,0);
    (**(code **)(this->weapon_physics_constraint->_padding_ + 0x2b8))
              (this->weapon_physics_constraint,0);
    pTVar1 = &this->arm_grabbing_status;
    piVar7 = &(this->arm_grabbing_status).ArrayMax;
    (this->arm_grabbing_status).ArrayNum = 0;
    if (*piVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&pTVar1->AllocatorInstance,0,piVar7);
    }
    pTVar2 = &this->arm_reset_queue_index;
    piVar7 = &(this->arm_reset_queue_index).ArrayMax;
    (this->arm_reset_queue_index).ArrayNum = 0;
    if (*piVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&pTVar2->AllocatorInstance,0,piVar7);
    }
    pTVar3 = &this->Frozen_Elbow_Component_Status;
    piVar7 = &(this->Frozen_Elbow_Component_Status).ArrayMax;
    (this->Frozen_Elbow_Component_Status).ArrayNum = 0;
    if (*piVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&pTVar3->AllocatorInstance,0,piVar7);
    }
    pTVar4 = &this->handbone_array_boneName;
    DestructItems<FString,int>
              ((FString *)(pTVar4->AllocatorInstance).Data,(this->handbone_array_boneName).ArrayNum)
    ;
    piVar7 = &(this->handbone_array_boneName).ArrayMax;
    (this->handbone_array_boneName).ArrayNum = 0;
    if (*piVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar4->AllocatorInstance,0,piVar7);
    }
    pTVar5 = &this->handbone_array_boneIndex;
    piVar7 = &(this->handbone_array_boneIndex).ArrayMax;
    (this->handbone_array_boneIndex).ArrayNum = 0;
    if (*piVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar5->AllocatorInstance,0,piVar7);
    }
    local_108 = &this->arm_override_transform;
    local_100 = 10;
    pTVar6 = &this->should_override_hand_location;
    pTVar21 = &this->should_override_hand_rotation;
    do {
      pFVar10 = (pTVar1->AllocatorInstance).Data;
      local_128 = (FScriptContainerElement)0x1;
      if (((pFVar10 <= &local_128) && (&local_128 < pFVar10 + (this->arm_grabbing_status).ArrayMax))
         && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar19 = (this->arm_grabbing_status).ArrayNum;
      if (iVar19 == (this->arm_grabbing_status).ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&pTVar1->AllocatorInstance,&(this->arm_grabbing_status).ArrayMax);
      }
      (this->arm_grabbing_status).ArrayNum = iVar19 + 1;
      local_127 = (FScriptContainerElement)0x0;
      (pTVar1->AllocatorInstance).Data[iVar19] = local_128;
      pFVar10 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar10 <= &local_127) &&
          (&local_127 < pFVar10 + (this->arm_reset_queue_index).ArrayMax)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar19 = (this->arm_reset_queue_index).ArrayNum;
      if (iVar19 == (this->arm_reset_queue_index).ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&pTVar2->AllocatorInstance,&(this->arm_reset_queue_index).ArrayMax
                           );
      }
      (this->arm_reset_queue_index).ArrayNum = iVar19 + 1;
      (pTVar2->AllocatorInstance).Data[iVar19] = local_127;
      ::FString::FString(&local_118,"");
      pFVar10 = (pTVar4->AllocatorInstance).Data;
      if (((pFVar10 <= (FScriptContainerElement *)&local_118) &&
          ((FScriptContainerElement *)&local_118 <
           pFVar10 + (longlong)(this->handbone_array_boneName).ArrayMax * 0x10)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar19 = (this->handbone_array_boneName).ArrayNum;
      if (iVar19 == (this->handbone_array_boneName).ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar4->AllocatorInstance,
                            &(this->handbone_array_boneName).ArrayMax);
      }
      lVar20 = (longlong)iVar19;
      (this->handbone_array_boneName).ArrayNum = iVar19 + 1;
      pFVar10 = (pTVar4->AllocatorInstance).Data;
      *(undefined8 *)(pFVar10 + lVar20 * 0x10) = 0;
      *(FScriptContainerElement **)(pFVar10 + lVar20 * 0x10) = local_118.Data.AllocatorInstance.Data
      ;
      *(int *)(pFVar10 + lVar20 * 0x10 + 8) = local_118.Data.ArrayNum;
      *(int *)(pFVar10 + lVar20 * 0x10 + 0xc) = local_118.Data.ArrayMax;
      local_118.Data.ArrayNum = 0;
      local_118.Data.ArrayMax = 0;
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar10 = (pTVar5->AllocatorInstance).Data;
      local_120[0] = 0;
      if (((pFVar10 <= (FScriptContainerElement *)local_120) &&
          ((FScriptContainerElement *)local_120 <
           pFVar10 + (longlong)(this->handbone_array_boneIndex).ArrayMax * 4)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar19 = (this->handbone_array_boneIndex).ArrayNum;
      if (iVar19 == (this->handbone_array_boneIndex).ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar5->AllocatorInstance,
                            &(this->handbone_array_boneIndex).ArrayMax);
      }
      (this->handbone_array_boneIndex).ArrayNum = iVar19 + 1;
      local_126 = (FScriptContainerElement)0x0;
      *(undefined4 *)((pTVar5->AllocatorInstance).Data + (longlong)iVar19 * 4) = local_120[0];
      pFVar10 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar10 <= &local_126) &&
          (&local_126 < pFVar10 + (this->Frozen_Elbow_Component_Status).ArrayMax)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar19 = (this->Frozen_Elbow_Component_Status).ArrayNum;
      if (iVar19 == (this->Frozen_Elbow_Component_Status).ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&pTVar3->AllocatorInstance,
                            &(this->Frozen_Elbow_Component_Status).ArrayMax);
      }
      (this->Frozen_Elbow_Component_Status).ArrayNum = iVar19 + 1;
      local_125 = (FScriptContainerElement)0x0;
      (pTVar3->AllocatorInstance).Data[iVar19] = local_126;
      pFVar10 = (pTVar6->AllocatorInstance).Data;
      if (((pFVar10 <= &local_125) &&
          (&local_125 < pFVar10 + (this->should_override_hand_location).ArrayMax)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar19 = (this->should_override_hand_location).ArrayNum;
      if (iVar19 == (this->should_override_hand_location).ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&pTVar6->AllocatorInstance,
                            &(this->should_override_hand_location).ArrayMax);
      }
      (this->should_override_hand_location).ArrayNum = iVar19 + 1;
      local_124[0] = (FScriptContainerElement)0x0;
      (pTVar6->AllocatorInstance).Data[iVar19] = local_125;
      pFVar10 = (pTVar21->AllocatorInstance).Data;
      if (((pFVar10 <= local_124) &&
          (local_124 < pFVar10 + (this->should_override_hand_rotation).ArrayMax)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar19 = (this->should_override_hand_rotation).ArrayNum;
      if (iVar19 == (this->should_override_hand_rotation).ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&pTVar21->AllocatorInstance,
                            &(this->should_override_hand_rotation).ArrayMax);
      }
      (this->should_override_hand_rotation).ArrayNum = iVar19 + 1;
      (pTVar21->AllocatorInstance).Data[iVar19] = local_124[0];
      pFVar10 = (local_108->AllocatorInstance).Data;
      if (((pFVar10 < (FScriptContainerElement *)0x154eba441) &&
          (&UE::Math::TTransform<double>::Identity <
           (TTransform<double> *)(pFVar10 + (longlong)local_108->ArrayMax * 0x60))) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar19 = local_108->ArrayNum;
      if (iVar19 == local_108->ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1060,&local_108->AllocatorInstance,&local_108->ArrayMax);
      }
      local_108->ArrayNum = iVar19 + 1;
      pFVar10 = (local_108->AllocatorInstance).Data;
      lVar20 = (longlong)iVar19 * 0x60;
      local_100 = local_100 + -1;
      *(double (*) [2])(pFVar10 + lVar20) =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      *(double (*) [2])(pFVar10 + lVar20 + 0x10) =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      *(double (*) [2])(pFVar10 + lVar20 + 0x20) =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      *(double (*) [2])(pFVar10 + lVar20 + 0x30) =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      *(double (*) [2])(pFVar10 + lVar20 + 0x40) =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      *(double (*) [2])(pFVar10 + lVar20 + 0x50) =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    } while (local_100 != 0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Freeze_Elbows_Function @ 14d345d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Freeze_Elbows_Function
          (UDragonIKWeaponPhysicsComponent *this,FName param_1)

{
  USkeletalMeshComponent *this_00;
  code *pcVar1;
  double dVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FString *pFVar6;
  TTransform<double> *pTVar7;
  uint uVar8;
  FName local_res10;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  FString local_88;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if ((0 < (this->handbone_array_boneName).ArrayNum) &&
     (0 < (this->handbone_array_boneIndex).ArrayNum)) {
    local_res10 = param_1;
    pFVar6 = ::FName::ToString(&local_res10,&local_88);
    uVar4 = TArray<FString,TSizedDefaultAllocator<32>_>::Find(&this->handbone_array_boneName,pFVar6)
    ;
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (-1 < (int)uVar4) {
      iVar5 = (this->handbone_array_boneIndex).ArrayNum;
      uVar8 = 0;
      if ((int)uVar4 < iVar5) {
        uVar8 = ~uVar4 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (local_98 = (longlong)(int)uVar4, local_90 = (longlong)iVar5,
         bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = *(uint *)((this->handbone_array_boneIndex).AllocatorInstance.Data +
                       (longlong)(int)uVar4 * 4);
      if ((-1 < (int)uVar4) && ((int)uVar4 < (this->arm_grabbing_status).ArrayNum)) {
        iVar5 = (this->Frozen_Elbow_Component_Status).ArrayNum;
        uVar8 = 0;
        if ((int)uVar4 < iVar5) {
          uVar8 = ~uVar4 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (local_98 = (longlong)(int)uVar4, local_90 = (longlong)iVar5,
           bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (this->Frozen_Elbow_Component_Status).AllocatorInstance.Data[(int)uVar4] =
             (FScriptContainerElement)0x1;
        this_00 = this->owning_skeleton;
        this->Weapon_Freeze_Bool = true;
        iVar5 = USkinnedMeshComponent::GetBoneIndex
                          ((USkinnedMeshComponent *)this_00,this->weapon_grabbed_bone);
        pTVar7 = USkinnedMeshComponent::GetBoneTransform
                           ((USkinnedMeshComponent *)this_00,&local_78,iVar5);
        dVar2 = (pTVar7->Rotation).XY.m128d_f64[1];
        (this->Frozen_Hand_Transform).Rotation.XY.m128d_f64[0] = (pTVar7->Rotation).XY.m128d_f64[0];
        (this->Frozen_Hand_Transform).Rotation.XY.m128d_f64[1] = dVar2;
        dVar2 = (pTVar7->Rotation).ZW.m128d_f64[1];
        (this->Frozen_Hand_Transform).Rotation.ZW.m128d_f64[0] = (pTVar7->Rotation).ZW.m128d_f64[0];
        (this->Frozen_Hand_Transform).Rotation.ZW.m128d_f64[1] = dVar2;
        dVar2 = (pTVar7->Translation).XY.m128d_f64[1];
        (this->Frozen_Hand_Transform).Translation.XY.m128d_f64[0] =
             (pTVar7->Translation).XY.m128d_f64[0];
        (this->Frozen_Hand_Transform).Translation.XY.m128d_f64[1] = dVar2;
        dVar2 = (pTVar7->Translation).ZW.m128d_f64[1];
        (this->Frozen_Hand_Transform).Translation.ZW.m128d_f64[0] =
             (pTVar7->Translation).ZW.m128d_f64[0];
        (this->Frozen_Hand_Transform).Translation.ZW.m128d_f64[1] = dVar2;
        dVar2 = (pTVar7->Scale3D).XY.m128d_f64[1];
        (this->Frozen_Hand_Transform).Scale3D.XY.m128d_f64[0] = (pTVar7->Scale3D).XY.m128d_f64[0];
        (this->Frozen_Hand_Transform).Scale3D.XY.m128d_f64[1] = dVar2;
        dVar2 = (pTVar7->Scale3D).ZW.m128d_f64[1];
        (this->Frozen_Hand_Transform).Scale3D.ZW.m128d_f64[0] = (pTVar7->Scale3D).ZW.m128d_f64[0];
        (this->Frozen_Hand_Transform).Scale3D.ZW.m128d_f64[1] = dVar2;
      }
    }
  }
  return;
}

// GetLifetimeReplicatedProps @ 14d348640

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::GetLifetimeReplicatedProps
          (UDragonIKWeaponPhysicsComponent *this,
          TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  longlong *plVar2;
  UClass *pUVar3;
  FRepPropertyDescriptor FStack_38;
  FDoRepLifetimeParams FStack_28;
  
  plVar2 = *(longlong **)&this->field_0x10;
  if (plVar2 != (longlong *)0x0) {
    pUVar3 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      (**(code **)(*plVar2 + 0x408))(plVar2,param_1);
    }
  }
  FStack_28.bIsPushBased = true;
  FStack_28.Condition = COND_None;
  FStack_28.RepNotifyCondition = REPNOTIFY_OnChanged;
  FStack_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  FStack_38.PropertyName = L"bIsActive";
  FStack_38.RepIndex = 1;
  FStack_38.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&FStack_38,param_1,&FStack_28);
  FStack_38.RepIndex = 0;
  FStack_38.PropertyName = L"bReplicates";
  FStack_38.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&FStack_38,param_1,&FStack_28);
  return;
}

// Grab_Weapon @ 14d348ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Grab_Weapon
          (UDragonIKWeaponPhysicsComponent *this,FName param_1,bool param_2,bool param_3,
          FName param_4)

{
  UPrimitiveComponent *pUVar1;
  FName FVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int iVar17;
  TTransform<double> *this_00;
  TTransform<double> *pTVar18;
  uint uVar19;
  USkeletalMeshComponent *pUVar20;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_168 [32];
  TTransform<double> local_148;
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  this->active_weapon_component = this->weapon_input_component;
  if ((this->owning_skeleton != (USkeletalMeshComponent *)0x0) &&
     (this->weapon_input_component != (UPrimitiveComponent *)0x0)) {
    iVar17 = USkinnedMeshComponent::GetBoneIndex
                       ((USkinnedMeshComponent *)this->owning_skeleton,param_1);
    if (-1 < iVar17) {
      this->weapon_bone = param_4;
      this->weapon_grabbed_bone = param_1;
      UActorComponent::SetIsReplicated((UActorComponent *)this->active_weapon_component,true);
      pUVar1 = this->active_weapon_component;
      pTVar18 = &this->Saved_Relative_Hand_Transform;
      pUVar20 = this->owning_skeleton;
      FVar2 = this->weapon_grabbed_bone;
      dVar13 = *(double *)&pUVar1->field_0x1f8;
      (pTVar18->Rotation).XY.m128d_f64[0] = *(double *)&pUVar1->field_0x1f0;
      (this->Saved_Relative_Hand_Transform).Rotation.XY.m128d_f64[1] = dVar13;
      dVar13 = *(double *)&pUVar1->field_0x208;
      (this->Saved_Relative_Hand_Transform).Rotation.ZW.m128d_f64[0] =
           *(double *)&pUVar1->field_0x200;
      (this->Saved_Relative_Hand_Transform).Rotation.ZW.m128d_f64[1] = dVar13;
      dVar13 = *(double *)&pUVar1->field_0x218;
      (this->Saved_Relative_Hand_Transform).Translation.XY.m128d_f64[0] =
           *(double *)&pUVar1->field_0x210;
      (this->Saved_Relative_Hand_Transform).Translation.XY.m128d_f64[1] = dVar13;
      dVar13 = *(double *)&pUVar1->field_0x228;
      (this->Saved_Relative_Hand_Transform).Translation.ZW.m128d_f64[0] =
           *(double *)&pUVar1->field_0x220;
      (this->Saved_Relative_Hand_Transform).Translation.ZW.m128d_f64[1] = dVar13;
      uVar5 = *(undefined4 *)&pUVar1->field_0x234;
      uVar6 = *(undefined4 *)&pUVar1->field_0x238;
      uVar7 = *(undefined4 *)&pUVar1->field_0x23c;
      *(undefined4 *)(this->Saved_Relative_Hand_Transform).Scale3D.XY.m128d_f64 =
           *(undefined4 *)&pUVar1->field_0x230;
      *(undefined4 *)((longlong)(this->Saved_Relative_Hand_Transform).Scale3D.XY.m128d_f64 + 4) =
           uVar5;
      *(undefined4 *)((this->Saved_Relative_Hand_Transform).Scale3D.XY.m128d_f64 + 1) = uVar6;
      *(undefined4 *)((longlong)(this->Saved_Relative_Hand_Transform).Scale3D.XY.m128d_f64 + 0xc) =
           uVar7;
      uVar5 = *(undefined4 *)&pUVar1->field_0x244;
      uVar6 = *(undefined4 *)&pUVar1->field_0x248;
      uVar7 = *(undefined4 *)&pUVar1->field_0x24c;
      *(undefined4 *)(this->Saved_Relative_Hand_Transform).Scale3D.ZW.m128d_f64 =
           *(undefined4 *)&pUVar1->field_0x240;
      *(undefined4 *)((longlong)(this->Saved_Relative_Hand_Transform).Scale3D.ZW.m128d_f64 + 4) =
           uVar5;
      *(undefined4 *)((this->Saved_Relative_Hand_Transform).Scale3D.ZW.m128d_f64 + 1) = uVar6;
      *(undefined4 *)((longlong)(this->Saved_Relative_Hand_Transform).Scale3D.ZW.m128d_f64 + 0xc) =
           uVar7;
      this_00 = (TTransform<double> *)
                (**(code **)(pUVar20->_padding_ + 0x520))(pUVar20,&local_88,FVar2,0);
      auVar22._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            *(uint *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 4),
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                            *(uint *)(this_00->Scale3D).XY.m128d_f64);
      auVar22._8_4_ = _UNK_15061cc88 & *(uint *)((this_00->Scale3D).XY.m128d_f64 + 1);
      auVar22._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 0xc);
      lVar21 = -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                (double)CONCAT44(_UNK_15061cc8c &
                                 *(uint *)((longlong)(this_00->Scale3D).ZW.m128d_f64 + 0xc),
                                 _UNK_15061cc88 & *(uint *)((this_00->Scale3D).ZW.m128d_f64 + 1)));
      auVar4._8_4_ = (int)lVar21;
      auVar4._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                      (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                       *(uint *)((longlong)(this_00->Scale3D).ZW.m128d_f64 + 4),
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                       *(uint *)(this_00->Scale3D).ZW.m128d_f64));
      auVar4._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
      uVar19 = movmskpd((int)pUVar20,auVar4);
      lVar21 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar22._8_8_);
      auVar3._8_4_ = (int)lVar21;
      auVar3._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar22._0_8_);
      auVar3._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
      iVar17 = movmskpd((int)this_00,auVar3);
      if ((uVar19 & 0x3fffffff) == 0 && iVar17 == 0) {
        local_e8.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_e8.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_e8.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_e8.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_e8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
        local_e8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      }
      else {
        UE::Math::TTransform<double>::InverseFast(this_00,&local_e8);
      }
      local_148.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_148.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_148.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_148.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_148.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_148.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_148.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_148.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_148.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_148.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_148.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_148.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_148.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_148.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_148,pTVar18,&local_e8);
      this->perform_grab_weapon = true;
      this->Wep_Offset_Calculated = false;
      this->grab_counter = 0.0;
      this->perform_physics_simulation = param_2;
      this->perform_gravity_simulation = param_3;
      (pTVar18->Rotation).XY.m128d_f64[0] = local_148.Rotation.XY.m128d_f64[0];
      (this->Saved_Relative_Hand_Transform).Rotation.XY.m128d_f64[1] =
           local_148.Rotation.XY.m128d_f64[1];
      (this->Saved_Relative_Hand_Transform).Rotation.ZW.m128d_f64[0] =
           local_148.Rotation.ZW.m128d_f64[0];
      (this->Saved_Relative_Hand_Transform).Rotation.ZW.m128d_f64[1] =
           local_148.Rotation.ZW.m128d_f64[1];
      (this->Saved_Relative_Hand_Transform).Translation.XY.m128d_f64[0] =
           local_148.Translation.XY.m128d_f64[0];
      (this->Saved_Relative_Hand_Transform).Translation.XY.m128d_f64[1] =
           local_148.Translation.XY.m128d_f64[1];
      (this->Saved_Relative_Hand_Transform).Translation.ZW.m128d_f64[0] =
           local_148.Translation.ZW.m128d_f64[0];
      (this->Saved_Relative_Hand_Transform).Translation.ZW.m128d_f64[1] =
           local_148.Translation.ZW.m128d_f64[1];
      (this->Saved_Relative_Hand_Transform).Scale3D.XY.m128d_f64[0] =
           local_148.Scale3D.XY.m128d_f64[0];
      (this->Saved_Relative_Hand_Transform).Scale3D.XY.m128d_f64[1] =
           local_148.Scale3D.XY.m128d_f64[1];
      dVar13 = (this->dominant_hand_transform).Rotation.XY.m128d_f64[0];
      dVar14 = (this->dominant_hand_transform).Rotation.XY.m128d_f64[1];
      (this->Saved_Relative_Hand_Transform).Scale3D.ZW.m128d_f64[0] =
           local_148.Scale3D.ZW.m128d_f64[0];
      (this->Saved_Relative_Hand_Transform).Scale3D.ZW.m128d_f64[1] =
           local_148.Scale3D.ZW.m128d_f64[1];
      dVar15 = (this->dominant_hand_transform).Rotation.ZW.m128d_f64[0];
      dVar16 = (this->dominant_hand_transform).Rotation.ZW.m128d_f64[1];
      (this->last_saved_hand_transform).Rotation.XY.m128d_f64[0] = dVar13;
      (this->last_saved_hand_transform).Rotation.XY.m128d_f64[1] = dVar14;
      dVar13 = (this->dominant_hand_transform).Translation.XY.m128d_f64[0];
      dVar14 = (this->dominant_hand_transform).Translation.XY.m128d_f64[1];
      (this->last_saved_hand_transform).Rotation.ZW.m128d_f64[0] = dVar15;
      (this->last_saved_hand_transform).Rotation.ZW.m128d_f64[1] = dVar16;
      dVar15 = (this->dominant_hand_transform).Translation.ZW.m128d_f64[0];
      dVar16 = (this->dominant_hand_transform).Translation.ZW.m128d_f64[1];
      (this->last_saved_hand_transform).Translation.XY.m128d_f64[0] = dVar13;
      (this->last_saved_hand_transform).Translation.XY.m128d_f64[1] = dVar14;
      uVar5 = *(undefined4 *)(this->dominant_hand_transform).Scale3D.XY.m128d_f64;
      uVar6 = *(undefined4 *)((longlong)(this->dominant_hand_transform).Scale3D.XY.m128d_f64 + 4);
      uVar7 = *(undefined4 *)((this->dominant_hand_transform).Scale3D.XY.m128d_f64 + 1);
      uVar8 = *(undefined4 *)((longlong)(this->dominant_hand_transform).Scale3D.XY.m128d_f64 + 0xc);
      (this->last_saved_hand_transform).Translation.ZW.m128d_f64[0] = dVar15;
      (this->last_saved_hand_transform).Translation.ZW.m128d_f64[1] = dVar16;
      uVar9 = *(undefined4 *)(this->dominant_hand_transform).Scale3D.ZW.m128d_f64;
      uVar10 = *(undefined4 *)((longlong)(this->dominant_hand_transform).Scale3D.ZW.m128d_f64 + 4);
      uVar11 = *(undefined4 *)((this->dominant_hand_transform).Scale3D.ZW.m128d_f64 + 1);
      uVar12 = *(undefined4 *)((longlong)(this->dominant_hand_transform).Scale3D.ZW.m128d_f64 + 0xc)
      ;
      *(undefined4 *)(this->last_saved_hand_transform).Scale3D.XY.m128d_f64 = uVar5;
      *(undefined4 *)((longlong)(this->last_saved_hand_transform).Scale3D.XY.m128d_f64 + 4) = uVar6;
      *(undefined4 *)((this->last_saved_hand_transform).Scale3D.XY.m128d_f64 + 1) = uVar7;
      *(undefined4 *)((longlong)(this->last_saved_hand_transform).Scale3D.XY.m128d_f64 + 0xc) =
           uVar8;
      *(undefined4 *)(this->last_saved_hand_transform).Scale3D.ZW.m128d_f64 = uVar9;
      *(undefined4 *)((longlong)(this->last_saved_hand_transform).Scale3D.ZW.m128d_f64 + 4) = uVar10
      ;
      *(undefined4 *)((this->last_saved_hand_transform).Scale3D.ZW.m128d_f64 + 1) = uVar11;
      *(undefined4 *)((longlong)(this->last_saved_hand_transform).Scale3D.ZW.m128d_f64 + 0xc) =
           uVar12;
      if (param_2) {
        UActorComponent::SetTickGroup((UActorComponent *)this->owning_skeleton,TG_PostPhysics);
      }
      else {
        (**(code **)(*(longlong *)this->active_weapon_component + 0x518))
                  (this->active_weapon_component,&FDetachmentTransformRules::KeepWorldTransform);
      }
      (**(code **)(*(longlong *)this->active_weapon_component + 0x918))
                (this->active_weapon_component,param_3);
      pTVar18 = USceneComponent::GetRelativeTransform
                          ((USceneComponent *)this->active_weapon_component,&local_88);
      dVar13 = (pTVar18->Rotation).XY.m128d_f64[1];
      (this->last_saved_relative_wep_transform).Rotation.XY.m128d_f64[0] =
           (pTVar18->Rotation).XY.m128d_f64[0];
      (this->last_saved_relative_wep_transform).Rotation.XY.m128d_f64[1] = dVar13;
      dVar13 = (pTVar18->Rotation).ZW.m128d_f64[1];
      (this->last_saved_relative_wep_transform).Rotation.ZW.m128d_f64[0] =
           (pTVar18->Rotation).ZW.m128d_f64[0];
      (this->last_saved_relative_wep_transform).Rotation.ZW.m128d_f64[1] = dVar13;
      dVar13 = (pTVar18->Translation).XY.m128d_f64[1];
      (this->last_saved_relative_wep_transform).Translation.XY.m128d_f64[0] =
           (pTVar18->Translation).XY.m128d_f64[0];
      (this->last_saved_relative_wep_transform).Translation.XY.m128d_f64[1] = dVar13;
      dVar13 = (pTVar18->Translation).ZW.m128d_f64[1];
      (this->last_saved_relative_wep_transform).Translation.ZW.m128d_f64[0] =
           (pTVar18->Translation).ZW.m128d_f64[0];
      (this->last_saved_relative_wep_transform).Translation.ZW.m128d_f64[1] = dVar13;
      dVar13 = (pTVar18->Scale3D).XY.m128d_f64[1];
      (this->last_saved_relative_wep_transform).Scale3D.XY.m128d_f64[0] =
           (pTVar18->Scale3D).XY.m128d_f64[0];
      (this->last_saved_relative_wep_transform).Scale3D.XY.m128d_f64[1] = dVar13;
      dVar13 = (pTVar18->Scale3D).ZW.m128d_f64[1];
      (this->last_saved_relative_wep_transform).Scale3D.ZW.m128d_f64[0] =
           (pTVar18->Scale3D).ZW.m128d_f64[0];
      (this->last_saved_relative_wep_transform).Scale3D.ZW.m128d_f64[1] = dVar13;
    }
  }
  return;
}

// ModifyWeaponTransform @ 14d351930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::ModifyWeaponTransform(UDragonIKWeaponPhysicsComponent *this)

{
  UPrimitiveComponent *pUVar1;
  UPhysicsHandleComponent *this_00;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  TTransform<double> *pTVar7;
  UWorld *pUVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_1b8 [32];
  TRotator<double> local_178;
  TQuat<double> local_158;
  TVector<double>_u_0 local_138;
  TRotator<double> local_118;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  if (this->is_grabbing == false) {
    return;
  }
  if (this->weapon_physics_handle == (UPhysicsHandleComponent *)0x0) {
    return;
  }
  if (this->owning_skeleton == (USkeletalMeshComponent *)0x0) {
    return;
  }
  pUVar1 = this->active_weapon_component;
  if (pUVar1 != (UPrimitiveComponent *)0x0) {
    local_158.Z = *(double *)&pUVar1->field_0x220;
    dVar3 = (this->Weapon_Delta_Transform).Translation.XY.m128d_f64[0] -
            *(double *)&pUVar1->field_0x210;
    iVar6 = this->teleport_freeze_count;
    dVar12 = (this->Weapon_Delta_Transform).Translation.XY.m128d_f64[1] -
             *(double *)&pUVar1->field_0x218;
    dVar4 = (this->Weapon_Delta_Transform).Translation.ZW.m128d_f64[0] - local_158.Z;
    if (SQRT(dVar12 * dVar12 + dVar3 * dVar3 + dVar4 * dVar4) <= (double)this->Teleport_Distance) {
      if (9 < iVar6) {
        this->teleport_freeze_count = 0;
        goto LAB_14d351b3c;
      }
    }
    else {
      if (iVar6 == 0) {
        iVar6 = 1;
        this->teleport_freeze_count = 1;
      }
      if (9 < iVar6) goto LAB_14d351b3c;
    }
    if (0 < iVar6) {
      local_178.Pitch = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_178.Yaw = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_178.Roll = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      (**(code **)(*(longlong *)pUVar1 + 0x758))(pUVar1,&local_178,0,0);
      local_178.Pitch = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_178.Yaw = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_178.Roll = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      (**(code **)(*(longlong *)this->active_weapon_component + 0x768))
                (this->active_weapon_component,&local_178,0);
      pUVar1 = this->active_weapon_component;
      pTVar7 = (TTransform<double> *)
               (**(code **)(this->owning_skeleton->_padding_ + 0x520))
                         (this->owning_skeleton,&local_98,this->weapon_grabbed_bone);
      local_f8.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_f8.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_f8.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_f8.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_f8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_f8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_f8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_f8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_f8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_f8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_f8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_f8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_f8,&this->Saved_Relative_Hand_Transform,pTVar7);
      USceneComponent::SetWorldTransform
                ((USceneComponent *)pUVar1,&local_f8,false,(FHitResult *)0x0,TeleportPhysics);
      this->teleport_freeze_count = this->teleport_freeze_count + 1;
    }
  }
LAB_14d351b3c:
  pUVar1 = this->active_weapon_component;
  dVar3 = *(double *)&pUVar1->field_0x1f8;
  (this->Weapon_Delta_Transform).Rotation.XY.m128d_f64[0] = *(double *)&pUVar1->field_0x1f0;
  (this->Weapon_Delta_Transform).Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = *(double *)&pUVar1->field_0x208;
  (this->Weapon_Delta_Transform).Rotation.ZW.m128d_f64[0] = *(double *)&pUVar1->field_0x200;
  (this->Weapon_Delta_Transform).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = *(double *)&pUVar1->field_0x218;
  (this->Weapon_Delta_Transform).Translation.XY.m128d_f64[0] = *(double *)&pUVar1->field_0x210;
  (this->Weapon_Delta_Transform).Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = *(double *)&pUVar1->field_0x228;
  (this->Weapon_Delta_Transform).Translation.ZW.m128d_f64[0] = *(double *)&pUVar1->field_0x220;
  (this->Weapon_Delta_Transform).Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = *(double *)&pUVar1->field_0x238;
  (this->Weapon_Delta_Transform).Scale3D.XY.m128d_f64[0] = *(double *)&pUVar1->field_0x230;
  (this->Weapon_Delta_Transform).Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = *(double *)&pUVar1->field_0x248;
  (this->Weapon_Delta_Transform).Scale3D.ZW.m128d_f64[0] = *(double *)&pUVar1->field_0x240;
  (this->Weapon_Delta_Transform).Scale3D.ZW.m128d_f64[1] = dVar3;
  if (this->this_should_override_weapon_transform != false) {
    dVar3 = (this->overrided_weapon_transform).Rotation.XY.m128d_f64[1];
    dVar4 = (this->overrided_weapon_transform).Rotation.ZW.m128d_f64[0];
    dVar12 = (this->overrided_weapon_transform).Rotation.ZW.m128d_f64[1];
    (this->dominant_hand_transform).Rotation.XY.m128d_f64[0] =
         (this->overrided_weapon_transform).Rotation.XY.m128d_f64[0];
    (this->dominant_hand_transform).Rotation.XY.m128d_f64[1] = dVar3;
    dVar3 = (this->overrided_weapon_transform).Translation.XY.m128d_f64[0];
    dVar5 = (this->overrided_weapon_transform).Translation.XY.m128d_f64[1];
    (this->dominant_hand_transform).Rotation.ZW.m128d_f64[0] = dVar4;
    (this->dominant_hand_transform).Rotation.ZW.m128d_f64[1] = dVar12;
    dVar4 = (this->overrided_weapon_transform).Translation.ZW.m128d_f64[0];
    dVar12 = (this->overrided_weapon_transform).Translation.ZW.m128d_f64[1];
    (this->dominant_hand_transform).Translation.XY.m128d_f64[0] = dVar3;
    (this->dominant_hand_transform).Translation.XY.m128d_f64[1] = dVar5;
    dVar3 = (this->overrided_weapon_transform).Scale3D.XY.m128d_f64[0];
    dVar5 = (this->overrided_weapon_transform).Scale3D.XY.m128d_f64[1];
    (this->dominant_hand_transform).Translation.ZW.m128d_f64[0] = dVar4;
    (this->dominant_hand_transform).Translation.ZW.m128d_f64[1] = dVar12;
    dVar4 = (this->overrided_weapon_transform).Scale3D.ZW.m128d_f64[0];
    dVar12 = (this->overrided_weapon_transform).Scale3D.ZW.m128d_f64[1];
    (this->dominant_hand_transform).Scale3D.XY.m128d_f64[0] = dVar3;
    (this->dominant_hand_transform).Scale3D.XY.m128d_f64[1] = dVar5;
    (this->dominant_hand_transform).Scale3D.ZW.m128d_f64[0] = dVar4;
    (this->dominant_hand_transform).Scale3D.ZW.m128d_f64[1] = dVar12;
  }
  if (this->Weapon_Freeze_Bool == false) {
    pUVar8 = (UWorld *)this->owning_skeleton->_padding_;
    if (pUVar8 == (UWorld *)0x0) {
      pUVar8 = UActorComponent::GetWorld_Uncached((UActorComponent *)this->owning_skeleton);
    }
    fVar9 = pUVar8->DeltaTimeSeconds * this->unfreeze_speed + this->frozen_lerp_alpha;
    if (__real_3f800000 <= fVar9) {
      fVar9 = __real_3f800000;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    bVar2 = fVar9 == __real_3f800000;
    this->frozen_lerp_alpha = fVar9;
    if (bVar2) {
      local_158.X._0_4_ = *(undefined4 *)(this->dominant_hand_transform).Rotation.XY.m128d_f64;
      local_158.X._4_4_ =
           *(undefined4 *)((longlong)(this->dominant_hand_transform).Rotation.XY.m128d_f64 + 4);
      local_158.Y._0_4_ = *(undefined4 *)((this->dominant_hand_transform).Rotation.XY.m128d_f64 + 1)
      ;
      local_158.Y._4_4_ =
           *(undefined4 *)((longlong)(this->dominant_hand_transform).Rotation.XY.m128d_f64 + 0xc);
      uVar10 = *(undefined4 *)(this->dominant_hand_transform).Rotation.ZW.m128d_f64;
      uVar11 = *(undefined4 *)((longlong)(this->dominant_hand_transform).Rotation.ZW.m128d_f64 + 4);
      local_158.W._0_4_ = *(undefined4 *)((this->dominant_hand_transform).Rotation.ZW.m128d_f64 + 1)
      ;
      local_158.W._4_4_ =
           *(undefined4 *)((longlong)(this->dominant_hand_transform).Rotation.ZW.m128d_f64 + 0xc);
      local_138._0_4_ = *(undefined4 *)(this->dominant_hand_transform).Translation.XY.m128d_f64;
      local_138._4_4_ =
           *(undefined4 *)((longlong)(this->dominant_hand_transform).Translation.XY.m128d_f64 + 4);
      local_138._8_4_ =
           *(undefined4 *)((this->dominant_hand_transform).Translation.XY.m128d_f64 + 1);
      local_138._12_4_ =
           *(undefined4 *)((longlong)(this->dominant_hand_transform).Translation.XY.m128d_f64 + 0xc)
      ;
      uVar13 = *(undefined4 *)(this->dominant_hand_transform).Translation.ZW.m128d_f64;
      uVar14 = *(undefined4 *)
                ((longlong)(this->dominant_hand_transform).Translation.ZW.m128d_f64 + 4);
    }
    else {
      pTVar7 = UKismetMathLibrary::TLerp
                         (&local_98,&this->Frozen_Hand_Transform,&this->dominant_hand_transform,
                          fVar9,(TEnumAsByte<ELerpInterpolationMode::Type>)0x0);
      local_158.X._0_4_ = *(undefined4 *)(pTVar7->Rotation).XY.m128d_f64;
      local_158.X._4_4_ = *(undefined4 *)((longlong)(pTVar7->Rotation).XY.m128d_f64 + 4);
      local_158.Y._0_4_ = *(undefined4 *)((pTVar7->Rotation).XY.m128d_f64 + 1);
      local_158.Y._4_4_ = *(undefined4 *)((longlong)(pTVar7->Rotation).XY.m128d_f64 + 0xc);
      uVar10 = *(undefined4 *)(pTVar7->Rotation).ZW.m128d_f64;
      uVar11 = *(undefined4 *)((longlong)(pTVar7->Rotation).ZW.m128d_f64 + 4);
      local_158.W._0_4_ = *(undefined4 *)((pTVar7->Rotation).ZW.m128d_f64 + 1);
      local_158.W._4_4_ = *(undefined4 *)((longlong)(pTVar7->Rotation).ZW.m128d_f64 + 0xc);
      local_138._0_4_ = *(undefined4 *)(pTVar7->Translation).XY.m128d_f64;
      local_138._4_4_ = *(undefined4 *)((longlong)(pTVar7->Translation).XY.m128d_f64 + 4);
      local_138._8_4_ = *(undefined4 *)((pTVar7->Translation).XY.m128d_f64 + 1);
      local_138._12_4_ = *(undefined4 *)((longlong)(pTVar7->Translation).XY.m128d_f64 + 0xc);
      uVar13 = *(undefined4 *)(pTVar7->Translation).ZW.m128d_f64;
      uVar14 = *(undefined4 *)((longlong)(pTVar7->Translation).ZW.m128d_f64 + 4);
    }
  }
  else {
    local_158.X._0_4_ = *(undefined4 *)(this->Frozen_Hand_Transform).Rotation.XY.m128d_f64;
    local_158.X._4_4_ =
         *(undefined4 *)((longlong)(this->Frozen_Hand_Transform).Rotation.XY.m128d_f64 + 4);
    local_158.Y._0_4_ = *(undefined4 *)((this->Frozen_Hand_Transform).Rotation.XY.m128d_f64 + 1);
    local_158.Y._4_4_ =
         *(undefined4 *)((longlong)(this->Frozen_Hand_Transform).Rotation.XY.m128d_f64 + 0xc);
    this->frozen_lerp_alpha = 0.0;
    uVar10 = *(undefined4 *)(this->Frozen_Hand_Transform).Rotation.ZW.m128d_f64;
    uVar11 = *(undefined4 *)((longlong)(this->Frozen_Hand_Transform).Rotation.ZW.m128d_f64 + 4);
    local_158.W._0_4_ = *(undefined4 *)((this->Frozen_Hand_Transform).Rotation.ZW.m128d_f64 + 1);
    local_158.W._4_4_ =
         *(undefined4 *)((longlong)(this->Frozen_Hand_Transform).Rotation.ZW.m128d_f64 + 0xc);
    local_138._0_4_ = *(undefined4 *)(this->Frozen_Hand_Transform).Translation.XY.m128d_f64;
    local_138._4_4_ =
         *(undefined4 *)((longlong)(this->Frozen_Hand_Transform).Translation.XY.m128d_f64 + 4);
    local_138._8_4_ = *(undefined4 *)((this->Frozen_Hand_Transform).Translation.XY.m128d_f64 + 1);
    local_138._12_4_ =
         *(undefined4 *)((longlong)(this->Frozen_Hand_Transform).Translation.XY.m128d_f64 + 0xc);
    uVar13 = *(undefined4 *)(this->Frozen_Hand_Transform).Translation.ZW.m128d_f64;
    uVar14 = *(undefined4 *)((longlong)(this->Frozen_Hand_Transform).Translation.ZW.m128d_f64 + 4);
  }
  if (this->perform_physics_simulation == true) {
    this_00 = this->weapon_physics_handle;
    local_158.Z = (double)CONCAT44(uVar11,uVar10);
    UE::Math::TQuat<double>::Rotator(&local_158,&local_178);
    local_158.Z = (double)CONCAT44(uVar14,uVar13);
    local_118.Pitch = local_178.Pitch;
    local_118.Yaw = local_178.Yaw;
    local_118.Roll = local_178.Roll;
    local_138._s_0.Z = local_158.Z;
    UPhysicsHandleComponent::SetTargetLocationAndRotation
              (this_00,(TVector<double> *)&local_138._s_0,&local_118);
  }
  return;
}

// Multicast_Attach_Hand_Only_Implementation @ 14d352890

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_Attach_Hand_Only_Implementation
          (UDragonIKWeaponPhysicsComponent *this,FName param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FString *pFVar5;
  FName FStackX_10;
  FString FStack_28;
  
  uVar4 = 0xffffffff;
  if ((0 < (this->handbone_array_boneName).ArrayNum) &&
     (0 < (this->handbone_array_boneIndex).ArrayNum)) {
    FStackX_10 = param_1;
    pFVar5 = ::FName::ToString(&FStackX_10,&FStack_28);
    uVar3 = TArray<FString,TSizedDefaultAllocator<32>_>::Find(&this->handbone_array_boneName,pFVar5)
    ;
    if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
    }
    if (-1 < (int)uVar3) {
      uVar4 = 0;
      if ((int)uVar3 < (this->handbone_array_boneIndex).ArrayNum) {
        uVar4 = ~uVar3 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = *(uint *)((this->handbone_array_boneIndex).AllocatorInstance.Data +
                       (longlong)(int)uVar3 * 4);
    }
    if (-1 < (int)uVar4) {
      if ((int)uVar4 < (this->arm_grabbing_status).ArrayNum) {
        if (((int)uVar4 < 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (this->arm_grabbing_status).AllocatorInstance.Data[(int)uVar4] =
             (FScriptContainerElement)0x1;
      }
      uVar3 = 0;
      if ((int)uVar4 < (this->arm_reset_queue_index).ArrayNum) {
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
      (this->arm_reset_queue_index).AllocatorInstance.Data[(int)uVar4] =
           (FScriptContainerElement)0x1;
    }
  }
  return;
}

// Multicast_Attach_Hand_Only_Validate @ 14d3528a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_Attach_Hand_Only_Validate
          (UDragonIKWeaponPhysicsComponent *this,FName param_1,bool param_2)

{
  return true;
}

// Multicast_Destroy_Weapon_Implementation @ 14d352bb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_Destroy_Weapon_Implementation
          (UDragonIKWeaponPhysicsComponent *this,AActor *param_1)

{
  FLinearColor FVar1;
  FText *pFVar2;
  UWorld *pUVar3;
  FLinearColor_u_0 local_38;
  FText local_28 [2];
  
  FVar1.field0_0x0 = FLinearColor::Yellow.field0_0x0;
  pFVar2 = FText::AsCultureInvariant(local_28," MULTI TEST!");
  pUVar3 = AActor::GetWorld((AActor *)this->owning_skeleton->_padding_);
  local_38 = FVar1.field0_0x0;
  UKismetSystemLibrary::PrintText
            ((UObject *)pUVar3,pFVar2,true,false,(FLinearColor *)&local_38._s_0,__real_3dcccccd,
             (FName)0x0);
  return;
}

// Multicast_Destroy_Weapon_Validate @ 14d352c50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_Destroy_Weapon_Validate
          (UDragonIKWeaponPhysicsComponent *this,AActor *param_1)

{
  return true;
}

// Multicast_DisableWeaponsArms_Implementation @ 14d352c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_DisableWeaponsArms_Implementation
          (UDragonIKWeaponPhysicsComponent *this,bool param_1)

{
  int iVar1;
  UPrimitiveComponent *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FName *pFVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  FName aFStack_88 [2];
  TTransform<double> TStack_78;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar2 = this->active_weapon_component;
  if (pUVar2 != (UPrimitiveComponent *)0x0) {
    (**(code **)(*(longlong *)pUVar2 + 0x6f0))(pUVar2,0);
    (**(code **)(*(longlong *)this->active_weapon_component + 0x508))
              (this->active_weapon_component,this->owning_skeleton,
               &FAttachmentTransformRules::KeepWorldTransform);
    if (param_1) {
      pUVar2 = this->active_weapon_component;
      TStack_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      TStack_78.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      TStack_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      TStack_78.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      TStack_78.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      TStack_78.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      TStack_78.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      TStack_78.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      TStack_78.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      TStack_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      TStack_78.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      TStack_78.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      TStack_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      TStack_78.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&TStack_78,&this->Saved_Relative_Hand_Transform,&this->dominant_hand_transform);
      USceneComponent::SetWorldTransform
                ((USceneComponent *)pUVar2,&TStack_78,false,(FHitResult *)0x0,None);
    }
    uVar9 = 0;
    if (0 < (this->handbone_array_boneName).ArrayNum) {
      lVar10 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (this->handbone_array_boneName).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->handbone_array_boneName).AllocatorInstance.Data;
        iVar1 = *(int *)(pFVar3 + lVar10 + 8);
        iVar8 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar8 = 0;
        }
        pFVar7 = ::FName::FName(aFStack_88,iVar8,*(wchar_t **)(pFVar3 + lVar10),FNAME_Add);
        Release_Hand_Only(this,*pFVar7);
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x10;
      } while ((int)uVar9 < (this->handbone_array_boneName).ArrayNum);
    }
  }
  return;
}

// Multicast_DisableWeaponsArms_Validate @ 14d352c70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_DisableWeaponsArms_Validate
          (UDragonIKWeaponPhysicsComponent *this,bool param_1)

{
  return true;
}

// Multicast_EnableWeaponsArms_Implementation @ 14d352cc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_EnableWeaponsArms_Implementation
          (UDragonIKWeaponPhysicsComponent *this)

{
  int iVar1;
  UPrimitiveComponent *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FName *pFVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  FName local_res8;
  
  pUVar2 = this->active_weapon_component;
  if (pUVar2 != (UPrimitiveComponent *)0x0) {
    (**(code **)(*(longlong *)pUVar2 + 0x6f0))(pUVar2,1);
    (**(code **)(*(longlong *)this->active_weapon_component + 0x518))
              (this->active_weapon_component,&FDetachmentTransformRules::KeepWorldTransform);
    uVar9 = 0;
    if (0 < (this->handbone_array_boneName).ArrayNum) {
      lVar10 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (this->handbone_array_boneName).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->handbone_array_boneName).AllocatorInstance.Data;
        iVar1 = *(int *)(pFVar3 + lVar10 + 8);
        iVar8 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar8 = 0;
        }
        pFVar7 = ::FName::FName(&local_res8,iVar8,*(wchar_t **)(pFVar3 + lVar10),FNAME_Add);
        Attach_Hand_Only(this,*pFVar7,false);
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x10;
      } while ((int)uVar9 < (this->handbone_array_boneName).ArrayNum);
    }
  }
  return;
}

// Multicast_EnableWeaponsArms_Validate @ 14d352dd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_EnableWeaponsArms_Validate
          (UDragonIKWeaponPhysicsComponent *this)

{
  return true;
}

// Multicast_FirstTimeInitialization_Implementation @ 14d352e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d345968) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_FirstTimeInitialization_Implementation
          (UDragonIKWeaponPhysicsComponent *this,USkeletalMeshComponent *param_1)

{
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar6;
  int *piVar7;
  FName FVar8;
  UObject *pUVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  bool bVar12;
  FName *pFVar13;
  UPhysicsHandleComponent *pUVar14;
  UClass *pUVar15;
  UPhysicsConstraintComponent *pUVar16;
  UWorld *pUVar17;
  longlong *plVar18;
  int iVar19;
  longlong lVar20;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar21;
  undefined1 auStackY_178 [32];
  FScriptContainerElement FStack_128;
  FScriptContainerElement FStack_127;
  FScriptContainerElement FStack_126;
  FScriptContainerElement FStack_125;
  FScriptContainerElement aFStack_124 [4];
  undefined4 auStack_120 [2];
  FString FStack_118;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTStack_108;
  longlong lStack_100;
  FString FStack_f8;
  FString FStack_e8;
  FName FStack_d0;
  FName aFStack_c8 [2];
  undefined1 auStack_b8 [128];
  ulonglong uStack_38;
  
  if (param_1 != (USkeletalMeshComponent *)0x0) {
    uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
    this->owning_skeleton = param_1;
    ::FString::FString(&FStack_e8,"Weapon Physics Handle");
    ::FString::AppendInt(&FStack_e8,this->physanim_tag_index);
    ::FString::FString(&FStack_f8,"Weapon Physics Constraint");
    ::FString::AppendInt(&FStack_f8,this->physanim_tag_index);
    iVar19 = FStack_e8.Data.ArrayNum + -1;
    if (FStack_e8.Data.ArrayNum == 0) {
      iVar19 = 0;
    }
    pFVar13 = ::FName::FName(&FStack_d0,iVar19,(wchar_t *)FStack_e8.Data.AllocatorInstance.Data,
                             FNAME_Add);
    pUVar14 = NewObject<UPhysicsHandleComponent>
                        ((UObject *)this->owning_skeleton->_padding_,*pFVar13,RF_NoFlags,
                         (UObject *)0x0,false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    this->weapon_physics_handle = pUVar14;
    iVar19 = FStack_f8.Data.ArrayNum + -1;
    if (FStack_f8.Data.ArrayNum == 0) {
      iVar19 = 0;
    }
    pFVar13 = ::FName::FName(aFStack_c8,iVar19,(wchar_t *)FStack_f8.Data.AllocatorInstance.Data,
                             FNAME_Add);
    FVar8 = *pFVar13;
    pUVar9 = (UObject *)this->owning_skeleton->_padding_;
    if (FVar8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                (pUVar9,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar15 = Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)auStack_b8,pUVar15);
    auStack_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    auStack_b8._56_8_ = (UPackage *)0x0;
    auStack_b8._24_4_ = RF_NoFlags;
    auStack_b8._40_8_ = (UObject *)0x0;
    auStack_b8[0x20] = false;
    auStack_b8._8_8_ = pUVar9;
    auStack_b8._16_8_ = FVar8;
    pUVar16 = (UPhysicsConstraintComponent *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_b8);
    if (auStack_b8._64_8_ != 0) {
      plVar18 = (longlong *)(auStack_b8 + 0x50);
      if ((longlong *)auStack_b8._104_8_ != (longlong *)0x0) {
        plVar18 = (longlong *)auStack_b8._104_8_;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    this->weapon_physics_constraint = pUVar16;
    pUVar14 = this->weapon_physics_handle;
    if ((pUVar14->_padding_ & 1) == 0) {
      pUVar17 = AActor::GetWorld((AActor *)this->owning_skeleton->_padding_);
      UActorComponent::RegisterComponentWithWorld
                ((UActorComponent *)pUVar14,pUVar17,(FRegisterComponentContext *)0x0);
      UActorComponent::RegisterComponent((UActorComponent *)this->weapon_physics_handle);
    }
    pUVar16 = this->weapon_physics_constraint;
    if ((pUVar16->_padding_ & 1) == 0) {
      pUVar17 = AActor::GetWorld((AActor *)this->owning_skeleton->_padding_);
      UActorComponent::RegisterComponentWithWorld
                ((UActorComponent *)pUVar16,pUVar17,(FRegisterComponentContext *)0x0);
      UActorComponent::RegisterComponent((UActorComponent *)this->weapon_physics_constraint);
    }
    UActorComponent::SetIsReplicated((UActorComponent *)this->weapon_physics_handle,true);
    UActorComponent::SetIsReplicated((UActorComponent *)this->weapon_physics_constraint,true);
    this->weapon_physics_handle->LinearDamping = (float)this->Linear_Damp;
    this->weapon_physics_handle->AngularDamping = (float)this->Angular_Damp;
    this->weapon_physics_handle->LinearStiffness = (float)this->Linear_Strength;
    this->weapon_physics_handle->AngularStiffness = (float)this->Angular_Strength;
    this->weapon_physics_handle->InterpolationSpeed = (float)(this->Interpolation_Speed * 10);
    (**(code **)(this->weapon_physics_handle->_padding_ + 0x2b8))(this->weapon_physics_handle,0);
    (**(code **)(this->weapon_physics_constraint->_padding_ + 0x2b8))
              (this->weapon_physics_constraint,0);
    pTVar1 = &this->arm_grabbing_status;
    piVar7 = &(this->arm_grabbing_status).ArrayMax;
    (this->arm_grabbing_status).ArrayNum = 0;
    if (*piVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&pTVar1->AllocatorInstance,0,piVar7);
    }
    pTVar2 = &this->arm_reset_queue_index;
    piVar7 = &(this->arm_reset_queue_index).ArrayMax;
    (this->arm_reset_queue_index).ArrayNum = 0;
    if (*piVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&pTVar2->AllocatorInstance,0,piVar7);
    }
    pTVar3 = &this->Frozen_Elbow_Component_Status;
    piVar7 = &(this->Frozen_Elbow_Component_Status).ArrayMax;
    (this->Frozen_Elbow_Component_Status).ArrayNum = 0;
    if (*piVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&pTVar3->AllocatorInstance,0,piVar7);
    }
    pTVar4 = &this->handbone_array_boneName;
    DestructItems<FString,int>
              ((FString *)(pTVar4->AllocatorInstance).Data,(this->handbone_array_boneName).ArrayNum)
    ;
    piVar7 = &(this->handbone_array_boneName).ArrayMax;
    (this->handbone_array_boneName).ArrayNum = 0;
    if (*piVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar4->AllocatorInstance,0,piVar7);
    }
    pTVar5 = &this->handbone_array_boneIndex;
    piVar7 = &(this->handbone_array_boneIndex).ArrayMax;
    (this->handbone_array_boneIndex).ArrayNum = 0;
    if (*piVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar5->AllocatorInstance,0,piVar7);
    }
    pTStack_108 = &this->arm_override_transform;
    lStack_100 = 10;
    pTVar6 = &this->should_override_hand_location;
    pTVar21 = &this->should_override_hand_rotation;
    do {
      pFVar10 = (pTVar1->AllocatorInstance).Data;
      FStack_128 = (FScriptContainerElement)0x1;
      if (((pFVar10 <= &FStack_128) &&
          (&FStack_128 < pFVar10 + (this->arm_grabbing_status).ArrayMax)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar19 = (this->arm_grabbing_status).ArrayNum;
      if (iVar19 == (this->arm_grabbing_status).ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&pTVar1->AllocatorInstance,&(this->arm_grabbing_status).ArrayMax);
      }
      (this->arm_grabbing_status).ArrayNum = iVar19 + 1;
      FStack_127 = (FScriptContainerElement)0x0;
      (pTVar1->AllocatorInstance).Data[iVar19] = FStack_128;
      pFVar10 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar10 <= &FStack_127) &&
          (&FStack_127 < pFVar10 + (this->arm_reset_queue_index).ArrayMax)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar19 = (this->arm_reset_queue_index).ArrayNum;
      if (iVar19 == (this->arm_reset_queue_index).ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&pTVar2->AllocatorInstance,&(this->arm_reset_queue_index).ArrayMax
                           );
      }
      (this->arm_reset_queue_index).ArrayNum = iVar19 + 1;
      (pTVar2->AllocatorInstance).Data[iVar19] = FStack_127;
      ::FString::FString(&FStack_118,"");
      pFVar10 = (pTVar4->AllocatorInstance).Data;
      if (((pFVar10 <= (FScriptContainerElement *)&FStack_118) &&
          ((FScriptContainerElement *)&FStack_118 <
           pFVar10 + (longlong)(this->handbone_array_boneName).ArrayMax * 0x10)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar19 = (this->handbone_array_boneName).ArrayNum;
      if (iVar19 == (this->handbone_array_boneName).ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar4->AllocatorInstance,
                            &(this->handbone_array_boneName).ArrayMax);
      }
      lVar20 = (longlong)iVar19;
      (this->handbone_array_boneName).ArrayNum = iVar19 + 1;
      pFVar10 = (pTVar4->AllocatorInstance).Data;
      *(undefined8 *)(pFVar10 + lVar20 * 0x10) = 0;
      *(FScriptContainerElement **)(pFVar10 + lVar20 * 0x10) =
           FStack_118.Data.AllocatorInstance.Data;
      *(int *)(pFVar10 + lVar20 * 0x10 + 8) = FStack_118.Data.ArrayNum;
      *(int *)(pFVar10 + lVar20 * 0x10 + 0xc) = FStack_118.Data.ArrayMax;
      FStack_118.Data.ArrayNum = 0;
      FStack_118.Data.ArrayMax = 0;
      FStack_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar10 = (pTVar5->AllocatorInstance).Data;
      auStack_120[0] = 0;
      if (((pFVar10 <= (FScriptContainerElement *)auStack_120) &&
          ((FScriptContainerElement *)auStack_120 <
           pFVar10 + (longlong)(this->handbone_array_boneIndex).ArrayMax * 4)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar19 = (this->handbone_array_boneIndex).ArrayNum;
      if (iVar19 == (this->handbone_array_boneIndex).ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar5->AllocatorInstance,
                            &(this->handbone_array_boneIndex).ArrayMax);
      }
      (this->handbone_array_boneIndex).ArrayNum = iVar19 + 1;
      FStack_126 = (FScriptContainerElement)0x0;
      *(undefined4 *)((pTVar5->AllocatorInstance).Data + (longlong)iVar19 * 4) = auStack_120[0];
      pFVar10 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar10 <= &FStack_126) &&
          (&FStack_126 < pFVar10 + (this->Frozen_Elbow_Component_Status).ArrayMax)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar19 = (this->Frozen_Elbow_Component_Status).ArrayNum;
      if (iVar19 == (this->Frozen_Elbow_Component_Status).ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&pTVar3->AllocatorInstance,
                            &(this->Frozen_Elbow_Component_Status).ArrayMax);
      }
      (this->Frozen_Elbow_Component_Status).ArrayNum = iVar19 + 1;
      FStack_125 = (FScriptContainerElement)0x0;
      (pTVar3->AllocatorInstance).Data[iVar19] = FStack_126;
      pFVar10 = (pTVar6->AllocatorInstance).Data;
      if (((pFVar10 <= &FStack_125) &&
          (&FStack_125 < pFVar10 + (this->should_override_hand_location).ArrayMax)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar19 = (this->should_override_hand_location).ArrayNum;
      if (iVar19 == (this->should_override_hand_location).ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&pTVar6->AllocatorInstance,
                            &(this->should_override_hand_location).ArrayMax);
      }
      (this->should_override_hand_location).ArrayNum = iVar19 + 1;
      aFStack_124[0] = (FScriptContainerElement)0x0;
      (pTVar6->AllocatorInstance).Data[iVar19] = FStack_125;
      pFVar10 = (pTVar21->AllocatorInstance).Data;
      if (((pFVar10 <= aFStack_124) &&
          (aFStack_124 < pFVar10 + (this->should_override_hand_rotation).ArrayMax)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar19 = (this->should_override_hand_rotation).ArrayNum;
      if (iVar19 == (this->should_override_hand_rotation).ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&pTVar21->AllocatorInstance,
                            &(this->should_override_hand_rotation).ArrayMax);
      }
      (this->should_override_hand_rotation).ArrayNum = iVar19 + 1;
      (pTVar21->AllocatorInstance).Data[iVar19] = aFStack_124[0];
      pFVar10 = (pTStack_108->AllocatorInstance).Data;
      if (((pFVar10 < (FScriptContainerElement *)0x154eba441) &&
          (&UE::Math::TTransform<double>::Identity <
           (TTransform<double> *)(pFVar10 + (longlong)pTStack_108->ArrayMax * 0x60))) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar19 = pTStack_108->ArrayNum;
      if (iVar19 == pTStack_108->ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1060,&pTStack_108->AllocatorInstance,&pTStack_108->ArrayMax);
      }
      pTStack_108->ArrayNum = iVar19 + 1;
      pFVar10 = (pTStack_108->AllocatorInstance).Data;
      lVar20 = (longlong)iVar19 * 0x60;
      lStack_100 = lStack_100 + -1;
      *(double (*) [2])(pFVar10 + lVar20) =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      *(double (*) [2])(pFVar10 + lVar20 + 0x10) =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      *(double (*) [2])(pFVar10 + lVar20 + 0x20) =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      *(double (*) [2])(pFVar10 + lVar20 + 0x30) =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      *(double (*) [2])(pFVar10 + lVar20 + 0x40) =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      *(double (*) [2])(pFVar10 + lVar20 + 0x50) =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    } while (lStack_100 != 0);
    if (FStack_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_f8.Data.AllocatorInstance.Data);
    }
    if (FStack_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_e8.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Multicast_FirstTimeInitialization_Validate @ 14d352e60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_FirstTimeInitialization_Validate
          (UDragonIKWeaponPhysicsComponent *this,USkeletalMeshComponent *param_1)

{
  return true;
}

// Multicast_Freeze_Elbows_Function_Implementation @ 14d352e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_Freeze_Elbows_Function_Implementation
          (UDragonIKWeaponPhysicsComponent *this,FName param_1)

{
  USkeletalMeshComponent *this_00;
  code *pcVar1;
  double dVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FString *pFVar6;
  TTransform<double> *pTVar7;
  uint uVar8;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  FName local_98;
  FString local_90;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((0 < (this->handbone_array_boneName).ArrayNum) &&
     (0 < (this->handbone_array_boneIndex).ArrayNum)) {
    local_98 = param_1;
    pFVar6 = ::FName::ToString(&local_98,&local_90);
    uVar4 = TArray<FString,TSizedDefaultAllocator<32>_>::Find(&this->handbone_array_boneName,pFVar6)
    ;
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (-1 < (int)uVar4) {
      iVar5 = (this->handbone_array_boneIndex).ArrayNum;
      uVar8 = 0;
      if ((int)uVar4 < iVar5) {
        uVar8 = ~uVar4 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (local_a8 = (longlong)(int)uVar4, local_a0 = (longlong)iVar5,
         bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = *(uint *)((this->handbone_array_boneIndex).AllocatorInstance.Data +
                       (longlong)(int)uVar4 * 4);
      if ((-1 < (int)uVar4) && ((int)uVar4 < (this->arm_grabbing_status).ArrayNum)) {
        iVar5 = (this->Frozen_Elbow_Component_Status).ArrayNum;
        uVar8 = 0;
        if ((int)uVar4 < iVar5) {
          uVar8 = ~uVar4 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (local_a8 = (longlong)(int)uVar4, local_a0 = (longlong)iVar5,
           bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (this->Frozen_Elbow_Component_Status).AllocatorInstance.Data[(int)uVar4] =
             (FScriptContainerElement)0x1;
        this_00 = this->owning_skeleton;
        this->Weapon_Freeze_Bool = true;
        iVar5 = USkinnedMeshComponent::GetBoneIndex
                          ((USkinnedMeshComponent *)this_00,this->weapon_grabbed_bone);
        pTVar7 = USkinnedMeshComponent::GetBoneTransform
                           ((USkinnedMeshComponent *)this_00,&local_78,iVar5);
        dVar2 = (pTVar7->Rotation).XY.m128d_f64[1];
        (this->Frozen_Hand_Transform).Rotation.XY.m128d_f64[0] = (pTVar7->Rotation).XY.m128d_f64[0];
        (this->Frozen_Hand_Transform).Rotation.XY.m128d_f64[1] = dVar2;
        dVar2 = (pTVar7->Rotation).ZW.m128d_f64[1];
        (this->Frozen_Hand_Transform).Rotation.ZW.m128d_f64[0] = (pTVar7->Rotation).ZW.m128d_f64[0];
        (this->Frozen_Hand_Transform).Rotation.ZW.m128d_f64[1] = dVar2;
        dVar2 = (pTVar7->Translation).XY.m128d_f64[1];
        (this->Frozen_Hand_Transform).Translation.XY.m128d_f64[0] =
             (pTVar7->Translation).XY.m128d_f64[0];
        (this->Frozen_Hand_Transform).Translation.XY.m128d_f64[1] = dVar2;
        dVar2 = (pTVar7->Translation).ZW.m128d_f64[1];
        (this->Frozen_Hand_Transform).Translation.ZW.m128d_f64[0] =
             (pTVar7->Translation).ZW.m128d_f64[0];
        (this->Frozen_Hand_Transform).Translation.ZW.m128d_f64[1] = dVar2;
        dVar2 = (pTVar7->Scale3D).XY.m128d_f64[1];
        (this->Frozen_Hand_Transform).Scale3D.XY.m128d_f64[0] = (pTVar7->Scale3D).XY.m128d_f64[0];
        (this->Frozen_Hand_Transform).Scale3D.XY.m128d_f64[1] = dVar2;
        dVar2 = (pTVar7->Scale3D).ZW.m128d_f64[1];
        (this->Frozen_Hand_Transform).Scale3D.ZW.m128d_f64[0] = (pTVar7->Scale3D).ZW.m128d_f64[0];
        (this->Frozen_Hand_Transform).Scale3D.ZW.m128d_f64[1] = dVar2;
      }
    }
  }
  return;
}

// Multicast_Freeze_Elbows_Function_Validate @ 14d353050

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_Freeze_Elbows_Function_Validate
          (UDragonIKWeaponPhysicsComponent *this,FName param_1)

{
  return true;
}

// Multicast_Grab_Weapon_Implementation @ 14d353060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_Grab_Weapon_Implementation
          (UDragonIKWeaponPhysicsComponent *this,FName param_1,bool param_2,bool param_3,
          FName param_4)

{
  UPrimitiveComponent *pUVar1;
  FName FVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int iVar17;
  TTransform<double> *this_00;
  TTransform<double> *pTVar18;
  uint uVar19;
  USkeletalMeshComponent *pUVar20;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_168 [32];
  TTransform<double> TStack_148;
  TTransform<double> TStack_e8;
  TTransform<double> TStack_88;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  this->active_weapon_component = this->weapon_input_component;
  if ((this->owning_skeleton != (USkeletalMeshComponent *)0x0) &&
     (this->weapon_input_component != (UPrimitiveComponent *)0x0)) {
    iVar17 = USkinnedMeshComponent::GetBoneIndex
                       ((USkinnedMeshComponent *)this->owning_skeleton,param_1);
    if (-1 < iVar17) {
      this->weapon_bone = param_4;
      this->weapon_grabbed_bone = param_1;
      UActorComponent::SetIsReplicated((UActorComponent *)this->active_weapon_component,true);
      pUVar1 = this->active_weapon_component;
      pTVar18 = &this->Saved_Relative_Hand_Transform;
      pUVar20 = this->owning_skeleton;
      FVar2 = this->weapon_grabbed_bone;
      dVar13 = *(double *)&pUVar1->field_0x1f8;
      (pTVar18->Rotation).XY.m128d_f64[0] = *(double *)&pUVar1->field_0x1f0;
      (this->Saved_Relative_Hand_Transform).Rotation.XY.m128d_f64[1] = dVar13;
      dVar13 = *(double *)&pUVar1->field_0x208;
      (this->Saved_Relative_Hand_Transform).Rotation.ZW.m128d_f64[0] =
           *(double *)&pUVar1->field_0x200;
      (this->Saved_Relative_Hand_Transform).Rotation.ZW.m128d_f64[1] = dVar13;
      dVar13 = *(double *)&pUVar1->field_0x218;
      (this->Saved_Relative_Hand_Transform).Translation.XY.m128d_f64[0] =
           *(double *)&pUVar1->field_0x210;
      (this->Saved_Relative_Hand_Transform).Translation.XY.m128d_f64[1] = dVar13;
      dVar13 = *(double *)&pUVar1->field_0x228;
      (this->Saved_Relative_Hand_Transform).Translation.ZW.m128d_f64[0] =
           *(double *)&pUVar1->field_0x220;
      (this->Saved_Relative_Hand_Transform).Translation.ZW.m128d_f64[1] = dVar13;
      uVar5 = *(undefined4 *)&pUVar1->field_0x234;
      uVar6 = *(undefined4 *)&pUVar1->field_0x238;
      uVar7 = *(undefined4 *)&pUVar1->field_0x23c;
      *(undefined4 *)(this->Saved_Relative_Hand_Transform).Scale3D.XY.m128d_f64 =
           *(undefined4 *)&pUVar1->field_0x230;
      *(undefined4 *)((longlong)(this->Saved_Relative_Hand_Transform).Scale3D.XY.m128d_f64 + 4) =
           uVar5;
      *(undefined4 *)((this->Saved_Relative_Hand_Transform).Scale3D.XY.m128d_f64 + 1) = uVar6;
      *(undefined4 *)((longlong)(this->Saved_Relative_Hand_Transform).Scale3D.XY.m128d_f64 + 0xc) =
           uVar7;
      uVar5 = *(undefined4 *)&pUVar1->field_0x244;
      uVar6 = *(undefined4 *)&pUVar1->field_0x248;
      uVar7 = *(undefined4 *)&pUVar1->field_0x24c;
      *(undefined4 *)(this->Saved_Relative_Hand_Transform).Scale3D.ZW.m128d_f64 =
           *(undefined4 *)&pUVar1->field_0x240;
      *(undefined4 *)((longlong)(this->Saved_Relative_Hand_Transform).Scale3D.ZW.m128d_f64 + 4) =
           uVar5;
      *(undefined4 *)((this->Saved_Relative_Hand_Transform).Scale3D.ZW.m128d_f64 + 1) = uVar6;
      *(undefined4 *)((longlong)(this->Saved_Relative_Hand_Transform).Scale3D.ZW.m128d_f64 + 0xc) =
           uVar7;
      this_00 = (TTransform<double> *)
                (**(code **)(pUVar20->_padding_ + 0x520))(pUVar20,&TStack_88,FVar2,0);
      auVar22._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            *(uint *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 4),
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                            *(uint *)(this_00->Scale3D).XY.m128d_f64);
      auVar22._8_4_ = _UNK_15061cc88 & *(uint *)((this_00->Scale3D).XY.m128d_f64 + 1);
      auVar22._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 0xc);
      lVar21 = -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                (double)CONCAT44(_UNK_15061cc8c &
                                 *(uint *)((longlong)(this_00->Scale3D).ZW.m128d_f64 + 0xc),
                                 _UNK_15061cc88 & *(uint *)((this_00->Scale3D).ZW.m128d_f64 + 1)));
      auVar4._8_4_ = (int)lVar21;
      auVar4._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                      (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                       *(uint *)((longlong)(this_00->Scale3D).ZW.m128d_f64 + 4),
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                       *(uint *)(this_00->Scale3D).ZW.m128d_f64));
      auVar4._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
      uVar19 = movmskpd((int)pUVar20,auVar4);
      lVar21 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar22._8_8_);
      auVar3._8_4_ = (int)lVar21;
      auVar3._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar22._0_8_);
      auVar3._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
      iVar17 = movmskpd((int)this_00,auVar3);
      if ((uVar19 & 0x3fffffff) == 0 && iVar17 == 0) {
        TStack_e8.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        TStack_e8.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        TStack_e8.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        TStack_e8.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        TStack_e8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
        ;
        TStack_e8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
        ;
      }
      else {
        UE::Math::TTransform<double>::InverseFast(this_00,&TStack_e8);
      }
      TStack_148.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      TStack_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      TStack_148.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      TStack_148.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      TStack_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      TStack_148.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      TStack_148.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      TStack_148.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      TStack_148.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      TStack_148.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      TStack_148.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      TStack_148.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      TStack_148.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      TStack_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      TStack_148.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      TStack_148.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      TStack_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      TStack_148.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&TStack_148,pTVar18,&TStack_e8);
      this->perform_grab_weapon = true;
      this->Wep_Offset_Calculated = false;
      this->grab_counter = 0.0;
      this->perform_physics_simulation = param_2;
      this->perform_gravity_simulation = param_3;
      (pTVar18->Rotation).XY.m128d_f64[0] = TStack_148.Rotation.XY.m128d_f64[0];
      (this->Saved_Relative_Hand_Transform).Rotation.XY.m128d_f64[1] =
           TStack_148.Rotation.XY.m128d_f64[1];
      (this->Saved_Relative_Hand_Transform).Rotation.ZW.m128d_f64[0] =
           TStack_148.Rotation.ZW.m128d_f64[0];
      (this->Saved_Relative_Hand_Transform).Rotation.ZW.m128d_f64[1] =
           TStack_148.Rotation.ZW.m128d_f64[1];
      (this->Saved_Relative_Hand_Transform).Translation.XY.m128d_f64[0] =
           TStack_148.Translation.XY.m128d_f64[0];
      (this->Saved_Relative_Hand_Transform).Translation.XY.m128d_f64[1] =
           TStack_148.Translation.XY.m128d_f64[1];
      (this->Saved_Relative_Hand_Transform).Translation.ZW.m128d_f64[0] =
           TStack_148.Translation.ZW.m128d_f64[0];
      (this->Saved_Relative_Hand_Transform).Translation.ZW.m128d_f64[1] =
           TStack_148.Translation.ZW.m128d_f64[1];
      (this->Saved_Relative_Hand_Transform).Scale3D.XY.m128d_f64[0] =
           TStack_148.Scale3D.XY.m128d_f64[0];
      (this->Saved_Relative_Hand_Transform).Scale3D.XY.m128d_f64[1] =
           TStack_148.Scale3D.XY.m128d_f64[1];
      dVar13 = (this->dominant_hand_transform).Rotation.XY.m128d_f64[0];
      dVar14 = (this->dominant_hand_transform).Rotation.XY.m128d_f64[1];
      (this->Saved_Relative_Hand_Transform).Scale3D.ZW.m128d_f64[0] =
           TStack_148.Scale3D.ZW.m128d_f64[0];
      (this->Saved_Relative_Hand_Transform).Scale3D.ZW.m128d_f64[1] =
           TStack_148.Scale3D.ZW.m128d_f64[1];
      dVar15 = (this->dominant_hand_transform).Rotation.ZW.m128d_f64[0];
      dVar16 = (this->dominant_hand_transform).Rotation.ZW.m128d_f64[1];
      (this->last_saved_hand_transform).Rotation.XY.m128d_f64[0] = dVar13;
      (this->last_saved_hand_transform).Rotation.XY.m128d_f64[1] = dVar14;
      dVar13 = (this->dominant_hand_transform).Translation.XY.m128d_f64[0];
      dVar14 = (this->dominant_hand_transform).Translation.XY.m128d_f64[1];
      (this->last_saved_hand_transform).Rotation.ZW.m128d_f64[0] = dVar15;
      (this->last_saved_hand_transform).Rotation.ZW.m128d_f64[1] = dVar16;
      dVar15 = (this->dominant_hand_transform).Translation.ZW.m128d_f64[0];
      dVar16 = (this->dominant_hand_transform).Translation.ZW.m128d_f64[1];
      (this->last_saved_hand_transform).Translation.XY.m128d_f64[0] = dVar13;
      (this->last_saved_hand_transform).Translation.XY.m128d_f64[1] = dVar14;
      uVar5 = *(undefined4 *)(this->dominant_hand_transform).Scale3D.XY.m128d_f64;
      uVar6 = *(undefined4 *)((longlong)(this->dominant_hand_transform).Scale3D.XY.m128d_f64 + 4);
      uVar7 = *(undefined4 *)((this->dominant_hand_transform).Scale3D.XY.m128d_f64 + 1);
      uVar8 = *(undefined4 *)((longlong)(this->dominant_hand_transform).Scale3D.XY.m128d_f64 + 0xc);
      (this->last_saved_hand_transform).Translation.ZW.m128d_f64[0] = dVar15;
      (this->last_saved_hand_transform).Translation.ZW.m128d_f64[1] = dVar16;
      uVar9 = *(undefined4 *)(this->dominant_hand_transform).Scale3D.ZW.m128d_f64;
      uVar10 = *(undefined4 *)((longlong)(this->dominant_hand_transform).Scale3D.ZW.m128d_f64 + 4);
      uVar11 = *(undefined4 *)((this->dominant_hand_transform).Scale3D.ZW.m128d_f64 + 1);
      uVar12 = *(undefined4 *)((longlong)(this->dominant_hand_transform).Scale3D.ZW.m128d_f64 + 0xc)
      ;
      *(undefined4 *)(this->last_saved_hand_transform).Scale3D.XY.m128d_f64 = uVar5;
      *(undefined4 *)((longlong)(this->last_saved_hand_transform).Scale3D.XY.m128d_f64 + 4) = uVar6;
      *(undefined4 *)((this->last_saved_hand_transform).Scale3D.XY.m128d_f64 + 1) = uVar7;
      *(undefined4 *)((longlong)(this->last_saved_hand_transform).Scale3D.XY.m128d_f64 + 0xc) =
           uVar8;
      *(undefined4 *)(this->last_saved_hand_transform).Scale3D.ZW.m128d_f64 = uVar9;
      *(undefined4 *)((longlong)(this->last_saved_hand_transform).Scale3D.ZW.m128d_f64 + 4) = uVar10
      ;
      *(undefined4 *)((this->last_saved_hand_transform).Scale3D.ZW.m128d_f64 + 1) = uVar11;
      *(undefined4 *)((longlong)(this->last_saved_hand_transform).Scale3D.ZW.m128d_f64 + 0xc) =
           uVar12;
      if (param_2) {
        UActorComponent::SetTickGroup((UActorComponent *)this->owning_skeleton,TG_PostPhysics);
      }
      else {
        (**(code **)(*(longlong *)this->active_weapon_component + 0x518))
                  (this->active_weapon_component,&FDetachmentTransformRules::KeepWorldTransform);
      }
      (**(code **)(*(longlong *)this->active_weapon_component + 0x918))
                (this->active_weapon_component,param_3);
      pTVar18 = USceneComponent::GetRelativeTransform
                          ((USceneComponent *)this->active_weapon_component,&TStack_88);
      dVar13 = (pTVar18->Rotation).XY.m128d_f64[1];
      (this->last_saved_relative_wep_transform).Rotation.XY.m128d_f64[0] =
           (pTVar18->Rotation).XY.m128d_f64[0];
      (this->last_saved_relative_wep_transform).Rotation.XY.m128d_f64[1] = dVar13;
      dVar13 = (pTVar18->Rotation).ZW.m128d_f64[1];
      (this->last_saved_relative_wep_transform).Rotation.ZW.m128d_f64[0] =
           (pTVar18->Rotation).ZW.m128d_f64[0];
      (this->last_saved_relative_wep_transform).Rotation.ZW.m128d_f64[1] = dVar13;
      dVar13 = (pTVar18->Translation).XY.m128d_f64[1];
      (this->last_saved_relative_wep_transform).Translation.XY.m128d_f64[0] =
           (pTVar18->Translation).XY.m128d_f64[0];
      (this->last_saved_relative_wep_transform).Translation.XY.m128d_f64[1] = dVar13;
      dVar13 = (pTVar18->Translation).ZW.m128d_f64[1];
      (this->last_saved_relative_wep_transform).Translation.ZW.m128d_f64[0] =
           (pTVar18->Translation).ZW.m128d_f64[0];
      (this->last_saved_relative_wep_transform).Translation.ZW.m128d_f64[1] = dVar13;
      dVar13 = (pTVar18->Scale3D).XY.m128d_f64[1];
      (this->last_saved_relative_wep_transform).Scale3D.XY.m128d_f64[0] =
           (pTVar18->Scale3D).XY.m128d_f64[0];
      (this->last_saved_relative_wep_transform).Scale3D.XY.m128d_f64[1] = dVar13;
      dVar13 = (pTVar18->Scale3D).ZW.m128d_f64[1];
      (this->last_saved_relative_wep_transform).Scale3D.ZW.m128d_f64[0] =
           (pTVar18->Scale3D).ZW.m128d_f64[0];
      (this->last_saved_relative_wep_transform).Scale3D.ZW.m128d_f64[1] = dVar13;
    }
  }
  return;
}

// Multicast_Grab_Weapon_Validate @ 14d353070

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_Grab_Weapon_Validate
          (UDragonIKWeaponPhysicsComponent *this,FName param_1,bool param_2,bool param_3,
          FName param_4)

{
  return true;
}

// Multicast_Release_Hand_Only_Implementation @ 14d353270

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_Release_Hand_Only_Implementation
          (UDragonIKWeaponPhysicsComponent *this,FName param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  uint uVar6;
  FName aFStackX_10 [3];
  FString FStack_18;
  
  if ((0 < (this->handbone_array_boneName).ArrayNum) &&
     (0 < (this->handbone_array_boneIndex).ArrayNum)) {
    aFStackX_10[0] = param_1;
    pFVar5 = ::FName::ToString(aFStackX_10,&FStack_18);
    uVar4 = TArray<FString,TSizedDefaultAllocator<32>_>::Find(&this->handbone_array_boneName,pFVar5)
    ;
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
    if (-1 < (int)uVar4) {
      uVar6 = 0;
      if ((int)uVar4 < (this->handbone_array_boneIndex).ArrayNum) {
        uVar6 = ~uVar4 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar1 = *(int *)((this->handbone_array_boneIndex).AllocatorInstance.Data +
                      (longlong)(int)uVar4 * 4);
      if ((-1 < iVar1) && (iVar1 < (this->arm_grabbing_status).ArrayNum)) {
        if (iVar1 < 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        (this->arm_grabbing_status).AllocatorInstance.Data[iVar1] = (FScriptContainerElement)0x0;
      }
    }
  }
  return;
}

// Multicast_Release_Hand_Only_Validate @ 14d353280

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_Release_Hand_Only_Validate
          (UDragonIKWeaponPhysicsComponent *this,FName param_1)

{
  return true;
}

// Multicast_Release_Hand_Plus_Override_Implementation @ 14d353290

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_Release_Hand_Plus_Override_Implementation
          (UDragonIKWeaponPhysicsComponent *this,FName param_1,TTransform<double> *param_2,
          bool param_3,bool param_4)

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
  Release_Hand_Plus_Override(this,param_1,&local_68,param_3,param_4);
  return;
}

// Multicast_Release_Hand_Plus_Override_Validate @ 14d353300

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_Release_Hand_Plus_Override_Validate
          (UDragonIKWeaponPhysicsComponent *this,FName param_1,TTransform<double> *param_2,
          bool param_3,bool param_4)

{
  return true;
}

// Multicast_Release_Weapon_Implementation @ 14d353310

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_Release_Weapon_Implementation
          (UDragonIKWeaponPhysicsComponent *this,bool param_1,bool param_2,bool param_3)

{
  UPrimitiveComponent *pUVar1;
  
  this->is_grabbing = false;
  pUVar1 = this->active_weapon_component;
  if (pUVar1 != (UPrimitiveComponent *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x918))(pUVar1,param_2);
    (**(code **)(*(longlong *)this->active_weapon_component + 0x6f0))
              (this->active_weapon_component,param_1);
  }
  if (this->weapon_physics_constraint != (UPhysicsConstraintComponent *)0x0) {
    UPhysicsConstraintComponent::BreakConstraint(this->weapon_physics_constraint);
  }
  if (this->weapon_physics_handle != (UPhysicsHandleComponent *)0x0) {
    (**(code **)(this->weapon_physics_handle->_padding_ + 0x500))();
  }
  if ((param_3) && (pUVar1 = this->active_weapon_component, pUVar1 != (UPrimitiveComponent *)0x0)) {
    (**(code **)(*(longlong *)pUVar1 + 0x508))
              (pUVar1,this->owning_skeleton,&FAttachmentTransformRules::KeepWorldTransform,
               this->weapon_grabbed_bone);
  }
  *&(this->last_saved_hand_transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->last_saved_hand_transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->last_saved_hand_transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->last_saved_hand_transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->last_saved_hand_transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->last_saved_hand_transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->active_weapon_component = (UPrimitiveComponent *)0x0;
  this->perform_grab_weapon = false;
  *&(this->dominant_hand_transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->dominant_hand_transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->dominant_hand_transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->dominant_hand_transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->dominant_hand_transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->dominant_hand_transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return;
}

// Multicast_Release_Weapon_Validate @ 14d353490

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_Release_Weapon_Validate
          (UDragonIKWeaponPhysicsComponent *this,bool param_1,bool param_2,bool param_3)

{
  return true;
}

// Multicast_Unfreeze_Elbows_Function_Implementation @ 14d353610

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_Unfreeze_Elbows_Function_Implementation
          (UDragonIKWeaponPhysicsComponent *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  uint uVar5;
  FName local_res8;
  FString local_18;
  
  if ((0 < (this->handbone_array_boneName).ArrayNum) &&
     (0 < (this->handbone_array_boneIndex).ArrayNum)) {
    local_res8 = param_1;
    pFVar4 = ::FName::ToString(&local_res8,&local_18);
    uVar3 = TArray<FString,TSizedDefaultAllocator<32>_>::Find(&this->handbone_array_boneName,pFVar4)
    ;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (-1 < (int)uVar3) {
      uVar5 = 0;
      if ((int)uVar3 < (this->handbone_array_boneIndex).ArrayNum) {
        uVar5 = ~uVar3 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar3 = *(uint *)((this->handbone_array_boneIndex).AllocatorInstance.Data +
                       (longlong)(int)uVar3 * 4);
      if ((-1 < (int)uVar3) && ((int)uVar3 < (this->arm_grabbing_status).ArrayNum)) {
        uVar5 = 0;
        if ((int)uVar3 < (this->Frozen_Elbow_Component_Status).ArrayNum) {
          uVar5 = ~uVar3 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (this->Frozen_Elbow_Component_Status).AllocatorInstance.Data[(int)uVar3] =
             (FScriptContainerElement)0x0;
        this->Weapon_Freeze_Bool = false;
      }
    }
  }
  return;
}

// Multicast_Unfreeze_Elbows_Function_Validate @ 14d353750

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_Unfreeze_Elbows_Function_Validate
          (UDragonIKWeaponPhysicsComponent *this,FName param_1)

{
  return true;
}

// Multicast_Weapon_Transform_Override_Implementation @ 14d353780

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_Weapon_Transform_Override_Implementation
          (UDragonIKWeaponPhysicsComponent *this,TTransform<double> *param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (param_1->Rotation).XY.m128d_f64[1];
  dVar2 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar3 = (param_1->Rotation).ZW.m128d_f64[1];
  (this->overrided_weapon_transform).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (this->overrided_weapon_transform).Rotation.XY.m128d_f64[1] = dVar1;
  this->this_should_override_weapon_transform = param_2;
  dVar1 = (param_1->Translation).XY.m128d_f64[0];
  dVar4 = (param_1->Translation).XY.m128d_f64[1];
  (this->overrided_weapon_transform).Rotation.ZW.m128d_f64[0] = dVar2;
  (this->overrided_weapon_transform).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar2 = (param_1->Translation).ZW.m128d_f64[0];
  dVar3 = (param_1->Translation).ZW.m128d_f64[1];
  (this->overrided_weapon_transform).Translation.XY.m128d_f64[0] = dVar1;
  (this->overrided_weapon_transform).Translation.XY.m128d_f64[1] = dVar4;
  dVar1 = (param_1->Scale3D).XY.m128d_f64[0];
  dVar4 = (param_1->Scale3D).XY.m128d_f64[1];
  (this->overrided_weapon_transform).Translation.ZW.m128d_f64[0] = dVar2;
  (this->overrided_weapon_transform).Translation.ZW.m128d_f64[1] = dVar3;
  dVar2 = (param_1->Scale3D).ZW.m128d_f64[0];
  dVar3 = (param_1->Scale3D).ZW.m128d_f64[1];
  (this->overrided_weapon_transform).Scale3D.XY.m128d_f64[0] = dVar1;
  (this->overrided_weapon_transform).Scale3D.XY.m128d_f64[1] = dVar4;
  (this->overrided_weapon_transform).Scale3D.ZW.m128d_f64[0] = dVar2;
  (this->overrided_weapon_transform).Scale3D.ZW.m128d_f64[1] = dVar3;
  return;
}

// Multicast_Weapon_Transform_Override_Validate @ 14d3537d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UDragonIKWeaponPhysicsComponent::Multicast_Weapon_Transform_Override_Validate
          (UDragonIKWeaponPhysicsComponent *this,TTransform<double> *param_1,bool param_2)

{
  return true;
}

// OnComponentDestroyed @ 14d3537e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::OnComponentDestroyed
          (UDragonIKWeaponPhysicsComponent *this,bool param_1)

{
  UPhysicsHandleComponent *pUVar1;
  UPhysicsConstraintComponent *pUVar2;
  
  UActorComponent::OnComponentDestroyed((UActorComponent *)this,param_1);
  pUVar1 = this->weapon_physics_handle;
  if (pUVar1 != (UPhysicsHandleComponent *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x4a0))(pUVar1,0);
  }
  pUVar2 = this->weapon_physics_constraint;
  if (pUVar2 != (UPhysicsConstraintComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d35381b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar2->_padding_ + 0x4a0))(pUVar2,0);
    return;
  }
  return;
}

// Release_Hand_Only @ 14d3560e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Release_Hand_Only
          (UDragonIKWeaponPhysicsComponent *this,FName param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  uint uVar6;
  FName local_res10 [3];
  FString local_18;
  
  if ((0 < (this->handbone_array_boneName).ArrayNum) &&
     (0 < (this->handbone_array_boneIndex).ArrayNum)) {
    local_res10[0] = param_1;
    pFVar5 = ::FName::ToString(local_res10,&local_18);
    uVar4 = TArray<FString,TSizedDefaultAllocator<32>_>::Find(&this->handbone_array_boneName,pFVar5)
    ;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (-1 < (int)uVar4) {
      uVar6 = 0;
      if ((int)uVar4 < (this->handbone_array_boneIndex).ArrayNum) {
        uVar6 = ~uVar4 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar1 = *(int *)((this->handbone_array_boneIndex).AllocatorInstance.Data +
                      (longlong)(int)uVar4 * 4);
      if ((-1 < iVar1) && (iVar1 < (this->arm_grabbing_status).ArrayNum)) {
        if (iVar1 < 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        (this->arm_grabbing_status).AllocatorInstance.Data[iVar1] = (FScriptContainerElement)0x0;
      }
    }
  }
  return;
}

// Release_Hand_Plus_Override @ 14d356200

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Release_Hand_Plus_Override
          (UDragonIKWeaponPhysicsComponent *this,FName param_1,TTransform<double> *param_2,
          bool param_3,bool param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FString *pFVar11;
  longlong lVar12;
  FName local_res10;
  FString local_88;
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
  
  uVar10 = 0xffffffff;
  if ((0 < (this->handbone_array_boneName).ArrayNum) &&
     (0 < (this->handbone_array_boneIndex).ArrayNum)) {
    local_res10 = param_1;
    pFVar11 = ::FName::ToString(&local_res10,&local_88);
    uVar9 = TArray<FString,TSizedDefaultAllocator<32>_>::Find
                      (&this->handbone_array_boneName,pFVar11);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (-1 < (int)uVar9) {
      uVar10 = 0;
      if ((int)uVar9 < (this->handbone_array_boneIndex).ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar10 = *(uint *)((this->handbone_array_boneIndex).AllocatorInstance.Data +
                        (longlong)(int)uVar9 * 4);
    }
    if (-1 < (int)uVar10) {
      if ((int)uVar10 < (this->should_override_hand_location).ArrayNum) {
        if (((int)uVar10 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (this->should_override_hand_location).AllocatorInstance.Data[(int)uVar10] =
             (FScriptContainerElement)param_3;
      }
      if ((int)uVar10 < (this->should_override_hand_rotation).ArrayNum) {
        if (((int)uVar10 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (this->should_override_hand_rotation).AllocatorInstance.Data[(int)uVar10] =
             (FScriptContainerElement)param_4;
      }
      local_78 = (param_2->Rotation).ZW.m128d_f64[0];
      dStack_70 = (param_2->Rotation).ZW.m128d_f64[1];
      local_68 = (param_2->Translation).XY.m128d_f64[0];
      dStack_60 = (param_2->Translation).XY.m128d_f64[1];
      uVar4 = *(undefined4 *)(param_2->Rotation).XY.m128d_f64;
      uVar5 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 4);
      uVar6 = *(undefined4 *)((param_2->Rotation).XY.m128d_f64 + 1);
      uVar7 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 0xc);
      uVar9 = 0;
      if ((int)uVar10 < (this->arm_override_transform).ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      local_58 = (param_2->Translation).ZW.m128d_f64[0];
      dStack_50 = (param_2->Translation).ZW.m128d_f64[1];
      local_38 = (param_2->Scale3D).ZW.m128d_f64[0];
      dStack_30 = (param_2->Scale3D).ZW.m128d_f64[1];
      local_48 = (param_2->Scale3D).XY.m128d_f64[0];
      dStack_40 = (param_2->Scale3D).XY.m128d_f64[1];
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->arm_override_transform).AllocatorInstance.Data;
      lVar12 = (longlong)(int)uVar10 * 0x60;
      pFVar1 = pFVar2 + lVar12;
      *(undefined4 *)pFVar1 = uVar4;
      *(undefined4 *)(pFVar1 + 4) = uVar5;
      *(undefined4 *)(pFVar1 + 8) = uVar6;
      *(undefined4 *)(pFVar1 + 0xc) = uVar7;
      *(double *)(pFVar2 + lVar12 + 0x10) = local_78;
      *(double *)(pFVar2 + lVar12 + 0x10 + 8) = dStack_70;
      *(double *)(pFVar2 + lVar12 + 0x20) = local_68;
      *(double *)(pFVar2 + lVar12 + 0x20 + 8) = dStack_60;
      *(double *)(pFVar2 + lVar12 + 0x30) = local_58;
      *(double *)(pFVar2 + lVar12 + 0x30 + 8) = dStack_50;
      *(double *)(pFVar2 + lVar12 + 0x40) = local_48;
      *(double *)(pFVar2 + lVar12 + 0x40 + 8) = dStack_40;
      *(double *)(pFVar2 + lVar12 + 0x50) = local_38;
      *(double *)(pFVar2 + lVar12 + 0x50 + 8) = dStack_30;
    }
  }
  return;
}

// Release_Weapon @ 14d356490

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Release_Weapon
          (UDragonIKWeaponPhysicsComponent *this,bool param_1,bool param_2,bool param_3)

{
  UPrimitiveComponent *pUVar1;
  
  this->is_grabbing = false;
  pUVar1 = this->active_weapon_component;
  if (pUVar1 != (UPrimitiveComponent *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x918))(pUVar1,param_2);
    (**(code **)(*(longlong *)this->active_weapon_component + 0x6f0))
              (this->active_weapon_component,param_1);
  }
  if (this->weapon_physics_constraint != (UPhysicsConstraintComponent *)0x0) {
    UPhysicsConstraintComponent::BreakConstraint(this->weapon_physics_constraint);
  }
  if (this->weapon_physics_handle != (UPhysicsHandleComponent *)0x0) {
    (**(code **)(this->weapon_physics_handle->_padding_ + 0x500))();
  }
  if ((param_3) && (pUVar1 = this->active_weapon_component, pUVar1 != (UPrimitiveComponent *)0x0)) {
    (**(code **)(*(longlong *)pUVar1 + 0x508))
              (pUVar1,this->owning_skeleton,&FAttachmentTransformRules::KeepWorldTransform,
               this->weapon_grabbed_bone);
  }
  *&(this->last_saved_hand_transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->last_saved_hand_transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->last_saved_hand_transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->last_saved_hand_transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->last_saved_hand_transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->last_saved_hand_transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->active_weapon_component = (UPrimitiveComponent *)0x0;
  this->perform_grab_weapon = false;
  *&(this->dominant_hand_transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->dominant_hand_transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->dominant_hand_transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->dominant_hand_transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->dominant_hand_transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->dominant_hand_transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return;
}

// Server_Attach_Hand_Only_Implementation @ 14d357530

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Server_Attach_Hand_Only_Implementation
          (UDragonIKWeaponPhysicsComponent *this,FName param_1,bool param_2)

{
  UFunction *pUVar1;
  FName FStack_18;
  undefined1 uStack_10;
  
  FStack_18 = param_1;
  uStack_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UDragonIKWeaponPhysicsComponent_Multicast_Attach_Hand_Only);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,&FStack_18);
  return;
}

// Server_Attach_Hand_Only_Validate @ 14d357540

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UDragonIKWeaponPhysicsComponent::Server_Attach_Hand_Only_Validate
          (UDragonIKWeaponPhysicsComponent *this,FName param_1,bool param_2)

{
  return true;
}

// Server_Destroy_Weapon_Implementation @ 14d3575e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Server_Destroy_Weapon_Implementation
          (UDragonIKWeaponPhysicsComponent *this,AActor *param_1)

{
  UFunction *pUVar1;
  AActor *apAStackX_8 [4];
  
  apAStackX_8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKWeaponPhysicsComponent_Multicast_Destroy_Weapon)
  ;
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,apAStackX_8);
  return;
}

// Server_Destroy_Weapon_Validate @ 14d3575f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UDragonIKWeaponPhysicsComponent::Server_Destroy_Weapon_Validate
          (UDragonIKWeaponPhysicsComponent *this,AActor *param_1)

{
  return true;
}

// Server_DisableWeaponsArms_Implementation @ 14d357600

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Server_DisableWeaponsArms_Implementation
          (UDragonIKWeaponPhysicsComponent *this,bool param_1)

{
  UFunction *pUVar1;
  undefined1 auStackX_10 [24];
  
  auStackX_10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UDragonIKWeaponPhysicsComponent_Multicast_DisableWeaponsArms);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,auStackX_10);
  return;
}

// Server_DisableWeaponsArms_Validate @ 14d357610

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UDragonIKWeaponPhysicsComponent::Server_DisableWeaponsArms_Validate
          (UDragonIKWeaponPhysicsComponent *this,bool param_1)

{
  return true;
}

// Server_EnableWeaponsArms_Implementation @ 14d357640

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Server_EnableWeaponsArms_Implementation
          (UDragonIKWeaponPhysicsComponent *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UDragonIKWeaponPhysicsComponent_Multicast_EnableWeaponsArms);
                    /* WARNING: Could not recover jumptable at 0x00014d2b0f4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,0,*(code **)(*(longlong *)this + 0x260));
  return;
}

// Server_EnableWeaponsArms_Validate @ 14d357650

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UDragonIKWeaponPhysicsComponent::Server_EnableWeaponsArms_Validate
          (UDragonIKWeaponPhysicsComponent *this)

{
  return true;
}

// Server_FirstTimeInitialization_Implementation @ 14d357670

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Server_FirstTimeInitialization_Implementation
          (UDragonIKWeaponPhysicsComponent *this,USkeletalMeshComponent *param_1)

{
  UFunction *pUVar1;
  USkeletalMeshComponent *apUStackX_8 [4];
  
  apUStackX_8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UDragonIKWeaponPhysicsComponent_Multicast_FirstTimeInitialization);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,apUStackX_8);
  return;
}

// Server_FirstTimeInitialization_Validate @ 14d357690

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UDragonIKWeaponPhysicsComponent::Server_FirstTimeInitialization_Validate
          (UDragonIKWeaponPhysicsComponent *this,USkeletalMeshComponent *param_1)

{
  return true;
}

// Server_Freeze_Elbows_Function_Implementation @ 14d3576a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Server_Freeze_Elbows_Function_Implementation
          (UDragonIKWeaponPhysicsComponent *this,FName param_1)

{
  UFunction *pUVar1;
  FName aFStackX_8 [4];
  
  aFStackX_8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UDragonIKWeaponPhysicsComponent_Multicast_Freeze_Elbows_Function);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,aFStackX_8);
  return;
}

// Server_Freeze_Elbows_Function_Validate @ 14d3576b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UDragonIKWeaponPhysicsComponent::Server_Freeze_Elbows_Function_Validate
          (UDragonIKWeaponPhysicsComponent *this,FName param_1)

{
  return true;
}

// Server_Grab_Weapon_Implementation @ 14d3576c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Server_Grab_Weapon_Implementation
          (UDragonIKWeaponPhysicsComponent *this,FName param_1,bool param_2,bool param_3,
          FName param_4)

{
  UFunction *pUVar1;
  FName FStack_28;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  FName FStack_1c;
  
  FStack_1c = param_4;
  FStack_28 = param_1;
  uStack_20 = param_2;
  uStack_1f = param_3;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKWeaponPhysicsComponent_Multicast_Grab_Weapon);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,&FStack_28);
  return;
}

// Server_Grab_Weapon_Validate @ 14d3576d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UDragonIKWeaponPhysicsComponent::Server_Grab_Weapon_Validate
          (UDragonIKWeaponPhysicsComponent *this,FName param_1,bool param_2,bool param_3,
          FName param_4)

{
  return true;
}

// Server_Release_Hand_Only_Implementation @ 14d357790

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Server_Release_Hand_Only_Implementation
          (UDragonIKWeaponPhysicsComponent *this,FName param_1)

{
  UFunction *pUVar1;
  FName aFStackX_8 [4];
  
  aFStackX_8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UDragonIKWeaponPhysicsComponent_Multicast_Release_Hand_Only);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,aFStackX_8);
  return;
}

// Server_Release_Hand_Only_Validate @ 14d3577a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UDragonIKWeaponPhysicsComponent::Server_Release_Hand_Only_Validate
          (UDragonIKWeaponPhysicsComponent *this,FName param_1)

{
  return true;
}

// Server_Release_Hand_Plus_Override_Implementation @ 14d3577b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Server_Release_Hand_Plus_Override_Implementation
          (UDragonIKWeaponPhysicsComponent *this,FName param_1,TTransform<double> *param_2,
          bool param_3,bool param_4)

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
  Multicast_Release_Hand_Plus_Override(this,param_1,&local_68,param_3,param_4);
  return;
}

// Server_Release_Hand_Plus_Override_Validate @ 14d357820

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UDragonIKWeaponPhysicsComponent::Server_Release_Hand_Plus_Override_Validate
          (UDragonIKWeaponPhysicsComponent *this,FName param_1,TTransform<double> *param_2,
          bool param_3,bool param_4)

{
  return true;
}

// Server_Release_Weapon_Implementation @ 14d357830

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Server_Release_Weapon_Implementation
          (UDragonIKWeaponPhysicsComponent *this,bool param_1,bool param_2,bool param_3)

{
  UFunction *pUVar1;
  undefined1 uStackX_10;
  undefined1 uStackX_11;
  undefined1 uStackX_12;
  
  uStackX_10 = param_1;
  uStackX_11 = param_2;
  uStackX_12 = param_3;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDragonIKWeaponPhysicsComponent_Multicast_Release_Weapon)
  ;
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,&uStackX_10);
  return;
}

// Server_Release_Weapon_Validate @ 14d357840

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UDragonIKWeaponPhysicsComponent::Server_Release_Weapon_Validate
          (UDragonIKWeaponPhysicsComponent *this,bool param_1,bool param_2,bool param_3)

{
  return true;
}

// Server_Unfreeze_Elbows_Function_Implementation @ 14d357870

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Server_Unfreeze_Elbows_Function_Implementation
          (UDragonIKWeaponPhysicsComponent *this,FName param_1)

{
  UFunction *pUVar1;
  FName aFStackX_8 [4];
  
  aFStackX_8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UDragonIKWeaponPhysicsComponent_Multicast_Unfreeze_Elbows_Function);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,aFStackX_8);
  return;
}

// Server_Unfreeze_Elbows_Function_Validate @ 14d357880

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UDragonIKWeaponPhysicsComponent::Server_Unfreeze_Elbows_Function_Validate
          (UDragonIKWeaponPhysicsComponent *this,FName param_1)

{
  return true;
}

// Server_Weapon_Transform_Override_Implementation @ 14d3578b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Server_Weapon_Transform_Override_Implementation
          (UDragonIKWeaponPhysicsComponent *this,TTransform<double> *param_1,bool param_2)

{
  TTransform<double> local_68;
  
  local_68.Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  local_68.Rotation.XY.m128d_f64[1] = (param_1->Rotation).XY.m128d_f64[1];
  local_68.Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  local_68.Rotation.ZW.m128d_f64[1] = (param_1->Rotation).ZW.m128d_f64[1];
  local_68.Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  local_68.Translation.XY.m128d_f64[1] = (param_1->Translation).XY.m128d_f64[1];
  local_68.Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  local_68.Translation.ZW.m128d_f64[1] = (param_1->Translation).ZW.m128d_f64[1];
  local_68.Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  local_68.Scale3D.XY.m128d_f64[1] = (param_1->Scale3D).XY.m128d_f64[1];
  local_68.Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  local_68.Scale3D.ZW.m128d_f64[1] = (param_1->Scale3D).ZW.m128d_f64[1];
  Multicast_Weapon_Transform_Override(this,&local_68,param_2);
  return;
}

// Server_Weapon_Transform_Override_Validate @ 14d357900

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UDragonIKWeaponPhysicsComponent::Server_Weapon_Transform_Override_Validate
          (UDragonIKWeaponPhysicsComponent *this,TTransform<double> *param_1,bool param_2)

{
  return true;
}

// SetWeaponPhysicsBlendWeight @ 14d358990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::SetWeaponPhysicsBlendWeight
          (UDragonIKWeaponPhysicsComponent *this,float param_1)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  FBodyInstance *this_00;
  TQuat<double> *pTVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar12;
  undefined1 auVar11 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar19;
  uint uVar20;
  undefined1 auStack_198 [32];
  TQuat<double> local_158;
  TQuat<double> local_138;
  TQuat<double> local_118;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  this_00 = (FBodyInstance *)
            (**(code **)(*(longlong *)this->active_weapon_component + 0x818))
                      (this->active_weapon_component,0,1);
  FBodyInstance::GetUnrealWorldTransform(this_00,&local_f8,true,false);
  dVar1 = (this->last_saved_relative_wep_transform).Translation.ZW.m128d_f64[0];
  dVar10 = (this->last_saved_relative_wep_transform).Translation.XY.m128d_f64[0];
  dVar13 = (this->last_saved_relative_wep_transform).Translation.XY.m128d_f64[1];
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  dVar2 = (double)param_1;
  auVar17._0_8_ = (local_f8.Translation.ZW.m128d_f64[0] - dVar1) * dVar2 + dVar1;
  auVar17._8_8_ = local_f8.Translation.ZW.m128d_f64[1];
  local_138.X = (this->last_saved_relative_wep_transform).Rotation.XY.m128d_f64[0];
  local_138.Y = (this->last_saved_relative_wep_transform).Rotation.XY.m128d_f64[1];
  dVar13 = (local_f8.Translation.XY.m128d_f64[1] - dVar13) * dVar2 + dVar13;
  local_158.Z = local_f8.Rotation.ZW.m128d_f64[0];
  local_158.W = local_f8.Rotation.ZW.m128d_f64[1];
  local_98.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar13,0);
  local_98.Translation.XY.m128d_f64[0] =
       (local_f8.Translation.XY.m128d_f64[0] - dVar10) * dVar2 + dVar10;
  local_98.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar13 >> 0x20);
  local_98.Translation.ZW.m128d_f64[1] = 0.0;
  local_158.X = local_f8.Rotation.XY.m128d_f64[0];
  local_158.Y = local_f8.Rotation.XY.m128d_f64[1];
  local_138.Z = (this->last_saved_relative_wep_transform).Rotation.ZW.m128d_f64[0];
  local_138.W = (this->last_saved_relative_wep_transform).Rotation.ZW.m128d_f64[1];
  local_98.Translation.ZW.m128d_f64[0] = auVar17._0_8_;
  pTVar7 = UE::Math::TQuat<double>::Slerp_NotNormalized(&local_118,&local_138,&local_158,dVar2);
  dVar13 = pTVar7->X;
  dVar4 = pTVar7->Y;
  dVar5 = pTVar7->Z;
  dVar6 = pTVar7->W;
  dVar10 = dVar5 * dVar5 + dVar13 * dVar13;
  dVar12 = dVar6 * dVar6 + dVar4 * dVar4;
  dVar1 = dVar12 + dVar10;
  dVar10 = dVar10 + dVar12;
  auVar14._8_4_ = SUB84(dVar10,0);
  auVar14._0_8_ = dVar1;
  auVar14._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  auVar18 = sqrtpd(auVar17,auVar14);
  uVar8 = -(ulonglong)(__real_3e45798ee0000000 <= dVar1);
  uVar9 = -(ulonglong)(__real_3e45798ee0000000 <= dVar10);
  uVar19 = (uint)(uVar8 >> 0x20);
  uVar20 = (uint)(uVar9 >> 0x20);
  auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar18);
  auVar15._0_8_ = uVar8 & (ulonglong)(auVar14._0_8_ * dVar13);
  uVar3 = uVar9 & (ulonglong)(auVar14._8_8_ * dVar4);
  auVar15._8_4_ = (undefined4)uVar3;
  auVar15._12_4_ = (undefined4)(uVar3 >> 0x20);
  auVar11._0_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar11._4_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar11._8_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar11._12_4_ =
       ~uVar20 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_98.Rotation.XY.m128d_f64 = (double  [2])(auVar15 | auVar11);
  auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar18);
  auVar18._0_8_ = (ulonglong)(auVar14._0_8_ * dVar5) & uVar8;
  uVar3 = (ulonglong)(auVar14._8_8_ * dVar6) & uVar9;
  auVar18._8_4_ = (undefined4)uVar3;
  auVar18._12_4_ = (undefined4)(uVar3 >> 0x20);
  local_98.Scale3D.ZW.m128d_f64[0] =
       (this->last_saved_relative_wep_transform).Scale3D.ZW.m128d_f64[0];
  auVar16._0_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar16._4_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar16._8_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar16._12_4_ =
       ~uVar20 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_98.Scale3D.XY.m128d_f64[0] =
       (this->last_saved_relative_wep_transform).Scale3D.XY.m128d_f64[0];
  local_98.Scale3D.XY.m128d_f64[1] =
       (this->last_saved_relative_wep_transform).Scale3D.XY.m128d_f64[1];
  local_98.Rotation.ZW.m128d_f64 = (double  [2])(auVar16 | auVar18);
  local_98.Scale3D.ZW.m128d_f64[0] =
       (local_f8.Scale3D.ZW.m128d_f64[0] - local_98.Scale3D.ZW.m128d_f64[0]) * dVar2 +
       local_98.Scale3D.ZW.m128d_f64[0];
  local_98.Scale3D.XY.m128d_f64[0] =
       (local_f8.Scale3D.XY.m128d_f64[0] - local_98.Scale3D.XY.m128d_f64[0]) * dVar2 +
       local_98.Scale3D.XY.m128d_f64[0];
  local_98.Scale3D.XY.m128d_f64[1] =
       (local_f8.Scale3D.XY.m128d_f64[1] - local_98.Scale3D.XY.m128d_f64[1]) * dVar2 +
       local_98.Scale3D.XY.m128d_f64[1];
  local_98.Scale3D.ZW.m128d_f64[1] = 0.0;
  USceneComponent::SetRelativeTransform
            ((USceneComponent *)this->active_weapon_component,&local_98,false,(FHitResult *)0x0,None
            );
  return;
}

// TickComponent @ 14d35d530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::TickComponent
          (UDragonIKWeaponPhysicsComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  bool bVar13;
  undefined4 extraout_EAX;
  int iVar14;
  UWorld *pUVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  UDragonIKWeaponPhysicsComponent *pUVar19;
  longlong lVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
  pUVar19 = this;
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  dVar6 = (this->dominant_hand_transform).Translation.ZW.m128d_f64[0] -
          UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  dVar7 = (this->dominant_hand_transform).Translation.ZW.m128d_f64[1] -
          UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  dVar22 = (this->dominant_hand_transform).Translation.XY.m128d_f64[0] -
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  dVar24 = (this->dominant_hand_transform).Translation.XY.m128d_f64[1] -
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  lVar20 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar7,0) & _UNK_15061cc88));
  auVar1._8_4_ = (int)lVar20;
  auVar1._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar1._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
  uVar16 = movmskpd((int)pUVar19,auVar1);
  lVar20 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar24,0) & _UNK_15061cc88));
  auVar8._8_4_ = (int)lVar20;
  auVar8._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar8._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
  iVar14 = movmskpd(extraout_EAX,auVar8);
  if ((uVar16 & 0x3fffffff) == 0 && iVar14 == 0) {
    dVar11 = (this->dominant_hand_transform).Rotation.ZW.m128d_f64[0];
    dVar12 = (this->dominant_hand_transform).Rotation.ZW.m128d_f64[1];
    dVar22 = (this->dominant_hand_transform).Rotation.XY.m128d_f64[0];
    dVar24 = (this->dominant_hand_transform).Rotation.XY.m128d_f64[1];
    dVar23 = dVar11 - UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    dVar25 = dVar12 - UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    dVar11 = dVar11 + UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    dVar12 = dVar12 + UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    dVar6 = dVar22 - UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    dVar7 = dVar24 - UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    dVar22 = dVar22 + UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    dVar24 = dVar24 + UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    lVar20 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar25,0) & _UNK_15061cc88));
    auVar2._8_4_ = (int)lVar20;
    auVar2._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar2._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
    iVar17 = movmskpd(0,auVar2);
    lVar20 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar7,0) & _UNK_15061cc88));
    auVar3._8_4_ = (int)lVar20;
    auVar3._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    ;
    auVar3._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
    uVar16 = movmskpd(iVar14,auVar3);
    uVar18 = iVar17 << 2 | uVar16;
    if (uVar18 != 0) {
      lVar20 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar12,0) & _UNK_15061cc88));
      auVar4._8_4_ = (int)lVar20;
      auVar4._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar11,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar4._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
      uVar18 = movmskpd(uVar18,auVar4);
      lVar20 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar24,0) & _UNK_15061cc88));
      auVar10._8_4_ = (int)lVar20;
      auVar10._0_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar10._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
      uVar16 = movmskpd(uVar16,auVar10);
      if ((uVar18 & 0x3fffffff) != 0 || uVar16 != 0) goto LAB_14d35d676;
    }
    dVar6 = (this->dominant_hand_transform).Scale3D.ZW.m128d_f64[0] -
            UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    dVar7 = (this->dominant_hand_transform).Scale3D.ZW.m128d_f64[1] -
            UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    dVar22 = (this->dominant_hand_transform).Scale3D.XY.m128d_f64[0] -
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    dVar24 = (this->dominant_hand_transform).Scale3D.XY.m128d_f64[1] -
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    lVar20 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar7,0) & _UNK_15061cc88));
    auVar5._8_4_ = (int)lVar20;
    auVar5._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    ;
    auVar5._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
    uVar18 = movmskpd(0,auVar5);
    lVar20 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar24,0) & _UNK_15061cc88));
    auVar9._8_4_ = (int)lVar20;
    auVar9._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar9._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
    iVar14 = movmskpd(uVar16,auVar9);
    if ((uVar18 & 0x3fffffff) != 0 || iVar14 != 0) goto LAB_14d35d676;
  }
  else {
LAB_14d35d676:
    dVar6 = (this->dominant_hand_transform).Rotation.XY.m128d_f64[1];
    dVar7 = (this->dominant_hand_transform).Rotation.ZW.m128d_f64[0];
    dVar22 = (this->dominant_hand_transform).Rotation.ZW.m128d_f64[1];
    (this->Temp_Dom_Transform).Rotation.XY.m128d_f64[0] =
         (this->dominant_hand_transform).Rotation.XY.m128d_f64[0];
    (this->Temp_Dom_Transform).Rotation.XY.m128d_f64[1] = dVar6;
    dVar6 = (this->dominant_hand_transform).Translation.XY.m128d_f64[0];
    dVar24 = (this->dominant_hand_transform).Translation.XY.m128d_f64[1];
    (this->Temp_Dom_Transform).Rotation.ZW.m128d_f64[0] = dVar7;
    (this->Temp_Dom_Transform).Rotation.ZW.m128d_f64[1] = dVar22;
    dVar7 = (this->dominant_hand_transform).Translation.ZW.m128d_f64[0];
    dVar22 = (this->dominant_hand_transform).Translation.ZW.m128d_f64[1];
    (this->Temp_Dom_Transform).Translation.XY.m128d_f64[0] = dVar6;
    (this->Temp_Dom_Transform).Translation.XY.m128d_f64[1] = dVar24;
    dVar6 = (this->dominant_hand_transform).Scale3D.XY.m128d_f64[0];
    dVar24 = (this->dominant_hand_transform).Scale3D.XY.m128d_f64[1];
    (this->Temp_Dom_Transform).Translation.ZW.m128d_f64[0] = dVar7;
    (this->Temp_Dom_Transform).Translation.ZW.m128d_f64[1] = dVar22;
    dVar7 = (this->dominant_hand_transform).Scale3D.ZW.m128d_f64[0];
    dVar22 = (this->dominant_hand_transform).Scale3D.ZW.m128d_f64[1];
    (this->Temp_Dom_Transform).Scale3D.XY.m128d_f64[0] = dVar6;
    (this->Temp_Dom_Transform).Scale3D.XY.m128d_f64[1] = dVar24;
    (this->Temp_Dom_Transform).Scale3D.ZW.m128d_f64[0] = dVar7;
    (this->Temp_Dom_Transform).Scale3D.ZW.m128d_f64[1] = dVar22;
  }
  if (this->owning_skeleton == (USkeletalMeshComponent *)0x0) {
    return;
  }
  ModifyWeaponTransform(this);
  if (this->perform_grab_weapon != true) {
    return;
  }
  fVar21 = UPrimitiveComponent::GetLastRenderTime((UPrimitiveComponent *)this->owning_skeleton);
  if (fVar21 <= 0.0) {
    pUVar15 = (UWorld *)this->owning_skeleton->_padding_;
    if (pUVar15 == (UWorld *)0x0) {
      pUVar15 = UActorComponent::GetWorld_Uncached((UActorComponent *)this->owning_skeleton);
    }
    bVar13 = UKismetSystemLibrary::IsServer((UObject *)pUVar15);
    if (!bVar13) goto LAB_14d35d761;
  }
  pUVar15 = *(UWorld **)&this->field_0xb0;
  if (pUVar15 == (UWorld *)0x0) {
    pUVar15 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  this->grab_counter = pUVar15->DeltaTimeSeconds + this->grab_counter;
LAB_14d35d761:
  if (__real_3e4ccccd < this->grab_counter) {
    DelayedGrabEvent(this);
  }
  if (__real_40400000 < this->grab_counter) {
    this->perform_grab_weapon = false;
  }
  return;
}

// Unfreeze_Elbows_Function @ 14d35d8e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Unfreeze_Elbows_Function
          (UDragonIKWeaponPhysicsComponent *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  uint uVar5;
  FName local_res10;
  FString local_18;
  
  if ((0 < (this->handbone_array_boneName).ArrayNum) &&
     (0 < (this->handbone_array_boneIndex).ArrayNum)) {
    local_res10 = param_1;
    pFVar4 = ::FName::ToString(&local_res10,&local_18);
    uVar3 = TArray<FString,TSizedDefaultAllocator<32>_>::Find(&this->handbone_array_boneName,pFVar4)
    ;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (-1 < (int)uVar3) {
      uVar5 = 0;
      if ((int)uVar3 < (this->handbone_array_boneIndex).ArrayNum) {
        uVar5 = ~uVar3 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar3 = *(uint *)((this->handbone_array_boneIndex).AllocatorInstance.Data +
                       (longlong)(int)uVar3 * 4);
      if ((-1 < (int)uVar3) && ((int)uVar3 < (this->arm_grabbing_status).ArrayNum)) {
        uVar5 = 0;
        if ((int)uVar3 < (this->Frozen_Elbow_Component_Status).ArrayNum) {
          uVar5 = ~uVar3 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (this->Frozen_Elbow_Component_Status).AllocatorInstance.Data[(int)uVar3] =
             (FScriptContainerElement)0x0;
        this->Weapon_Freeze_Bool = false;
      }
    }
  }
  return;
}

// Weapon_Transform_Override @ 14d35fed0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDragonIKWeaponPhysicsComponent::Weapon_Transform_Override
          (UDragonIKWeaponPhysicsComponent *this,TTransform<double> *param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (param_1->Rotation).XY.m128d_f64[1];
  dVar2 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar3 = (param_1->Rotation).ZW.m128d_f64[1];
  (this->overrided_weapon_transform).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (this->overrided_weapon_transform).Rotation.XY.m128d_f64[1] = dVar1;
  this->this_should_override_weapon_transform = param_2;
  dVar1 = (param_1->Translation).XY.m128d_f64[0];
  dVar4 = (param_1->Translation).XY.m128d_f64[1];
  (this->overrided_weapon_transform).Rotation.ZW.m128d_f64[0] = dVar2;
  (this->overrided_weapon_transform).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar2 = (param_1->Translation).ZW.m128d_f64[0];
  dVar3 = (param_1->Translation).ZW.m128d_f64[1];
  (this->overrided_weapon_transform).Translation.XY.m128d_f64[0] = dVar1;
  (this->overrided_weapon_transform).Translation.XY.m128d_f64[1] = dVar4;
  dVar1 = (param_1->Scale3D).XY.m128d_f64[0];
  dVar4 = (param_1->Scale3D).XY.m128d_f64[1];
  (this->overrided_weapon_transform).Translation.ZW.m128d_f64[0] = dVar2;
  (this->overrided_weapon_transform).Translation.ZW.m128d_f64[1] = dVar3;
  dVar2 = (param_1->Scale3D).ZW.m128d_f64[0];
  dVar3 = (param_1->Scale3D).ZW.m128d_f64[1];
  (this->overrided_weapon_transform).Scale3D.XY.m128d_f64[0] = dVar1;
  (this->overrided_weapon_transform).Scale3D.XY.m128d_f64[1] = dVar4;
  (this->overrided_weapon_transform).Scale3D.ZW.m128d_f64[0] = dVar2;
  (this->overrided_weapon_transform).Scale3D.ZW.m128d_f64[1] = dVar3;
  return;
}

