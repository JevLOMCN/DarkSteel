// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 11

// StaticStruct @ 14a381220

UScriptStruct * __cdecl FControlRigControlPose::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigControlPose.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigControlPose.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigControlPose,(UObject *)pUVar1,
                         L"ControlRigControlPose");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigControlPose.OuterSingleton;
}

// operator() @ 14a3bf9e0

void __thiscall
`FControlRigControlPose::BlendWithInitialPoses'::__l2::<lambda_1>::operator()
          (void *this,TTransform<double> *param_1,TTransform<double> *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [12];
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  TQuat<double> *pTVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double dVar20;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uVar21;
  undefined1 auVar19 [16];
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  uint uVar26;
  double dVar25;
  uint uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  TQuat<double> local_e8;
  TQuat<double> local_c8;
  TQuat<double> local_a8 [5];
  
  dVar16 = (param_2->Translation).XY.m128d_f64[0];
  dVar22 = (param_2->Translation).XY.m128d_f64[1];
  if (*(char *)this == '\0') {
    local_a8[0].X = (param_2->Rotation).XY.m128d_f64[0];
    local_a8[0].Y = (param_2->Rotation).XY.m128d_f64[1];
    local_a8[0].Z = (param_2->Rotation).ZW.m128d_f64[0];
    local_a8[0].W = (param_2->Rotation).ZW.m128d_f64[1];
    dVar25 = (param_2->Translation).ZW.m128d_f64[0];
    dVar4 = (param_1->Translation).XY.m128d_f64[0];
    dVar5 = (param_1->Translation).XY.m128d_f64[1];
    dVar6 = (param_1->Translation).ZW.m128d_f64[0];
    dVar3 = (double)*(float *)((longlong)this + 4);
    local_c8.X = (param_1->Rotation).XY.m128d_f64[0];
    local_c8.Y = (param_1->Rotation).XY.m128d_f64[1];
    auVar23._8_8_ = 0;
    auVar23._0_8_ = dVar3;
    local_c8.Z = (param_1->Rotation).ZW.m128d_f64[0];
    local_c8.W = (param_1->Rotation).ZW.m128d_f64[1];
    pTVar12 = UE::Math::TQuat<double>::Slerp_NotNormalized(&local_e8,&local_c8,local_a8,dVar3);
    dVar2 = pTVar12->X;
    dVar9 = pTVar12->Y;
    dVar10 = pTVar12->Z;
    dVar11 = pTVar12->W;
    dVar15 = dVar10 * dVar10 + dVar2 * dVar2;
    dVar20 = dVar11 * dVar11 + dVar9 * dVar9;
    dVar6 = (dVar25 - dVar6) * dVar3 + dVar6;
    dVar25 = dVar20 + dVar15;
    dVar15 = dVar15 + dVar20;
    dVar4 = (dVar16 - dVar4) * dVar3 + dVar4;
    auVar24._8_4_ = SUB84(dVar15,0);
    auVar24._0_8_ = dVar25;
    auVar24._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    auVar24 = sqrtpd(auVar23,auVar24);
    uVar13 = -(ulonglong)(__real_3e45798ee0000000 <= dVar25);
    uVar14 = -(ulonglong)(__real_3e45798ee0000000 <= dVar15);
    auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar24);
    uVar26 = (uint)(uVar13 >> 0x20);
    uVar27 = (uint)(uVar14 >> 0x20);
    auVar29._0_8_ = uVar13 & (ulonglong)(auVar28._0_8_ * dVar2);
    uVar8 = uVar14 & (ulonglong)(auVar28._8_8_ * dVar9);
    auVar29._8_4_ = (undefined4)uVar8;
    auVar29._12_4_ = (undefined4)(uVar8 >> 0x20);
    auVar17._0_4_ = ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar17._4_4_ =
         ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar17._8_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar17._12_4_ =
         ~uVar27 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    auVar28 = auVar29 | auVar17;
    auVar24 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar24);
    dVar25 = (param_1->Scale3D).ZW.m128d_f64[0];
    auVar18._0_8_ = (ulonglong)(auVar24._0_8_ * dVar10) & uVar13;
    uVar8 = (ulonglong)(auVar24._8_8_ * dVar11) & uVar14;
    auVar18._8_4_ = (undefined4)uVar8;
    auVar18._12_4_ = (undefined4)(uVar8 >> 0x20);
    auVar30._0_4_ = ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar30._4_4_ =
         ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar30._8_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar30._12_4_ =
         ~uVar27 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    auVar31 = auVar30 | auVar18;
    dVar15 = (param_1->Scale3D).XY.m128d_f64[0];
    dVar16 = (param_1->Scale3D).XY.m128d_f64[1];
    dVar2 = (double)*(float *)((longlong)this + 4);
    dVar5 = (dVar22 - dVar5) * dVar3 + dVar5;
    dVar15 = ((param_2->Scale3D).XY.m128d_f64[0] - dVar15) * dVar2 + dVar15;
    dVar16 = ((param_2->Scale3D).XY.m128d_f64[1] - dVar16) * dVar2 + dVar16;
    dVar25 = ((param_2->Scale3D).ZW.m128d_f64[0] - dVar25) * dVar2 + dVar25;
  }
  else {
    dVar6 = (double)*(float *)((longlong)this + 4);
    dVar4 = dVar16 * dVar6 + (param_1->Translation).XY.m128d_f64[0];
    local_a8[0].Z = (param_2->Rotation).ZW.m128d_f64[0];
    local_a8[0].W = (param_2->Rotation).ZW.m128d_f64[1];
    dVar5 = dVar22 * dVar6 + (param_1->Translation).XY.m128d_f64[1];
    local_a8[0].X = (param_2->Rotation).XY.m128d_f64[0];
    local_a8[0].Y = (param_2->Rotation).XY.m128d_f64[1];
    dVar6 = (param_2->Translation).ZW.m128d_f64[0] * dVar6 + (param_1->Translation).ZW.m128d_f64[0];
    UE::Math::TQuat<double>::Rotator(local_a8,(TRotator<double> *)&local_e8);
    local_a8[0].X = (param_1->Rotation).XY.m128d_f64[0];
    local_a8[0].Y = (param_1->Rotation).XY.m128d_f64[1];
    local_a8[0].Z = (param_1->Rotation).ZW.m128d_f64[0];
    local_a8[0].W = (param_1->Rotation).ZW.m128d_f64[1];
    UE::Math::TQuat<double>::Rotator(local_a8,(TRotator<double> *)&local_c8);
    dVar16 = (double)*(float *)((longlong)this + 4);
    local_e8.X = local_e8.X * dVar16 + local_c8.X;
    local_e8.Y = local_e8.Y * dVar16 + local_c8.Y;
    uVar21 = 0;
    local_e8.Z = local_e8.Z * dVar16 + local_c8.Z;
    pTVar12 = UE::Math::TRotator<double>::Quaternion((TRotator<double> *)&local_e8,local_a8);
    dVar15 = (param_1->Scale3D).XY.m128d_f64[0];
    dVar16 = (param_1->Scale3D).XY.m128d_f64[1];
    auVar24 = *(undefined1 (*) [16])(param_2->Scale3D).XY.m128d_f64;
    dVar25 = (param_1->Scale3D).ZW.m128d_f64[0];
    auVar7._4_8_ = uVar21;
    auVar7._0_4_ = auVar24._4_4_;
    auVar19._0_8_ = auVar7._0_8_ << 0x20;
    auVar19._8_4_ = auVar24._8_4_;
    auVar19._12_4_ = auVar24._12_4_;
    auVar28._0_8_ = pTVar12->X;
    auVar28._8_8_ = pTVar12->Y;
    auVar31._0_8_ = pTVar12->Z;
    auVar31._8_8_ = pTVar12->W;
    dVar22 = (double)*(float *)((longlong)this + 4);
    dVar15 = (auVar24._0_8_ - dVar15) * dVar22 + dVar15;
    dVar25 = dVar25 + ((param_2->Scale3D).ZW.m128d_f64[0] - dVar25) * dVar22;
    dVar16 = (auVar19._8_8_ - dVar16) * dVar22 + dVar16;
  }
  *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64 = auVar28;
  *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64 = auVar31;
  (param_2->Translation).XY.m128d_f64[0] = dVar4;
  (param_2->Translation).XY.m128d_f64[1] = dVar5;
  (param_2->Translation).ZW.m128d_f64[0] = dVar6;
  (param_2->Translation).ZW.m128d_f64[1] = 0.0;
  auVar1._8_4_ = SUB84(dVar16,0);
  auVar1._0_8_ = dVar15;
  auVar1._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  *(undefined1 (*) [16])(param_2->Scale3D).XY.m128d_f64 = auVar1;
  (param_2->Scale3D).ZW.m128d_f64[0] = dVar25;
  (param_2->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

// BlendWithInitialPoses @ 14a3ec2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigControlPose::BlendWithInitialPoses
          (FControlRigControlPose *this,FControlRigControlPose *param_1,UControlRig *param_2,
          bool param_3,bool param_4,float param_5,bool param_6)

{
  undefined8 uVar1;
  FScriptContainerElement FVar2;
  uint uVar3;
  longlong lVar4;
  URigHierarchy *this_00;
  code *pcVar5;
  FName FVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FRigControlCopy *pFVar11;
  TTuple<FName,int> *pTVar12;
  FRigElementKey *pFVar13;
  FMatchedControls *this_01;
  FName *pFVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint *puVar17;
  FScriptContainerElement *pFVar18;
  longlong *plVar19;
  TTransform<double> *pTVar20;
  bool bVar21;
  longlong *plVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStackY_498 [32];
  FControlRigPoseMirrorTable local_457;
  undefined1 local_456;
  undefined1 local_455;
  longlong *local_450;
  bool local_448 [4];
  float local_444;
  uint local_440;
  longlong *local_438;
  ulonglong local_430;
  FRigControlModifiedContext local_428;
  undefined8 local_410;
  undefined8 local_400;
  FRigElementKey local_3f0;
  FControlRigControlPose *local_3e0;
  FControlRigControlPose *local_3d8;
  FRigElementKey local_3c8;
  FRigElementKey local_3b8;
  FRigElementKey local_3a8;
  FRigElementKey local_398;
  IRigDependenciesProvider local_388;
  float local_378;
  float fStack_374;
  ulonglong uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  ulonglong local_2f4 [16];
  undefined4 local_274;
  FRigElementKey local_270 [2];
  TTransform<double> local_258;
  TTransform<double> local_1f8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  TTransform<double> local_d8;
  ulonglong local_78;
  
  if (param_2 != (UControlRig *)0x0) {
    local_78 = __security_cookie.value ^ (ulonglong)auStackY_498;
    local_444 = param_5;
    local_448[0] = param_6;
    if ((param_1->CopyOfControls).ArrayNum != 0) {
      local_428.EventName.Number = 0;
      local_428.bConstraintUpdate = false;
      local_438 = (longlong *)0x0;
      local_430 = 0;
      local_428.KeyMask = 0x1ff;
      local_428.LocalTime = 3.4028235e+38;
      local_428.EventName.ComparisonIndex.Value = 0;
      local_455 = param_3;
      local_428.SetKey = param_3;
      local_3e0 = param_1;
      local_3d8 = this;
      (**(code **)(param_2->_padding_ + 0x420))(param_2,&local_438);
      uVar15 = (ulonglong)(int)(uint)local_430;
      local_440 = (uint)local_430;
      plVar19 = local_438 + uVar15;
      uVar16 = uVar15;
      plVar22 = local_438;
      local_450 = plVar19;
      while( true ) {
        if ((int)uVar15 != (int)uVar16) {
          local_456 = 0;
          `TCheckedPointerIterator<FRigControlElement_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_456);
        }
        if (plVar22 == plVar19) break;
        lVar4 = *plVar22;
        cVar7 = (**(code **)(param_2->_padding_ + 0x440))(param_2,lVar4 + 0x14);
        if ((cVar7 != '\0') &&
           (pFVar11 = FControlRigPoseMirrorTable::GetControl
                                (&local_457,param_2,local_3d8,*(FName *)(lVar4 + 0x14),param_4),
           pFVar11 != (FRigControlCopy *)0x0)) {
          pTVar12 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                            *)&param_1->CopyOfControlsNameToIndex,*(FName *)(lVar4 + 0x14));
          puVar17 = (uint *)&pTVar12->field_0x8;
          if (pTVar12 == (TTuple<FName,int> *)0x0) {
            puVar17 = (uint *)0x0;
          }
          plVar19 = local_450;
          if (puVar17 != (uint *)0x0) {
            uVar3 = *puVar17;
            uVar9 = 0;
            if ((int)uVar3 < (param_1->CopyOfControls).ArrayNum) {
              uVar9 = ~uVar3 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar18 = (param_1->CopyOfControls).AllocatorInstance.Data +
                      (longlong)(int)uVar3 * 0x220;
            plVar19 = local_450;
            if ((pFVar18 != (FScriptContainerElement *)0x0) &&
               (FVar2 = (FScriptContainerElement)pFVar11->ControlType, pFVar18[8] == FVar2)) {
              if ((byte)((char)FVar2 - Position) < 6) {
                bVar8 = false;
                URigHierarchy::GetActiveParent
                          ((param_2->DynamicHierarchy).field0_0x0.DebugPtr,&local_3f0,
                           (FRigElementKey *)(lVar4 + 0x10),true);
                pFVar13 = URigHierarchy::GetDefaultParentKey(local_270);
                FVar6.Number = local_3f0.Name.Number;
                FVar6.ComparisonIndex.Value = local_3f0.Name.ComparisonIndex.Value;
                if ((FVar6 != pFVar13->Name) || (local_3f0.Type != pFVar13->Type)) {
                  local_3c8._0_8_ = *(undefined8 *)(lVar4 + 0x10);
                  local_3c8.Name.Number = *(uint *)(lVar4 + 0x18);
                  bVar8 = true;
                  URigHierarchy::SwitchToDefaultParent
                            ((param_2->DynamicHierarchy).field0_0x0.DebugPtr,&local_3c8,false,true);
                  (**(code **)(param_2->_padding_ + 0x2d0))(param_2);
                }
                if (param_4) {
                  uVar30 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                  uVar31 = (undefined4)
                           ((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
                  ;
                  local_1f8.Rotation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[2];
                  local_1f8.Rotation.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[3];
                  local_1f8.Translation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                  local_1f8.Translation.XY.m128d_f64[1] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[1];
                  local_1f8.Translation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                  local_1f8.Translation.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                  uVar27 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
                  uVar28 = (undefined4)
                           ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
                  ;
                  uVar24 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
                  uVar25 = (undefined4)
                           ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20)
                  ;
                  local_138.Rotation.XY.m128d_f64[1]._0_4_ = uVar30;
                  local_138.Rotation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[0];
                  local_138.Rotation.XY.m128d_f64[1]._4_4_ = uVar31;
                  local_138.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar24;
                  local_138.Scale3D.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[2];
                  local_138.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar25;
                  local_1f8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar24;
                  local_1f8.Scale3D.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[2];
                  local_1f8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar25;
                  local_138.Scale3D.XY.m128d_f64[1]._0_4_ = uVar27;
                  local_138.Scale3D.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[0];
                  local_138.Scale3D.XY.m128d_f64[1]._4_4_ = uVar28;
                  local_1f8.Rotation.XY.m128d_f64[1]._0_4_ = uVar30;
                  local_1f8.Rotation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[0];
                  local_1f8.Rotation.XY.m128d_f64[1]._4_4_ = uVar31;
                  local_1f8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar27;
                  local_1f8.Scale3D.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[0];
                  local_1f8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar28;
                  local_138.Rotation.ZW.m128d_f64[0] = local_1f8.Rotation.ZW.m128d_f64[0];
                  local_138.Rotation.ZW.m128d_f64[1] = local_1f8.Rotation.ZW.m128d_f64[1];
                  local_138.Translation.XY.m128d_f64[0] = local_1f8.Translation.XY.m128d_f64[0];
                  local_138.Translation.XY.m128d_f64[1] = local_1f8.Translation.XY.m128d_f64[1];
                  local_138.Translation.ZW.m128d_f64 = local_1f8.Translation.ZW.m128d_f64;
                  FControlRigPoseMirrorTable::SetUpMirrorTable(&local_457,param_2);
                  this_01 = TMapBase<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,0>_>
                            ::Find((TMapBase<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,0>_>
                                    *)&FControlRigPoseMirrorTable::MatchedControls,param_2);
                  if (((this_01 == (FMatchedControls *)0x0) ||
                      (*(int *)&(this_01->Match).field_0x8 - *(int *)&(this_01->Match).field_0x34 <
                       1)) || (pFVar14 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                                         ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                                                 *)this_01,pFVar11->Name), pFVar14 == (FName *)0x0))
                  {
                    bVar21 = false;
                  }
                  else {
                    bVar21 = true;
                  }
                  FControlRigPoseMirrorTable::GetMirrorTransform
                            (&local_457,pFVar11,true,bVar21,&local_138,&local_1f8);
                  `FControlRigControlPose::BlendWithInitialPoses'::__l2::<lambda_1>::operator()
                            (local_448,(TTransform<double> *)(pFVar18 + 0x1c0),&local_138);
                  `FControlRigControlPose::BlendWithInitialPoses'::__l2::<lambda_1>::operator()
                            (local_448,(TTransform<double> *)(pFVar18 + 0x160),&local_1f8);
                  pTVar20 = &local_1f8;
                }
                else {
                  local_198.Rotation.XY.m128d_f64[0] =
                       (pFVar11->LocalTransform).Rotation.XY.m128d_f64[0];
                  local_198.Rotation.XY.m128d_f64[1] =
                       (pFVar11->LocalTransform).Rotation.XY.m128d_f64[1];
                  local_198.Rotation.ZW.m128d_f64[0] =
                       (pFVar11->LocalTransform).Rotation.ZW.m128d_f64[0];
                  local_198.Rotation.ZW.m128d_f64[1] =
                       (pFVar11->LocalTransform).Rotation.ZW.m128d_f64[1];
                  local_198.Translation.XY.m128d_f64[0] =
                       (pFVar11->LocalTransform).Translation.XY.m128d_f64[0];
                  local_198.Translation.XY.m128d_f64[1] =
                       (pFVar11->LocalTransform).Translation.XY.m128d_f64[1];
                  local_198.Translation.ZW.m128d_f64[0] =
                       (pFVar11->LocalTransform).Translation.ZW.m128d_f64[0];
                  local_198.Translation.ZW.m128d_f64[1] =
                       (pFVar11->LocalTransform).Translation.ZW.m128d_f64[1];
                  local_198.Scale3D.XY.m128d_f64[0] =
                       (pFVar11->LocalTransform).Scale3D.XY.m128d_f64[0];
                  local_198.Scale3D.XY.m128d_f64[1] =
                       (pFVar11->LocalTransform).Scale3D.XY.m128d_f64[1];
                  local_198.Scale3D.ZW.m128d_f64[0] =
                       (pFVar11->LocalTransform).Scale3D.ZW.m128d_f64[0];
                  local_198.Scale3D.ZW.m128d_f64[1] =
                       (pFVar11->LocalTransform).Scale3D.ZW.m128d_f64[1];
                  local_258.Rotation.XY.m128d_f64[0] = *(double *)(pFVar18 + 0x160);
                  local_258.Rotation.XY.m128d_f64[1] = *(double *)(pFVar18 + 0x168);
                  local_258.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar18 + 0x170);
                  local_258.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar18 + 0x178);
                  local_258.Translation.XY.m128d_f64[0] = *(double *)(pFVar18 + 0x180);
                  local_258.Translation.XY.m128d_f64[1] = *(double *)(pFVar18 + 0x188);
                  local_258.Translation.ZW.m128d_f64[0] = *(double *)(pFVar18 + 400);
                  local_258.Translation.ZW.m128d_f64[1] = *(double *)(pFVar18 + 0x198);
                  local_258.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar18 + 0x1a0);
                  local_258.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar18 + 0x1a8);
                  local_258.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar18 + 0x1b0);
                  local_258.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar18 + 0x1b8);
                  `FControlRigControlPose::BlendWithInitialPoses'::__l2::<lambda_1>::operator()
                            (local_448,&local_258,&local_198);
                  pTVar20 = &local_198;
                }
                (**(code **)(param_2->_padding_ + 0x400))(param_2,lVar4 + 0x14,pTVar20);
                plVar19 = local_450;
                param_1 = local_3e0;
                if (bVar8) {
                  this_00 = (param_2->DynamicHierarchy).field0_0x0.DebugPtr;
                  local_3b8._0_8_ = *(undefined8 *)(lVar4 + 0x10);
                  local_3b8.Name.Number = *(uint *)(lVar4 + 0x18);
                  iVar10 = URigHierarchy::GetIndex(this_00,&local_3b8,true);
                  URigHierarchy::GetGlobalTransformByIndex(this_00,&local_d8,iVar10,false);
                  local_388.bInteractiveDialogEnabled = false;
                  local_388._9_7_ = 0;
                  local_388._padding_ = (longlong)&___7FEmptyRigDependenciesProvider__6B_;
                  local_398._0_8_ = *(undefined8 *)(lVar4 + 0x10);
                  local_3a8.Name.Number = local_3f0.Name.Number;
                  local_398.Name.Number = *(uint *)(lVar4 + 0x18);
                  URigHierarchy::SwitchToParent
                            ((param_2->DynamicHierarchy).field0_0x0.DebugPtr,&local_398,&local_3a8,
                             false,true,&local_388,(FString *)0x0);
                  UControlRig::SetControlGlobalTransform
                            (param_2,(FName *)(lVar4 + 0x14),&local_d8,true,&local_428,false,false,
                             true);
                  plVar19 = local_450;
                  param_1 = local_3e0;
                }
              }
              else if ((FVar2 == (FScriptContainerElement)0x1) ||
                      (FVar2 == (FScriptContainerElement)0xa)) {
                fVar29 = (pFVar11->Value).FloatStorage.Float00;
                if (!param_6) {
                  fVar29 = fVar29 - *(float *)(pFVar18 + 0x18);
                }
                local_2f4[1] = 0;
                local_274 = 1;
                local_2f4[2] = 0;
                local_2f4[3] = 0;
                local_2f4[0] = (ulonglong)(uint)(fVar29 * param_5 + *(float *)(pFVar18 + 0x18));
                local_2f4[4] = 0;
                local_2f4[5] = 0;
                local_2f4[6] = 0;
                local_2f4[7] = 0;
                local_2f4[8] = 0;
                local_2f4[9] = 0;
                local_2f4[10] = 0;
                local_2f4[0xb] = 0;
                local_2f4[0xc] = 0;
                local_2f4[0xd] = 0;
                local_2f4[0xe] = 0;
                local_2f4[0xf] = 0;
                (**(code **)(param_2->_padding_ + 0x3f0))(param_2,lVar4 + 0x14,local_2f4,1);
                plVar19 = local_450;
              }
              else if (FVar2 == (FScriptContainerElement)0x3) {
                uVar1 = *(undefined8 *)(pFVar18 + 0x18);
                fVar29 = (pFVar11->Value).FloatStorage.Float02;
                local_410._0_4_ = (pFVar11->Value).FloatStorage.Float00;
                local_410._4_4_ = (pFVar11->Value).FloatStorage.Float01;
                local_400._0_4_ = (float)uVar1;
                local_400._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
                fVar23 = (float)(undefined4)local_410;
                fVar26 = (float)local_410._4_4_;
                if (!param_6) {
                  fVar23 = (float)(undefined4)local_410 - (float)local_400;
                  fVar26 = (float)local_410._4_4_ - local_400._4_4_;
                  fVar29 = fVar29 - *(float *)(pFVar18 + 0x20);
                }
                local_2f8 = 1;
                uStack_370 = (ulonglong)(uint)(fVar29 * param_5 + *(float *)(pFVar18 + 0x20));
                _local_378 = CONCAT44(fVar26 * param_5 + local_400._4_4_,
                                      fVar23 * param_5 + (float)local_400);
                local_368 = 0;
                uStack_360 = 0;
                local_358 = 0;
                uStack_350 = 0;
                local_348 = 0;
                uStack_340 = 0;
                local_338 = 0;
                uStack_330 = 0;
                local_328 = 0;
                uStack_320 = 0;
                local_318 = 0;
                uStack_310 = 0;
                local_308 = 0;
                uStack_300 = 0;
                local_400 = uVar1;
                (**(code **)(param_2->_padding_ + 0x3f0))(param_2,lVar4 + 0x14,&local_378,1);
                plVar19 = local_450;
              }
            }
          }
        }
        uVar15 = local_430 & 0xffffffff;
        plVar22 = plVar22 + 1;
        uVar16 = (ulonglong)local_440;
      }
      if (local_438 != (longlong *)0x0) {
        FMemory::Free(local_438);
      }
    }
  }
  return;
}

// ContainsName @ 14a3f56b0

bool __thiscall FControlRigControlPose::ContainsName(FControlRigControlPose *this,FName *param_1)

{
  TTuple<FName,int> *pTVar1;
  int *piVar2;
  
  pTVar1 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&this->CopyOfControlsNameToIndex,*param_1);
  piVar2 = (int *)&pTVar1->field_0x8;
  if (pTVar1 == (TTuple<FName,int> *)0x0) {
    piVar2 = (int *)0x0;
  }
  if ((piVar2 != (int *)0x0) && (-1 < *piVar2)) {
    return true;
  }
  return false;
}

// GetControlNames @ 14a412740

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FControlRigControlPose::GetControlNames
          (FControlRigControlPose *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar2 = (this->CopyOfControls).ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar2,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar3 = (this->CopyOfControls).ArrayNum;
  pFVar11 = (this->CopyOfControls).AllocatorInstance.Data;
  pFVar10 = pFVar11 + (longlong)iVar3 * 0x220;
  while( true ) {
    if ((this->CopyOfControls).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRigControlCopy_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar11 == pFVar10) break;
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar4 <= pFVar11) && (pFVar11 < pFVar4 + (longlong)*piVar1 * 8)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar9;
      }
    }
    iVar8 = __return_storage_ptr__->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar8 + 1;
    uVar5 = *(undefined8 *)pFVar11;
    pFVar11 = pFVar11 + 0x220;
    *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) = uVar5;
  }
  return __return_storage_ptr__;
}

// PastePose @ 14a4321a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigControlPose::PastePose
          (FControlRigControlPose *this,UControlRig *param_1,bool param_2,bool param_3)

{
  if (param_1 != (UControlRig *)0x0) {
    PastePoseInternal(this,param_1,param_2,param_3,&this->CopyOfControls);
    (**(code **)(param_1->_padding_ + 0x2d0))(param_1);
    PastePoseInternal(this,param_1,param_2,param_3,&this->CopyOfControls);
  }
  return;
}

// PastePoseInternal @ 14a432410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigControlPose::PastePoseInternal
          (FControlRigControlPose *this,UControlRig *param_1,bool param_2,bool param_3,
          TArray<FRigControlCopy,TSizedDefaultAllocator<32>_> *param_4)

{
  longlong lVar1;
  URigHierarchy *this_00;
  FName FVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  FRigControlCopy *pFVar9;
  FRigElementKey *pFVar10;
  FMatchedControls *this_01;
  FName *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  bool bVar15;
  longlong *plVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStackY_258 [32];
  FControlRigPoseMirrorTable local_217 [7];
  FRigControlModifiedContext local_210;
  uint local_1f8;
  longlong *local_1f0;
  ulonglong local_1e8;
  FRigElementKey local_1e0;
  FControlRigControlPose *local_1d0;
  longlong *local_1c8;
  FRigElementKey local_1b8;
  FRigElementKey local_1a8;
  FRigElementKey local_198;
  FRigElementKey local_188;
  IRigDependenciesProvider local_178;
  FRigElementKey local_168;
  TTransform<double> local_158;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  if (param_1 != (UControlRig *)0x0) {
    local_68 = __security_cookie.value ^ (ulonglong)auStackY_258;
    local_210.EventName.Number = 0;
    local_210.bConstraintUpdate = false;
    local_1f0 = (longlong *)0x0;
    local_1e8 = 0;
    local_210.KeyMask = 0x1ff;
    local_210.LocalTime = 3.4028235e+38;
    local_210.EventName.ComparisonIndex.Value = 0;
    local_210.SetKey = param_2;
    local_1d0 = this;
    (**(code **)(param_1->_padding_ + 0x420))(param_1,&local_1f0);
    uVar12 = (ulonglong)(int)(uint)local_1e8;
    local_1f8 = (uint)local_1e8;
    local_1c8 = local_1f0 + uVar12;
    uVar13 = uVar12;
    plVar16 = local_1f0;
    while( true ) {
      plVar6 = local_1c8;
      if ((int)uVar12 != (int)uVar13) {
        `TCheckedPointerIterator<FRigControlElement_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_217);
      }
      if (plVar16 == plVar6) break;
      lVar1 = *plVar16;
      cVar7 = (**(code **)(param_1->_padding_ + 0x440))(param_1,lVar1 + 0x14);
      if ((cVar7 == '\0') ||
         (pFVar9 = FControlRigPoseMirrorTable::GetControl
                             (local_217,param_1,this,*(FName *)(lVar1 + 0x14),param_3),
         pFVar9 == (FRigControlCopy *)0x0)) goto LAB_14a4328e2;
      bVar15 = false;
      URigHierarchy::GetActiveParent
                ((param_1->DynamicHierarchy).field0_0x0.DebugPtr,&local_1e0,
                 (FRigElementKey *)(lVar1 + 0x10),true);
      pFVar10 = URigHierarchy::GetDefaultParentKey(&local_168);
      FVar2.Number = local_1e0.Name.Number;
      FVar2.ComparisonIndex.Value = local_1e0.Name.ComparisonIndex.Value;
      if ((FVar2 != pFVar10->Name) || (local_1e0.Type != pFVar10->Type)) {
        local_1b8._0_8_ = *(undefined8 *)(lVar1 + 0x10);
        local_1b8.Name.Number = *(uint *)(lVar1 + 0x18);
        bVar15 = true;
        URigHierarchy::SwitchToDefaultParent
                  ((param_1->DynamicHierarchy).field0_0x0.DebugPtr,&local_1b8,false,true);
        (**(code **)(param_1->_padding_ + 0x2d0))(param_1);
      }
      switch(*(undefined1 *)(lVar1 + 0x231)) {
      case 0:
        local_158.Rotation.XY.m128d_f64 =
             (double  [2])ZEXT116(*(byte *)&(pFVar9->Value).FloatStorage.Float00);
        break;
      case 1:
      case 10:
        local_158.Rotation.XY.m128d_f64 =
             (double  [2])ZEXT416((uint)(pFVar9->Value).FloatStorage.Float00);
        break;
      case 2:
        local_158.Rotation.XY.m128d_f64 =
             (double  [2])ZEXT416((uint)(pFVar9->Value).FloatStorage.Float00);
        break;
      case 3:
        uVar3 = (pFVar9->Value).FloatStorage.Float00;
        uVar4 = (pFVar9->Value).FloatStorage.Float01;
        uVar5 = (pFVar9->Value).FloatStorage.Float02;
        local_158.Rotation.XY.m128d_f64[1]._0_4_ = uVar5;
        local_158.Rotation.XY.m128d_f64[0]._4_4_ = uVar4;
        local_158.Rotation.XY.m128d_f64[0]._0_4_ = uVar3;
        local_158.Rotation.XY.m128d_f64[1]._4_4_ = 0;
        break;
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
        if (param_3) {
          uVar17 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          uVar18 = (undefined4)
                   ((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_158.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_158.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_158.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_158.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_158.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_158.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_158.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_158.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_158.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_158.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          local_158.Rotation.XY.m128d_f64[1]._0_4_ = uVar17;
          local_158.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_158.Rotation.XY.m128d_f64[1]._4_4_ = uVar18;
          local_c8.Rotation.XY.m128d_f64[1]._0_4_ = uVar17;
          local_c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_c8.Rotation.XY.m128d_f64[1]._4_4_ = uVar18;
          local_c8.Rotation.ZW.m128d_f64[0] = local_158.Rotation.ZW.m128d_f64[0];
          local_c8.Rotation.ZW.m128d_f64[1] = local_158.Rotation.ZW.m128d_f64[1];
          local_c8.Translation.XY.m128d_f64[0] = local_158.Translation.XY.m128d_f64[0];
          local_c8.Translation.XY.m128d_f64[1] = local_158.Translation.XY.m128d_f64[1];
          local_c8.Translation.ZW.m128d_f64[0] = local_158.Translation.ZW.m128d_f64[0];
          local_c8.Translation.ZW.m128d_f64[1] = local_158.Translation.ZW.m128d_f64[1];
          local_c8.Scale3D.XY.m128d_f64[0] = local_158.Scale3D.XY.m128d_f64[0];
          local_c8.Scale3D.XY.m128d_f64[1] = local_158.Scale3D.XY.m128d_f64[1];
          local_c8.Scale3D.ZW.m128d_f64[0] = local_158.Scale3D.ZW.m128d_f64[0];
          local_c8.Scale3D.ZW.m128d_f64[1] = local_158.Scale3D.ZW.m128d_f64[1];
          FControlRigPoseMirrorTable::SetUpMirrorTable(local_217,param_1);
          this_01 = TMapBase<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,0>_>
                    ::Find((TMapBase<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,0>_>
                            *)&FControlRigPoseMirrorTable::MatchedControls,param_1);
          if (((this_01 == (FMatchedControls *)0x0) ||
              (*(int *)&(this_01->Match).field_0x8 - *(int *)&(this_01->Match).field_0x34 < 1)) ||
             (pFVar11 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                        ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                                *)this_01,pFVar9->Name), pFVar11 == (FName *)0x0)) {
            bVar14 = false;
          }
          else {
            bVar14 = true;
          }
          FControlRigPoseMirrorTable::GetMirrorTransform
                    (local_217,pFVar9,true,bVar14,&local_158,&local_c8);
          (**(code **)(param_1->_padding_ + 0x400))(param_1,lVar1 + 0x14,&local_c8);
        }
        else {
          (**(code **)(param_1->_padding_ + 0x400))(param_1,lVar1 + 0x14,&pFVar9->LocalTransform);
        }
      default:
        goto switchD_14a4325ac_default;
      }
      uStack_e0 = 0;
      local_e8 = 0;
      uStack_f0 = 0;
      local_f8 = 0;
      local_158.Scale3D.ZW.m128d_f64[1] = 0.0;
      local_158.Scale3D.ZW.m128d_f64[0] = 0.0;
      local_158.Scale3D.XY.m128d_f64[1] = 0.0;
      local_158.Scale3D.XY.m128d_f64[0] = 0.0;
      local_158.Translation.ZW.m128d_f64[1] = 0.0;
      local_158.Translation.ZW.m128d_f64[0] = 0.0;
      local_158.Translation.XY.m128d_f64[1] = 0.0;
      local_158.Translation.XY.m128d_f64[0] = 0.0;
      local_158.Rotation.ZW.m128d_f64[1] = 0.0;
      local_158.Rotation.ZW.m128d_f64[0] = 0.0;
      local_d8 = 1;
      (**(code **)(param_1->_padding_ + 0x3f0))(param_1,lVar1 + 0x14,&local_158);
switchD_14a4325ac_default:
      this = local_1d0;
      if (bVar15) {
        this_00 = (param_1->DynamicHierarchy).field0_0x0.DebugPtr;
        local_1a8._0_8_ = *(undefined8 *)(lVar1 + 0x10);
        local_1a8.Name.Number = *(uint *)(lVar1 + 0x18);
        iVar8 = URigHierarchy::GetIndex(this_00,&local_1a8,true);
        URigHierarchy::GetGlobalTransformByIndex(this_00,&local_158,iVar8,false);
        local_178.bInteractiveDialogEnabled = false;
        local_178._9_7_ = 0;
        local_178._padding_ = (longlong)&___7FEmptyRigDependenciesProvider__6B_;
        local_188._0_8_ = *(undefined8 *)(lVar1 + 0x10);
        local_198.Name.Number = local_1e0.Name.Number;
        local_188.Name.Number = *(uint *)(lVar1 + 0x18);
        URigHierarchy::SwitchToParent
                  ((param_1->DynamicHierarchy).field0_0x0.DebugPtr,&local_188,&local_198,false,true,
                   &local_178,(FString *)0x0);
        UControlRig::SetControlGlobalTransform
                  (param_1,(FName *)(lVar1 + 0x14),&local_158,true,&local_210,false,false,true);
        this = local_1d0;
      }
LAB_14a4328e2:
      uVar12 = local_1e8 & 0xffffffff;
      plVar16 = plVar16 + 1;
      uVar13 = (ulonglong)local_1f8;
    }
    if (local_1f0 != (longlong *)0x0) {
      FMemory::Free(local_1f0);
    }
  }
  return;
}

// ReplaceControlName @ 14a44dec0

void __thiscall
FControlRigControlPose::ReplaceControlName
          (FControlRigControlPose *this,FName *param_1,FName *param_2)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TTuple<FName,int> *pTVar5;
  uint *puVar6;
  uint uVar7;
  FName *pFVar8;
  TPairInitializer<FName_const_&,int_const_&> local_res8;
  FName *local_38;
  uint *local_30;
  
  this_00 = &this->CopyOfControlsNameToIndex;
  pTVar5 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)this_00,*param_1);
  puVar6 = (uint *)&pTVar5->field_0x8;
  if (pTVar5 == (TTuple<FName,int> *)0x0) {
    puVar6 = (uint *)0x0;
  }
  if (puVar6 != (uint *)0x0) {
    uVar4 = *puVar6;
    if (-1 < (int)uVar4) {
      uVar7 = 0;
      if ((int)uVar4 < (this->CopyOfControls).ArrayNum) {
        uVar7 = ~uVar4 >> 0x1f;
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
      pFVar8 = (FName *)((this->CopyOfControls).AllocatorInstance.Data +
                        (longlong)(int)uVar4 * 0x220);
      *pFVar8 = *param_2;
      FVar1 = *param_1;
      local_res8.Value = (int *)FVar1;
      if (*(int *)&(this->CopyOfControlsNameToIndex).field_0x8 !=
          *(int *)&(this->CopyOfControlsNameToIndex).field_0x34) {
        uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
        TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
        RemoveImpl<FName>((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                           *)this_00,FVar1.Number + uVar4,(FName *)&local_res8.Value);
      }
      local_38 = pFVar8;
      local_30 = puVar6;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)this_00,&local_res8,(bool *)&local_38);
    }
  }
  return;
}

// SavePose @ 14a455210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigControlPose::SavePose(FControlRigControlPose *this,UControlRig *param_1,bool param_2)

{
  int *piVar1;
  int *piVar2;
  FRigControlElement *pFVar3;
  URigHierarchy *pUVar4;
  FRigControlCopy *pFVar5;
  code *pcVar6;
  double dVar7;
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
  double dVar18;
  FName FVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  FName *pFVar23;
  bool bVar24;
  char cVar25;
  bool bVar26;
  int iVar27;
  int iVar28;
  FRigElementKey *pFVar29;
  FRigControlCopy *pFVar30;
  ulonglong uVar31;
  longlong lVar32;
  FName *pFVar33;
  ulonglong uVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  undefined1 auStackY_548 [32];
  undefined1 local_4f7 [3];
  uint local_4f4;
  undefined8 *local_4f0;
  ulonglong local_4e8;
  FRigElementKey local_4e0;
  undefined8 *local_4d0;
  FRigElementKey local_4c8;
  FRigElementKey local_4b8;
  FRigElementKey local_4a8;
  FRigElementKey local_498;
  FRigElementKey local_488;
  FRigElementKey local_478;
  IRigDependenciesProvider local_468;
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  FRigElementKey local_3f8;
  TTransform<double> local_3e8;
  TTransform<double> local_388;
  TTransform<double> local_328;
  FRigControlCopy local_2c8;
  ulonglong local_a8;
  
  if (param_1 != (UControlRig *)0x0) {
    local_a8 = __security_cookie.value ^ (ulonglong)auStackY_548;
    local_4f0 = (undefined8 *)0x0;
    local_4e8 = 0;
    (**(code **)(param_1->_padding_ + 0x420))(param_1,&local_4f0);
    iVar28 = (this->CopyOfControls).ArrayNum;
    piVar1 = &(this->CopyOfControls).ArrayNum;
    if (iVar28 < 0) {
      iVar27 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x220,0x10,-iVar28,(ForAnyElementType *)this,piVar1,
                          &(this->CopyOfControls).ArrayMax);
      DefaultConstructItems<FRigControlCopy,int>
                ((this->CopyOfControls).AllocatorInstance.Data + (longlong)iVar27 * 0x220,-iVar28);
    }
    else if (0 < iVar28) {
      *piVar1 = *piVar1 - iVar28;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x220,0x10,(ForAnyElementType *)this,*piVar1,&(this->CopyOfControls).ArrayMax);
    }
    uVar31 = (ulonglong)(int)(uint)local_4e8;
    puVar35 = local_4f0 + uVar31;
    local_4f4 = (uint)local_4e8;
    uVar34 = uVar31;
    puVar36 = local_4f0;
    local_4d0 = puVar35;
    while( true ) {
      if ((int)uVar31 != (int)uVar34) {
        local_4f7[0] = 0;
        `TCheckedPointerIterator<FRigControlElement_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_4f7);
      }
      if (puVar36 == puVar35) break;
      pFVar3 = (FRigControlElement *)*puVar36;
      bVar24 = URigHierarchy::IsAnimatable((param_1->DynamicHierarchy).field0_0x0.DebugPtr,pFVar3);
      if ((bVar24) &&
         ((param_2 ||
          (cVar25 = (**(code **)(param_1->_padding_ + 0x440))(param_1,&pFVar3->field_0x14),
          cVar25 != '\0')))) {
        dVar7 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        dVar8 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        bVar24 = false;
        dVar9 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        dVar10 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        dVar11 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        dVar12 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
        dVar13 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        dVar14 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        dVar15 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        dVar16 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        dVar17 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        dVar18 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_458._8_4_ = SUB84(dVar8,0);
        local_458._0_8_ = dVar7;
        local_458._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        local_408._8_4_ = SUB84(dVar18,0);
        local_408._0_8_ = dVar17;
        local_408._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
        local_448._8_4_ = SUB84(dVar10,0);
        local_448._0_8_ = dVar9;
        local_448._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        local_438._8_4_ = SUB84(dVar12,0);
        local_438._0_8_ = dVar11;
        local_438._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        local_428._8_4_ = SUB84(dVar14,0);
        local_428._0_8_ = dVar13;
        local_428._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
        local_418._8_4_ = SUB84(dVar16,0);
        local_418._0_8_ = dVar15;
        local_418._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
        URigHierarchy::GetActiveParent
                  ((param_1->DynamicHierarchy).field0_0x0.DebugPtr,&local_4e0,
                   (FRigElementKey *)&pFVar3->field_0x10,true);
        pFVar29 = URigHierarchy::GetDefaultParentKey(&local_3f8);
        FVar19.Number = local_4e0.Name.Number;
        FVar19.ComparisonIndex.Value = local_4e0.Name.ComparisonIndex.Value;
        if ((FVar19 != pFVar29->Name) || (local_4e0.Type != pFVar29->Type)) {
          pUVar4 = (param_1->DynamicHierarchy).field0_0x0.DebugPtr;
          local_4c8.Type = pFVar3->field_0x10;
          local_4c8._1_3_ = *(undefined3 *)&pFVar3->field_0x11;
          local_4c8.Name.ComparisonIndex.Value = *(uint *)&pFVar3->field_0x14;
          local_4c8.Name.Number = *(uint *)&pFVar3->field_0x18;
          iVar28 = URigHierarchy::GetIndex(pUVar4,&local_4c8,true);
          URigHierarchy::GetGlobalTransformByIndex(pUVar4,&local_328,iVar28,false);
          dVar18 = local_328.Scale3D.ZW.m128d_f64[1];
          dVar17 = local_328.Scale3D.ZW.m128d_f64[0];
          dVar16 = local_328.Scale3D.XY.m128d_f64[1];
          dVar15 = local_328.Scale3D.XY.m128d_f64[0];
          dVar14 = local_328.Translation.ZW.m128d_f64[1];
          dVar13 = local_328.Translation.ZW.m128d_f64[0];
          dVar12 = local_328.Translation.XY.m128d_f64[1];
          dVar11 = local_328.Translation.XY.m128d_f64[0];
          dVar10 = local_328.Rotation.ZW.m128d_f64[1];
          dVar9 = local_328.Rotation.ZW.m128d_f64[0];
          dVar8 = local_328.Rotation.XY.m128d_f64[1];
          dVar7 = local_328.Rotation.XY.m128d_f64[0];
          local_4b8.Type = pFVar3->field_0x10;
          local_4b8._1_3_ = *(undefined3 *)&pFVar3->field_0x11;
          local_4b8.Name.ComparisonIndex.Value = *(uint *)&pFVar3->field_0x14;
          local_4b8.Name.Number = *(uint *)&pFVar3->field_0x18;
          local_458._8_8_ = local_328.Rotation.XY.m128d_f64[1];
          local_458._0_8_ = local_328.Rotation.XY.m128d_f64[0];
          local_448._8_8_ = local_328.Rotation.ZW.m128d_f64[1];
          local_448._0_8_ = local_328.Rotation.ZW.m128d_f64[0];
          local_438._8_8_ = local_328.Translation.XY.m128d_f64[1];
          local_438._0_8_ = local_328.Translation.XY.m128d_f64[0];
          local_428._8_8_ = local_328.Translation.ZW.m128d_f64[1];
          local_428._0_8_ = local_328.Translation.ZW.m128d_f64[0];
          local_418._8_8_ = local_328.Scale3D.XY.m128d_f64[1];
          local_418._0_8_ = local_328.Scale3D.XY.m128d_f64[0];
          local_408._8_8_ = local_328.Scale3D.ZW.m128d_f64[1];
          local_408._0_8_ = local_328.Scale3D.ZW.m128d_f64[0];
          URigHierarchy::SwitchToDefaultParent
                    ((param_1->DynamicHierarchy).field0_0x0.DebugPtr,&local_4b8,false,true);
          pUVar4 = (param_1->DynamicHierarchy).field0_0x0.DebugPtr;
          local_4a8.Type = pFVar3->field_0x10;
          local_4a8._1_3_ = *(undefined3 *)&pFVar3->field_0x11;
          local_4a8.Name.ComparisonIndex.Value = *(uint *)&pFVar3->field_0x14;
          local_4a8.Name.Number = *(uint *)&pFVar3->field_0x18;
          iVar28 = URigHierarchy::GetIndex(pUVar4,&local_4a8,true);
          local_3e8.Rotation.XY.m128d_f64[0] = dVar7;
          local_3e8.Rotation.XY.m128d_f64[1] = dVar8;
          local_3e8.Rotation.ZW.m128d_f64[0] = dVar9;
          local_3e8.Rotation.ZW.m128d_f64[1] = dVar10;
          local_3e8.Translation.XY.m128d_f64[0] = dVar11;
          local_3e8.Translation.XY.m128d_f64[1] = dVar12;
          local_3e8.Translation.ZW.m128d_f64[0] = dVar13;
          local_3e8.Translation.ZW.m128d_f64[1] = dVar14;
          local_3e8.Scale3D.XY.m128d_f64[0] = dVar15;
          local_3e8.Scale3D.XY.m128d_f64[1] = dVar16;
          local_3e8.Scale3D.ZW.m128d_f64[0] = dVar17;
          local_3e8.Scale3D.ZW.m128d_f64[1] = dVar18;
          URigHierarchy::SetGlobalTransformByIndex(pUVar4,iVar28,&local_3e8,false,true,false,false);
          (**(code **)(param_1->_padding_ + 0x2d0))(param_1);
          bVar24 = true;
        }
        FRigControlCopy::FRigControlCopy
                  (&local_2c8,pFVar3,(param_1->DynamicHierarchy).field0_0x0.DebugPtr);
        pFVar5 = (FRigControlCopy *)(this->CopyOfControls).AllocatorInstance.Data;
        if (((pFVar5 <= &local_2c8) && (&local_2c8 < pFVar5 + (this->CopyOfControls).ArrayMax)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar26)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar28 = *piVar1;
        piVar2 = &(this->CopyOfControls).ArrayMax;
        if (iVar28 == *piVar2) {
          iVar28 = UE::Core::Private::
                   ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x220,0x10,(ForAnyElementType *)this,piVar2);
        }
        *piVar1 = iVar28 + 1;
        lVar32 = 4;
        pFVar5 = &local_2c8;
        pFVar23 = (FName *)((this->CopyOfControls).AllocatorInstance.Data + (longlong)iVar28 * 0x220
                           );
        do {
          pFVar33 = pFVar23;
          pFVar30 = pFVar5;
          pFVar23 = pFVar33 + 0x10;
          FVar19 = *(FName *)&pFVar30->ControlType;
          *pFVar33 = pFVar30->Name;
          pFVar33[1] = FVar19;
          fVar20 = (pFVar30->Value).FloatStorage.Float00;
          fVar21 = (pFVar30->Value).FloatStorage.Float01;
          pFVar33[2] = (pFVar30->ParentKey).Name;
          pFVar33[3].ComparisonIndex = (FNameEntryId)fVar20;
          pFVar33[3].Number = (uint)fVar21;
          fVar20 = (pFVar30->Value).FloatStorage.Float03;
          fVar21 = (pFVar30->Value).FloatStorage.Float10;
          fVar22 = (pFVar30->Value).FloatStorage.Float11;
          pFVar33[4].ComparisonIndex = (FNameEntryId)(pFVar30->Value).FloatStorage.Float02;
          pFVar33[4].Number = (uint)fVar20;
          pFVar33[5].ComparisonIndex = (FNameEntryId)fVar21;
          pFVar33[5].Number = (uint)fVar22;
          fVar20 = (pFVar30->Value).FloatStorage.Float13;
          fVar21 = (pFVar30->Value).FloatStorage.Float20;
          fVar22 = (pFVar30->Value).FloatStorage.Float21;
          pFVar33[6].ComparisonIndex = (FNameEntryId)(pFVar30->Value).FloatStorage.Float12;
          pFVar33[6].Number = (uint)fVar20;
          pFVar33[7].ComparisonIndex = (FNameEntryId)fVar21;
          pFVar33[7].Number = (uint)fVar22;
          fVar20 = (pFVar30->Value).FloatStorage.Float23;
          fVar21 = (pFVar30->Value).FloatStorage.Float30;
          fVar22 = (pFVar30->Value).FloatStorage.Float31;
          pFVar33[8].ComparisonIndex = (FNameEntryId)(pFVar30->Value).FloatStorage.Float22;
          pFVar33[8].Number = (uint)fVar20;
          pFVar33[9].ComparisonIndex = (FNameEntryId)fVar21;
          pFVar33[9].Number = (uint)fVar22;
          fVar20 = (pFVar30->Value).FloatStorage.Float33;
          fVar21 = (pFVar30->Value).FloatStorage.Float00_2;
          fVar22 = (pFVar30->Value).FloatStorage.Float01_2;
          pFVar33[10].ComparisonIndex = (FNameEntryId)(pFVar30->Value).FloatStorage.Float32;
          pFVar33[10].Number = (uint)fVar20;
          pFVar33[0xb].ComparisonIndex = (FNameEntryId)fVar21;
          pFVar33[0xb].Number = (uint)fVar22;
          fVar20 = (pFVar30->Value).FloatStorage.Float03_2;
          fVar21 = (pFVar30->Value).FloatStorage.Float10_2;
          fVar22 = (pFVar30->Value).FloatStorage.Float11_2;
          pFVar33[0xc].ComparisonIndex = (FNameEntryId)(pFVar30->Value).FloatStorage.Float02_2;
          pFVar33[0xc].Number = (uint)fVar20;
          pFVar33[0xd].ComparisonIndex = (FNameEntryId)fVar21;
          pFVar33[0xd].Number = (uint)fVar22;
          fVar20 = (pFVar30->Value).FloatStorage.Float13_2;
          fVar21 = (pFVar30->Value).FloatStorage.Float20_2;
          fVar22 = (pFVar30->Value).FloatStorage.Float21_2;
          pFVar33[0xe].ComparisonIndex = (FNameEntryId)(pFVar30->Value).FloatStorage.Float12_2;
          pFVar33[0xe].Number = (uint)fVar20;
          pFVar33[0xf].ComparisonIndex = (FNameEntryId)fVar21;
          pFVar33[0xf].Number = (uint)fVar22;
          lVar32 = lVar32 + -1;
          pFVar5 = (FRigControlCopy *)&(pFVar30->Value).FloatStorage.Float22_2;
        } while (lVar32 != 0);
        fVar20 = (pFVar30->Value).FloatStorage.Float23_2;
        fVar21 = (pFVar30->Value).FloatStorage.Float30_2;
        fVar22 = (pFVar30->Value).FloatStorage.Float31_2;
        pFVar23->ComparisonIndex = (FNameEntryId)(pFVar30->Value).FloatStorage.Float22_2;
        pFVar23->Number = (uint)fVar20;
        pFVar33[0x11].ComparisonIndex = (FNameEntryId)fVar21;
        pFVar33[0x11].Number = (uint)fVar22;
        fVar20 = (pFVar30->Value).FloatStorage.Float33_2;
        FVar19 = *(FName *)&(pFVar30->Value).FloatStorage.bValid;
        pFVar33[0x12].ComparisonIndex = (FNameEntryId)(pFVar30->Value).FloatStorage.Float32_2;
        pFVar33[0x12].Number = (uint)fVar20;
        pFVar33[0x13] = FVar19;
        puVar35 = local_4d0;
        if (bVar24) {
          local_468.bInteractiveDialogEnabled = false;
          local_468._9_7_ = 0;
          local_468._padding_ = (longlong)&___7FEmptyRigDependenciesProvider__6B_;
          local_488.Type = pFVar3->field_0x10;
          local_488._1_3_ = *(undefined3 *)&pFVar3->field_0x11;
          local_488.Name.ComparisonIndex.Value = *(uint *)&pFVar3->field_0x14;
          local_498.Name.Number = local_4e0.Name.Number;
          local_488.Name.Number = *(uint *)&pFVar3->field_0x18;
          URigHierarchy::SwitchToParent
                    ((param_1->DynamicHierarchy).field0_0x0.DebugPtr,&local_488,&local_498,false,
                     true,&local_468,(FString *)0x0);
          pUVar4 = (param_1->DynamicHierarchy).field0_0x0.DebugPtr;
          local_478.Type = pFVar3->field_0x10;
          local_478._1_3_ = *(undefined3 *)&pFVar3->field_0x11;
          local_478.Name.ComparisonIndex.Value = *(uint *)&pFVar3->field_0x14;
          local_478.Name.Number = *(uint *)&pFVar3->field_0x18;
          iVar28 = URigHierarchy::GetIndex(pUVar4,&local_478,true);
          local_388.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar8,0);
          local_388.Rotation.XY.m128d_f64[0] = dVar7;
          local_388.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar8 >> 0x20);
          local_388.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar10,0);
          local_388.Rotation.ZW.m128d_f64[0] = dVar9;
          local_388.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar10 >> 0x20);
          local_388.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar12,0);
          local_388.Translation.XY.m128d_f64[0] = dVar11;
          local_388.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar12 >> 0x20);
          local_388.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar14,0);
          local_388.Translation.ZW.m128d_f64[0] = dVar13;
          local_388.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar14 >> 0x20);
          local_388.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar16,0);
          local_388.Scale3D.XY.m128d_f64[0] = dVar15;
          local_388.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar16 >> 0x20);
          local_388.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84(dVar18,0);
          local_388.Scale3D.ZW.m128d_f64[0] = dVar17;
          local_388.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar18 >> 0x20);
          URigHierarchy::SetGlobalTransformByIndex(pUVar4,iVar28,&local_388,false,true,false,false);
          puVar35 = local_4d0;
        }
      }
      uVar31 = local_4e8 & 0xffffffff;
      puVar36 = puVar36 + 1;
      uVar34 = (ulonglong)local_4f4;
    }
    SetUpControlMap(this);
    if (local_4f0 != (undefined8 *)0x0) {
      FMemory::Free(local_4f0);
    }
  }
  return;
}

// SetControlMirrorTransform @ 14a4591e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigControlPose::SetControlMirrorTransform
          (FControlRigControlPose *this,bool param_1,UControlRig *param_2,FName *param_3,
          bool param_4,TTransform<double> *param_5,TTransform<double> *param_6,bool param_7,
          FRigControlModifiedContext *param_8,bool param_9)

{
  if (param_2 != (UControlRig *)0x0) {
    if ((!param_1) && (!param_4)) {
      UControlRig::SetControlGlobalTransform
                (param_2,param_3,param_5,param_7,param_8,param_9,param_1,true);
      return;
    }
    (**(code **)(param_2->_padding_ + 0x400))(param_2,param_3,param_6,param_7,param_8,param_9,1);
  }
  return;
}

// SetUpControlMap @ 14a45ac40

void __thiscall FControlRigControlPose::SetUpControlMap(FControlRigControlPose *this)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint local_res8 [4];
  FScriptContainerElement *local_18;
  uint *local_10;
  
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->CopyOfControlsNameToIndex);
  iVar5 = (this->CopyOfControls).ArrayNum;
  local_res8[0] = 0;
  if (0 < iVar5) {
    do {
      uVar2 = local_res8[0];
      uVar4 = 0;
      if ((int)local_res8[0] < iVar5) {
        uVar4 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_10 = local_res8;
      local_18 = (this->CopyOfControls).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x220;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)&this->CopyOfControlsNameToIndex,
                 (TPairInitializer<FName_const_&,int_const_&> *)(local_res8 + 2),(bool *)&local_18);
      iVar5 = (this->CopyOfControls).ArrayNum;
      local_res8[0] = local_res8[0] + 1;
    } while ((int)local_res8[0] < iVar5);
  }
  return;
}

