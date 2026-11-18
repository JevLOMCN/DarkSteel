// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 5

// FComponentWorldTransformChange @ 1496825b0

FComponentWorldTransformChange * __thiscall
FComponentWorldTransformChange::FComponentWorldTransformChange
          (FComponentWorldTransformChange *this,TTransform<double> *param_1,
          TTransform<double> *param_2)

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
  double dVar15;
  
  this->_padding_ = (longlong)&___7FComponentWorldTransformChange__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->FromWorldTransform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->FromWorldTransform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->FromWorldTransform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->FromWorldTransform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->FromWorldTransform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->FromWorldTransform).Scale3D.ZW.m128d_f64 = auVar8;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ToWorldTransform).Rotation.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar2,0);
  auVar10._0_8_ = (double)fVar1;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ToWorldTransform).Rotation.ZW.m128d_f64 = auVar10;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ToWorldTransform).Translation.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar2,0);
  auVar12._0_8_ = (double)fVar1;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ToWorldTransform).Translation.ZW.m128d_f64 = auVar12;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ToWorldTransform).Scale3D.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar2,0);
  auVar14._0_8_ = (double)fVar1;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ToWorldTransform).Scale3D.ZW.m128d_f64 = auVar14;
  *(undefined8 *)&this->OnChangeAppliedFunc = 0;
  *(undefined8 *)&(this->OnChangeAppliedFunc).field_0x28 = 0;
  dVar15 = (param_1->Rotation).XY.m128d_f64[1];
  (this->FromWorldTransform).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (this->FromWorldTransform).Rotation.XY.m128d_f64[1] = dVar15;
  dVar15 = (param_1->Rotation).ZW.m128d_f64[1];
  (this->FromWorldTransform).Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  (this->FromWorldTransform).Rotation.ZW.m128d_f64[1] = dVar15;
  dVar15 = (param_1->Translation).XY.m128d_f64[1];
  (this->FromWorldTransform).Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  (this->FromWorldTransform).Translation.XY.m128d_f64[1] = dVar15;
  dVar15 = (param_1->Translation).ZW.m128d_f64[1];
  (this->FromWorldTransform).Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  (this->FromWorldTransform).Translation.ZW.m128d_f64[1] = dVar15;
  dVar15 = (param_1->Scale3D).XY.m128d_f64[1];
  (this->FromWorldTransform).Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  (this->FromWorldTransform).Scale3D.XY.m128d_f64[1] = dVar15;
  dVar15 = (param_1->Scale3D).ZW.m128d_f64[1];
  (this->FromWorldTransform).Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  (this->FromWorldTransform).Scale3D.ZW.m128d_f64[1] = dVar15;
  dVar15 = (param_2->Rotation).XY.m128d_f64[1];
  (this->ToWorldTransform).Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  (this->ToWorldTransform).Rotation.XY.m128d_f64[1] = dVar15;
  dVar15 = (param_2->Rotation).ZW.m128d_f64[1];
  (this->ToWorldTransform).Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  (this->ToWorldTransform).Rotation.ZW.m128d_f64[1] = dVar15;
  dVar15 = (param_2->Translation).XY.m128d_f64[1];
  (this->ToWorldTransform).Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  (this->ToWorldTransform).Translation.XY.m128d_f64[1] = dVar15;
  dVar15 = (param_2->Translation).ZW.m128d_f64[1];
  (this->ToWorldTransform).Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  (this->ToWorldTransform).Translation.ZW.m128d_f64[1] = dVar15;
  dVar15 = (param_2->Scale3D).XY.m128d_f64[1];
  (this->ToWorldTransform).Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  (this->ToWorldTransform).Scale3D.XY.m128d_f64[1] = dVar15;
  dVar15 = (param_2->Scale3D).ZW.m128d_f64[1];
  (this->ToWorldTransform).Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  (this->ToWorldTransform).Scale3D.ZW.m128d_f64[1] = dVar15;
  return this;
}

// FComponentWorldTransformChange @ 1496826f0

FComponentWorldTransformChange * __thiscall
FComponentWorldTransformChange::FComponentWorldTransformChange(FComponentWorldTransformChange *this)

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
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  this->_padding_ = (longlong)&___7FComponentWorldTransformChange__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->FromWorldTransform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->FromWorldTransform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->FromWorldTransform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->FromWorldTransform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->FromWorldTransform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->FromWorldTransform).Scale3D.ZW.m128d_f64 = auVar8;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ToWorldTransform).Rotation.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar2,0);
  auVar10._0_8_ = (double)fVar1;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ToWorldTransform).Rotation.ZW.m128d_f64 = auVar10;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ToWorldTransform).Translation.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar2,0);
  auVar12._0_8_ = (double)fVar1;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ToWorldTransform).Translation.ZW.m128d_f64 = auVar12;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ToWorldTransform).Scale3D.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar2,0);
  auVar14._0_8_ = (double)fVar1;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ToWorldTransform).Scale3D.ZW.m128d_f64 = auVar14;
  *(undefined8 *)&this->OnChangeAppliedFunc = 0;
  *(undefined8 *)&(this->OnChangeAppliedFunc).field_0x28 = 0;
  *&(this->ToWorldTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->ToWorldTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->ToWorldTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->ToWorldTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->ToWorldTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->ToWorldTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  dVar15 = (this->ToWorldTransform).Rotation.XY.m128d_f64[1];
  dVar16 = (this->ToWorldTransform).Rotation.ZW.m128d_f64[0];
  dVar17 = (this->ToWorldTransform).Rotation.ZW.m128d_f64[1];
  (this->FromWorldTransform).Rotation.XY.m128d_f64[0] =
       (this->ToWorldTransform).Rotation.XY.m128d_f64[0];
  (this->FromWorldTransform).Rotation.XY.m128d_f64[1] = dVar15;
  dVar15 = (this->ToWorldTransform).Translation.XY.m128d_f64[0];
  dVar18 = (this->ToWorldTransform).Translation.XY.m128d_f64[1];
  (this->FromWorldTransform).Rotation.ZW.m128d_f64[0] = dVar16;
  (this->FromWorldTransform).Rotation.ZW.m128d_f64[1] = dVar17;
  dVar16 = (this->ToWorldTransform).Translation.ZW.m128d_f64[0];
  dVar17 = (this->ToWorldTransform).Translation.ZW.m128d_f64[1];
  (this->FromWorldTransform).Translation.XY.m128d_f64[0] = dVar15;
  (this->FromWorldTransform).Translation.XY.m128d_f64[1] = dVar18;
  dVar15 = (this->ToWorldTransform).Scale3D.XY.m128d_f64[0];
  dVar18 = (this->ToWorldTransform).Scale3D.XY.m128d_f64[1];
  (this->FromWorldTransform).Translation.ZW.m128d_f64[0] = dVar16;
  (this->FromWorldTransform).Translation.ZW.m128d_f64[1] = dVar17;
  dVar16 = (this->ToWorldTransform).Scale3D.ZW.m128d_f64[0];
  dVar17 = (this->ToWorldTransform).Scale3D.ZW.m128d_f64[1];
  (this->FromWorldTransform).Scale3D.XY.m128d_f64[0] = dVar15;
  (this->FromWorldTransform).Scale3D.XY.m128d_f64[1] = dVar18;
  (this->FromWorldTransform).Scale3D.ZW.m128d_f64[0] = dVar16;
  (this->FromWorldTransform).Scale3D.ZW.m128d_f64[1] = dVar17;
  return this;
}

// Apply @ 149691f80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FComponentWorldTransformChange::Apply(FComponentWorldTransformChange *this,UObject *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  USceneComponent *this_00;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  UObject *local_res18;
  FComponentWorldTransformChange *local_res20;
  
  this_00 = CastChecked<USceneComponent,UObject>(param_1);
  USceneComponent::SetWorldTransform(this_00,&this->ToWorldTransform,false,(FHitResult *)0x0,None);
  if (*(void **)&this->OnChangeAppliedFunc != (void *)0x0) {
    local_res8[0] = 1;
    local_res18 = param_1;
    local_res20 = this;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->OnChangeAppliedFunc);
    pcVar1 = *(code **)&this->OnChangeAppliedFunc;
    plVar2 = *(longlong **)&(this->OnChangeAppliedFunc).field_0x28;
    plVar4 = (longlong *)&(this->OnChangeAppliedFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar4 = plVar2;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar3,&local_res20,&local_res18,local_res8);
  }
  return;
}

// Revert @ 1496bbca0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FComponentWorldTransformChange::Revert(FComponentWorldTransformChange *this,UObject *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  USceneComponent *this_00;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  UObject *local_res18;
  FComponentWorldTransformChange *local_res20;
  
  this_00 = CastChecked<USceneComponent,UObject>(param_1);
  USceneComponent::SetWorldTransform(this_00,&this->FromWorldTransform,false,(FHitResult *)0x0,None)
  ;
  if (*(void **)&this->OnChangeAppliedFunc != (void *)0x0) {
    local_res8[0] = 0;
    local_res18 = param_1;
    local_res20 = this;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->OnChangeAppliedFunc);
    pcVar1 = *(code **)&this->OnChangeAppliedFunc;
    plVar2 = *(longlong **)&(this->OnChangeAppliedFunc).field_0x28;
    plVar4 = (longlong *)&(this->OnChangeAppliedFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar4 = plVar2;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar3,&local_res20,&local_res18,local_res8);
  }
  return;
}

// ToString @ 1496c3240

FString * __thiscall
FComponentWorldTransformChange::ToString
          (FComponentWorldTransformChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Transform Change");
  return __return_storage_ptr__;
}

