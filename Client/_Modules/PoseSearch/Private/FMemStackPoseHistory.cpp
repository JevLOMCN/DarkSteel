// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 19

// AddFuturePose @ 14a8e6580

void __thiscall
UE::PoseSearch::FMemStackPoseHistory::AddFuturePose
          (FMemStackPoseHistory *this,float param_1,FCSPose<FCompactPose> *param_2,
          FBlendedCurve *param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  IComponentSpacePoseProvider local_28;
  FCSPose<FCompactPose> *local_20;
  
  local_28 = (IComponentSpacePoseProvider)&___7FComponentSpacePoseProvider_PoseSearch_UE__6B_;
  local_20 = param_2;
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)&(param_2->Pose).field_0x10 + 0x40));
  if (pUVar3 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSkeletonAsset()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AddFuturePose(this,param_1,&local_28,param_3);
  return;
}

// AddFuturePose @ 14a8e6610

void __thiscall
UE::PoseSearch::FMemStackPoseHistory::AddFuturePose
          (FMemStackPoseHistory *this,float param_1,IComponentSpacePoseProvider *param_2,
          FBlendedCurve *param_3)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  FPoseHistoryEntry *pFVar5;
  undefined4 *puVar6;
  TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
  *pTVar7;
  int iVar8;
  uint uVar9;
  TArrayView<FName_const_,int> local_38;
  undefined1 local_28 [32];
  
  if (param_1 <= 0.0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Time > 0.f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                       ,0x4c3,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->PoseHistory == (IPoseHistory *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PoseHistory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                       ,0x4c4,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = (this->FutureEntries).AllocatorInstance.SecondaryData.Data;
  uVar9 = (this->FutureEntries).ArrayNum;
  if (pFVar5 == (FPoseHistoryEntry *)0x0) {
    pFVar5 = (FPoseHistoryEntry *)&this->FutureEntries;
  }
  iVar8 = 0;
  if (0 < (int)uVar9) {
    do {
      iVar1 = (uVar9 >> 1) + iVar8;
      if (pFVar5[iVar1].AccumulatedSeconds <= param_1 && param_1 != pFVar5[iVar1].AccumulatedSeconds
         ) {
        iVar8 = iVar1 + (uVar9 & 1);
      }
      uVar3 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar3 != 0);
  }
  pFVar5 = TArray<UE::PoseSearch::FPoseHistoryEntry,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
           ::InsertDefaulted_GetRef(&this->FutureEntries,iVar8);
  puVar6 = (undefined4 *)(**(code **)(this->_padding_ + 0x48))(this,local_28);
  local_38.DataPtr._0_4_ = *puVar6;
  local_38.DataPtr._4_4_ = puVar6[1];
  local_38.ArrayNum = puVar6[2];
  local_38._12_4_ = puVar6[3];
  pTVar7 = (TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
            *)(**(code **)(this->_padding_ + 0x40))(this);
  FPoseHistoryEntry::Update(pFVar5,param_1,param_2,pTVar7,true,param_3,&local_38);
  return;
}

// AddFutureRootBone @ 14a8e6750

void __thiscall
UE::PoseSearch::FMemStackPoseHistory::AddFutureRootBone
          (FMemStackPoseHistory *this,float param_1,TTransform<double> *param_2,bool param_3)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  FPoseHistoryEntry *pFVar5;
  int iVar6;
  uint uVar7;
  
  if ((param_1 <= 0.0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Time > 0.f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                         ,0x4b7,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar5 = (this->FutureEntries).AllocatorInstance.SecondaryData.Data;
  uVar7 = (this->FutureEntries).ArrayNum;
  if (pFVar5 == (FPoseHistoryEntry *)0x0) {
    pFVar5 = (FPoseHistoryEntry *)&this->FutureEntries;
  }
  iVar6 = 0;
  if (0 < (int)uVar7) {
    do {
      iVar1 = (uVar7 >> 1) + iVar6;
      if (pFVar5[iVar1].AccumulatedSeconds <= param_1 && param_1 != pFVar5[iVar1].AccumulatedSeconds
         ) {
        iVar6 = iVar1 + (uVar7 & 1);
      }
      uVar3 = uVar7 >> 1;
      uVar7 = uVar7 >> 1;
    } while (uVar3 != 0);
  }
  pFVar5 = TArray<UE::PoseSearch::FPoseHistoryEntry,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
           ::InsertDefaulted_GetRef(&this->FutureEntries,iVar6);
  FPoseHistoryEntry::SetNum(pFVar5,1,param_3);
  FPoseHistoryEntry::SetComponentSpaceTransform(pFVar5,0,param_2);
  pFVar5->AccumulatedSeconds = param_1;
  return;
}

// DebugDraw @ 14a8ef5b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::PoseSearch::FMemStackPoseHistory::DebugDraw
          (FMemStackPoseHistory *this,FAnimInstanceProxy *param_1,FColor param_2)

{
  double *pdVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  IPoseHistory *pIVar5;
  FPoseHistoryEntry *pFVar6;
  code *pcVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  bool bVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  FTransformTrajectory *this_00;
  FPoseHistoryEntry *pFVar33;
  FTransformTrajectorySample *pFVar34;
  TTransform<double> *pTVar35;
  int iVar36;
  ForElementType<UE::Math::TTransform<double>_> FVar37;
  uint uVar38;
  longlong lVar39;
  uint uVar40;
  ulonglong uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  FColor_u_0 local_res18 [2];
  undefined1 auStackY_32f8 [32];
  uint local_32b8;
  TVector<double>_u_0 local_3298;
  TVector<double>_u_0 local_3280;
  FTransformTrajectorySample local_3268;
  TTransform<double> local_3228;
  TTransform<double> local_31c8;
  TTransform<double> local_3168;
  TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
  local_3108;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_32f8;
  local_res18[0] = param_2.field0_0x0;
  if ((this->PoseHistory == (IPoseHistory *)0x0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("PoseHistory",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                          ,0x531,L""), bVar29)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((local_res18[0]._s_0.A != '\0') && ((this->FutureEntries).ArrayNum != 0)) &&
     (GVarAnimPoseHistoryDebugDrawPose != false)) {
    this_00 = (FTransformTrajectory *)(**(code **)(this->_padding_ + 0x18))(this);
    iVar31 = (this->FutureEntries).ArrayNum;
    iVar4 = (this_00->Samples).ArrayNum;
    local_3108.AllocatorInstance.SecondaryData = (ForElementType<UE::Math::TTransform<double>_>)0x0;
    local_3108.ArrayNum = 0;
    local_3108.ArrayMax = 0x80;
    iVar30 = (**(code **)(*(longlong *)this->PoseHistory + 0x50))();
    uVar16 = _UNK_15068968c;
    uVar15 = _UNK_150689688;
    uVar14 = _UNK_150689684;
    uVar13 = ___xmm_3ff00000000000003ff0000000000000;
    uVar12 = _UNK_15068951c;
    uVar11 = _UNK_150689518;
    uVar10 = _UNK_150689514;
    uVar9 = ___xmm_00000000000000003ff0000000000000;
    fVar8 = __real_3f800000;
    iVar36 = iVar31 + 1;
    if (iVar30 < 1) {
      iVar36 = iVar31;
    }
    uVar41 = 0;
    local_32b8 = 0;
    if (0 < iVar36) {
      do {
        uVar38 = (this->FutureEntries).ArrayNum;
        uVar40 = (uint)uVar41;
        if (uVar40 == uVar38) {
          pIVar5 = this->PoseHistory;
          lVar39 = *(longlong *)pIVar5;
          iVar31 = (**(code **)(lVar39 + 0x50))(pIVar5);
          pFVar33 = (FPoseHistoryEntry *)(**(code **)(lVar39 + 0x58))(pIVar5,iVar31 + -1);
        }
        else {
          uVar32 = 0;
          if ((int)uVar40 < (int)uVar38) {
            uVar32 = ~uVar40 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar6 = (this->FutureEntries).AllocatorInstance.SecondaryData.Data;
          pFVar33 = (FPoseHistoryEntry *)&this->FutureEntries;
          if (pFVar6 != (FPoseHistoryEntry *)0x0) {
            pFVar33 = pFVar6;
          }
          pFVar33 = pFVar33 + uVar41;
        }
        iVar30 = local_3108.ArrayNum;
        iVar31 = (pFVar33->ComponentSpaceRotations).ArrayNum;
        if (iVar31 < local_3108.ArrayNum) {
          iVar31 = local_3108.ArrayNum;
        }
        TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
        ::SetNum(&local_3108,iVar31,No);
        uVar38 = 0;
        if (0 < (pFVar33->ComponentSpaceRotations).ArrayNum) {
          lVar39 = 0;
          do {
            uVar43 = 0;
            uVar42 = 0;
            if (iVar4 == 0) {
              local_31c8.Rotation.XY.m128d_f64[0]._0_4_ =
                   *(undefined4 *)(param_1->ComponentTransform).Rotation.XY.m128d_f64;
              local_31c8.Rotation.XY.m128d_f64[0]._4_4_ =
                   *(undefined4 *)
                    ((longlong)(param_1->ComponentTransform).Rotation.XY.m128d_f64 + 4);
              local_31c8.Rotation.XY.m128d_f64[1]._0_4_ =
                   *(undefined4 *)((param_1->ComponentTransform).Rotation.XY.m128d_f64 + 1);
              local_31c8.Rotation.XY.m128d_f64[1]._4_4_ =
                   *(undefined4 *)
                    ((longlong)(param_1->ComponentTransform).Rotation.XY.m128d_f64 + 0xc);
              local_31c8.Rotation.ZW.m128d_f64[0]._0_4_ =
                   *(undefined4 *)(param_1->ComponentTransform).Rotation.ZW.m128d_f64;
              local_31c8.Rotation.ZW.m128d_f64[0]._4_4_ =
                   *(undefined4 *)
                    ((longlong)(param_1->ComponentTransform).Rotation.ZW.m128d_f64 + 4);
              local_31c8.Rotation.ZW.m128d_f64[1]._0_4_ =
                   *(undefined4 *)((param_1->ComponentTransform).Rotation.ZW.m128d_f64 + 1);
              local_31c8.Rotation.ZW.m128d_f64[1]._4_4_ =
                   *(undefined4 *)
                    ((longlong)(param_1->ComponentTransform).Rotation.ZW.m128d_f64 + 0xc);
              local_31c8.Translation.XY.m128d_f64[0]._0_4_ =
                   *(undefined4 *)(param_1->ComponentTransform).Translation.XY.m128d_f64;
              local_31c8.Translation.XY.m128d_f64[0]._4_4_ =
                   *(undefined4 *)
                    ((longlong)(param_1->ComponentTransform).Translation.XY.m128d_f64 + 4);
              local_31c8.Translation.XY.m128d_f64[1]._0_4_ =
                   *(undefined4 *)((param_1->ComponentTransform).Translation.XY.m128d_f64 + 1);
              local_31c8.Translation.XY.m128d_f64[1]._4_4_ =
                   *(undefined4 *)
                    ((longlong)(param_1->ComponentTransform).Translation.XY.m128d_f64 + 0xc);
              local_31c8.Translation.ZW.m128d_f64[0]._0_4_ =
                   *(undefined4 *)(param_1->ComponentTransform).Translation.ZW.m128d_f64;
              local_31c8.Translation.ZW.m128d_f64[0]._4_4_ =
                   *(undefined4 *)
                    ((longlong)(param_1->ComponentTransform).Translation.ZW.m128d_f64 + 4);
              uVar42 = *(undefined4 *)((param_1->ComponentTransform).Translation.ZW.m128d_f64 + 1);
              uVar43 = *(undefined4 *)
                        ((longlong)(param_1->ComponentTransform).Translation.ZW.m128d_f64 + 0xc);
              local_31c8.Scale3D.XY.m128d_f64[0]._0_4_ =
                   *(undefined4 *)(param_1->ComponentTransform).Scale3D.XY.m128d_f64;
              local_31c8.Scale3D.XY.m128d_f64[0]._4_4_ =
                   *(undefined4 *)((longlong)(param_1->ComponentTransform).Scale3D.XY.m128d_f64 + 4)
              ;
              local_31c8.Scale3D.XY.m128d_f64[1]._0_4_ =
                   *(undefined4 *)((param_1->ComponentTransform).Scale3D.XY.m128d_f64 + 1);
              local_31c8.Scale3D.XY.m128d_f64[1]._4_4_ =
                   *(undefined4 *)
                    ((longlong)(param_1->ComponentTransform).Scale3D.XY.m128d_f64 + 0xc);
              local_31c8.Scale3D.ZW.m128d_f64[0]._0_4_ =
                   *(undefined4 *)(param_1->ComponentTransform).Scale3D.ZW.m128d_f64;
              local_31c8.Scale3D.ZW.m128d_f64[0]._4_4_ =
                   *(undefined4 *)((longlong)(param_1->ComponentTransform).Scale3D.ZW.m128d_f64 + 4)
              ;
              local_31c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
                   *(undefined4 *)((param_1->ComponentTransform).Scale3D.ZW.m128d_f64 + 1);
              local_31c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
                   *(undefined4 *)
                    ((longlong)(param_1->ComponentTransform).Scale3D.ZW.m128d_f64 + 0xc);
            }
            else {
              pFVar34 = FTransformTrajectory::GetSampleAtTime
                                  (this_00,&local_3268,pFVar33->AccumulatedSeconds,false);
              uVar2 = *(undefined8 *)((longlong)&(pFVar34->Position).field0_0x0 + 8);
              uVar3 = *(undefined8 *)&(pFVar34->Position).field0_0x0;
              local_31c8.Translation.XY.m128d_f64[0]._0_4_ = (undefined4)uVar3;
              local_31c8.Translation.XY.m128d_f64[0]._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
              uVar3 = *(undefined8 *)((longlong)&(pFVar34->Position).field0_0x0 + 0x10);
              local_31c8.Translation.ZW.m128d_f64[0]._0_4_ = (undefined4)uVar3;
              local_31c8.Translation.ZW.m128d_f64[0]._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
              local_31c8.Rotation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)&(pFVar34->Facing).X;
              local_31c8.Rotation.XY.m128d_f64[0]._4_4_ =
                   *(undefined4 *)((longlong)&(pFVar34->Facing).X + 4);
              local_31c8.Rotation.XY.m128d_f64[1]._0_4_ = *(undefined4 *)&(pFVar34->Facing).Y;
              local_31c8.Rotation.XY.m128d_f64[1]._4_4_ =
                   *(undefined4 *)((longlong)&(pFVar34->Facing).Y + 4);
              local_31c8.Rotation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)&(pFVar34->Facing).Z;
              local_31c8.Rotation.ZW.m128d_f64[0]._4_4_ =
                   *(undefined4 *)((longlong)&(pFVar34->Facing).Z + 4);
              local_31c8.Rotation.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)&(pFVar34->Facing).W;
              local_31c8.Rotation.ZW.m128d_f64[1]._4_4_ =
                   *(undefined4 *)((longlong)&(pFVar34->Facing).W + 4);
              local_31c8.Translation.XY.m128d_f64[1]._0_4_ = (undefined4)uVar2;
              local_31c8.Translation.XY.m128d_f64[1]._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
              local_31c8.Scale3D.XY.m128d_f64[0]._0_4_ = uVar13;
              local_31c8.Scale3D.XY.m128d_f64[0]._4_4_ = uVar14;
              local_31c8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar15;
              local_31c8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar16;
              local_31c8.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar9;
              local_31c8.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar10;
              local_31c8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar11;
              local_31c8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar12;
            }
            local_31c8.Translation.ZW.m128d_f64[1]._0_4_ = uVar42;
            local_31c8.Translation.ZW.m128d_f64[1]._4_4_ = uVar43;
            pTVar35 = FPoseHistoryEntry::GetComponentSpaceTransform(pFVar33,&local_3168,uVar38);
            local_3228.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_3228.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_3228.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_3228.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_3228.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_3228.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_3228.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_3228.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_3228.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_3228.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_3228.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_3228.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_3228.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_3228.Scale3D.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float1110.m128_f32[0];
            local_3228.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_3228.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_3228.Scale3D.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float1110.m128_f32[2];
            local_3228.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            UE::Math::TTransform<double>::Multiply(&local_3228,pTVar35,&local_31c8);
            if ((int)uVar38 < iVar30) {
              local_3298._s_0.Z = local_3228.Translation.ZW.m128d_f64[0];
              local_3298._s_0.X = local_3228.Translation.XY.m128d_f64[0];
              local_3298._s_0.Y = local_3228.Translation.XY.m128d_f64[1];
              uVar40 = 0;
              if ((int)uVar38 < local_3108.ArrayNum) {
                uVar40 = ~uVar38 >> 0x1f;
              }
              if ((uVar40 == 0) &&
                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar29)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              FVar37 = (ForElementType<UE::Math::TTransform<double>_>)&local_3108;
              if (local_3108.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::Math::TTransform<double>_>)0x0) {
                FVar37 = local_3108.AllocatorInstance.SecondaryData;
              }
              local_3280._s_0.X =
                   (double)*(undefined8 *)((uchar *)((longlong)FVar37 + 0x20) + lVar39);
              local_3280._s_0.Y =
                   (double)*(undefined8 *)((uchar *)((longlong)FVar37 + 0x20) + lVar39 + 8);
              local_3280._s_0.Z =
                   (double)*(undefined8 *)((uchar *)((longlong)FVar37 + 0x30) + lVar39);
              FAnimInstanceProxy::AnimDrawDebugLine
                        (param_1,(TVector<double> *)&local_3280._s_0,
                         (TVector<double> *)&local_3298._s_0,(FColor *)&local_res18[0]._s_0,false,
                         0.0,fVar8,SDPG_World);
            }
            dVar17 = local_3228.Rotation.XY.m128d_f64[0];
            dVar18 = local_3228.Rotation.XY.m128d_f64[1];
            dVar19 = local_3228.Rotation.ZW.m128d_f64[0];
            dVar20 = local_3228.Rotation.ZW.m128d_f64[1];
            dVar21 = local_3228.Translation.XY.m128d_f64[0];
            dVar22 = local_3228.Translation.XY.m128d_f64[1];
            dVar23 = local_3228.Translation.ZW.m128d_f64[0];
            dVar24 = local_3228.Translation.ZW.m128d_f64[1];
            dVar25 = local_3228.Scale3D.XY.m128d_f64[0];
            dVar26 = local_3228.Scale3D.XY.m128d_f64[1];
            dVar27 = local_3228.Scale3D.ZW.m128d_f64[0];
            dVar28 = local_3228.Scale3D.ZW.m128d_f64[1];
            uVar40 = 0;
            if ((int)uVar38 < local_3108.ArrayNum) {
              uVar40 = ~uVar38 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            FVar37 = (ForElementType<UE::Math::TTransform<double>_>)&local_3108;
            if (local_3108.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::Math::TTransform<double>_>)0x0) {
              FVar37 = local_3108.AllocatorInstance.SecondaryData;
            }
            uVar38 = uVar38 + 1;
            *(double *)(lVar39 + (longlong)FVar37) = dVar17;
            ((double *)(lVar39 + (longlong)FVar37))[1] = dVar18;
            pdVar1 = (double *)(lVar39 + 0x10 + (longlong)FVar37);
            *pdVar1 = dVar19;
            pdVar1[1] = dVar20;
            pdVar1 = (double *)(lVar39 + 0x20 + (longlong)FVar37);
            *pdVar1 = dVar21;
            pdVar1[1] = dVar22;
            pdVar1 = (double *)(lVar39 + 0x30 + (longlong)FVar37);
            *pdVar1 = dVar23;
            pdVar1[1] = dVar24;
            pdVar1 = (double *)(lVar39 + 0x40 + (longlong)FVar37);
            *pdVar1 = dVar25;
            pdVar1[1] = dVar26;
            pdVar1 = (double *)(lVar39 + 0x50 + (longlong)FVar37);
            *pdVar1 = dVar27;
            pdVar1[1] = dVar28;
            lVar39 = lVar39 + 0x60;
          } while ((int)uVar38 < (pFVar33->ComponentSpaceRotations).ArrayNum);
          uVar41 = (ulonglong)local_32b8;
        }
        local_32b8 = (int)uVar41 + 1;
        uVar41 = (ulonglong)local_32b8;
      } while ((int)local_32b8 < iVar36);
    }
    if (local_3108.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Math::TTransform<double>_>)0x0) {
      FMemory::Free((void *)local_3108.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// ExtractAndAddFuturePoses @ 14a8f5a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::PoseSearch::FMemStackPoseHistory::ExtractAndAddFuturePoses
          (FMemStackPoseHistory *this,UAnimationAsset *param_1,float param_2,float param_3,
          TVector<double> *param_4,float param_5,USkeleton *param_6,bool param_7)

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
  undefined8 _Src;
  undefined4 uVar15;
  longlong *plVar16;
  bool bVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  uint *puVar21;
  FTlsAutoCleanup *pFVar22;
  longlong *plVar23;
  UObject *pUVar24;
  ulonglong uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulong64 uVar31;
  uint uVar32;
  ulonglong uVar33;
  uint uVar34;
  TBitArray<FDefaultBitArrayAllocator> *pTVar35;
  float fVar36;
  undefined1 auStackY_528 [32];
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_4d8;
  undefined1 local_4c8;
  FIdentityFunctor local_4c7;
  undefined1 local_4c6 [6];
  undefined1 local_4c0 [24];
  USkeleton *local_4a8;
  FBaseCompactPose<TMemStackAllocator<0>_> local_498;
  ForElementType<unsigned_char> FStack_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  FMemMark local_448;
  FBlendedCurve local_420;
  int local_400;
  int local_3fc;
  FMemStackPoseHistory *local_3f8;
  FCurveFilterSettings local_3f0;
  IComponentSpacePoseProvider local_3e0;
  FBaseCompactPose<TMemStackAllocator<0>_> *local_3d8;
  longlong *local_3d0;
  uint uStack_3c8;
  uint uStack_3c4;
  TBitArray<FDefaultBitArrayAllocator> *local_3c0;
  undefined4 uStack_3b8;
  uint uStack_3b4;
  uint local_3b0;
  undefined4 uStack_3ac;
  int iStack_3a8;
  undefined4 uStack_3a4;
  longlong *local_3a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_398;
  undefined8 uStack_378;
  code *local_370;
  undefined1 *local_368;
  TArrayView<unsigned_short_const_,int> local_360;
  FBlendedCurve local_350;
  undefined4 local_314;
  undefined1 local_308 [240];
  FSharedReferencer<1> local_218;
  TSparseArray<TSparseSetElement<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_200;
  void *local_1c0;
  undefined4 local_1b8;
  FAnimationAssetSampler local_1a8;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_528;
  local_4a8 = param_6;
  local_3f8 = this;
  puVar21 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_368 = local_4c6;
  local_370 = Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar22 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_370,puVar21);
  local_448.Mem = (FMemStackBase *)(pFVar22 + 2);
  local_448.Top = (local_448.Mem)->Top;
  local_448.SavedChunk = *(FTaggedMemory **)(pFVar22 + 4);
  local_448.bPopped = false;
  local_448.NextTopmostMark = *(FMemMark **)(pFVar22 + 5);
  pFVar22[5] = (FTlsAutoCleanup)&local_448;
  *(int *)(pFVar22 + 6) = *(int *)(pFVar22 + 6) + 1;
  if ((param_3 < 0.0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("FiniteDeltaTime >= 0.f",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                          ,0x4cd,L""), bVar17)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_2 < param_3) && (param_2 = param_3, 1 < (byte)LogPoseSearch._0_1_)) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
  }
  if ((param_5 < param_3) && (param_2 = param_3, 1 < (byte)LogPoseSearch._0_1_)) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
  }
  if (param_6 == (USkeleton *)0x0) {
    param_6 = (param_1->Skeleton).field0_0x0.DebugPtr;
    local_4a8 = param_6;
  }
  uVar29 = 0;
  local_4d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4d8.ArrayNum = 0;
  local_4d8.ArrayMax = 0;
  plVar23 = (longlong *)(**(code **)(this->_padding_ + 0x40))(this);
  uVar34 = 0;
  if ((int)plVar23[1] != *(int *)((longlong)plVar23 + 0x34)) {
    uVar32 = *(uint *)(plVar23 + 5);
    local_3c0 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar23 + 2);
    uStack_3c4 = 1;
    uStack_3b4 = uVar34;
    local_3b0 = uVar34;
    if (uVar32 != 0) {
      pTVar35 = (TBitArray<FDefaultBitArrayAllocator> *)plVar23[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar23[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar35 = local_3c0;
      }
      uVar27 = *(uint *)(pTVar35->AllocatorInstance).InlineData;
      uVar25 = uVar29;
      while (uVar27 == 0) {
        iVar19 = (int)uVar29;
        local_3b0 = (int)uVar25 + 0x20;
        uVar25 = (ulonglong)local_3b0;
        uVar34 = iVar19 + 1;
        uVar29 = (ulonglong)uVar34;
        uStack_3b4 = uVar32;
        if ((int)((uVar32 - 1) + ((int)(uVar32 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar34)
        goto LAB_14a8f5e4e;
        uVar27 = *(uint *)((pTVar35->AllocatorInstance).InlineData + (longlong)iVar19 * 4 + 4);
      }
      uStack_3c4 = -uVar27 & uVar27;
      uVar29 = (ulonglong)uStack_3c4 * 2 + 1;
      lVar30 = 0x3f;
      if (uVar29 != 0) {
        for (; uVar29 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      local_400 = (int)lVar30;
      uStack_3b4 = (local_3b0 - 1) + local_400;
      if ((int)uVar32 < (int)uStack_3b4) {
        uStack_3b4 = uVar32;
      }
    }
LAB_14a8f5e4e:
    uVar32 = *(uint *)(plVar23 + 5);
    uStack_3ac = local_314;
    iStack_3a8 = (int)plVar23[1] - *(int *)((longlong)plVar23 + 0x34);
    uStack_3b8 = 0xffffffff;
    uVar27 = uVar32 & 0xffffffe0;
    TStack_398.CurrentBitIndex = uStack_3b4;
    TStack_398.UnvisitedBitMask = 0xffffffff;
    TStack_398._padding_ = CONCAT44(uStack_3c4,uVar34);
    iVar19 = (int)uVar32 >> 5;
    TStack_398._28_4_ = local_314;
    TStack_398.BaseBitIndex = local_3b0;
    uStack_378 = CONCAT44(uStack_3a4,iStack_3a8);
    local_3d0 = plVar23;
    uStack_3c8 = uVar34;
    local_3a0 = plVar23;
    TStack_398.Array = local_3c0;
    if (((int)uVar32 < 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar17)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar34 = *(uint *)(plVar23 + 5);
    if (uVar32 != uVar34) {
      pTVar35 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar23 + 2);
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar23[4] !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar35 = (TBitArray<FDefaultBitArrayAllocator> *)plVar23[4];
      }
      uVar32 = -1 << ((byte)uVar32 & 0x1f) &
               *(uint *)((pTVar35->AllocatorInstance).InlineData + (longlong)iVar19 * 4);
      while (uVar32 == 0) {
        lVar30 = (longlong)iVar19;
        uVar27 = uVar27 + 0x20;
        iVar19 = iVar19 + 1;
        uVar32 = uVar34;
        if ((int)((uVar34 - 1) + ((int)(uVar34 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_14a8f5f60;
        uVar32 = *(uint *)((pTVar35->AllocatorInstance).InlineData + lVar30 * 4 + 4);
      }
      uVar29 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
      lVar30 = 0x3f;
      if (uVar29 != 0) {
        for (; uVar29 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      local_3fc = (int)lVar30;
      uVar32 = (uVar27 - 1) + local_3fc;
      if ((int)uVar34 < (int)uVar32) {
        uVar32 = uVar34;
      }
    }
LAB_14a8f5f60:
    while( true ) {
      plVar16 = local_3a0;
      if ((int)local_3a0[1] - *(int *)((longlong)local_3a0 + 0x34) != (int)uStack_378) {
        local_4c8 = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned_short,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_4c8);
      }
      if (((TStack_398.CurrentBitIndex == uVar32) &&
          (TStack_398.Array == (TBitArray<FDefaultBitArrayAllocator> *)(plVar23 + 2))) &&
         (plVar16 == plVar23)) break;
      pFVar1 = (FScriptContainerElement *)(*plVar16 + (longlong)TStack_398.CurrentBitIndex * 0xc);
      if (((local_4d8.AllocatorInstance.Data <= pFVar1) &&
          (pFVar1 < local_4d8.AllocatorInstance.Data + (longlong)local_4d8.ArrayMax * 2)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar19 = local_4d8.ArrayNum;
      if (local_4d8.ArrayNum == local_4d8.ArrayMax) {
        iVar19 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x202,&local_4d8.AllocatorInstance,&local_4d8.ArrayMax);
      }
      local_4d8.ArrayNum = iVar19 + 1;
      *(ushort *)(local_4d8.AllocatorInstance.Data + (longlong)iVar19 * 2) = *(ushort *)pFVar1;
      TStack_398.UnvisitedBitMask = TStack_398.UnvisitedBitMask & ~TStack_398._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_398);
    }
    AlgoImpl::
    IntroSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,TLess<void>_>_>
              ((ushort *)local_4d8.AllocatorInstance.Data,local_4d8.ArrayNum,local_4c7,
               (TLess<void> *)&local_4c7);
    param_6 = local_4a8;
    FAnimationRuntime::EnsureParentsPresent(&local_4d8,&local_4a8->ReferenceSkeleton);
    this = local_3f8;
    goto LAB_14a8f6097;
  }
  uVar32 = (param_6->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum;
  uVar25 = (ulonglong)local_4d8.ArrayNum;
  if (local_4d8.ArrayNum < (int)uVar32) {
    iVar26 = uVar32 - local_4d8.ArrayNum;
    iVar19 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (2,2,iVar26,&local_4d8.AllocatorInstance,&local_4d8.ArrayNum,
                        &local_4d8.ArrayMax);
    memset(local_4d8.AllocatorInstance.Data + (longlong)iVar19 * 2,0,(longlong)iVar26 * 2);
LAB_14a8f5d4b:
    uVar25 = local_4d8._8_8_ & 0xffffffff;
  }
  else {
    if ((int)uVar32 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar32);
    }
    if ((int)uVar32 < local_4d8.ArrayNum) {
      uVar27 = local_4d8.ArrayNum - uVar32;
      if ((int)(uVar27 | uVar32) < 0) {
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar17) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar25 = local_4d8._8_8_ & 0xffffffff;
      }
      if (uVar27 != 0) {
        iVar26 = ((int)uVar25 - uVar27) - uVar32;
        iVar19 = (int)uVar25;
        if (iVar26 != 0) {
          memmove(local_4d8.AllocatorInstance.Data + (longlong)(int)uVar32 * 2,
                  local_4d8.AllocatorInstance.Data + (longlong)(int)uVar32 * 2 +
                  (longlong)(int)uVar27 * 2,(longlong)iVar26 * 2);
          iVar19 = local_4d8.ArrayNum;
        }
        local_4d8.ArrayNum = iVar19 - uVar27;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,&local_4d8.AllocatorInstance,iVar19 - uVar27,&local_4d8.ArrayMax);
        goto LAB_14a8f5d4b;
      }
    }
  }
  uVar33 = uVar29;
  if (0 < (int)uVar32) {
    while( true ) {
      uVar28 = (uint)uVar29;
      uVar27 = uVar34;
      if ((int)uVar28 < (int)uVar25) {
        uVar27 = ~uVar28 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(short *)(local_4d8.AllocatorInstance.Data + uVar33 * 2) = (short)uVar29;
      uVar29 = (ulonglong)(uVar28 + 1);
      param_6 = local_4a8;
      if ((int)uVar32 <= (int)(uVar28 + 1)) break;
      uVar25 = local_4d8._8_8_ & 0xffffffff;
      uVar33 = uVar33 + 1;
    }
  }
LAB_14a8f6097:
  FBoneContainer::FBoneContainer((FBoneContainer *)local_308);
  local_360.ArrayNum = local_4d8.ArrayNum;
  local_360.DataPtr = (ushort *)local_4d8.AllocatorInstance.Data;
  local_3f0.FilterCurves = (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
  local_3f0.FilterMode = DisallowAll;
  local_3f0.LODIndex = 0;
  if ((local_4d8.ArrayNum < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar17)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FBoneContainer::InitializeTo((FBoneContainer *)local_308,&local_360,&local_3f0,(UObject *)param_6)
  ;
  local_498._padding_ = 0;
  local_498.BoneContainer = (FBoneContainer *)0x0;
  FStack_480.Data = (uchar *)0x0;
  local_498._padding_ = 0;
  local_478 = 0;
  local_470 = 0;
  local_468 = 0;
  local_460 = 0;
  local_458 = 0;
  local_4c0._0_8_ = (TTransform<double> *)0x0;
  local_4c0._12_4_ = 0;
  local_350._0_8_ = 0;
  local_350._8_8_ = 0;
  local_350._16_1_ = 0;
  local_350._24_8_ = 0;
  bVar17 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_308 + 0x30));
  if ((((!bVar17) || ((FReferenceSkeleton *)local_308._72_8_ == (FReferenceSkeleton *)0x0)) ||
      ((int)local_308._8_4_ < 1)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InBoneContainer && InBoneContainer->IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                          ,0x97,L""), bVar17)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_4c0._16_8_ = local_308;
  if ((int)local_308._8_4_ < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_308._8_4_);
  }
  local_4c0._8_4_ = 0;
  if ((int)local_4c0._12_4_ < (int)local_308._8_4_) {
    Core::Private::
    ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>_>
              (0x60,0x10,local_308._8_4_,(ForElementType<UE::Math::TTransform<double>_> *)local_4c0,
               0,(int *)(local_4c0 + 0xc));
  }
  Core::Private::
  ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>_>
            (0x60,0x10,local_308._8_4_,(ForElementType<UE::Math::TTransform<double>_> *)local_4c0,
             (int *)(local_4c0 + 8),(int *)(local_4c0 + 0xc));
  FAnimationAssetSampler::FAnimationAssetSampler
            (&local_1a8,param_1,&UE::Math::TTransform<double>::Identity,
             &UE::Math::TVector<double>::ZeroVector,0x1e,false,false);
  iVar19 = 0;
  bVar17 = __real_322bcc77 < (float)((uint)param_3 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  do {
    fVar36 = (float)(iVar19 + -1) * param_3;
    FAnimationAssetSampler::ExtractPose
              (&local_1a8,param_2 + fVar36,(FCompactPose *)local_4c0,&local_350);
    if (param_7) {
      if (((param_6->ReferenceSkeleton).FinalRefBonePose.ArrayNum < 1) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_6->ReferenceSkeleton).FinalRefBonePose.AllocatorInstance.Data;
      dVar3 = *(double *)pFVar1;
      dVar4 = *(double *)(pFVar1 + 8);
      dVar5 = *(double *)(pFVar1 + 0x10);
      dVar6 = *(double *)(pFVar1 + 0x18);
      dVar7 = *(double *)(pFVar1 + 0x20);
      dVar8 = *(double *)(pFVar1 + 0x28);
      dVar9 = *(double *)(pFVar1 + 0x30);
      dVar10 = *(double *)(pFVar1 + 0x38);
      dVar11 = *(double *)(pFVar1 + 0x40);
      dVar12 = *(double *)(pFVar1 + 0x48);
      dVar13 = *(double *)(pFVar1 + 0x50);
      dVar14 = *(double *)(pFVar1 + 0x58);
      if (((int)local_4c0._8_4_ < 1) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (((VectorRegister4Double *)local_4c0._0_8_)->XY).m128d_f64[0] = dVar3;
      (((VectorRegister4Double *)local_4c0._0_8_)->XY).m128d_f64[1] = dVar4;
      (((VectorRegister4Double *)local_4c0._0_8_)->ZW).m128d_f64[0] = dVar5;
      (((VectorRegister4Double *)local_4c0._0_8_)->ZW).m128d_f64[1] = dVar6;
      (((VectorRegister4Double *)(local_4c0._0_8_ + 0x20))->XY).m128d_f64[0] = dVar7;
      (((VectorRegister4Double *)(local_4c0._0_8_ + 0x20))->XY).m128d_f64[1] = dVar8;
      (((VectorRegister4Double *)(local_4c0._0_8_ + 0x20))->ZW).m128d_f64[0] = dVar9;
      (((VectorRegister4Double *)(local_4c0._0_8_ + 0x20))->ZW).m128d_f64[1] = dVar10;
      (((VectorRegister4Double *)(local_4c0._0_8_ + 0x40))->XY).m128d_f64[0] = dVar11;
      (((VectorRegister4Double *)(local_4c0._0_8_ + 0x40))->XY).m128d_f64[1] = dVar12;
      (((VectorRegister4Double *)(local_4c0._0_8_ + 0x40))->ZW).m128d_f64[0] = dVar13;
      (((VectorRegister4Double *)(local_4c0._0_8_ + 0x40))->ZW).m128d_f64[1] = dVar14;
    }
    FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer
              (&local_498,(FBoneContainer *)local_4c0._16_8_);
    uVar15 = local_4c0._8_4_;
    _Src = local_4c0._0_8_;
    lVar30 = (longlong)(int)local_4c0._8_4_;
    local_498._padding_ = CONCAT44(local_498._padding_._4_4_,local_4c0._8_4_);
    if ((local_4c0._8_4_ == 0) && (local_498._padding_._4_4_ == 0)) {
      local_498._padding_ = 0;
      uVar31 = 0;
    }
    else {
      Core::Private::
      ReallocForCopy<0,TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>_>
                (0x60,0x10,local_4c0._8_4_,local_498._padding_._4_4_,
                 (ForElementType<UE::Math::TTransform<double>_> *)&local_498,local_4c0._8_4_,
                 (int *)((longlong)&local_498._padding_ + 4));
      if (uVar15 != 0) {
        memcpy((void *)local_498._padding_,(void *)_Src,lVar30 * 0x60);
      }
      uVar31 = local_498._padding_ & 0xffffffff;
    }
    iVar26 = (int)uVar31;
    if (iVar26 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar31);
    }
    uVar29 = local_478 >> 0x20;
    local_478 = local_478 & 0xffffffff00000000;
    if ((int)uVar29 != iVar26) {
      Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<unsigned_char>_>
                (1,1,iVar26,&FStack_480,0,(int *)((longlong)&local_478 + 4));
      iVar26 = (int)local_498._padding_;
    }
    iVar20 = Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<unsigned_char>_>
                       (1,1,iVar26,&FStack_480,(int *)&local_478,(int *)((longlong)&local_478 + 4));
    memset(FStack_480.Data + iVar20,0,(longlong)iVar26);
    if (((int)local_478 < 1) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *FStack_480.Data = '\x01';
    local_3e0 = (IComponentSpacePoseProvider)&___7FComponentSpacePoseProvider_PoseSearch_UE__6B_;
    local_3d8 = &local_498;
    pUVar24 = FWeakObjectPtr::Get(&((local_498.BoneContainer)->AssetSkeleton).WeakPtr);
    if ((pUVar24 == (UObject *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("GetSkeletonAsset()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                            ,0xfe,L""), bVar18)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_420._17_4_ = 0;
    local_420._21_2_ = 0;
    local_420._23_1_ = 0;
    local_420._0_8_ = 0;
    local_420._8_8_ = 0;
    local_420._16_1_ = 0;
    local_420._24_8_ = 0;
    AddFuturePose(this,fVar36 + param_5,&local_3e0,&local_420);
    iVar19 = iVar19 + 1;
    local_3e0 = (IComponentSpacePoseProvider)&___7IComponentSpacePoseProvider_PoseSearch_UE__6B_;
    param_6 = local_4a8;
  } while (iVar19 < (int)(bVar17 + 1));
  FAnimationAssetSampler::~FAnimationAssetSampler(&local_1a8);
  local_1b8 = 0;
  if (local_1c0 != (void *)0x0) {
    FMemory::Free(local_1c0);
  }
  TSparseArray<TSparseSetElement<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_200);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_218.ReferenceController);
  if ((void *)local_308._208_8_ != (void *)0x0) {
    FMemory::Free((void *)local_308._208_8_);
  }
  if ((void *)local_308._176_8_ != (void *)0x0) {
    FMemory::Free((void *)local_308._176_8_);
  }
  if ((FScriptContainerElement *)local_308._160_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_308._160_8_);
  }
  if ((FScriptContainerElement *)local_308._144_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_308._144_8_);
  }
  if ((FScriptContainerElement *)local_308._128_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_308._128_8_);
  }
  if ((FScriptContainerElement *)local_308._112_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_308._112_8_);
  }
  if ((FScriptContainerElement *)local_308._96_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_308._96_8_);
  }
  if ((FScriptContainerElement *)local_308._80_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_308._80_8_);
  }
  if ((ForElementType<unsigned_int>)local_308._32_8_ != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_308._32_8_);
  }
  if ((FScriptContainerElement *)local_308._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_308._0_8_);
  }
  if (local_4d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d8.AllocatorInstance.Data);
  }
  if (local_448.bPopped == false) {
    if (((local_448.Mem)->TopMark != &local_448) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar17)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_448.bPopped = true;
    (local_448.Mem)->NumMarks = (local_448.Mem)->NumMarks + -1;
    if (local_448.SavedChunk != (local_448.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_448.Mem,local_448.SavedChunk);
    }
    (local_448.Mem)->Top = local_448.Top;
    (local_448.Mem)->TopMark = local_448.NextTopmostMark;
  }
  return;
}

// GenerateTrajectory @ 14a8f8f80

void __thiscall
UE::PoseSearch::FMemStackPoseHistory::GenerateTrajectory
          (FMemStackPoseHistory *this,UObject *param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->PoseHistory == (IPoseHistory *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PoseHistory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                       ,0x46c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                     ,0x46e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetCurveValueAtTime @ 14a8f9e10

bool __thiscall
UE::PoseSearch::FMemStackPoseHistory::GetCurveValueAtTime
          (FMemStackPoseHistory *this,float param_1,FName *param_2,float *param_3,bool param_4)

{
  TArray<UE::PoseSearch::FPoseHistoryEntry,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
  *pTVar1;
  IPoseHistory *pIVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FPoseHistoryEntry *pFVar9;
  TArrayView<FName_const_,int> *pTVar10;
  FPoseHistoryEntry *pFVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 local_48 [32];
  
  if ((this->PoseHistory == (IPoseHistory *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PoseHistory",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                         ,0x4a4,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  uVar14 = (this->FutureEntries).ArrayNum;
  if ((0.0 < param_1) && (0 < (int)uVar14)) {
    pFVar11 = (this->FutureEntries).AllocatorInstance.SecondaryData.Data;
    pTVar1 = &this->FutureEntries;
    if (pFVar11 == (FPoseHistoryEntry *)0x0) {
      pFVar11 = (FPoseHistoryEntry *)pTVar1;
    }
    uVar12 = 0;
    uVar13 = uVar14;
    do {
      iVar8 = (uVar13 >> 1) + uVar12;
      if (pFVar11[iVar8].AccumulatedSeconds <= param_1 &&
          param_1 != pFVar11[iVar8].AccumulatedSeconds) {
        uVar12 = iVar8 + (uVar13 & 1);
      }
      uVar5 = uVar13 >> 1;
      uVar13 = uVar13 >> 1;
    } while (uVar5 != 0);
    uVar13 = uVar14 - 1;
    if ((int)uVar12 < (int)(uVar14 - 1)) {
      uVar13 = uVar12;
    }
    uVar12 = 0;
    if ((int)uVar13 < (int)uVar14) {
      uVar12 = ~uVar13 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    pFVar11 = (this->FutureEntries).AllocatorInstance.SecondaryData.Data;
    if (pFVar11 == (FPoseHistoryEntry *)0x0) {
      pFVar11 = (FPoseHistoryEntry *)pTVar1;
    }
    if ((int)uVar13 < 1) {
      iVar8 = (**(code **)(*(longlong *)this->PoseHistory + 0x50))();
      pFVar9 = pFVar11 + (int)uVar13;
      if (0 < iVar8) {
        pIVar2 = this->PoseHistory;
        lVar3 = *(longlong *)pIVar2;
        iVar8 = (**(code **)(lVar3 + 0x50))(pIVar2);
        pFVar9 = (FPoseHistoryEntry *)(**(code **)(lVar3 + 0x58))(pIVar2,iVar8 + -1);
      }
    }
    else {
      uVar12 = uVar13 - 1;
      uVar14 = 0;
      if ((int)uVar12 < (this->FutureEntries).ArrayNum) {
        uVar14 = ~uVar12 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      pFVar9 = (this->FutureEntries).AllocatorInstance.SecondaryData.Data;
      if (pFVar9 == (FPoseHistoryEntry *)0x0) {
        pFVar9 = (FPoseHistoryEntry *)pTVar1;
      }
      pFVar9 = pFVar9 + (int)uVar12;
    }
    pTVar10 = (TArrayView<FName_const_,int> *)(**(code **)(this->_padding_ + 0x48))(this,local_48);
    bVar6 = LerpEntries(param_1,param_4,pFVar9,pFVar11 + (int)uVar13,param_2,pTVar10,param_3);
    return bVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a8fa070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(*(longlong *)this->PoseHistory + 0x10))
                    (this->PoseHistory,param_1,param_2,param_3);
  return (bool)uVar7;
}

// GetEntry @ 14a8fa3d0

FPoseHistoryEntry * __thiscall
UE::PoseSearch::FMemStackPoseHistory::GetEntry(FMemStackPoseHistory *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FPoseHistoryEntry *pFVar5;
  uint uVar6;
  
  if (this->PoseHistory == (IPoseHistory *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PoseHistory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                       ,0x51e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FPoseHistoryEntry *)(*pcVar1)();
      return pFVar5;
    }
  }
  iVar3 = (**(code **)(*(longlong *)this->PoseHistory + 0x50))();
  if (param_1 < iVar3) {
                    /* WARNING: Could not recover jumptable at 0x00014a8fa42d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar5 = (FPoseHistoryEntry *)
             (**(code **)(*(longlong *)this->PoseHistory + 0x58))(this->PoseHistory,param_1);
    return pFVar5;
  }
  uVar6 = param_1 - iVar3;
  uVar4 = 0;
  if ((int)uVar6 < (this->FutureEntries).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FPoseHistoryEntry *)(*pcVar1)();
      return pFVar5;
    }
  }
  pFVar5 = (this->FutureEntries).AllocatorInstance.SecondaryData.Data;
  if (pFVar5 == (FPoseHistoryEntry *)0x0) {
    pFVar5 = (FPoseHistoryEntry *)&this->FutureEntries;
  }
  return pFVar5 + (int)uVar6;
}

// GetNumEntries @ 14a8faa50

int __thiscall UE::PoseSearch::FMemStackPoseHistory::GetNumEntries(FMemStackPoseHistory *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  if (this->PoseHistory == (IPoseHistory *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PoseHistory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                       ,0x518,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = (this->FutureEntries).ArrayNum;
  iVar4 = (**(code **)(*(longlong *)this->PoseHistory + 0x50))();
  return iVar4 + iVar3;
}

// GetPoseIndicesHistory @ 14a8fb8a0

FPoseIndicesHistory * __thiscall
UE::PoseSearch::FMemStackPoseHistory::GetPoseIndicesHistory(FMemStackPoseHistory *this)

{
  code *pcVar1;
  bool bVar2;
  FPoseIndicesHistory *pFVar3;
  
  if (this->PoseHistory == (IPoseHistory *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PoseHistory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                       ,0x52a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPoseIndicesHistory *)(*pcVar1)();
      return pFVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a8fb8e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar3 = (FPoseIndicesHistory *)(**(code **)(*(longlong *)this->PoseHistory + 0x60))();
  return pFVar3;
}

// GetTransformAtTime @ 14a8fee30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::PoseSearch::FMemStackPoseHistory::GetTransformAtTime
          (FMemStackPoseHistory *this,float param_1,TTransform<double> *param_2,USkeleton *param_3,
          ushort param_4,ushort param_5,bool param_6)

{
  TArray<UE::PoseSearch::FPoseHistoryEntry,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
  *pTVar1;
  double dVar2;
  IPoseHistory *pIVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  undefined4 uVar15;
  FTransformTrajectory *this_00;
  FTransformTrajectorySample *pFVar16;
  FPoseHistoryEntry *pFVar17;
  TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
  *pTVar18;
  uint uVar19;
  FPoseHistoryEntry *pFVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStackY_208 [32];
  TTransform<double> local_1a8;
  FTransformTrajectorySample local_148;
  FTransformTrajectorySample local_108;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if ((this->PoseHistory == (IPoseHistory *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("PoseHistory",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                          ,0x473,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    uVar13 = (*pcVar5)();
    return (bool)uVar13;
  }
  if ((param_1 <= 0.0) || (uVar19 = (this->FutureEntries).ArrayNum, (int)uVar19 < 1)) {
    pcVar5 = *(code **)(*(longlong *)this->PoseHistory + 8);
    uVar13 = (*pcVar5)(this->PoseHistory,pcVar5,param_2,param_3);
  }
  else if (param_4 == param_5) {
    uVar13 = 1;
    *&(param_2->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(param_2->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(param_2->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(param_2->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(param_2->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(param_2->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else if (param_5 == 0xfffe) {
    this_00 = (FTransformTrajectory *)(**(code **)(this->_padding_ + 0x18))(this);
    if (param_4 == 0xffff) {
      pFVar16 = FTransformTrajectory::GetSampleAtTime(this_00,&local_148,param_1,param_6);
      dVar7 = (pFVar16->Facing).Y;
      dVar2 = (pFVar16->Position).field0_0x0._s_0.Z;
      dVar8 = (pFVar16->Position).field0_0x0._s_0.X;
      dVar9 = (pFVar16->Position).field0_0x0._s_0.Y;
      dVar10 = (pFVar16->Facing).Z;
      dVar11 = (pFVar16->Facing).W;
      uVar13 = 1;
      (param_2->Rotation).XY.m128d_f64[0] = (pFVar16->Facing).X;
      (param_2->Rotation).XY.m128d_f64[1] = dVar7;
      (param_2->Rotation).ZW.m128d_f64[0] = dVar10;
      (param_2->Rotation).ZW.m128d_f64[1] = dVar11;
      (param_2->Translation).XY.m128d_f64[0] = dVar8;
      (param_2->Translation).XY.m128d_f64[1] = dVar9;
      (param_2->Translation).ZW.m128d_f64[0] = dVar2;
      (param_2->Translation).ZW.m128d_f64[1] = 0.0;
      dVar2 = _UNK_150689688;
      (param_2->Scale3D).XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
      (param_2->Scale3D).XY.m128d_f64[1] = dVar2;
      dVar2 = _UNK_150689518;
      (param_2->Scale3D).ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
      (param_2->Scale3D).ZW.m128d_f64[1] = dVar2;
    }
    else {
      uVar13 = (**(code **)(this->_padding_ + 8))(this);
      pFVar16 = FTransformTrajectory::GetSampleAtTime(this_00,&local_108,param_1,param_6);
      local_c8.Rotation.ZW.m128d_f64[0] = (pFVar16->Facing).Z;
      local_c8.Rotation.ZW.m128d_f64[1] = (pFVar16->Facing).W;
      local_c8.Rotation.XY.m128d_f64[0] = (pFVar16->Facing).X;
      local_c8.Rotation.XY.m128d_f64[1] = (pFVar16->Facing).Y;
      local_c8.Translation.XY.m128d_f64[0] = (pFVar16->Position).field0_0x0._s_0.X;
      local_c8.Translation.XY.m128d_f64[1] = (pFVar16->Position).field0_0x0._s_0.Y;
      local_c8.Translation.ZW.m128d_f64[0] = (pFVar16->Position).field0_0x0._s_0.Z;
      local_c8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
      local_c8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
      local_c8.Translation.ZW.m128d_f64[1] = 0.0;
      local_c8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
      local_c8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
      UE::Math::TTransform<double>::Multiply(param_2,param_2,&local_c8);
    }
  }
  else if (param_4 < 0xfffe) {
    pFVar20 = (this->FutureEntries).AllocatorInstance.SecondaryData.Data;
    pTVar1 = &this->FutureEntries;
    if (pFVar20 == (FPoseHistoryEntry *)0x0) {
      pFVar20 = (FPoseHistoryEntry *)pTVar1;
    }
    uVar21 = 0;
    uVar22 = uVar19;
    do {
      iVar14 = (uVar22 >> 1) + uVar21;
      if (pFVar20[iVar14].AccumulatedSeconds <= param_1 &&
          param_1 != pFVar20[iVar14].AccumulatedSeconds) {
        uVar21 = iVar14 + (uVar22 & 1);
      }
      uVar6 = uVar22 >> 1;
      uVar22 = uVar22 >> 1;
    } while (uVar6 != 0);
    uVar22 = uVar19 - 1;
    if ((int)uVar21 < (int)(uVar19 - 1)) {
      uVar22 = uVar21;
    }
    uVar21 = 0;
    if ((int)uVar22 < (int)uVar19) {
      uVar21 = ~uVar22 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    pFVar20 = (this->FutureEntries).AllocatorInstance.SecondaryData.Data;
    if (pFVar20 == (FPoseHistoryEntry *)0x0) {
      pFVar20 = (FPoseHistoryEntry *)pTVar1;
    }
    if ((int)uVar22 < 1) {
      iVar14 = (**(code **)(*(longlong *)this->PoseHistory + 0x50))();
      pFVar17 = pFVar20 + (int)uVar22;
      if (0 < iVar14) {
        pIVar3 = this->PoseHistory;
        lVar4 = *(longlong *)pIVar3;
        iVar14 = (**(code **)(lVar4 + 0x50))(pIVar3);
        pFVar17 = (FPoseHistoryEntry *)(**(code **)(lVar4 + 0x58))(pIVar3,iVar14 + -1);
      }
    }
    else {
      uVar21 = uVar22 - 1;
      uVar19 = 0;
      if ((int)uVar21 < (this->FutureEntries).ArrayNum) {
        uVar19 = ~uVar21 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        uVar13 = (*pcVar5)();
        return (bool)uVar13;
      }
      pFVar17 = (this->FutureEntries).AllocatorInstance.SecondaryData.Data;
      if (pFVar17 == (FPoseHistoryEntry *)0x0) {
        pFVar17 = (FPoseHistoryEntry *)pTVar1;
      }
      pFVar17 = pFVar17 + (int)uVar21;
    }
    pTVar18 = (TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
               *)(**(code **)(this->_padding_ + 0x40))(this);
    uVar13 = LerpEntries(param_1,param_6,pFVar17,pFVar20 + (int)uVar22,param_3,(USkeleton *)0x0,
                         pTVar18,param_4,param_5,param_2);
  }
  else {
    uVar15 = (**(code **)(this->_padding_ + 8))();
    uVar13 = (undefined1)uVar15;
    auVar24._8_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
          (double)CONCAT44(*(uint *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 0xc) &
                           _UNK_15061cc8c,
                           *(uint *)((param_2->Scale3D).ZW.m128d_f64 + 1) & _UNK_15061cc88));
    auVar24._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
          (double)CONCAT44(*(uint *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 4) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           *(uint *)(param_2->Scale3D).ZW.m128d_f64 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    uVar19 = movmskpd((int)this,auVar24);
    auVar23._8_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
          (double)CONCAT44(*(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc) &
                           _UNK_15061cc8c,
                           *(uint *)((param_2->Scale3D).XY.m128d_f64 + 1) & _UNK_15061cc88));
    auVar23._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
          (double)CONCAT44(*(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           *(uint *)(param_2->Scale3D).XY.m128d_f64 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    iVar14 = movmskpd(uVar15,auVar23);
    if ((uVar19 & 0x3fffffff) == 0 && iVar14 == 0) {
      local_1a8.Rotation.XY.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
      local_1a8.Rotation.XY.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
      local_1a8.Rotation.XY.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
      local_1a8.Rotation.XY.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
      local_1a8.Rotation.ZW.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
      local_1a8.Rotation.ZW.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
      local_1a8.Rotation.ZW.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
      local_1a8.Rotation.ZW.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
      local_1a8.Translation.XY.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
      local_1a8.Translation.XY.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
      local_1a8.Translation.XY.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
      local_1a8.Translation.XY.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
      local_1a8.Translation.ZW.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
      local_1a8.Translation.ZW.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
      local_1a8.Translation.ZW.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
      local_1a8.Translation.ZW.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
      local_1a8.Scale3D.ZW = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
      local_1a8.Scale3D.XY = UE::Math::TTransform<double>::Identity.Scale3D.XY;
    }
    else {
      UE::Math::TTransform<double>::InverseFast(param_2,&local_1a8);
    }
    *(undefined4 *)(param_2->Rotation).XY.m128d_f64 = local_1a8.Rotation.XY.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 4) =
         local_1a8.Rotation.XY.m128d_f64[0]._4_4_;
    *(undefined4 *)((param_2->Rotation).XY.m128d_f64 + 1) = local_1a8.Rotation.XY.m128d_f64[1]._0_4_
    ;
    *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 0xc) =
         local_1a8.Rotation.XY.m128d_f64[1]._4_4_;
    *(undefined4 *)(param_2->Rotation).ZW.m128d_f64 = local_1a8.Rotation.ZW.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(param_2->Rotation).ZW.m128d_f64 + 4) =
         local_1a8.Rotation.ZW.m128d_f64[0]._4_4_;
    *(undefined4 *)((param_2->Rotation).ZW.m128d_f64 + 1) = local_1a8.Rotation.ZW.m128d_f64[1]._0_4_
    ;
    *(undefined4 *)((longlong)(param_2->Rotation).ZW.m128d_f64 + 0xc) =
         local_1a8.Rotation.ZW.m128d_f64[1]._4_4_;
    *(undefined4 *)(param_2->Translation).XY.m128d_f64 = local_1a8.Translation.XY.m128d_f64[0]._0_4_
    ;
    *(undefined4 *)((longlong)(param_2->Translation).XY.m128d_f64 + 4) =
         local_1a8.Translation.XY.m128d_f64[0]._4_4_;
    *(undefined4 *)((param_2->Translation).XY.m128d_f64 + 1) =
         local_1a8.Translation.XY.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(param_2->Translation).XY.m128d_f64 + 0xc) =
         local_1a8.Translation.XY.m128d_f64[1]._4_4_;
    *(undefined4 *)(param_2->Translation).ZW.m128d_f64 = local_1a8.Translation.ZW.m128d_f64[0]._0_4_
    ;
    *(undefined4 *)((longlong)(param_2->Translation).ZW.m128d_f64 + 4) =
         local_1a8.Translation.ZW.m128d_f64[0]._4_4_;
    *(undefined4 *)((param_2->Translation).ZW.m128d_f64 + 1) =
         local_1a8.Translation.ZW.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(param_2->Translation).ZW.m128d_f64 + 0xc) =
         local_1a8.Translation.ZW.m128d_f64[1]._4_4_;
    *&(param_2->Scale3D).XY.m128d_f64 = local_1a8.Scale3D.XY.m128d_f64;
    *&(param_2->Scale3D).ZW.m128d_f64 = local_1a8.Scale3D.ZW.m128d_f64;
  }
  return (bool)uVar13;
}

// Init @ 14a9002b0

void __thiscall
UE::PoseSearch::FMemStackPoseHistory::Init(FMemStackPoseHistory *this,IPoseHistory *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != (IPoseHistory *)0x0) {
    this->PoseHistory = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("InPoseHistory",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                     ,0x45f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->PoseHistory = (IPoseHistory *)0x0;
  return;
}

// SetTrajectory @ 14a908830

void __thiscall
UE::PoseSearch::FMemStackPoseHistory::SetTrajectory
          (FMemStackPoseHistory *this,FTransformTrajectory *param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->PoseHistory == (IPoseHistory *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PoseHistory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                       ,0x465,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                     ,0x467,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// DebugDraw @ 14a925950

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
UE::PoseSearch::FMemStackPoseHistory::DebugDraw
          (FMemStackPoseHistory *this,UWorld *param_1,FColor param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchHistory.h"
                     ,0x136,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetBoneToTransformMap @ 14a92b040

TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
* __thiscall UE::PoseSearch::FMemStackPoseHistory::GetBoneToTransformMap(FMemStackPoseHistory *this)

{
  code *pcVar1;
  bool bVar2;
  TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
  *pTVar3;
  
  if (this->PoseHistory == (IPoseHistory *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PoseHistory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchHistory.h"
                       ,0x12e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a92b082. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar3 = (TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
            *)(**(code **)(*(longlong *)this->PoseHistory + 0x40))();
  return pTVar3;
}

// GetCollectedCurves @ 14a92b2e0

TArrayView<FName_const_,int> * __thiscall
UE::PoseSearch::FMemStackPoseHistory::GetCollectedCurves
          (FMemStackPoseHistory *this,TArrayView<FName_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FName_const_,int> *pTVar3;
  
  if (this->PoseHistory == (IPoseHistory *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PoseHistory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchHistory.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<FName_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  (**(code **)(*(longlong *)this->PoseHistory + 0x48))(this->PoseHistory,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTrajectory @ 14a92cc60

FTransformTrajectory * __thiscall
UE::PoseSearch::FMemStackPoseHistory::GetTrajectory(FMemStackPoseHistory *this)

{
  code *pcVar1;
  bool bVar2;
  FTransformTrajectory *pFVar3;
  
  if (this->PoseHistory == (IPoseHistory *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PoseHistory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchHistory.h"
                       ,0x127,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FTransformTrajectory *)(*pcVar1)();
      return pFVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a92cca2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar3 = (FTransformTrajectory *)(**(code **)(*(longlong *)this->PoseHistory + 0x18))();
  return pFVar3;
}

// GetTrajectorySpeedMultiplier @ 14a92cd70

float __thiscall
UE::PoseSearch::FMemStackPoseHistory::GetTrajectorySpeedMultiplier(FMemStackPoseHistory *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (this->PoseHistory == (IPoseHistory *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PoseHistory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchHistory.h"
                       ,300,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a92cdb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar3 = (float)(**(code **)(*(longlong *)this->PoseHistory + 0x30))();
  return fVar3;
}

// IsEmpty @ 14a92f720

bool __thiscall UE::PoseSearch::FMemStackPoseHistory::IsEmpty(FMemStackPoseHistory *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  
  if (this->PoseHistory == (IPoseHistory *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PoseHistory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchHistory.h"
                       ,0x12d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  cVar4 = (**(code **)(*(longlong *)this->PoseHistory + 0x38))();
  if ((cVar4 != '\0') && ((this->FutureEntries).ArrayNum == 0)) {
    return true;
  }
  return false;
}

