// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 16

// StaticStruct @ 14d29b700

UScriptStruct * __cdecl FAnimNode_ChineseDragonSolver::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ChineseDragonSolver.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DragonIKPlugin();
    Z_Registration_Info_UScriptStruct_FAnimNode_ChineseDragonSolver.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ChineseDragonSolver,(UObject *)pUVar1,
                         L"AnimNode_ChineseDragonSolver");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_ChineseDragonSolver.OuterSingleton;
}

// ~FAnimNode_ChineseDragonSolver @ 14d29ed30

void __thiscall
FAnimNode_ChineseDragonSolver::~FAnimNode_ChineseDragonSolver(FAnimNode_ChineseDragonSolver *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->path_record).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FChinaDragonChainLink,int>
            ((FChinaDragonChainLink *)(this->Chain).AllocatorInstance.Data,(this->Chain).ArrayNum);
  pFVar1 = (this->Chain).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Custom_Bone_Input).Custom_Bone_Structure.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  return;
}

// FAnimNode_ChineseDragonSolver @ 14d2b5cd0

FAnimNode_ChineseDragonSolver * __thiscall
FAnimNode_ChineseDragonSolver::FAnimNode_ChineseDragonSolver(FAnimNode_ChineseDragonSolver *this)

{
  undefined1 *puVar1;
  
  FAnimNode_DragonControlBase::FAnimNode_DragonControlBase((FAnimNode_DragonControlBase *)this);
  this->component_scale = 1.0;
  this->solver_counter = 0;
  this->_padding_ = (longlong)&___7FAnimNode_ChineseDragonSolver__6B_;
  this->Use_Custom_Bone_Chain = false;
  (this->TipBone).BoneName.ComparisonIndex = 0;
  (this->TipBone).BoneName.Number = 0;
  puVar1 = &(this->TipBone).field_0x8;
  (this->TipBone).BoneIndex = -1;
  (this->TipBone).bUseSkeletonIndex = 0;
  (this->TipBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->RootBone).BoneName.ComparisonIndex = 0;
  (this->RootBone).BoneName.Number = 0;
  puVar1 = &(this->RootBone).field_0x8;
  (this->RootBone).BoneIndex = -1;
  (this->RootBone).bUseSkeletonIndex = 0;
  (this->RootBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->Custom_Bone_Input).Custom_Bone_Structure.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Custom_Bone_Input).Custom_Bone_Structure.ArrayNum = 0;
  (this->Custom_Bone_Input).Custom_Bone_Structure.ArrayMax = 0;
  *&(this->EffectorTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->EffectorTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->EffectorTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->EffectorTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->EffectorTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->EffectorTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->Initial_Effector_Reference).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Initial_Effector_Reference).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Initial_Effector_Reference).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Initial_Effector_Reference).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Initial_Effector_Reference).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Initial_Effector_Reference).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->Use_Advanced_Strict_Chain_Logic = true;
  this->Fix_Root_in_Place = false;
  this->Use_ScaleRot_Add_Mode = true;
  this->Interpolation_Is_World = true;
  this->Interpolation_Speed = 15.0;
  this->Precision = 1.0;
  this->Maximum_Bone_Extension = 1e+08;
  *&(this->CachedEffectorCSTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->CachedEffectorCSTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->CachedEffectorCSTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->CachedEffectorCSTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->CachedEffectorCSTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->CachedEffectorCSTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->owner_skel_w_transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->owner_skel_w_transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->owner_skel_w_transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->owner_skel_w_transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->owner_skel_w_transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->owner_skel_w_transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->Chain).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chain).ArrayNum = 0;
  (this->Chain).ArrayMax = 0;
  (this->path_record).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->path_record).ArrayNum = 0;
  (this->path_record).ArrayMax = 0;
  return this;
}

// ChineseDragonChainSolving_Strict @ 14d2c4a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FAnimNode_ChineseDragonSolver::ChineseDragonChainSolving_Strict
          (FAnimNode_ChineseDragonSolver *this,
          TArray<FChinaDragonChainLink,TSizedDefaultAllocator<32>_> *param_1,
          TTransform<double> *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  TTransform<double> *pTVar6;
  code *pcVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  bool bVar20;
  undefined1 uVar21;
  int iVar22;
  uint uVar23;
  TQuat<double> *pTVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  float fVar37;
  undefined4 uVar38;
  double dVar39;
  undefined4 uVar42;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar43;
  double dVar44;
  double dVar47;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar52;
  double dVar53;
  undefined1 auVar54 [16];
  __m128d _Var55;
  float fVar56;
  float fVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  __m128d _Var62;
  undefined1 auVar63 [16];
  __m128d _Var64;
  undefined1 auStackY_578 [32];
  TRotator<double> local_418;
  TQuat<double> local_3f8;
  undefined1 local_3d8 [16];
  double local_3c8;
  double dStack_3c0;
  TQuat<double> local_3b8;
  double local_398;
  double dStack_390;
  double local_388;
  double local_380;
  double dStack_378;
  double local_370;
  double local_368;
  double dStack_360;
  double local_358;
  double local_350;
  double dStack_348;
  double local_340;
  double local_338;
  double dStack_330;
  double local_328;
  double local_320;
  double dStack_318;
  double local_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  undefined1 local_2f0 [16];
  double local_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double local_290;
  double dStack_288;
  double local_280;
  undefined1 local_278 [16];
  double local_268;
  double local_260;
  double dStack_258;
  double local_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined1 local_230 [16];
  double local_220;
  double local_218;
  double dStack_210;
  double local_208;
  double local_1f8 [2];
  double local_1e8 [2];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  TQuat<double> local_178;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_578;
  iVar22 = param_1->ArrayNum;
  if (iVar22 == 0) {
    return false;
  }
  uVar30 = iVar22 - 1;
  uVar29 = 0;
  if ((int)uVar30 < iVar22) {
    uVar29 = ~uVar30 >> 0x1f;
  }
  if ((uVar29 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar7 = (code *)swi(3);
    uVar21 = (*pcVar7)();
    return (bool)uVar21;
  }
  uVar19 = _UNK_150689688;
  uVar18 = ___xmm_3ff00000000000003ff0000000000000;
  dVar17 = __real_3ff0000000000000;
  lVar26 = (longlong)(int)uVar30 * 0x170;
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (param_3->ArrayNum == 0) {
    iVar22 = param_1->ArrayNum;
    uVar29 = 0;
    if (0 < iVar22) {
      lVar26 = 0;
      do {
        uVar33 = ~uVar29;
        uVar30 = 0;
        if ((int)uVar29 < iVar22) {
          uVar30 = uVar33 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar7 = (code *)swi(3);
          uVar21 = (*pcVar7)();
          return (bool)uVar21;
        }
        pFVar4 = (param_1->AllocatorInstance).Data;
        pFVar5 = (param_3->AllocatorInstance).Data;
        local_298 = dVar17;
        local_2a8 = uVar18;
        uStack_2a0 = uVar19;
        pFVar3 = pFVar4 + lVar26 + 0x20;
        local_138 = *(undefined8 *)pFVar3;
        uStack_130 = *(undefined8 *)(pFVar3 + 8);
        pFVar4 = pFVar4 + lVar26 + 0x30;
        local_128 = *(undefined8 *)pFVar4;
        uStack_120 = *(undefined8 *)(pFVar4 + 8);
        local_158 = UE::Math::TQuat<double>::Identity.X;
        dStack_150 = UE::Math::TQuat<double>::Identity.Y;
        local_148 = UE::Math::TQuat<double>::Identity.Z;
        dStack_140 = UE::Math::TQuat<double>::Identity.W;
        local_108 = dVar17;
        dStack_100 = 0.0;
        local_118 = uVar18;
        uStack_110 = uVar19;
        if (((pFVar5 <= (FScriptContainerElement *)&local_158) &&
            ((FScriptContainerElement *)&local_158 < pFVar5 + (longlong)param_3->ArrayMax * 0x60))
           && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar20)) {
          pcVar7 = (code *)swi(3);
          uVar21 = (*pcVar7)();
          return (bool)uVar21;
        }
        iVar22 = param_3->ArrayNum;
        if (iVar22 == param_3->ArrayMax) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1060,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar22 + 1;
        pFVar3 = (param_3->AllocatorInstance).Data;
        lVar27 = (longlong)iVar22 * 0x60;
        *(double *)(pFVar3 + lVar27) = local_158;
        *(double *)(pFVar3 + lVar27 + 8) = dStack_150;
        *(double *)(pFVar3 + lVar27 + 0x10) = local_148;
        *(double *)(pFVar3 + lVar27 + 0x10 + 8) = dStack_140;
        *(undefined8 *)(pFVar3 + lVar27 + 0x20) = local_138;
        *(undefined8 *)(pFVar3 + lVar27 + 0x20 + 8) = uStack_130;
        *(undefined8 *)(pFVar3 + lVar27 + 0x30) = local_128;
        *(undefined8 *)(pFVar3 + lVar27 + 0x30 + 8) = uStack_120;
        *(undefined8 *)(pFVar3 + lVar27 + 0x40) = local_118;
        *(undefined8 *)(pFVar3 + lVar27 + 0x40 + 8) = uStack_110;
        *(double *)(pFVar3 + lVar27 + 0x50) = local_108;
        *(double *)(pFVar3 + lVar27 + 0x50 + 8) = dStack_100;
        uVar32 = param_1->ArrayNum + uVar33;
        uVar30 = 0;
        if ((int)uVar32 < param_1->ArrayNum) {
          uVar30 = ~uVar32 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar7 = (code *)swi(3);
          uVar21 = (*pcVar7)();
          return (bool)uVar21;
        }
        pFVar3 = (param_1->AllocatorInstance).Data;
        local_3d8 = *(undefined1 (*) [16])(pFVar3 + (longlong)(int)uVar32 * 0x170);
        pFVar3 = pFVar3 + (longlong)(int)uVar32 * 0x170 + 0x10;
        local_3c8 = *(double *)pFVar3;
        dStack_3c0 = *(double *)(pFVar3 + 8);
        UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_3d8,&local_418);
        dVar8 = local_418.Roll;
        dVar48 = local_418.Yaw;
        dVar11 = local_418.Pitch;
        uVar33 = uVar33 + param_1->ArrayNum;
        uVar30 = 0;
        if ((int)uVar33 < param_1->ArrayNum) {
          uVar30 = ~uVar33 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar7 = (code *)swi(3);
          uVar21 = (*pcVar7)();
          return (bool)uVar21;
        }
        uVar29 = uVar29 + 1;
        pFVar4 = (param_1->AllocatorInstance).Data;
        lVar26 = lVar26 + 0x170;
        pFVar3 = pFVar4 + (longlong)(int)uVar33 * 0x170 + 0x120;
        *(double *)pFVar3 = dVar11;
        *(double *)(pFVar3 + 8) = dVar48;
        *(double *)(pFVar4 + (longlong)(int)uVar33 * 0x170 + 0x130) = dVar8;
        iVar22 = param_1->ArrayNum;
      } while ((int)uVar29 < iVar22);
    }
  }
  else {
    if (this->solver_counter < 6) goto LAB_14d2c5092;
    dVar11 = (param_2->Rotation).XY.m128d_f64[1];
    *(double *)(pFVar3 + lVar26) = (param_2->Rotation).XY.m128d_f64[0];
    *(double *)(pFVar3 + lVar26 + 8) = dVar11;
    dVar11 = (param_2->Rotation).ZW.m128d_f64[1];
    *(double *)(pFVar3 + lVar26 + 0x10) = (param_2->Rotation).ZW.m128d_f64[0];
    *(double *)(pFVar3 + lVar26 + 0x10 + 8) = dVar11;
    dVar11 = (param_2->Translation).XY.m128d_f64[1];
    *(double *)(pFVar3 + lVar26 + 0x20) = (param_2->Translation).XY.m128d_f64[0];
    *(double *)(pFVar3 + lVar26 + 0x20 + 8) = dVar11;
    dVar11 = (param_2->Translation).ZW.m128d_f64[1];
    *(double *)(pFVar3 + lVar26 + 0x30) = (param_2->Translation).ZW.m128d_f64[0];
    *(double *)(pFVar3 + lVar26 + 0x30 + 8) = dVar11;
    dVar11 = (param_2->Scale3D).XY.m128d_f64[1];
    *(double *)(pFVar3 + lVar26 + 0x40) = (param_2->Scale3D).XY.m128d_f64[0];
    *(double *)(pFVar3 + lVar26 + 0x40 + 8) = dVar11;
    *(undefined1 (*) [16])(pFVar3 + lVar26 + 0x50) =
         *(undefined1 (*) [16])(param_2->Scale3D).ZW.m128d_f64;
  }
  if (5 < this->solver_counter) {
    iVar22 = param_3->ArrayNum;
    if (iVar22 != 0) {
      uVar29 = 0;
      if ((int)(iVar22 - 1U) < iVar22) {
        uVar29 = ~(iVar22 - 1U) >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        uVar21 = (*pcVar7)();
        return (bool)uVar21;
      }
      local_218 = (param_2->Translation).XY.m128d_f64[0];
      dStack_210 = (param_2->Translation).XY.m128d_f64[1];
      local_208 = (param_2->Translation).ZW.m128d_f64[0];
      pFVar4 = (param_3->AllocatorInstance).Data;
      lVar26 = (longlong)param_3->ArrayNum * 0x60;
      pFVar3 = pFVar4 + lVar26 + -0x40;
      local_248 = *(double *)pFVar3;
      dStack_240 = *(double *)(pFVar3 + 8);
      local_238 = *(double *)(pFVar4 + lVar26 + -0x30);
      if (SQRT((dStack_240 - dStack_210) * (dStack_240 - dStack_210) +
               (local_248 - local_218) * (local_248 - local_218) +
               (local_238 - local_208) * (local_238 - local_208)) <= (double)this->Precision)
      goto LAB_14d2c5092;
    }
    pTVar6 = (TTransform<double> *)(param_3->AllocatorInstance).Data;
    if (((pTVar6 <= param_2) && (param_2 < pTVar6 + param_3->ArrayMax)) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar20)) {
      pcVar7 = (code *)swi(3);
      uVar21 = (*pcVar7)();
      return (bool)uVar21;
    }
    iVar22 = param_3->ArrayNum;
    piVar1 = &param_3->ArrayMax;
    if (iVar22 == *piVar1) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1060,&param_3->AllocatorInstance,piVar1);
    }
    param_3->ArrayNum = iVar22 + 1;
    dVar11 = (param_2->Rotation).XY.m128d_f64[1];
    pFVar3 = (param_3->AllocatorInstance).Data;
    lVar26 = (longlong)iVar22 * 0x60;
    *(double *)(pFVar3 + lVar26) = (param_2->Rotation).XY.m128d_f64[0];
    *(double *)(pFVar3 + lVar26 + 8) = dVar11;
    dVar11 = (param_2->Rotation).ZW.m128d_f64[1];
    *(double *)(pFVar3 + lVar26 + 0x10) = (param_2->Rotation).ZW.m128d_f64[0];
    *(double *)(pFVar3 + lVar26 + 0x10 + 8) = dVar11;
    dVar11 = (param_2->Translation).XY.m128d_f64[1];
    *(double *)(pFVar3 + lVar26 + 0x20) = (param_2->Translation).XY.m128d_f64[0];
    *(double *)(pFVar3 + lVar26 + 0x20 + 8) = dVar11;
    dVar11 = (param_2->Translation).ZW.m128d_f64[1];
    *(double *)(pFVar3 + lVar26 + 0x30) = (param_2->Translation).ZW.m128d_f64[0];
    *(double *)(pFVar3 + lVar26 + 0x30 + 8) = dVar11;
    dVar11 = (param_2->Scale3D).XY.m128d_f64[1];
    *(double *)(pFVar3 + lVar26 + 0x40) = (param_2->Scale3D).XY.m128d_f64[0];
    *(double *)(pFVar3 + lVar26 + 0x40 + 8) = dVar11;
    *(undefined1 (*) [16])(pFVar3 + lVar26 + 0x50) =
         *(undefined1 (*) [16])(param_2->Scale3D).ZW.m128d_f64;
    fVar37 = (float)param_3->ArrayNum;
    if (this->Maximum_Bone_Extension <= fVar37 && fVar37 != this->Maximum_Bone_Extension) {
      if ((param_3->ArrayNum < 1) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        uVar21 = (*pcVar7)();
        return (bool)uVar21;
      }
      pFVar3 = (param_3->AllocatorInstance).Data;
      iVar22 = param_3->ArrayNum + -1;
      if (iVar22 != 0) {
        memmove(pFVar3,pFVar3 + 0x60,(longlong)iVar22 * 0x60);
      }
      param_3->ArrayNum = param_3->ArrayNum + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
    }
    SmoothTransformArray(this,param_3,__real_3f000000);
  }
LAB_14d2c5092:
  fVar37 = 0.0;
  this->Maximum_Bone_Extension = 0.0;
  uVar29 = param_1->ArrayNum;
  uVar30 = uVar29 - 2;
  if (-1 < (int)uVar30) {
    lVar26 = ((longlong)(int)uVar30 + 1) * 0x170;
    fVar56 = __real_3c23d70a;
    do {
      uVar29 = uVar29 - 1;
      uVar32 = ~uVar30 >> 0x1f;
      uVar33 = 0;
      if ((int)uVar30 < param_1->ArrayNum) {
        uVar33 = uVar32;
      }
      if ((uVar33 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        uVar21 = (*pcVar7)();
        return (bool)uVar21;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      uVar33 = 0;
      if ((int)uVar30 < param_1->ArrayNum) {
        uVar33 = uVar32;
      }
      if ((uVar33 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        uVar21 = (*pcVar7)();
        return (bool)uVar21;
      }
      uVar33 = 0;
      if ((int)uVar30 < param_1->ArrayNum) {
        uVar33 = uVar32;
      }
      fVar37 = (float)((double)fVar37 +
                      *(double *)((param_1->AllocatorInstance).Data + lVar26 + -0x38));
      if ((uVar33 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        uVar21 = (*pcVar7)();
        return (bool)uVar21;
      }
      this->Maximum_Bone_Extension =
           (float)((double)this->Maximum_Bone_Extension +
                  *(double *)((param_1->AllocatorInstance).Data + lVar26 + -0x38));
      _Var55 = UE::Math::TTransform<double>::Identity.Translation.ZW;
      _Var64 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
      _Var62 = UE::Math::TTransform<double>::Identity.Rotation.XY;
      uVar33 = param_3->ArrayNum;
      dVar11 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
      dVar39 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
      uVar31 = uVar33 - 2;
      dVar8 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
      dVar48 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
      uVar38 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
      uVar42 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
      uVar58 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
      uVar59 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
      if (-1 < (int)uVar31) {
        uVar25 = ~uVar29 >> 0x1f;
        lVar27 = (longlong)(int)uVar31 * 0x60;
        fVar57 = fVar56;
        do {
          uVar33 = uVar33 - 1;
          uVar34 = ~uVar31 >> 0x1f;
          uVar23 = 0;
          if ((int)uVar31 < param_3->ArrayNum) {
            uVar23 = uVar34;
          }
          if ((uVar23 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar7 = (code *)swi(3);
            uVar21 = (*pcVar7)();
            return (bool)uVar21;
          }
          pFVar4 = (param_3->AllocatorInstance).Data;
          local_1d8 = *(undefined8 *)(pFVar4 + lVar27);
          uStack_1d0 = *(undefined8 *)(pFVar4 + lVar27 + 8);
          local_1c8 = *(undefined8 *)(pFVar4 + lVar27 + 0x10);
          uStack_1c0 = *(undefined8 *)(pFVar4 + lVar27 + 0x10 + 8);
          dVar52 = *(double *)(pFVar4 + lVar27 + 0x20);
          dVar44 = *(double *)(pFVar4 + lVar27 + 0x20 + 8);
          dVar53 = *(double *)(pFVar4 + lVar27 + 0x30);
          local_198 = *(undefined8 *)(pFVar4 + lVar27 + 0x40);
          uStack_190 = *(undefined8 *)(pFVar4 + lVar27 + 0x40 + 8);
          local_188 = *(undefined8 *)(pFVar4 + lVar27 + 0x50);
          uStack_180 = *(undefined8 *)(pFVar4 + lVar27 + 0x50 + 8);
          uVar23 = 0;
          if ((int)uVar33 < param_3->ArrayNum) {
            uVar23 = ~uVar33 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar7 = (code *)swi(3);
            uVar21 = (*pcVar7)();
            return (bool)uVar21;
          }
          pFVar5 = (param_3->AllocatorInstance).Data;
          pFVar4 = pFVar5 + lVar27 + 0x80;
          local_398 = *(double *)pFVar4;
          dStack_390 = *(double *)(pFVar4 + 8);
          local_388 = *(double *)(pFVar5 + lVar27 + 0x90);
          uVar23 = 0;
          if ((int)uVar30 < param_1->ArrayNum) {
            uVar23 = uVar32;
          }
          fVar57 = (float)(SQRT((dStack_390 - dVar44) * (dStack_390 - dVar44) +
                                (local_398 - dVar52) * (local_398 - dVar52) +
                                (local_388 - dVar53) * (local_388 - dVar53)) + (double)fVar57);
          local_380 = dVar52;
          dStack_378 = dVar44;
          local_370 = dVar53;
          if ((uVar23 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar7 = (code *)swi(3);
            uVar21 = (*pcVar7)();
            return (bool)uVar21;
          }
          pFVar5 = (param_1->AllocatorInstance).Data;
          pFVar4 = pFVar5 + lVar26 + -0xf0;
          dVar52 = *(double *)pFVar4;
          dVar53 = *(double *)(pFVar4 + 8);
          dVar44 = *(double *)(pFVar5 + lVar26 + -0xe0);
          uVar23 = 0;
          if ((int)uVar29 < param_1->ArrayNum) {
            uVar23 = uVar25;
          }
          if ((uVar23 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar7 = (code *)swi(3);
            uVar21 = (*pcVar7)();
            return (bool)uVar21;
          }
          pFVar5 = (param_1->AllocatorInstance).Data;
          pFVar4 = pFVar5 + lVar26 + 0x80;
          local_368 = *(double *)pFVar4;
          dStack_360 = *(double *)(pFVar4 + 8);
          dVar52 = dVar52 - local_368;
          local_358 = SUB168(*(undefined1 (*) [16])(pFVar5 + lVar26 + 0x90),0);
          dVar44 = dVar44 - local_358;
          dVar53 = dVar53 - dStack_360;
          if (fVar37 <= fVar57) {
            uVar32 = param_3->ArrayNum - 1;
            uVar33 = 0;
            if ((int)uVar32 < param_3->ArrayNum) {
              uVar33 = ~uVar32 >> 0x1f;
            }
            if ((uVar33 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar7 = (code *)swi(3);
              uVar21 = (*pcVar7)();
              return (bool)uVar21;
            }
            pFVar5 = (param_3->AllocatorInstance).Data;
            lVar27 = (longlong)param_3->ArrayNum * 0x60;
            pFVar4 = pFVar5 + lVar27 + -0x40;
            local_350 = *(double *)pFVar4;
            dStack_348 = *(double *)(pFVar4 + 8);
            local_340 = *(double *)(pFVar5 + lVar27 + -0x30);
            local_338 = (param_2->Translation).XY.m128d_f64[0];
            dStack_330 = (param_2->Translation).XY.m128d_f64[1];
            local_328 = (param_2->Translation).ZW.m128d_f64[0];
            dVar48 = dVar17 - SQRT((dStack_348 - dStack_330) * (dStack_348 - dStack_330) +
                                   (local_350 - local_338) * (local_350 - local_338) +
                                   (local_340 - local_328) * (local_340 - local_328)) *
                              (dVar17 / (double)this->Precision);
            if (dVar17 <= dVar48) {
              dVar48 = dVar17;
            }
            if (dVar48 <= __real_0000000000000000) {
              dVar48 = __real_0000000000000000;
            }
            if ((int)(uVar31 - 1) < 0) {
              uVar33 = 0;
              if ((int)uVar29 < param_1->ArrayNum) {
                uVar33 = uVar25;
              }
              if ((uVar33 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar7 = (code *)swi(3);
                uVar21 = (*pcVar7)();
                return (bool)uVar21;
              }
              pFVar5 = (param_1->AllocatorInstance).Data;
              pFVar4 = pFVar5 + lVar26 + 0x20;
              dVar11 = *(double *)pFVar4;
              dVar39 = *(double *)(pFVar4 + 8);
              dVar43 = *(double *)(pFVar5 + lVar26 + 0x30);
              uVar33 = 0;
              if ((int)uVar29 < param_1->ArrayNum) {
                uVar33 = uVar25;
              }
              if ((uVar33 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar7 = (code *)swi(3);
                uVar21 = (*pcVar7)();
                return (bool)uVar21;
              }
              pFVar5 = (param_1->AllocatorInstance).Data;
              pFVar4 = pFVar5 + lVar26 + 0x20;
              dVar47 = *(double *)pFVar4;
              dVar48 = *(double *)(pFVar4 + 8);
              dVar8 = *(double *)(pFVar5 + lVar26 + 0x30);
              uVar33 = 0;
              if ((int)uVar31 < param_3->ArrayNum) {
                uVar33 = uVar34;
              }
              if ((uVar33 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar7 = (code *)swi(3);
                uVar21 = (*pcVar7)();
                return (bool)uVar21;
              }
              pFVar5 = (param_3->AllocatorInstance).Data;
              lVar27 = (longlong)(int)uVar31 * 0x60;
              pFVar4 = pFVar5 + lVar27 + 0x20;
              local_290 = *(double *)pFVar4;
              dStack_288 = *(double *)(pFVar4 + 8);
              local_280 = *(double *)(pFVar5 + lVar27 + 0x30);
              dVar47 = dVar47 - local_290;
              dVar8 = dVar8 - local_280;
              auVar60._0_8_ = dVar53 * dVar53 + dVar52 * dVar52 + dVar44 * dVar44;
              auVar60._8_8_ = 0;
              dVar48 = dVar48 - dStack_288;
              auVar50._0_8_ = dVar8 * dVar8;
              auVar50._8_8_ = 0;
              uVar33 = 0;
              if ((int)uVar31 < param_3->ArrayNum) {
                uVar33 = uVar34;
              }
              auVar60 = sqrtpd(auVar50,auVar60);
              dVar52 = dVar17 / SQRT(dVar48 * dVar48 + dVar47 * dVar47 + auVar50._0_8_);
              dVar44 = auVar60._0_8_;
              dVar43 = dVar43 - dVar8 * dVar52 * dVar44;
              dVar11 = dVar11 - dVar47 * dVar52 * dVar44;
              dVar39 = dVar39 - dVar48 * dVar52 * dVar44;
              local_278._8_4_ = SUB84(dVar39,0);
              local_278._0_8_ = dVar11;
              local_278._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
              local_268 = dVar43;
              if ((uVar33 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar7 = (code *)swi(3);
                uVar21 = (*pcVar7)();
                return (bool)uVar21;
              }
              pFVar4 = (param_3->AllocatorInstance).Data;
              _Var62.m128d_f64 = *(double (*) [2])(pFVar4 + lVar27);
              _Var64.m128d_f64 = *(double (*) [2])(pFVar4 + lVar27 + 0x10);
              uVar33 = 0;
              if ((int)uVar31 < param_3->ArrayNum) {
                uVar33 = uVar34;
              }
              if ((uVar33 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar7 = (code *)swi(3);
                uVar21 = (*pcVar7)();
                return (bool)uVar21;
              }
              pFVar5 = (param_3->AllocatorInstance).Data;
              pFVar4 = pFVar5 + lVar27 + 0x40;
              dVar8 = *(double *)pFVar4;
              dVar48 = *(double *)(pFVar4 + 8);
              dVar52 = *(double *)(pFVar5 + lVar27 + 0x50);
              local_260 = dVar8;
              dStack_258 = dVar48;
              local_250 = dVar52;
            }
            else {
              uVar33 = 0;
              if ((int)uVar29 < param_1->ArrayNum) {
                uVar33 = uVar25;
              }
              if ((uVar33 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar7 = (code *)swi(3);
                uVar21 = (*pcVar7)();
                return (bool)uVar21;
              }
              pFVar5 = (param_1->AllocatorInstance).Data;
              pFVar4 = pFVar5 + lVar26 + 0x20;
              dVar11 = *(double *)pFVar4;
              dVar39 = *(double *)(pFVar4 + 8);
              dVar43 = *(double *)(pFVar5 + lVar26 + 0x30);
              uVar33 = 0;
              if ((int)uVar29 < param_1->ArrayNum) {
                uVar33 = uVar25;
              }
              if ((uVar33 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar7 = (code *)swi(3);
                uVar21 = (*pcVar7)();
                return (bool)uVar21;
              }
              pFVar5 = (param_1->AllocatorInstance).Data;
              pFVar4 = pFVar5 + lVar26 + 0x20;
              dVar10 = *(double *)pFVar4;
              dVar47 = *(double *)(pFVar4 + 8);
              dVar8 = *(double *)(pFVar5 + lVar26 + 0x30);
              uVar33 = uVar31 - 1;
              uVar25 = ~uVar33 >> 0x1f;
              uVar32 = 0;
              if ((int)uVar33 < param_3->ArrayNum) {
                uVar32 = uVar25;
              }
              if ((uVar32 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar7 = (code *)swi(3);
                uVar21 = (*pcVar7)();
                return (bool)uVar21;
              }
              pFVar4 = (param_3->AllocatorInstance).Data;
              lVar27 = (longlong)(int)uVar33 * 0x60;
              dVar2 = *(double *)(pFVar4 + lVar27 + 0x30);
              pFVar4 = pFVar4 + lVar27 + 0x20;
              dVar15 = *(double *)pFVar4;
              dVar16 = *(double *)(pFVar4 + 8);
              uVar33 = 0;
              if ((int)uVar31 < param_3->ArrayNum) {
                uVar33 = uVar34;
              }
              local_320 = dVar15;
              dStack_318 = dVar16;
              local_310 = dVar2;
              if ((uVar33 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar7 = (code *)swi(3);
                uVar21 = (*pcVar7)();
                return (bool)uVar21;
              }
              pFVar5 = (param_3->AllocatorInstance).Data;
              dVar12 = (double)(float)dVar48;
              lVar28 = (longlong)(int)uVar31 * 0x60;
              pFVar4 = pFVar5 + lVar28 + 0x20;
              local_308 = *(double *)pFVar4;
              dStack_300 = *(double *)(pFVar4 + 8);
              local_2f8 = *(double *)(pFVar5 + lVar28 + 0x30);
              uVar33 = 0;
              if ((int)(uVar31 - 1) < param_3->ArrayNum) {
                uVar33 = uVar25;
              }
              auVar54._0_8_ = dVar53 * dVar53 + dVar52 * dVar52 + dVar44 * dVar44;
              auVar54._8_8_ = 0;
              dVar10 = dVar10 - ((dVar15 - local_308) * dVar12 + local_308);
              dVar47 = dVar47 - ((dVar16 - dStack_300) * dVar12 + dStack_300);
              dVar8 = dVar8 - ((dVar2 - local_2f8) * dVar12 + local_2f8);
              auVar49._0_8_ = dVar47 * dVar47 + dVar10 * dVar10 + dVar8 * dVar8;
              auVar49._8_8_ = 0;
              auVar50 = sqrtpd(auVar49,auVar54);
              dVar52 = dVar17 / SQRT(auVar49._0_8_);
              dVar48 = auVar50._0_8_;
              dVar11 = dVar11 - dVar52 * dVar10 * dVar48;
              dVar39 = dVar39 - dVar52 * dVar47 * dVar48;
              dVar43 = dVar43 - dVar52 * dVar8 * dVar48;
              local_2f0._8_4_ = SUB84(dVar39,0);
              local_2f0._0_8_ = dVar11;
              local_2f0._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
              local_2e0 = dVar43;
              if ((uVar33 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar7 = (code *)swi(3);
                uVar21 = (*pcVar7)();
                return (bool)uVar21;
              }
              pFVar5 = (param_3->AllocatorInstance).Data;
              pFVar4 = pFVar5 + lVar27;
              local_3f8.X = *(double *)pFVar4;
              local_3f8.Y = *(double *)(pFVar4 + 8);
              pFVar5 = pFVar5 + lVar27 + 0x10;
              local_3f8.Z = *(double *)pFVar5;
              local_3f8.W = *(double *)(pFVar5 + 8);
              uVar33 = 0;
              if ((int)uVar31 < param_3->ArrayNum) {
                uVar33 = uVar34;
              }
              if ((uVar33 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar7 = (code *)swi(3);
                uVar21 = (*pcVar7)();
                return (bool)uVar21;
              }
              pFVar5 = (param_3->AllocatorInstance).Data;
              auVar51._8_8_ = 0;
              auVar51._0_8_ = dVar12;
              pFVar4 = pFVar5 + lVar28;
              local_3b8.X = *(double *)pFVar4;
              local_3b8.Y = *(double *)(pFVar4 + 8);
              pFVar5 = pFVar5 + lVar28 + 0x10;
              local_3b8.Z = *(double *)pFVar5;
              local_3b8.W = *(double *)(pFVar5 + 8);
              pTVar24 = UE::Math::TQuat<double>::Slerp_NotNormalized
                                  (&local_178,&local_3b8,&local_3f8,dVar12);
              dVar48 = pTVar24->X;
              dVar8 = pTVar24->Y;
              dVar52 = pTVar24->Z;
              dVar44 = pTVar24->W;
              uVar33 = 0;
              if ((int)(uVar31 - 1) < param_3->ArrayNum) {
                uVar33 = uVar25;
              }
              dVar53 = dVar48 * dVar48 + dVar52 * dVar52;
              dVar47 = dVar8 * dVar8 + dVar44 * dVar44;
              auVar40._8_4_ = SUB84(dVar47,0);
              auVar40._0_8_ = dVar53;
              auVar40._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
              auVar41._0_8_ = auVar40._8_8_ + dVar53;
              auVar41._8_8_ = dVar53 + dVar47;
              auVar50 = sqrtpd(auVar51,auVar41);
              uVar35 = -(ulonglong)(__real_3e45798ee0000000 <= auVar41._0_8_);
              uVar36 = -(ulonglong)(__real_3e45798ee0000000 <= auVar41._8_8_);
              uVar32 = (uint)(uVar35 >> 0x20);
              uVar25 = (uint)(uVar36 >> 0x20);
              auVar60 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                              auVar50);
              auVar61._0_8_ = uVar35 & (ulonglong)(auVar60._0_8_ * dVar48);
              uVar14 = uVar36 & (ulonglong)(auVar60._8_8_ * dVar8);
              auVar61._8_4_ = (undefined4)uVar14;
              auVar61._12_4_ = (undefined4)(uVar14 >> 0x20);
              auVar45._0_4_ =
                   ~(uint)uVar35 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
              auVar45._4_4_ =
                   ~uVar32 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0]
                                   >> 0x20);
              auVar45._8_4_ =
                   ~(uint)uVar36 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
              auVar45._12_4_ =
                   ~uVar25 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1]
                                   >> 0x20);
              _Var62.m128d_f64 = (double  [2])(auVar61 | auVar45);
              auVar50 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                              auVar50);
              auVar63._0_4_ =
                   ~(uint)uVar35 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
              auVar63._4_4_ =
                   ~uVar32 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2]
                                   >> 0x20);
              auVar63._8_4_ =
                   ~(uint)uVar36 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
              auVar63._12_4_ =
                   ~uVar25 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3]
                                   >> 0x20);
              auVar46._0_8_ = (ulonglong)(auVar50._0_8_ * dVar52) & uVar35;
              uVar36 = (ulonglong)(auVar50._8_8_ * dVar44) & uVar36;
              auVar46._8_4_ = (undefined4)uVar36;
              auVar46._12_4_ = (undefined4)(uVar36 >> 0x20);
              _Var64.m128d_f64 = (double  [2])(auVar63 | auVar46);
              local_1f8 = _Var62.m128d_f64;
              local_1e8 = _Var64.m128d_f64;
              if ((uVar33 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar7 = (code *)swi(3);
                uVar21 = (*pcVar7)();
                return (bool)uVar21;
              }
              pFVar4 = (param_3->AllocatorInstance).Data;
              dVar52 = *(double *)(pFVar4 + lVar27 + 0x50);
              pFVar4 = pFVar4 + lVar27 + 0x40;
              dVar48 = *(double *)pFVar4;
              dVar44 = *(double *)(pFVar4 + 8);
              uVar33 = 0;
              if ((int)uVar31 < param_3->ArrayNum) {
                uVar33 = uVar34;
              }
              local_2d8 = dVar48;
              dStack_2d0 = dVar44;
              local_2c8 = dVar52;
              if ((uVar33 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar7 = (code *)swi(3);
                uVar21 = (*pcVar7)();
                return (bool)uVar21;
              }
              pFVar5 = (param_3->AllocatorInstance).Data;
              pFVar4 = pFVar5 + lVar28 + 0x40;
              local_2c0 = *(double *)pFVar4;
              dStack_2b8 = *(double *)(pFVar4 + 8);
              local_2b0 = *(double *)(pFVar5 + lVar28 + 0x50);
              dVar8 = (dVar48 - local_2c0) * dVar12 + local_2c0;
              dVar48 = (dVar44 - dStack_2b8) * dVar12 + dStack_2b8;
              local_230._8_4_ = SUB84(dVar48,0);
              local_230._0_8_ = dVar8;
              local_230._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
              dVar52 = (dVar52 - local_2b0) * dVar12 + local_2b0;
              local_220 = dVar52;
            }
            _Var55.m128d_f64[1] = 0.0;
            _Var55.m128d_f64[0] = dVar43;
            uVar38 = SUB84(dVar52,0);
            uVar42 = (undefined4)((ulonglong)dVar52 >> 0x20);
            uVar58 = 0;
            uVar59 = 0;
            fVar56 = __real_3c23d70a;
            break;
          }
          uVar31 = uVar31 - 1;
          lVar27 = lVar27 + -0x60;
          fVar56 = __real_3c23d70a;
        } while (uVar31 < 0x80000000);
      }
      uVar30 = uVar30 - 1;
      *(double (*) [2])(pFVar3 + lVar26 + -0x170) = _Var62.m128d_f64;
      *(double (*) [2])(pFVar3 + lVar26 + -0x160) = _Var64.m128d_f64;
      auVar9._8_4_ = SUB84(dVar39,0);
      auVar9._0_8_ = dVar11;
      auVar9._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
      *(undefined1 (*) [16])(pFVar3 + lVar26 + -0x150) = auVar9;
      *(double (*) [2])(pFVar3 + lVar26 + -0x140) = _Var55.m128d_f64;
      auVar13._8_4_ = SUB84(dVar48,0);
      auVar13._0_8_ = dVar8;
      auVar13._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
      *(undefined1 (*) [16])(pFVar3 + lVar26 + -0x130) = auVar13;
      pFVar3 = pFVar3 + lVar26 + -0x120;
      *(undefined4 *)pFVar3 = uVar38;
      *(undefined4 *)(pFVar3 + 4) = uVar42;
      *(undefined4 *)(pFVar3 + 8) = uVar58;
      *(undefined4 *)(pFVar3 + 0xc) = uVar59;
      lVar26 = lVar26 + -0x170;
    } while (uVar30 < 0x80000000);
  }
  return true;
}

// ChineseDragonChainSolving_Unstrict @ 14d2c5f20

bool __thiscall
FAnimNode_ChineseDragonSolver::ChineseDragonChainSolving_Unstrict
          (FAnimNode_ChineseDragonSolver *this,
          TArray<FChinaDragonChainLink,TSizedDefaultAllocator<32>_> *param_1,
          TTransform<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  undefined1 uVar16;
  uint uVar17;
  TQuat<double> *pTVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1d0;
  double local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double local_180;
  double dStack_178;
  double local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double dStack_148;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  TQuat<double> local_b8 [4];
  
  iVar20 = param_1->ArrayNum;
  if (iVar20 == 0) {
    return false;
  }
  uVar22 = iVar20 - 1;
  uVar21 = 0;
  if ((int)uVar22 < iVar20) {
    uVar21 = ~uVar22 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar3 = (code *)swi(3);
    uVar16 = (*pcVar3)();
    return (bool)uVar16;
  }
  dVar14 = __real_3e45798ee0000000;
  dVar13 = __real_3ff0000000000000;
  dVar5 = (param_2->Rotation).XY.m128d_f64[1];
  lVar19 = (longlong)(int)uVar22 * 0x170;
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(double *)(pFVar1 + lVar19) = (param_2->Rotation).XY.m128d_f64[0];
  *(double *)(pFVar1 + lVar19 + 8) = dVar5;
  dVar5 = (param_2->Rotation).ZW.m128d_f64[1];
  *(double *)(pFVar1 + lVar19 + 0x10) = (param_2->Rotation).ZW.m128d_f64[0];
  *(double *)(pFVar1 + lVar19 + 0x10 + 8) = dVar5;
  dVar5 = (param_2->Translation).XY.m128d_f64[1];
  *(double *)(pFVar1 + lVar19 + 0x20) = (param_2->Translation).XY.m128d_f64[0];
  *(double *)(pFVar1 + lVar19 + 0x20 + 8) = dVar5;
  dVar5 = (param_2->Translation).ZW.m128d_f64[1];
  *(double *)(pFVar1 + lVar19 + 0x30) = (param_2->Translation).ZW.m128d_f64[0];
  *(double *)(pFVar1 + lVar19 + 0x30 + 8) = dVar5;
  dVar5 = (param_2->Scale3D).XY.m128d_f64[1];
  *(double *)(pFVar1 + lVar19 + 0x40) = (param_2->Scale3D).XY.m128d_f64[0];
  *(double *)(pFVar1 + lVar19 + 0x40 + 8) = dVar5;
  dVar5 = (param_2->Scale3D).ZW.m128d_f64[1];
  *(double *)(pFVar1 + lVar19 + 0x50) = (param_2->Scale3D).ZW.m128d_f64[0];
  *(double *)(pFVar1 + lVar19 + 0x50 + 8) = dVar5;
  uVar21 = param_1->ArrayNum;
  uVar22 = uVar21 - 2;
  lVar23 = (longlong)(int)uVar22;
  lVar19 = (ulonglong)(this->Fix_Root_in_Place != false) - 1;
  if (lVar19 < lVar23) {
    lVar24 = lVar23 * 0x170;
    do {
      uVar21 = uVar21 - 1;
      uVar17 = 0;
      if ((int)uVar22 < param_1->ArrayNum) {
        uVar17 = ~uVar22 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        uVar16 = (*pcVar3)();
        return (bool)uVar16;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      uVar17 = 0;
      if ((int)uVar21 < param_1->ArrayNum) {
        uVar17 = ~uVar21 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        uVar16 = (*pcVar3)();
        return (bool)uVar16;
      }
      local_198 = *(double *)(pFVar1 + lVar24 + 0x80);
      dStack_190 = *(double *)(pFVar1 + lVar24 + 0x80 + 8);
      local_188 = *(double *)(pFVar1 + lVar24 + 0x90);
      pFVar2 = (param_1->AllocatorInstance).Data;
      local_1b0 = *(double *)(pFVar2 + lVar24 + 0x1f0);
      dStack_1a8 = *(double *)(pFVar2 + lVar24 + 0x1f0 + 8);
      local_1a0 = *(double *)(pFVar2 + lVar24 + 0x200);
      local_1d0._s_0.X = local_1b0 - local_198;
      local_1d0._s_0.Y = dStack_1a8 - dStack_190;
      local_1d0._s_0.Z = local_1a0 - local_188;
      dVar5 = local_1d0._s_0.Y * local_1d0._s_0.Y + local_1d0._s_0.X * local_1d0._s_0.X +
              local_1d0._s_0.Z * local_1d0._s_0.Z;
      if (dVar5 != dVar13) {
        if (dVar14 <= dVar5) {
          dVar5 = dVar13 / SQRT(dVar5);
          local_1d0._s_0.X = local_1d0._s_0.X * dVar5;
          local_1d0._s_0.Y = local_1d0._s_0.Y * dVar5;
          local_1d0._s_0.Z = local_1d0._s_0.Z * dVar5;
        }
        else {
          local_1d0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_1d0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_1d0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
      }
      local_180 = *(double *)(pFVar2 + lVar24 + 400);
      dStack_178 = *(double *)(pFVar2 + lVar24 + 400 + 8);
      local_168 = *(double *)(pFVar1 + lVar24 + 0x20);
      dStack_160 = *(double *)(pFVar1 + lVar24 + 0x20 + 8);
      local_170 = *(double *)(pFVar2 + lVar24 + 0x1a0);
      dVar9 = local_180 - local_168;
      local_158 = *(double *)(pFVar1 + lVar24 + 0x30);
      dVar7 = dStack_178 - dStack_160;
      dVar8 = local_170 - local_158;
      dVar5 = dVar7 * dVar7 + dVar9 * dVar9 + dVar8 * dVar8;
      local_1e8._s_0.Y = dVar7;
      local_1e8._s_0.Z = dVar8;
      local_1e8._s_0.X = dVar9;
      if ((dVar5 != dVar13) &&
         (local_1e8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         local_1e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
         local_1e8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X, dVar14 <= dVar5
         )) {
        dVar5 = dVar13 / SQRT(dVar5);
        local_1e8._s_0.Y = dVar7 * dVar5;
        local_1e8._s_0.Z = dVar8 * dVar5;
        local_1e8._s_0.X = dVar9 * dVar5;
      }
      dVar5 = *(double *)(pFVar1 + lVar24 + 0x138);
      local_150 = *(double *)(pFVar2 + lVar24 + 400);
      dStack_148 = *(double *)(pFVar2 + lVar24 + 400 + 8);
      local_140 = *(double *)(pFVar2 + lVar24 + 0x1a0);
      dVar7 = dStack_148 - dVar5 * local_1e8._s_0.Y;
      auVar6._8_4_ = SUB84(dVar7,0);
      auVar6._0_8_ = local_150 - dVar5 * local_1e8._s_0.X;
      auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *(undefined1 (*) [16])(pFVar1 + lVar24 + 0x20) = auVar6;
      *(double *)(pFVar1 + lVar24 + 0x30) = local_140 - dVar5 * local_1e8._s_0.Z;
      *(double *)(pFVar1 + lVar24 + 0x30 + 8) = 0.0;
      pTVar18 = UE::Math::TQuat<double>::FindBetweenNormals
                          (local_b8,(TVector<double> *)&local_1d0._s_0,
                           (TVector<double> *)&local_1e8._s_0);
      uVar22 = uVar22 - 1;
      lVar23 = lVar23 + -1;
      dVar5 = pTVar18->Y;
      dVar7 = pTVar18->Z;
      dVar8 = pTVar18->W;
      *(double *)(pFVar1 + lVar24) = pTVar18->X;
      *(double *)(pFVar1 + lVar24 + 8) = dVar5;
      *(double *)(pFVar1 + lVar24 + 0x10) = dVar7;
      *(double *)(pFVar1 + lVar24 + 0x10 + 8) = dVar8;
      lVar24 = lVar24 + -0x170;
    } while (lVar19 < lVar23);
  }
  if (this->Fix_Root_in_Place != false) {
    iVar20 = param_1->ArrayNum;
    uVar21 = 1;
    if (1 < iVar20) {
      lVar19 = 0x170;
      do {
        uVar22 = 0;
        if ((int)uVar21 < iVar20) {
          uVar22 = ~uVar21 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar3 = (code *)swi(3);
          uVar16 = (*pcVar3)();
          return (bool)uVar16;
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        uVar22 = 0;
        if ((int)(uVar21 - 1) < param_1->ArrayNum) {
          uVar22 = -uVar21 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar3 = (code *)swi(3);
          uVar16 = (*pcVar3)();
          return (bool)uVar16;
        }
        local_120 = *(double *)(pFVar1 + lVar19 + 0x20);
        dStack_118 = *(double *)(pFVar1 + lVar19 + 0x20 + 8);
        local_110 = *(double *)(pFVar1 + lVar19 + 0x30);
        pFVar2 = (param_1->AllocatorInstance).Data;
        local_138 = *(double *)(pFVar2 + lVar19 + -0x150);
        dStack_130 = *(double *)(pFVar2 + lVar19 + -0x150 + 8);
        local_128 = *(double *)(pFVar2 + lVar19 + -0x140);
        dVar9 = local_138 - local_120;
        dVar8 = local_128 - local_110;
        dVar7 = dStack_130 - dStack_118;
        dVar5 = dVar7 * dVar7 + dVar9 * dVar9 + dVar8 * dVar8;
        uVar10 = dVar9;
        uVar11 = dVar8;
        uVar12 = dVar7;
        if ((dVar5 != dVar13) &&
           (uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
           uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
           uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y, dVar14 <= dVar5)) {
          local_1b8 = dVar13 / SQRT(dVar5);
          uVar10 = dVar9 * local_1b8;
          uVar11 = dVar8 * local_1b8;
          uVar12 = dVar7 * local_1b8;
        }
        dVar5 = *(double *)(pFVar2 + lVar19 + -0x38);
        local_108 = *(double *)(pFVar2 + lVar19 + -0x150);
        dStack_100 = *(double *)(pFVar2 + lVar19 + -0x150 + 8);
        uVar21 = uVar21 + 1;
        local_f8 = *(double *)(pFVar2 + lVar19 + -0x140);
        dVar7 = dStack_100 - (double)uVar12 * dVar5;
        auVar4._8_4_ = SUB84(dVar7,0);
        auVar4._0_8_ = local_108 - (double)uVar10 * dVar5;
        auVar4._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        *(undefined1 (*) [16])(pFVar1 + lVar19 + 0x20) = auVar4;
        *(double *)(pFVar1 + lVar19 + 0x30) = local_f8 - (double)uVar11 * dVar5;
        *(double *)(pFVar1 + lVar19 + 0x30 + 8) = 0.0;
        iVar20 = param_1->ArrayNum;
        lVar19 = lVar19 + 0x170;
      } while ((int)uVar21 < iVar20);
    }
  }
  return true;
}

// ConditionalDebugDraw @ 14d2c7030

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
FAnimNode_ChineseDragonSolver::ConditionalDebugDraw
          (FAnimNode_ChineseDragonSolver *this,FPrimitiveDrawInterface *param_1,
          USkeletalMeshComponent *param_2)

{
  return;
}

// EvaluateComponentSpaceInternal @ 14d2d4d40

void __thiscall
FAnimNode_ChineseDragonSolver::EvaluateComponentSpaceInternal
          (FAnimNode_ChineseDragonSolver *this,FComponentSpacePoseContext *param_1)

{
  return;
}

// EvaluateSkeletalControl_AnyThread @ 14d2d6250

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
FAnimNode_ChineseDragonSolver::EvaluateSkeletalControl_AnyThread
          (FAnimNode_ChineseDragonSolver *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<FChinaDragonChainLink,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  FCompactPoseBoneIndex FVar5;
  FCompactPoseBoneIndex FVar6;
  FBoneContainer *pFVar7;
  FCompactPoseBoneIndex *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
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
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  undefined8 uVar30;
  FComponentSpacePoseContext *pFVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  bool bVar38;
  int iVar39;
  uint uVar40;
  UWorld *pUVar41;
  TTransform<double> *pTVar42;
  FChinaDragonChainLink *pFVar43;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  uint uVar44;
  int iVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  USkeletalMeshComponent *pUVar50;
  uint uVar51;
  FScriptContainerElement *pFVar52;
  uint uVar53;
  longlong lVar54;
  longlong lVar55;
  longlong lVar56;
  longlong lVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined4 uVar88;
  undefined4 uVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  undefined4 uVar92;
  undefined4 uVar93;
  undefined4 uVar94;
  undefined4 uVar95;
  undefined4 uVar96;
  undefined4 uVar97;
  undefined4 uVar98;
  undefined4 uVar99;
  double dVar100;
  uint uVar101;
  uint uVar103;
  undefined4 uVar104;
  undefined4 uVar105;
  undefined4 uVar106;
  undefined4 uVar107;
  double dVar108;
  double dVar109;
  undefined4 uVar110;
  undefined4 uVar111;
  undefined4 uVar112;
  undefined4 uVar113;
  uint uVar114;
  uint uVar115;
  undefined1 auStackY_fe8 [32];
  uint local_f98;
  undefined1 local_f94 [36];
  FCompactPoseBoneIndex local_f70;
  FCompactPoseBoneIndex local_f6c;
  int local_f68 [2];
  FComponentSpacePoseContext *local_f60;
  FCSPose<FCompactPose> *local_f58;
  FBoneReference local_f50;
  double local_f40;
  double local_f38;
  double dStack_f30;
  double local_f28;
  double local_f20;
  double dStack_f18;
  double local_f10;
  double local_f08;
  double dStack_f00;
  double local_ef8;
  double dStack_ef0;
  double local_ee8;
  double dStack_ee0;
  double local_ed8;
  double dStack_ed0;
  double local_ec8;
  double dStack_ec0;
  undefined4 local_eb8;
  undefined4 uStack_eb4;
  undefined4 uStack_eb0;
  undefined4 uStack_eac;
  double local_ea8;
  double local_ea0;
  double local_e98;
  double local_e88;
  double dStack_e80;
  double local_e78;
  double dStack_e70;
  double local_e68;
  double local_e58;
  double dStack_e50;
  undefined4 local_e48;
  undefined4 uStack_e44;
  undefined4 uStack_e40;
  undefined4 uStack_e3c;
  undefined4 local_e38;
  undefined4 uStack_e34;
  undefined4 uStack_e30;
  undefined4 uStack_e2c;
  double local_e28;
  double dStack_e20;
  undefined4 local_e18;
  undefined4 uStack_e14;
  undefined4 uStack_e10;
  undefined4 uStack_e0c;
  undefined4 local_e08;
  undefined4 uStack_e04;
  undefined4 uStack_e00;
  undefined4 uStack_dfc;
  double local_df8;
  double dStack_df0;
  double local_de8;
  double local_de0;
  double dStack_dd8;
  double local_dd0;
  double local_dc8;
  double dStack_dc0;
  double local_db8;
  double local_db0;
  double dStack_da8;
  double local_da0;
  double local_d98;
  double dStack_d90;
  double local_d88;
  double local_d80;
  double dStack_d78;
  double local_d70;
  double local_d68;
  double dStack_d60;
  double local_d58;
  double local_d50;
  double dStack_d48;
  double local_d40;
  double local_d38;
  double dStack_d30;
  double local_d28;
  undefined4 local_d20;
  undefined4 uStack_d1c;
  undefined4 uStack_d18;
  undefined4 uStack_d14;
  undefined8 local_d10;
  double local_d08;
  double dStack_d00;
  double local_cf8;
  TTransform<double> local_ce8;
  TTransform<double> local_c88;
  TTransform<double> local_c28;
  TTransform<double> local_bc8;
  TTransform<double> local_b68;
  TTransform<double> local_b08;
  TTransform<double> local_aa8;
  TTransform<double> local_a48;
  TTransform<double> local_9e8;
  TTransform<double> local_988;
  FCompactPoseBoneIndex local_928;
  double local_918;
  double dStack_910;
  double local_908;
  double dStack_900;
  double local_8f8;
  double dStack_8f0;
  double local_8e8;
  double dStack_8e0;
  double local_8d8;
  double dStack_8d0;
  double local_8c8;
  undefined8 uStack_8c0;
  FCompactPoseBoneIndex local_8b8;
  double local_8a8;
  double dStack_8a0;
  double local_898;
  double dStack_890;
  double local_888;
  double dStack_880;
  double local_878;
  double dStack_870;
  double local_868;
  double dStack_860;
  double local_858;
  undefined8 uStack_850;
  TTransform<double> local_848;
  TTransform<double> local_7e8;
  TTransform<double> local_788;
  TTransform<double> local_728;
  TTransform<double> local_6c8;
  TTransform<double> local_668;
  TTransform<double> local_608;
  TTransform<double> local_5a8;
  FChinaDragonChainLink local_548;
  TTransform<double> local_3d8;
  TTransform<double> local_378;
  TTransform<double> local_318;
  TTransform<double> local_2b8;
  FChinaDragonChainLink local_258;
  ulonglong local_e8;
  double dVar102;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_fe8;
  if ((float)this->solver_counter <= __real_3f800000) {
    return;
  }
  pUVar50 = this->owning_skel;
  if (pUVar50 == (USkeletalMeshComponent *)0x0) {
    return;
  }
  pUVar41 = (UWorld *)pUVar50->_padding_;
  local_f94._28_8_ = param_2;
  local_f60 = param_1;
  if (pUVar41 == (UWorld *)0x0) {
    pUVar41 = UActorComponent::GetWorld_Uncached((UActorComponent *)pUVar50);
  }
  dVar100 = __real_3f1a36e2e0000000;
  uVar115 = _UNK_15061cc8c;
  uVar114 = _UNK_15061cc88;
  uVar51 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar40 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if ((pUVar41->WorldType).Value == '\x04') {
    local_e58 = (this->CachedEffectorCSTransform).Rotation.XY.m128d_f64[0];
    dStack_e50 = (this->CachedEffectorCSTransform).Rotation.XY.m128d_f64[1];
    local_e48 = *(undefined4 *)(this->CachedEffectorCSTransform).Rotation.ZW.m128d_f64;
    uStack_e44 = *(undefined4 *)
                  ((longlong)(this->CachedEffectorCSTransform).Rotation.ZW.m128d_f64 + 4);
    uStack_e40 = *(undefined4 *)((this->CachedEffectorCSTransform).Rotation.ZW.m128d_f64 + 1);
    uStack_e3c = *(undefined4 *)
                  ((longlong)(this->CachedEffectorCSTransform).Rotation.ZW.m128d_f64 + 0xc);
    local_e38 = *(undefined4 *)(this->CachedEffectorCSTransform).Translation.XY.m128d_f64;
    uStack_e34 = *(undefined4 *)
                  ((longlong)(this->CachedEffectorCSTransform).Translation.XY.m128d_f64 + 4);
    uStack_e30 = *(undefined4 *)((this->CachedEffectorCSTransform).Translation.XY.m128d_f64 + 1);
    uStack_e2c = *(undefined4 *)
                  ((longlong)(this->CachedEffectorCSTransform).Translation.XY.m128d_f64 + 0xc);
    local_e28 = (this->CachedEffectorCSTransform).Translation.ZW.m128d_f64[0];
    dStack_e20 = (this->CachedEffectorCSTransform).Translation.ZW.m128d_f64[1];
    local_e18 = *(undefined4 *)(this->CachedEffectorCSTransform).Scale3D.XY.m128d_f64;
    uStack_e14 = *(undefined4 *)
                  ((longlong)(this->CachedEffectorCSTransform).Scale3D.XY.m128d_f64 + 4);
    uStack_e10 = *(undefined4 *)((this->CachedEffectorCSTransform).Scale3D.XY.m128d_f64 + 1);
    uStack_e0c = *(undefined4 *)
                  ((longlong)(this->CachedEffectorCSTransform).Scale3D.XY.m128d_f64 + 0xc);
    local_e08 = *(undefined4 *)(this->CachedEffectorCSTransform).Scale3D.ZW.m128d_f64;
    uStack_e04 = *(undefined4 *)
                  ((longlong)(this->CachedEffectorCSTransform).Scale3D.ZW.m128d_f64 + 4);
    uStack_e00 = *(undefined4 *)((this->CachedEffectorCSTransform).Scale3D.ZW.m128d_f64 + 1);
    uStack_dfc = *(undefined4 *)
                  ((longlong)(this->CachedEffectorCSTransform).Scale3D.ZW.m128d_f64 + 0xc);
  }
  else {
    local_e58 = (this->EffectorTransform).Rotation.XY.m128d_f64[0];
    dStack_e50 = (this->EffectorTransform).Rotation.XY.m128d_f64[1];
    local_e48 = *(undefined4 *)(this->EffectorTransform).Rotation.ZW.m128d_f64;
    uStack_e44 = *(undefined4 *)((longlong)(this->EffectorTransform).Rotation.ZW.m128d_f64 + 4);
    uStack_e40 = *(undefined4 *)((this->EffectorTransform).Rotation.ZW.m128d_f64 + 1);
    uStack_e3c = *(undefined4 *)((longlong)(this->EffectorTransform).Rotation.ZW.m128d_f64 + 0xc);
    local_e38 = *(undefined4 *)(this->EffectorTransform).Translation.XY.m128d_f64;
    uStack_e34 = *(undefined4 *)((longlong)(this->EffectorTransform).Translation.XY.m128d_f64 + 4);
    uStack_e30 = *(undefined4 *)((this->EffectorTransform).Translation.XY.m128d_f64 + 1);
    uStack_e2c = *(undefined4 *)((longlong)(this->EffectorTransform).Translation.XY.m128d_f64 + 0xc)
    ;
    local_e28 = (this->EffectorTransform).Translation.ZW.m128d_f64[0];
    dStack_e20 = (this->EffectorTransform).Translation.ZW.m128d_f64[1];
    local_e18 = *(undefined4 *)(this->EffectorTransform).Scale3D.XY.m128d_f64;
    uStack_e14 = *(undefined4 *)((longlong)(this->EffectorTransform).Scale3D.XY.m128d_f64 + 4);
    uStack_e10 = *(undefined4 *)((this->EffectorTransform).Scale3D.XY.m128d_f64 + 1);
    uStack_e0c = *(undefined4 *)((longlong)(this->EffectorTransform).Scale3D.XY.m128d_f64 + 0xc);
    local_e08 = *(undefined4 *)(this->EffectorTransform).Scale3D.ZW.m128d_f64;
    uStack_e04 = *(undefined4 *)((longlong)(this->EffectorTransform).Scale3D.ZW.m128d_f64 + 4);
    uStack_e00 = *(undefined4 *)((this->EffectorTransform).Scale3D.ZW.m128d_f64 + 1);
    uStack_dfc = *(undefined4 *)((longlong)(this->EffectorTransform).Scale3D.ZW.m128d_f64 + 0xc);
  }
  dVar102 = (this->Initial_Effector_Reference).Translation.ZW.m128d_f64[0] -
            UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  dVar21 = (this->Initial_Effector_Reference).Translation.ZW.m128d_f64[1] -
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  dVar22 = (this->Initial_Effector_Reference).Translation.XY.m128d_f64[0] -
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  dVar23 = (this->Initial_Effector_Reference).Translation.XY.m128d_f64[1] -
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  uVar88 = SUB84(__real_3f1a36e2e0000000,0);
  uVar89 = (undefined4)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
  auVar58._8_4_ = uVar88;
  auVar58._0_8_ = __real_3f1a36e2e0000000;
  auVar58._12_4_ = uVar89;
  auVar59._8_8_ =
       -(ulonglong)
        (auVar58._8_8_ <
        (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                         SUB84(dVar21,0) & _UNK_15061cc88));
  auVar59._0_8_ =
       -(ulonglong)
        (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar102 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar102,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  uVar44 = movmskpd((int)pUVar50,auVar59);
  lVar56 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar23,0) & _UNK_15061cc88));
  auVar24._8_4_ = (int)lVar56;
  auVar24._0_8_ =
       -(ulonglong)
        (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar24._12_4_ = (int)((ulonglong)lVar56 >> 0x20);
  iVar39 = movmskpd((int)pUVar41,auVar24);
  local_ea8 = __real_3f1a36e2e0000000;
  if ((uVar44 & 0x3fffffff) == 0 && iVar39 == 0) {
    dVar109 = (this->Initial_Effector_Reference).Rotation.ZW.m128d_f64[0];
    dVar29 = (this->Initial_Effector_Reference).Rotation.ZW.m128d_f64[1];
    dVar28 = (this->Initial_Effector_Reference).Rotation.XY.m128d_f64[0];
    dVar108 = (this->Initial_Effector_Reference).Rotation.XY.m128d_f64[1];
    local_ea0 = __real_3f1a36e2e0000000;
    dVar102 = dVar109 - UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    dVar21 = dVar29 - UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    dVar109 = dVar109 + UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    dVar29 = dVar29 + UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    dVar22 = dVar28 - UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    dVar23 = dVar108 - UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    dVar28 = dVar28 + UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    dVar108 = dVar108 + UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    auVar60._8_4_ = uVar88;
    auVar60._0_8_ = __real_3f1a36e2e0000000;
    auVar60._12_4_ = uVar89;
    auVar61._8_8_ =
         -(ulonglong)
          (auVar60._8_8_ <
          (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                           SUB84(dVar21,0) & _UNK_15061cc88));
    auVar61._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar102 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar102,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    iVar45 = movmskpd(0,auVar61);
    auVar62._8_4_ = uVar88;
    auVar62._0_8_ = __real_3f1a36e2e0000000;
    auVar62._12_4_ = uVar89;
    auVar63._8_8_ =
         -(ulonglong)
          (auVar62._8_8_ <
          (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) & _UNK_15061cc8c,
                           SUB84(dVar23,0) & _UNK_15061cc88));
    auVar63._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    uVar44 = movmskpd(iVar39,auVar63);
    uVar46 = iVar45 << 2 | uVar44;
    if (uVar46 != 0) {
      auVar64._8_4_ = uVar88;
      auVar64._0_8_ = __real_3f1a36e2e0000000;
      auVar64._12_4_ = uVar89;
      auVar65._8_8_ =
           -(ulonglong)
            (auVar64._8_8_ <
            (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar29,0) & _UNK_15061cc88));
      auVar65._0_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar109 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar109,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      uVar46 = movmskpd(uVar46,auVar65);
      lVar56 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar108 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar108,0) & _UNK_15061cc88));
      auVar26._8_4_ = (int)lVar56;
      auVar26._0_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar26._12_4_ = (int)((ulonglong)lVar56 >> 0x20);
      uVar44 = movmskpd(uVar44,auVar26);
      if ((uVar46 & 0x3fffffff) != 0 || uVar44 != 0) goto LAB_14d2d6521;
    }
    local_e98 = __real_3f1a36e2e0000000;
    dVar102 = (this->Initial_Effector_Reference).Scale3D.ZW.m128d_f64[0] -
              UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    dVar21 = (this->Initial_Effector_Reference).Scale3D.ZW.m128d_f64[1] -
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    dVar22 = (this->Initial_Effector_Reference).Scale3D.XY.m128d_f64[0] -
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    dVar23 = (this->Initial_Effector_Reference).Scale3D.XY.m128d_f64[1] -
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    auVar66._8_4_ = uVar88;
    auVar66._0_8_ = __real_3f1a36e2e0000000;
    auVar66._12_4_ = uVar89;
    auVar67._8_8_ =
         -(ulonglong)
          (auVar66._8_8_ <
          (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                           SUB84(dVar21,0) & _UNK_15061cc88));
    auVar67._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar102 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar102,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    uVar46 = movmskpd(0,auVar67);
    lVar56 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar23,0) & _UNK_15061cc88));
    auVar25._8_4_ = (int)lVar56;
    auVar25._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar25._12_4_ = (int)((ulonglong)lVar56 >> 0x20);
    iVar39 = movmskpd(uVar44,auVar25);
    if ((uVar46 & 0x3fffffff) == 0 && iVar39 == 0) {
      (this->Initial_Effector_Reference).Rotation.XY.m128d_f64[0] = local_e58;
      (this->Initial_Effector_Reference).Rotation.XY.m128d_f64[1] = dStack_e50;
      *(undefined4 *)(this->Initial_Effector_Reference).Rotation.ZW.m128d_f64 = local_e48;
      *(undefined4 *)((longlong)(this->Initial_Effector_Reference).Rotation.ZW.m128d_f64 + 4) =
           uStack_e44;
      *(undefined4 *)((this->Initial_Effector_Reference).Rotation.ZW.m128d_f64 + 1) = uStack_e40;
      *(undefined4 *)((longlong)(this->Initial_Effector_Reference).Rotation.ZW.m128d_f64 + 0xc) =
           uStack_e3c;
      *(undefined4 *)(this->Initial_Effector_Reference).Translation.XY.m128d_f64 = local_e38;
      *(undefined4 *)((longlong)(this->Initial_Effector_Reference).Translation.XY.m128d_f64 + 4) =
           uStack_e34;
      *(undefined4 *)((this->Initial_Effector_Reference).Translation.XY.m128d_f64 + 1) = uStack_e30;
      *(undefined4 *)((longlong)(this->Initial_Effector_Reference).Translation.XY.m128d_f64 + 0xc) =
           uStack_e2c;
      (this->Initial_Effector_Reference).Translation.ZW.m128d_f64[0] = local_e28;
      (this->Initial_Effector_Reference).Translation.ZW.m128d_f64[1] = dStack_e20;
      *(undefined4 *)(this->Initial_Effector_Reference).Scale3D.XY.m128d_f64 = local_e18;
      *(undefined4 *)((longlong)(this->Initial_Effector_Reference).Scale3D.XY.m128d_f64 + 4) =
           uStack_e14;
      *(undefined4 *)((this->Initial_Effector_Reference).Scale3D.XY.m128d_f64 + 1) = uStack_e10;
      *(undefined4 *)((longlong)(this->Initial_Effector_Reference).Scale3D.XY.m128d_f64 + 0xc) =
           uStack_e0c;
      *(undefined4 *)(this->Initial_Effector_Reference).Scale3D.ZW.m128d_f64 = local_e08;
      *(undefined4 *)((longlong)(this->Initial_Effector_Reference).Scale3D.ZW.m128d_f64 + 4) =
           uStack_e04;
      *(undefined4 *)((this->Initial_Effector_Reference).Scale3D.ZW.m128d_f64 + 1) = uStack_e00;
      *(undefined4 *)((longlong)(this->Initial_Effector_Reference).Scale3D.ZW.m128d_f64 + 0xc) =
           uStack_dfc;
    }
  }
LAB_14d2d6521:
  local_aa8.Rotation.XY.m128d_f64[1] = dStack_e50;
  local_aa8.Rotation.XY.m128d_f64[0] = local_e58;
  local_aa8.Rotation.ZW.m128d_f64[0]._4_4_ = uStack_e44;
  local_aa8.Rotation.ZW.m128d_f64[0]._0_4_ = local_e48;
  local_aa8.Rotation.ZW.m128d_f64[1]._0_4_ = uStack_e40;
  local_aa8.Rotation.ZW.m128d_f64[1]._4_4_ = uStack_e3c;
  local_aa8.Scale3D.XY.m128d_f64[0] = (double)CONCAT44(uStack_e14,local_e18);
  local_aa8.Scale3D.XY.m128d_f64[1] = (double)CONCAT44(uStack_e0c,uStack_e10);
  local_aa8.Scale3D.ZW.m128d_f64[0] = (double)CONCAT44(uStack_e04,local_e08);
  local_aa8.Scale3D.ZW.m128d_f64[1] = (double)CONCAT44(uStack_dfc,uStack_e00);
  if (this->Use_ScaleRot_Add_Mode != false) {
    local_e68 = (this->Initial_Effector_Reference).Translation.ZW.m128d_f64[0];
    local_e78 = (this->Initial_Effector_Reference).Translation.XY.m128d_f64[0];
    dStack_e70 = (this->Initial_Effector_Reference).Translation.XY.m128d_f64[1];
    if (((dVar100 < (double)CONCAT44((uint)((ulonglong)
                                            (local_e78 -
                                            UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X)
                                           >> 0x20) & uVar51,
                                     SUB84(local_e78 -
                                           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0
                                          ) & uVar40)) ||
        (uVar44 = SUB84(dStack_e70 - UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0) &
                  uVar40,
        uVar46 = (uint)((ulonglong)
                        (dStack_e70 - UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y) >>
                       0x20) & uVar51,
        dVar100 <= (double)CONCAT44(uVar46,uVar44) && (double)CONCAT44(uVar46,uVar44) != dVar100))
       || (dVar100 < (double)CONCAT44((uint)((ulonglong)
                                             (local_e68 -
                                             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
                                             ) >> 0x20) & uVar51,
                                      SUB84(local_e68 -
                                            UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
                                            0) & uVar40))) {
      local_d08 = (this->Initial_Effector_Reference).Scale3D.XY.m128d_f64[0];
      dStack_d00 = (this->Initial_Effector_Reference).Scale3D.XY.m128d_f64[1];
      local_cf8 = (this->Initial_Effector_Reference).Scale3D.ZW.m128d_f64[0];
      dVar21 = (this->Initial_Effector_Reference).Rotation.ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar22 = (this->Initial_Effector_Reference).Rotation.ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar28 = (this->Initial_Effector_Reference).Rotation.XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar108 = (this->Initial_Effector_Reference).Rotation.XY.m128d_f64[1] *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      local_df8 = (double)CONCAT44(uStack_e14,local_e18) / local_d08;
      local_d10 = CONCAT44(uStack_e04,local_e08);
      local_de8 = (double)CONCAT44(uStack_e04,local_e08) / local_cf8;
      dStack_df0 = (double)CONCAT44(uStack_e0c,uStack_e10) / dStack_d00;
      dVar102 = (double)CONCAT44(uStack_e3c,uStack_e40);
      dVar109 = (double)CONCAT44(uStack_e44,local_e48);
      local_aa8.Scale3D.ZW.m128d_f64[1] = 0.0;
      auVar68._8_4_ = uStack_e40;
      auVar68._0_8_ = dVar102;
      auVar68._12_4_ = uStack_e3c;
      auVar69._8_4_ = local_e48;
      auVar69._0_8_ = dVar109;
      auVar69._12_4_ = uStack_e44;
      dVar100 = local_e58 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
                + auVar68._8_8_ * dVar108 +
                dStack_e50 * dVar22 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                auVar69._8_8_ * dVar28 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar23 = local_e58 * dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
               + (double)CONCAT44(uStack_e3c,uStack_e40) * dVar22 +
               dStack_e50 * dVar108 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               (double)CONCAT44(uStack_e44,local_e48) * dVar21 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      local_aa8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar100,0);
      local_aa8.Rotation.XY.m128d_f64[0] =
           local_e58 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar102 * dVar28 +
           dStack_e50 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar109 * dVar108 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      local_aa8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar100 >> 0x20);
      local_aa8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar23,0);
      local_aa8.Rotation.ZW.m128d_f64[0] =
           local_e58 * dVar108 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar102 * dVar21 +
           dStack_e50 * dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar109 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      local_aa8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar23 >> 0x20);
      local_d20 = local_e18;
      uStack_d1c = uStack_e14;
      uStack_d18 = uStack_e10;
      uStack_d14 = uStack_e0c;
      local_aa8.Scale3D.XY.m128d_f64[0] = local_df8;
      local_aa8.Scale3D.XY.m128d_f64[1] = dStack_df0;
      local_aa8.Scale3D.ZW.m128d_f64[0] = local_de8;
    }
  }
  pFVar7 = *(FBoneContainer **)&(param_1->Pose).Pose.field_0x10;
  local_aa8.Translation.XY.m128d_f64[0]._0_4_ = local_e38;
  local_aa8.Translation.XY.m128d_f64[0]._4_4_ = uStack_e34;
  local_aa8.Translation.XY.m128d_f64[1]._0_4_ = uStack_e30;
  local_aa8.Translation.XY.m128d_f64[1]._4_4_ = uStack_e2c;
  local_aa8.Translation.ZW.m128d_f64[0] = local_e28;
  local_aa8.Translation.ZW.m128d_f64[1] = dStack_e20;
  pTVar42 = UE::Math::TTransform<double>::Inverse
                      ((TTransform<double> *)(param_1->_padding_ + 0x20),&local_378);
  local_848.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_848.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_848.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_848.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_848.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_848.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_848.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_848.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_848.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_848.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_848.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_848.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_848.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_848.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_848,&local_aa8,pTVar42);
  lVar56 = 0;
  local_de0 = local_848.Translation.XY.m128d_f64[0];
  dStack_dd8 = local_848.Translation.XY.m128d_f64[1];
  local_f94._4_8_ = (FCompactPoseBoneIndex *)0x0;
  local_dd0 = local_848.Translation.ZW.m128d_f64[0];
  local_f94._20_4_ = 0;
  local_f94._12_4_ = 0;
  local_f94[0x10] = '\0';
  local_f94[0x11] = '\0';
  local_f94[0x12] = '\0';
  local_f94[0x13] = '\0';
  if (this->Use_Custom_Bone_Chain == false) {
    FBoneReference::GetCompactPoseIndex(&this->RootBone,(FBoneContainer *)&local_f6c);
    FBoneReference::GetCompactPoseIndex(&this->TipBone,(FBoneContainer *)local_f94);
    do {
      if ((((ulonglong)local_f94._4_8_ <= (FCompactPoseBoneIndex *)local_f94) &&
          ((FCompactPoseBoneIndex *)local_f94 <
           (FCompactPoseBoneIndex *)(local_f94._4_8_ + (longlong)(int)local_f94._16_4_ * 4))) &&
         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar38)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar39 = local_f94._12_4_;
      if (local_f94._12_4_ == local_f94._16_4_) {
        iVar39 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)(local_f94 + 4),(int *)(local_f94 + 0x10));
      }
      local_f94._12_4_ = iVar39 + 1;
      memmove((FCompactPoseBoneIndex *)(local_f94._4_8_ + 4),(void *)local_f94._4_8_,
              (longlong)iVar39 << 2);
      *(undefined4 *)local_f94._4_8_ = local_f94._0_4_;
      FBoneContainer::GetParentBoneIndex
                (*(FBoneContainer **)&(param_1->Pose).Pose.field_0x10,&local_f70);
      local_f94._0_4_ = local_f70;
    } while (local_f70 != local_f6c);
    TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>::Insert
              ((TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *)(local_f94 + 4),
               (FCompactPoseBoneIndex *)local_f94,0);
    local_f94._20_4_ = local_f94._12_4_;
  }
  else {
    uVar44 = 0;
    param_1 = local_f60;
    if (0 < (this->Custom_Bone_Input).Custom_Bone_Structure.ArrayNum) {
      do {
        uVar46 = 0;
        if ((int)uVar44 < (this->Custom_Bone_Input).Custom_Bone_Structure.ArrayNum) {
          uVar46 = ~uVar44 >> 0x1f;
        }
        if ((uVar46 == 0) &&
           (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar38)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_f50.BoneName =
             *(FName *)((this->Custom_Bone_Input).Custom_Bone_Structure.AllocatorInstance.Data +
                       lVar56);
        local_f50.bUseSkeletonIndex = 0;
        local_f50.BoneIndex = -1;
        local_f50.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
        FBoneReference::Initialize(&local_f50,pFVar7);
        TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>::Insert
                  ((TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *)(local_f94 + 4),
                   &local_f50.CachedCompactPoseIndex,uVar44);
        uVar44 = uVar44 + 1;
        lVar56 = lVar56 + 8;
      } while ((int)uVar44 < (this->Custom_Bone_Input).Custom_Bone_Structure.ArrayNum);
      local_f94._20_4_ = local_f94._12_4_;
      param_1 = local_f60;
    }
  }
  uVar88 = local_f94._20_4_;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x70,0x10,local_f94._20_4_,&param_2->AllocatorInstance,&param_2->ArrayNum,
             &param_2->ArrayMax);
  pTVar1 = &this->Chain;
  piVar2 = &(this->Chain).ArrayNum;
  if ((this->Chain).ArrayNum == 0) {
    pUVar50 = this->owning_skel;
    dVar100 = (double)pUVar50->_padding_;
    (this->owner_skel_w_transform).Rotation.XY.m128d_f64[0] = (double)pUVar50->_padding_;
    (this->owner_skel_w_transform).Rotation.XY.m128d_f64[1] = dVar100;
    dVar100 = (double)pUVar50->_padding_;
    (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[0] = (double)pUVar50->_padding_;
    (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[1] = dVar100;
    dVar100 = (double)pUVar50->_padding_;
    (this->owner_skel_w_transform).Translation.XY.m128d_f64[0] = (double)pUVar50->_padding_;
    (this->owner_skel_w_transform).Translation.XY.m128d_f64[1] = dVar100;
    dVar100 = (double)pUVar50->_padding_;
    (this->owner_skel_w_transform).Translation.ZW.m128d_f64[0] = (double)pUVar50->_padding_;
    (this->owner_skel_w_transform).Translation.ZW.m128d_f64[1] = dVar100;
    dVar100 = (double)pUVar50->_padding_;
    (this->owner_skel_w_transform).Scale3D.XY.m128d_f64[0] = (double)pUVar50->_padding_;
    (this->owner_skel_w_transform).Scale3D.XY.m128d_f64[1] = dVar100;
    dVar100 = (double)pUVar50->_padding_;
    (this->owner_skel_w_transform).Scale3D.ZW.m128d_f64[0] = (double)pUVar50->_padding_;
    (this->owner_skel_w_transform).Scale3D.ZW.m128d_f64[1] = dVar100;
    iVar39 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x170,0x10,uVar88,&pTVar1->AllocatorInstance,piVar2,&(this->Chain).ArrayMax)
    ;
    DefaultConstructItems<FChinaDragonChainLink,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar39 * 0x170,uVar88);
    if (((int)local_f94._12_4_ < 1) &&
       (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar38)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar30 = local_f94._4_8_;
    local_f58 = &param_1->Pose;
    pTVar42 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                        (local_f58,*(FCompactPoseBoneIndex *)local_f94._4_8_);
    local_c28.Rotation.XY.m128d_f64[0] = (pTVar42->Rotation).XY.m128d_f64[0];
    local_c28.Rotation.XY.m128d_f64[1] = (pTVar42->Rotation).XY.m128d_f64[1];
    local_c28.Rotation.ZW.m128d_f64[0] = (pTVar42->Rotation).ZW.m128d_f64[0];
    local_c28.Rotation.ZW.m128d_f64[1] = (pTVar42->Rotation).ZW.m128d_f64[1];
    local_c28.Translation.XY.m128d_f64[0] = (pTVar42->Translation).XY.m128d_f64[0];
    local_c28.Translation.XY.m128d_f64[1] = (pTVar42->Translation).XY.m128d_f64[1];
    local_c28.Translation.ZW.m128d_f64[0] = (pTVar42->Translation).ZW.m128d_f64[0];
    local_c28.Translation.ZW.m128d_f64[1] = (pTVar42->Translation).ZW.m128d_f64[1];
    local_c28.Scale3D.XY.m128d_f64[0] = (pTVar42->Scale3D).XY.m128d_f64[0];
    local_c28.Scale3D.XY.m128d_f64[1] = (pTVar42->Scale3D).XY.m128d_f64[1];
    local_c28.Scale3D.ZW.m128d_f64[0] = (pTVar42->Scale3D).ZW.m128d_f64[0];
    local_c28.Scale3D.ZW.m128d_f64[1] = (pTVar42->Scale3D).ZW.m128d_f64[1];
    local_bc8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_bc8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_bc8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_bc8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_bc8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_bc8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_bc8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_bc8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_bc8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_bc8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_bc8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_bc8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_bc8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_bc8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_bc8,&local_c28,(TTransform<double> *)&this->owning_skel->_padding_);
    dVar34 = local_bc8.Translation.ZW.m128d_f64[1];
    dVar27 = local_bc8.Translation.ZW.m128d_f64[0];
    dVar108 = UE::Math::TQuat<double>::Identity.W;
    dVar28 = UE::Math::TQuat<double>::Identity.Z;
    dVar23 = UE::Math::TQuat<double>::Identity.Y;
    dVar22 = UE::Math::TQuat<double>::Identity.X;
    dVar21 = _UNK_150689688;
    dVar102 = ___xmm_3ff00000000000003ff0000000000000;
    dVar100 = __real_3ff0000000000000;
    dVar109 = local_bc8.Translation.XY.m128d_f64[0];
    dVar29 = local_bc8.Translation.XY.m128d_f64[1];
    local_c28.Scale3D.ZW.m128d_f64[0] = __real_3ff0000000000000;
    local_c28.Scale3D.ZW.m128d_f64[1] = 0.0;
    local_c28.Translation.XY.m128d_f64[0] = local_bc8.Translation.XY.m128d_f64[0];
    local_c28.Translation.XY.m128d_f64[1] = local_bc8.Translation.XY.m128d_f64[1];
    local_c28.Translation.ZW.m128d_f64[0] = local_bc8.Translation.ZW.m128d_f64[0];
    local_c28.Translation.ZW.m128d_f64[1] = local_bc8.Translation.ZW.m128d_f64[1];
    local_c28.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
    local_c28.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
    local_c28.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
    local_c28.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
    local_c28.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_c28.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    FVar5 = *(FCompactPoseBoneIndex *)uVar30;
    local_f40 = __real_3ff0000000000000;
    local_db8 = __real_3ff0000000000000;
    local_e88 = ___xmm_3ff00000000000003ff0000000000000;
    dStack_e80 = _UNK_150689688;
    local_918 = UE::Math::TQuat<double>::Identity.X;
    dStack_910 = UE::Math::TQuat<double>::Identity.Y;
    local_908 = UE::Math::TQuat<double>::Identity.Z;
    dStack_900 = UE::Math::TQuat<double>::Identity.W;
    local_8f8 = local_bc8.Translation.XY.m128d_f64[0];
    dStack_8f0 = local_bc8.Translation.XY.m128d_f64[1];
    local_8e8 = local_bc8.Translation.ZW.m128d_f64[0];
    dStack_8e0 = local_bc8.Translation.ZW.m128d_f64[1];
    local_8d8 = ___xmm_3ff00000000000003ff0000000000000;
    dStack_8d0 = _UNK_150689688;
    local_8c8 = __real_3ff0000000000000;
    uStack_8c0 = 0;
    local_dc8 = ___xmm_3ff00000000000003ff0000000000000;
    dStack_dc0 = _UNK_150689688;
    local_928 = FVar5;
    if ((param_2->ArrayNum < 1) &&
       (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar38)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    local_f68[0] = 0;
    pFVar8 = (FCompactPoseBoneIndex *)((ForAnyElementType *)local_f94._28_8_)->Data;
    *pFVar8 = FVar5;
    *(double *)(pFVar8 + 4) = dVar22;
    *(double *)(pFVar8 + 6) = dVar23;
    *(double *)(pFVar8 + 8) = dVar28;
    *(double *)(pFVar8 + 10) = dVar108;
    *(double *)(pFVar8 + 0xc) = dVar109;
    *(double *)(pFVar8 + 0xe) = dVar29;
    *(double *)(pFVar8 + 0x10) = dVar27;
    *(double *)(pFVar8 + 0x12) = dVar34;
    *(double *)(pFVar8 + 0x14) = dVar102;
    *(double *)(pFVar8 + 0x16) = dVar21;
    *(double *)(pFVar8 + 0x18) = dVar100;
    *(undefined8 *)(pFVar8 + 0x1a) = 0;
    pFVar43 = FChinaDragonChainLink::FChinaDragonChainLink
                        (&local_258,&local_c28,0.0,(FCompactPoseBoneIndex *)uVar30,local_f68);
    if ((*piVar2 < 1) &&
       (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar38)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FChinaDragonChainLink::operator=
              ((FChinaDragonChainLink *)(pTVar1->AllocatorInstance).Data,pFVar43);
    if (local_258.ChildZeroLengthTransformIndices.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.ChildZeroLengthTransformIndices.AllocatorInstance.Data);
    }
    dVar35 = local_c28.Scale3D.ZW.m128d_f64[1];
    dVar34 = local_c28.Scale3D.ZW.m128d_f64[0];
    dVar27 = local_c28.Scale3D.XY.m128d_f64[1];
    dVar29 = local_c28.Scale3D.XY.m128d_f64[0];
    dVar109 = local_c28.Translation.ZW.m128d_f64[1];
    dVar108 = local_c28.Translation.ZW.m128d_f64[0];
    dVar28 = local_c28.Translation.XY.m128d_f64[1];
    dVar23 = local_c28.Translation.XY.m128d_f64[0];
    dVar22 = local_c28.Rotation.ZW.m128d_f64[1];
    dVar21 = local_c28.Rotation.ZW.m128d_f64[0];
    dVar102 = local_c28.Rotation.XY.m128d_f64[1];
    dVar100 = local_c28.Rotation.XY.m128d_f64[0];
    if ((*piVar2 < 1) &&
       (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar38)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    dVar33 = dStack_e80;
    dVar32 = local_e88;
    pFVar52 = (pTVar1->AllocatorInstance).Data;
    local_f98 = 1;
    *(double *)(pFVar52 + 0xc0) = dVar100;
    *(double *)(pFVar52 + 200) = dVar102;
    *(double *)(pFVar52 + 0xd0) = dVar21;
    *(double *)(pFVar52 + 0xd8) = dVar22;
    *(double *)(pFVar52 + 0xe0) = dVar23;
    *(double *)(pFVar52 + 0xe8) = dVar28;
    *(double *)(pFVar52 + 0xf0) = dVar108;
    *(double *)(pFVar52 + 0xf8) = dVar109;
    *(double *)(pFVar52 + 0x100) = dVar29;
    *(double *)(pFVar52 + 0x108) = dVar27;
    *(double *)(pFVar52 + 0x110) = dVar34;
    *(double *)(pFVar52 + 0x118) = dVar35;
    dVar102 = __real_bff0000000000000;
    dVar100 = __real_3e45798ee2308c3a;
    if (1 < (int)uVar88) {
      do {
        uVar40 = local_f98;
        uVar51 = 0;
        if ((int)local_f98 < (int)local_f94._12_4_) {
          uVar51 = ~local_f98 >> 0x1f;
        }
        if ((uVar51 == 0) &&
           (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar38)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar30 = local_f94._4_8_;
        lVar54 = (longlong)(int)uVar40;
        pTVar42 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                            (local_f58,*(FCompactPoseBoneIndex *)(local_f94._4_8_ + lVar54 * 4));
        local_ce8.Rotation.XY.m128d_f64[0] = (pTVar42->Rotation).XY.m128d_f64[0];
        local_ce8.Rotation.XY.m128d_f64[1] = (pTVar42->Rotation).XY.m128d_f64[1];
        local_ce8.Rotation.ZW.m128d_f64[0] = (pTVar42->Rotation).ZW.m128d_f64[0];
        local_ce8.Rotation.ZW.m128d_f64[1] = (pTVar42->Rotation).ZW.m128d_f64[1];
        local_ce8.Translation.XY.m128d_f64[0] = (pTVar42->Translation).XY.m128d_f64[0];
        local_ce8.Translation.XY.m128d_f64[1] = (pTVar42->Translation).XY.m128d_f64[1];
        local_ce8.Translation.ZW.m128d_f64[0] = (pTVar42->Translation).ZW.m128d_f64[0];
        local_ce8.Translation.ZW.m128d_f64[1] = (pTVar42->Translation).ZW.m128d_f64[1];
        local_ce8.Scale3D.XY.m128d_f64[0] = (pTVar42->Scale3D).XY.m128d_f64[0];
        local_ce8.Scale3D.XY.m128d_f64[1] = (pTVar42->Scale3D).XY.m128d_f64[1];
        local_ce8.Scale3D.ZW.m128d_f64[0] = (pTVar42->Scale3D).ZW.m128d_f64[0];
        local_ce8.Scale3D.ZW.m128d_f64[1] = (pTVar42->Scale3D).ZW.m128d_f64[1];
        local_b68.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_b68.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_b68.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_b68.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_b68.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_b68.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_b68.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_b68.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_b68.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_b68.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_b68.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_b68.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_b68.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_b68.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_b68,&local_ce8,(TTransform<double> *)&this->owning_skel->_padding_);
        dVar34 = local_b68.Translation.ZW.m128d_f64[1];
        dVar27 = local_b68.Translation.ZW.m128d_f64[0];
        dVar108 = local_f40;
        dVar28 = UE::Math::TQuat<double>::Identity.W;
        dVar23 = UE::Math::TQuat<double>::Identity.Z;
        dVar22 = UE::Math::TQuat<double>::Identity.Y;
        dVar21 = UE::Math::TQuat<double>::Identity.X;
        dVar109 = local_b68.Translation.XY.m128d_f64[0];
        dVar29 = local_b68.Translation.XY.m128d_f64[1];
        lVar56 = (longlong)(int)local_f98;
        local_ce8.Translation.XY.m128d_f64[0] = local_b68.Translation.XY.m128d_f64[0];
        local_ce8.Translation.XY.m128d_f64[1] = local_b68.Translation.XY.m128d_f64[1];
        local_ce8.Translation.ZW.m128d_f64[0] = local_b68.Translation.ZW.m128d_f64[0];
        local_ce8.Translation.ZW.m128d_f64[1] = local_b68.Translation.ZW.m128d_f64[1];
        uVar40 = 0;
        if ((int)local_f98 < *(int *)(local_f94._28_8_ + 8)) {
          uVar40 = ~local_f98 >> 0x1f;
        }
        local_ce8.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
        local_ce8.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
        local_ce8.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
        local_ce8.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
        local_ce8.Scale3D.XY.m128d_f64[0] = dVar32;
        local_ce8.Scale3D.XY.m128d_f64[1] = dVar33;
        local_ce8.Scale3D.ZW.m128d_f64[0] = local_f40;
        local_ce8.Scale3D.ZW.m128d_f64[1] = 0.0;
        FVar5 = *(FCompactPoseBoneIndex *)(uVar30 + lVar54 * 4);
        local_da0 = local_f40;
        local_f28 = local_b68.Translation.ZW.m128d_f64[0];
        local_8a8 = UE::Math::TQuat<double>::Identity.X;
        dStack_8a0 = UE::Math::TQuat<double>::Identity.Y;
        local_898 = UE::Math::TQuat<double>::Identity.Z;
        dStack_890 = UE::Math::TQuat<double>::Identity.W;
        local_888 = local_b68.Translation.XY.m128d_f64[0];
        dStack_880 = local_b68.Translation.XY.m128d_f64[1];
        local_878 = local_b68.Translation.ZW.m128d_f64[0];
        dStack_870 = local_b68.Translation.ZW.m128d_f64[1];
        local_868 = dVar32;
        dStack_860 = dVar33;
        local_858 = local_f40;
        uStack_850 = 0;
        local_db0 = dVar32;
        dStack_da8 = dVar33;
        local_f38 = local_b68.Translation.XY.m128d_f64[0];
        dStack_f30 = local_b68.Translation.XY.m128d_f64[1];
        local_8b8 = FVar5;
        if ((uVar40 == 0) &&
           (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar38)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar56 = lVar56 * 0x70;
        pFVar52 = ((ForAnyElementType *)local_f94._28_8_)->Data;
        *(FCompactPoseBoneIndex *)(pFVar52 + lVar56) = FVar5;
        *(double *)(pFVar52 + lVar56 + 0x10) = dVar21;
        *(double *)(pFVar52 + lVar56 + 0x10 + 8) = dVar22;
        *(double *)(pFVar52 + lVar56 + 0x20) = dVar23;
        *(double *)(pFVar52 + lVar56 + 0x20 + 8) = dVar28;
        *(double *)(pFVar52 + lVar56 + 0x30) = dVar109;
        *(double *)(pFVar52 + lVar56 + 0x30 + 8) = dVar29;
        *(double *)(pFVar52 + lVar56 + 0x40) = dVar27;
        *(double *)(pFVar52 + lVar56 + 0x40 + 8) = dVar34;
        *(double *)(pFVar52 + lVar56 + 0x50) = dVar32;
        *(double *)(pFVar52 + lVar56 + 0x50 + 8) = dVar33;
        *(double *)(pFVar52 + lVar56 + 0x60) = dVar108;
        *(undefined8 *)(pFVar52 + lVar56 + 0x60 + 8) = 0;
        uVar40 = local_f98 - 1;
        uVar51 = 0;
        if ((int)uVar40 < *(int *)(local_f94._28_8_ + 8)) {
          uVar51 = ~uVar40 >> 0x1f;
        }
        if ((uVar51 == 0) &&
           (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar38)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar51 = local_f98;
        pFVar9 = ((ForAnyElementType *)local_f94._28_8_)->Data;
        pFVar52 = pFVar9 + (longlong)(int)uVar40 * 0x70 + 0x30;
        local_d98 = *(double *)pFVar52;
        dStack_d90 = *(double *)(pFVar52 + 8);
        local_d88 = *(double *)(pFVar9 + (longlong)(int)uVar40 * 0x70 + 0x40);
        if (SQRT((dStack_d90 - dStack_f30) * (dStack_d90 - dStack_f30) +
                 (local_d98 - local_f38) * (local_d98 - local_f38) +
                 (local_d88 - local_f28) * (local_d88 - local_f28)) <= dVar100) {
          iVar39 = (this->Chain).ArrayNum;
          uVar51 = iVar39 - 1;
          uVar40 = 0;
          if ((int)uVar51 < iVar39) {
            uVar40 = ~uVar51 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar38)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar52 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar51 * 0x170 + 0x160;
          if (((*(uint **)pFVar52 <= &local_f98) &&
              (&local_f98 < *(uint **)pFVar52 + *(int *)(pFVar52 + 0xc))) &&
             (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar38)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar39 = *(int *)(pFVar52 + 8);
          if (iVar39 == *(int *)(pFVar52 + 0xc)) {
            iVar39 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)pFVar52,(int *)(pFVar52 + 0xc));
          }
          *(int *)(pFVar52 + 8) = iVar39 + 1;
          *(uint *)(*(longlong *)pFVar52 + (longlong)iVar39 * 4) = local_f98;
        }
        else {
          local_548.BoneIndex = *(int *)(uVar30 + lVar54 * 4);
          local_548.Position.Rotation.XY.m128d_f64[0] = local_ce8.Rotation.XY.m128d_f64[0];
          local_548.Position.Rotation.XY.m128d_f64[1] = local_ce8.Rotation.XY.m128d_f64[1];
          local_548.Position.Translation.XY.m128d_f64[0] = local_ce8.Translation.XY.m128d_f64[0];
          local_548.Position.Translation.XY.m128d_f64[1] = local_ce8.Translation.XY.m128d_f64[1];
          local_548.Position.Scale3D.XY.m128d_f64[0] = local_ce8.Scale3D.XY.m128d_f64[0];
          local_548.Position.Scale3D.XY.m128d_f64[1] = local_ce8.Scale3D.XY.m128d_f64[1];
          uVar88 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          uVar89 = (undefined4)
                   ((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_548.TransformIndex = local_f98;
          uVar40 = 0;
          if ((int)local_f98 < *piVar2) {
            uVar40 = ~local_f98 >> 0x1f;
          }
          local_548.ChildZeroLengthTransformIndices.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          local_548.ChildZeroLengthTransformIndices.ArrayNum = 0;
          local_548.ChildZeroLengthTransformIndices.ArrayMax = 0;
          local_548.Position.Rotation.ZW.m128d_f64[0] = local_ce8.Rotation.ZW.m128d_f64[0];
          local_548.Position.Rotation.ZW.m128d_f64[1] = local_ce8.Rotation.ZW.m128d_f64[1];
          local_548.Position.Translation.ZW.m128d_f64[0] = local_ce8.Translation.ZW.m128d_f64[0];
          local_548.Position.Translation.ZW.m128d_f64[1] = local_ce8.Translation.ZW.m128d_f64[1];
          local_548.Position.Scale3D.ZW.m128d_f64[0] = local_ce8.Scale3D.ZW.m128d_f64[0];
          local_548.Position.Scale3D.ZW.m128d_f64[1] = local_ce8.Scale3D.ZW.m128d_f64[1];
          local_548.Length = 0.0;
          local_548.DefaultDirToParent.field0_0x0._s_0.X = dVar102;
          local_548.OriginalPosition.Rotation.XY.m128d_f64[1]._0_4_ = uVar88;
          local_548.OriginalPosition.Rotation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_548.OriginalPosition.Rotation.XY.m128d_f64[1]._4_4_ = uVar89;
          local_548.InterpolatedPosition.Rotation.XY.m128d_f64[1]._0_4_ = uVar88;
          local_548.InterpolatedPosition.Rotation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_548.InterpolatedPosition.Rotation.XY.m128d_f64[1]._4_4_ = uVar89;
          uVar88 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          uVar89 = (undefined4)
                   ((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_548.OriginalPosition.Rotation.ZW.m128d_f64[1]._0_4_ = uVar88;
          local_548.OriginalPosition.Rotation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_548.OriginalPosition.Rotation.ZW.m128d_f64[1]._4_4_ = uVar89;
          local_548.InterpolatedPosition.Rotation.ZW.m128d_f64[1]._0_4_ = uVar88;
          local_548.InterpolatedPosition.Rotation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_548.InterpolatedPosition.Rotation.ZW.m128d_f64[1]._4_4_ = uVar89;
          uVar88 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          uVar89 = (undefined4)
                   ((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_548.OriginalPosition.Translation.XY.m128d_f64[1]._0_4_ = uVar88;
          local_548.OriginalPosition.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_548.OriginalPosition.Translation.XY.m128d_f64[1]._4_4_ = uVar89;
          local_548.InterpolatedPosition.Translation.XY.m128d_f64[1]._0_4_ = uVar88;
          local_548.InterpolatedPosition.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_548.InterpolatedPosition.Translation.XY.m128d_f64[1]._4_4_ = uVar89;
          uVar88 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          uVar89 = (undefined4)
                   ((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_548.OriginalPosition.Translation.ZW.m128d_f64[1]._0_4_ = uVar88;
          local_548.OriginalPosition.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_548.OriginalPosition.Translation.ZW.m128d_f64[1]._4_4_ = uVar89;
          local_548.InterpolatedPosition.Translation.ZW.m128d_f64[1]._0_4_ = uVar88;
          local_548.InterpolatedPosition.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_548.InterpolatedPosition.Translation.ZW.m128d_f64[1]._4_4_ = uVar89;
          uVar88 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          uVar89 = (undefined4)
                   ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_548.OriginalPosition.Scale3D.XY.m128d_f64[1]._0_4_ = uVar88;
          local_548.OriginalPosition.Scale3D.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_548.OriginalPosition.Scale3D.XY.m128d_f64[1]._4_4_ = uVar89;
          local_548.InterpolatedPosition.Scale3D.XY.m128d_f64[1]._0_4_ = uVar88;
          local_548.InterpolatedPosition.Scale3D.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_548.InterpolatedPosition.Scale3D.XY.m128d_f64[1]._4_4_ = uVar89;
          uVar88 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          uVar89 = (undefined4)
                   ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          local_548.OriginalPosition.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar88;
          local_548.OriginalPosition.Scale3D.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_548.OriginalPosition.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar89;
          local_548.InterpolatedPosition.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar88;
          local_548.InterpolatedPosition.Scale3D.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_548.InterpolatedPosition.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar89;
          local_548.DefaultDirToParent.field0_0x0._s_0.Y = 0.0;
          local_548.DefaultDirToParent.field0_0x0._s_0.Z = 0.0;
          if ((uVar40 == 0) &&
             (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar38)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          FChinaDragonChainLink::operator=
                    ((FChinaDragonChainLink *)
                     ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar51 * 0x170),&local_548);
          if (local_548.ChildZeroLengthTransformIndices.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_548.ChildZeroLengthTransformIndices.AllocatorInstance.Data);
          }
          dVar37 = local_ce8.Scale3D.ZW.m128d_f64[1];
          dVar36 = local_ce8.Scale3D.ZW.m128d_f64[0];
          dVar35 = local_ce8.Scale3D.XY.m128d_f64[1];
          dVar34 = local_ce8.Scale3D.XY.m128d_f64[0];
          dVar27 = local_ce8.Translation.ZW.m128d_f64[1];
          dVar29 = local_ce8.Translation.ZW.m128d_f64[0];
          dVar109 = local_ce8.Translation.XY.m128d_f64[1];
          dVar108 = local_ce8.Translation.XY.m128d_f64[0];
          dVar28 = local_ce8.Rotation.ZW.m128d_f64[1];
          dVar23 = local_ce8.Rotation.ZW.m128d_f64[0];
          dVar22 = local_ce8.Rotation.XY.m128d_f64[1];
          dVar21 = local_ce8.Rotation.XY.m128d_f64[0];
          lVar56 = (longlong)(int)local_f98;
          uVar40 = 0;
          if ((int)local_f98 < *piVar2) {
            uVar40 = ~local_f98 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar38)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar52 = (pTVar1->AllocatorInstance).Data;
          lVar56 = lVar56 * 0x170;
          *(double *)(pFVar52 + lVar56 + 0xc0) = dVar21;
          *(double *)(pFVar52 + lVar56 + 0xc0 + 8) = dVar22;
          *(double *)(pFVar52 + lVar56 + 0xd0) = dVar23;
          *(double *)(pFVar52 + lVar56 + 0xd0 + 8) = dVar28;
          *(double *)(pFVar52 + lVar56 + 0xe0) = dVar108;
          *(double *)(pFVar52 + lVar56 + 0xe0 + 8) = dVar109;
          *(double *)(pFVar52 + lVar56 + 0xf0) = dVar29;
          *(double *)(pFVar52 + lVar56 + 0xf0 + 8) = dVar27;
          *(double *)(pFVar52 + lVar56 + 0x100) = dVar34;
          *(double *)(pFVar52 + lVar56 + 0x100 + 8) = dVar35;
          *(double *)(pFVar52 + lVar56 + 0x110) = dVar36;
          *(double *)(pFVar52 + lVar56 + 0x110 + 8) = dVar37;
        }
        local_f98 = local_f98 + 1;
        uVar40 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar51 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        uVar114 = _UNK_15061cc88;
        uVar115 = _UNK_15061cc8c;
      } while ((int)local_f98 < (int)local_f94._20_4_);
    }
    uVar44 = (this->Chain).ArrayNum;
    uVar46 = uVar44 - 2;
    if (-1 < (int)uVar46) {
      lVar56 = (longlong)(int)uVar46 * 0x170;
      do {
        uVar44 = uVar44 - 1;
        uVar53 = 0;
        if ((int)uVar46 < (this->Chain).ArrayNum) {
          uVar53 = ~uVar46 >> 0x1f;
        }
        if ((uVar53 == 0) &&
           (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar38)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FVar5 = *(FCompactPoseBoneIndex *)((this->Chain).AllocatorInstance.Data + lVar56 + 0x140);
        uVar53 = 0;
        if ((int)uVar44 < (this->Chain).ArrayNum) {
          uVar53 = ~uVar44 >> 0x1f;
        }
        if ((uVar53 == 0) &&
           (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar38)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FVar6 = *(FCompactPoseBoneIndex *)((this->Chain).AllocatorInstance.Data + lVar56 + 0x2b0);
        pTVar42 = FCSPose<FCompactPose>::GetComponentSpaceTransform(local_f58,FVar5);
        local_788.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_788.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_788.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_788.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_788.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_788.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_788.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_788.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_788.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_788.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_788.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_788.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_788.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_788.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_788,pTVar42,(TTransform<double> *)&this->owning_skel->_padding_);
        pTVar42 = FCSPose<FCompactPose>::GetComponentSpaceTransform(local_f58,FVar6);
        local_7e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_7e8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_7e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_7e8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_7e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_7e8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_7e8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_7e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_7e8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_7e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_7e8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_7e8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_7e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_7e8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_7e8,pTVar42,(TTransform<double> *)&this->owning_skel->_padding_);
        dVar100 = local_7e8.Translation.XY.m128d_f64[0] - local_788.Translation.XY.m128d_f64[0];
        local_d80 = local_7e8.Translation.XY.m128d_f64[0];
        dStack_d78 = local_7e8.Translation.XY.m128d_f64[1];
        local_d70 = local_7e8.Translation.ZW.m128d_f64[0];
        uVar53 = 0;
        if ((int)uVar46 < (this->Chain).ArrayNum) {
          uVar53 = ~uVar46 >> 0x1f;
        }
        dVar102 = local_7e8.Translation.ZW.m128d_f64[0] - local_788.Translation.ZW.m128d_f64[0];
        local_d58 = local_788.Translation.ZW.m128d_f64[0];
        local_d68 = local_788.Translation.XY.m128d_f64[0];
        dStack_d60 = local_788.Translation.XY.m128d_f64[1];
        dVar21 = local_7e8.Translation.XY.m128d_f64[1] - local_788.Translation.XY.m128d_f64[1];
        if ((uVar53 == 0) &&
           (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar38)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar46 = uVar46 - 1;
        *(double *)((this->Chain).AllocatorInstance.Data + lVar56 + 0x138) =
             SQRT(dVar21 * dVar21 + dVar100 * dVar100 + dVar102 * dVar102);
        lVar56 = lVar56 + -0x170;
      } while (uVar46 < 0x80000000);
    }
  }
  pFVar31 = local_f60;
  lVar56 = (longlong)(int)local_f94._20_4_;
  uVar44 = 0;
  if (0 < lVar56) {
    lVar54 = 0;
    do {
      uVar46 = 0;
      if ((int)uVar44 < (this->Chain).ArrayNum) {
        uVar46 = ~uVar44 >> 0x1f;
      }
      if ((uVar46 == 0) &&
         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar38)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FVar5 = *(FCompactPoseBoneIndex *)((this->Chain).AllocatorInstance.Data + lVar54 + 0x140);
      if (FVar5 != (FCompactPoseBoneIndex)0xffffffff) {
        pTVar42 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&pFVar31->Pose,FVar5);
        local_3d8.Rotation.XY.m128d_f64[0] = (pTVar42->Rotation).XY.m128d_f64[0];
        local_3d8.Rotation.XY.m128d_f64[1] = (pTVar42->Rotation).XY.m128d_f64[1];
        local_3d8.Rotation.ZW.m128d_f64[0] = (pTVar42->Rotation).ZW.m128d_f64[0];
        local_3d8.Rotation.ZW.m128d_f64[1] = (pTVar42->Rotation).ZW.m128d_f64[1];
        local_3d8.Translation.XY.m128d_f64[0] = (pTVar42->Translation).XY.m128d_f64[0];
        local_3d8.Translation.XY.m128d_f64[1] = (pTVar42->Translation).XY.m128d_f64[1];
        local_3d8.Translation.ZW.m128d_f64[0] = (pTVar42->Translation).ZW.m128d_f64[0];
        local_3d8.Translation.ZW.m128d_f64[1] = (pTVar42->Translation).ZW.m128d_f64[1];
        local_3d8.Scale3D.XY.m128d_f64[0] = (pTVar42->Scale3D).XY.m128d_f64[0];
        local_3d8.Scale3D.XY.m128d_f64[1] = (pTVar42->Scale3D).XY.m128d_f64[1];
        local_3d8.Scale3D.ZW.m128d_f64[0] = (pTVar42->Scale3D).ZW.m128d_f64[0];
        local_3d8.Scale3D.ZW.m128d_f64[1] = (pTVar42->Scale3D).ZW.m128d_f64[1];
        local_b08.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_b08.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_b08.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_b08.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_b08.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_b08.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_b08.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_b08.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_b08.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_b08.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_b08.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_b08.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_b08.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_b08.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_b08,&local_3d8,(TTransform<double> *)&this->owning_skel->_padding_);
        dVar27 = local_b08.Scale3D.ZW.m128d_f64[1];
        dVar29 = local_b08.Scale3D.ZW.m128d_f64[0];
        dVar109 = local_b08.Translation.ZW.m128d_f64[1];
        dVar108 = local_b08.Translation.ZW.m128d_f64[0];
        dVar22 = local_b08.Rotation.ZW.m128d_f64[1];
        dVar21 = local_b08.Rotation.ZW.m128d_f64[0];
        dVar102 = local_b08.Rotation.XY.m128d_f64[1];
        dVar100 = local_b08.Rotation.XY.m128d_f64[0];
        dVar23 = local_b08.Translation.XY.m128d_f64[0];
        dVar28 = local_b08.Translation.XY.m128d_f64[1];
        uVar46 = 0;
        if ((int)uVar44 < (this->Chain).ArrayNum) {
          uVar46 = ~uVar44 >> 0x1f;
        }
        dVar34 = local_b08.Scale3D.XY.m128d_f64[0];
        dVar35 = local_b08.Scale3D.XY.m128d_f64[1];
        if ((uVar46 == 0) &&
           (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar38)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar52 = (this->Chain).AllocatorInstance.Data;
        *(double *)(pFVar52 + lVar54 + 0x60) = dVar100;
        *(double *)(pFVar52 + lVar54 + 0x60 + 8) = dVar102;
        *(double *)(pFVar52 + lVar54 + 0x70) = dVar21;
        *(double *)(pFVar52 + lVar54 + 0x70 + 8) = dVar22;
        *(double *)(pFVar52 + lVar54 + 0x80) = dVar23;
        *(double *)(pFVar52 + lVar54 + 0x80 + 8) = dVar28;
        *(double *)(pFVar52 + lVar54 + 0x90) = dVar108;
        *(double *)(pFVar52 + lVar54 + 0x90 + 8) = dVar109;
        *(double *)(pFVar52 + lVar54 + 0xa0) = dVar34;
        *(double *)(pFVar52 + lVar54 + 0xa0 + 8) = dVar35;
        *(double *)(pFVar52 + lVar54 + 0xb0) = dVar29;
        *(double *)(pFVar52 + lVar54 + 0xb0 + 8) = dVar27;
      }
      uVar44 = uVar44 + 1;
      lVar54 = lVar54 + 0x170;
      lVar56 = lVar56 + -1;
    } while (lVar56 != 0);
  }
  if (this->Use_Advanced_Strict_Chain_Logic == false) {
    ChineseDragonChainSolving_Unstrict(this,&this->Chain,&local_aa8);
  }
  else {
    ChineseDragonChainSolving_Strict(this,&this->Chain,&local_aa8,&this->path_record);
  }
  auVar24 = ___xmm_7ff00000000000007ff0000000000000;
  uVar44 = (this->Chain).ArrayNum - 1;
  if (-1 < (int)uVar44) {
    lVar56 = (longlong)(int)uVar44;
    lVar54 = lVar56 * 0x170;
    do {
      uVar53 = ~uVar44 >> 0x1f;
      uVar46 = 0;
      if ((int)uVar44 < (this->Chain).ArrayNum) {
        uVar46 = uVar53;
      }
      if ((uVar46 == 0) &&
         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar38)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar46 = 0;
      if ((int)uVar44 < (this->Chain).ArrayNum) {
        uVar46 = uVar53;
      }
      if ((uVar46 == 0) &&
         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar38)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar52 = (this->Chain).AllocatorInstance.Data;
      local_c88.Rotation.XY.m128d_f64 = *(double (*) [2])(pFVar52 + lVar54);
      local_c88.Rotation.ZW.m128d_f64 = *(double (*) [2])(pFVar52 + lVar54 + 0x10);
      local_c88.Translation.XY.m128d_f64[0] = *(double *)(pFVar52 + lVar54 + 0x20);
      local_c88.Translation.XY.m128d_f64[1] = *(double *)(pFVar52 + lVar54 + 0x20 + 8);
      local_c88.Translation.ZW.m128d_f64[0] = *(double *)(pFVar52 + lVar54 + 0x30);
      local_c88.Translation.ZW.m128d_f64[1] = *(double *)(pFVar52 + lVar54 + 0x30 + 8);
      local_c88.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar52 + lVar54 + 0x40);
      local_c88.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar52 + lVar54 + 0x40 + 8);
      local_c88.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar52 + lVar54 + 0x50);
      local_c88.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar52 + lVar54 + 0x50 + 8);
      uVar46 = 0;
      if ((int)uVar44 < (this->Chain).ArrayNum) {
        uVar46 = uVar53;
      }
      if ((uVar46 == 0) &&
         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar38)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar9 = (this->Chain).AllocatorInstance.Data;
      lVar55 = lVar56 * 0x170;
      pFVar52 = pFVar9 + lVar55;
      dVar100 = *(double *)pFVar52;
      dVar102 = *(double *)(pFVar52 + 8);
      auVar58 = *(undefined1 (*) [16])(pFVar9 + lVar55 + 0x10);
      uVar46 = 0;
      if ((int)uVar44 < (this->Chain).ArrayNum) {
        uVar46 = uVar53;
      }
      if ((uVar46 == 0) &&
         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar38)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar9 = (this->Chain).AllocatorInstance.Data;
      dVar108 = auVar58._0_8_;
      dVar109 = auVar58._8_8_;
      pFVar52 = pFVar9 + lVar55 + 0x70;
      dVar21 = *(double *)pFVar52;
      dVar22 = *(double *)(pFVar52 + 8);
      auVar70._8_4_ = auVar58._8_4_;
      auVar70._0_8_ = dVar109;
      auVar70._12_4_ = auVar58._12_4_;
      pFVar9 = pFVar9 + lVar55 + 0x60;
      dVar23 = *(double *)pFVar9;
      dVar28 = *(double *)(pFVar9 + 8);
      uVar46 = 0;
      if ((int)uVar44 < (this->Chain).ArrayNum) {
        uVar46 = uVar53;
      }
      auVar71._8_4_ = auVar58._0_4_;
      auVar71._0_8_ = dVar108;
      auVar71._12_4_ = auVar58._4_4_;
      dVar29 = dVar100 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               auVar70._8_8_ * dVar28 +
               dVar102 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               auVar71._8_8_ * dVar23 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar27 = dVar100 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               dVar109 * dVar22 +
               dVar102 * dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               dVar108 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      local_c88.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar29,0);
      local_c88.Rotation.XY.m128d_f64[0] =
           dVar100 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar109 * dVar23 +
           dVar102 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar108 * dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      local_c88.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar29 >> 0x20);
      local_c88.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar27,0);
      local_c88.Rotation.ZW.m128d_f64[0] =
           dVar100 * dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar109 * dVar21 +
           dVar102 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar108 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      local_c88.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar27 >> 0x20);
      if ((uVar46 == 0) &&
         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar38)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar9 = (this->Chain).AllocatorInstance.Data;
      pFVar52 = pFVar9 + lVar55 + 0x40;
      local_f20 = *(double *)pFVar52;
      dStack_f18 = *(double *)(pFVar52 + 8);
      local_f10 = *(double *)(pFVar9 + lVar55 + 0x50);
      uVar46 = 0;
      if ((int)uVar44 < (this->Chain).ArrayNum) {
        uVar46 = uVar53;
      }
      if ((uVar46 == 0) &&
         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar38)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar9 = (this->Chain).AllocatorInstance.Data;
      pFVar52 = pFVar9 + lVar56 * 0x170 + 0xa0;
      local_d50 = *(double *)pFVar52;
      dStack_d48 = *(double *)(pFVar52 + 8);
      local_d40 = *(double *)(pFVar9 + lVar56 * 0x170 + 0xb0);
      iVar39 = (this->Chain).ArrayNum;
      local_d38 = local_f20 * local_d50;
      dStack_d30 = dStack_f18 * dStack_d48;
      local_d28 = local_f10 * local_d40;
      local_c88.Scale3D.ZW.m128d_f64[1] = 0.0;
      uVar46 = auVar24._0_4_;
      uVar49 = auVar24._4_4_;
      uVar101 = auVar24._8_4_;
      uVar103 = auVar24._12_4_;
      dVar100 = auVar24._0_8_;
      dVar102 = auVar24._8_8_;
      local_c88.Scale3D.XY.m128d_f64[0] = local_d38;
      local_c88.Scale3D.XY.m128d_f64[1] = dStack_d30;
      local_c88.Scale3D.ZW.m128d_f64[0] = local_d28;
      if (this->Interpolation_Is_World == false) {
        uVar48 = 0;
        if ((int)uVar44 < iVar39) {
          uVar48 = uVar53;
        }
        if (uVar48 == 0) {
          iVar39 = 0x506106c8;
          bVar38 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          uVar48 = (uint)CONCAT71(extraout_var_01,bVar38);
          if (bVar38) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        pFVar9 = (this->Chain).AllocatorInstance.Data;
        lVar55 = lVar56 * 0x170;
        pFVar52 = pFVar9 + lVar55 + 0xd0;
        auVar79._0_8_ = (double)CONCAT44(uVar49 & *(uint *)(pFVar52 + 4),uVar46 & *(uint *)pFVar52);
        auVar79._8_4_ = uVar101 & *(uint *)(pFVar52 + 8);
        auVar79._12_4_ = uVar103 & *(uint *)(pFVar52 + 0xc);
        pFVar52 = pFVar9 + lVar55 + 0xc0;
        auVar80._8_8_ = -(ulonglong)(auVar79._8_8_ == dVar102);
        auVar80._0_8_ = -(ulonglong)(auVar79._0_8_ == dVar100);
        iVar39 = movmskpd(iVar39,auVar80);
        lVar57 = -(ulonglong)
                  ((double)CONCAT44(uVar103 & *(uint *)(pFVar52 + 0xc),
                                    uVar101 & *(uint *)(pFVar52 + 8)) == dVar102);
        auVar15._8_4_ = (int)lVar57;
        auVar15._0_8_ =
             -(ulonglong)
              ((double)CONCAT44(uVar49 & *(uint *)(pFVar52 + 4),uVar46 & *(uint *)pFVar52) ==
              dVar100);
        auVar15._12_4_ = (int)((ulonglong)lVar57 >> 0x20);
        uVar48 = movmskpd(uVar48,auVar15);
        uVar47 = iVar39 << 2 | uVar48;
        if (uVar47 == 0) {
          pFVar52 = pFVar9 + lVar55 + 0xf0;
          auVar81._0_8_ =
               (double)CONCAT44(uVar49 & *(uint *)(pFVar52 + 4),uVar46 & *(uint *)pFVar52);
          auVar81._8_4_ = uVar101 & *(uint *)(pFVar52 + 8);
          auVar81._12_4_ = uVar103 & *(uint *)(pFVar52 + 0xc);
          pFVar52 = pFVar9 + lVar55 + 0xe0;
          auVar82._8_8_ = -(ulonglong)(auVar81._8_8_ == dVar102);
          auVar82._0_8_ = -(ulonglong)(auVar81._0_8_ == dVar100);
          iVar39 = movmskpd(0,auVar82);
          lVar57 = -(ulonglong)
                    ((double)CONCAT44(uVar103 & *(uint *)(pFVar52 + 0xc),
                                      uVar101 & *(uint *)(pFVar52 + 8)) == dVar102);
          auVar19._8_4_ = (int)lVar57;
          auVar19._0_8_ =
               -(ulonglong)
                ((double)CONCAT44(uVar49 & *(uint *)(pFVar52 + 4),uVar46 & *(uint *)pFVar52) ==
                dVar100);
          auVar19._12_4_ = (int)((ulonglong)lVar57 >> 0x20);
          uVar48 = movmskpd(uVar48,auVar19);
          uVar47 = iVar39 << 2 | uVar48;
          if (uVar47 == 0) {
            pFVar52 = pFVar9 + lVar55 + 0x110;
            auVar83._0_8_ =
                 (double)CONCAT44(uVar49 & *(uint *)(pFVar52 + 4),uVar46 & *(uint *)pFVar52);
            auVar83._8_4_ = uVar101 & *(uint *)(pFVar52 + 8);
            auVar83._12_4_ = uVar103 & *(uint *)(pFVar52 + 0xc);
            pFVar9 = pFVar9 + lVar55 + 0x100;
            auVar84._8_8_ = -(ulonglong)(auVar83._8_8_ == dVar102);
            auVar84._0_8_ = -(ulonglong)(auVar83._0_8_ == dVar100);
            iVar39 = movmskpd(0,auVar84);
            lVar55 = -(ulonglong)
                      ((double)CONCAT44(uVar103 & *(uint *)(pFVar9 + 0xc),
                                        uVar101 & *(uint *)(pFVar9 + 8)) == dVar102);
            auVar20._8_4_ = (int)lVar55;
            auVar20._0_8_ =
                 -(ulonglong)
                  ((double)CONCAT44(uVar49 & *(uint *)(pFVar9 + 4),uVar46 & *(uint *)pFVar9) ==
                  dVar100);
            auVar20._12_4_ = (int)((ulonglong)lVar55 >> 0x20);
            uVar46 = movmskpd(uVar48,auVar20);
            uVar47 = iVar39 << 2 | uVar46;
            uVar88 = CONCAT31((int3)(uVar46 >> 8),uVar47 != 0);
          }
          else {
            uVar88 = (undefined4)CONCAT71((uint7)(uint3)(uVar48 >> 8),1);
          }
        }
        else {
          uVar88 = (undefined4)CONCAT71((uint7)(uint3)(uVar48 >> 8),1);
        }
        pUVar50 = this->owning_skel;
        if ((char)uVar88 == '\0') {
          pUVar41 = (UWorld *)pUVar50->_padding_;
          fVar3 = this->Interpolation_Speed;
          if (pUVar41 == (UWorld *)0x0) {
            pUVar41 = UActorComponent::GetWorld_Uncached((UActorComponent *)pUVar50);
            uVar47 = (uint)pUVar50;
          }
          pUVar50 = this->owning_skel;
          fVar4 = pUVar41->DeltaTimeSeconds;
          lVar55 = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                    (double)CONCAT44(uVar115 & *(uint *)((longlong)&pUVar50->_padding_ + 4),
                                     uVar114 & (uint)pUVar50->_padding_));
          auVar18._8_4_ = (int)lVar55;
          auVar18._0_8_ =
               -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                (double)CONCAT44(uVar51 & *(uint *)((longlong)&pUVar50->_padding_ + 4),
                                 uVar40 & (uint)pUVar50->_padding_));
          auVar18._12_4_ = (int)((ulonglong)lVar55 >> 0x20);
          uVar46 = movmskpd(uVar47,auVar18);
          auVar86._8_8_ =
               -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
                (double)CONCAT44(uVar115 & *(uint *)((longlong)&pUVar50->_padding_ + 4),
                                 uVar114 & (uint)pUVar50->_padding_));
          auVar86._0_8_ =
               -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
                (double)CONCAT44(uVar51 & *(uint *)((longlong)&pUVar50->_padding_ + 4),
                                 uVar40 & (uint)pUVar50->_padding_));
          iVar39 = movmskpd((int)pUVar41,auVar86);
          if ((uVar46 & 0x3fffffff) == 0 && iVar39 == 0) {
            local_668.Rotation.XY.m128d_f64[1] =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
            local_668.Rotation.XY.m128d_f64[0] =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
            local_668.Rotation.ZW.m128d_f64[1] =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
            local_668.Rotation.ZW.m128d_f64[0] =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
            local_668.Translation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
            local_668.Translation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
            local_668.Scale3D.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
            local_668.Scale3D.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          }
          else {
            UE::Math::TTransform<double>::InverseFast
                      ((TTransform<double> *)&pUVar50->_padding_,&local_668);
          }
          local_608.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_608.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_608.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_608.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_608.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_608.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_608.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_608.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_608.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_608.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_608.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          local_608.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_608.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_608.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&local_608,&local_c88,&local_668);
          uVar46 = 0;
          if ((int)uVar44 < (this->Chain).ArrayNum) {
            uVar46 = uVar53;
          }
          if ((uVar46 == 0) &&
             (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar38)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pTVar42 = UKismetMathLibrary::TInterpTo
                              (&local_2b8,
                               (TTransform<double> *)
                               ((this->Chain).AllocatorInstance.Data + lVar56 * 0x170 + 0xc0),
                               &local_608,fVar4,fVar3);
          uVar88 = *(undefined4 *)(pTVar42->Rotation).XY.m128d_f64;
          uVar89 = *(undefined4 *)((longlong)(pTVar42->Rotation).XY.m128d_f64 + 4);
          uVar90 = *(undefined4 *)((pTVar42->Rotation).XY.m128d_f64 + 1);
          uVar91 = *(undefined4 *)((longlong)(pTVar42->Rotation).XY.m128d_f64 + 0xc);
          uVar92 = *(undefined4 *)(pTVar42->Rotation).ZW.m128d_f64;
          uVar93 = *(undefined4 *)((longlong)(pTVar42->Rotation).ZW.m128d_f64 + 4);
          uVar94 = *(undefined4 *)((pTVar42->Rotation).ZW.m128d_f64 + 1);
          uVar95 = *(undefined4 *)((longlong)(pTVar42->Rotation).ZW.m128d_f64 + 0xc);
          uVar96 = *(undefined4 *)(pTVar42->Translation).XY.m128d_f64;
          uVar97 = *(undefined4 *)((longlong)(pTVar42->Translation).XY.m128d_f64 + 4);
          uVar98 = *(undefined4 *)((pTVar42->Translation).XY.m128d_f64 + 1);
          uVar99 = *(undefined4 *)((longlong)(pTVar42->Translation).XY.m128d_f64 + 0xc);
          uVar104 = *(undefined4 *)(pTVar42->Translation).ZW.m128d_f64;
          uVar105 = *(undefined4 *)((longlong)(pTVar42->Translation).ZW.m128d_f64 + 4);
          uVar106 = *(undefined4 *)((pTVar42->Translation).ZW.m128d_f64 + 1);
          uVar107 = *(undefined4 *)((longlong)(pTVar42->Translation).ZW.m128d_f64 + 0xc);
          dVar100 = (pTVar42->Scale3D).XY.m128d_f64[0];
          dVar102 = (pTVar42->Scale3D).XY.m128d_f64[1];
          uVar110 = *(undefined4 *)(pTVar42->Scale3D).ZW.m128d_f64;
          uVar111 = *(undefined4 *)((longlong)(pTVar42->Scale3D).ZW.m128d_f64 + 4);
          uVar112 = *(undefined4 *)((pTVar42->Scale3D).ZW.m128d_f64 + 1);
          uVar113 = *(undefined4 *)((longlong)(pTVar42->Scale3D).ZW.m128d_f64 + 0xc);
        }
        else {
          lVar55 = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                    (double)CONCAT44(uVar115 & *(uint *)((longlong)&pUVar50->_padding_ + 4),
                                     uVar114 & (uint)pUVar50->_padding_));
          auVar16._8_4_ = (int)lVar55;
          auVar16._0_8_ =
               -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                (double)CONCAT44(uVar51 & *(uint *)((longlong)&pUVar50->_padding_ + 4),
                                 uVar40 & (uint)pUVar50->_padding_));
          auVar16._12_4_ = (int)((ulonglong)lVar55 >> 0x20);
          uVar46 = movmskpd(uVar47,auVar16);
          auVar85._8_8_ =
               -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
                (double)CONCAT44(uVar115 & *(uint *)((longlong)&pUVar50->_padding_ + 4),
                                 uVar114 & (uint)pUVar50->_padding_));
          auVar85._0_8_ =
               -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
                (double)CONCAT44(uVar51 & *(uint *)((longlong)&pUVar50->_padding_ + 4),
                                 uVar40 & (uint)pUVar50->_padding_));
          iVar39 = movmskpd(uVar88,auVar85);
          if ((uVar46 & 0x3fffffff) == 0 && iVar39 == 0) {
            local_6c8.Rotation.XY.m128d_f64[1] =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
            local_6c8.Rotation.XY.m128d_f64[0] =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
            local_6c8.Rotation.ZW.m128d_f64[1] =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
            local_6c8.Rotation.ZW.m128d_f64[0] =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
            local_6c8.Translation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
            local_6c8.Translation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
            local_6c8.Scale3D.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
            local_6c8.Scale3D.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          }
          else {
            UE::Math::TTransform<double>::InverseFast
                      ((TTransform<double> *)&pUVar50->_padding_,&local_6c8);
          }
          local_9e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_9e8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_9e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_9e8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_9e8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_9e8.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_9e8.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_9e8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_9e8.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_9e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_9e8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          local_9e8.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_9e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_9e8.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&local_9e8,&local_c88,&local_6c8);
          uVar88 = local_9e8.Rotation.XY.m128d_f64[0]._0_4_;
          uVar89 = local_9e8.Rotation.XY.m128d_f64[0]._4_4_;
          uVar90 = local_9e8.Rotation.XY.m128d_f64[1]._0_4_;
          uVar91 = local_9e8.Rotation.XY.m128d_f64[1]._4_4_;
          uVar92 = local_9e8.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar93 = local_9e8.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar94 = local_9e8.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar95 = local_9e8.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar96 = local_9e8.Translation.XY.m128d_f64[0]._0_4_;
          uVar97 = local_9e8.Translation.XY.m128d_f64[0]._4_4_;
          uVar98 = local_9e8.Translation.XY.m128d_f64[1]._0_4_;
          uVar99 = local_9e8.Translation.XY.m128d_f64[1]._4_4_;
          uVar104 = local_9e8.Translation.ZW.m128d_f64[0]._0_4_;
          uVar105 = local_9e8.Translation.ZW.m128d_f64[0]._4_4_;
          uVar106 = local_9e8.Translation.ZW.m128d_f64[1]._0_4_;
          uVar107 = local_9e8.Translation.ZW.m128d_f64[1]._4_4_;
          uVar110 = local_9e8.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar111 = local_9e8.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar112 = local_9e8.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar113 = local_9e8.Scale3D.ZW.m128d_f64[1]._4_4_;
          dVar100 = local_9e8.Scale3D.XY.m128d_f64[0];
          dVar102 = local_9e8.Scale3D.XY.m128d_f64[1];
        }
        uVar46 = 0;
        if ((int)uVar44 < (this->Chain).ArrayNum) {
          uVar46 = uVar53;
        }
        if ((uVar46 == 0) &&
           (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar38)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar9 = (this->Chain).AllocatorInstance.Data;
        lVar55 = lVar56 * 0x170;
        pFVar52 = pFVar9 + lVar55 + 0xc0;
        *(undefined4 *)pFVar52 = uVar88;
        *(undefined4 *)(pFVar52 + 4) = uVar89;
        *(undefined4 *)(pFVar52 + 8) = uVar90;
        *(undefined4 *)(pFVar52 + 0xc) = uVar91;
        pFVar52 = pFVar9 + lVar55 + 0xd0;
        *(undefined4 *)pFVar52 = uVar92;
        *(undefined4 *)(pFVar52 + 4) = uVar93;
        *(undefined4 *)(pFVar52 + 8) = uVar94;
        *(undefined4 *)(pFVar52 + 0xc) = uVar95;
        pFVar52 = pFVar9 + lVar55 + 0xe0;
        *(undefined4 *)pFVar52 = uVar96;
        *(undefined4 *)(pFVar52 + 4) = uVar97;
        *(undefined4 *)(pFVar52 + 8) = uVar98;
        *(undefined4 *)(pFVar52 + 0xc) = uVar99;
        pFVar52 = pFVar9 + lVar55 + 0xf0;
        *(undefined4 *)pFVar52 = uVar104;
        *(undefined4 *)(pFVar52 + 4) = uVar105;
        *(undefined4 *)(pFVar52 + 8) = uVar106;
        *(undefined4 *)(pFVar52 + 0xc) = uVar107;
        *(double *)(pFVar9 + lVar55 + 0x100) = dVar100;
        *(double *)(pFVar9 + lVar55 + 0x100 + 8) = dVar102;
        pFVar52 = pFVar9 + lVar55 + 0x110;
        *(undefined4 *)pFVar52 = uVar110;
        *(undefined4 *)(pFVar52 + 4) = uVar111;
        *(undefined4 *)(pFVar52 + 8) = uVar112;
        *(undefined4 *)(pFVar52 + 0xc) = uVar113;
        if (this->solver_counter < 10) {
          pUVar50 = this->owning_skel;
          lVar57 = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                    (double)CONCAT44(uVar115 & *(uint *)((longlong)&pUVar50->_padding_ + 4),
                                     uVar114 & (uint)pUVar50->_padding_));
          auVar17._8_4_ = (int)lVar57;
          auVar17._0_8_ =
               -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                (double)CONCAT44(uVar51 & *(uint *)((longlong)&pUVar50->_padding_ + 4),
                                 uVar40 & (uint)pUVar50->_padding_));
          auVar17._12_4_ = (int)((ulonglong)lVar57 >> 0x20);
          uVar46 = movmskpd((int)lVar55,auVar17);
          auVar87._8_8_ =
               -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
                (double)CONCAT44(uVar115 & *(uint *)((longlong)&pUVar50->_padding_ + 4),
                                 uVar114 & (uint)pUVar50->_padding_));
          auVar87._0_8_ =
               -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
                (double)CONCAT44(uVar51 & *(uint *)((longlong)&pUVar50->_padding_ + 4),
                                 uVar40 & (uint)pUVar50->_padding_));
          iVar39 = movmskpd((int)pFVar9,auVar87);
          if ((uVar46 & 0x3fffffff) == 0 && iVar39 == 0) {
            local_5a8.Rotation.XY.m128d_f64[1] =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
            local_5a8.Rotation.XY.m128d_f64[0] =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
            local_5a8.Rotation.ZW.m128d_f64[1] =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
            local_5a8.Rotation.ZW.m128d_f64[0] =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
            local_5a8.Translation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
            local_5a8.Translation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
            local_5a8.Scale3D.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
            local_5a8.Scale3D.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          }
          else {
            UE::Math::TTransform<double>::InverseFast
                      ((TTransform<double> *)&pUVar50->_padding_,&local_5a8);
          }
          local_988.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_988.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_988.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_988.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_988.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_988.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_988.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_988.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_988.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_988.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_988.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          local_988.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_988.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_988.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&local_988,&local_c88,&local_5a8);
          dVar27 = local_988.Scale3D.ZW.m128d_f64[1];
          dVar29 = local_988.Scale3D.ZW.m128d_f64[0];
          dVar109 = local_988.Translation.ZW.m128d_f64[1];
          dVar108 = local_988.Translation.ZW.m128d_f64[0];
          dVar22 = local_988.Rotation.ZW.m128d_f64[1];
          dVar21 = local_988.Rotation.ZW.m128d_f64[0];
          dVar102 = local_988.Rotation.XY.m128d_f64[1];
          dVar100 = local_988.Rotation.XY.m128d_f64[0];
          dVar23 = local_988.Translation.XY.m128d_f64[0];
          dVar28 = local_988.Translation.XY.m128d_f64[1];
          uVar46 = 0;
          if ((int)uVar44 < (this->Chain).ArrayNum) {
            uVar46 = uVar53;
          }
          dVar34 = local_988.Scale3D.XY.m128d_f64[0];
          dVar35 = local_988.Scale3D.XY.m128d_f64[1];
          if ((uVar46 == 0) &&
             (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar38)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar52 = (this->Chain).AllocatorInstance.Data;
          lVar55 = lVar56 * 0x170;
          *(double *)(pFVar52 + lVar55 + 0xc0) = dVar100;
          *(double *)(pFVar52 + lVar55 + 0xc0 + 8) = dVar102;
          *(double *)(pFVar52 + lVar55 + 0xd0) = dVar21;
          *(double *)(pFVar52 + lVar55 + 0xd0 + 8) = dVar22;
          *(double *)(pFVar52 + lVar55 + 0xe0) = dVar23;
          *(double *)(pFVar52 + lVar55 + 0xe0 + 8) = dVar28;
          *(double *)(pFVar52 + lVar55 + 0xf0) = dVar108;
          *(double *)(pFVar52 + lVar55 + 0xf0 + 8) = dVar109;
          *(double *)(pFVar52 + lVar55 + 0x100) = dVar34;
          *(double *)(pFVar52 + lVar55 + 0x100 + 8) = dVar35;
          *(double *)(pFVar52 + lVar55 + 0x110) = dVar29;
          *(double *)(pFVar52 + lVar55 + 0x110 + 8) = dVar27;
        }
        uVar46 = 0;
        if ((int)uVar44 < (this->Chain).ArrayNum) {
          uVar46 = uVar53;
        }
        if ((uVar46 == 0) &&
           (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar38)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar52 = (this->Chain).AllocatorInstance.Data;
        lVar55 = lVar56 * 0x170;
        local_f08 = *(double *)(pFVar52 + lVar55 + 0xc0);
        dStack_f00 = *(double *)(pFVar52 + lVar55 + 0xc0 + 8);
        local_ef8 = *(double *)(pFVar52 + lVar55 + 0xd0);
        dStack_ef0 = *(double *)(pFVar52 + lVar55 + 0xd0 + 8);
        local_ee8 = *(double *)(pFVar52 + lVar55 + 0xe0);
        dStack_ee0 = *(double *)(pFVar52 + lVar55 + 0xe0 + 8);
        local_ed8 = *(double *)(pFVar52 + lVar55 + 0xf0);
        dStack_ed0 = *(double *)(pFVar52 + lVar55 + 0xf0 + 8);
        local_ec8 = *(double *)(pFVar52 + lVar55 + 0x100);
        dStack_ec0 = *(double *)(pFVar52 + lVar55 + 0x100 + 8);
        pFVar52 = pFVar52 + lVar55 + 0x110;
        local_eb8 = *(undefined4 *)pFVar52;
        uStack_eb4 = *(undefined4 *)(pFVar52 + 4);
        uStack_eb0 = *(undefined4 *)(pFVar52 + 8);
        uStack_eac = *(undefined4 *)(pFVar52 + 0xc);
      }
      else {
        uVar48 = 0;
        if ((int)uVar44 < iVar39) {
          uVar48 = uVar53;
        }
        if (uVar48 == 0) {
          iVar39 = 0x506106c8;
          bVar38 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          uVar48 = (uint)CONCAT71(extraout_var,bVar38);
          if (bVar38) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        pFVar9 = (this->Chain).AllocatorInstance.Data;
        lVar55 = lVar56 * 0x170;
        pFVar52 = pFVar9 + lVar55 + 0xd0;
        auVar72._0_8_ = (double)CONCAT44(uVar49 & *(uint *)(pFVar52 + 4),uVar46 & *(uint *)pFVar52);
        auVar72._8_4_ = uVar101 & *(uint *)(pFVar52 + 8);
        auVar72._12_4_ = uVar103 & *(uint *)(pFVar52 + 0xc);
        pFVar52 = pFVar9 + lVar55 + 0xc0;
        auVar73._8_8_ = -(ulonglong)(auVar72._8_8_ == dVar102);
        auVar73._0_8_ = -(ulonglong)(auVar72._0_8_ == dVar100);
        uVar47 = movmskpd(iVar39,auVar73);
        lVar57 = -(ulonglong)
                  ((double)CONCAT44(uVar103 & *(uint *)(pFVar52 + 0xc),
                                    uVar101 & *(uint *)(pFVar52 + 8)) == dVar102);
        auVar11._8_4_ = (int)lVar57;
        auVar11._0_8_ =
             -(ulonglong)
              ((double)CONCAT44(uVar49 & *(uint *)(pFVar52 + 4),uVar46 & *(uint *)pFVar52) ==
              dVar100);
        auVar11._12_4_ = (int)((ulonglong)lVar57 >> 0x20);
        iVar39 = movmskpd(uVar48,auVar11);
        if ((uVar47 & 0x3fffffff) == 0 && iVar39 == 0) {
          pFVar52 = pFVar9 + lVar55 + 0xf0;
          auVar74._0_8_ =
               (double)CONCAT44(uVar49 & *(uint *)(pFVar52 + 4),uVar46 & *(uint *)pFVar52);
          auVar74._8_4_ = uVar101 & *(uint *)(pFVar52 + 8);
          auVar74._12_4_ = uVar103 & *(uint *)(pFVar52 + 0xc);
          pFVar52 = pFVar9 + lVar55 + 0xe0;
          auVar75._8_8_ = -(ulonglong)(auVar74._8_8_ == dVar102);
          auVar75._0_8_ = -(ulonglong)(auVar74._0_8_ == dVar100);
          uVar48 = movmskpd(0,auVar75);
          lVar57 = -(ulonglong)
                    ((double)CONCAT44(uVar103 & *(uint *)(pFVar52 + 0xc),
                                      uVar101 & *(uint *)(pFVar52 + 8)) == dVar102);
          auVar12._8_4_ = (int)lVar57;
          auVar12._0_8_ =
               -(ulonglong)
                ((double)CONCAT44(uVar49 & *(uint *)(pFVar52 + 4),uVar46 & *(uint *)pFVar52) ==
                dVar100);
          auVar12._12_4_ = (int)((ulonglong)lVar57 >> 0x20);
          iVar39 = movmskpd(iVar39,auVar12);
          if ((uVar48 & 0x3fffffff) != 0 || iVar39 != 0) goto LAB_14d2d7f73;
          pFVar52 = pFVar9 + lVar55 + 0x110;
          auVar76._0_8_ =
               (double)CONCAT44(uVar49 & *(uint *)(pFVar52 + 4),uVar46 & *(uint *)pFVar52);
          auVar76._8_4_ = uVar101 & *(uint *)(pFVar52 + 8);
          auVar76._12_4_ = uVar103 & *(uint *)(pFVar52 + 0xc);
          pFVar9 = pFVar9 + lVar55 + 0x100;
          auVar77._8_8_ = -(ulonglong)(auVar76._8_8_ == dVar102);
          auVar77._0_8_ = -(ulonglong)(auVar76._0_8_ == dVar100);
          uVar48 = movmskpd(0,auVar77);
          lVar57 = -(ulonglong)
                    ((double)CONCAT44(uVar103 & *(uint *)(pFVar9 + 0xc),
                                      uVar101 & *(uint *)(pFVar9 + 8)) == dVar102);
          auVar13._8_4_ = (int)lVar57;
          auVar13._0_8_ =
               -(ulonglong)
                ((double)CONCAT44(uVar49 & *(uint *)(pFVar9 + 4),uVar46 & *(uint *)pFVar9) ==
                dVar100);
          auVar13._12_4_ = (int)((ulonglong)lVar57 >> 0x20);
          iVar39 = movmskpd(iVar39,auVar13);
          if ((uVar48 & 0x3fffffff) != 0 || iVar39 != 0) goto LAB_14d2d7f73;
          fVar3 = this->Interpolation_Speed;
          pUVar41 = (UWorld *)this->owning_skel->_padding_;
          if (pUVar41 == (UWorld *)0x0) {
            pUVar41 = UActorComponent::GetWorld_Uncached((UActorComponent *)this->owning_skel);
          }
          fVar4 = pUVar41->DeltaTimeSeconds;
          uVar46 = 0;
          if ((int)uVar44 < (this->Chain).ArrayNum) {
            uVar46 = uVar53;
          }
          if ((uVar46 == 0) &&
             (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar38)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pTVar42 = UKismetMathLibrary::TInterpTo
                              (&local_318,
                               (TTransform<double> *)
                               ((this->Chain).AllocatorInstance.Data + lVar56 * 0x170 + 0xc0),
                               &local_c88,fVar4,fVar3);
          uVar88 = *(undefined4 *)(pTVar42->Rotation).XY.m128d_f64;
          uVar89 = *(undefined4 *)((longlong)(pTVar42->Rotation).XY.m128d_f64 + 4);
          uVar90 = *(undefined4 *)((pTVar42->Rotation).XY.m128d_f64 + 1);
          uVar91 = *(undefined4 *)((longlong)(pTVar42->Rotation).XY.m128d_f64 + 0xc);
          uVar92 = *(undefined4 *)(pTVar42->Rotation).ZW.m128d_f64;
          uVar93 = *(undefined4 *)((longlong)(pTVar42->Rotation).ZW.m128d_f64 + 4);
          uVar94 = *(undefined4 *)((pTVar42->Rotation).ZW.m128d_f64 + 1);
          uVar95 = *(undefined4 *)((longlong)(pTVar42->Rotation).ZW.m128d_f64 + 0xc);
          uVar96 = *(undefined4 *)(pTVar42->Translation).XY.m128d_f64;
          uVar97 = *(undefined4 *)((longlong)(pTVar42->Translation).XY.m128d_f64 + 4);
          uVar98 = *(undefined4 *)((pTVar42->Translation).XY.m128d_f64 + 1);
          uVar99 = *(undefined4 *)((longlong)(pTVar42->Translation).XY.m128d_f64 + 0xc);
          uVar104 = *(undefined4 *)(pTVar42->Translation).ZW.m128d_f64;
          uVar105 = *(undefined4 *)((longlong)(pTVar42->Translation).ZW.m128d_f64 + 4);
          uVar106 = *(undefined4 *)((pTVar42->Translation).ZW.m128d_f64 + 1);
          uVar107 = *(undefined4 *)((longlong)(pTVar42->Translation).ZW.m128d_f64 + 0xc);
          uVar110 = *(undefined4 *)(pTVar42->Scale3D).ZW.m128d_f64;
          uVar111 = *(undefined4 *)((longlong)(pTVar42->Scale3D).ZW.m128d_f64 + 4);
          uVar112 = *(undefined4 *)((pTVar42->Scale3D).ZW.m128d_f64 + 1);
          uVar113 = *(undefined4 *)((longlong)(pTVar42->Scale3D).ZW.m128d_f64 + 0xc);
          dVar100 = (pTVar42->Scale3D).XY.m128d_f64[0];
          dVar102 = (pTVar42->Scale3D).XY.m128d_f64[1];
        }
        else {
LAB_14d2d7f73:
          uVar88 = local_c88.Rotation.XY.m128d_f64[0]._0_4_;
          uVar89 = local_c88.Rotation.XY.m128d_f64[0]._4_4_;
          uVar90 = local_c88.Rotation.XY.m128d_f64[1]._0_4_;
          uVar91 = local_c88.Rotation.XY.m128d_f64[1]._4_4_;
          uVar92 = local_c88.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar93 = local_c88.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar94 = local_c88.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar95 = local_c88.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar96 = local_c88.Translation.XY.m128d_f64[0]._0_4_;
          uVar97 = local_c88.Translation.XY.m128d_f64[0]._4_4_;
          uVar98 = local_c88.Translation.XY.m128d_f64[1]._0_4_;
          uVar99 = local_c88.Translation.XY.m128d_f64[1]._4_4_;
          uVar104 = local_c88.Translation.ZW.m128d_f64[0]._0_4_;
          uVar105 = local_c88.Translation.ZW.m128d_f64[0]._4_4_;
          uVar106 = local_c88.Translation.ZW.m128d_f64[1]._0_4_;
          uVar107 = local_c88.Translation.ZW.m128d_f64[1]._4_4_;
          uVar110 = local_c88.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar111 = local_c88.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar112 = local_c88.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar113 = local_c88.Scale3D.ZW.m128d_f64[1]._4_4_;
          dVar100 = local_c88.Scale3D.XY.m128d_f64[0];
          dVar102 = local_c88.Scale3D.XY.m128d_f64[1];
        }
        uVar46 = 0;
        if ((int)uVar44 < (this->Chain).ArrayNum) {
          uVar46 = uVar53;
        }
        if ((uVar46 == 0) &&
           (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar38)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        dVar27 = local_c88.Scale3D.ZW.m128d_f64[1];
        dVar29 = local_c88.Scale3D.ZW.m128d_f64[0];
        dVar109 = local_c88.Scale3D.XY.m128d_f64[1];
        dVar108 = local_c88.Scale3D.XY.m128d_f64[0];
        dVar28 = local_c88.Translation.ZW.m128d_f64[1];
        dVar23 = local_c88.Translation.ZW.m128d_f64[0];
        dVar22 = local_c88.Translation.XY.m128d_f64[1];
        dVar21 = local_c88.Translation.XY.m128d_f64[0];
        pFVar9 = (this->Chain).AllocatorInstance.Data;
        lVar57 = lVar56 * 0x170;
        pFVar52 = pFVar9 + lVar57 + 0xc0;
        *(undefined4 *)pFVar52 = uVar88;
        *(undefined4 *)(pFVar52 + 4) = uVar89;
        *(undefined4 *)(pFVar52 + 8) = uVar90;
        *(undefined4 *)(pFVar52 + 0xc) = uVar91;
        pFVar52 = pFVar9 + lVar57 + 0xd0;
        *(undefined4 *)pFVar52 = uVar92;
        *(undefined4 *)(pFVar52 + 4) = uVar93;
        *(undefined4 *)(pFVar52 + 8) = uVar94;
        *(undefined4 *)(pFVar52 + 0xc) = uVar95;
        pFVar52 = pFVar9 + lVar57 + 0xe0;
        *(undefined4 *)pFVar52 = uVar96;
        *(undefined4 *)(pFVar52 + 4) = uVar97;
        *(undefined4 *)(pFVar52 + 8) = uVar98;
        *(undefined4 *)(pFVar52 + 0xc) = uVar99;
        pFVar52 = pFVar9 + lVar57 + 0xf0;
        *(undefined4 *)pFVar52 = uVar104;
        *(undefined4 *)(pFVar52 + 4) = uVar105;
        *(undefined4 *)(pFVar52 + 8) = uVar106;
        *(undefined4 *)(pFVar52 + 0xc) = uVar107;
        *(double *)(pFVar9 + lVar57 + 0x100) = dVar100;
        *(double *)(pFVar9 + lVar57 + 0x100 + 8) = dVar102;
        pFVar9 = pFVar9 + lVar57 + 0x110;
        *(undefined4 *)pFVar9 = uVar110;
        *(undefined4 *)(pFVar9 + 4) = uVar111;
        *(undefined4 *)(pFVar9 + 8) = uVar112;
        *(undefined4 *)(pFVar9 + 0xc) = uVar113;
        if (this->solver_counter < 10) {
          dVar100 = local_c88.Rotation.XY.m128d_f64[0];
          dVar102 = local_c88.Rotation.XY.m128d_f64[1];
          dVar34 = local_c88.Rotation.ZW.m128d_f64[0];
          dVar35 = local_c88.Rotation.ZW.m128d_f64[1];
          uVar46 = 0;
          if ((int)uVar44 < (this->Chain).ArrayNum) {
            uVar46 = uVar53;
          }
          if ((uVar46 == 0) &&
             (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar38)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar52 = (this->Chain).AllocatorInstance.Data;
          lVar57 = lVar56 * 0x170;
          *(double *)(pFVar52 + lVar57 + 0xc0) = dVar100;
          *(double *)(pFVar52 + lVar57 + 0xc0 + 8) = dVar102;
          *(double *)(pFVar52 + lVar57 + 0xd0) = dVar34;
          *(double *)(pFVar52 + lVar57 + 0xd0 + 8) = dVar35;
          *(double *)(pFVar52 + lVar57 + 0xe0) = dVar21;
          *(double *)(pFVar52 + lVar57 + 0xe0 + 8) = dVar22;
          *(double *)(pFVar52 + lVar57 + 0xf0) = dVar23;
          *(double *)(pFVar52 + lVar57 + 0xf0 + 8) = dVar28;
          *(double *)(pFVar52 + lVar57 + 0x100) = dVar108;
          *(double *)(pFVar52 + lVar57 + 0x100 + 8) = dVar109;
          *(double *)(pFVar52 + lVar57 + 0x110) = dVar29;
          *(double *)(pFVar52 + lVar57 + 0x110 + 8) = dVar27;
        }
        iVar39 = (this->Chain).ArrayNum;
        uVar46 = 0;
        if ((int)uVar44 < iVar39) {
          uVar46 = uVar53;
        }
        if (uVar46 == 0) {
          iVar39 = 0x506106c8;
          bVar38 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          uVar46 = (uint)CONCAT71(extraout_var_00,bVar38);
          if (bVar38) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        pUVar50 = this->owning_skel;
        pFVar52 = (this->Chain).AllocatorInstance.Data;
        lVar57 = -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                  (double)CONCAT44(uVar115 & *(uint *)((longlong)&pUVar50->_padding_ + 4),
                                   uVar114 & (uint)pUVar50->_padding_));
        auVar14._8_4_ = (int)lVar57;
        auVar14._0_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
              (double)CONCAT44(uVar51 & *(uint *)((longlong)&pUVar50->_padding_ + 4),
                               uVar40 & (uint)pUVar50->_padding_));
        auVar14._12_4_ = (int)((ulonglong)lVar57 >> 0x20);
        uVar49 = movmskpd(iVar39,auVar14);
        auVar78._8_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
              (double)CONCAT44(uVar115 & *(uint *)((longlong)&pUVar50->_padding_ + 4),
                               uVar114 & (uint)pUVar50->_padding_));
        auVar78._0_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
              (double)CONCAT44(uVar51 & *(uint *)((longlong)&pUVar50->_padding_ + 4),
                               uVar40 & (uint)pUVar50->_padding_));
        iVar39 = movmskpd(uVar46,auVar78);
        if ((uVar49 & 0x3fffffff) == 0 && iVar39 == 0) {
          local_728.Rotation.XY.m128d_f64[1] =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
          local_728.Rotation.XY.m128d_f64[0] =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
          local_728.Rotation.ZW.m128d_f64[1] =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
          local_728.Rotation.ZW.m128d_f64[0] =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
          local_728.Translation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          local_728.Translation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          local_728.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          local_728.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        }
        else {
          UE::Math::TTransform<double>::InverseFast
                    ((TTransform<double> *)&pUVar50->_padding_,&local_728);
        }
        local_a48.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_a48.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_a48.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_a48.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_a48.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_a48.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_a48.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_a48.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_a48.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_a48.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_a48.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_a48.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_a48.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_a48.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_a48,(TTransform<double> *)(pFVar52 + lVar55 + 0xc0),&local_728);
        local_f08 = local_a48.Rotation.XY.m128d_f64[0];
        dStack_f00 = local_a48.Rotation.XY.m128d_f64[1];
        local_ef8 = local_a48.Rotation.ZW.m128d_f64[0];
        dStack_ef0 = local_a48.Rotation.ZW.m128d_f64[1];
        local_ee8 = local_a48.Translation.XY.m128d_f64[0];
        dStack_ee0 = local_a48.Translation.XY.m128d_f64[1];
        local_ed8 = local_a48.Translation.ZW.m128d_f64[0];
        dStack_ed0 = local_a48.Translation.ZW.m128d_f64[1];
        local_eb8 = local_a48.Scale3D.ZW.m128d_f64[0]._0_4_;
        uStack_eb4 = local_a48.Scale3D.ZW.m128d_f64[0]._4_4_;
        uStack_eb0 = local_a48.Scale3D.ZW.m128d_f64[1]._0_4_;
        uStack_eac = local_a48.Scale3D.ZW.m128d_f64[1]._4_4_;
        local_ec8 = local_a48.Scale3D.XY.m128d_f64[0];
        dStack_ec0 = local_a48.Scale3D.XY.m128d_f64[1];
      }
      uVar46 = 0;
      if ((int)uVar44 < (this->Chain).ArrayNum) {
        uVar46 = uVar53;
      }
      if ((uVar46 == 0) &&
         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar38)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar30 = local_f94._28_8_;
      uVar46 = *(uint *)((this->Chain).AllocatorInstance.Data + lVar56 * 0x170 + 0x144);
      uVar53 = 0;
      if ((int)uVar46 < *(int *)(local_f94._28_8_ + 8)) {
        uVar53 = ~uVar46 >> 0x1f;
      }
      if ((uVar53 == 0) &&
         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar38)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar52 = ((ForAnyElementType *)uVar30)->Data;
      uVar44 = uVar44 - 1;
      lVar56 = lVar56 + -1;
      lVar54 = lVar54 + -0x170;
      lVar55 = (longlong)(int)uVar46 * 0x70;
      *(double *)(pFVar52 + lVar55 + 0x10) = local_f08;
      *(double *)(pFVar52 + lVar55 + 0x10 + 8) = dStack_f00;
      *(double *)(pFVar52 + lVar55 + 0x20) = local_ef8;
      *(double *)(pFVar52 + lVar55 + 0x20 + 8) = dStack_ef0;
      *(double *)(pFVar52 + lVar55 + 0x30) = local_ee8;
      *(double *)(pFVar52 + lVar55 + 0x30 + 8) = dStack_ee0;
      *(double *)(pFVar52 + lVar55 + 0x40) = local_ed8;
      *(double *)(pFVar52 + lVar55 + 0x40 + 8) = dStack_ed0;
      *(double *)(pFVar52 + lVar55 + 0x50) = local_ec8;
      *(double *)(pFVar52 + lVar55 + 0x50 + 8) = dStack_ec0;
      *(ulonglong *)(pFVar52 + lVar55 + 0x60) = CONCAT44(uStack_eb4,local_eb8);
      *(ulonglong *)(pFVar52 + lVar55 + 0x60 + 8) = CONCAT44(uStack_eac,uStack_eb0);
    } while (uVar44 < 0x80000000);
  }
  if ((FCompactPoseBoneIndex *)local_f94._4_8_ != (FCompactPoseBoneIndex *)0x0) {
    FMemory::Free((void *)local_f94._4_8_);
  }
  return;
}

// Evaluate_AnyThread @ 14d2dd200

void __thiscall
FAnimNode_ChineseDragonSolver::Evaluate_AnyThread
          (FAnimNode_ChineseDragonSolver *this,FPoseContext *param_1)

{
  return;
}

// GetLODThreshold @ 14d2f2270

int __thiscall FAnimNode_ChineseDragonSolver::GetLODThreshold(FAnimNode_ChineseDragonSolver *this)

{
  return (int)this->_padding_;
}

// InitializeBoneReferences @ 14d2f2740

void __thiscall
FAnimNode_ChineseDragonSolver::InitializeBoneReferences
          (FAnimNode_ChineseDragonSolver *this,FBoneContainer *param_1)

{
  this->SavedBoneContainer = param_1;
  FBoneReference::Initialize(&this->TipBone,param_1);
  FBoneReference::Initialize(&this->RootBone,param_1);
  this->solver_counter = 0;
  return;
}

// Initialize_AnyThread @ 14d2ffed0

void __thiscall
FAnimNode_ChineseDragonSolver::Initialize_AnyThread
          (FAnimNode_ChineseDragonSolver *this,FAnimationInitializeContext *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_DragonControlBase::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->_padding_,param_1);
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 0;
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

// IsValidToEvaluate @ 14d300650

bool __thiscall
FAnimNode_ChineseDragonSolver::IsValidToEvaluate
          (FAnimNode_ChineseDragonSolver *this,USkeleton *param_1,FBoneContainer *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined1 uVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  FBoneReference local_18;
  
  iVar1 = (this->Custom_Bone_Input).Custom_Bone_Structure.ArrayNum;
  if (iVar1 == 0) {
    if (this->Use_Custom_Bone_Chain != false) {
      return false;
    }
  }
  else {
    uVar7 = 0;
    if (0 < iVar1) {
      lVar6 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar7 < (this->Custom_Bone_Input).Custom_Bone_Structure.ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar3 = (*pcVar2)();
          return (bool)uVar3;
        }
        local_18.BoneName =
             *(FName *)((this->Custom_Bone_Input).Custom_Bone_Structure.AllocatorInstance.Data +
                       lVar6);
        local_18.bUseSkeletonIndex = 0;
        local_18.BoneIndex = -1;
        local_18.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
        FBoneReference::Initialize(&local_18,param_2);
        if (local_18.bUseSkeletonIndex != 0) {
          return false;
        }
        if (local_18.CachedCompactPoseIndex == (FCompactPoseBoneIndex)0xffffffff) {
          return false;
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 8;
      } while ((int)uVar7 < (this->Custom_Bone_Input).Custom_Bone_Structure.ArrayNum);
    }
  }
  bVar4 = FBoneReference::IsValidToEvaluate(&this->TipBone,param_2);
  if ((((bVar4) && (bVar4 = FBoneReference::IsValidToEvaluate(&this->RootBone,param_2), bVar4)) &&
      (0.0 < this->Precision)) &&
     (bVar4 = FBoneContainer::BoneIsChildOf
                        (param_2,(this->TipBone).BoneIndex,(this->RootBone).BoneIndex), bVar4)) {
    return true;
  }
  return false;
}

// ResizeDebugLocations @ 14d3115b0

void __thiscall
FAnimNode_ChineseDragonSolver::ResizeDebugLocations(FAnimNode_ChineseDragonSolver *this,int param_1)

{
  return;
}

// SmoothTransformArray @ 14d312710

void __thiscall
FAnimNode_ChineseDragonSolver::SmoothTransformArray
          (FAnimNode_ChineseDragonSolver *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,float param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  ForAnyElementType _Src;
  bool bVar13;
  uint uVar14;
  TQuat<double> *pTVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar29;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  uint uVar32;
  undefined1 in_XMM4 [16];
  undefined1 auVar31 [16];
  uint uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  int local_res10;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_2f8;
  FScriptContainerElement *local_2e8;
  longlong local_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  TQuat<double> local_268;
  TQuat<double> local_248;
  TQuat<double> local_228;
  TQuat<double> local_208;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  double local_188;
  double dStack_180;
  double local_178;
  double local_170;
  double dStack_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  TQuat<double> local_108;
  TQuat<double> local_e8;
  TQuat<double> local_c8 [4];
  
  local_2f8.ArrayNum = param_1->ArrayNum;
  lVar17 = (longlong)local_2f8.ArrayNum;
  if (2 < local_2f8.ArrayNum) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    local_2f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,local_2f8.ArrayNum,0,&local_2f8.AllocatorInstance,local_2f8.ArrayNum,
               &local_2f8.ArrayMax);
    memcpy(local_2f8.AllocatorInstance.Data,pFVar2,lVar17 * 0x60);
    dVar12 = __real_3e45798ee0000000;
    iVar18 = param_1->ArrayNum;
    if (1 < iVar18 + -1) {
      dVar6 = (double)param_2;
      local_res10 = 2;
      lVar17 = 0x60;
      uVar16 = 1;
      do {
        uVar14 = 0;
        if (local_res10 + -2 < iVar18) {
          uVar14 = -uVar16 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_2e0 = lVar17 + 0x60;
        local_2e8 = (param_1->AllocatorInstance).Data;
        uVar19 = ~uVar16 >> 0x1f;
        uVar14 = 0;
        if ((int)uVar16 < param_1->ArrayNum) {
          uVar14 = uVar19;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (param_1->AllocatorInstance).Data;
        uVar14 = uVar16 + 1;
        uVar32 = 0;
        if ((int)uVar14 < param_1->ArrayNum) {
          uVar32 = ~uVar14 >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_1->AllocatorInstance).Data;
        local_1e8 = *(undefined8 *)(pFVar3 + lVar17 + 0x80);
        uStack_1e0 = *(undefined8 *)(pFVar3 + lVar17 + 0x80 + 8);
        local_1d8 = *(undefined8 *)(pFVar3 + lVar17 + 0x90);
        local_1d0 = *(undefined8 *)(pFVar2 + lVar17 + 0x20);
        uStack_1c8 = *(undefined8 *)(pFVar2 + lVar17 + 0x20 + 8);
        local_1c0 = *(undefined8 *)(pFVar2 + lVar17 + 0x30);
        local_1a0 = *(undefined8 *)(local_2e8 + lVar17 + -0x40);
        uStack_198 = *(undefined8 *)(local_2e8 + lVar17 + -0x40 + 8);
        local_190 = *(undefined8 *)(local_2e8 + lVar17 + -0x30);
        local_268.Z = *(double *)(pFVar3 + lVar17 + 0x70);
        local_268.W = *(double *)(pFVar3 + lVar17 + 0x70 + 8);
        local_268.X = *(double *)(pFVar3 + lVar17 + 0x60);
        local_268.Y = *(double *)(pFVar3 + lVar17 + 0x60 + 8);
        local_248.X = *(double *)(pFVar2 + lVar17);
        local_248.Y = *(double *)(pFVar2 + lVar17 + 8);
        local_248.Z = *(double *)(pFVar2 + lVar17 + 0x10);
        local_248.W = *(double *)(pFVar2 + lVar17 + 0x10 + 8);
        local_1b8 = local_1d0;
        uStack_1b0 = uStack_1c8;
        local_1a8 = local_1c0;
        pTVar15 = UE::Math::TQuat<double>::Slerp_NotNormalized
                            (&local_108,&local_248,&local_268,dVar6);
        local_2c0 = dVar12;
        dVar8 = pTVar15->X;
        dVar9 = pTVar15->Y;
        dVar10 = pTVar15->Z;
        dVar11 = pTVar15->W;
        dVar22 = dVar10 * dVar10 + dVar8 * dVar8;
        dVar29 = dVar11 * dVar11 + dVar9 * dVar9;
        dVar5 = dVar29 + dVar22;
        dVar22 = dVar22 + dVar29;
        auVar34._8_4_ = SUB84(dVar22,0);
        auVar34._0_8_ = dVar5;
        auVar34._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
        auVar31 = sqrtpd(in_XMM4,auVar34);
        uVar20 = -(ulonglong)(dVar12 <= dVar5);
        uVar21 = -(ulonglong)(dVar12 <= dVar22);
        uVar32 = (uint)(uVar20 >> 0x20);
        uVar33 = (uint)(uVar21 >> 0x20);
        auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar31);
        local_2a8._0_8_ = uVar20 & (ulonglong)(auVar34._0_8_ * dVar8);
        uVar7 = uVar21 & (ulonglong)(auVar34._8_8_ * dVar9);
        local_2a8._8_4_ = (undefined4)uVar7;
        local_2a8._12_4_ = (undefined4)(uVar7 >> 0x20);
        auVar23._0_4_ =
             ~(uint)uVar20 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
        auVar23._4_4_ =
             ~uVar32 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                             0x20);
        auVar23._8_4_ =
             ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        auVar23._12_4_ =
             ~uVar33 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                             0x20);
        local_2a8 = local_2a8 | auVar23;
        auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar31);
        local_298._0_4_ =
             ~(uint)uVar20 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
        local_298._4_4_ =
             ~uVar32 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                             0x20);
        local_298._8_4_ =
             ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_298._12_4_ =
             ~uVar33 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                             0x20);
        local_228.Z = *(double *)(pFVar2 + lVar17 + 0x10);
        local_228.W = *(double *)(pFVar2 + lVar17 + 0x10 + 8);
        auVar24._0_8_ = (ulonglong)(auVar34._0_8_ * dVar10) & uVar20;
        uVar21 = (ulonglong)(auVar34._8_8_ * dVar11) & uVar21;
        auVar24._8_4_ = (undefined4)uVar21;
        auVar24._12_4_ = (undefined4)(uVar21 >> 0x20);
        local_298 = local_298 | auVar24;
        local_228.X = *(double *)(pFVar2 + lVar17);
        local_228.Y = *(double *)(pFVar2 + lVar17 + 8);
        local_208.X = *(double *)(local_2e8 + lVar17 + -0x60);
        local_208.Y = *(double *)(local_2e8 + lVar17 + -0x60 + 8);
        local_208.Z = *(double *)(local_2e8 + lVar17 + -0x50);
        local_208.W = *(double *)(local_2e8 + lVar17 + -0x50 + 8);
        pTVar15 = UE::Math::TQuat<double>::Slerp_NotNormalized
                            (&local_e8,&local_208,&local_228,dVar6);
        dVar8 = pTVar15->X;
        dVar9 = pTVar15->Y;
        dVar10 = pTVar15->Z;
        dVar11 = pTVar15->W;
        local_2b8 = dVar12;
        dVar22 = dVar8 * dVar8 + dVar10 * dVar10;
        dVar29 = dVar9 * dVar9 + dVar11 * dVar11;
        dVar5 = dVar29 + dVar22;
        dVar22 = dVar22 + dVar29;
        auVar35._8_4_ = SUB84(dVar22,0);
        auVar35._0_8_ = dVar5;
        auVar35._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
        auVar34 = sqrtpd(auVar31,auVar35);
        uVar20 = -(ulonglong)(dVar12 <= dVar5);
        uVar21 = -(ulonglong)(dVar12 <= dVar22);
        uVar32 = (uint)(uVar20 >> 0x20);
        uVar33 = (uint)(uVar21 >> 0x20);
        auVar35 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar34);
        local_288._0_8_ = uVar20 & (ulonglong)(auVar35._0_8_ * dVar8);
        uVar7 = uVar21 & (ulonglong)(auVar35._8_8_ * dVar9);
        local_288._8_4_ = (undefined4)uVar7;
        local_288._12_4_ = (undefined4)(uVar7 >> 0x20);
        auVar25._0_4_ =
             ~(uint)uVar20 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
        auVar25._4_4_ =
             ~uVar32 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                             0x20);
        auVar25._8_4_ =
             ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        auVar25._12_4_ =
             ~uVar33 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                             0x20);
        local_288 = local_288 | auVar25;
        auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar34);
        local_278._0_4_ =
             ~(uint)uVar20 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
        local_278._4_4_ =
             ~uVar32 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                             0x20);
        local_278._8_4_ =
             ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_278._12_4_ =
             ~uVar33 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                             0x20);
        auVar26._0_8_ = (ulonglong)(auVar34._0_8_ * dVar10) & uVar20;
        uVar21 = (ulonglong)(auVar34._8_8_ * dVar11) & uVar21;
        auVar26._8_4_ = (undefined4)uVar21;
        auVar26._12_4_ = (undefined4)(uVar21 >> 0x20);
        local_278 = local_278 | auVar26;
        auVar30._8_8_ = 0;
        auVar30._0_8_ = dVar6;
        pTVar15 = UE::Math::TQuat<double>::Slerp_NotNormalized
                            (local_c8,(TQuat<double> *)local_288,(TQuat<double> *)local_2a8,dVar6);
        local_158 = *(double *)(pFVar3 + lVar17 + 0xa0);
        dStack_150 = *(double *)(pFVar3 + lVar17 + 0xa0 + 8);
        local_148 = *(double *)(pFVar3 + lVar17 + 0xb0);
        dVar8 = pTVar15->X;
        dVar9 = pTVar15->Y;
        dVar10 = pTVar15->Z;
        dVar11 = pTVar15->W;
        dVar22 = dVar8 * dVar8 + dVar10 * dVar10;
        dVar29 = dVar9 * dVar9 + dVar11 * dVar11;
        local_2b0 = dVar12;
        dVar5 = dVar29 + dVar22;
        dVar22 = dVar22 + dVar29;
        auVar31._8_4_ = SUB84(dVar22,0);
        auVar31._0_8_ = dVar5;
        auVar31._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
        auVar34 = sqrtpd(auVar30,auVar31);
        uVar20 = -(ulonglong)(dVar12 <= dVar5);
        uVar21 = -(ulonglong)(dVar12 <= dVar22);
        auVar35 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar34);
        uVar32 = (uint)(uVar20 >> 0x20);
        uVar33 = (uint)(uVar21 >> 0x20);
        auVar36._0_8_ = uVar20 & (ulonglong)(auVar35._0_8_ * dVar8);
        uVar7 = uVar21 & (ulonglong)(auVar35._8_8_ * dVar9);
        auVar36._8_4_ = (undefined4)uVar7;
        auVar36._12_4_ = (undefined4)(uVar7 >> 0x20);
        auVar27._0_4_ =
             ~(uint)uVar20 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
        auVar27._4_4_ =
             ~uVar32 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                             0x20);
        auVar27._8_4_ =
             ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        auVar27._12_4_ =
             ~uVar33 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                             0x20);
        auVar36 = auVar36 | auVar27;
        auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar34);
        auVar37._0_4_ =
             ~(uint)uVar20 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
        auVar37._4_4_ =
             ~uVar32 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                             0x20);
        auVar37._8_4_ =
             ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        auVar37._12_4_ =
             ~uVar33 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                             0x20);
        auVar28._0_8_ = (ulonglong)(auVar34._0_8_ * dVar10) & uVar20;
        uVar21 = (ulonglong)(auVar34._8_8_ * dVar11) & uVar21;
        auVar28._8_4_ = (undefined4)uVar21;
        auVar28._12_4_ = (undefined4)(uVar21 >> 0x20);
        local_188 = *(double *)(pFVar2 + lVar17 + 0x40);
        dStack_180 = *(double *)(pFVar2 + lVar17 + 0x40 + 8);
        auVar37 = auVar37 | auVar28;
        local_178 = *(double *)(pFVar2 + lVar17 + 0x50);
        local_170 = *(double *)(local_2e8 + lVar17 + -0x20);
        dStack_168 = *(double *)(local_2e8 + lVar17 + -0x20 + 8);
        local_160 = *(double *)(local_2e8 + lVar17 + -0x10);
        uVar32 = 0;
        if ((int)uVar16 < local_2f8.ArrayNum) {
          uVar32 = uVar19;
        }
        local_2d8 = (local_188 - local_170) * dVar6 + local_170;
        local_2c8 = (local_178 - local_160) * dVar6 + local_160;
        dStack_2d0 = (dStack_180 - dStack_168) * dVar6 + dStack_168;
        local_2c8 = (((local_148 - local_178) * dVar6 + local_178) - local_2c8) * dVar6 + local_2c8;
        in_XMM4._8_8_ = dStack_180;
        in_XMM4._0_8_ = dStack_180;
        local_2d8 = (((local_158 - local_188) * dVar6 + local_188) - local_2d8) * dVar6 + local_2d8;
        dStack_2d0 = (((dStack_150 - dStack_180) * dVar6 + dStack_180) - dStack_2d0) * dVar6 +
                     dStack_2d0;
        local_140 = local_188;
        dStack_138 = dStack_180;
        local_130 = local_178;
        local_128 = auVar36;
        local_118 = auVar37;
        if ((uVar32 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined1 (*) [16])(local_2f8.AllocatorInstance.Data + lVar17) = auVar36;
        *(undefined1 (*) [16])(local_2f8.AllocatorInstance.Data + lVar17 + 0x10) = auVar37;
        uVar32 = 0;
        if ((int)uVar16 < local_2f8.ArrayNum) {
          uVar32 = uVar19;
        }
        if ((uVar32 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_res10 = local_res10 + 1;
        *(double *)(local_2f8.AllocatorInstance.Data + lVar17 + 0x40) = local_2d8;
        *(double *)(local_2f8.AllocatorInstance.Data + lVar17 + 0x40 + 8) = dStack_2d0;
        *(double *)(local_2f8.AllocatorInstance.Data + lVar17 + 0x50) = local_2c8;
        *(double *)(local_2f8.AllocatorInstance.Data + lVar17 + 0x50 + 8) = 0.0;
        iVar18 = param_1->ArrayNum;
        lVar17 = local_2e0;
        uVar16 = uVar14;
      } while ((int)uVar14 < iVar18 + -1);
    }
    iVar18 = local_2f8.ArrayNum;
    _Src.Data = local_2f8.AllocatorInstance.Data;
    if (param_1 != &local_2f8) {
      lVar17 = (longlong)local_2f8.ArrayNum;
      piVar1 = &param_1->ArrayMax;
      param_1->ArrayNum = local_2f8.ArrayNum;
      if ((local_2f8.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,local_2f8.ArrayNum,*piVar1,&param_1->AllocatorInstance,
                   local_2f8.ArrayNum,piVar1);
        if (iVar18 != 0) {
          memcpy((param_1->AllocatorInstance).Data,_Src.Data,lVar17 * 0x60);
        }
      }
    }
    if (local_2f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.AllocatorInstance.Data);
    }
  }
  return;
}

// UpdateInternal @ 14d317940

void __thiscall
FAnimNode_ChineseDragonSolver::UpdateInternal
          (FAnimNode_ChineseDragonSolver *this,FAnimationUpdateContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_DragonControlBase::UpdateInternal");
  FStatsHierarchical::EndMeasurement();
  this->component_scale = (float)(this->owner_skel_w_transform).Scale3D.ZW.m128d_f64[0];
  if (this->solver_counter < 0x14) {
    this->solver_counter = this->solver_counter + 1;
  }
  return;
}

