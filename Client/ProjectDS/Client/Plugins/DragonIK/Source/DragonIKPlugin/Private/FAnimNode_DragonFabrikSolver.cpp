// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 12

// StaticStruct @ 14d29ac80

UScriptStruct * __cdecl FAnimNode_DragonFabrikSolver::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_DragonFabrikSolver.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DragonIKPlugin();
    Z_Registration_Info_UScriptStruct_FAnimNode_DragonFabrikSolver.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_DragonFabrikSolver,(UObject *)pUVar1,
                         L"AnimNode_DragonFabrikSolver");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_DragonFabrikSolver.OuterSingleton;
}

// FAnimNode_DragonFabrikSolver @ 14d2b6be0

FAnimNode_DragonFabrikSolver * __thiscall
FAnimNode_DragonFabrikSolver::FAnimNode_DragonFabrikSolver(FAnimNode_DragonFabrikSolver *this)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  FAnimNode_DragonControlBase::FAnimNode_DragonControlBase((FAnimNode_DragonControlBase *)this);
  *(undefined ***)this = &___7FAnimNode_DragonFabrikSolver__6B_;
  (this->TipBone_Input).BoneName.ComparisonIndex = 0;
  (this->TipBone_Input).BoneName.Number = 0;
  puVar1 = &(this->TipBone_Input).field_0x8;
  (this->TipBone_Input).BoneIndex = -1;
  (this->TipBone_Input).bUseSkeletonIndex = 0;
  (this->TipBone_Input).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->RootBone_Input).BoneName.ComparisonIndex = 0;
  (this->RootBone_Input).BoneName.Number = 0;
  puVar1 = &(this->RootBone_Input).field_0x8;
  (this->RootBone_Input).BoneIndex = -1;
  (this->RootBone_Input).bUseSkeletonIndex = 0;
  (this->RootBone_Input).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  this->Precision = 0.1;
  this->MaxIterations = 5.0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Target_Transform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Target_Transform).Rotation.XY.m128d_f64[1] = (double)fVar2;
  (this->Target_Transform).Rotation.ZW.m128d_f64[0] = (double)fVar3;
  (this->Target_Transform).Rotation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Target_Transform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Target_Transform).Translation.XY.m128d_f64[1] = (double)fVar2;
  (this->Target_Transform).Translation.ZW.m128d_f64[0] = (double)fVar3;
  (this->Target_Transform).Translation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Target_Transform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Target_Transform).Scale3D.XY.m128d_f64[1] = (double)fVar2;
  (this->Target_Transform).Scale3D.ZW.m128d_f64[0] = (double)fVar3;
  (this->Target_Transform).Scale3D.ZW.m128d_f64[1] = (double)fVar4;
  this->ChainLength = 0;
  (this->ChainBoneNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChainBoneNames).ArrayNum = 0;
  (this->ChainBoneNames).ArrayMax = 0;
  (this->BoneLengths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneLengths).ArrayNum = 0;
  (this->BoneLengths).ArrayMax = 0;
  (this->ChainBoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChainBoneIndices).ArrayNum = 0;
  (this->ChainBoneIndices).ArrayMax = 0;
  this->bAllowTwist = true;
  this->first_start = true;
  return this;
}

// ConditionalDebugDraw @ 14d2c7050

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
FAnimNode_DragonFabrikSolver::ConditionalDebugDraw
          (FAnimNode_DragonFabrikSolver *this,FPrimitiveDrawInterface *param_1,
          USkeletalMeshComponent *param_2)

{
  return;
}

// EvaluateComponentSpaceInternal @ 14d2d4d70

void __thiscall
FAnimNode_DragonFabrikSolver::EvaluateComponentSpaceInternal
          (FAnimNode_DragonFabrikSolver *this,FComponentSpacePoseContext *param_1)

{
  return;
}

// EvaluateSkeletalControl_AnyThread @ 14d2d8f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimNode_DragonFabrikSolver::EvaluateSkeletalControl_AnyThread
          (FAnimNode_DragonFabrikSolver *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  FCompactPoseBoneIndex FVar1;
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
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *pTVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  TTransform<double> *pTVar17;
  TQuat<double> *pTVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  ForAnyElementType FVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint uVar28;
  uint uVar29;
  double dVar30;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined1 auStackY_718 [32];
  ForAnyElementType local_6c8;
  undefined8 local_6c0;
  undefined1 local_6b8 [4];
  FCompactPoseBoneIndex local_6b4;
  ForAnyElementType local_6b0;
  int local_6a8;
  int iStack_6a4;
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> local_6a0;
  TVector<double>_u_0 local_690;
  TVector<double>_u_0 local_678;
  FCompactPoseBoneIndex local_660 [2];
  undefined8 local_658;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  double local_648;
  double dStack_640;
  double local_638;
  undefined8 local_630;
  undefined4 uStack_628;
  undefined4 uStack_624;
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *local_620;
  TVector<double>_u_0 local_618;
  TVector<double>_u_0 local_600;
  TVector<double>_u_0 local_5e8;
  TVector<double>_u_0 local_5d0;
  double local_5b8;
  double dStack_5b0;
  double local_5a8;
  double local_5a0;
  double dStack_598;
  double local_590;
  double local_588;
  double dStack_580;
  double local_578;
  undefined4 local_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  double local_560;
  double local_558;
  double dStack_550;
  double local_548;
  double local_540;
  double dStack_538;
  double local_530;
  double local_528;
  double dStack_520;
  double local_518;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  double local_4f8;
  double local_4f0;
  double local_4e8;
  double local_4e0;
  double local_4d8;
  double local_4d0;
  double local_4c8;
  double local_4c0;
  double local_4b8;
  double local_4b0;
  double local_4a8;
  double dStack_4a0;
  double local_498;
  double local_490;
  double dStack_488;
  double local_480;
  double local_478;
  double dStack_470;
  double local_468;
  undefined4 local_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined8 local_450;
  double local_448;
  double dStack_440;
  double local_438;
  double local_430;
  double dStack_428;
  double local_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  TQuat<double> local_3b8;
  TQuat<double> local_398;
  TQuat<double> local_378;
  TQuat<double> local_358;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_718;
  local_6b4 = (this->TipBone_Input).CachedCompactPoseIndex;
  uVar26 = 0;
  FVar1 = (this->RootBone_Input).CachedCompactPoseIndex;
  local_6a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6a0.ArrayNum = 0;
  local_6a0.ArrayMax = 0;
  uVar22 = uVar26;
  local_620 = param_2;
  while( true ) {
    iVar15 = (int)uVar22;
    if ((local_6a0.AllocatorInstance.Data <= &local_6b4) &&
       (&local_6b4 <
        (FCompactPoseBoneIndex *)
        (local_6a0.AllocatorInstance.Data + (longlong)local_6a0.ArrayMax * 4))) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar14) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar15 = local_6a0.ArrayNum;
    }
    if (iVar15 == local_6a0.ArrayMax) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_6a0.AllocatorInstance,&local_6a0.ArrayMax);
    }
    local_6a0.ArrayNum = iVar15 + 1;
    memmove((FCompactPoseBoneIndex *)(local_6a0.AllocatorInstance.Data + 4),
            local_6a0.AllocatorInstance.Data,(longlong)iVar15 << 2);
    *(FCompactPoseBoneIndex *)local_6a0.AllocatorInstance.Data = local_6b4;
    FBoneContainer::GetParentBoneIndex
              (*(FBoneContainer **)&(param_1->Pose).Pose.field_0x10,local_660);
    local_6b4 = local_660[0];
    if (local_660[0] == FVar1) break;
    uVar22 = local_6a0._8_8_ & 0xffffffff;
  }
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>::Insert(&local_6a0,&local_6b4,0);
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>::operator=
            (&this->ChainBoneIndices,&local_6a0);
  uVar23 = this->ChainLength;
  local_6b0.Data = (FScriptContainerElement *)0x0;
  local_6a8 = 0;
  iStack_6a4 = 0;
  if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
  }
  if (0 < (int)uVar23) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar23,&local_6b0,0,&iStack_6a4);
  }
  uVar23 = this->ChainLength;
  uVar22 = uVar26;
  if (0 < (int)uVar23) {
    do {
      uVar21 = (uint)uVar26;
      uVar23 = 0;
      if ((int)uVar21 < (this->ChainBoneNames).ArrayNum) {
        uVar23 = ~uVar21 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_630 = *(undefined8 *)((this->ChainBoneNames).AllocatorInstance.Data + uVar22);
      uStack_628 = 0x7fffffff;
      uStack_624 = 0xffffffff;
      if (((local_6b0.Data <= (FScriptContainerElement *)&local_630) &&
          ((FScriptContainerElement *)&local_630 < local_6b0.Data + (longlong)iStack_6a4 * 0x10)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_6a8 == iStack_6a4) {
        local_6a8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x410,&local_6b0,&iStack_6a4);
      }
      lVar19 = (longlong)local_6a8;
      uVar26 = (ulonglong)(uVar21 + 1);
      local_6a8 = local_6a8 + 1;
      *(undefined8 *)(local_6b0.Data + lVar19 * 0x10) = local_630;
      *(ulonglong *)(local_6b0.Data + lVar19 * 0x10 + 8) = CONCAT44(uStack_624,uStack_628);
      uVar23 = this->ChainLength;
      uVar22 = uVar22 + 8;
    } while ((int)(uVar21 + 1) < (int)uVar23);
  }
  local_6c8.Data = (FScriptContainerElement *)0x0;
  local_6c0 = 0;
  if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
  }
  if (0 < (int)uVar23) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar23,&local_6c8,0,(int *)((longlong)&local_6c0 + 4));
  }
  iVar15 = local_6a8;
  pFVar24 = local_6b0.Data + (longlong)local_6a8 * 0x10;
  FVar25.Data = local_6b0.Data;
  while( true ) {
    if (local_6a8 != iVar15) {
      local_6b8[0] = 0;
      `TCheckedPointerIterator<FBoneReference,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_6b8);
    }
    if (FVar25.Data == pFVar24) break;
    pTVar17 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                        (&param_1->Pose,*(FCompactPoseBoneIndex *)(FVar25.Data + 0xc));
    if (((local_6c8.Data <= pTVar17) &&
        (pTVar17 < (TTransform<double> *)(local_6c8.Data + (longlong)local_6c0._4_4_ * 0x60))) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar16 = (int)local_6c0;
    if ((int)local_6c0 == local_6c0._4_4_) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1060,&local_6c8,(int *)((longlong)&local_6c0 + 4));
    }
    local_6c0 = CONCAT44(local_6c0._4_4_,iVar16 + 1);
    dVar12 = (pTVar17->Rotation).XY.m128d_f64[1];
    lVar19 = (longlong)iVar16 * 0x60;
    FVar25.Data = FVar25.Data + 0x10;
    *(double *)&local_6c8.Data[lVar19].field_0x0 = (pTVar17->Rotation).XY.m128d_f64[0];
    *(double *)(local_6c8.Data + lVar19 + 8) = dVar12;
    dVar12 = (pTVar17->Rotation).ZW.m128d_f64[1];
    *(double *)(local_6c8.Data + lVar19 + 0x10) = (pTVar17->Rotation).ZW.m128d_f64[0];
    *(double *)(local_6c8.Data + lVar19 + 0x10 + 8) = dVar12;
    dVar12 = (pTVar17->Translation).XY.m128d_f64[1];
    *(double *)(local_6c8.Data + lVar19 + 0x20) = (pTVar17->Translation).XY.m128d_f64[0];
    *(double *)(local_6c8.Data + lVar19 + 0x20 + 8) = dVar12;
    dVar12 = (pTVar17->Translation).ZW.m128d_f64[1];
    *(double *)(local_6c8.Data + lVar19 + 0x30) = (pTVar17->Translation).ZW.m128d_f64[0];
    *(double *)(local_6c8.Data + lVar19 + 0x30 + 8) = dVar12;
    dVar12 = (pTVar17->Scale3D).XY.m128d_f64[1];
    *(double *)(local_6c8.Data + lVar19 + 0x40) = (pTVar17->Scale3D).XY.m128d_f64[0];
    *(double *)(local_6c8.Data + lVar19 + 0x40 + 8) = dVar12;
    dVar12 = (pTVar17->Scale3D).ZW.m128d_f64[1];
    *(double *)(local_6c8.Data + lVar19 + 0x50) = (pTVar17->Scale3D).ZW.m128d_f64[0];
    *(double *)(local_6c8.Data + lVar19 + 0x50 + 8) = dVar12;
  }
  uVar23 = 0;
  if ((int)((int)local_6c0 - 1U) < (int)local_6c0) {
    uVar23 = ~((int)local_6c0 - 1U) >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar19 = param_1->_padding_;
  lVar20 = (longlong)((int)local_6c0 + -1) * 0x60;
  local_418 = *(undefined8 *)&local_6c8.Data[lVar20].field_0x0;
  uStack_410 = *(undefined8 *)(local_6c8.Data + lVar20 + 8);
  local_408 = *(undefined8 *)(local_6c8.Data + lVar20 + 0x10);
  uStack_400 = *(undefined8 *)(local_6c8.Data + lVar20 + 0x10 + 8);
  pFVar24 = local_6c8.Data + lVar20 + 0x20;
  uVar40 = *(undefined4 *)pFVar24;
  uVar42 = *(undefined4 *)(pFVar24 + 4);
  local_658 = *(double *)pFVar24;
  uVar45 = *(undefined4 *)(pFVar24 + 8);
  uVar46 = *(undefined4 *)(pFVar24 + 0xc);
  pFVar24 = local_6c8.Data + lVar20 + 0x30;
  uVar47 = *(undefined4 *)pFVar24;
  uVar48 = *(undefined4 *)(pFVar24 + 4);
  uStack_500 = *(undefined4 *)(pFVar24 + 8);
  uStack_4fc = *(undefined4 *)(pFVar24 + 0xc);
  local_3d8 = *(undefined8 *)(local_6c8.Data + lVar20 + 0x40);
  uStack_3d0 = *(undefined8 *)(local_6c8.Data + lVar20 + 0x40 + 8);
  local_3c8 = *(undefined8 *)(local_6c8.Data + lVar20 + 0x50);
  uStack_3c0 = *(undefined8 *)(local_6c8.Data + lVar20 + 0x50 + 8);
  uStack_650 = uVar45;
  uStack_64c = uVar46;
  local_508 = uVar47;
  uStack_504 = uVar48;
  if ((*(longlong *)(lVar19 + 0x158) == 0) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2821110184175206020>,true,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                          ,0x17c,"SkeletalMeshComponent"), bVar14)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar19 = *(longlong *)(lVar19 + 0x158);
  uVar23 = 0;
  if ((int)(local_6a8 - 1U) < local_6a8) {
    uVar23 = ~(local_6a8 - 1U) >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar17 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                      (&param_1->Pose,
                       *(FCompactPoseBoneIndex *)
                        (local_6b0.Data + (longlong)(local_6a8 + -1) * 0x10 + 0xc));
  UE::Math::TTransform<double>::GetRelativeTransform
            ((TTransform<double> *)(lVar19 + 0x1f0),&local_148,pTVar17);
  dVar12 = __real_3ff0000000000000;
  uVar23 = this->ChainLength;
  uVar21 = uVar23 - 2;
  uVar43 = SUB84(__real_3e45798ee0000000,0);
  uVar44 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
  if (-1 < (int)uVar21) {
    lVar20 = (longlong)(int)uVar21 * 0x60;
    lVar19 = (longlong)(int)uVar21 * 4;
    do {
      uVar23 = uVar23 - 1;
      local_560 = (double)CONCAT44(uVar48,uVar47);
      uVar28 = ~uVar21 >> 0x1f;
      uVar29 = 0;
      if ((int)uVar21 < (int)local_6c0) {
        uVar29 = uVar28;
      }
      local_570 = uVar40;
      uStack_56c = uVar42;
      uStack_568 = uVar45;
      uStack_564 = uVar46;
      if ((uVar29 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_4a8 = *(double *)(local_6c8.Data + lVar20 + 0x20);
      dStack_4a0 = *(double *)(local_6c8.Data + lVar20 + 0x20 + 8);
      local_498 = *(double *)(local_6c8.Data + lVar20 + 0x30);
      local_690._s_0.X = (double)CONCAT44(uStack_56c,local_570) - local_4a8;
      uVar39 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar41 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      local_690._s_0.Z = local_560 - local_498;
      local_690._s_0.Y = (double)CONCAT44(uStack_564,uStack_568) - dStack_4a0;
      dVar3 = local_690._s_0.Y * local_690._s_0.Y + local_690._s_0.X * local_690._s_0.X +
              local_690._s_0.Z * local_690._s_0.Z;
      if (dVar3 != dVar12) {
        if ((double)CONCAT44(uVar44,uVar43) <= dVar3) {
          local_4e8 = dVar12 / SQRT(dVar3);
          local_690._s_0.X = local_690._s_0.X * local_4e8;
          local_690._s_0.Y = local_690._s_0.Y * local_4e8;
          local_690._s_0.Z = local_690._s_0.Z * local_4e8;
        }
        else {
          local_690._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          local_690._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          local_690._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          local_690._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          local_690._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
      }
      uVar29 = 0;
      if ((int)uVar21 < (this->BoneLengths).ArrayNum) {
        uVar29 = uVar28;
      }
      local_548 = local_148.Translation.ZW.m128d_f64[0];
      local_558 = local_148.Translation.XY.m128d_f64[0];
      dStack_550 = local_148.Translation.XY.m128d_f64[1];
      if (uVar29 == 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar39 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar41 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      }
      dVar35 = (double)*(int *)((this->BoneLengths).AllocatorInstance.Data + lVar19);
      dVar3 = local_558 - dVar35 * local_690._s_0.X;
      dVar30 = dStack_550 - dVar35 * local_690._s_0.Y;
      local_1a8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_5a8 = local_548 - dVar35 * local_690._s_0.Z;
      local_1a8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_1a8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_1a8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      local_1a8.Translation.ZW.m128d_f64[1] = 0.0;
      local_5b8 = dVar3;
      dStack_5b0 = dVar30;
      local_1a8.Translation.XY.m128d_f64[0] = dVar3;
      local_1a8.Translation.XY.m128d_f64[1] = dVar30;
      local_1a8.Translation.ZW.m128d_f64[0] = local_5a8;
      if (this->bAllowTwist == false) {
        local_450 = CONCAT44(uVar48,uVar47);
        local_5e8._s_0.X = (double)CONCAT44(uVar42,uVar40) - dVar3;
        local_5e8._s_0.Z = (double)CONCAT44(uVar48,uVar47) - local_5a8;
        local_5e8._s_0.Y = (double)CONCAT44(uVar46,uVar45) - dVar30;
        dVar3 = local_5e8._s_0.Y * local_5e8._s_0.Y + local_5e8._s_0.X * local_5e8._s_0.X +
                local_5e8._s_0.Z * local_5e8._s_0.Z;
        if (dVar3 != dVar12) {
          if ((double)CONCAT44(uVar44,uVar43) <= dVar3) {
            local_4d0 = dVar12 / SQRT(dVar3);
            local_5e8._s_0.X = local_5e8._s_0.X * local_4d0;
            local_5e8._s_0.Y = local_5e8._s_0.Y * local_4d0;
            local_5e8._s_0.Z = local_5e8._s_0.Z * local_4d0;
          }
          else {
            local_5e8._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            local_5e8._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
            local_5e8._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            local_5e8._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            local_5e8._s_0.Z = (double)CONCAT44(uVar41,uVar39);
          }
        }
        local_460 = uVar40;
        uStack_45c = uVar42;
        uStack_458 = uVar45;
        uStack_454 = uVar46;
        pTVar18 = UE::Math::TQuat<double>::FindBetweenNormals
                            (&local_398,(TVector<double> *)&local_690._s_0,
                             (TVector<double> *)&local_5e8._s_0);
        local_1a8.Rotation.ZW.m128d_f64[0] = pTVar18->Z;
        local_1a8.Rotation.ZW.m128d_f64[1] = pTVar18->W;
        local_1a8.Rotation.XY.m128d_f64[0] = pTVar18->X;
        local_1a8.Rotation.XY.m128d_f64[1] = pTVar18->Y;
      }
      else {
        uVar29 = 0;
        if ((int)uVar21 < (int)local_6c0) {
          uVar29 = uVar28;
        }
        if (uVar29 == 0) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar14) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar39 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar41 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        }
        local_588 = *(double *)(local_6c8.Data + lVar20 + 0x20);
        dStack_580 = *(double *)(local_6c8.Data + lVar20 + 0x20 + 8);
        local_578 = *(double *)(local_6c8.Data + lVar20 + 0x30);
        uVar29 = 0;
        if ((int)uVar23 < (int)local_6c0) {
          uVar29 = ~uVar23 >> 0x1f;
        }
        if (uVar29 == 0) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar14) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar39 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar41 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        }
        uVar46 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        uVar45 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        local_490 = *(double *)(local_6c8.Data + lVar20 + 0x80);
        dStack_488 = *(double *)(local_6c8.Data + lVar20 + 0x80 + 8);
        local_480 = *(double *)(local_6c8.Data + lVar20 + 0x90);
        dVar38 = local_588 - local_490;
        dVar5 = local_578 - local_480;
        dVar4 = dStack_580 - dStack_488;
        dVar35 = dVar4 * dVar4 + dVar38 * dVar38 + dVar5 * dVar5;
        if (dVar35 != dVar12) {
          if ((double)CONCAT44(uVar44,uVar43) <= dVar35) {
            local_4f0 = dVar12 / SQRT(dVar35);
            dVar38 = dVar38 * local_4f0;
            dVar4 = dVar4 * local_4f0;
            dVar5 = dVar5 * local_4f0;
          }
          else {
            dVar38 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                      UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
            dVar5 = (double)CONCAT44(uVar41,uVar39);
            dVar4 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                     UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
          }
        }
        dVar10 = local_690._s_0.Y * dVar5 - local_690._s_0.Z * dVar4;
        dVar8 = local_690._s_0.Z * dVar38 - local_690._s_0.X * dVar5;
        dVar6 = local_690._s_0.X * dVar4 - local_690._s_0.Y * dVar38;
        dVar35 = dVar8 * dVar8 + dVar10 * dVar10 + dVar6 * dVar6;
        dVar11 = dVar10;
        dVar9 = dVar8;
        dVar7 = dVar6;
        if ((dVar35 != dVar12) &&
           (dVar11 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                      UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_),
           dVar9 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                    UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_),
           dVar7 = (double)CONCAT44(uVar41,uVar39), __real_3e45798ee0000000 <= dVar35)) {
          local_4e0 = dVar12 / SQRT(dVar35);
          dVar11 = dVar10 * local_4e0;
          dVar9 = dVar8 * local_4e0;
          dVar7 = dVar6 * local_4e0;
        }
        dVar35 = local_690._s_0.Y * dVar4 + local_690._s_0.X * dVar38 + local_690._s_0.Z * dVar5;
        dVar4 = __real_bff0000000000000;
        if ((__real_bff0000000000000 <= dVar35) && (dVar4 = dVar35, dVar12 <= dVar35)) {
          dVar4 = dVar12;
        }
        acos(dVar4);
        __libm_sse2_sincos_();
        dStack_470 = (double)CONCAT44(uStack_64c,uStack_650);
        dVar35 = extraout_XMM0._0_8_;
        dVar11 = dVar11 * dVar35;
        dVar9 = dVar9 * dVar35;
        local_478 = local_658;
        local_468 = (double)CONCAT44(uStack_504,local_508);
        local_600._s_0.Y = dStack_470 - dVar30;
        local_600._s_0.Z = local_468 - local_5a8;
        local_600._s_0.X = local_658 - dVar3;
        dVar7 = dVar7 * dVar35;
        dVar30 = extraout_XMM0._8_8_;
        dVar3 = local_600._s_0.Y * local_600._s_0.Y + local_600._s_0.X * local_600._s_0.X +
                local_600._s_0.Z * local_600._s_0.Z;
        if (dVar3 != dVar12) {
          if (__real_3e45798ee0000000 <= dVar3) {
            local_4d8 = dVar12 / SQRT(dVar3);
            local_600._s_0.X = local_600._s_0.X * local_4d8;
            local_600._s_0.Y = local_600._s_0.Y * local_4d8;
            local_600._s_0.Z = local_600._s_0.Z * local_4d8;
          }
          else {
            local_600._4_4_ = uVar42;
            local_600._0_4_ = uVar40;
            local_600._12_4_ = uVar46;
            local_600._8_4_ = uVar45;
            local_600._s_0.Z = (double)CONCAT44(uVar41,uVar39);
          }
        }
        pTVar18 = UE::Math::TQuat<double>::FindBetweenNormals
                            (&local_3b8,(TVector<double> *)&local_690._s_0,
                             (TVector<double> *)&local_600._s_0);
        dVar4 = pTVar18->Z;
        dVar5 = pTVar18->W;
        dVar38 = pTVar18->X;
        dVar6 = pTVar18->Y;
        auVar31._8_4_ = extraout_XMM0._8_4_;
        auVar31._0_8_ = dVar30;
        auVar31._12_4_ = extraout_XMM0._12_4_;
        auVar36._8_4_ = SUB84(dVar9,0);
        auVar36._0_8_ = dVar9;
        auVar36._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        auVar32._8_4_ = SUB84(dVar7,0);
        auVar32._0_8_ = dVar7;
        auVar32._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        dVar3 = dVar11 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                auVar31._8_8_ * dVar6 +
                auVar36._8_8_ * dVar5 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                auVar32._8_8_ * dVar38 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar35 = dVar11 * dVar38 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 dVar30 * dVar5 +
                 dVar9 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 dVar7 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        uVar43 = SUB84(__real_3e45798ee0000000,0);
        uVar44 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
        local_1a8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar3,0);
        local_1a8.Rotation.XY.m128d_f64[0] =
             dVar11 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar30 * dVar38 +
             dVar9 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar7 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        local_1a8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
        local_1a8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar35,0);
        local_1a8.Rotation.ZW.m128d_f64[0] =
             dVar11 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             dVar30 * dVar4 +
             dVar9 * dVar38 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar7 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        local_1a8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar35 >> 0x20);
        uVar40 = (undefined4)local_658;
        uVar42 = local_658._4_4_;
        uVar45 = uStack_650;
        uVar46 = uStack_64c;
      }
      uVar29 = 0;
      if ((int)uVar23 < (int)local_6c0) {
        uVar29 = ~uVar23 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_2c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_2c8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_2c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_2c8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_2c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_2c8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_2c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_2c8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_2c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_2c8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_2c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_2c8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply
                (&local_2c8,&local_1a8,
                 (TTransform<double> *)(local_6c8.Data + (longlong)(int)uVar23 * 0x60));
      dVar11 = local_2c8.Scale3D.ZW.m128d_f64[1];
      dVar10 = local_2c8.Scale3D.ZW.m128d_f64[0];
      dVar9 = local_2c8.Scale3D.XY.m128d_f64[1];
      dVar8 = local_2c8.Scale3D.XY.m128d_f64[0];
      dVar7 = local_2c8.Translation.ZW.m128d_f64[1];
      dVar6 = local_2c8.Translation.ZW.m128d_f64[0];
      dVar38 = local_2c8.Translation.XY.m128d_f64[1];
      dVar5 = local_2c8.Translation.XY.m128d_f64[0];
      dVar4 = local_2c8.Rotation.ZW.m128d_f64[1];
      dVar35 = local_2c8.Rotation.ZW.m128d_f64[0];
      dVar30 = local_2c8.Rotation.XY.m128d_f64[1];
      dVar3 = local_2c8.Rotation.XY.m128d_f64[0];
      uVar29 = 0;
      if ((int)uVar21 < (int)local_6c0) {
        uVar29 = uVar28;
      }
      if ((uVar29 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar19 = lVar19 + -4;
      *(double *)(local_6c8.Data + lVar20) = dVar3;
      *(double *)(local_6c8.Data + lVar20 + 8) = dVar30;
      *(double *)(local_6c8.Data + lVar20 + 0x10) = dVar35;
      *(double *)(local_6c8.Data + lVar20 + 0x10 + 8) = dVar4;
      *(double *)(local_6c8.Data + lVar20 + 0x20) = dVar5;
      *(double *)(local_6c8.Data + lVar20 + 0x20 + 8) = dVar38;
      *(double *)(local_6c8.Data + lVar20 + 0x30) = dVar6;
      *(double *)(local_6c8.Data + lVar20 + 0x30 + 8) = dVar7;
      *(double *)(local_6c8.Data + lVar20 + 0x40) = dVar8;
      *(double *)(local_6c8.Data + lVar20 + 0x40 + 8) = dVar9;
      *(double *)(local_6c8.Data + lVar20 + 0x50) = dVar10;
      *(double *)(local_6c8.Data + lVar20 + 0x50 + 8) = dVar11;
      lVar20 = lVar20 + -0x60;
      uVar21 = uVar21 - 1;
      uVar47 = local_508;
      uVar48 = uStack_504;
    } while (-1 < (int)uVar21);
  }
  uVar22 = 0;
  iVar15 = this->ChainLength;
  if (0 < iVar15 + -1) {
    iVar16 = 1;
    uVar26 = uVar22;
    uVar27 = uVar22;
    do {
      uVar23 = (uint)uVar22;
      uVar29 = ~(uVar23 + 1) >> 0x1f;
      uVar21 = 0;
      if (iVar16 < (int)local_6c0) {
        uVar21 = uVar29;
      }
      if ((uVar21 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar28 = ~uVar23 >> 0x1f;
      local_648 = *(double *)(local_6c8.Data + uVar26 + 0x80);
      dStack_640 = *(double *)(local_6c8.Data + uVar26 + 0x80 + 8);
      local_638 = *(double *)(local_6c8.Data + uVar26 + 0x90);
      uVar21 = 0;
      if ((int)uVar23 < (int)local_6c0) {
        uVar21 = uVar28;
      }
      if ((uVar21 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_448 = *(double *)(local_6c8.Data + uVar26 + 0x20);
      dStack_440 = *(double *)(local_6c8.Data + uVar26 + 0x20 + 8);
      local_438 = *(double *)(local_6c8.Data + uVar26 + 0x30);
      local_678._s_0.X = local_648 - local_448;
      uVar40 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar42 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      local_678._s_0.Z = local_638 - local_438;
      local_678._s_0.Y = dStack_640 - dStack_440;
      dVar3 = local_678._s_0.Y * local_678._s_0.Y + local_678._s_0.X * local_678._s_0.X +
              local_678._s_0.Z * local_678._s_0.Z;
      if (dVar3 != dVar12) {
        if ((double)CONCAT44(uVar44,uVar43) <= dVar3) {
          local_4c8 = dVar12 / SQRT(dVar3);
          local_678._s_0.X = local_678._s_0.X * local_4c8;
          local_678._s_0.Y = local_678._s_0.Y * local_4c8;
          local_678._s_0.Z = local_678._s_0.Z * local_4c8;
        }
        else {
          local_678._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          local_678._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          local_678._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          local_678._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          local_678._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
      }
      uVar21 = 0;
      if ((int)uVar23 < (int)local_6c0) {
        uVar21 = uVar28;
      }
      if (uVar21 == 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar40 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar42 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      }
      local_540 = *(double *)(local_6c8.Data + uVar26 + 0x20);
      dStack_538 = *(double *)(local_6c8.Data + uVar26 + 0x20 + 8);
      local_530 = *(double *)(local_6c8.Data + uVar26 + 0x30);
      uVar21 = 0;
      if ((int)uVar23 < (this->BoneLengths).ArrayNum) {
        uVar21 = uVar28;
      }
      if (uVar21 == 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar40 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar42 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      }
      dVar30 = (double)*(int *)((this->BoneLengths).AllocatorInstance.Data + uVar27);
      local_268.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_590 = local_678._s_0.Z * dVar30 + local_530;
      dVar3 = local_678._s_0.X * dVar30 + local_540;
      dVar30 = local_678._s_0.Y * dVar30 + dStack_538;
      local_268.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_268.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_268.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      local_268.Translation.ZW.m128d_f64[1] = 0.0;
      local_5a0 = dVar3;
      dStack_598 = dVar30;
      local_268.Translation.XY.m128d_f64[0] = dVar3;
      local_268.Translation.XY.m128d_f64[1] = dVar30;
      local_268.Translation.ZW.m128d_f64[0] = local_590;
      if (this->bAllowTwist == false) {
        local_5d0._s_0.X = local_648 - dVar3;
        local_5d0._s_0.Y = dStack_640 - dVar30;
        local_5d0._s_0.Z = local_638 - local_590;
        dVar3 = local_5d0._s_0.Y * local_5d0._s_0.Y + local_5d0._s_0.X * local_5d0._s_0.X +
                local_5d0._s_0.Z * local_5d0._s_0.Z;
        if (dVar3 != dVar12) {
          if ((double)CONCAT44(uVar44,uVar43) <= dVar3) {
            local_4f8 = dVar12 / SQRT(dVar3);
            local_5d0._s_0.X = local_4f8 * local_5d0._s_0.X;
            local_5d0._s_0.Y = local_4f8 * local_5d0._s_0.Y;
            local_5d0._s_0.Z = local_4f8 * local_5d0._s_0.Z;
          }
          else {
            local_5d0._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            local_5d0._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
            local_5d0._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            local_5d0._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            local_5d0._s_0.Z = (double)CONCAT44(uVar42,uVar40);
          }
        }
        pTVar18 = UE::Math::TQuat<double>::FindBetweenNormals
                            (&local_358,(TVector<double> *)&local_678._s_0,
                             (TVector<double> *)&local_5d0._s_0);
        local_268.Rotation.ZW.m128d_f64[0] = pTVar18->Z;
        local_268.Rotation.ZW.m128d_f64[1] = pTVar18->W;
        local_268.Rotation.XY.m128d_f64[0] = pTVar18->X;
        local_268.Rotation.XY.m128d_f64[1] = pTVar18->Y;
      }
      else {
        uVar21 = 0;
        if ((int)uVar23 < (int)local_6c0) {
          uVar21 = uVar28;
        }
        if (uVar21 == 0) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar14) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar40 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar42 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        }
        local_528 = *(double *)(local_6c8.Data + uVar26 + 0x20);
        dStack_520 = *(double *)(local_6c8.Data + uVar26 + 0x20 + 8);
        local_518 = *(double *)(local_6c8.Data + uVar26 + 0x30);
        uVar21 = 0;
        if ((int)(uVar23 + 1) < (int)local_6c0) {
          uVar21 = uVar29;
        }
        if (uVar21 == 0) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar14) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar40 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar42 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        }
        uVar48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        uVar47 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar46 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar45 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        local_430 = *(double *)(local_6c8.Data + uVar26 + 0x80);
        dStack_428 = *(double *)(local_6c8.Data + uVar26 + 0x80 + 8);
        local_420 = *(double *)(local_6c8.Data + uVar26 + 0x90);
        dVar38 = local_528 - local_430;
        dVar5 = local_518 - local_420;
        dVar4 = dStack_520 - dStack_428;
        dVar35 = dVar4 * dVar4 + dVar38 * dVar38 + dVar5 * dVar5;
        if (dVar35 != dVar12) {
          if ((double)CONCAT44(uVar44,uVar43) <= dVar35) {
            local_4c0 = dVar12 / SQRT(dVar35);
            dVar38 = dVar38 * local_4c0;
            dVar4 = dVar4 * local_4c0;
            dVar5 = dVar5 * local_4c0;
          }
          else {
            dVar38 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                      UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
            dVar5 = (double)CONCAT44(uVar42,uVar40);
            dVar4 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                     UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
          }
        }
        dVar7 = local_678._s_0.Z * dVar4 - local_678._s_0.Y * dVar5;
        dVar6 = local_678._s_0.Y * dVar38 - local_678._s_0.X * dVar4;
        dVar8 = local_678._s_0.X * dVar5 - local_678._s_0.Z * dVar38;
        dVar35 = dVar8 * dVar8 + dVar7 * dVar7 + dVar6 * dVar6;
        dVar10 = dVar7;
        dVar9 = dVar6;
        dVar11 = dVar8;
        if ((dVar35 != dVar12) &&
           (dVar10 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                      UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_),
           dVar9 = (double)CONCAT44(uVar42,uVar40),
           dVar11 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                     UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_),
           __real_3e45798ee0000000 <= dVar35)) {
          local_4b8 = dVar12 / SQRT(dVar35);
          dVar10 = dVar7 * local_4b8;
          dVar9 = dVar6 * local_4b8;
          dVar11 = dVar8 * local_4b8;
        }
        dVar35 = local_678._s_0.Y * dVar4 + local_678._s_0.X * dVar38 + local_678._s_0.Z * dVar5;
        dVar4 = __real_bff0000000000000;
        if ((__real_bff0000000000000 <= dVar35) && (dVar4 = dVar35, dVar12 <= dVar35)) {
          dVar4 = dVar12;
        }
        acos(dVar4);
        __libm_sse2_sincos_();
        local_618._s_0.X = local_648 - dVar3;
        dVar35 = extraout_XMM0_00._0_8_;
        local_658 = dVar35 * dVar11;
        local_618._s_0.Y = dStack_640 - dVar30;
        dVar9 = dVar35 * dVar9;
        local_618._s_0.Z = local_638 - local_590;
        dVar35 = dVar35 * dVar10;
        dVar30 = extraout_XMM0_00._8_8_;
        dVar3 = local_618._s_0.Y * local_618._s_0.Y + local_618._s_0.X * local_618._s_0.X +
                local_618._s_0.Z * local_618._s_0.Z;
        if (dVar3 != dVar12) {
          if (__real_3e45798ee0000000 <= dVar3) {
            local_4b0 = dVar12 / SQRT(dVar3);
            local_618._s_0.X = local_618._s_0.X * local_4b0;
            local_618._s_0.Y = local_618._s_0.Y * local_4b0;
            local_618._s_0.Z = local_618._s_0.Z * local_4b0;
          }
          else {
            local_618._4_4_ = uVar46;
            local_618._0_4_ = uVar45;
            local_618._12_4_ = uVar48;
            local_618._8_4_ = uVar47;
            local_618._s_0.Z = (double)CONCAT44(uVar42,uVar40);
          }
        }
        pTVar18 = UE::Math::TQuat<double>::FindBetweenNormals
                            (&local_378,(TVector<double> *)&local_678._s_0,
                             (TVector<double> *)&local_618._s_0);
        dVar5 = pTVar18->Z;
        dVar38 = pTVar18->W;
        dVar6 = pTVar18->X;
        dVar7 = pTVar18->Y;
        auVar33._8_4_ = extraout_XMM0_00._8_4_;
        auVar33._0_8_ = dVar30;
        auVar33._12_4_ = extraout_XMM0_00._12_4_;
        auVar37._8_4_ = SUB84(local_658,0);
        auVar37._0_8_ = local_658;
        auVar37._12_4_ = (int)((ulonglong)local_658 >> 0x20);
        auVar34._8_4_ = SUB84(dVar9,0);
        auVar34._0_8_ = dVar9;
        auVar34._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        dVar3 = dVar35 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                auVar33._8_8_ * dVar7 +
                auVar37._8_8_ * dVar38 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                auVar34._8_8_ * dVar6 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar4 = dVar35 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                dVar30 * dVar38 +
                local_658 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
                + dVar9 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        local_268.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar3,0);
        local_268.Rotation.XY.m128d_f64[0] =
             dVar35 * dVar38 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar30 * dVar6 +
             local_658 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar9 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        local_268.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
        local_268.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar4,0);
        local_268.Rotation.ZW.m128d_f64[0] =
             dVar35 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             dVar30 * dVar5 +
             local_658 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar9 * dVar38 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        local_268.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar4 >> 0x20);
      }
      uVar21 = 0;
      if ((int)uVar23 < (int)local_6c0) {
        uVar21 = uVar28;
      }
      if ((uVar21 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_208.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_208.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_208.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_208.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_208.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_208.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_208.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_208.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_208.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_208.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_208.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_208.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply
                (&local_208,&local_268,
                 (TTransform<double> *)(local_6c8.Data + (longlong)(int)uVar23 * 0x60));
      dVar11 = local_208.Scale3D.ZW.m128d_f64[1];
      dVar10 = local_208.Scale3D.ZW.m128d_f64[0];
      dVar9 = local_208.Scale3D.XY.m128d_f64[1];
      dVar8 = local_208.Scale3D.XY.m128d_f64[0];
      dVar7 = local_208.Translation.ZW.m128d_f64[1];
      dVar6 = local_208.Translation.ZW.m128d_f64[0];
      dVar38 = local_208.Translation.XY.m128d_f64[1];
      dVar5 = local_208.Translation.XY.m128d_f64[0];
      dVar4 = local_208.Rotation.ZW.m128d_f64[1];
      dVar35 = local_208.Rotation.ZW.m128d_f64[0];
      dVar30 = local_208.Rotation.XY.m128d_f64[1];
      dVar3 = local_208.Rotation.XY.m128d_f64[0];
      uVar21 = 0;
      if ((int)(uVar23 + 1) < (int)local_6c0) {
        uVar21 = uVar29;
      }
      if ((uVar21 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar22 = (ulonglong)(uVar23 + 1);
      uVar27 = uVar27 + 4;
      *(double *)(local_6c8.Data + uVar26 + 0x60) = dVar3;
      *(double *)(local_6c8.Data + uVar26 + 0x60 + 8) = dVar30;
      *(double *)(local_6c8.Data + uVar26 + 0x70) = dVar35;
      *(double *)(local_6c8.Data + uVar26 + 0x70 + 8) = dVar4;
      *(double *)(local_6c8.Data + uVar26 + 0x80) = dVar5;
      *(double *)(local_6c8.Data + uVar26 + 0x80 + 8) = dVar38;
      *(double *)(local_6c8.Data + uVar26 + 0x90) = dVar6;
      *(double *)(local_6c8.Data + uVar26 + 0x90 + 8) = dVar7;
      *(double *)(local_6c8.Data + uVar26 + 0xa0) = dVar8;
      *(double *)(local_6c8.Data + uVar26 + 0xa0 + 8) = dVar9;
      uVar43 = SUB84(__real_3e45798ee0000000,0);
      uVar44 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
      *(double *)(local_6c8.Data + uVar26 + 0xb0) = dVar10;
      *(double *)(local_6c8.Data + uVar26 + 0xb0 + 8) = dVar11;
      uVar26 = uVar26 + 0x60;
      iVar15 = this->ChainLength;
      iVar16 = iVar16 + 1;
    } while ((int)(uVar23 + 1) < iVar15 + -1);
  }
  pTVar13 = local_620;
  uVar23 = 0;
  if (0 < iVar15) {
    lVar19 = 0;
    local_658 = 0.0;
    do {
      uVar21 = 0;
      if ((int)uVar23 < (int)local_6c0) {
        uVar21 = ~uVar23 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar25.Data = local_6c8.Data;
      uVar21 = 0;
      if ((int)uVar23 < local_6a8) {
        uVar21 = ~uVar23 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      dVar12 = local_658;
      local_338 = *(undefined4 *)(local_6b0.Data + (longlong)local_658 + 0xc);
      local_328 = *(undefined8 *)(FVar25.Data + lVar19);
      uStack_320 = *(undefined8 *)(FVar25.Data + lVar19 + 8);
      pFVar24 = (pTVar13->AllocatorInstance).Data;
      local_318 = *(undefined8 *)(FVar25.Data + lVar19 + 0x10);
      uStack_310 = *(undefined8 *)(FVar25.Data + lVar19 + 0x10 + 8);
      local_308 = *(undefined8 *)(FVar25.Data + lVar19 + 0x20);
      uStack_300 = *(undefined8 *)(FVar25.Data + lVar19 + 0x20 + 8);
      local_2f8 = *(undefined8 *)(FVar25.Data + lVar19 + 0x30);
      uStack_2f0 = *(undefined8 *)(FVar25.Data + lVar19 + 0x30 + 8);
      local_2e8 = *(undefined8 *)(FVar25.Data + lVar19 + 0x40);
      uStack_2e0 = *(undefined8 *)(FVar25.Data + lVar19 + 0x40 + 8);
      local_2d8 = *(undefined8 *)(FVar25.Data + lVar19 + 0x50);
      uStack_2d0 = *(undefined8 *)(FVar25.Data + lVar19 + 0x50 + 8);
      if (((pFVar24 <= (FScriptContainerElement *)&local_338) &&
          ((FScriptContainerElement *)&local_338 < pFVar24 + (longlong)pTVar13->ArrayMax * 0x70)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar15 = pTVar13->ArrayNum;
      if (iVar15 == pTVar13->ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1070,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
      }
      pTVar13->ArrayNum = iVar15 + 1;
      local_658 = (double)((longlong)dVar12 + 0x10);
      uVar23 = uVar23 + 1;
      lVar20 = (longlong)iVar15 * 0x70;
      pFVar24 = (pTVar13->AllocatorInstance).Data;
      lVar19 = lVar19 + 0x60;
      *(ulonglong *)(pFVar24 + lVar20) = CONCAT44(uStack_334,local_338);
      *(undefined8 *)(pFVar24 + lVar20 + 8) = uStack_330;
      *(undefined8 *)(pFVar24 + lVar20 + 0x10) = local_328;
      *(undefined8 *)(pFVar24 + lVar20 + 0x10 + 8) = uStack_320;
      *(undefined8 *)(pFVar24 + lVar20 + 0x20) = local_318;
      *(undefined8 *)(pFVar24 + lVar20 + 0x20 + 8) = uStack_310;
      *(undefined8 *)(pFVar24 + lVar20 + 0x30) = local_308;
      *(undefined8 *)(pFVar24 + lVar20 + 0x30 + 8) = uStack_300;
      *(undefined8 *)(pFVar24 + lVar20 + 0x40) = local_2f8;
      *(undefined8 *)(pFVar24 + lVar20 + 0x40 + 8) = uStack_2f0;
      *(undefined8 *)(pFVar24 + lVar20 + 0x50) = local_2e8;
      *(undefined8 *)(pFVar24 + lVar20 + 0x50 + 8) = uStack_2e0;
      *(undefined8 *)(pFVar24 + lVar20 + 0x60) = local_2d8;
      *(undefined8 *)(pFVar24 + lVar20 + 0x60 + 8) = uStack_2d0;
    } while ((int)uVar23 < this->ChainLength);
  }
  if ((TTransform<double> *)local_6c8.Data != (TTransform<double> *)0x0) {
    FMemory::Free(local_6c8.Data);
  }
  if (local_6b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6b0.Data);
  }
  if ((FCompactPoseBoneIndex *)local_6a0.AllocatorInstance.Data != (FCompactPoseBoneIndex *)0x0) {
    FMemory::Free(local_6a0.AllocatorInstance.Data);
  }
  return;
}

// Evaluate_AnyThread @ 14d2dd220

void __thiscall
FAnimNode_DragonFabrikSolver::Evaluate_AnyThread
          (FAnimNode_DragonFabrikSolver *this,FPoseContext *param_1)

{
  return;
}

// FABRIK_BodySystem @ 14d2e8890

void __thiscall
FAnimNode_DragonFabrikSolver::FABRIK_BodySystem
          (FAnimNode_DragonFabrikSolver *this,FCSPose<FCompactPose> *param_1,
          FComponentSpacePoseContext *param_2,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_3)

{
  return;
}

// GetLODThreshold @ 14d2f2290

int __thiscall FAnimNode_DragonFabrikSolver::GetLODThreshold(FAnimNode_DragonFabrikSolver *this)

{
  return *(int *)&this->field_0x20;
}

// InitializeBoneReferences @ 14d2f5670

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
FAnimNode_DragonFabrikSolver::InitializeBoneReferences
          (FAnimNode_DragonFabrikSolver *this,FBoneContainer *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  ushort uVar5;
  FCompactPoseBoneIndex FVar6;
  USkeletalMeshComponent *pUVar7;
  FSkelMeshRefPoseOverride *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  undefined1 auVar12 [12];
  ForAnyElementType _Src;
  bool bVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  FName FVar17;
  FName FVar18;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar19;
  uint uVar20;
  longlong lVar21;
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar26;
  double dVar27;
  longlong local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FCompactPoseBoneIndex local_98;
  int local_94;
  undefined1 local_90 [8];
  ForAnyElementType local_88;
  int local_80;
  int iStack_7c;
  undefined1 local_78 [16];
  double local_68;
  undefined1 local_60 [16];
  double local_50;
  undefined8 uVar25;
  
  uVar20 = this->ChainLength;
  pTVar1 = &this->ChainBoneNames;
  this->SavedBoneContainer = param_1;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  piVar4 = &(this->ChainBoneNames).ArrayMax;
  if (*piVar4 < (int)uVar20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar20,&pTVar1->AllocatorInstance,(this->ChainBoneNames).ArrayNum,piVar4);
  }
  pTVar2 = &this->BoneLengths;
  uVar20 = this->ChainLength - 1;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  piVar4 = &(this->BoneLengths).ArrayMax;
  if (*piVar4 < (int)uVar20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar20,&pTVar2->AllocatorInstance,(this->BoneLengths).ArrayNum,piVar4);
  }
  uVar20 = this->ChainLength;
  pTVar3 = &this->ChainBoneIndices;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  piVar4 = &(this->ChainBoneIndices).ArrayMax;
  if (*piVar4 < (int)uVar20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar20,&pTVar3->AllocatorInstance,(this->ChainBoneIndices).ArrayNum,piVar4);
  }
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  iStack_7c = 0;
  local_98 = (this->TipBone_Input).CachedCompactPoseIndex;
  FVar6 = (this->RootBone_Input).CachedCompactPoseIndex;
  do {
    if (((local_88.Data <= &local_98) &&
        (&local_98 < (FCompactPoseBoneIndex *)(local_88.Data + (longlong)iStack_7c * 4))) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if (local_80 == iStack_7c) {
      local_80 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_88,&iStack_7c);
    }
    lVar21 = (longlong)local_80;
    local_80 = local_80 + 1;
    memmove((FCompactPoseBoneIndex *)(local_88.Data + 4),local_88.Data,lVar21 << 2);
    *(FCompactPoseBoneIndex *)local_88.Data = local_98;
    pUVar7 = this->owning_skel;
    USkinnedMeshComponent::GetBoneName((USkinnedMeshComponent *)pUVar7,(int)local_res18);
    FVar17 = USkinnedMeshComponent::GetParentBone
                       ((USkinnedMeshComponent *)pUVar7,(FName)local_res20);
    local_98 = (FCompactPoseBoneIndex)
               USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)pUVar7,*(FName *)FVar17)
    ;
  } while (local_98 != FVar6);
  piVar4 = &(this->ChainBoneIndices).ArrayMax;
  if (((local_88.Data <= &local_98) &&
      (&local_98 < (FCompactPoseBoneIndex *)(local_88.Data + (longlong)iStack_7c * 4))) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (local_80 == iStack_7c) {
    local_80 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_88,&iStack_7c);
  }
  lVar21 = (longlong)local_80;
  _local_80 = CONCAT44(iStack_7c,local_80 + 1);
  memmove((FCompactPoseBoneIndex *)(local_88.Data + 4),local_88.Data,lVar21 << 2);
  _Src.Data = local_88.Data;
  *(FCompactPoseBoneIndex *)local_88.Data = local_98;
  if (pTVar3 != (TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *)&local_88) {
    iVar15 = local_80;
    lVar21 = (longlong)local_80;
    (this->ChainBoneIndices).ArrayNum = local_80;
    if ((local_80 == 0) && (*piVar4 == 0)) {
      *piVar4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_80,*piVar4,&pTVar3->AllocatorInstance,local_80,piVar4);
      if (iVar15 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,_Src.Data,lVar21 << 2);
      }
    }
  }
  uVar20 = 0;
  if (0 < this->ChainLength) {
    local_res10 = 0;
    do {
      pUVar7 = this->owning_skel;
      uVar14 = 0;
      if ((int)uVar20 < (this->ChainBoneIndices).ArrayNum) {
        uVar14 = ~uVar20 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FVar18 = USkinnedMeshComponent::GetBoneName((USkinnedMeshComponent *)pUVar7,(int)local_90);
      FVar17 = (FName)(pTVar1->AllocatorInstance).Data;
      if ((((ulonglong)FVar17 <= (ulonglong)FVar18) &&
          ((ulonglong)FVar18 <
           (ulonglong)((longlong)FVar17 + (longlong)(this->ChainBoneNames).ArrayMax * 8))) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar15 = (this->ChainBoneNames).ArrayNum;
      if (iVar15 == (this->ChainBoneNames).ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&pTVar1->AllocatorInstance,&(this->ChainBoneNames).ArrayMax);
      }
      (this->ChainBoneNames).ArrayNum = iVar15 + 1;
      *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar15 * 8) =
           *(undefined8 *)FVar18;
      if (0 < (int)uVar20) {
        uVar14 = 0;
        if ((int)uVar20 < (this->ChainBoneIndices).ArrayNum) {
          uVar14 = ~uVar20 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar8 = (param_1->RefPoseOverride).Object;
        if (pFVar8 == (FSkelMeshRefPoseOverride *)0x0) {
          pTVar19 = &param_1->RefSkeleton->FinalRefBonePose;
        }
        else {
          pTVar19 = &pFVar8->RefBonePoses;
        }
        uVar14 = *(uint *)((pTVar3->AllocatorInstance).Data + local_res10);
        uVar16 = 0;
        if ((int)uVar14 < (param_1->BoneIndicesArray).ArrayNum) {
          uVar16 = ~uVar14 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar5 = *(ushort *)
                 ((param_1->BoneIndicesArray).AllocatorInstance.Data + (longlong)(int)uVar14 * 2);
        if ((pTVar19->ArrayNum <= (int)(uint)uVar5) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar9 = (pTVar19->AllocatorInstance).Data;
        lVar21 = (ulonglong)uVar5 * 0x60;
        auVar24 = *(undefined1 (*) [16])(pFVar9 + lVar21 + 0x20);
        local_68 = *(double *)(pFVar9 + lVar21 + 0x30);
        uVar14 = 0;
        if ((int)(uVar20 - 1) < (this->ChainBoneIndices).ArrayNum) {
          uVar14 = -uVar20 >> 0x1f;
        }
        local_78 = auVar24;
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), auVar24 = extraout_XMM0, bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar25 = auVar24._8_8_;
        pFVar8 = (param_1->RefPoseOverride).Object;
        if (pFVar8 == (FSkelMeshRefPoseOverride *)0x0) {
          pTVar19 = &param_1->RefSkeleton->FinalRefBonePose;
        }
        else {
          pTVar19 = &pFVar8->RefBonePoses;
        }
        uVar14 = *(uint *)((pTVar3->AllocatorInstance).Data + local_res10 + -4);
        uVar16 = 0;
        if ((int)uVar14 < (param_1->BoneIndicesArray).ArrayNum) {
          uVar16 = ~uVar14 >> 0x1f;
        }
        if (uVar16 == 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          uVar25 = extraout_XMM0_00._8_8_;
          if (bVar13) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        uVar5 = *(ushort *)
                 ((param_1->BoneIndicesArray).AllocatorInstance.Data + (longlong)(int)uVar14 * 2);
        if (pTVar19->ArrayNum <= (int)(uint)uVar5) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          uVar25 = extraout_XMM0_01._8_8_;
          if (bVar13) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        pFVar9 = (pTVar19->AllocatorInstance).Data;
        pFVar10 = (pTVar2->AllocatorInstance).Data;
        lVar21 = (ulonglong)uVar5 * 0x60;
        local_60 = *(undefined1 (*) [16])(pFVar9 + lVar21 + 0x20);
        local_50 = *(double *)(pFVar9 + lVar21 + 0x30);
        dVar26 = (double)local_78._0_8_ - local_60._0_8_;
        auVar12._4_8_ = uVar25;
        auVar12._0_4_ = local_60._4_4_;
        auVar22._0_8_ = auVar12._0_8_ << 0x20;
        auVar22._8_4_ = local_60._8_4_;
        auVar22._12_4_ = local_60._12_4_;
        dVar27 = (double)local_78._8_8_ - auVar22._8_8_;
        auVar23._0_8_ = (local_68 - local_50) * (local_68 - local_50);
        auVar23._8_8_ = 0;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = dVar26 * dVar26 + dVar27 * dVar27 + auVar23._0_8_;
        auVar24 = sqrtpd(auVar23,auVar24);
        local_94 = (int)auVar24._0_8_;
        if (((pFVar10 <= (FScriptContainerElement *)&local_94) &&
            ((FScriptContainerElement *)&local_94 <
             pFVar10 + (longlong)(this->BoneLengths).ArrayMax * 4)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar15 = (this->BoneLengths).ArrayNum;
        if (iVar15 == (this->BoneLengths).ArrayMax) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar2->AllocatorInstance,&(this->BoneLengths).ArrayMax);
        }
        (this->BoneLengths).ArrayNum = iVar15 + 1;
        *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 4) = local_94;
      }
      uVar20 = uVar20 + 1;
      local_res10 = local_res10 + 4;
    } while ((int)uVar20 < this->ChainLength);
  }
  if ((FCompactPoseBoneIndex *)local_88.Data != (FCompactPoseBoneIndex *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return;
}

// Initialize_AnyThread @ 14d300070

void __thiscall
FAnimNode_DragonFabrikSolver::Initialize_AnyThread
          (FAnimNode_DragonFabrikSolver *this,FAnimationInitializeContext *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_DragonControlBase::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->field_0x10,param_1);
  this->field_0x41 = 0;
  this->field_0x8b = 0;
  FStatsHierarchical::EndMeasurement();
  lVar1 = *(longlong *)param_1;
  if (*(longlong *)(lVar1 + 0x158) == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2821110184175206020>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                       ,0x17c,"SkeletalMeshComponent");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->owning_skel = *(USkeletalMeshComponent **)(lVar1 + 0x158);
  return;
}

// IsValidToEvaluate @ 14d300bb0

bool __thiscall
FAnimNode_DragonFabrikSolver::IsValidToEvaluate
          (FAnimNode_DragonFabrikSolver *this,USkeleton *param_1,FBoneContainer *param_2)

{
  return true;
}

// UpdateInternal @ 14d318170

void __thiscall
FAnimNode_DragonFabrikSolver::UpdateInternal
          (FAnimNode_DragonFabrikSolver *this,FAnimationUpdateContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_DragonControlBase::UpdateInternal");
  FStatsHierarchical::EndMeasurement();
  return;
}

