// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 374

// Construct<FPoseSearchAssetSamplerInput> @ 14a894a90

void __cdecl UE::CoreUObject::Private::Construct<FPoseSearchAssetSamplerInput>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(double (*) [2])((longlong)param_1 + 0x10) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x20) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x30) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x40) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x60) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined1 *)((longlong)param_1 + 0x70) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x80) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x88) = uVar1;
  *(double *)((longlong)param_1 + 0x90) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0x1e;
  return;
}

// ConstructForTests<FPoseSearchAssetSamplerInput> @ 14a894b40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPoseSearchAssetSamplerInput>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(double (*) [2])((longlong)param_1 + 0x10) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x20) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x30) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x40) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x60) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined1 *)((longlong)param_1 + 0x70) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x80) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x88) = uVar1;
  *(double *)((longlong)param_1 + 0x90) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0x1e;
  return;
}

// Destruct<FPoseSearchAssetSamplerInput> @ 14a894bc0

void __cdecl UE::CoreUObject::Private::Destruct<FPoseSearchAssetSamplerInput>(void *param_1)

{
  return;
}

// Copy<FPoseSearchAssetSamplerInput> @ 14a894bd0

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseSearchAssetSamplerInput>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar3 = *puVar1;
      *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar1 + 1);
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      uVar2 = puVar1[7];
      puVar3[6] = puVar1[6];
      puVar3[7] = uVar2;
      uVar2 = puVar1[9];
      puVar3[8] = puVar1[8];
      puVar3[9] = uVar2;
      uVar2 = puVar1[0xb];
      puVar3[10] = puVar1[10];
      puVar3[0xb] = uVar2;
      uVar2 = puVar1[0xd];
      puVar3[0xc] = puVar1[0xc];
      puVar3[0xd] = uVar2;
      *(undefined1 *)(puVar3 + 0xe) = *(undefined1 *)(puVar1 + 0xe);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[0xf] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[0xf]);
      }
      puVar3[0xf] = puVar1[0xf];
      uVar2 = puVar1[0x11];
      puVar3[0x10] = puVar1[0x10];
      puVar3[0x11] = uVar2;
      puVar3[0x12] = puVar1[0x12];
      *(undefined4 *)(puVar3 + 0x13) = *(undefined4 *)(puVar1 + 0x13);
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 0x14;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAnimNode_MotionMatching> @ 14a895170

void __cdecl UE::CoreUObject::Private::Construct<FAnimNode_MotionMatching>(void *param_1)

{
  memset(param_1,0,800);
  FAnimNode_MotionMatching::FAnimNode_MotionMatching(param_1);
  return;
}

// ConstructForTests<FAnimNode_MotionMatching> @ 14a8951a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAnimNode_MotionMatching>(void *param_1)

{
  FName FVar1;
  undefined8 uVar2;
  
  FAnimNode_BlendStack_Standalone::FAnimNode_BlendStack_Standalone(param_1);
  *(undefined4 *)((longlong)param_1 + 200) = 0x3e4ccccd;
  *(undefined ***)param_1 = &___7FAnimNode_MotionMatching__6B_;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined2 *)((longlong)param_1 + 0x108) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x118) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x128) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 300) = 0x7f7fffff;
  *(undefined1 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined4 *)((longlong)param_1 + 0x140) = 0;
  *(undefined1 *)((longlong)param_1 + 0x144) = 0;
  *(undefined4 *)((longlong)param_1 + 0x148) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x110) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x7f7fffff;
  *(undefined1 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xf8) = 0x10100;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  FVar1 = PoseSearch::DefaultRole;
  *(double *)((longlong)param_1 + 0x150) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x158) = uVar2;
  *(double *)((longlong)param_1 + 0x160) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(FName *)((longlong)param_1 + 0x178) = FVar1;
  *(undefined4 *)((longlong)param_1 + 0x170) = 0x7f7fffff;
  *(undefined1 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined8 *)((longlong)param_1 + 0x188) = 0;
  *(undefined8 *)((longlong)param_1 + 400) = 0;
  *(undefined8 *)((longlong)param_1 + 0x198) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x1b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x1f0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x200) = 0;
  *(undefined4 *)((longlong)param_1 + 0x208) = 0;
  *(undefined8 *)((longlong)param_1 + 0x210) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x218) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0x220) = 0;
  *(undefined8 *)((longlong)param_1 + 0x228) = 0;
  *(undefined8 *)((longlong)param_1 + 0x238) = 0;
  *(undefined8 *)((longlong)param_1 + 0x240) = 0;
  *(undefined2 *)((longlong)param_1 + 0x230) = 0;
  *(undefined2 *)((longlong)param_1 + 0x248) = 1;
  *(undefined1 *)((longlong)param_1 + 0x24a) = 1;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x250) = 0x3f800000;
  *(double (*) [2])((longlong)param_1 + 0x260) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x270) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x280) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x290) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2a0) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2b0) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2c0) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2d0) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2e0) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2f0) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x300) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x310) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return;
}

// Destruct<FAnimNode_MotionMatching> @ 14a8951b0

void __cdecl UE::CoreUObject::Private::Destruct<FAnimNode_MotionMatching>(void *param_1)

{
  DestructItems<FPoseSearchInteractionAvailability,int>
            (*(FPoseSearchInteractionAvailability **)((longlong)param_1 + 0x238),
             *(int *)((longlong)param_1 + 0x240));
  if (*(void **)((longlong)param_1 + 0x238) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x238));
  }
  if (*(void **)((longlong)param_1 + 0x220) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x220));
  }
  FMotionMatchingState::~FMotionMatchingState((FMotionMatchingState *)((longlong)param_1 + 0x118));
  FAnimNode_BlendStack_Standalone::~FAnimNode_BlendStack_Standalone(param_1);
  return;
}

// Copy<FAnimNode_MotionMatching> @ 14a8952d0

bool __cdecl
UE::CoreUObject::Private::Copy<FAnimNode_MotionMatching>(void *param_1,void *param_2,int param_3)

{
  FAnimNode_MotionMatching *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FAnimNode_MotionMatching::operator=
                (this,(FAnimNode_MotionMatching *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPoseSearchIKWindowConstraint> @ 14a895320

void __cdecl UE::CoreUObject::Private::Construct<FPoseSearchIKWindowConstraint>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FPoseSearchIKWindowConstraint> @ 14a895340

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPoseSearchIKWindowConstraint>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FPoseSearchIKWindowConstraint> @ 14a895360

void __cdecl UE::CoreUObject::Private::Destruct<FPoseSearchIKWindowConstraint>(void *param_1)

{
  return;
}

// Copy<FPoseSearchIKWindowConstraint> @ 14a895370

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseSearchIKWindowConstraint>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar7 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar7 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar7 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar7 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      param_1 = (void *)((longlong)param_1 + 0x30);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMotionMatchingInteractionAnimNodeReference> @ 14a895570

void __cdecl
UE::CoreUObject::Private::Construct<FMotionMatchingInteractionAnimNodeReference>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FMotionMatchingInteractionAnimNodeReference> @ 14a895580

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMotionMatchingInteractionAnimNodeReference>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FMotionMatchingInteractionAnimNodeReference> @ 14a895590

void __cdecl
UE::CoreUObject::Private::Destruct<FMotionMatchingInteractionAnimNodeReference>(void *param_1)

{
  return;
}

// Copy<FMotionMatchingInteractionAnimNodeReference> @ 14a8956a0

bool __cdecl
UE::CoreUObject::Private::Copy<FMotionMatchingInteractionAnimNodeReference>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMotionMatchingAnimNodeReference> @ 14a8959d0

void __cdecl UE::CoreUObject::Private::Construct<FMotionMatchingAnimNodeReference>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FMotionMatchingAnimNodeReference> @ 14a8959e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMotionMatchingAnimNodeReference>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FMotionMatchingAnimNodeReference> @ 14a8959f0

void __cdecl UE::CoreUObject::Private::Destruct<FMotionMatchingAnimNodeReference>(void *param_1)

{
  return;
}

// Copy<FMotionMatchingAnimNodeReference> @ 14a895a40

bool __cdecl
UE::CoreUObject::Private::Copy<FMotionMatchingAnimNodeReference>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMotionMatchingBlueprintBlendSettings> @ 14a895ec0

void __cdecl
UE::CoreUObject::Private::Construct<FMotionMatchingBlueprintBlendSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3e4ccccd;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10) = 2;
  return;
}

// ConstructForTests<FMotionMatchingBlueprintBlendSettings> @ 14a895ee0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMotionMatchingBlueprintBlendSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3e4ccccd;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10) = 2;
  return;
}

// Destruct<FMotionMatchingBlueprintBlendSettings> @ 14a895f00

void __cdecl
UE::CoreUObject::Private::Destruct<FMotionMatchingBlueprintBlendSettings>(void *param_1)

{
  return;
}

// SerializeArchive<FMotionMatchingBlueprintBlendSettings> @ 14a895f10

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FMotionMatchingBlueprintBlendSettings>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  int iVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) && (0 < *(int *)&param_1->field_0x30)) {
    iVar1 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar1 < 0xd6) {
      *(undefined1 *)((longlong)param_2 + 0x10) = 0;
    }
  }
  return false;
}

// SerializeSlot<FMotionMatchingBlueprintBlendSettings> @ 14a895f70

bool __cdecl
UE::CoreUObject::Private::SerializeSlot<FMotionMatchingBlueprintBlendSettings>
          (FStructuredArchiveSlot param_1,void *param_2,UStruct *param_3,void *param_4)

{
  int iVar1;
  FArchiveState *this;
  FSlotBase local_res8;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  this = (FArchiveState *)StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  (**(code **)(this->_padding_ + 0x230))(this,&FFortniteMainBranchObjectVersion::GUID);
  if ((this->ArIsLoading != 0) && (0 < this->ArSerializingDefaults)) {
    iVar1 = FArchiveState::CustomVer(this,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar1 < 0xd6) {
      *(undefined1 *)((longlong)param_2 + 0x10) = 0;
    }
  }
  return false;
}

// Copy<FMotionMatchingBlueprintBlendSettings> @ 14a896020

bool __cdecl
UE::CoreUObject::Private::Copy<FMotionMatchingBlueprintBlendSettings>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      *(undefined1 *)((longlong)param_1 + 0x10) = *(undefined1 *)((longlong)param_1 + lVar2 + 0x10);
      *(undefined1 *)((longlong)param_1 + 0x11) = *(undefined1 *)((longlong)param_1 + lVar2 + 0x11);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPoseSearchDatabaseMultiAnimAsset> @ 14a8963c0

void __cdecl UE::CoreUObject::Private::Construct<FPoseSearchDatabaseMultiAnimAsset>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPoseSearchDatabaseMultiAnimAsset__6B_;
  return;
}

// ConstructForTests<FPoseSearchDatabaseMultiAnimAsset> @ 14a8963e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPoseSearchDatabaseMultiAnimAsset>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPoseSearchDatabaseMultiAnimAsset__6B_;
  return;
}

// Destruct<FPoseSearchDatabaseMultiAnimAsset> @ 14a896400

void __cdecl UE::CoreUObject::Private::Destruct<FPoseSearchDatabaseMultiAnimAsset>(void *param_1)

{
  return;
}

// Copy<FPoseSearchDatabaseMultiAnimAsset> @ 14a896410

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseSearchDatabaseMultiAnimAsset>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar2 + 8) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x10);
  }
  return true;
}

// Identical<FPoseSearchDatabaseMultiAnimAsset> @ 14a8964a0

bool __cdecl
UE::CoreUObject::Private::Identical<FPoseSearchDatabaseMultiAnimAsset>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  *param_4 = *(longlong *)((longlong)param_1 + 8) == *(longlong *)((longlong)param_2 + 8);
  return true;
}

// Construct<FPoseSearchDatabaseAnimMontage> @ 14a896730

void __cdecl UE::CoreUObject::Private::Construct<FPoseSearchDatabaseAnimMontage>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPoseSearchDatabaseAnimMontage__6B_;
  return;
}

// ConstructForTests<FPoseSearchDatabaseAnimMontage> @ 14a896750

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPoseSearchDatabaseAnimMontage>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPoseSearchDatabaseAnimMontage__6B_;
  return;
}

// Destruct<FPoseSearchDatabaseAnimMontage> @ 14a896770

void __cdecl UE::CoreUObject::Private::Destruct<FPoseSearchDatabaseAnimMontage>(void *param_1)

{
  return;
}

// Copy<FPoseSearchDatabaseAnimMontage> @ 14a8967c0

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseSearchDatabaseAnimMontage>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar2 + 8) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x10);
  }
  return true;
}

// Identical<FPoseSearchDatabaseAnimMontage> @ 14a896850

bool __cdecl
UE::CoreUObject::Private::Identical<FPoseSearchDatabaseAnimMontage>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  *param_4 = *(longlong *)((longlong)param_1 + 8) == *(longlong *)((longlong)param_2 + 8);
  return true;
}

// Construct<FPoseSearchInteractionAnimContextAvailabilities> @ 14a896b00

void __cdecl
UE::CoreUObject::Private::Construct<FPoseSearchInteractionAnimContextAvailabilities>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FPoseSearchInteractionAnimContextAvailabilities> @ 14a896b20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPoseSearchInteractionAnimContextAvailabilities>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FPoseSearchInteractionAnimContextAvailabilities> @ 14a896b80

void __cdecl
UE::CoreUObject::Private::Destruct<FPoseSearchInteractionAnimContextAvailabilities>(void *param_1)

{
  DestructItems<FPoseSearchInteractionAvailabilityEx,int>
            (*(FPoseSearchInteractionAvailabilityEx **)((longlong)param_1 + 8),
             *(int *)((longlong)param_1 + 0x10));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FPoseSearchInteractionAnimContextAvailabilities> @ 14a896bc0

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseSearchInteractionAnimContextAvailabilities>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  FPoseSearchInteractionAvailabilityEx *pFVar5;
  undefined8 *puVar6;
  
  if (param_3 != 0) {
    puVar6 = param_1;
    do {
      puVar3 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar6);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar3 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar3);
      }
      *puVar6 = *puVar3;
      pFVar1 = (ForAnyElementType *)(puVar6 + 1);
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 1)) {
        DestructItems<FPoseSearchInteractionAvailabilityEx,int>
                  ((FPoseSearchInteractionAvailabilityEx *)pFVar1->Data,*(int *)(puVar6 + 2));
        iVar4 = *(int *)(puVar3 + 2);
        piVar2 = (int *)((longlong)puVar6 + 0x14);
        pFVar5 = (FPoseSearchInteractionAvailabilityEx *)((ForAnyElementType *)(puVar3 + 1))->Data;
        *(int *)(puVar6 + 2) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          ConstructItems<FPoseSearchInteractionAvailabilityEx,FPoseSearchInteractionAvailabilityEx,int>
                    (pFVar1->Data,pFVar5,iVar4);
        }
      }
      param_3 = param_3 + -1;
      puVar6 = puVar6 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPoseSearchDatabaseAnimComposite> @ 14a896d80

void __cdecl UE::CoreUObject::Private::Construct<FPoseSearchDatabaseAnimComposite>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPoseSearchDatabaseAnimComposite__6B_;
  return;
}

// ConstructForTests<FPoseSearchDatabaseAnimComposite> @ 14a896da0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPoseSearchDatabaseAnimComposite>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPoseSearchDatabaseAnimComposite__6B_;
  return;
}

// Destruct<FPoseSearchDatabaseAnimComposite> @ 14a896dc0

void __cdecl UE::CoreUObject::Private::Destruct<FPoseSearchDatabaseAnimComposite>(void *param_1)

{
  return;
}

// Copy<FPoseSearchDatabaseAnimComposite> @ 14a896f90

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseSearchDatabaseAnimComposite>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar2 + 8) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x10);
  }
  return true;
}

// Identical<FPoseSearchDatabaseAnimComposite> @ 14a897020

bool __cdecl
UE::CoreUObject::Private::Identical<FPoseSearchDatabaseAnimComposite>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  *param_4 = *(longlong *)((longlong)param_1 + 8) == *(longlong *)((longlong)param_2 + 8);
  return true;
}

// Construct<FPoseSearchInteractionAvailabilityEx> @ 14a897320

void __cdecl
UE::CoreUObject::Private::Construct<FPoseSearchInteractionAvailabilityEx>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x29) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2b) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x43fa0000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x41200000;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 100;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FPoseSearchInteractionAvailabilityEx> @ 14a897360

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPoseSearchInteractionAvailabilityEx>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x43fa0000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x41200000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 100;
  return;
}

// Destruct<FPoseSearchInteractionAvailabilityEx> @ 14a8973a0

void __cdecl UE::CoreUObject::Private::Destruct<FPoseSearchInteractionAvailabilityEx>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FPoseSearchInteractionAvailabilityEx> @ 14a8973c0

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseSearchInteractionAvailabilityEx>
          (void *param_1,void *param_2,int param_3)

{
  FPoseSearchInteractionAvailability *pFVar1;
  FPoseSearchInteractionAvailability *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FPoseSearchInteractionAvailability *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FPoseSearchInteractionAvailability::operator=(this,pFVar1);
      this[1].Database.field0_0x0 = pFVar1[1].Database.field0_0x0;
      this[1].Tag = pFVar1[1].Tag;
      param_3 = param_3 + -1;
      this = (FPoseSearchInteractionAvailability *)&this[1].RolesFilter;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPoseSearchColumn> @ 14a897630

void __cdecl UE::CoreUObject::Private::Construct<FPoseSearchColumn>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPoseSearchColumn__6B_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0x14) = 1;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x18));
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x28));
  *(undefined ***)((longlong)param_1 + 0x38) = &___7FPoseSearchColumnNullInputValue__6B_;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x40));
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x50));
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x60));
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x70));
  return;
}

// ConstructForTests<FPoseSearchColumn> @ 14a897680

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPoseSearchColumn>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPoseSearchColumn__6B_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0x14) = 1;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x18));
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x28));
  *(undefined ***)((longlong)param_1 + 0x38) = &___7FPoseSearchColumnNullInputValue__6B_;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x40));
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x50));
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x60));
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x70));
  return;
}

// Destruct<FPoseSearchColumn> @ 14a897690

void __cdecl UE::CoreUObject::Private::Destruct<FPoseSearchColumn>(void *param_1)

{
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x70));
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x60));
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x50));
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x40));
  *(undefined ***)((longlong)param_1 + 0x38) = &___7FChooserParameterBase__6B_;
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x28));
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x18));
  *(undefined ***)param_1 = &___7FChooserColumnBase__6B_;
  return;
}

// Copy<FPoseSearchColumn> @ 14a897700

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseSearchColumn>(void *param_1,void *param_2,int param_3)

{
  FInstancedStruct *pFVar1;
  UObject *pUVar2;
  void *pvVar3;
  
  pvVar3 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = *(UObject **)((longlong)pvVar3 + (longlong)param_2 + (8 - (longlong)param_1)),
       pUVar2 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar2);
    }
    pFVar1 = (FInstancedStruct *)((longlong)pvVar3 + (longlong)param_2 + (0x18 - (longlong)param_1))
    ;
    *(undefined8 *)((longlong)pvVar3 + 8) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (8 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar3 + 0x10) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar3 + 0x14) =
         *(undefined4 *)((longlong)pvVar3 + (longlong)param_2 + (0x14 - (longlong)param_1));
    if ((FInstancedStruct *)((longlong)pvVar3 + 0x18) != pFVar1) {
      FInstancedStruct::InitializeAs
                ((FInstancedStruct *)((longlong)pvVar3 + 0x18),
                 (pFVar1->ScriptStruct).field0_0x0.DebugPtr,
                 *(uchar **)((longlong)pvVar3 + (longlong)param_2 + (0x20 - (longlong)param_1)));
    }
    pFVar1 = (FInstancedStruct *)((longlong)pvVar3 + (longlong)param_2 + (0x28 - (longlong)param_1))
    ;
    if ((FInstancedStruct *)((longlong)pvVar3 + 0x28) != pFVar1) {
      FInstancedStruct::InitializeAs
                ((FInstancedStruct *)((longlong)pvVar3 + 0x28),
                 (pFVar1->ScriptStruct).field0_0x0.DebugPtr,
                 *(uchar **)((longlong)pvVar3 + (longlong)param_2 + (0x30 - (longlong)param_1)));
    }
    pFVar1 = (FInstancedStruct *)((longlong)pvVar3 + (longlong)param_2 + (0x40 - (longlong)param_1))
    ;
    if ((FInstancedStruct *)((longlong)pvVar3 + 0x40) != pFVar1) {
      FInstancedStruct::InitializeAs
                ((FInstancedStruct *)((longlong)pvVar3 + 0x40),
                 (pFVar1->ScriptStruct).field0_0x0.DebugPtr,
                 *(uchar **)((longlong)pvVar3 + (longlong)param_2 + (0x48 - (longlong)param_1)));
    }
    pFVar1 = (FInstancedStruct *)((longlong)pvVar3 + (longlong)param_2 + (0x50 - (longlong)param_1))
    ;
    if ((FInstancedStruct *)((longlong)pvVar3 + 0x50) != pFVar1) {
      FInstancedStruct::InitializeAs
                ((FInstancedStruct *)((longlong)pvVar3 + 0x50),
                 (pFVar1->ScriptStruct).field0_0x0.DebugPtr,
                 *(uchar **)((longlong)pvVar3 + (longlong)param_2 + (0x58 - (longlong)param_1)));
    }
    pFVar1 = (FInstancedStruct *)((longlong)pvVar3 + (longlong)param_2 + (0x60 - (longlong)param_1))
    ;
    if ((FInstancedStruct *)((longlong)pvVar3 + 0x60) != pFVar1) {
      FInstancedStruct::InitializeAs
                ((FInstancedStruct *)((longlong)pvVar3 + 0x60),
                 (pFVar1->ScriptStruct).field0_0x0.DebugPtr,
                 *(uchar **)((longlong)pvVar3 + (longlong)param_2 + (0x68 - (longlong)param_1)));
    }
    pFVar1 = (FInstancedStruct *)((longlong)pvVar3 + (longlong)param_2 + (0x70 - (longlong)param_1))
    ;
    if ((FInstancedStruct *)((longlong)pvVar3 + 0x70) != pFVar1) {
      FInstancedStruct::InitializeAs
                ((FInstancedStruct *)((longlong)pvVar3 + 0x70),
                 (pFVar1->ScriptStruct).field0_0x0.DebugPtr,
                 *(uchar **)((longlong)pvVar3 + (longlong)param_2 + (0x78 - (longlong)param_1)));
    }
    pvVar3 = (void *)((longlong)pvVar3 + 0x80);
  }
  return true;
}

// Construct<FPoseSearchDatabaseBlendSpace> @ 14a897870

void __cdecl UE::CoreUObject::Private::Construct<FPoseSearchDatabaseBlendSpace>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPoseSearchDatabaseBlendSpace__6B_;
  return;
}

// ConstructForTests<FPoseSearchDatabaseBlendSpace> @ 14a897890

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPoseSearchDatabaseBlendSpace>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPoseSearchDatabaseBlendSpace__6B_;
  return;
}

// Destruct<FPoseSearchDatabaseBlendSpace> @ 14a8978b0

void __cdecl UE::CoreUObject::Private::Destruct<FPoseSearchDatabaseBlendSpace>(void *param_1)

{
  return;
}

// Copy<FPoseSearchDatabaseBlendSpace> @ 14a897900

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseSearchDatabaseBlendSpace>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar2 + 8) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x10);
  }
  return true;
}

// Identical<FPoseSearchDatabaseBlendSpace> @ 14a897990

bool __cdecl
UE::CoreUObject::Private::Identical<FPoseSearchDatabaseBlendSpace>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  *param_4 = *(longlong *)((longlong)param_1 + 8) == *(longlong *)((longlong)param_2 + 8);
  return true;
}

// Construct<FPoseSearchInteractionAvailability> @ 14a897c00

void __cdecl UE::CoreUObject::Private::Construct<FPoseSearchInteractionAvailability>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x29) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2b) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x43fa0000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x41200000;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 100;
  return;
}

// ConstructForTests<FPoseSearchInteractionAvailability> @ 14a897c40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPoseSearchInteractionAvailability>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x43fa0000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 100;
  return;
}

// Destruct<FPoseSearchInteractionAvailability> @ 14a897c70

void __cdecl UE::CoreUObject::Private::Destruct<FPoseSearchInteractionAvailability>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FPoseSearchInteractionAvailability> @ 14a897c90

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseSearchInteractionAvailability>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)(puVar2 + 2),
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)(puVar1 + 2));
      *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar1 + 4);
      *(undefined4 *)((longlong)puVar2 + 0x24) = *(undefined4 *)((longlong)puVar1 + 0x24);
      *(undefined1 *)(puVar2 + 5) = *(undefined1 *)(puVar1 + 5);
      *(undefined4 *)((longlong)puVar2 + 0x2c) = *(undefined4 *)((longlong)puVar1 + 0x2c);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPoseSearchColumnNullInputValue> @ 14a897f50

void __cdecl UE::CoreUObject::Private::Construct<FPoseSearchColumnNullInputValue>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPoseSearchColumnNullInputValue__6B_;
  return;
}

// ConstructForTests<FPoseSearchColumnNullInputValue> @ 14a898030

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPoseSearchColumnNullInputValue>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPoseSearchColumnNullInputValue__6B_;
  return;
}

// Destruct<FPoseSearchColumnNullInputValue> @ 14a8980d0

void __cdecl UE::CoreUObject::Private::Destruct<FPoseSearchColumnNullInputValue>(void *param_1)

{
  *(undefined ***)param_1 = &___7FChooserParameterBase__6B_;
  return;
}

// Copy<FPoseSearchColumnNullInputValue> @ 14a8981b0

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseSearchColumnNullInputValue>
          (void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPoseSearchDatabaseSequence> @ 14a898410

void __cdecl UE::CoreUObject::Private::Construct<FPoseSearchDatabaseSequence>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPoseSearchDatabaseSequence__6B_;
  return;
}

// ConstructForTests<FPoseSearchDatabaseSequence> @ 14a898430

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPoseSearchDatabaseSequence>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPoseSearchDatabaseSequence__6B_;
  return;
}

// Destruct<FPoseSearchDatabaseSequence> @ 14a898490

void __cdecl UE::CoreUObject::Private::Destruct<FPoseSearchDatabaseSequence>(void *param_1)

{
  return;
}

// Copy<FPoseSearchDatabaseSequence> @ 14a8984a0

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseSearchDatabaseSequence>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar2 + 8) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x10);
  }
  return true;
}

// Identical<FPoseSearchDatabaseSequence> @ 14a898570

bool __cdecl
UE::CoreUObject::Private::Identical<FPoseSearchDatabaseSequence>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  *param_4 = *(longlong *)((longlong)param_1 + 8) == *(longlong *)((longlong)param_2 + 8);
  return true;
}

// Construct<FPoseSearchCost> @ 14a8985d0

void __cdecl UE::CoreUObject::Private::Construct<FPoseSearchCost>(void *param_1)

{
  *(undefined4 *)param_1 = 0x7f7fffff;
  return;
}

// ConstructForTests<FPoseSearchCost> @ 14a8986e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPoseSearchCost>(void *param_1)

{
  *(undefined4 *)param_1 = 0x7f7fffff;
  return;
}

// Destruct<FPoseSearchCost> @ 14a8986f0

void __cdecl UE::CoreUObject::Private::Destruct<FPoseSearchCost>(void *param_1)

{
  return;
}

// Copy<FPoseSearchCost> @ 14a898700

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseSearchCost>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPoseHistoryContextProperty> @ 14a898730

void __cdecl UE::CoreUObject::Private::Construct<FPoseHistoryContextProperty>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x27) = 0;
  *(undefined ***)param_1 = &___7FPoseHistoryContextProperty__6B_;
  *(undefined ***)((longlong)param_1 + 8) = &___7FChooserPropertyBinding__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FPoseHistoryContextProperty> @ 14a898770

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPoseHistoryContextProperty>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPoseHistoryContextProperty__6B_;
  *(undefined ***)((longlong)param_1 + 8) = &___7FChooserPropertyBinding__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FPoseHistoryContextProperty> @ 14a8987b0

void __cdecl UE::CoreUObject::Private::Destruct<FPoseHistoryContextProperty>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 8) = &___7FChooserPropertyBinding__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  *(undefined ***)param_1 = &___7FChooserParameterBase__6B_;
  return;
}

// Copy<FPoseHistoryContextProperty> @ 14a898800

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseHistoryContextProperty>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x10));
    *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_2 + 0x20);
    *(undefined1 *)((longlong)param_1 + 0x24) = *(undefined1 *)((longlong)param_2 + 0x24);
    lVar1 = *(longlong *)((longlong)param_2 + 0x30);
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x28);
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x28) = uVar2;
    *(longlong *)((longlong)param_1 + 0x30) = lVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    param_2 = (void *)((longlong)param_2 + 0x38);
    param_1 = (void *)((longlong)param_1 + 0x38);
  }
  return true;
}

// Construct<FPoseSearchDatabaseAnimationAsset> @ 14a8988b0

void __cdecl UE::CoreUObject::Private::Construct<FPoseSearchDatabaseAnimationAsset>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPoseSearchDatabaseAnimationAsset__6B_;
  return;
}

// ConstructForTests<FPoseSearchDatabaseAnimationAsset> @ 14a8988d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPoseSearchDatabaseAnimationAsset>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPoseSearchDatabaseAnimationAsset__6B_;
  return;
}

// Destruct<FPoseSearchDatabaseAnimationAsset> @ 14a8988f0

void __cdecl UE::CoreUObject::Private::Destruct<FPoseSearchDatabaseAnimationAsset>(void *param_1)

{
  return;
}

// Copy<FPoseSearchDatabaseAnimationAsset> @ 14a898900

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseSearchDatabaseAnimationAsset>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar2 + 8) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x10);
  }
  return true;
}

// Identical<FPoseSearchDatabaseAnimationAsset> @ 14a898990

bool __cdecl
UE::CoreUObject::Private::Identical<FPoseSearchDatabaseAnimationAsset>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  *param_4 = *(longlong *)((longlong)param_1 + 8) == *(longlong *)((longlong)param_2 + 8);
  return true;
}

// Construct<FChooserParameterPoseHistoryBase> @ 14a898c10

void __cdecl UE::CoreUObject::Private::Construct<FChooserParameterPoseHistoryBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FChooserParameterPoseHistoryBase__6B_;
  return;
}

// ConstructForTests<FChooserParameterPoseHistoryBase> @ 14a898c30

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChooserParameterPoseHistoryBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FChooserParameterPoseHistoryBase__6B_;
  return;
}

// Destruct<FChooserParameterPoseHistoryBase> @ 14a898c50

void __cdecl UE::CoreUObject::Private::Destruct<FChooserParameterPoseHistoryBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FChooserParameterBase__6B_;
  return;
}

// Copy<FChooserParameterPoseHistoryBase> @ 14a898cb0

bool __cdecl
UE::CoreUObject::Private::Copy<FChooserParameterPoseHistoryBase>
          (void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FAnimNode_PoseSearchComponentSpaceHistoryCollector> @ 14a89bda0

void __cdecl
UE::CoreUObject::Private::Construct<FAnimNode_PoseSearchComponentSpaceHistoryCollector>
          (void *param_1)

{
  memset(param_1,0,0x2f0);
  FAnimNode_PoseSearchHistoryCollector_Base::FAnimNode_PoseSearchHistoryCollector_Base(param_1);
  *(undefined ***)param_1 = &___7FAnimNode_PoseSearchComponentSpaceHistoryCollector__6B_;
  *(undefined8 *)((longlong)param_1 + 0x2e0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2ec) = 0;
  return;
}

// ConstructForTests<FAnimNode_PoseSearchComponentSpaceHistoryCollector> @ 14a89c910

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FAnimNode_PoseSearchComponentSpaceHistoryCollector>
          (void *param_1)

{
  FAnimNode_PoseSearchHistoryCollector_Base::FAnimNode_PoseSearchHistoryCollector_Base(param_1);
  *(undefined ***)param_1 = &___7FAnimNode_PoseSearchComponentSpaceHistoryCollector__6B_;
  *(undefined8 *)((longlong)param_1 + 0x2e0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2ec) = 0;
  return;
}

// Destruct<FAnimNode_PoseSearchComponentSpaceHistoryCollector> @ 14a89c950

void __cdecl
UE::CoreUObject::Private::Destruct<FAnimNode_PoseSearchComponentSpaceHistoryCollector>
          (void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x2d8));
  PoseSearch::FPoseHistory::~FPoseHistory((FPoseHistory *)((longlong)param_1 + 0x1b0));
  FPoseSearchTrajectoryData::~FPoseSearchTrajectoryData
            ((FPoseSearchTrajectoryData *)((longlong)param_1 + 0x80));
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FAnimNode_Base__6B_;
  return;
}

// Copy<FAnimNode_PoseSearchComponentSpaceHistoryCollector> @ 14a89c9a0

bool __cdecl
UE::CoreUObject::Private::Copy<FAnimNode_PoseSearchComponentSpaceHistoryCollector>
          (void *param_1,void *param_2,int param_3)

{
  FAnimNode_PoseSearchHistoryCollector_Base *pFVar1;
  longlong lVar2;
  FAnimNode_PoseSearchHistoryCollector_Base *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FAnimNode_PoseSearchHistoryCollector_Base *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FAnimNode_PoseSearchHistoryCollector_Base::operator=(this,pFVar1);
      lVar2 = pFVar1[1]._padding_;
      this[1]._padding_ = pFVar1[1]._padding_;
      this[1]._padding_ = lVar2;
      param_3 = param_3 + -1;
      this = (FAnimNode_PoseSearchHistoryCollector_Base *)&this[1].PoseCount;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPoseSearchDatabaseAnimationAssetBase> @ 14a89ca60

void __cdecl
UE::CoreUObject::Private::Construct<FPoseSearchDatabaseAnimationAssetBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPoseSearchDatabaseAnimationAssetBase__6B_;
  return;
}

// ConstructForTests<FPoseSearchDatabaseAnimationAssetBase> @ 14a89ca80

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPoseSearchDatabaseAnimationAssetBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPoseSearchDatabaseAnimationAssetBase__6B_;
  return;
}

// Destruct<FPoseSearchDatabaseAnimationAssetBase> @ 14a89caa0

void __cdecl
UE::CoreUObject::Private::Destruct<FPoseSearchDatabaseAnimationAssetBase>(void *param_1)

{
  return;
}

// Copy<FPoseSearchDatabaseAnimationAssetBase> @ 14a89d120

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseSearchDatabaseAnimationAssetBase>
          (void *param_1,void *param_2,int param_3)

{
  return true;
}

// Identical<FPoseSearchDatabaseAnimationAssetBase> @ 14a89d6f0

bool __cdecl
UE::CoreUObject::Private::Identical<FPoseSearchDatabaseAnimationAssetBase>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  *param_4 = true;
  return true;
}

// Construct<FAnimNode_PoseSearchHistoryCollector> @ 14a89d7c0

void __cdecl
UE::CoreUObject::Private::Construct<FAnimNode_PoseSearchHistoryCollector>(void *param_1)

{
  memset(param_1,0,0x2f0);
  FAnimNode_PoseSearchHistoryCollector_Base::FAnimNode_PoseSearchHistoryCollector_Base(param_1);
  *(undefined ***)param_1 = &___7FAnimNode_PoseSearchHistoryCollector__6B_;
  *(undefined8 *)((longlong)param_1 + 0x2e0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2ec) = 0;
  return;
}

// ConstructForTests<FAnimNode_PoseSearchHistoryCollector> @ 14a89d850

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FAnimNode_PoseSearchHistoryCollector>(void *param_1)

{
  FAnimNode_PoseSearchHistoryCollector_Base::FAnimNode_PoseSearchHistoryCollector_Base(param_1);
  *(undefined ***)param_1 = &___7FAnimNode_PoseSearchHistoryCollector__6B_;
  *(undefined8 *)((longlong)param_1 + 0x2e0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2ec) = 0;
  return;
}

// Destruct<FAnimNode_PoseSearchHistoryCollector> @ 14a89d890

void __cdecl UE::CoreUObject::Private::Destruct<FAnimNode_PoseSearchHistoryCollector>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x2d8));
  PoseSearch::FPoseHistory::~FPoseHistory((FPoseHistory *)((longlong)param_1 + 0x1b0));
  FPoseSearchTrajectoryData::~FPoseSearchTrajectoryData
            ((FPoseSearchTrajectoryData *)((longlong)param_1 + 0x80));
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FAnimNode_Base__6B_;
  return;
}

// Copy<FAnimNode_PoseSearchHistoryCollector> @ 14a89d8a0

bool __cdecl
UE::CoreUObject::Private::Copy<FAnimNode_PoseSearchHistoryCollector>
          (void *param_1,void *param_2,int param_3)

{
  FAnimNode_PoseSearchHistoryCollector_Base *pFVar1;
  longlong lVar2;
  FAnimNode_PoseSearchHistoryCollector_Base *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FAnimNode_PoseSearchHistoryCollector_Base *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FAnimNode_PoseSearchHistoryCollector_Base::operator=(this,pFVar1);
      lVar2 = pFVar1[1]._padding_;
      this[1]._padding_ = pFVar1[1]._padding_;
      this[1]._padding_ = lVar2;
      param_3 = param_3 + -1;
      this = (FAnimNode_PoseSearchHistoryCollector_Base *)&this[1].PoseCount;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPoseSearchAssetSamplerPose> @ 14a89d920

void __cdecl UE::CoreUObject::Private::Construct<FPoseSearchAssetSamplerPose>(void *param_1)

{
  memset(param_1,0,0xe0);
  FPoseSearchAssetSamplerPose::FPoseSearchAssetSamplerPose(param_1);
  return;
}

// ConstructForTests<FPoseSearchAssetSamplerPose> @ 14a89d950

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPoseSearchAssetSamplerPose>(void *param_1)

{
  *(double (*) [2])param_1 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x10) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x20) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x30) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x40) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined1 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  return;
}

// Destruct<FPoseSearchAssetSamplerPose> @ 14a89d960

void __cdecl UE::CoreUObject::Private::Destruct<FPoseSearchAssetSamplerPose>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd0));
  }
  if (*(void **)((longlong)param_1 + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xc0));
  }
  if (*(void **)((longlong)param_1 + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb0));
  }
  if (*(void **)((longlong)param_1 + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x98));
  }
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
    return;
  }
  return;
}

// Copy<FPoseSearchAssetSamplerPose> @ 14a89d970

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseSearchAssetSamplerPose>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  void *_Src;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
           ((longlong)param_1 + 0x98);
    puVar7 = param_2;
    puVar8 = param_1;
    do {
      uVar6 = puVar7[1];
      *puVar8 = *puVar7;
      puVar8[1] = uVar6;
      uVar6 = puVar7[3];
      puVar8[2] = puVar7[2];
      puVar8[3] = uVar6;
      uVar6 = puVar7[5];
      puVar8[4] = puVar7[4];
      puVar8[5] = uVar6;
      uVar6 = puVar7[7];
      puVar8[6] = puVar7[6];
      puVar8[7] = uVar6;
      uVar6 = puVar7[9];
      puVar8[8] = puVar7[8];
      puVar8[9] = uVar6;
      uVar6 = puVar7[0xb];
      puVar8[10] = puVar7[10];
      puVar8[0xb] = uVar6;
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(puVar8 + 0xc),
                 (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)puVar8 + (longlong)param_2 + (0x60 - (longlong)param_1)));
      puVar8[0xe] = *(undefined8 *)
                     ((longlong)puVar8 + (longlong)param_2 + (0x70 - (longlong)param_1));
      TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_> *)(puVar8 + 0xf),
                 (TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_> *)
                 ((longlong)puVar8 + (longlong)param_2 + (0x78 - (longlong)param_1)));
      *(undefined1 *)(puVar8 + 0x11) =
           *(undefined1 *)((longlong)puVar8 + (longlong)param_2 + (0x88 - (longlong)param_1));
      puVar8[0x12] = *(undefined8 *)
                      ((longlong)puVar8 + (longlong)param_2 + (0x90 - (longlong)param_1));
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
                (this,(TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                      ((longlong)puVar8 + (longlong)param_2 + (0x98 - (longlong)param_1)));
      this[1].AllocatorInstance.Data =
           *(FScriptContainerElement **)
            ((longlong)puVar8 + (longlong)param_2 + (0xa8 - (longlong)param_1));
      Anim::
      TTypedIndexRange<FCompactPoseBoneIndex,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::
      operator=((TTypedIndexRange<FCompactPoseBoneIndex,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                 *)&this[1].ArrayNum,
                (TTypedIndexRange<FCompactPoseBoneIndex,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                 *)((longlong)puVar8 + (longlong)param_2 + (0xb0 - (longlong)param_1)));
      Anim::
      TTypedIndexRange<FCompactPoseBoneIndex,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::
      operator=((TTypedIndexRange<FCompactPoseBoneIndex,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                 *)&this[2].ArrayNum,
                (TTypedIndexRange<FCompactPoseBoneIndex,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                 *)((longlong)puVar8 + (longlong)param_2 + (0xc0 - (longlong)param_1)));
      puVar3 = (undefined8 *)((longlong)puVar8 + (longlong)param_2 + (0xd0 - (longlong)param_1));
      piVar1 = &this[3].ArrayNum;
      if (piVar1 != (int *)puVar3) {
        iVar4 = *(int *)((longlong)puVar8 + (longlong)param_2 + (0xd8 - (longlong)param_1));
        piVar2 = (int *)((longlong)&this[4].AllocatorInstance.Data + 4);
        _Src = (void *)*puVar3;
        iVar5 = *piVar2;
        *(int *)&this[4].AllocatorInstance.Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar4,iVar5,(ForAnyElementType *)piVar1,iVar4,piVar2);
          if (iVar4 != 0) {
            memcpy(*(void **)piVar1,_Src,(longlong)iVar4 << 2);
          }
        }
      }
      this = this + 0xe;
      param_3 = param_3 + -1;
      puVar7 = puVar7 + 0x1c;
      puVar8 = puVar8 + 0x1c;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAnimNode_PoseSearchHistoryCollector_Base> @ 14a89db40

void __cdecl
UE::CoreUObject::Private::Construct<FAnimNode_PoseSearchHistoryCollector_Base>(void *param_1)

{
  memset(param_1,0,0x2e0);
  FAnimNode_PoseSearchHistoryCollector_Base::FAnimNode_PoseSearchHistoryCollector_Base(param_1);
  return;
}

// ConstructForTests<FAnimNode_PoseSearchHistoryCollector_Base> @ 14a89db70

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FAnimNode_PoseSearchHistoryCollector_Base>
          (void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FAnimNode_PoseSearchHistoryCollector_Base__6B_;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3d23d70a;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined2 *)((longlong)param_1 + 0x38) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 10;
  *(undefined4 *)((longlong)param_1 + 0x78) = 8;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3ecccccd;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0x41200000;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0x428c0000;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x90));
  *(undefined1 *)((longlong)param_1 + 0x118) = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x120));
  *(undefined1 *)((longlong)param_1 + 0x1a8) = 0;
  PoseSearch::FPoseHistory::FPoseHistory((FPoseHistory *)((longlong)param_1 + 0x1b0));
  *(undefined1 *)((longlong)param_1 + 0x2c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d8) = 0;
  return;
}

// Destruct<FAnimNode_PoseSearchHistoryCollector_Base> @ 14a89db80

void __cdecl
UE::CoreUObject::Private::Destruct<FAnimNode_PoseSearchHistoryCollector_Base>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x2d8));
  PoseSearch::FPoseHistory::~FPoseHistory((FPoseHistory *)((longlong)param_1 + 0x1b0));
  FPoseSearchTrajectoryData::~FPoseSearchTrajectoryData
            ((FPoseSearchTrajectoryData *)((longlong)param_1 + 0x80));
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FAnimNode_Base__6B_;
  return;
}

// Copy<FAnimNode_PoseSearchHistoryCollector_Base> @ 14a89db90

bool __cdecl
UE::CoreUObject::Private::Copy<FAnimNode_PoseSearchHistoryCollector_Base>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  undefined8 uVar6;
  TReferenceControllerBase<1> *pTVar7;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x18);
    *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x18)) {
      iVar3 = *(int *)((longlong)param_2 + 0x20);
      piVar2 = (int *)((longlong)param_1 + 0x24);
      pFVar4 = ((ForAnyElementType *)((longlong)param_2 + 0x18))->Data;
      *(int *)((longlong)param_1 + 0x20) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar1->Data,pFVar4,(longlong)iVar3 << 4);
        }
      }
    }
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x28),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x28));
    *(undefined1 *)((longlong)param_1 + 0x38) = *(undefined1 *)((longlong)param_2 + 0x38);
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x60);
    *(undefined1 *)((longlong)param_1 + 0x39) = *(undefined1 *)((longlong)param_2 + 0x39);
    *(undefined1 *)((longlong)param_1 + 0x3a) = *(undefined1 *)((longlong)param_2 + 0x3a);
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
    *(undefined4 *)((longlong)param_1 + 0x40) = *(undefined4 *)((longlong)param_2 + 0x40);
    *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
    uVar6 = *(undefined8 *)((longlong)param_2 + 0x50);
    *(undefined8 *)((longlong)param_1 + 0x48) = *(undefined8 *)((longlong)param_2 + 0x48);
    *(undefined8 *)((longlong)param_1 + 0x50) = uVar6;
    *(undefined1 *)((longlong)param_1 + 0x58) = *(undefined1 *)((longlong)param_2 + 0x58);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x60)) {
      iVar3 = *(int *)((longlong)param_2 + 0x68);
      piVar2 = (int *)((longlong)param_1 + 0x6c);
      pFVar4 = ((ForAnyElementType *)((longlong)param_2 + 0x60))->Data;
      *(int *)((longlong)param_1 + 0x68) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,0x10,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar1->Data,pFVar4,(longlong)iVar3 << 6);
        }
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x70) = *(undefined4 *)((longlong)param_2 + 0x70);
    *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
    *(undefined4 *)((longlong)param_1 + 0x78) = *(undefined4 *)((longlong)param_2 + 0x78);
    *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
    *(undefined4 *)((longlong)param_1 + 0x80) = *(undefined4 *)((longlong)param_2 + 0x80);
    *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
    *(undefined4 *)((longlong)param_1 + 0x88) = *(undefined4 *)((longlong)param_2 + 0x88);
    *(undefined1 *)((longlong)param_1 + 0x8c) = *(undefined1 *)((longlong)param_2 + 0x8c);
    FRuntimeFloatCurve::operator=
              ((FRuntimeFloatCurve *)((longlong)param_1 + 0x90),
               (FRuntimeFloatCurve *)((longlong)param_2 + 0x90));
    *(undefined1 *)((longlong)param_1 + 0x118) = *(undefined1 *)((longlong)param_2 + 0x118);
    FRuntimeFloatCurve::operator=
              ((FRuntimeFloatCurve *)((longlong)param_1 + 0x120),
               (FRuntimeFloatCurve *)((longlong)param_2 + 0x120));
    *(undefined1 *)((longlong)param_1 + 0x1a8) = *(undefined1 *)((longlong)param_2 + 0x1a8);
    PoseSearch::FPoseHistory::operator=
              ((FPoseHistory *)((longlong)param_1 + 0x1b0),
               (FPoseHistory *)((longlong)param_2 + 0x1b0));
    *(undefined1 *)((longlong)param_1 + 0x2c8) = *(undefined1 *)((longlong)param_2 + 0x2c8);
    lVar5 = *(longlong *)((longlong)param_2 + 0x2d8);
    uVar6 = *(undefined8 *)((longlong)param_2 + 0x2d0);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    pTVar7 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x2d8);
    *(undefined8 *)((longlong)param_1 + 0x2d0) = uVar6;
    *(longlong *)((longlong)param_1 + 0x2d8) = lVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    param_1 = (void *)((longlong)param_1 + 0x2e0);
    param_2 = (void *)((longlong)param_2 + 0x2e0);
  }
  return true;
}

// Construct<FAnimNode_MotionMatchingInteraction> @ 14a89f590

void __cdecl UE::CoreUObject::Private::Construct<FAnimNode_MotionMatchingInteraction>(void *param_1)

{
  memset(param_1,0,0x250);
  FAnimNode_MotionMatchingInteraction::FAnimNode_MotionMatchingInteraction(param_1);
  return;
}

// ConstructForTests<FAnimNode_MotionMatchingInteraction> @ 14a89f5c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FAnimNode_MotionMatchingInteraction>(void *param_1)

{
  FName FVar1;
  undefined8 uVar2;
  
  FAnimNode_BlendStack_Standalone::FAnimNode_BlendStack_Standalone(param_1);
  *(undefined1 *)((longlong)param_1 + 0xd0) = 1;
  *(undefined ***)param_1 = &___7FAnimNode_MotionMatchingInteraction__6B_;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0;
  *(undefined1 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x108) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x10c) = 0;
  FVar1 = PoseSearch::DefaultRole;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0xdc) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0x3e4ccccd;
  *(undefined2 *)((longlong)param_1 + 0xf0) = 2;
  *(undefined1 *)((longlong)param_1 + 0xf2) = 0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x110) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x118) = uVar2;
  *(double *)((longlong)param_1 + 0x120) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(FName *)((longlong)param_1 + 0x138) = FVar1;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0x7f7fffff;
  *(undefined1 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(double (*) [2])((longlong)param_1 + 0x170) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x180) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 400) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x1a0) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x1b0) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x1c0) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x1d0) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x1e0) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x1f0) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x200) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x210) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x220) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)((longlong)param_1 + 0x230) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x238) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x240) = 0;
  return;
}

// Destruct<FAnimNode_MotionMatchingInteraction> @ 14a89f5d0

void __cdecl UE::CoreUObject::Private::Destruct<FAnimNode_MotionMatchingInteraction>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x160) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x160));
  }
  if (*(void **)((longlong)param_1 + 0x150) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x150));
  }
  if (*(void **)((longlong)param_1 + 0x140) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x140));
  }
  DestructItems<FPoseSearchInteractionAvailability,int>
            (*(FPoseSearchInteractionAvailability **)((longlong)param_1 + 0xc0),
             *(int *)((longlong)param_1 + 200));
  if (*(void **)((longlong)param_1 + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xc0));
  }
  FAnimNode_BlendStack_Standalone::~FAnimNode_BlendStack_Standalone(param_1);
  return;
}

// Copy<FAnimNode_MotionMatchingInteraction> @ 14a89f6a0

bool __cdecl
UE::CoreUObject::Private::Copy<FAnimNode_MotionMatchingInteraction>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  TObjectPtr<UObject>_u_0 TVar3;
  TReferenceControllerBase<1> *pTVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined7 uVar10;
  bool bVar11;
  undefined3 uVar12;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FAnimNode_BlendStack_Standalone::operator=(param_1,param_2);
    TArray<FPoseSearchInteractionAvailability,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FPoseSearchInteractionAvailability,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0xc0),
               (TArray<FPoseSearchInteractionAvailability,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0xc0));
    *(char *)&((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->_padding_ =
         (char)((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->_padding_;
    *(undefined4 *)
     ((longlong)&((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->_padding_ + 4) =
         *(undefined4 *)
          ((longlong)&((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->_padding_ + 4
          );
    *(int *)&((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->_padding_ =
         (int)((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->_padding_;
    *(undefined1 *)
     ((longlong)&((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->_padding_ + 4) =
         *(undefined1 *)
          ((longlong)&((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->_padding_ + 4
          );
    *(undefined1 *)
     ((longlong)&((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->_padding_ + 5) =
         *(undefined1 *)
          ((longlong)&((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->_padding_ + 5
          );
    *(int *)&((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->_padding_ =
         (int)((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->_padding_;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->_padding_ !=
        (UObject *)0x0)) {
      GC::MarkAsReachable((UObject *)
                          ((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->_padding_
                         );
    }
    ((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->_padding_ =
         ((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->_padding_;
    *(char *)&((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->_padding_ =
         (char)((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->_padding_;
    *(undefined1 *)
     ((longlong)&((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->_padding_ + 1) =
         *(undefined1 *)
          ((longlong)&((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->_padding_ + 1
          );
    *(undefined1 *)
     ((longlong)&((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->_padding_ + 2) =
         *(undefined1 *)
          ((longlong)&((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->_padding_ + 2
          );
    FPoseSearchBlueprintResult::operator=
              ((FPoseSearchBlueprintResult *)
               &((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->
                SampleGraphExecutionHelpers,
               (FPoseSearchBlueprintResult *)
               &((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->
                SampleGraphExecutionHelpers);
    fVar5 = ((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->
            MaxBlendInTimeToOverrideAnimation;
    fVar6 = ((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->
            PlayerDepthBlendInTimeMultiplier;
    uVar7 = *(undefined4 *)
             &((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->field_0xbc;
    ((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->NotifyRecencyTimeOut =
         ((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->NotifyRecencyTimeOut;
    ((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->
    MaxBlendInTimeToOverrideAnimation = fVar5;
    ((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->
    PlayerDepthBlendInTimeMultiplier = fVar6;
    *(undefined4 *)&((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->field_0xbc =
         uVar7;
    lVar1 = ((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->_padding_;
    ((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->_padding_ =
         ((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->_padding_;
    ((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->_padding_ = lVar1;
    lVar1 = ((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->_padding_;
    ((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->_padding_ =
         ((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->_padding_;
    ((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->_padding_ = lVar1;
    lVar1 = ((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->_padding_;
    ((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->_padding_ =
         ((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->_padding_;
    ((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->_padding_ = lVar1;
    pFVar2 = (((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->
             SampleGraphExecutionHelpers).AllocatorInstance.Data;
    ((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->_padding_ =
         ((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->_padding_;
    (((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->SampleGraphExecutionHelpers).
    AllocatorInstance.Data = pFVar2;
    iVar8 = (((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->
            SampleGraphExecutionHelpers).ArrayMax;
    pFVar2 = (((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->
             PerSampleGraphPoseLinks).AllocatorInstance.Data;
    (((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->SampleGraphExecutionHelpers).
    ArrayNum = (((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->
               SampleGraphExecutionHelpers).ArrayNum;
    (((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->SampleGraphExecutionHelpers).
    ArrayMax = iVar8;
    (((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->PerSampleGraphPoseLinks).
    AllocatorInstance.Data = pFVar2;
    iVar8 = (((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->
            PerSampleGraphPoseLinks).ArrayMax;
    iVar9 = ((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->CurrentSamplePoseLink;
    uVar7 = *(undefined4 *)
             &((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->field_0x5c;
    (((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->PerSampleGraphPoseLinks).
    ArrayNum = (((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->
               PerSampleGraphPoseLinks).ArrayNum;
    (((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->PerSampleGraphPoseLinks).
    ArrayMax = iVar8;
    ((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->CurrentSamplePoseLink = iVar9;
    *(undefined4 *)&((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->field_0x5c =
         uVar7;
    iVar8 = (((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->AnimPlayers).ArrayNum
    ;
    iVar9 = (((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->AnimPlayers).ArrayMax
    ;
    (((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->AnimPlayers).
    AllocatorInstance.Data =
         (((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->AnimPlayers).
         AllocatorInstance.Data;
    (((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->AnimPlayers).ArrayNum = iVar8
    ;
    (((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->AnimPlayers).ArrayMax = iVar9
    ;
    uVar10 = *(undefined7 *)
              &((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->field_0x71;
    TVar3 = (((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->StitchDatabase).
            field0_0x0;
    ((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->bShouldFilterNotifies =
         ((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->bShouldFilterNotifies;
    *(undefined7 *)&((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->field_0x71 =
         uVar10;
    (((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->StitchDatabase).field0_0x0 =
         TVar3;
    fVar5 = ((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->StitchBlendMaxCost;
    iVar8 = ((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->MaxActiveBlends;
    bVar11 = ((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->bStoreBlendedPose;
    uVar12 = *(undefined3 *)
              &((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->field_0x8d;
    ((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->StitchBlendTime =
         ((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->StitchBlendTime;
    ((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->StitchBlendMaxCost = fVar5;
    ((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->MaxActiveBlends = iVar8;
    ((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->bStoreBlendedPose = bVar11;
    *(undefined3 *)&((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->field_0x8d =
         uVar12;
    pTVar4 = (((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->
             NotifiesFiredLastTick).SharedReferenceCount.ReferenceController;
    (((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->NotifiesFiredLastTick).Object
         = (((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->NotifiesFiredLastTick)
           .Object;
    (((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->NotifiesFiredLastTick).
    SharedReferenceCount.ReferenceController = pTVar4;
    pTVar4 = (((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->NotifyRecencyMap).
             SharedReferenceCount.ReferenceController;
    (((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->NotifyRecencyMap).Object =
         (((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->NotifyRecencyMap).Object
    ;
    (((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->NotifyRecencyMap).
    SharedReferenceCount.ReferenceController = pTVar4;
    fVar5 = ((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->
            MaxBlendInTimeToOverrideAnimation;
    fVar6 = ((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->
            PlayerDepthBlendInTimeMultiplier;
    uVar7 = *(undefined4 *)
             &((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->field_0xbc;
    ((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->NotifyRecencyTimeOut =
         ((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x180))->NotifyRecencyTimeOut;
    ((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->
    MaxBlendInTimeToOverrideAnimation = fVar5;
    ((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->
    PlayerDepthBlendInTimeMultiplier = fVar6;
    *(undefined4 *)&((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x180))->field_0xbc =
         uVar7;
    *(int *)&((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x240))->_padding_ =
         (int)((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x240))->_padding_;
    param_1 = &((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0x240))->_padding_;
    param_2 = &((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0x240))->_padding_;
  }
  return true;
}

// EvaluatePoseKernel<1,1> @ 14a8a16f0

void __cdecl
UE::PoseSearch::EvaluatePoseKernel<1,1>
          (FSearchResults *param_1,FSearchIndex *param_2,TArrayView<float_const_,int> *param_3,
          TArrayView<float,int> *param_4,int param_5,int param_6,FSearchFilters *param_7,
          float param_8,float param_9,FSearchContext *param_10,UPoseSearchDatabase *param_11,
          TArrayView<float_const_,int> *param_12,bool param_13)

{
  float *pfVar1;
  float *pfVar2;
  longlong *plVar3;
  code *pcVar4;
  TArrayView<float_const_,int> *pTVar5;
  bool bVar6;
  uint uVar7;
  TArrayView<float_const_,int> *pTVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  float *pfVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int local_f8;
  FWeakObjectPtr local_f4;
  FPoseSearchCost local_ec;
  int local_e8;
  undefined4 local_e4;
  undefined1 local_e0;
  uint local_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  float *local_c8;
  undefined8 uStack_c0;
  TArrayView<float,int> local_b8;
  TArrayView<float_const_,int> local_a8;
  TArrayView<float_const_,int> local_98;
  TArrayView<float_const_,int> local_88;
  TArrayView<float_const_,int> local_78 [5];
  
  local_b8.DataPtr = param_4->DataPtr;
  local_b8.ArrayNum = param_4->ArrayNum;
  local_b8._12_4_ = *(undefined4 *)&param_4->field_0xc;
  pTVar8 = FSearchIndex::GetReconstructedPoseValues(param_2,local_78,param_5,&local_b8);
  pTVar5 = param_12;
  local_98.DataPtr = param_3->DataPtr;
  local_98.ArrayNum = param_3->ArrayNum;
  local_98._12_4_ = *(undefined4 *)&param_3->field_0xc;
  pfVar1 = pTVar8->DataPtr;
  uVar10._0_4_ = pTVar8->ArrayNum;
  uVar10._4_4_ = *(undefined4 *)&pTVar8->field_0xc;
  local_a8.DataPtr = param_12->DataPtr;
  local_a8.ArrayNum = param_12->ArrayNum;
  local_a8._12_4_ = *(undefined4 *)&param_12->field_0xc;
  local_88.DataPtr = pfVar1;
  local_88._8_8_ = uVar10;
  bVar6 = FSearchFilters::AreFiltersValid
                    (param_7,param_2,&local_88,&local_98,&local_a8,param_5,param_8,param_9,param_10,
                     param_11);
  if (bVar6) {
    local_f4.ObjectIndex = 0;
    local_f4.ObjectSerialNumber = 0;
    local_e0 = 0;
    local_e4 = 0x7f7fffff;
    uVar7 = 0;
    if (param_5 < (int)param_2->_padding_) {
      uVar7 = (uint)~param_5 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    fVar15 = FGenericPlatformMath::LoadHalf
                       ((ushort *)((longlong)param_5 * 0xc + 10 + param_2->_padding_));
    local_d8 = *(uint *)&pTVar5->DataPtr;
    uStack_d4 = *(undefined4 *)((longlong)&pTVar5->DataPtr + 4);
    uStack_d0 = pTVar5->ArrayNum;
    uStack_cc = *(undefined4 *)&pTVar5->field_0xc;
    local_c8 = param_3->DataPtr;
    uStack_c0 = *(undefined8 *)&param_3->ArrayNum;
    if (((int)uVar10 != (uint)*(undefined8 *)&param_3->ArrayNum) || ((int)uVar10 != uStack_d0)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("A.Num() == B.Num() && A.Num() == WeightsSqrt.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                         ,0x10,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar7 = (int)uVar10 & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    if (uVar7 != 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("A.Num() % 4 == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                         ,0x11,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (((ulonglong)pfVar1 & 0xf) != 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsAligned(A.GetData(), alignof(VectorRegister4Float))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                         ,0x12,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (((ulonglong)local_c8 & 0xf) != 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsAligned(B.GetData(), alignof(VectorRegister4Float))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                         ,0x13,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pfVar13 = (float *)CONCAT44(uStack_d4,local_d8);
    if ((local_d8 & 0xf) != 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsAligned(WeightsSqrt.GetData(), alignof(VectorRegister4Float))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                         ,0x14,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if ((pfVar1 == local_c8) || (pfVar1 == pfVar13)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("A.GetData() != B.GetData() && A.GetData() != WeightsSqrt.GetData()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                         ,0x16,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    fVar20 = 0.0;
    fVar21 = 0.0;
    fVar22 = 0.0;
    fVar23 = 0.0;
    uVar7 = (int)((int)uVar10 + ((int)uVar10 >> 0x1f & 3U)) >> 2;
    uVar9 = (ulonglong)uVar7;
    if (0 < (int)uVar7) {
      lVar14 = (longlong)pfVar1 - (longlong)pfVar13;
      lVar11 = (longlong)local_c8 - (longlong)pfVar13;
      do {
        pfVar1 = (float *)(lVar14 + (longlong)pfVar13);
        pfVar2 = (float *)(lVar11 + (longlong)pfVar13);
        fVar16 = (*pfVar1 - *pfVar2) * *pfVar13;
        fVar17 = (pfVar1[1] - pfVar2[1]) * pfVar13[1];
        fVar18 = (pfVar1[2] - pfVar2[2]) * pfVar13[2];
        fVar19 = (pfVar1[3] - pfVar2[3]) * pfVar13[3];
        pfVar13 = pfVar13 + 4;
        fVar20 = fVar20 + fVar16 * fVar16;
        fVar21 = fVar21 + fVar17 * fVar17;
        fVar22 = fVar22 + fVar18 * fVar18;
        fVar23 = fVar23 + fVar19 * fVar19;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    local_f8 = param_5;
    local_e8 = param_6;
    param_12 = (TArrayView<float_const_,int> *)param_11;
    local_ec.TotalCost = fVar23 + fVar22 + fVar21 + fVar20 + fVar15 + param_8 + param_9;
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_11 != (UPoseSearchDatabase *)0x0)
       ) {
      GC::MarkAsReachable((UObject *)param_11);
    }
    FWeakObjectPtr::operator=(&local_f4,(FObjectPtr)&param_12);
    Core::Private::Function::CheckCallable(*(void **)&param_1->UpdateWith);
    plVar3 = *(longlong **)&(param_1->UpdateWith).field_0x28;
    pcVar4 = *(code **)&param_1->UpdateWith;
    plVar12 = (longlong *)&(param_1->UpdateWith).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar12 = plVar3;
    }
    uVar10 = (**(code **)(*plVar12 + 8))();
    (*pcVar4)(uVar10,&local_f8);
    if (param_13 != false) {
      FSearchContext::Track(param_10,param_11,param_5,Valid_Pose,&local_ec);
    }
  }
  return;
}

// EvaluatePoseKernel<1,0> @ 14a8a1ad0

void __cdecl
UE::PoseSearch::EvaluatePoseKernel<1,0>
          (FSearchResults *param_1,FSearchIndex *param_2,TArrayView<float_const_,int> *param_3,
          TArrayView<float,int> *param_4,int param_5,int param_6,FSearchFilters *param_7,
          float param_8,float param_9,FSearchContext *param_10,UPoseSearchDatabase *param_11,
          TArrayView<float_const_,int> *param_12,bool param_13)

{
  longlong *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  TArrayView<float_const_,int> *pTVar8;
  bool bVar9;
  TArrayView<float_const_,int> *pTVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong *plVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  int local_1e8;
  FWeakObjectPtr local_1e4;
  FPoseSearchCost local_1dc;
  int local_1d8;
  undefined4 local_1d4;
  undefined1 local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  int iStack_1c0;
  undefined4 uStack_1bc;
  float *local_1b8;
  undefined8 uStack_1b0;
  TArrayView<float,int> local_1a8;
  TArrayView<float_const_,int> local_198;
  TArrayView<float_const_,int> local_188;
  TArrayView<float_const_,int> local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  longlong lStack_160;
  undefined8 local_158;
  undefined8 local_148;
  longlong lStack_140;
  undefined8 local_138;
  float *local_128;
  longlong lStack_120;
  undefined8 local_118;
  TArrayView<float_const_,int> local_108;
  DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
  local_f8 [24];
  float *local_e0;
  longlong lStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  longlong lStack_b8;
  undefined8 local_b0;
  float *local_98;
  longlong lStack_90;
  undefined8 local_88;
  
  local_1a8.DataPtr = param_4->DataPtr;
  local_1a8.ArrayNum = param_4->ArrayNum;
  local_1a8._12_4_ = *(undefined4 *)&param_4->field_0xc;
  pTVar10 = FSearchIndex::GetReconstructedPoseValues(param_2,&local_108,param_5,&local_1a8);
  pTVar8 = param_12;
  local_188.DataPtr = param_3->DataPtr;
  local_188.ArrayNum = param_3->ArrayNum;
  local_188._12_4_ = *(undefined4 *)&param_3->field_0xc;
  uVar3 = *(undefined4 *)&pTVar10->DataPtr;
  uVar4 = *(undefined4 *)((longlong)&pTVar10->DataPtr + 4);
  pfVar7 = pTVar10->DataPtr;
  iVar5 = pTVar10->ArrayNum;
  local_178._12_4_ = *(undefined4 *)&pTVar10->field_0xc;
  local_198.DataPtr = param_12->DataPtr;
  local_198.ArrayNum = param_12->ArrayNum;
  local_198._12_4_ = *(undefined4 *)&param_12->field_0xc;
  local_178.DataPtr._0_4_ = uVar3;
  local_178.DataPtr._4_4_ = uVar4;
  local_178.ArrayNum = iVar5;
  bVar9 = FSearchFilters::AreFiltersValid
                    (param_7,param_2,&local_178,&local_188,&local_198,param_5,param_8,param_9,
                     param_10,param_11);
  if (bVar9) {
    local_1e4.ObjectIndex = 0;
    local_1e4.ObjectSerialNumber = 0;
    local_1d0 = 0;
    local_1d4 = 0x7f7fffff;
    uVar12 = 0;
    if (param_5 < (int)param_2->_padding_) {
      uVar12 = (uint)~param_5 >> 0x1f;
    }
    if (uVar12 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    fVar15 = FGenericPlatformMath::LoadHalf
                       ((ushort *)((longlong)param_5 * 0xc + 10 + param_2->_padding_));
    local_1b8 = pTVar8->DataPtr;
    uStack_1b0 = *(undefined8 *)&pTVar8->ArrayNum;
    local_1c8 = *(undefined4 *)&param_3->DataPtr;
    uStack_1c4 = *(undefined4 *)((longlong)&param_3->DataPtr + 4);
    iVar6 = param_3->ArrayNum;
    uStack_1bc = *(undefined4 *)&param_3->field_0xc;
    iVar14 = (int)*(undefined8 *)&pTVar8->ArrayNum;
    iStack_1c0 = iVar6;
    if ((iVar5 != iVar6) || (iVar5 != iVar14)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("A.Num() == B.Num() && A.Num() == WeightsSqrt.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                         ,0x3d,L"");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_d0 = local_158;
    lStack_160 = (longlong)iVar5;
    local_148 = CONCAT44(uStack_1c4,local_1c8);
    lStack_140 = (longlong)iVar6;
    local_128 = local_1b8;
    lStack_120 = (longlong)iVar14;
    local_b0 = local_138;
    local_98 = local_1b8;
    local_88 = local_118;
    local_168 = uVar3;
    uStack_164 = uVar4;
    local_e0 = pfVar7;
    lStack_d8 = lStack_160;
    local_c0 = local_148;
    lStack_b8 = lStack_140;
    lStack_90 = lStack_120;
    fVar16 = Eigen::
             DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
             ::sum(local_f8);
    local_1e8 = param_5;
    local_1d8 = param_6;
    param_12 = (TArrayView<float_const_,int> *)param_11;
    local_1dc.TotalCost = fVar16 + fVar15 + param_8 + param_9;
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_11 != (UPoseSearchDatabase *)0x0)
       ) {
      GC::MarkAsReachable((UObject *)param_11);
    }
    FWeakObjectPtr::operator=(&local_1e4,(FObjectPtr)&param_12);
    Core::Private::Function::CheckCallable(*(void **)&param_1->UpdateWith);
    plVar1 = *(longlong **)&(param_1->UpdateWith).field_0x28;
    pcVar2 = *(code **)&param_1->UpdateWith;
    plVar13 = (longlong *)&(param_1->UpdateWith).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar13 = plVar1;
    }
    uVar11 = (**(code **)(*plVar13 + 8))();
    (*pcVar2)(uVar11,&local_1e8);
    if (param_13 != false) {
      FSearchContext::Track(param_10,param_11,param_5,Valid_Pose,&local_1dc);
    }
  }
  return;
}

// EvaluatePoseKernel<0,1> @ 14a8a1df0

void __cdecl
UE::PoseSearch::EvaluatePoseKernel<0,1>
          (FSearchResults *param_1,FSearchIndex *param_2,TArrayView<float_const_,int> *param_3,
          TArrayView<float,int> *param_4,int param_5,int param_6,FSearchFilters *param_7,
          float param_8,float param_9,FSearchContext *param_10,UPoseSearchDatabase *param_11,
          TArrayView<float_const_,int> *param_12,bool param_13)

{
  float *pfVar1;
  float *pfVar2;
  longlong *plVar3;
  code *pcVar4;
  float *pfVar5;
  TArrayView<float_const_,int> *pTVar6;
  bool bVar7;
  uint uVar8;
  TArrayView<float_const_,int> *pTVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  float *pfVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  TArrayView<float_const_,int> local_c8;
  TArrayView<float_const_,int> local_b8;
  TArrayView<float_const_,int> local_a8;
  TArrayView<float_const_,int> local_98;
  int local_88;
  FWeakObjectPtr local_84;
  FPoseSearchCost local_7c;
  int local_78;
  undefined4 local_74;
  undefined1 local_70;
  
  pTVar9 = FSearchIndex::GetPoseValues(param_2,&local_98,param_5);
  pTVar6 = param_12;
  local_b8.DataPtr = param_3->DataPtr;
  local_b8.ArrayNum = param_3->ArrayNum;
  local_b8._12_4_ = *(undefined4 *)&param_3->field_0xc;
  pfVar1 = pTVar9->DataPtr;
  uVar11._0_4_ = pTVar9->ArrayNum;
  uVar11._4_4_ = *(undefined4 *)&pTVar9->field_0xc;
  local_c8.DataPtr = param_12->DataPtr;
  local_c8.ArrayNum = param_12->ArrayNum;
  local_c8._12_4_ = *(undefined4 *)&param_12->field_0xc;
  local_a8.DataPtr = pfVar1;
  local_a8._8_8_ = uVar11;
  bVar7 = FSearchFilters::AreFiltersValid
                    (param_7,param_2,&local_a8,&local_b8,&local_c8,param_5,param_8,param_9,param_10,
                     param_11);
  if (bVar7) {
    local_84.ObjectIndex = 0;
    local_84.ObjectSerialNumber = 0;
    local_70 = 0;
    local_74 = 0x7f7fffff;
    uVar8 = 0;
    if (param_5 < (int)param_2->_padding_) {
      uVar8 = (uint)~param_5 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    fVar16 = FGenericPlatformMath::LoadHalf
                       ((ushort *)((longlong)param_5 * 0xc + 10 + param_2->_padding_));
    pfVar5 = pTVar6->DataPtr;
    pfVar14 = pTVar6->DataPtr;
    pfVar2 = param_3->DataPtr;
    if (((int)uVar11 != (uint)*(undefined8 *)&param_3->ArrayNum) ||
       ((int)uVar11 != pTVar6->ArrayNum)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("A.Num() == B.Num() && A.Num() == WeightsSqrt.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                         ,0x10,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar8 = (int)uVar11 & 0x80000003;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
    }
    if (uVar8 != 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("A.Num() % 4 == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                         ,0x11,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (((ulonglong)pfVar1 & 0xf) != 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsAligned(A.GetData(), alignof(VectorRegister4Float))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                         ,0x12,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (((ulonglong)pfVar2 & 0xf) != 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsAligned(B.GetData(), alignof(VectorRegister4Float))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                         ,0x13,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (((ulonglong)pfVar5 & 0xf) != 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsAligned(WeightsSqrt.GetData(), alignof(VectorRegister4Float))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                         ,0x14,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if ((pfVar1 == pfVar2) || (pfVar1 == pfVar14)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("A.GetData() != B.GetData() && A.GetData() != WeightsSqrt.GetData()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                         ,0x16,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    fVar21 = 0.0;
    fVar22 = 0.0;
    fVar23 = 0.0;
    fVar24 = 0.0;
    uVar8 = (int)((int)uVar11 + ((int)uVar11 >> 0x1f & 3U)) >> 2;
    uVar10 = (ulonglong)uVar8;
    if (0 < (int)uVar8) {
      lVar15 = (longlong)pfVar1 - (longlong)pfVar14;
      lVar12 = (longlong)pfVar2 - (longlong)pfVar14;
      do {
        pfVar1 = (float *)(lVar15 + (longlong)pfVar14);
        pfVar2 = (float *)(lVar12 + (longlong)pfVar14);
        fVar17 = (*pfVar1 - *pfVar2) * *pfVar14;
        fVar18 = (pfVar1[1] - pfVar2[1]) * pfVar14[1];
        fVar19 = (pfVar1[2] - pfVar2[2]) * pfVar14[2];
        fVar20 = (pfVar1[3] - pfVar2[3]) * pfVar14[3];
        pfVar14 = pfVar14 + 4;
        fVar21 = fVar21 + fVar17 * fVar17;
        fVar22 = fVar22 + fVar18 * fVar18;
        fVar23 = fVar23 + fVar19 * fVar19;
        fVar24 = fVar24 + fVar20 * fVar20;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    local_88 = param_5;
    local_78 = param_6;
    param_12 = (TArrayView<float_const_,int> *)param_11;
    local_7c.TotalCost = fVar24 + fVar23 + fVar22 + fVar21 + fVar16 + param_8 + param_9;
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_11 != (UPoseSearchDatabase *)0x0)
       ) {
      GC::MarkAsReachable((UObject *)param_11);
    }
    FWeakObjectPtr::operator=(&local_84,(FObjectPtr)&param_12);
    Core::Private::Function::CheckCallable(*(void **)&param_1->UpdateWith);
    plVar3 = *(longlong **)&(param_1->UpdateWith).field_0x28;
    pcVar4 = *(code **)&param_1->UpdateWith;
    plVar13 = (longlong *)&(param_1->UpdateWith).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar13 = plVar3;
    }
    uVar11 = (**(code **)(*plVar13 + 8))();
    (*pcVar4)(uVar11,&local_88);
    if (param_13 != false) {
      FSearchContext::Track(param_10,param_11,param_5,Valid_Pose,&local_7c);
    }
  }
  return;
}

// EvaluatePoseKernel<0,0> @ 14a8a21c0

void __cdecl
UE::PoseSearch::EvaluatePoseKernel<0,0>
          (FSearchResults *param_1,FSearchIndex *param_2,TArrayView<float_const_,int> *param_3,
          TArrayView<float,int> *param_4,int param_5,int param_6,FSearchFilters *param_7,
          float param_8,float param_9,FSearchContext *param_10,UPoseSearchDatabase *param_11,
          TArrayView<float_const_,int> *param_12,bool param_13)

{
  longlong *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  TArrayView<float_const_,int> *pTVar8;
  bool bVar9;
  TArrayView<float_const_,int> *pTVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong *plVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  int local_1d8;
  FWeakObjectPtr local_1d4;
  FPoseSearchCost local_1cc;
  int local_1c8;
  undefined4 local_1c4;
  undefined1 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  int iStack_1b0;
  undefined4 uStack_1ac;
  float *local_1a8;
  undefined8 uStack_1a0;
  TArrayView<float_const_,int> local_198;
  TArrayView<float_const_,int> local_188;
  TArrayView<float_const_,int> local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  longlong lStack_160;
  undefined8 local_158;
  undefined8 local_148;
  longlong lStack_140;
  undefined8 local_138;
  float *local_128;
  longlong lStack_120;
  undefined8 local_118;
  TArrayView<float_const_,int> local_108;
  DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
  local_f8 [24];
  float *local_e0;
  longlong lStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  longlong lStack_b8;
  undefined8 local_b0;
  float *local_98;
  longlong lStack_90;
  undefined8 local_88;
  
  pTVar10 = FSearchIndex::GetPoseValues(param_2,&local_108,param_5);
  pTVar8 = param_12;
  local_188.DataPtr = param_3->DataPtr;
  local_188.ArrayNum = param_3->ArrayNum;
  local_188._12_4_ = *(undefined4 *)&param_3->field_0xc;
  uVar3 = *(undefined4 *)&pTVar10->DataPtr;
  uVar4 = *(undefined4 *)((longlong)&pTVar10->DataPtr + 4);
  pfVar7 = pTVar10->DataPtr;
  iVar5 = pTVar10->ArrayNum;
  local_178._12_4_ = *(undefined4 *)&pTVar10->field_0xc;
  local_198.DataPtr = param_12->DataPtr;
  local_198.ArrayNum = param_12->ArrayNum;
  local_198._12_4_ = *(undefined4 *)&param_12->field_0xc;
  local_178.DataPtr._0_4_ = uVar3;
  local_178.DataPtr._4_4_ = uVar4;
  local_178.ArrayNum = iVar5;
  bVar9 = FSearchFilters::AreFiltersValid
                    (param_7,param_2,&local_178,&local_188,&local_198,param_5,param_8,param_9,
                     param_10,param_11);
  if (bVar9) {
    local_1d4.ObjectIndex = 0;
    local_1d4.ObjectSerialNumber = 0;
    local_1c0 = 0;
    local_1c4 = 0x7f7fffff;
    uVar12 = 0;
    if (param_5 < (int)param_2->_padding_) {
      uVar12 = (uint)~param_5 >> 0x1f;
    }
    if (uVar12 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    fVar15 = FGenericPlatformMath::LoadHalf
                       ((ushort *)((longlong)param_5 * 0xc + 10 + param_2->_padding_));
    local_1a8 = pTVar8->DataPtr;
    uStack_1a0 = *(undefined8 *)&pTVar8->ArrayNum;
    local_1b8 = *(undefined4 *)&param_3->DataPtr;
    uStack_1b4 = *(undefined4 *)((longlong)&param_3->DataPtr + 4);
    iVar6 = param_3->ArrayNum;
    uStack_1ac = *(undefined4 *)&param_3->field_0xc;
    iVar14 = (int)*(undefined8 *)&pTVar8->ArrayNum;
    iStack_1b0 = iVar6;
    if ((iVar5 != iVar6) || (iVar5 != iVar14)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("A.Num() == B.Num() && A.Num() == WeightsSqrt.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.inl"
                         ,0x3d,L"");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_d0 = local_158;
    lStack_160 = (longlong)iVar5;
    local_148 = CONCAT44(uStack_1b4,local_1b8);
    lStack_140 = (longlong)iVar6;
    local_128 = local_1a8;
    lStack_120 = (longlong)iVar14;
    local_b0 = local_138;
    local_98 = local_1a8;
    local_88 = local_118;
    local_168 = uVar3;
    uStack_164 = uVar4;
    local_e0 = pfVar7;
    lStack_d8 = lStack_160;
    local_c0 = local_148;
    lStack_b8 = lStack_140;
    lStack_90 = lStack_120;
    fVar16 = Eigen::
             DenseBase<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
             ::sum(local_f8);
    local_1d8 = param_5;
    local_1c8 = param_6;
    param_12 = (TArrayView<float_const_,int> *)param_11;
    local_1cc.TotalCost = fVar16 + fVar15 + param_8 + param_9;
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_11 != (UPoseSearchDatabase *)0x0)
       ) {
      GC::MarkAsReachable((UObject *)param_11);
    }
    FWeakObjectPtr::operator=(&local_1d4,(FObjectPtr)&param_12);
    Core::Private::Function::CheckCallable(*(void **)&param_1->UpdateWith);
    plVar1 = *(longlong **)&(param_1->UpdateWith).field_0x28;
    pcVar2 = *(code **)&param_1->UpdateWith;
    plVar13 = (longlong *)&(param_1->UpdateWith).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar13 = plVar1;
    }
    uVar11 = (**(code **)(*plVar13 + 8))();
    (*pcVar2)(uVar11,&local_1d8);
    if (param_13 != false) {
      FSearchContext::Track(param_10,param_11,param_5,Valid_Pose,&local_1cc);
    }
  }
  return;
}

// FindNeighborsInternal<UE::PoseSearch::FKDTree::FFilteredKNNMaxHeapResultSet> @ 14a8a2f50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FFilteredKNNMaxHeapResultSet>
          (FKDTreeImplementation *param_1,FFilteredKNNMaxHeapResultSet *param_2,
          TArrayView<float_const_,int> *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  TStatIdData *pTVar10;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  ulonglong uVar11;
  float *pfVar12;
  float *pfVar13;
  ulong64 uVar14;
  FNameEntryId FVar15;
  FName FVar16;
  uint uVar17;
  float fVar19;
  float fVar20;
  FColor_u_0 local_res8 [2];
  float local_res20;
  uint uStackX_24;
  FName local_a8;
  LARGE_INTEGER local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FStatMessage local_78;
  vector<float,std::allocator<float>_> local_68 [2];
  ulonglong uVar18;
  
  if (param_1 == (FKDTreeImplementation *)0x0) {
    return 0;
  }
  uVar11 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FFilteredKNNMaxHeapResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FFilteredKNNMaxHeapResultSet&___ptr64,TArrayView<float_const_,int>)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FFilteredKNNMaxHeapResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FFilteredKNNMaxHeapResultSet&___ptr64,TArrayView<float_const_,int>)'
                           ::__l2::_thread_safe_static_guard_0__),
     `int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FFilteredKNNMaxHeapResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FFilteredKNNMaxHeapResultSet&___ptr64,TArrayView<float_const_,int>)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FKDTree_FindNeighbors = (TStatIdData *)0x0;
    pFVar9 = ::FName::FName(&local_98,"STAT_FKDTree_FindNeighbors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FFilteredKNNMaxHeapResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FFilteredKNNMaxHeapResultSet&___ptr64,TArrayView<float_const_,int>)'
                ::__l2::StatPtr_STAT_FKDTree_FindNeighbors,*pFVar9,L"STAT_FKDTree_FindNeighbors",
               "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FFilteredKNNMaxHeapResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FFilteredKNNMaxHeapResultSet&___ptr64,TArrayView<float_const_,int>)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar10 = _StatPtr_STAT_FKDTree_FindNeighbors;
  if (_StatPtr_STAT_FKDTree_FindNeighbors == (TStatIdData *)0x0) {
    pFVar9 = ::FName::FName(&local_90,"STAT_FKDTree_FindNeighbors");
    pTVar10 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FFilteredKNNMaxHeapResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FFilteredKNNMaxHeapResultSet&___ptr64,TArrayView<float_const_,int>)'
                          ::__l2::StatPtr_STAT_FKDTree_FindNeighbors,*pFVar9,
                         L"STAT_FKDTree_FindNeighbors","STATGROUP_Quick","STATCAT_Advanced",L"Quick"
                         ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)&pTVar10->Name;
  bVar3 = false;
  bVar5 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar17 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar17 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(pTVar10->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a8.ComparisonIndex.Value = FVar15.Value;
        local_a8.Number = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a8,(pTVar10->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\KDTree.cpp"
                   ,0x174);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = (float)FVar15.Value;
      uStackX_24 = uVar17;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar4 = true;
      goto LAB_14a8a30e6;
    }
  }
  bVar4 = false;
  FVar16 = local_88;
LAB_14a8a30e6:
  if ((((param_3->DataPtr == (float *)0x0) || (param_3->ArrayNum != *(int *)&param_1->field_0x38))
      || (*(longlong *)&param_1->field_0x18 == 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Query.GetData() && Query.Num() == KDTreeImplementation->dim && KDTreeImplementation->root_node"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\KDTree.cpp"
                         ,0x178,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    iVar8 = (*pcVar2)();
    return iVar8;
  }
  pfVar12 = param_3->DataPtr;
  if (*(longlong *)&param_1->field_0x28 != 0) {
    local_68[0]._Mypair._Myval2._Myend = (float *)0x0;
    local_68[0]._Mypair._Myval2._Myfirst = (float *)0x0;
    local_68[0]._Mypair._Myval2._Mylast = (float *)0x0;
    local_res20 = 0.0;
    fVar20 = 0.0;
    std::vector<float,std::allocator<float>_>::assign
              (local_68,(longlong)*(int *)&param_1->field_0x38,&local_res20);
    if (0 < *(int *)&param_1->field_0x38) {
      pfVar13 = *(float **)&param_1->field_0x40;
      uVar18 = uVar11;
      do {
        if (*(float *)(uVar11 + (longlong)pfVar12) < *pfVar13) {
          fVar19 = *(float *)(uVar11 + (longlong)pfVar12) - *pfVar13;
          fVar19 = fVar19 * fVar19;
          *(float *)(uVar11 + (longlong)local_68[0]._Mypair._Myval2._Myfirst) = fVar19;
          fVar20 = fVar20 + fVar19;
        }
        if (pfVar13[1] < *(float *)(uVar11 + (longlong)pfVar12)) {
          fVar19 = *(float *)(uVar11 + (longlong)pfVar12) - pfVar13[1];
          fVar19 = fVar19 * fVar19;
          *(float *)(uVar11 + (longlong)local_68[0]._Mypair._Myval2._Myfirst) = fVar19;
          fVar20 = fVar20 + fVar19;
        }
        uVar17 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar17;
        pfVar13 = pfVar13 + 2;
        uVar11 = uVar11 + 4;
      } while ((int)uVar17 < *(int *)&param_1->field_0x38);
    }
    nanoflann::
    KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>
    ::searchLevel<UE::PoseSearch::FKDTree::FFilteredKNNMaxHeapResultSet>
              ((KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>
                *)param_1,param_2,pfVar12,*(Node **)&param_1->field_0x18,fVar20,local_68,
               __real_3f800000);
    if (local_68[0]._Mypair._Myval2._Myfirst != (float *)0x0) {
      uVar14 = (longlong)local_68[0]._Mypair._Myval2._Myend -
               (longlong)local_68[0]._Mypair._Myval2._Myfirst & 0xfffffffffffffffc;
      pfVar12 = local_68[0]._Mypair._Myval2._Myfirst;
      if (0xfff < uVar14) {
        pfVar12 = *(float **)(local_68[0]._Mypair._Myval2._Myfirst + -2);
        uVar14 = uVar14 + 0x27;
        if (0x1f < (ulonglong)
                   ((longlong)local_68[0]._Mypair._Myval2._Myfirst + (-8 - (longlong)pfVar12))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pfVar12,uVar14);
    }
  }
  lVar6 = param_2->_padding_;
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar16 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_78.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_78.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a0);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_a0.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_a0.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_a0.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_a0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_78);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return (int)lVar6;
}

// FindNeighborsInternal<UE::PoseSearch::FKDTree::FFilteredKNNResultSet> @ 14a8a33f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FFilteredKNNResultSet>
          (FKDTreeImplementation *param_1,FFilteredKNNResultSet *param_2,
          TArrayView<float_const_,int> *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  ulonglong uVar10;
  float *pfVar11;
  float *pfVar12;
  ulong64 uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  uint uVar16;
  float fVar18;
  float fVar19;
  FColor_u_0 local_res8 [2];
  float local_res20;
  uint uStackX_24;
  FName local_a8;
  LARGE_INTEGER local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FStatMessage local_78;
  vector<float,std::allocator<float>_> local_68 [2];
  ulonglong uVar17;
  
  if (param_1 == (FKDTreeImplementation *)0x0) {
    return 0;
  }
  uVar10 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FFilteredKNNResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FFilteredKNNResultSet&___ptr64,TArrayView<float_const_,int>)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FFilteredKNNResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FFilteredKNNResultSet&___ptr64,TArrayView<float_const_,int>)'
                           ::__l2::_thread_safe_static_guard_0__),
     `int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FFilteredKNNResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FFilteredKNNResultSet&___ptr64,TArrayView<float_const_,int>)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FKDTree_FindNeighbors = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName(&local_98,"STAT_FKDTree_FindNeighbors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FFilteredKNNResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FFilteredKNNResultSet&___ptr64,TArrayView<float_const_,int>)'
                ::__l2::StatPtr_STAT_FKDTree_FindNeighbors,*pFVar8,L"STAT_FKDTree_FindNeighbors",
               "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FFilteredKNNResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FFilteredKNNResultSet&___ptr64,TArrayView<float_const_,int>)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_STAT_FKDTree_FindNeighbors;
  if (_StatPtr_STAT_FKDTree_FindNeighbors == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_90,"STAT_FKDTree_FindNeighbors");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FFilteredKNNResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FFilteredKNNResultSet&___ptr64,TArrayView<float_const_,int>)'
                         ::__l2::StatPtr_STAT_FKDTree_FindNeighbors,*pFVar8,
                        L"STAT_FKDTree_FindNeighbors","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)&pTVar9->Name;
  bVar3 = false;
  bVar5 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar16 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar16 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a8.ComparisonIndex.Value = FVar14.Value;
        local_a8.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a8,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\KDTree.cpp"
                   ,0x174);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = (float)FVar14.Value;
      uStackX_24 = uVar16;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar4 = true;
      goto LAB_14a8a3586;
    }
  }
  bVar4 = false;
  FVar15 = local_88;
LAB_14a8a3586:
  if ((((param_3->DataPtr == (float *)0x0) || (param_3->ArrayNum != *(int *)&param_1->field_0x38))
      || (*(longlong *)&param_1->field_0x18 == 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Query.GetData() && Query.Num() == KDTreeImplementation->dim && KDTreeImplementation->root_node"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\KDTree.cpp"
                         ,0x178,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    iVar7 = (*pcVar2)();
    return iVar7;
  }
  pfVar11 = param_3->DataPtr;
  if (*(longlong *)&param_1->field_0x28 != 0) {
    local_68[0]._Mypair._Myval2._Myend = (float *)0x0;
    local_68[0]._Mypair._Myval2._Myfirst = (float *)0x0;
    local_68[0]._Mypair._Myval2._Mylast = (float *)0x0;
    local_res20 = 0.0;
    fVar19 = 0.0;
    std::vector<float,std::allocator<float>_>::assign
              (local_68,(longlong)*(int *)&param_1->field_0x38,&local_res20);
    if (0 < *(int *)&param_1->field_0x38) {
      pfVar12 = *(float **)&param_1->field_0x40;
      uVar17 = uVar10;
      do {
        if (*(float *)(uVar10 + (longlong)pfVar11) < *pfVar12) {
          fVar18 = *(float *)(uVar10 + (longlong)pfVar11) - *pfVar12;
          fVar18 = fVar18 * fVar18;
          *(float *)(uVar10 + (longlong)local_68[0]._Mypair._Myval2._Myfirst) = fVar18;
          fVar19 = fVar19 + fVar18;
        }
        if (pfVar12[1] < *(float *)(uVar10 + (longlong)pfVar11)) {
          fVar18 = *(float *)(uVar10 + (longlong)pfVar11) - pfVar12[1];
          fVar18 = fVar18 * fVar18;
          *(float *)(uVar10 + (longlong)local_68[0]._Mypair._Myval2._Myfirst) = fVar18;
          fVar19 = fVar19 + fVar18;
        }
        uVar16 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
        pfVar12 = pfVar12 + 2;
        uVar10 = uVar10 + 4;
      } while ((int)uVar16 < *(int *)&param_1->field_0x38);
    }
    nanoflann::
    KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>
    ::searchLevel<UE::PoseSearch::FKDTree::FFilteredKNNResultSet>
              ((KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>
                *)param_1,param_2,pfVar11,*(Node **)&param_1->field_0x18,fVar19,local_68,
               __real_3f800000);
    if (local_68[0]._Mypair._Myval2._Myfirst != (float *)0x0) {
      uVar13 = (longlong)local_68[0]._Mypair._Myval2._Myend -
               (longlong)local_68[0]._Mypair._Myval2._Myfirst & 0xfffffffffffffffc;
      pfVar11 = local_68[0]._Mypair._Myval2._Myfirst;
      if (0xfff < uVar13) {
        pfVar11 = *(float **)(local_68[0]._Mypair._Myval2._Myfirst + -2);
        uVar13 = uVar13 + 0x27;
        if (0x1f < (ulonglong)
                   ((longlong)local_68[0]._Mypair._Myval2._Myfirst + (-8 - (longlong)pfVar11))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pfVar11,uVar13);
    }
  }
  iVar7 = *(int *)((longlong)&param_2->_padding_ + 4);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar15 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_78.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_78.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a0);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_a0.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_a0.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_a0.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_a0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_78);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return iVar7;
}

// FindNeighborsInternal<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet> @ 14a8a3890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet>
          (FKDTreeImplementation *param_1,FKNNMaxHeapResultSet *param_2,
          TArrayView<float_const_,int> *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  ulonglong uVar10;
  float *pfVar11;
  float *pfVar12;
  ulong64 uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  uint uVar16;
  float fVar18;
  float fVar19;
  FColor_u_0 local_res8 [2];
  float local_res20;
  uint uStackX_24;
  FName local_a8;
  LARGE_INTEGER local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FStatMessage local_78;
  vector<float,std::allocator<float>_> local_68 [2];
  ulonglong uVar17;
  
  if (param_1 == (FKDTreeImplementation *)0x0) {
    return 0;
  }
  uVar10 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet&___ptr64,TArrayView<float_const_,int>)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet&___ptr64,TArrayView<float_const_,int>)'
                           ::__l2::_thread_safe_static_guard_0__),
     `int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet&___ptr64,TArrayView<float_const_,int>)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FKDTree_FindNeighbors = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName(&local_98,"STAT_FKDTree_FindNeighbors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet&___ptr64,TArrayView<float_const_,int>)'
                ::__l2::StatPtr_STAT_FKDTree_FindNeighbors,*pFVar8,L"STAT_FKDTree_FindNeighbors",
               "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet&___ptr64,TArrayView<float_const_,int>)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_STAT_FKDTree_FindNeighbors;
  if (_StatPtr_STAT_FKDTree_FindNeighbors == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_90,"STAT_FKDTree_FindNeighbors");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet&___ptr64,TArrayView<float_const_,int>)'
                         ::__l2::StatPtr_STAT_FKDTree_FindNeighbors,*pFVar8,
                        L"STAT_FKDTree_FindNeighbors","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)&pTVar9->Name;
  bVar3 = false;
  bVar5 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar16 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar16 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a8.ComparisonIndex.Value = FVar14.Value;
        local_a8.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a8,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\KDTree.cpp"
                   ,0x174);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = (float)FVar14.Value;
      uStackX_24 = uVar16;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar4 = true;
      goto LAB_14a8a3a26;
    }
  }
  bVar4 = false;
  FVar15 = local_88;
LAB_14a8a3a26:
  if ((((param_3->DataPtr == (float *)0x0) || (param_3->ArrayNum != *(int *)&param_1->field_0x38))
      || (*(longlong *)&param_1->field_0x18 == 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Query.GetData() && Query.Num() == KDTreeImplementation->dim && KDTreeImplementation->root_node"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\KDTree.cpp"
                         ,0x178,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    iVar7 = (*pcVar2)();
    return iVar7;
  }
  pfVar11 = param_3->DataPtr;
  if (*(longlong *)&param_1->field_0x28 != 0) {
    local_68[0]._Mypair._Myval2._Myend = (float *)0x0;
    local_68[0]._Mypair._Myval2._Myfirst = (float *)0x0;
    local_68[0]._Mypair._Myval2._Mylast = (float *)0x0;
    local_res20 = 0.0;
    fVar19 = 0.0;
    std::vector<float,std::allocator<float>_>::assign
              (local_68,(longlong)*(int *)&param_1->field_0x38,&local_res20);
    if (0 < *(int *)&param_1->field_0x38) {
      pfVar12 = *(float **)&param_1->field_0x40;
      uVar17 = uVar10;
      do {
        if (*(float *)(uVar10 + (longlong)pfVar11) < *pfVar12) {
          fVar18 = *(float *)(uVar10 + (longlong)pfVar11) - *pfVar12;
          fVar18 = fVar18 * fVar18;
          *(float *)(uVar10 + (longlong)local_68[0]._Mypair._Myval2._Myfirst) = fVar18;
          fVar19 = fVar19 + fVar18;
        }
        if (pfVar12[1] < *(float *)(uVar10 + (longlong)pfVar11)) {
          fVar18 = *(float *)(uVar10 + (longlong)pfVar11) - pfVar12[1];
          fVar18 = fVar18 * fVar18;
          *(float *)(uVar10 + (longlong)local_68[0]._Mypair._Myval2._Myfirst) = fVar18;
          fVar19 = fVar19 + fVar18;
        }
        uVar16 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
        pfVar12 = pfVar12 + 2;
        uVar10 = uVar10 + 4;
      } while ((int)uVar16 < *(int *)&param_1->field_0x38);
    }
    nanoflann::
    KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>
    ::searchLevel<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet>
              ((KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>
                *)param_1,param_2,pfVar11,*(Node **)&param_1->field_0x18,fVar19,local_68,
               __real_3f800000);
    if (local_68[0]._Mypair._Myval2._Myfirst != (float *)0x0) {
      uVar13 = (longlong)local_68[0]._Mypair._Myval2._Myend -
               (longlong)local_68[0]._Mypair._Myval2._Myfirst & 0xfffffffffffffffc;
      pfVar11 = local_68[0]._Mypair._Myval2._Myfirst;
      if (0xfff < uVar13) {
        pfVar11 = *(float **)(local_68[0]._Mypair._Myval2._Myfirst + -2);
        uVar13 = uVar13 + 0x27;
        if (0x1f < (ulonglong)
                   ((longlong)local_68[0]._Mypair._Myval2._Myfirst + (-8 - (longlong)pfVar11))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pfVar11,uVar13);
    }
  }
  iVar7 = param_2->MaxHeapNum;
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar15 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_78.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_78.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a0);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_a0.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_a0.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_a0.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_a0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_78);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return iVar7;
}

// FindNeighborsInternal<UE::PoseSearch::FKDTree::FKNNResultSet> @ 14a8a3d30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FKNNResultSet>
          (FKDTreeImplementation *param_1,FKNNResultSet *param_2,
          TArrayView<float_const_,int> *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  ulonglong uVar10;
  float *pfVar11;
  float *pfVar12;
  ulong64 uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  uint uVar16;
  float fVar18;
  float fVar19;
  FColor_u_0 local_res8 [2];
  float local_res20;
  uint uStackX_24;
  FName local_a8;
  LARGE_INTEGER local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FStatMessage local_78;
  vector<float,std::allocator<float>_> local_68 [2];
  ulonglong uVar17;
  
  if (param_1 == (FKDTreeImplementation *)0x0) {
    return 0;
  }
  uVar10 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FKNNResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FKNNResultSet&___ptr64,TArrayView<float_const_,int>)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FKNNResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FKNNResultSet&___ptr64,TArrayView<float_const_,int>)'
                           ::__l2::_thread_safe_static_guard_0__),
     `int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FKNNResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FKNNResultSet&___ptr64,TArrayView<float_const_,int>)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FKDTree_FindNeighbors = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName(&local_98,"STAT_FKDTree_FindNeighbors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FKNNResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FKNNResultSet&___ptr64,TArrayView<float_const_,int>)'
                ::__l2::StatPtr_STAT_FKDTree_FindNeighbors,*pFVar8,L"STAT_FKDTree_FindNeighbors",
               "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FKNNResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FKNNResultSet&___ptr64,TArrayView<float_const_,int>)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_STAT_FKDTree_FindNeighbors;
  if (_StatPtr_STAT_FKDTree_FindNeighbors == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_90,"STAT_FKDTree_FindNeighbors");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FKNNResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FKNNResultSet&___ptr64,TArrayView<float_const_,int>)'
                         ::__l2::StatPtr_STAT_FKDTree_FindNeighbors,*pFVar8,
                        L"STAT_FKDTree_FindNeighbors","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)&pTVar9->Name;
  bVar3 = false;
  bVar5 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar16 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar16 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a8.ComparisonIndex.Value = FVar14.Value;
        local_a8.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a8,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\KDTree.cpp"
                   ,0x174);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = (float)FVar14.Value;
      uStackX_24 = uVar16;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar4 = true;
      goto LAB_14a8a3ec6;
    }
  }
  bVar4 = false;
  FVar15 = local_88;
LAB_14a8a3ec6:
  if ((((param_3->DataPtr == (float *)0x0) || (param_3->ArrayNum != *(int *)&param_1->field_0x38))
      || (*(longlong *)&param_1->field_0x18 == 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Query.GetData() && Query.Num() == KDTreeImplementation->dim && KDTreeImplementation->root_node"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\KDTree.cpp"
                         ,0x178,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    iVar7 = (*pcVar2)();
    return iVar7;
  }
  pfVar11 = param_3->DataPtr;
  if (*(longlong *)&param_1->field_0x28 != 0) {
    local_68[0]._Mypair._Myval2._Myend = (float *)0x0;
    local_68[0]._Mypair._Myval2._Myfirst = (float *)0x0;
    local_68[0]._Mypair._Myval2._Mylast = (float *)0x0;
    local_res20 = 0.0;
    fVar19 = 0.0;
    std::vector<float,std::allocator<float>_>::assign
              (local_68,(longlong)*(int *)&param_1->field_0x38,&local_res20);
    if (0 < *(int *)&param_1->field_0x38) {
      pfVar12 = *(float **)&param_1->field_0x40;
      uVar17 = uVar10;
      do {
        if (*(float *)(uVar10 + (longlong)pfVar11) < *pfVar12) {
          fVar18 = *(float *)(uVar10 + (longlong)pfVar11) - *pfVar12;
          fVar18 = fVar18 * fVar18;
          *(float *)(uVar10 + (longlong)local_68[0]._Mypair._Myval2._Myfirst) = fVar18;
          fVar19 = fVar19 + fVar18;
        }
        if (pfVar12[1] < *(float *)(uVar10 + (longlong)pfVar11)) {
          fVar18 = *(float *)(uVar10 + (longlong)pfVar11) - pfVar12[1];
          fVar18 = fVar18 * fVar18;
          *(float *)(uVar10 + (longlong)local_68[0]._Mypair._Myval2._Myfirst) = fVar18;
          fVar19 = fVar19 + fVar18;
        }
        uVar16 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
        pfVar12 = pfVar12 + 2;
        uVar10 = uVar10 + 4;
      } while ((int)uVar16 < *(int *)&param_1->field_0x38);
    }
    nanoflann::
    KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>
    ::searchLevel<UE::PoseSearch::FKDTree::FKNNResultSet>
              ((KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>
                *)param_1,param_2,pfVar11,*(Node **)&param_1->field_0x18,fVar19,local_68,
               __real_3f800000);
    if (local_68[0]._Mypair._Myval2._Myfirst != (float *)0x0) {
      uVar13 = (longlong)local_68[0]._Mypair._Myval2._Myend -
               (longlong)local_68[0]._Mypair._Myval2._Myfirst & 0xfffffffffffffffc;
      pfVar11 = local_68[0]._Mypair._Myval2._Myfirst;
      if (0xfff < uVar13) {
        pfVar11 = *(float **)(local_68[0]._Mypair._Myval2._Myfirst + -2);
        uVar13 = uVar13 + 0x27;
        if (0x1f < (ulonglong)
                   ((longlong)local_68[0]._Mypair._Myval2._Myfirst + (-8 - (longlong)pfVar11))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pfVar11,uVar13);
    }
  }
  iVar7 = param_2->Count;
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar15 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_78.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_78.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a0);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_a0.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_a0.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_a0.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_a0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_78);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return iVar7;
}

// FindNeighborsInternal<UE::PoseSearch::FKDTree::FRadiusMaxHeapResultSet> @ 14a8a41d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FRadiusMaxHeapResultSet>
          (FKDTreeImplementation *param_1,FRadiusMaxHeapResultSet *param_2,
          TArrayView<float_const_,int> *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  ulonglong uVar10;
  float *pfVar11;
  float *pfVar12;
  ulong64 uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  uint uVar16;
  float fVar18;
  float fVar19;
  FColor_u_0 local_res8 [2];
  float local_res20;
  uint uStackX_24;
  FName local_a8;
  LARGE_INTEGER local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FStatMessage local_78;
  vector<float,std::allocator<float>_> local_68 [2];
  ulonglong uVar17;
  
  if (param_1 == (FKDTreeImplementation *)0x0) {
    return 0;
  }
  uVar10 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FRadiusMaxHeapResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FRadiusMaxHeapResultSet&___ptr64,TArrayView<float_const_,int>)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FRadiusMaxHeapResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FRadiusMaxHeapResultSet&___ptr64,TArrayView<float_const_,int>)'
                           ::__l2::_thread_safe_static_guard_0__),
     `int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FRadiusMaxHeapResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FRadiusMaxHeapResultSet&___ptr64,TArrayView<float_const_,int>)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FKDTree_FindNeighbors = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName(&local_98,"STAT_FKDTree_FindNeighbors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FRadiusMaxHeapResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FRadiusMaxHeapResultSet&___ptr64,TArrayView<float_const_,int>)'
                ::__l2::StatPtr_STAT_FKDTree_FindNeighbors,*pFVar8,L"STAT_FKDTree_FindNeighbors",
               "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FRadiusMaxHeapResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FRadiusMaxHeapResultSet&___ptr64,TArrayView<float_const_,int>)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_STAT_FKDTree_FindNeighbors;
  if (_StatPtr_STAT_FKDTree_FindNeighbors == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_90,"STAT_FKDTree_FindNeighbors");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FRadiusMaxHeapResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FRadiusMaxHeapResultSet&___ptr64,TArrayView<float_const_,int>)'
                         ::__l2::StatPtr_STAT_FKDTree_FindNeighbors,*pFVar8,
                        L"STAT_FKDTree_FindNeighbors","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)&pTVar9->Name;
  bVar3 = false;
  bVar5 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar16 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar16 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a8.ComparisonIndex.Value = FVar14.Value;
        local_a8.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a8,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\KDTree.cpp"
                   ,0x174);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = (float)FVar14.Value;
      uStackX_24 = uVar16;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar4 = true;
      goto LAB_14a8a4366;
    }
  }
  bVar4 = false;
  FVar15 = local_88;
LAB_14a8a4366:
  if ((((param_3->DataPtr == (float *)0x0) || (param_3->ArrayNum != *(int *)&param_1->field_0x38))
      || (*(longlong *)&param_1->field_0x18 == 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Query.GetData() && Query.Num() == KDTreeImplementation->dim && KDTreeImplementation->root_node"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\KDTree.cpp"
                         ,0x178,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    iVar7 = (*pcVar2)();
    return iVar7;
  }
  pfVar11 = param_3->DataPtr;
  if (*(longlong *)&param_1->field_0x28 != 0) {
    local_68[0]._Mypair._Myval2._Myend = (float *)0x0;
    local_68[0]._Mypair._Myval2._Myfirst = (float *)0x0;
    local_68[0]._Mypair._Myval2._Mylast = (float *)0x0;
    local_res20 = 0.0;
    fVar19 = 0.0;
    std::vector<float,std::allocator<float>_>::assign
              (local_68,(longlong)*(int *)&param_1->field_0x38,&local_res20);
    if (0 < *(int *)&param_1->field_0x38) {
      pfVar12 = *(float **)&param_1->field_0x40;
      uVar17 = uVar10;
      do {
        if (*(float *)(uVar10 + (longlong)pfVar11) < *pfVar12) {
          fVar18 = *(float *)(uVar10 + (longlong)pfVar11) - *pfVar12;
          fVar18 = fVar18 * fVar18;
          *(float *)(uVar10 + (longlong)local_68[0]._Mypair._Myval2._Myfirst) = fVar18;
          fVar19 = fVar19 + fVar18;
        }
        if (pfVar12[1] < *(float *)(uVar10 + (longlong)pfVar11)) {
          fVar18 = *(float *)(uVar10 + (longlong)pfVar11) - pfVar12[1];
          fVar18 = fVar18 * fVar18;
          *(float *)(uVar10 + (longlong)local_68[0]._Mypair._Myval2._Myfirst) = fVar18;
          fVar19 = fVar19 + fVar18;
        }
        uVar16 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
        pfVar12 = pfVar12 + 2;
        uVar10 = uVar10 + 4;
      } while ((int)uVar16 < *(int *)&param_1->field_0x38);
    }
    nanoflann::
    KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>
    ::searchLevel<UE::PoseSearch::FKDTree::FRadiusMaxHeapResultSet>
              ((KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>
                *)param_1,param_2,pfVar11,*(Node **)&param_1->field_0x18,fVar19,local_68,
               __real_3f800000);
    if (local_68[0]._Mypair._Myval2._Myfirst != (float *)0x0) {
      uVar13 = (longlong)local_68[0]._Mypair._Myval2._Myend -
               (longlong)local_68[0]._Mypair._Myval2._Myfirst & 0xfffffffffffffffc;
      pfVar11 = local_68[0]._Mypair._Myval2._Myfirst;
      if (0xfff < uVar13) {
        pfVar11 = *(float **)(local_68[0]._Mypair._Myval2._Myfirst + -2);
        uVar13 = uVar13 + 0x27;
        if (0x1f < (ulonglong)
                   ((longlong)local_68[0]._Mypair._Myval2._Myfirst + (-8 - (longlong)pfVar11))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pfVar11,uVar13);
    }
  }
  iVar7 = *(int *)&param_2->field_0x10;
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar15 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_78.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_78.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a0);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_a0.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_a0.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_a0.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_a0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_78);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return iVar7;
}

// FindNeighborsInternal<UE::PoseSearch::FKDTree::FRadiusResultSet> @ 14a8a4670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FRadiusResultSet>
          (FKDTreeImplementation *param_1,FRadiusResultSet *param_2,
          TArrayView<float_const_,int> *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  ulonglong uVar10;
  float *pfVar11;
  float *pfVar12;
  ulong64 uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  uint uVar16;
  float fVar18;
  float fVar19;
  FColor_u_0 local_res8 [2];
  float local_res20;
  uint uStackX_24;
  FName local_a8;
  LARGE_INTEGER local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FStatMessage local_78;
  vector<float,std::allocator<float>_> local_68 [2];
  ulonglong uVar17;
  
  if (param_1 == (FKDTreeImplementation *)0x0) {
    return 0;
  }
  uVar10 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FRadiusResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FRadiusResultSet&___ptr64,TArrayView<float_const_,int>)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FRadiusResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FRadiusResultSet&___ptr64,TArrayView<float_const_,int>)'
                           ::__l2::_thread_safe_static_guard_0__),
     `int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FRadiusResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FRadiusResultSet&___ptr64,TArrayView<float_const_,int>)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FKDTree_FindNeighbors = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName(&local_98,"STAT_FKDTree_FindNeighbors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FRadiusResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FRadiusResultSet&___ptr64,TArrayView<float_const_,int>)'
                ::__l2::StatPtr_STAT_FKDTree_FindNeighbors,*pFVar8,L"STAT_FKDTree_FindNeighbors",
               "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FRadiusResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FRadiusResultSet&___ptr64,TArrayView<float_const_,int>)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_STAT_FKDTree_FindNeighbors;
  if (_StatPtr_STAT_FKDTree_FindNeighbors == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_90,"STAT_FKDTree_FindNeighbors");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`int___cdecl_UE::PoseSearch::FindNeighborsInternal<UE::PoseSearch::FKDTree::FRadiusResultSet>(UE::PoseSearch::FKDTreeImplementation*___ptr64,UE::PoseSearch::FKDTree::FRadiusResultSet&___ptr64,TArrayView<float_const_,int>)'
                         ::__l2::StatPtr_STAT_FKDTree_FindNeighbors,*pFVar8,
                        L"STAT_FKDTree_FindNeighbors","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)&pTVar9->Name;
  bVar3 = false;
  bVar5 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar16 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar16 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a8.ComparisonIndex.Value = FVar14.Value;
        local_a8.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a8,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\KDTree.cpp"
                   ,0x174);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = (float)FVar14.Value;
      uStackX_24 = uVar16;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar4 = true;
      goto LAB_14a8a4806;
    }
  }
  bVar4 = false;
  FVar15 = local_88;
LAB_14a8a4806:
  if ((((param_3->DataPtr == (float *)0x0) || (param_3->ArrayNum != *(int *)&param_1->field_0x38))
      || (*(longlong *)&param_1->field_0x18 == 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Query.GetData() && Query.Num() == KDTreeImplementation->dim && KDTreeImplementation->root_node"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\KDTree.cpp"
                         ,0x178,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    iVar7 = (*pcVar2)();
    return iVar7;
  }
  pfVar11 = param_3->DataPtr;
  if (*(longlong *)&param_1->field_0x28 != 0) {
    local_68[0]._Mypair._Myval2._Myend = (float *)0x0;
    local_68[0]._Mypair._Myval2._Myfirst = (float *)0x0;
    local_68[0]._Mypair._Myval2._Mylast = (float *)0x0;
    local_res20 = 0.0;
    fVar19 = 0.0;
    std::vector<float,std::allocator<float>_>::assign
              (local_68,(longlong)*(int *)&param_1->field_0x38,&local_res20);
    if (0 < *(int *)&param_1->field_0x38) {
      pfVar12 = *(float **)&param_1->field_0x40;
      uVar17 = uVar10;
      do {
        if (*(float *)(uVar10 + (longlong)pfVar11) < *pfVar12) {
          fVar18 = *(float *)(uVar10 + (longlong)pfVar11) - *pfVar12;
          fVar18 = fVar18 * fVar18;
          *(float *)(uVar10 + (longlong)local_68[0]._Mypair._Myval2._Myfirst) = fVar18;
          fVar19 = fVar19 + fVar18;
        }
        if (pfVar12[1] < *(float *)(uVar10 + (longlong)pfVar11)) {
          fVar18 = *(float *)(uVar10 + (longlong)pfVar11) - pfVar12[1];
          fVar18 = fVar18 * fVar18;
          *(float *)(uVar10 + (longlong)local_68[0]._Mypair._Myval2._Myfirst) = fVar18;
          fVar19 = fVar19 + fVar18;
        }
        uVar16 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
        pfVar12 = pfVar12 + 2;
        uVar10 = uVar10 + 4;
      } while ((int)uVar16 < *(int *)&param_1->field_0x38);
    }
    nanoflann::
    KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>
    ::searchLevel<UE::PoseSearch::FKDTree::FRadiusResultSet>
              ((KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>
                *)param_1,param_2,pfVar11,*(Node **)&param_1->field_0x18,fVar19,local_68,
               __real_3f800000);
    if (local_68[0]._Mypair._Myval2._Myfirst != (float *)0x0) {
      uVar13 = (longlong)local_68[0]._Mypair._Myval2._Myend -
               (longlong)local_68[0]._Mypair._Myval2._Myfirst & 0xfffffffffffffffc;
      pfVar11 = local_68[0]._Mypair._Myval2._Myfirst;
      if (0xfff < uVar13) {
        pfVar11 = *(float **)(local_68[0]._Mypair._Myval2._Myfirst + -2);
        uVar13 = uVar13 + 0x27;
        if (0x1f < (ulonglong)
                   ((longlong)local_68[0]._Mypair._Myval2._Myfirst + (-8 - (longlong)pfVar11))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pfVar11,uVar13);
    }
  }
  iVar7 = *(int *)&param_2->field_0x24;
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar15 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_78.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_78.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a0);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_a0.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_a0.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_a0.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_a0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_78);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return iVar7;
}

// GetStructPtr<FChooserParameterBase> @ 14a8a54e0

/* WARNING: Removing unreachable block (ram,0x00014a8a5543) */

FChooserParameterBase * __cdecl
UE::StructUtils::GetStructPtr<FChooserParameterBase>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  
  if ((param_2 != (void *)0x0) && (param_1 != (UScriptStruct *)0x0)) {
    pUVar2 = FChooserParameterBase::StaticStruct();
    if (param_1 == pUVar2) {
      return param_2;
    }
    pUVar2 = FChooserParameterBase::StaticStruct();
    if (pUVar2 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= (int)param_1->_padding_) &&
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        return param_2;
      }
      return (FChooserParameterBase *)0x0;
    }
  }
  return (FChooserParameterBase *)0x0;
}

// GetStructPtr<FChooserParameterBoolBase> @ 14a8a5580

/* WARNING: Removing unreachable block (ram,0x00014a8a55e3) */

FChooserParameterBoolBase * __cdecl
UE::StructUtils::GetStructPtr<FChooserParameterBoolBase>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  
  if ((param_2 != (void *)0x0) && (param_1 != (UScriptStruct *)0x0)) {
    pUVar2 = FChooserParameterBoolBase::StaticStruct();
    if (param_1 == pUVar2) {
      return param_2;
    }
    pUVar2 = FChooserParameterBoolBase::StaticStruct();
    if (pUVar2 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= (int)param_1->_padding_) &&
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        return param_2;
      }
      return (FChooserParameterBoolBase *)0x0;
    }
  }
  return (FChooserParameterBoolBase *)0x0;
}

// GetStructPtr<FChooserParameterFloatBase> @ 14a8a5620

/* WARNING: Removing unreachable block (ram,0x00014a8a5683) */

FChooserParameterFloatBase * __cdecl
UE::StructUtils::GetStructPtr<FChooserParameterFloatBase>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  
  if ((param_2 != (void *)0x0) && (param_1 != (UScriptStruct *)0x0)) {
    pUVar2 = FChooserParameterFloatBase::StaticStruct();
    if (param_1 == pUVar2) {
      return param_2;
    }
    pUVar2 = FChooserParameterFloatBase::StaticStruct();
    if (pUVar2 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= (int)param_1->_padding_) &&
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        return param_2;
      }
      return (FChooserParameterFloatBase *)0x0;
    }
  }
  return (FChooserParameterFloatBase *)0x0;
}

// GetStructPtr<FChooserParameterPoseHistoryBase> @ 14a8a56c0

/* WARNING: Removing unreachable block (ram,0x00014a8a5776) */

FChooserParameterPoseHistoryBase * __cdecl
UE::StructUtils::GetStructPtr<FChooserParameterPoseHistoryBase>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UPackage *pUVar2;
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FChooserParameterPoseHistoryBase *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FChooserParameterPoseHistoryBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FChooserParameterPoseHistoryBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserParameterPoseHistoryBase,
                         (UObject *)pUVar2,L"ChooserParameterPoseHistoryBase");
  }
  if (param_1 != Z_Registration_Info_UScriptStruct_FChooserParameterPoseHistoryBase.OuterSingleton)
  {
    if (Z_Registration_Info_UScriptStruct_FChooserParameterPoseHistoryBase.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_PoseSearch();
      Z_Registration_Info_UScriptStruct_FChooserParameterPoseHistoryBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FChooserParameterPoseHistoryBase,
                           (UObject *)pUVar2,L"ChooserParameterPoseHistoryBase");
      if (Z_Registration_Info_UScriptStruct_FChooserParameterPoseHistoryBase.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FChooserParameterPoseHistoryBase *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FChooserParameterPoseHistoryBase.OuterSingleton)
                 ->_padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
        &(Z_Registration_Info_UScriptStruct_FChooserParameterPoseHistoryBase.OuterSingleton)->
         _padding_)) {
      return param_2;
    }
    return (FChooserParameterPoseHistoryBase *)0x0;
  }
  return param_2;
}

// GetStructPtr<FChooserPlayerSettings> @ 14a8a57b0

/* WARNING: Removing unreachable block (ram,0x00014a8a5813) */

FChooserPlayerSettings * __cdecl
UE::StructUtils::GetStructPtr<FChooserPlayerSettings>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  
  if ((param_2 != (void *)0x0) && (param_1 != (UScriptStruct *)0x0)) {
    pUVar2 = FChooserPlayerSettings::StaticStruct();
    if (param_1 == pUVar2) {
      return param_2;
    }
    pUVar2 = FChooserPlayerSettings::StaticStruct();
    if (pUVar2 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= (int)param_1->_padding_) &&
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        return param_2;
      }
      return (FChooserPlayerSettings *)0x0;
    }
  }
  return (FChooserPlayerSettings *)0x0;
}

// GetStructPtr<FPoseSearchDatabaseAnimComposite> @ 14a8a5850

/* WARNING: Removing unreachable block (ram,0x00014a8a5906) */

FPoseSearchDatabaseAnimComposite * __cdecl
UE::StructUtils::GetStructPtr<FPoseSearchDatabaseAnimComposite>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UPackage *pUVar2;
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FPoseSearchDatabaseAnimComposite *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimComposite.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimComposite.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite,
                         (UObject *)pUVar2,L"PoseSearchDatabaseAnimComposite");
  }
  if (param_1 != Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimComposite.OuterSingleton)
  {
    if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimComposite.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_PoseSearch();
      Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimComposite.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite,
                           (UObject *)pUVar2,L"PoseSearchDatabaseAnimComposite");
      if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimComposite.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FPoseSearchDatabaseAnimComposite *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimComposite.OuterSingleton)
                 ->_padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
        &(Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimComposite.OuterSingleton)->
         _padding_)) {
      return param_2;
    }
    return (FPoseSearchDatabaseAnimComposite *)0x0;
  }
  return param_2;
}

// GetStructPtr<FPoseSearchDatabaseAnimMontage> @ 14a8a5940

/* WARNING: Removing unreachable block (ram,0x00014a8a59f6) */

FPoseSearchDatabaseAnimMontage * __cdecl
UE::StructUtils::GetStructPtr<FPoseSearchDatabaseAnimMontage>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UPackage *pUVar2;
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FPoseSearchDatabaseAnimMontage *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimMontage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimMontage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage,(UObject *)pUVar2,
                         L"PoseSearchDatabaseAnimMontage");
  }
  if (param_1 != Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimMontage.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimMontage.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_PoseSearch();
      Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimMontage.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage,
                           (UObject *)pUVar2,L"PoseSearchDatabaseAnimMontage");
      if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimMontage.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FPoseSearchDatabaseAnimMontage *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimMontage.OuterSingleton)->
                 _padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
        &(Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimMontage.OuterSingleton)->
         _padding_)) {
      return param_2;
    }
    return (FPoseSearchDatabaseAnimMontage *)0x0;
  }
  return param_2;
}

// GetStructPtr<FPoseSearchDatabaseBlendSpace> @ 14a8a5a30

/* WARNING: Removing unreachable block (ram,0x00014a8a5ae6) */

FPoseSearchDatabaseBlendSpace * __cdecl
UE::StructUtils::GetStructPtr<FPoseSearchDatabaseBlendSpace>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UPackage *pUVar2;
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FPoseSearchDatabaseBlendSpace *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseBlendSpace.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseBlendSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace,(UObject *)pUVar2,
                         L"PoseSearchDatabaseBlendSpace");
  }
  if (param_1 != Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseBlendSpace.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseBlendSpace.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_PoseSearch();
      Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseBlendSpace.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace,(UObject *)pUVar2
                           ,L"PoseSearchDatabaseBlendSpace");
      if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseBlendSpace.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FPoseSearchDatabaseBlendSpace *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseBlendSpace.OuterSingleton)->
                 _padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
        &(Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseBlendSpace.OuterSingleton)->_padding_
       )) {
      return param_2;
    }
    return (FPoseSearchDatabaseBlendSpace *)0x0;
  }
  return param_2;
}

// GetStructPtr<FPoseSearchDatabaseMultiAnimAsset> @ 14a8a5b20

/* WARNING: Removing unreachable block (ram,0x00014a8a5bd6) */

FPoseSearchDatabaseMultiAnimAsset * __cdecl
UE::StructUtils::GetStructPtr<FPoseSearchDatabaseMultiAnimAsset>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UPackage *pUVar2;
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FPoseSearchDatabaseMultiAnimAsset *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset,
                         (UObject *)pUVar2,L"PoseSearchDatabaseMultiAnimAsset");
  }
  if (param_1 != Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset.OuterSingleton)
  {
    if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_PoseSearch();
      Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset,
                           (UObject *)pUVar2,L"PoseSearchDatabaseMultiAnimAsset");
      if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FPoseSearchDatabaseMultiAnimAsset *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset.OuterSingleton
                 )->_padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
        &(Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset.OuterSingleton)->
         _padding_)) {
      return param_2;
    }
    return (FPoseSearchDatabaseMultiAnimAsset *)0x0;
  }
  return param_2;
}

// GetStructPtr<FPoseSearchDatabaseSequence> @ 14a8a5c10

/* WARNING: Removing unreachable block (ram,0x00014a8a5cc6) */

FPoseSearchDatabaseSequence * __cdecl
UE::StructUtils::GetStructPtr<FPoseSearchDatabaseSequence>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UPackage *pUVar2;
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FPoseSearchDatabaseSequence *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseSequence.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseSequence.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence,(UObject *)pUVar2,
                         L"PoseSearchDatabaseSequence");
  }
  if (param_1 != Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseSequence.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseSequence.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_PoseSearch();
      Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseSequence.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence,(UObject *)pUVar2,
                           L"PoseSearchDatabaseSequence");
      if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseSequence.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FPoseSearchDatabaseSequence *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseSequence.OuterSingleton)->
                 _padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
        &(Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseSequence.OuterSingleton)->_padding_))
    {
      return param_2;
    }
    return (FPoseSearchDatabaseSequence *)0x0;
  }
  return param_2;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>::ForElementType<int>_> @ 14a8a7930

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>::ForElementType<int>_>
          (ushort param_1,ForElementType<int> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar3 = 0x100;
    if (0x100 < uVar1) {
      uVar3 = uVar2;
      if (uVar2 < 0x101) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>::ForElementType<int>::ResizeAllocation
              (param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_> @ 14a8a79d0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
          (ushort param_1,ForElementType<int> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    iVar8 = 0x200;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x200 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x201) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<FChooserEvaluationContext_*>_> @ 14a8a7aa0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<FChooserEvaluationContext_*>_>
          (ushort param_1,ForElementType<FChooserEvaluationContext_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<FChooserEvaluationContext_*>
    ::ResizeAllocation(param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::IPoseHistory_const_*>_> @ 14a8a7b40

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::IPoseHistory_const_*>_>
          (ushort param_1,ForElementType<UE::PoseSearch::IPoseHistory_const_*> *param_2,int *param_3
          )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::
    ForElementType<UE::PoseSearch::IPoseHistory_const_*>::ResizeAllocation
              (param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>::ForElementType<IPoseSearchFilter_const_*>_> @ 14a8a7be0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>::ForElementType<IPoseSearchFilter_const_*>_>
          (ushort param_1,ForElementType<IPoseSearchFilter_const_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    if (uVar1 < 0x41) {
      uVar3 = 0x40;
    }
    else {
      uVar3 = uVar2;
      if (uVar2 < 0x41) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>::ForElementType<IPoseSearchFilter_const_*>::
    ResizeAllocation(param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FCachedPCAQuery>_> @ 14a8a7c90

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FCachedPCAQuery>_>
          (ushort param_1,ForElementType<UE::PoseSearch::FCachedPCAQuery> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    if (uVar1 < 9) {
      uVar3 = 8;
    }
    else {
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::
    ForElementType<UE::PoseSearch::FCachedPCAQuery>::ResizeAllocation
              (param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::PoseSearch::FIndexDistance>_> @ 14a8a7d40

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::PoseSearch::FIndexDistance>_>
          (ushort param_1,ForElementType<UE::PoseSearch::FIndexDistance> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    iVar8 = 0x100;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x100 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x101) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::PoseSearch::FIndexDistance>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>::ForElementType<int>_> @ 14a8a7e10

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>::ForElementType<int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<int> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  uVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar4 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar3 = 0x100;
    if (0x100 < uVar1) {
      if (uVar4 < 0x101) {
        uVar4 = 0;
      }
      if (uVar4 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>::ForElementType<int>::ResizeAllocation
              (param_4,iVar2,uVar3,(ulonglong)param_1);
    *param_6 = uVar3;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<float>_> @ 14a8a7ec0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<float>_>
          (uint param_1,uint param_2,int param_3,ForElementType<float> *param_4,int *param_5,
          int *param_6)

{
  int iVar1;
  float *_Src;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *param_5;
  uVar3 = *param_6;
  uVar2 = iVar1 + param_3;
  *param_5 = uVar2;
  if ((uint)param_3 <= uVar3 - iVar1) {
    return iVar1;
  }
  if ((int)uVar2 < iVar1) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (uVar2 < 0x11) {
    _Src = (param_4->SecondaryData).Data;
    uVar3 = 0x10;
  }
  else {
    if (uVar3 < 0x11) {
      uVar3 = 0;
    }
    if (uVar3 == 0) {
      uVar3 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar2) {
        uVar3 = uVar2;
      }
    }
    else {
      uVar3 = (int)((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + 0x10 + uVar2;
    }
    if ((int)uVar3 < (int)uVar2) {
      uVar3 = 0x7fffffff;
    }
    _Src = (param_4->SecondaryData).Data;
    if (0x10 < uVar3) {
      if (_Src == (float *)0x0) {
        TMemStackAllocator<0>::ForElementType<float>::ResizeAllocation
                  (&param_4->SecondaryData,0,uVar3,(ulonglong)param_1);
        memmove((param_4->SecondaryData).Data,param_4,(longlong)iVar1 << 2);
      }
      else {
        TMemStackAllocator<0>::ForElementType<float>::ResizeAllocation
                  (&param_4->SecondaryData,iVar1,uVar3,(ulonglong)param_1);
      }
      goto LAB_14a8a7fa6;
    }
  }
  if (_Src != (float *)0x0) {
    memmove(param_4,_Src,(longlong)iVar1 << 2);
  }
LAB_14a8a7fa6:
  *param_6 = uVar3;
  return iVar1;
}

// ReallocGrow<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_> @ 14a8a7fe0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (uVar1 < 9) {
      uVar3 = 8;
    }
    else {
      if (uVar3 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>::ResizeAllocation
              (param_4,iVar2,uVar3,(ulonglong)param_1);
    *param_6 = uVar3;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>_> @ 14a8a8090

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = 4;
    uVar7 = (ulonglong)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar3 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>::ResizeAllocation
              (param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>_> @ 14a8a8160

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (uVar1 < 0x41) {
      uVar3 = 0x40;
    }
    else {
      if (uVar3 < 0x41) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>::ResizeAllocation
              (param_4,iVar2,uVar3,(ulonglong)param_1);
    *param_6 = uVar3;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,16>_>_>_> @ 14a8a8210

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,16>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,16>_>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (uVar1 < 0x41) {
      uVar3 = 0x40;
    }
    else {
      if (uVar3 < 0x41) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,16>_>_>::ResizeAllocation
              (param_4,iVar2,uVar3,(ulonglong)param_1);
    *param_6 = uVar3;
  }
  return iVar2;
}

// ReallocGrow<0,TMemStackAllocator<16>::ForElementType<float>_> @ 14a8a82c0

int __cdecl
UE::Core::Private::ReallocGrow<0,TMemStackAllocator<16>::ForElementType<float>_>
          (uint param_1,uint param_2,int param_3,ForElementType<float> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TMemStackAllocator<16>::ForElementType<float>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_> @ 14a8a8360

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
          (uint param_1,uint param_2,ForElementType<int> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  iVar2 = 0x200;
  if (0x200 < (uint)param_4) {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::PoseSearch::FIndexDistance>_> @ 14a8a8420

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::PoseSearch::FIndexDistance>_>
          (uint param_1,uint param_2,ForElementType<UE::PoseSearch::FIndexDistance> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  iVar2 = 0x100;
  if (0x100 < (uint)param_4) {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::PoseSearch::FIndexDistance>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<0,TMemStackAllocator<16>::ForElementType<float>_> @ 14a8a84e0

void __cdecl
UE::Core::Private::ReallocShrink<0,TMemStackAllocator<16>::ForElementType<float>_>
          (uint param_1,uint param_2,ForElementType<float> *param_3,int param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TMemStackAllocator<16>::ForElementType<float>::ResizeAllocation
              (param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>::ForElementType<int>_> @ 14a8a8550

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>::ForElementType<int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<int> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 0x100, 0x100 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 == *param_6) {
    return;
  }
  *param_6 = iVar1;
  TSizedInlineAllocator<256,32,TMemStackAllocator<0>_>::ForElementType<int>::ResizeAllocation
            (param_4,param_5,iVar1,(ulonglong)param_1);
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_> @ 14a8a8590

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 8, 8 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 == *param_6) {
    return;
  }
  *param_6 = iVar1;
  TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>::ResizeAllocation
            (param_4,param_5,iVar1,(ulonglong)param_1);
  return;
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>_> @ 14a8a85d0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>_> @ 14a8a8650

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 0x40, 0x40 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 == *param_6) {
    return;
  }
  *param_6 = iVar1;
  TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>::
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>::ResizeAllocation
            (param_4,param_5,iVar1,(ulonglong)param_1);
  return;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>_> @ 14a8a8690

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_> *param_4,
          int param_5,int *param_6)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_> *_Src;
  uint uVar1;
  
  uVar1 = param_3;
  if ((param_3 != 0) && (uVar1 = 0x10, 0x10 < (uint)param_3)) {
    uVar1 = param_3;
  }
  if (uVar1 != *param_6) {
    *param_6 = uVar1;
    _Src = (param_4->SecondaryData).Data;
    if (uVar1 < 0x11) {
      if (_Src != (TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_> *)0x0) {
        memmove(param_4,_Src,(longlong)param_5 * 0x28);
        return;
      }
    }
    else {
      if (_Src == (TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_> *)0x0) {
        TMemStackAllocator<0>::
        ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>::ResizeAllocation
                  (&param_4->SecondaryData,0,uVar1,(ulonglong)param_1);
        memmove((param_4->SecondaryData).Data,param_4,(longlong)param_5 * 0x28);
        return;
      }
      TMemStackAllocator<0>::
      ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>::ResizeAllocation
                (&param_4->SecondaryData,param_5,uVar1,(ulonglong)param_1);
    }
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<752,8>_>_>_> @ 14a8a8750

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<752,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<752,8>_>_> *param_4,
          int param_5,int *param_6)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<752,8>_> *_Src;
  uint uVar1;
  
  uVar1 = param_3;
  if ((param_3 != 0) && (uVar1 = 4, 4 < (uint)param_3)) {
    uVar1 = param_3;
  }
  if (uVar1 != *param_6) {
    *param_6 = uVar1;
    _Src = (param_4->SecondaryData).Data;
    if (uVar1 < 5) {
      if (_Src != (TSparseArrayElementOrFreeListLink<TAlignedBytes<752,8>_> *)0x0) {
        memmove(param_4,_Src,(longlong)param_5 * 0x2f0);
        return;
      }
    }
    else {
      if (_Src == (TSparseArrayElementOrFreeListLink<TAlignedBytes<752,8>_> *)0x0) {
        TMemStackAllocator<0>::
        ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<752,8>_>_>::ResizeAllocation
                  (&param_4->SecondaryData,0,uVar1,(ulonglong)param_1);
        memmove((param_4->SecondaryData).Data,param_4,(longlong)param_5 * 0x2f0);
        return;
      }
      TMemStackAllocator<0>::
      ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<752,8>_>_>::ResizeAllocation
                (&param_4->SecondaryData,param_5,uVar1,(ulonglong)param_1);
    }
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,16>_>_>_> @ 14a8a8810

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,16>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,16>_>_> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 0x40, 0x40 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 == *param_6) {
    return;
  }
  *param_6 = iVar1;
  TSizedInlineAllocator<64,32,TMemStackAllocator<0>_>::
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,16>_>_>::ResizeAllocation
            (param_4,param_5,iVar1,(ulonglong)param_1);
  return;
}

// Rehash<TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>_> @ 14a8a8850

void __cdecl
UE::Core::Private::
Rehash<TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>_>
          (ForElementType<FSetElementId> *param_1,int param_2)

{
  uchar *puVar1;
  ForElementType<FSetElementId> *pFVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> *pFVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if ((param_2 != 0) &&
     (TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>::
      ResizeAllocation(param_1,0,param_2,4), 0 < param_2)) {
    uVar6 = (ulonglong)(uint)param_2;
    uVar5 = 0;
    do {
      pFVar2 = (ForElementType<FSetElementId> *)(param_1->SecondaryData).Data;
      pFVar4 = param_1;
      if (pFVar2 != (ForElementType<FSetElementId> *)0x0) {
        pFVar4 = pFVar2;
      }
      uVar3 = uVar5 & (longlong)param_2 - 1U;
      uVar5 = uVar5 + 1;
      puVar1 = pFVar4->InlineData + uVar3 * 4;
      puVar1[0] = 0xff;
      puVar1[1] = 0xff;
      puVar1[2] = 0xff;
      puVar1[3] = 0xff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

// Rehash<TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>_> @ 14a8a88c0

void __cdecl
UE::Core::Private::
Rehash<TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>_>
          (ForElementType<FSetElementId> *param_1,int param_2)

{
  uchar *puVar1;
  ForElementType<FSetElementId> *pFVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> *pFVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if ((param_2 != 0) &&
     (TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>::
      ResizeAllocation(param_1,0,param_2,4), 0 < param_2)) {
    uVar6 = (ulonglong)(uint)param_2;
    uVar5 = 0;
    do {
      pFVar2 = (ForElementType<FSetElementId> *)(param_1->SecondaryData).Data;
      pFVar4 = param_1;
      if (pFVar2 != (ForElementType<FSetElementId> *)0x0) {
        pFVar4 = pFVar2;
      }
      uVar3 = uVar5 & (longlong)param_2 - 1U;
      uVar5 = uVar5 + 1;
      puVar1 = pFVar4->InlineData + uVar3 * 4;
      puVar1[0] = 0xff;
      puVar1[1] = 0xff;
      puVar1[2] = 0xff;
      puVar1[3] = 0xff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

// operator<< @ 14a8af280

FArchive * __cdecl UE::PoseSearch::operator<<(FArchive *param_1,FActiveColumnCost *param_2)

{
  float *pfVar1;
  int *piVar2;
  float *pfVar3;
  
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->RowIndex = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->RowCost;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar3 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar1 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
  return param_1;
}

// CopySubTree @ 14a8b22b0

void __cdecl UE::PoseSearch::CopySubTree(FKDTree *param_1,Node **param_2,Node **param_3)

{
  code *pcVar1;
  ulong64 uVar2;
  bool bVar3;
  Node *pNVar4;
  
  do {
    if (param_1->KDTreeImplementation == (FKDTreeImplementation *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("KDTree.KDTreeImplementation",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\KDTree.cpp"
                         ,0xae,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pNVar4 = nanoflann::PooledAllocator::
             allocate<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Node>
                       ((PooledAllocator *)&param_1->KDTreeImplementation->field_0x58,1);
    *param_2 = pNVar4;
    uVar2 = ((*param_3)->node_type).lr.right;
    (pNVar4->node_type).lr.left = ((*param_3)->node_type).lr.left;
    (pNVar4->node_type).lr.right = uVar2;
    if ((*param_3)->child1 == (Node *)0x0) {
      (*param_2)->child1 = (Node *)0x0;
    }
    else {
      CopySubTree(param_1,&(*param_2)->child1,&(*param_3)->child1);
    }
    param_3 = &(*param_3)->child2;
    param_2 = &(*param_2)->child2;
  } while (*param_3 != (Node *)0x0);
  *param_2 = (Node *)0x0;
  return;
}

// ExtractBlendSpaceRootMotion @ 14a8b4c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __cdecl
UE::PoseSearch::ExtractBlendSpaceRootMotion
          (TTransform<double> *__return_storage_ptr__,float param_1,float param_2,bool param_3,
          float param_4,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_5,
          int param_6)

{
  __m128d *p_Var1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined8 uVar19;
  undefined8 uVar20;
  ETypeAdvanceAnim EVar21;
  TTransform<double> *pTVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 auStackY_208 [32];
  float local_1d8 [4];
  char local_1c8;
  undefined4 local_1c4;
  undefined1 local_1b8 [80];
  __m128d local_168;
  TTransform<double> local_158;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_208;
  dVar7 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dVar8 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_1c8 = '\0';
  local_1c4 = 0;
  dVar10 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dVar11 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  dVar13 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  dVar14 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  dVar16 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dVar17 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar19 = (undefined8)GlobalVectorConstants::Float1110.m128_f32[0];
  uVar20 = (undefined8)GlobalVectorConstants::Float1110.m128_f32[1];
  uVar4 = (undefined8)GlobalVectorConstants::Float1110.m128_f32[2];
  dVar5 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_1b8._8_4_ = SUB84(dVar8,0);
  local_1b8._0_8_ = dVar7;
  local_1b8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  local_168.m128d_f64[1]._0_4_ = SUB84(dVar5,0);
  local_168.m128d_f64[0] = (double)uVar4;
  local_168.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_1b8._24_4_ = SUB84(dVar11,0);
  local_1b8._16_8_ = dVar10;
  local_1b8._28_4_ = (int)((ulonglong)dVar11 >> 0x20);
  local_1b8._40_4_ = SUB84(dVar14,0);
  local_1b8._32_8_ = dVar13;
  local_1b8._44_4_ = (int)((ulonglong)dVar14 >> 0x20);
  local_1b8._56_4_ = SUB84(dVar17,0);
  local_1b8._48_8_ = dVar16;
  local_1b8._60_4_ = (int)((ulonglong)dVar17 >> 0x20);
  local_1b8._72_4_ = (int)uVar20;
  local_1b8._64_8_ = uVar19;
  local_1b8._76_4_ = (int)((ulonglong)uVar20 >> 0x20);
  if (((__real_322bcc77 < (float)((uint)param_2 & __xmm_7fffffff7fffffff7fffffff7fffffff)) &&
      (__real_322bcc77 <= param_4)) && (1 < param_5->ArrayNum)) {
    bVar2 = 0.0 <= param_2;
    while( true ) {
      local_1d8[0] = param_1;
      EVar21 = FAnimationRuntime::AdvanceTime(false,param_2,local_1d8,param_4);
      pTVar22 = ExtractBlendSpaceRootMotionFromRange(&local_f8,param_1,local_1d8[0],param_5,param_6)
      ;
      if (local_1c8 == '\0') {
        local_1c8 = '\x01';
        uVar23 = *(undefined4 *)(pTVar22->Rotation).XY.m128d_f64;
        uVar24 = *(undefined4 *)((longlong)(pTVar22->Rotation).XY.m128d_f64 + 4);
        uVar25 = *(undefined4 *)((pTVar22->Rotation).XY.m128d_f64 + 1);
        uVar26 = *(undefined4 *)((longlong)(pTVar22->Rotation).XY.m128d_f64 + 0xc);
        local_1b8._0_16_ = *(undefined1 (*) [16])(pTVar22->Rotation).XY.m128d_f64;
        p_Var1 = &(pTVar22->Rotation).ZW;
        uVar27 = *(undefined4 *)p_Var1->m128d_f64;
        uVar28 = *(undefined4 *)((longlong)(pTVar22->Rotation).ZW.m128d_f64 + 4);
        uVar29 = *(undefined4 *)((pTVar22->Rotation).ZW.m128d_f64 + 1);
        uVar30 = *(undefined4 *)((longlong)(pTVar22->Rotation).ZW.m128d_f64 + 0xc);
        local_1b8._16_16_ = *(undefined1 (*) [16])p_Var1->m128d_f64;
        uVar31 = *(undefined4 *)(pTVar22->Translation).XY.m128d_f64;
        uVar32 = *(undefined4 *)((longlong)(pTVar22->Translation).XY.m128d_f64 + 4);
        uVar33 = *(undefined4 *)((pTVar22->Translation).XY.m128d_f64 + 1);
        uVar34 = *(undefined4 *)((longlong)(pTVar22->Translation).XY.m128d_f64 + 0xc);
        local_1b8._32_16_ = *(undefined1 (*) [16])(pTVar22->Translation).XY.m128d_f64;
        local_1c4 = 0x3f800000;
        uVar35 = *(undefined4 *)(pTVar22->Translation).ZW.m128d_f64;
        uVar36 = *(undefined4 *)((longlong)(pTVar22->Translation).ZW.m128d_f64 + 4);
        uVar37 = *(undefined4 *)((pTVar22->Translation).ZW.m128d_f64 + 1);
        uVar38 = *(undefined4 *)((longlong)(pTVar22->Translation).ZW.m128d_f64 + 0xc);
      }
      else {
        local_158.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_158.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_158.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_158.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_158.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_158.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_158.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_158.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_158.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_158.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_158.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_158.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_158.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_158.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_158.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_158.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_158.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_158.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_158,pTVar22,(TTransform<double> *)local_1b8);
        uVar23 = local_158.Rotation.XY.m128d_f64[0]._0_4_;
        uVar24 = local_158.Rotation.XY.m128d_f64[0]._4_4_;
        uVar25 = local_158.Rotation.XY.m128d_f64[1]._0_4_;
        uVar26 = local_158.Rotation.XY.m128d_f64[1]._4_4_;
        uVar27 = local_158.Rotation.ZW.m128d_f64[0]._0_4_;
        uVar28 = local_158.Rotation.ZW.m128d_f64[0]._4_4_;
        uVar29 = local_158.Rotation.ZW.m128d_f64[1]._0_4_;
        uVar30 = local_158.Rotation.ZW.m128d_f64[1]._4_4_;
        uVar31 = local_158.Translation.XY.m128d_f64[0]._0_4_;
        uVar32 = local_158.Translation.XY.m128d_f64[0]._4_4_;
        uVar33 = local_158.Translation.XY.m128d_f64[1]._0_4_;
        uVar34 = local_158.Translation.XY.m128d_f64[1]._4_4_;
        local_1b8._0_8_ = local_158.Rotation.XY.m128d_f64[0];
        local_1b8._8_8_ = local_158.Rotation.XY.m128d_f64[1];
        local_1b8._16_8_ = local_158.Rotation.ZW.m128d_f64[0];
        local_1b8._24_8_ = local_158.Rotation.ZW.m128d_f64[1];
        local_1b8._32_8_ = local_158.Translation.XY.m128d_f64[0];
        local_1b8._40_8_ = local_158.Translation.XY.m128d_f64[1];
        uVar35 = local_158.Translation.ZW.m128d_f64[0]._0_4_;
        uVar36 = local_158.Translation.ZW.m128d_f64[0]._4_4_;
        uVar37 = local_158.Translation.ZW.m128d_f64[1]._0_4_;
        uVar38 = local_158.Translation.ZW.m128d_f64[1]._4_4_;
      }
      dVar17 = (double)CONCAT44(uVar38,uVar37);
      dVar14 = (double)CONCAT44(uVar34,uVar33);
      dVar13 = (double)CONCAT44(uVar32,uVar31);
      dVar11 = (double)CONCAT44(uVar30,uVar29);
      dVar10 = (double)CONCAT44(uVar28,uVar27);
      dVar8 = (double)CONCAT44(uVar26,uVar25);
      dVar7 = (double)CONCAT44(uVar24,uVar23);
      dVar5 = 0.0;
      local_168.m128d_f64[1] = 0.0;
      local_168.m128d_f64[0] = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Z;
      dVar16 = (double)CONCAT44(uVar36,uVar35);
      local_1b8._56_4_ = uVar37;
      local_1b8._48_8_ = dVar16;
      local_1b8._60_4_ = uVar38;
      local_1b8._72_8_ = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Y;
      local_1b8._64_8_ = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.X;
      uVar19 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.X;
      uVar20 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Y;
      uVar4 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Z;
      if ((EVar21 != ETAA_Finished) || (!param_3)) break;
      param_2 = param_2 - (local_1d8[0] - param_1);
      param_1 = param_4;
      if (bVar2) {
        param_1 = 0.0;
      }
    }
  }
  auVar6._8_4_ = SUB84(dVar8,0);
  auVar6._0_8_ = dVar7;
  auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar6;
  auVar9._8_4_ = SUB84(dVar11,0);
  auVar9._0_8_ = dVar10;
  auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar9;
  auVar12._8_4_ = SUB84(dVar14,0);
  auVar12._0_8_ = dVar13;
  auVar12._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar12;
  auVar15._8_4_ = SUB84(dVar17,0);
  auVar15._0_8_ = dVar16;
  auVar15._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar15;
  auVar18._8_4_ = (int)uVar20;
  auVar18._0_8_ = uVar19;
  auVar18._12_4_ = (int)((ulonglong)uVar20 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar18;
  auVar3._8_4_ = SUB84(dVar5,0);
  auVar3._0_8_ = uVar4;
  auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar3;
  return __return_storage_ptr__;
}

// ExtractBlendSpaceRootMotionFromRange @ 14a8b4f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __cdecl
UE::PoseSearch::ExtractBlendSpaceRootMotionFromRange
          (TTransform<double> *__return_storage_ptr__,float param_1,float param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,int param_4)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  int iVar8;
  TTransform<double> *pTVar9;
  TTransform<double> *pTVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar26;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  undefined1 auStack_318 [32];
  TTransform<double> local_2f8;
  TTransform<double> local_298;
  TTransform<double> local_238;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_318;
  if (param_3->ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("AccumulatedRootTransform.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchAssetSampler.cpp"
                       ,0x62,L"ProcessRootTransform must be run first");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      pTVar9 = (TTransform<double> *)(*pcVar1)();
      return pTVar9;
    }
  }
  ExtractBlendSpaceRootTrackTransform(&local_2f8,0.0,param_3,param_4);
  ExtractBlendSpaceRootTrackTransform(&local_178,param_1,param_3,param_4);
  pTVar9 = &local_118;
  pTVar10 = ExtractBlendSpaceRootTrackTransform(pTVar9,param_2,param_3,param_4);
  auVar22._0_8_ =
       (double)CONCAT44(local_2f8.Scale3D.ZW.m128d_f64[0]._4_4_ &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        local_2f8.Scale3D.ZW.m128d_f64[0]._0_4_ &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar22._8_4_ = local_2f8.Scale3D.ZW.m128d_f64[1]._0_4_ & _UNK_15061cc88;
  auVar22._12_4_ = local_2f8.Scale3D.ZW.m128d_f64[1]._4_4_ & _UNK_15061cc8c;
  auVar32._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar22._8_8_);
  auVar32._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar22._0_8_);
  uVar39 = local_2f8.Scale3D.XY.m128d_f64[0]._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar40 = local_2f8.Scale3D.XY.m128d_f64[0]._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar41 = local_2f8.Scale3D.XY.m128d_f64[1]._0_4_ & _UNK_15061cc88;
  uVar42 = local_2f8.Scale3D.XY.m128d_f64[1]._4_4_ & _UNK_15061cc8c;
  uVar11 = movmskpd((int)pTVar9,auVar32);
  auVar19._8_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < (double)CONCAT44(uVar42,uVar41));
  auVar19._0_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < (double)CONCAT44(uVar40,uVar39));
  iVar8 = movmskpd((int)pTVar10,auVar19);
  if ((uVar11 & 0x3fffffff) == 0 && iVar8 == 0) {
    local_298.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_298.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_298.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_298.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_298.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_298.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    lVar12 = -(ulonglong)
              ((double)CONCAT44(local_2f8.Scale3D.ZW.m128d_f64[0]._4_4_ &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                local_2f8.Scale3D.ZW.m128d_f64[0]._0_4_ &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar19 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                    (undefined1  [16])local_2f8.Scale3D.XY.m128d_f64);
    lVar13 = -(ulonglong)
              ((double)CONCAT44(uVar40,uVar39) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar14 = -(ulonglong)
              ((double)CONCAT44(uVar42,uVar41) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    local_298.Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar13 & auVar19._0_4_;
    local_298.Scale3D.XY.m128d_f64[0]._4_4_ = ~(uint)((ulonglong)lVar13 >> 0x20) & auVar19._4_4_;
    local_298.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar14 & auVar19._8_4_;
    local_298.Scale3D.XY.m128d_f64[1]._4_4_ = ~(uint)((ulonglong)lVar14 >> 0x20) & auVar19._12_4_;
    auVar2._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar2._0_8_ = local_2f8.Scale3D.ZW.m128d_f64[0];
    auVar2._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar19 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar2);
    local_2f8.Rotation.ZW.m128d_f64[0] =
         local_2f8.Rotation.ZW.m128d_f64[0] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    local_2f8.Rotation.ZW.m128d_f64[1] =
         local_2f8.Rotation.ZW.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    uVar36 = (undefined4)((ulonglong)local_2f8.Rotation.ZW.m128d_f64[1] >> 0x20);
    local_298.Scale3D.ZW.m128d_f64[0] =
         (double)CONCAT44(~(uint)((ulonglong)lVar12 >> 0x20) & auVar19._4_4_,
                          ~(uint)lVar12 & auVar19._0_4_);
    local_2f8.Rotation.XY.m128d_f64[0] =
         local_2f8.Rotation.XY.m128d_f64[0] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    local_2f8.Rotation.XY.m128d_f64[1] =
         local_2f8.Rotation.XY.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    uVar37 = SUB84(local_2f8.Rotation.XY.m128d_f64[1],0);
    uVar38 = (undefined4)((ulonglong)local_2f8.Rotation.XY.m128d_f64[1] >> 0x20);
    local_2f8.Translation.XY.m128d_f64[0] =
         local_2f8.Translation.XY.m128d_f64[0] *
         (double)CONCAT44(local_298.Scale3D.XY.m128d_f64[0]._4_4_,
                          local_298.Scale3D.XY.m128d_f64[0]._0_4_);
    local_2f8.Translation.XY.m128d_f64[1] =
         local_2f8.Translation.XY.m128d_f64[1] *
         (double)CONCAT44(local_298.Scale3D.XY.m128d_f64[1]._4_4_,
                          local_298.Scale3D.XY.m128d_f64[1]._0_4_);
    auVar23._8_4_ = uVar37;
    auVar23._0_8_ = local_2f8.Rotation.XY.m128d_f64[0];
    auVar23._12_4_ = uVar38;
    dVar26 = auVar23._8_8_;
    auVar15._8_4_ = SUB84(local_2f8.Rotation.ZW.m128d_f64[0],0);
    auVar15._0_8_ = dVar26;
    auVar15._12_4_ = (int)((ulonglong)local_2f8.Rotation.ZW.m128d_f64[0] >> 0x20);
    auVar33._8_4_ = SUB84(local_2f8.Translation.XY.m128d_f64[1],0);
    auVar33._0_8_ = local_2f8.Translation.XY.m128d_f64[0];
    uVar29 = (undefined4)((ulonglong)local_2f8.Translation.XY.m128d_f64[1] >> 0x20);
    auVar33._12_4_ = uVar29;
    local_2f8.Translation.ZW.m128d_f64[0] =
         local_2f8.Translation.ZW.m128d_f64[0] * local_298.Scale3D.ZW.m128d_f64[0];
    local_2f8.Translation.ZW.m128d_f64[1] = local_2f8.Translation.ZW.m128d_f64[1] * 0.0;
    auVar31._8_4_ = uVar37;
    auVar31._0_8_ = local_2f8.Rotation.XY.m128d_f64[0];
    auVar31._12_4_ = uVar38;
    auVar20._8_4_ = SUB84(local_2f8.Translation.XY.m128d_f64[1],0);
    auVar20._0_8_ = local_2f8.Translation.XY.m128d_f64[0];
    auVar20._12_4_ = uVar29;
    auVar5._8_4_ = SUB84(local_2f8.Translation.ZW.m128d_f64[1],0);
    auVar5._0_8_ = local_2f8.Translation.ZW.m128d_f64[0];
    auVar5._12_4_ = (int)((ulonglong)local_2f8.Translation.ZW.m128d_f64[1] >> 0x20);
    auVar19 = blendpd(auVar20,auVar5,2);
    auVar34._0_8_ =
         auVar33._8_8_ * local_2f8.Rotation.XY.m128d_f64[0] -
         dVar26 * local_2f8.Translation.XY.m128d_f64[0];
    auVar34._8_8_ =
         local_2f8.Translation.ZW.m128d_f64[0] * local_2f8.Rotation.XY.m128d_f64[1] -
         auVar15._8_8_ * local_2f8.Translation.XY.m128d_f64[1];
    auVar6._8_4_ = SUB84(local_2f8.Rotation.ZW.m128d_f64[1],0);
    auVar6._0_8_ = local_2f8.Rotation.ZW.m128d_f64[0];
    auVar6._12_4_ = uVar36;
    auVar32 = blendpd(auVar31,auVar6,2);
    auVar21._0_8_ =
         auVar19._0_8_ * local_2f8.Rotation.ZW.m128d_f64[0] -
         auVar32._0_8_ * local_2f8.Translation.ZW.m128d_f64[0];
    auVar21._8_8_ =
         auVar19._8_8_ * local_2f8.Rotation.ZW.m128d_f64[1] -
         auVar32._8_8_ * local_2f8.Translation.ZW.m128d_f64[1];
    dVar3 = auVar34._8_8_ + auVar34._8_8_;
    dVar4 = auVar21._0_8_ + auVar21._0_8_;
    uVar29 = SUB84(dVar4,0);
    uVar30 = (undefined4)((ulonglong)dVar4 >> 0x20);
    auVar19 = blendpd(auVar34,auVar21,2);
    auVar35._0_8_ = auVar19._0_8_ + auVar19._0_8_;
    auVar35._8_8_ = auVar19._8_8_ + auVar19._8_8_;
    auVar27._8_4_ = uVar29;
    auVar27._0_8_ = dVar3;
    auVar27._12_4_ = uVar30;
    auVar16._8_4_ = uVar29;
    auVar16._0_8_ = dVar3;
    auVar16._12_4_ = uVar30;
    auVar24._8_4_ = uVar29;
    auVar24._0_8_ = dVar3;
    auVar24._12_4_ = uVar30;
    auVar19 = blendpd(auVar24,auVar35,2);
    auVar28._0_8_ = auVar27._8_8_ * local_2f8.Rotation.XY.m128d_f64[0] - dVar3 * dVar26;
    auVar28._8_8_ =
         auVar35._0_8_ * local_2f8.Rotation.XY.m128d_f64[1] -
         auVar16._8_8_ * local_2f8.Rotation.ZW.m128d_f64[0];
    auVar17._8_4_ = SUB84(auVar35._8_8_,0);
    auVar17._0_8_ = auVar35._0_8_;
    auVar17._12_4_ = (int)((ulonglong)auVar35._8_8_ >> 0x20);
    auVar25._0_8_ =
         auVar19._0_8_ * local_2f8.Rotation.ZW.m128d_f64[0] - auVar35._0_8_ * auVar32._0_8_;
    auVar25._8_8_ =
         auVar19._8_8_ * local_2f8.Rotation.ZW.m128d_f64[1] - auVar17._8_8_ * auVar32._8_8_;
    auVar18._8_4_ = SUB84(auVar28._8_8_,0);
    auVar18._0_8_ = auVar28._0_8_;
    auVar18._12_4_ = (int)((ulonglong)auVar28._8_8_ >> 0x20);
    auVar19 = blendpd(auVar28,auVar25,2);
    local_298.Rotation.XY.m128d_f64[1]._0_4_ = uVar37;
    local_298.Rotation.XY.m128d_f64[0] = local_2f8.Rotation.XY.m128d_f64[0];
    local_298.Rotation.XY.m128d_f64[1]._4_4_ = uVar38;
    local_298.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(local_2f8.Rotation.ZW.m128d_f64[1],0);
    local_298.Rotation.ZW.m128d_f64[0] = local_2f8.Rotation.ZW.m128d_f64[0];
    local_298.Rotation.ZW.m128d_f64[1]._4_4_ = uVar36;
    local_298.Translation.ZW.m128d_f64[1] = 0.0;
    local_298.Translation.ZW.m128d_f64[0] =
         0.0 - (auVar35._0_8_ * local_2f8.Rotation.ZW.m128d_f64[1] +
                local_2f8.Translation.ZW.m128d_f64[0] + auVar19._0_8_);
    local_298.Scale3D.ZW.m128d_f64[1] = 0.0;
    local_298.Translation.XY.m128d_f64[1] =
         0.0 - (dVar4 * local_2f8.Rotation.ZW.m128d_f64[1] + local_2f8.Translation.XY.m128d_f64[1] +
               auVar25._0_8_);
    local_298.Translation.XY.m128d_f64[0] =
         0.0 - (dVar3 * local_2f8.Rotation.ZW.m128d_f64[1] + local_2f8.Translation.XY.m128d_f64[0] +
               auVar18._8_8_);
  }
  local_238.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_238.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_238.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_238.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_238.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_238.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_238.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_238.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_238.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_238.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_238.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_238.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_238,&local_298,&local_178);
  local_178.Rotation.XY.m128d_f64[0] = local_238.Rotation.XY.m128d_f64[0];
  local_178.Rotation.XY.m128d_f64[1] = local_238.Rotation.XY.m128d_f64[1];
  local_178.Translation.XY.m128d_f64[0] = local_238.Translation.XY.m128d_f64[0];
  local_178.Translation.XY.m128d_f64[1] = local_238.Translation.XY.m128d_f64[1];
  local_178.Scale3D.XY.m128d_f64[0] = local_238.Scale3D.XY.m128d_f64[0];
  local_178.Scale3D.XY.m128d_f64[1] = local_238.Scale3D.XY.m128d_f64[1];
  local_1d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1d8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_178.Rotation.ZW.m128d_f64[0] = local_238.Rotation.ZW.m128d_f64[0];
  local_178.Rotation.ZW.m128d_f64[1] = local_238.Rotation.ZW.m128d_f64[1];
  local_1d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1d8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_178.Translation.ZW.m128d_f64[0] = local_238.Translation.ZW.m128d_f64[0];
  local_178.Translation.ZW.m128d_f64[1] = local_238.Translation.ZW.m128d_f64[1];
  local_178.Scale3D.ZW.m128d_f64[0] = local_238.Scale3D.ZW.m128d_f64[0];
  local_178.Scale3D.ZW.m128d_f64[1] = local_238.Scale3D.ZW.m128d_f64[1];
  local_1d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1d8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_1d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1d8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_1d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1d8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_1d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1d8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_1d8,&local_298,&local_118);
  local_118.Rotation.XY.m128d_f64[0] = local_1d8.Rotation.XY.m128d_f64[0];
  local_118.Rotation.XY.m128d_f64[1] = local_1d8.Rotation.XY.m128d_f64[1];
  local_118.Rotation.ZW.m128d_f64[0] = local_1d8.Rotation.ZW.m128d_f64[0];
  local_118.Rotation.ZW.m128d_f64[1] = local_1d8.Rotation.ZW.m128d_f64[1];
  local_118.Translation.XY.m128d_f64[0] = local_1d8.Translation.XY.m128d_f64[0];
  local_118.Translation.XY.m128d_f64[1] = local_1d8.Translation.XY.m128d_f64[1];
  local_118.Translation.ZW.m128d_f64[0] = local_1d8.Translation.ZW.m128d_f64[0];
  local_118.Translation.ZW.m128d_f64[1] = local_1d8.Translation.ZW.m128d_f64[1];
  local_118.Scale3D.XY.m128d_f64[0] = local_1d8.Scale3D.XY.m128d_f64[0];
  local_118.Scale3D.XY.m128d_f64[1] = local_1d8.Scale3D.XY.m128d_f64[1];
  local_118.Scale3D.ZW.m128d_f64[0] = local_1d8.Scale3D.ZW.m128d_f64[0];
  local_118.Scale3D.ZW.m128d_f64[1] = local_1d8.Scale3D.ZW.m128d_f64[1];
  UE::Math::TTransform<double>::GetRelativeTransform(&local_118,__return_storage_ptr__,&local_178);
  return __return_storage_ptr__;
}

// ExtractBlendSpaceRootTrackTransform @ 14a8b5430

TTransform<double> * __cdecl
UE::PoseSearch::ExtractBlendSpaceRootTrackTransform
          (TTransform<double> *__return_storage_ptr__,float param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  bool bVar10;
  TTransform<double> *pTVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  
  if (param_2->ArrayNum < 1) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("AccumulatedRootTransform.Num() > 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchAssetSampler.cpp"
                        ,0x55,L"ProcessRootTransform must be run first");
    if (bVar10) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TTransform<double> *)(*pcVar2)();
      return pTVar11;
    }
  }
  uVar13 = param_2->ArrayNum - 1;
  uVar12 = (uint)((float)param_3 * param_1);
  uVar14 = uVar13;
  if ((int)uVar12 < (int)uVar13) {
    uVar14 = uVar12;
  }
  uVar9 = 0;
  if (0 < (int)uVar14) {
    uVar9 = uVar14;
  }
  if ((int)(uVar12 + 1) < (int)uVar13) {
    uVar13 = uVar12 + 1;
  }
  uVar14 = 0;
  if (0 < (int)uVar13) {
    uVar14 = uVar13;
  }
  fVar15 = FGenericPlatformMath::Fmod((float)param_3 * param_1,__real_3f800000);
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar4,0);
  auVar7._0_8_ = (double)fVar3;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar7;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar8;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar3;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)fVar4;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar3;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)fVar5;
  uVar13 = 0;
  if ((int)uVar14 < param_2->ArrayNum) {
    uVar13 = ~uVar14 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TTransform<double> *)(*pcVar2)();
      return pTVar11;
    }
  }
  pFVar1 = (param_2->AllocatorInstance).Data;
  uVar13 = 0;
  if ((int)uVar9 < param_2->ArrayNum) {
    uVar13 = ~uVar9 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TTransform<double> *)(*pcVar2)();
      return pTVar11;
    }
  }
  UE::Math::TTransform<double>::Blend
            (__return_storage_ptr__,
             (TTransform<double> *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x60)
             ,(TTransform<double> *)(pFVar1 + (longlong)(int)uVar14 * 0x60),fVar15);
  return __return_storage_ptr__;
}

// ExtractRootTransformInternal @ 14a8b6f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TTransform<double> * __cdecl
UE::PoseSearch::ExtractRootTransformInternal
          (TTransform<double> *__return_storage_ptr__,UAnimMontage *param_1,float param_2,
          float param_3,bool param_4)

{
  int iVar1;
  TTransform<double> *pTVar2;
  ForAnyElementType FVar3;
  FScriptContainerElement *pFVar4;
  undefined1 auStackY_228 [32];
  undefined1 local_1f8 [8];
  TArray<FRootMotionExtractionStep,TSizedDefaultAllocator<32>_> local_1f0;
  FName local_1e0 [2];
  FString local_1d0;
  FAnimExtractContext local_1b8;
  char local_168;
  undefined4 local_164;
  undefined1 local_158 [72];
  double dStack_110;
  __m128d local_108;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if ((param_1->SlotAnimTracks).ArrayNum == 1) {
    local_1b8.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.PoseCurves.ArrayNum = 0;
    local_1b8.PoseCurves.ArrayMax = 0;
    local_1b8.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.BonesRequired.ArrayNum = 0;
    local_1b8.BonesRequired.ArrayMax = 0;
    local_1b8.InterpolationOverride.bIsSet = false;
    local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f0.ArrayNum = 0;
    local_1f0.ArrayMax = 0;
    local_1b8.CurrentTime = 0.0;
    local_1b8.bExtractRootMotion = true;
    local_1b8.DeltaTimeRecord.Previous = 0.0;
    local_1b8.DeltaTimeRecord.bPreviousIsValid = false;
    local_1b8.bLooping = true;
    local_1b8.DeltaTimeRecord.Delta = param_2;
    FAnimTrack::GetRootMotionExtractionStepsForTrackRange
              ((FAnimTrack *)((param_1->SlotAnimTracks).AllocatorInstance.Data + 8),&local_1f0,
               param_2,param_3);
    iVar1 = local_1f0.ArrayNum;
    pFVar4 = local_1f0.AllocatorInstance.Data + (longlong)local_1f0.ArrayNum * 0x10;
    local_168 = '\0';
    local_164 = 0;
    local_158._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_158._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_158._12_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_158._24_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_158._16_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_158._28_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_158._40_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_158._32_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_158._44_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_158._56_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_158._48_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_158._60_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    unique0x1000044d = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_158._64_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    unique0x10000451 =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_108.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_108.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_108.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    FVar3.Data = local_1f0.AllocatorInstance.Data;
    while( true ) {
      if (local_1f0.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FRootMotionExtractionStep,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1f8);
      }
      if (FVar3.Data == pFVar4) break;
      if (*(UAnimSequence **)FVar3.Data != (UAnimSequence *)0x0) {
        pTVar2 = UAnimSequence::ExtractRootMotionFromRange
                           (*(UAnimSequence **)FVar3.Data,&local_98,
                            (double)*(float *)(FVar3.Data + 8),(double)*(float *)(FVar3.Data + 0xc),
                            &local_1b8);
        if (local_168 == '\0') {
          local_168 = '\x01';
          local_158._0_16_ = *(undefined1 (*) [16])(pTVar2->Rotation).XY.m128d_f64;
          local_158._16_16_ = *(undefined1 (*) [16])(pTVar2->Rotation).ZW.m128d_f64;
          local_158._32_16_ = *(undefined1 (*) [16])(pTVar2->Translation).XY.m128d_f64;
          local_164 = 0x3f800000;
          local_158._48_4_ = *(undefined4 *)(pTVar2->Translation).ZW.m128d_f64;
          local_158._52_4_ = *(undefined4 *)((longlong)(pTVar2->Translation).ZW.m128d_f64 + 4);
          local_158._56_4_ = *(undefined4 *)((pTVar2->Translation).ZW.m128d_f64 + 1);
          local_158._60_4_ = *(undefined4 *)((longlong)(pTVar2->Translation).ZW.m128d_f64 + 0xc);
        }
        else {
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
          local_f8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_f8.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_f8.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_f8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
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
          UE::Math::TTransform<double>::Multiply(&local_f8,pTVar2,(TTransform<double> *)local_158);
          local_158._0_8_ = local_f8.Rotation.XY.m128d_f64[0];
          local_158._8_8_ = local_f8.Rotation.XY.m128d_f64[1];
          local_158._16_8_ = local_f8.Rotation.ZW.m128d_f64[0];
          local_158._24_8_ = local_f8.Rotation.ZW.m128d_f64[1];
          local_158._32_8_ = local_f8.Translation.XY.m128d_f64[0];
          local_158._40_8_ = local_f8.Translation.XY.m128d_f64[1];
          local_158._48_4_ = local_f8.Translation.ZW.m128d_f64[0]._0_4_;
          local_158._52_4_ = local_f8.Translation.ZW.m128d_f64[0]._4_4_;
          local_158._56_4_ = local_f8.Translation.ZW.m128d_f64[1]._0_4_;
          local_158._60_4_ = local_f8.Translation.ZW.m128d_f64[1]._4_4_;
        }
        dStack_110 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Y;
        local_158._64_8_ = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.X;
        local_108.m128d_f64[1] = 0.0;
        local_108.m128d_f64[0] = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Z;
      }
      FVar3.Data = FVar3.Data + 0x10;
    }
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (double)local_158._0_8_;
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)local_158._8_8_;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)local_158._16_8_;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)local_158._24_8_;
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (double)local_158._32_8_;
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)local_158._40_8_;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)local_158._48_8_;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)local_158._56_8_;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (double)local_158._64_8_;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dStack_110;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_108.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_108.m128d_f64[1];
    if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.AllocatorInstance.Data);
    }
    if (local_1b8.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.BonesRequired.AllocatorInstance.Data);
    }
    if (local_1b8.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.PoseCurves.AllocatorInstance.Data);
    }
  }
  else {
    if (1 < (byte)LogPoseSearch._0_1_) {
      local_1e0[0] = (FName)param_1->_padding_;
      ::FName::ToString(local_1e0,&local_1d0);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
    }
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  return __return_storage_ptr__;
}

// ExtrapolateRootMotion @ 14a8b7dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __cdecl
UE::PoseSearch::ExtrapolateRootMotion
          (TTransform<double> *__return_storage_ptr__,TTransform<double> *param_1,float param_2,
          float param_3,float param_4)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  undefined7 extraout_var;
  TTransform<double> *pTVar11;
  uint uVar12;
  char *pcVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
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
  undefined1 auStack_308 [32];
  float local_2e8 [4];
  TTransform<double> local_2d8;
  TTransform<double> local_278;
  TTransform<double> local_218;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  uVar10 = __security_cookie.value ^ (ulonglong)auStack_308;
  fVar17 = (float)((uint)(param_3 - param_2) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  pcVar13 = (char *)param_1;
  local_98 = uVar10;
  if (fVar17 <= __real_322bcc77) {
    pcVar13 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchAssetSampler.cpp"
    ;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!FMath::IsNearlyZero(SampleDelta)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchAssetSampler.cpp"
                       ,0x16,L"");
    uVar10 = CONCAT71(extraout_var,bVar8);
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      pTVar11 = (TTransform<double> *)(*pcVar1)();
      return pTVar11;
    }
  }
  fVar20 = (float)((uint)param_4 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (param_4 < 0.0) {
    auVar16._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                          *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4),
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                          *(uint *)(param_1->Scale3D).XY.m128d_f64);
    auVar16._8_4_ = _UNK_15061cc88 & *(uint *)((param_1->Scale3D).XY.m128d_f64 + 1);
    auVar16._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc);
    lVar14 = -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
              (double)CONCAT44(_UNK_15061cc8c &
                               *(uint *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 0xc),
                               _UNK_15061cc88 & *(uint *)((param_1->Scale3D).ZW.m128d_f64 + 1)));
    auVar7._8_4_ = (int)lVar14;
    auVar7._0_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                    (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                     *(uint *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 4),
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                     *(uint *)(param_1->Scale3D).ZW.m128d_f64));
    auVar7._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
    uVar12 = movmskpd((int)pcVar13,auVar7);
    auVar15._8_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar16._8_8_);
    auVar15._0_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar16._0_8_);
    iVar9 = movmskpd((int)uVar10,auVar15);
    if ((uVar12 & 0x3fffffff) == 0 && iVar9 == 0) {
      local_2d8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_2d8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_2d8.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_2d8.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_2d8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_2d8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      UE::Math::TTransform<double>::InverseFast(param_1,&local_2d8);
    }
    pTVar11 = &local_2d8;
  }
  else {
    pTVar11 = &local_278;
    local_278.Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
    local_278.Rotation.XY.m128d_f64[1] = (param_1->Rotation).XY.m128d_f64[1];
    local_278.Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
    local_278.Rotation.ZW.m128d_f64[1] = (param_1->Rotation).ZW.m128d_f64[1];
    local_278.Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
    local_278.Translation.XY.m128d_f64[1] = (param_1->Translation).XY.m128d_f64[1];
    local_278.Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
    local_278.Translation.ZW.m128d_f64[1] = (param_1->Translation).ZW.m128d_f64[1];
    local_278.Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
    local_278.Scale3D.XY.m128d_f64[1] = (param_1->Scale3D).XY.m128d_f64[1];
    local_278.Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
    local_278.Scale3D.ZW.m128d_f64[1] = (param_1->Scale3D).ZW.m128d_f64[1];
  }
  local_158.Rotation.XY.m128d_f64[0] = (pTVar11->Rotation).XY.m128d_f64[0];
  local_158.Rotation.XY.m128d_f64[1] = (pTVar11->Rotation).XY.m128d_f64[1];
  local_158.Rotation.ZW.m128d_f64[0] = (pTVar11->Rotation).ZW.m128d_f64[0];
  local_158.Rotation.ZW.m128d_f64[1] = (pTVar11->Rotation).ZW.m128d_f64[1];
  local_158.Translation.XY.m128d_f64[0] = (pTVar11->Translation).XY.m128d_f64[0];
  local_158.Translation.XY.m128d_f64[1] = (pTVar11->Translation).XY.m128d_f64[1];
  local_158.Translation.ZW.m128d_f64[0] = (pTVar11->Translation).ZW.m128d_f64[0];
  local_158.Translation.ZW.m128d_f64[1] = (pTVar11->Translation).ZW.m128d_f64[1];
  local_158.Scale3D.XY.m128d_f64[0] = (pTVar11->Scale3D).XY.m128d_f64[0];
  local_158.Scale3D.XY.m128d_f64[1] = (pTVar11->Scale3D).XY.m128d_f64[1];
  local_158.Scale3D.ZW.m128d_f64[0] = (pTVar11->Scale3D).ZW.m128d_f64[0];
  local_158.Scale3D.ZW.m128d_f64[1] = (pTVar11->Scale3D).ZW.m128d_f64[1];
  fVar17 = modff(fVar20 / fVar17,local_2e8);
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  if (0 < (int)local_2e8[0]) {
    uVar10 = (ulonglong)(uint)(int)local_2e8[0];
    do {
      local_218.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_218.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_218.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_218.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_218.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_218.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_218.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_218.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_218.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_218.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_218.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_218.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_218.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_218.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_218,&local_158,__return_storage_ptr__);
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_218.Rotation.XY.m128d_f64[0];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_218.Rotation.XY.m128d_f64[1];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_218.Rotation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_218.Rotation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_218.Translation.XY.m128d_f64[0];
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_218.Translation.XY.m128d_f64[1];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_218.Translation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_218.Translation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_218.Scale3D.XY.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_218.Scale3D.XY.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_218.Scale3D.ZW.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_218.Scale3D.ZW.m128d_f64[1];
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[0];
  uVar29 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar30 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  fVar20 = GlobalVectorConstants::Float0001.m128_f32[2];
  uVar27 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar28 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[0];
  uVar25 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  uVar26 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  uVar23 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  uVar24 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  uVar21 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar22 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  uVar18 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar19 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_f8.Rotation.XY.m128d_f64[1]._0_4_ = uVar29;
  local_f8.Rotation.XY.m128d_f64[0] = (double)fVar4;
  local_f8.Rotation.XY.m128d_f64[1]._4_4_ = uVar30;
  local_f8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar18;
  local_f8.Scale3D.ZW.m128d_f64[0] = (double)fVar3;
  local_f8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar19;
  local_f8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar27;
  local_f8.Rotation.ZW.m128d_f64[0] = (double)fVar20;
  local_f8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar28;
  local_f8.Translation.XY.m128d_f64[1]._0_4_ = uVar25;
  local_f8.Translation.XY.m128d_f64[0] = (double)fVar5;
  local_f8.Translation.XY.m128d_f64[1]._4_4_ = uVar26;
  local_f8.Translation.ZW.m128d_f64[1]._0_4_ = uVar23;
  local_f8.Translation.ZW.m128d_f64[0] = (double)fVar2;
  local_f8.Translation.ZW.m128d_f64[1]._4_4_ = uVar24;
  local_f8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar21;
  local_f8.Scale3D.XY.m128d_f64[0] = (double)fVar6;
  local_f8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar22;
  UE::Math::TTransform<double>::Blend
            (&local_f8,&UE::Math::TTransform<double>::Identity,&local_158,fVar17);
  local_1b8.Rotation.XY.m128d_f64[1]._0_4_ = uVar29;
  local_1b8.Rotation.XY.m128d_f64[0] = (double)fVar4;
  local_1b8.Rotation.XY.m128d_f64[1]._4_4_ = uVar30;
  local_1b8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar27;
  local_1b8.Rotation.ZW.m128d_f64[0] = (double)fVar20;
  local_1b8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar28;
  local_1b8.Translation.XY.m128d_f64[1]._0_4_ = uVar25;
  local_1b8.Translation.XY.m128d_f64[0] = (double)fVar5;
  local_1b8.Translation.XY.m128d_f64[1]._4_4_ = uVar26;
  local_1b8.Translation.ZW.m128d_f64[1]._0_4_ = uVar23;
  local_1b8.Translation.ZW.m128d_f64[0] = (double)fVar2;
  local_1b8.Translation.ZW.m128d_f64[1]._4_4_ = uVar24;
  local_1b8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar21;
  local_1b8.Scale3D.XY.m128d_f64[0] = (double)fVar6;
  local_1b8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar22;
  local_1b8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar18;
  local_1b8.Scale3D.ZW.m128d_f64[0] = (double)fVar3;
  local_1b8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar19;
  UE::Math::TTransform<double>::Multiply(&local_1b8,&local_f8,__return_storage_ptr__);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_1b8.Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_1b8.Rotation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_1b8.Rotation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_1b8.Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_1b8.Translation.XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_1b8.Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_1b8.Translation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_1b8.Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_1b8.Scale3D.XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_1b8.Scale3D.XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_1b8.Scale3D.ZW.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_1b8.Scale3D.ZW.m128d_f64[1];
  return __return_storage_ptr__;
}

// GetAnimInstanceProxy @ 14a8b9670

FAnimInstanceProxy * __cdecl
UE::PoseSearch::GetAnimInstanceProxy(TArrayView<FChooserEvaluationContext_*_const,int> *param_1)

{
  int iVar1;
  FChooserEvaluationContext *pFVar2;
  UAnimInstance *this;
  code *pcVar3;
  bool bVar4;
  FChooserEvaluationContext **ppFVar5;
  FAnimInstanceProxy *pFVar6;
  UClass *pUVar7;
  USkeletalMeshComponent *pUVar8;
  
  if (param_1->ArrayNum == 0) {
    return (FAnimInstanceProxy *)0x0;
  }
  ppFVar5 = TArrayView<FChooserEvaluationContext_*_const,int>::operator[](param_1,0);
  pFVar2 = *ppFVar5;
  pFVar6 = (FAnimInstanceProxy *)0x0;
  if (0 < (pFVar2->ObjectParams).ArrayNum) {
    if (((pFVar2->ObjectParams).ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FAnimInstanceProxy *)(*pcVar3)();
      return pFVar6;
    }
    this = *(UAnimInstance **)(pFVar2->ObjectParams).AllocatorInstance.InlineData[0].Pad;
    if (GC::GIsIncrementalReachabilityPending != false) {
      if (this == (UAnimInstance *)0x0) {
        return (FAnimInstanceProxy *)0x0;
      }
      GC::MarkAsReachable((UObject *)this);
    }
    if (this != (UAnimInstance *)0x0) {
      pUVar7 = Z_Construct_UClass_UAnimInstance_NoRegister();
      iVar1 = (int)pUVar7->_padding_;
      pFVar6 = (FAnimInstanceProxy *)0x0;
      if ((iVar1 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar7->_padding_)) {
        bVar4 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this->field_0x20);
        if ((bVar4) && (bVar4 = IsInGameThread(), bVar4)) {
          pUVar8 = UAnimInstance::GetSkelMeshComponentChecked(this);
          UAnimInstance::HandleExistingParallelEvaluationTask(pUVar8);
        }
        pFVar6 = this->AnimInstanceProxy;
        if (pFVar6 == (FAnimInstanceProxy *)0x0) {
          pFVar6 = (FAnimInstanceProxy *)(**(code **)(*(longlong *)this + 0x378))(this);
          this->AnimInstanceProxy = pFVar6;
        }
      }
    }
  }
  return pFVar6;
}

// GetBoneContainer @ 14a8b9e20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FBoneContainer * __cdecl
UE::PoseSearch::GetBoneContainer
          (FBoneContainer *__return_storage_ptr__,UObject *param_1,bool param_2)

{
  int iVar1;
  AActor *this;
  code *pcVar2;
  bool bVar3;
  FBoneContainer *pFVar4;
  UClass *pUVar5;
  USkeletalMeshComponent *this_00;
  USkeletalMesh *pUVar6;
  UObject *pUVar7;
  FCurveFilterSettings local_28;
  TArrayView<unsigned_short_const_,int> local_18;
  
  if (param_2) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bCheckIsInGameThread || IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                         ,0x68,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FBoneContainer *)(*pcVar2)();
        return pFVar4;
      }
    }
  }
  if (param_1 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UAnimInstance_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      pFVar4 = UAnimInstance::GetRequiredBonesOnAnyThread((UAnimInstance *)param_1);
      FBoneContainer::FBoneContainer(__return_storage_ptr__,pFVar4);
      return __return_storage_ptr__;
    }
    if (param_1 != (UObject *)0x0) {
      pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        this = *(AActor **)&param_1[4].field_0x8;
        if (this == (AActor *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Actor",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                             ,0x72,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pFVar4 = (FBoneContainer *)(*pcVar2)();
            return pFVar4;
          }
        }
        this_00 = AActor::GetComponentByClass<USkeletalMeshComponent>(this);
        if (this_00 != (USkeletalMeshComponent *)0x0) {
          pUVar6 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
          if (pUVar6 != (USkeletalMesh *)0x0) {
            pUVar7 = (UObject *)(**(code **)(pUVar6->_padding_ + 0x408))(pUVar6);
            local_18.DataPtr = (ushort *)(this_00->RequiredBones).AllocatorInstance.Data;
            local_18.ArrayNum = (this_00->RequiredBones).ArrayNum;
            local_28.FilterCurves = (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
            local_28.FilterMode = DisallowAll;
            local_28.LODIndex = 0;
            if (local_18.ArrayNum < 0) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L"");
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                pFVar4 = (FBoneContainer *)(*pcVar2)();
                return pFVar4;
              }
            }
            FBoneContainer::FBoneContainer(__return_storage_ptr__,&local_18,&local_28,pUVar7);
            return __return_storage_ptr__;
          }
        }
        goto LAB_14a8b9ff2;
      }
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                     ,0x7e,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FBoneContainer *)(*pcVar2)();
    return pFVar4;
  }
LAB_14a8b9ff2:
  FBoneContainer::FBoneContainer(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetContextLocation @ 14a8ba4c0

TVector<double> * __cdecl
UE::PoseSearch::GetContextLocation
          (TVector<double> *__return_storage_ptr__,UObject *param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  TTransform<double> *pTVar3;
  
  pTVar3 = GetContextTransform(param_1,param_2);
  dVar2 = (pTVar3->Translation).XY.m128d_f64[1];
  dVar1 = (pTVar3->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar3->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetContextOwningActor @ 14a8ba500

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __cdecl UE::PoseSearch::GetContextOwningActor(UObject *param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  AActor *pAVar4;
  UClass *pUVar5;
  
  if (param_2) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bCheckIsInGameThread || IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                         ,0x84,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pAVar4 = (AActor *)(*pcVar2)();
        return pAVar4;
      }
    }
  }
  if (param_1 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UAnimInstance_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      pAVar4 = UAnimInstance::GetOwningActor((UAnimInstance *)param_1);
      return pAVar4;
    }
    if (param_1 != (UObject *)0x0) {
      pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return *(AActor **)&param_1[4].field_0x8;
      }
    }
  }
  return (AActor *)0x0;
}

// GetContextSkeletalMeshComponent @ 14a8ba5c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USkeletalMeshComponent * __cdecl
UE::PoseSearch::GetContextSkeletalMeshComponent(UObject *param_1,bool param_2)

{
  int iVar1;
  AActor *this;
  code *pcVar2;
  bool bVar3;
  USkeletalMeshComponent *pUVar4;
  UClass *pUVar5;
  
  if (((param_2) && (bVar3 = IsInGameThread(), !bVar3)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bCheckIsInGameThread || IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                         ,0x53,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (USkeletalMeshComponent *)(*pcVar2)();
    return pUVar4;
  }
  if (param_1 == (UObject *)0x0) goto LAB_14a8ba6a2;
  pUVar5 = Z_Construct_UClass_UAnimInstance_NoRegister();
  iVar1 = (int)pUVar5->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_)) {
    if (param_1 == (UObject *)0x0) goto LAB_14a8ba6a2;
    pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14a8ba6a2;
    this = *(AActor **)&param_1[4].field_0x8;
    if ((this == (AActor *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Actor",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                           ,0x5d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (USkeletalMeshComponent *)(*pcVar2)();
      return pUVar4;
    }
    pUVar4 = AActor::GetComponentByClass<USkeletalMeshComponent>(this);
  }
  else {
    pUVar4 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)param_1);
  }
  if (pUVar4 != (USkeletalMeshComponent *)0x0) {
    return pUVar4;
  }
LAB_14a8ba6a2:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("SkeletalMeshComponent",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                     ,0x62,L"");
  if (!bVar3) {
    return (USkeletalMeshComponent *)0x0;
  }
  pcVar2 = (code *)swi(3);
  pUVar4 = (USkeletalMeshComponent *)(*pcVar2)();
  return pUVar4;
}

// GetContextSkeleton @ 14a8ba6e0

USkeleton * __cdecl
UE::PoseSearch::GetContextSkeleton(FChooserEvaluationContext *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  USkeleton *pUVar3;
  
  if (param_2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bCheckIsInGameThread || IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                         ,0x4b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (USkeleton *)(*pcVar1)();
        return pUVar3;
      }
    }
  }
  if ((param_1->ObjectParams).ArrayNum == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Context.ObjectParams.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                       ,0x4c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (USkeleton *)(*pcVar1)();
      return pUVar3;
    }
  }
  if ((param_1->ObjectParams).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (USkeleton *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar3 = GetContextSkeleton(*(UObject **)
                               (param_1->ObjectParams).AllocatorInstance.InlineData[0].Pad,param_2);
  return pUVar3;
}

// GetContextSkeleton @ 14a8ba7b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USkeleton * __cdecl UE::PoseSearch::GetContextSkeleton(UObject *param_1,bool param_2)

{
  int iVar1;
  AActor *this;
  code *pcVar2;
  bool bVar3;
  USkeleton *pUVar4;
  UClass *pUVar5;
  FBoneContainer *pFVar6;
  USkeletalMeshComponent *this_00;
  USkeletalMesh *pUVar7;
  
  if (((param_2) && (bVar3 = IsInGameThread(), !bVar3)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bCheckIsInGameThread || IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                         ,0x30,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (USkeleton *)(*pcVar2)();
    return pUVar4;
  }
  if (param_1 == (UObject *)0x0) goto LAB_14a8ba8c3;
  pUVar5 = Z_Construct_UClass_UAnimInstance_NoRegister();
  iVar1 = (int)pUVar5->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_)) {
    if (param_1 == (UObject *)0x0) goto LAB_14a8ba8c3;
    pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14a8ba8c3;
    this = *(AActor **)&param_1[4].field_0x8;
    if ((this == (AActor *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Actor",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                           ,0x3a,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (USkeleton *)(*pcVar2)();
      return pUVar4;
    }
    this_00 = AActor::GetComponentByClass<USkeletalMeshComponent>(this);
    if ((this_00 == (USkeletalMeshComponent *)0x0) ||
       (pUVar7 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00),
       pUVar7 == (USkeletalMesh *)0x0)) goto LAB_14a8ba8c3;
    pUVar4 = (USkeleton *)(**(code **)(pUVar7->_padding_ + 0x400))(pUVar7);
  }
  else {
    pFVar6 = UAnimInstance::GetRequiredBonesOnAnyThread((UAnimInstance *)param_1);
    pUVar4 = (USkeleton *)FWeakObjectPtr::Get(&(pFVar6->AssetSkeleton).WeakPtr);
  }
  if (pUVar4 != (USkeleton *)0x0) {
    return pUVar4;
  }
LAB_14a8ba8c3:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Skeleton",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                     ,0x45,L"");
  if (!bVar3) {
    return (USkeleton *)0x0;
  }
  pcVar2 = (code *)swi(3);
  pUVar4 = (USkeleton *)(*pcVar2)();
  return pUVar4;
}

// GetContextTransform @ 14a8ba900

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTransform<double> * __cdecl UE::PoseSearch::GetContextTransform(UObject *param_1,bool param_2)

{
  int iVar1;
  AActor *this;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TTransform<double> *pTVar5;
  UClass *pUVar6;
  USkeletalMeshComponent *pUVar7;
  
  if (((param_2) && (bVar4 = IsInGameThread(), !bVar4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bCheckIsInGameThread || IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                         ,0x16,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TTransform<double> *)(*pcVar3)();
    return pTVar5;
  }
  if (param_1 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UAnimInstance_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) {
      pUVar7 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)param_1);
LAB_14a8ba970:
      return (TTransform<double> *)&pUVar7->_padding_;
    }
    if (param_1 != (UObject *)0x0) {
      pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) {
        this = *(AActor **)&param_1[4].field_0x8;
        if ((this == (AActor *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Actor",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                               ,0x20,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar5 = (TTransform<double> *)(*pcVar3)();
          return pTVar5;
        }
        pUVar7 = AActor::GetComponentByClass<USkeletalMeshComponent>(this);
        if (pUVar7 == (USkeletalMeshComponent *)0x0) {
          lVar2 = *(longlong *)(*(longlong *)&param_1[4].field_0x8 + 0x1b8);
          if (lVar2 == 0) {
            return &UE::Math::TTransform<double>::Identity;
          }
          return (TTransform<double> *)(lVar2 + 0x1f0);
        }
        goto LAB_14a8ba970;
      }
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                     ,0x2a,L"");
  if (!bVar4) {
    return &UE::Math::TTransform<double>::Identity;
  }
  pcVar3 = (code *)swi(3);
  pTVar5 = (TTransform<double> *)(*pcVar3)();
  return pTVar5;
}

// GetDatabaseAssetIndex @ 14a8baaf0

int __cdecl UE::PoseSearch::GetDatabaseAssetIndex(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == -2) {
    return 0;
  }
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RowIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\Chooser\\PoseSearchChooserColumn.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return param_1 + 1;
}

// GetHighestWeightSample @ 14a8bac70

int __cdecl
UE::PoseSearch::GetHighestWeightSample
          (TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  
  if ((param_1->ArrayNum == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!SampleDataList.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchAssetSampler.cpp"
                         ,0xe2,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  uVar6 = 0;
  if ((param_1->ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  fVar2 = __real_3f800000;
  uVar7 = 1;
  iVar4 = param_1->ArrayNum;
  fVar10 = *(float *)((param_1->AllocatorInstance).Data + 0x10);
  if (__real_3f800000 <= fVar10) {
    fVar10 = __real_3f800000;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  if (1 < iVar4) {
    lVar8 = 0x60;
    uVar6 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < iVar4) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      fVar9 = *(float *)((param_1->AllocatorInstance).Data + lVar8 + 0x10);
      if (fVar2 <= fVar9) {
        fVar9 = fVar2;
      }
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      if (fVar10 < fVar9) {
        uVar6 = 0;
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        fVar10 = *(float *)((param_1->AllocatorInstance).Data + lVar8 + 0x10);
        if (fVar2 <= fVar10) {
          fVar10 = fVar2;
        }
        uVar6 = uVar7;
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
      }
      iVar4 = param_1->ArrayNum;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x60;
    } while ((int)uVar7 < iVar4);
  }
  return uVar6;
}

// GetMesh @ 14a8baf40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

USkinnedMeshComponent * __cdecl
UE::PoseSearch::GetMesh(TArrayView<FChooserEvaluationContext_*_const,int> *param_1,int param_2)

{
  int iVar1;
  FChooserEvaluationContext *pFVar2;
  code *pcVar3;
  bool bVar4;
  USkinnedMeshComponent *pUVar5;
  FChooserEvaluationContext **ppFVar6;
  UClass *pUVar7;
  
  if (((param_2 < 0) || (param_1->ArrayNum <= param_2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AnimContexts.IsValidIndex(RoleIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                         ,0xb3,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar5 = (USkinnedMeshComponent *)(*pcVar3)();
    return pUVar5;
  }
  ppFVar6 = TArrayView<FChooserEvaluationContext_*_const,int>::operator[](param_1,param_2);
  pFVar2 = *ppFVar6;
  if (0 < (pFVar2->ObjectParams).ArrayNum) {
    if (((pFVar2->ObjectParams).ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (USkinnedMeshComponent *)(*pcVar3)();
      return pUVar5;
    }
    pUVar5 = *(USkinnedMeshComponent **)(pFVar2->ObjectParams).AllocatorInstance.InlineData[0].Pad;
    if (GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar5 == (USkinnedMeshComponent *)0x0) {
        return (USkinnedMeshComponent *)0x0;
      }
      GC::MarkAsReachable((UObject *)pUVar5);
    }
    if (pUVar5 != (USkinnedMeshComponent *)0x0) {
      pUVar7 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
      iVar1 = (int)pUVar7->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar7->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (USkinnedMeshComponent *)0x0;
}

// GetRowIndex @ 14a8bd830

int __cdecl UE::PoseSearch::GetRowIndex(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (-1 < param_1) {
    iVar3 = param_1 + -1;
    if (param_1 == 0) {
      iVar3 = -2;
    }
    return iVar3;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("DatabaseAssetIndex >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\Chooser\\PoseSearchChooserColumn.cpp"
                     ,0x29,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return param_1 + -1;
}

// IsValid @ 14a8c0e10

bool __cdecl
UE::PoseSearch::IsValid
          (TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
           *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
  *pTVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> TStack_60;
  undefined8 uStack_40;
  
  iVar17 = 0;
  if (0 < *(int *)&param_1->field_0x58 - *(int *)&param_1->field_0x7c) {
    puVar1 = &param_1->field_0x60;
    do {
      iVar3 = *(int *)&param_1->field_0x70;
      iVar13 = 0;
      iVar15 = 0;
      uVar7 = 1;
      iVar8 = 0;
      if (iVar3 != 0) {
        puVar16 = (uint *)puVar1;
        if (*(uint **)&param_1->field_0x68 != (uint *)0x0) {
          puVar16 = *(uint **)&param_1->field_0x68;
        }
        uVar12 = *puVar16;
        while (uVar12 == 0) {
          lVar9 = (longlong)iVar13;
          iVar15 = iVar15 + 0x20;
          iVar13 = iVar13 + 1;
          iVar8 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14a8c0ebd;
          uVar12 = puVar16[lVar9 + 1];
        }
        uVar7 = -uVar12 & uVar12;
        uVar2 = (ulonglong)uVar7 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_res10 = (int)lVar9;
        iVar8 = iVar15 + -1 + local_res10;
        if (iVar3 < iVar8) {
          iVar8 = iVar3;
        }
      }
LAB_14a8c0ebd:
      uVar12 = *(uint *)&param_1->field_0x70;
      uVar11 = uVar12 & 0xffffffe0;
      TStack_60._padding_ = CONCAT44(uVar7,iVar13);
      TStack_60.CurrentBitIndex = iVar8;
      TStack_60.UnvisitedBitMask = 0xffffffff;
      iVar13 = (int)uVar12 >> 5;
      TStack_60._28_4_ = local_9c;
      TStack_60.BaseBitIndex = iVar15;
      uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x58 - *(int *)&param_1->field_0x7c);
      TStack_60.Array =
           (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)puVar1;
      if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      uVar7 = *(uint *)&param_1->field_0x70;
      if (uVar12 != uVar7) {
        puVar14 = puVar1;
        if (*(undefined1 **)&param_1->field_0x68 != (undefined1 *)0x0) {
          puVar14 = *(undefined1 **)&param_1->field_0x68;
        }
        uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
        while (uVar12 == 0) {
          lVar9 = (longlong)iVar13;
          uVar11 = uVar11 + 0x20;
          iVar13 = iVar13 + 1;
          uVar12 = uVar7;
          if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_14a8c0fc0;
          uVar12 = *(uint *)(puVar14 + lVar9 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_res18 = (int)lVar9;
        uVar12 = local_res18 + -1 + uVar11;
        if ((int)uVar7 < (int)uVar12) {
          uVar12 = uVar7;
        }
      }
LAB_14a8c0fc0:
      while( true ) {
        if (*(int *)&param_1->field_0x58 - *(int *)&param_1->field_0x7c != (int)uStack_40) {
          local_res8[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if ((TStack_60.CurrentBitIndex == uVar12) &&
           (TStack_60.Array ==
            (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)puVar1)) {
          return false;
        }
        pTVar10 = param_1;
        if (*(TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
              **)&param_1->field_0x50 !=
            (TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
             *)0x0) {
          pTVar10 = *(TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                      **)&param_1->field_0x50;
        }
        if (*(int *)(&pTVar10->field_0x8 + (longlong)TStack_60.CurrentBitIndex * 0x14) == iVar17)
        break;
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
        FindFirstSetBit(&TStack_60);
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < *(int *)&param_1->field_0x58 - *(int *)&param_1->field_0x7c);
  }
  return true;
}

// ProcessRootTransform @ 14a8c2e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::PoseSearch::ProcessRootTransform
          (UBlendSpace *param_1,TVector<double> *param_2,float param_3,int param_4,bool param_5,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_6,bool param_7)

{
  int *piVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  ForAnyElementType FVar16;
  UBlendSpace *this;
  double dVar17;
  double dVar18;
  bool bVar19;
  int iVar20;
  ForElementType<float> FVar21;
  uint uVar22;
  longlong lVar23;
  ForElementType<float> FVar24;
  uint uVar25;
  int iVar26;
  longlong lVar27;
  uint uVar28;
  ulong64 uVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  double dVar46;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auStackY_368 [32];
  TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> local_310;
  uint local_300;
  int local_2fc [5];
  UBlendSpace *local_2e8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  FAnimExtractContext local_2c8;
  char local_278;
  float local_274;
  undefined1 local_268 [72];
  double dStack_220;
  __m128d local_218;
  ForElementType<float> local_208;
  int local_1c0 [2];
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_368;
  uVar29 = 1;
  local_2e0 = param_6;
  local_300 = 1;
  uVar22 = 1 - ((int)ROUND(__real_bf000000 - (param_3 + param_3) * (float)param_4) >> 1);
  if (1 < (int)uVar22) {
    uVar29 = (ulong64)uVar22;
  }
  iVar26 = (int)uVar29;
  local_2e8 = param_1;
  if (iVar26 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(uVar29);
  }
  piVar1 = &param_6->ArrayMax;
  lVar31 = 0x60;
  local_2d8 = 0x60;
  param_6->ArrayNum = 0;
  if (*piVar1 != iVar26) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar26,&param_6->AllocatorInstance,0,piVar1);
  }
  if (0 < iVar26) {
    do {
      pFVar3 = (param_6->AllocatorInstance).Data;
      if (((pFVar3 < (FScriptContainerElement *)0x154eba441) &&
          (&UE::Math::TTransform<double>::Identity <
           (TTransform<double> *)(pFVar3 + (longlong)*piVar1 * 0x60))) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar19)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar20 = param_6->ArrayNum;
      if (iVar20 == *piVar1) {
        iVar20 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1060,&param_6->AllocatorInstance,piVar1);
      }
      param_6->ArrayNum = iVar20 + 1;
      pFVar3 = (param_6->AllocatorInstance).Data;
      lVar23 = (longlong)iVar20 * 0x60;
      *(double (*) [2])(pFVar3 + lVar23) =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      *(double (*) [2])(pFVar3 + lVar23 + 0x10) =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      *(double (*) [2])(pFVar3 + lVar23 + 0x20) =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      *(double (*) [2])(pFVar3 + lVar23 + 0x30) =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      *(double (*) [2])(pFVar3 + lVar23 + 0x40) =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      *(double (*) [2])(pFVar3 + lVar23 + 0x50) =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      uVar29 = uVar29 - 1;
    } while (uVar29 != 0);
  }
  this = local_2e8;
  uVar22 = 1;
  local_310.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_310.ArrayNum = 0;
  local_310.ArrayMax = 0;
  local_2fc[0] = 0;
  bVar19 = UBlendSpace::GetSamplesFromBlendInput(local_2e8,param_2,&local_310,local_2fc,true);
  if (bVar19) {
    local_208.SecondaryData.Data = (float *)0x0;
    local_1c0[0] = 0;
    lVar23 = (longlong)local_310.ArrayNum;
    local_1c0[1] = 0x10;
    iVar20 = Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<float>_>
                       (4,4,local_310.ArrayNum,&local_208,local_1c0,local_1c0 + 1);
    FVar24.Data = (float *)&local_208;
    if ((ForElementType<float> *)local_208.SecondaryData.Data != (ForElementType<float> *)0x0) {
      FVar24.Data = local_208.SecondaryData.Data;
    }
    memset(((ForElementType<float> *)FVar24.Data)->InlineData + (longlong)iVar20 * 4,0,lVar23 << 2);
    UBlendSpace::ResetBlendSamples(this,&local_310,0.0,param_5,true);
    fVar15 = __real_3f800000;
    fVar14 = __real_3727c5ac;
    if (1 < (longlong)iVar26) {
      lVar23 = (longlong)iVar26 + -1;
      fVar54 = __real_3f800000 / (float)(iVar26 + -1);
      do {
        uVar25 = 0;
        local_2d0 = lVar23;
        if (0 < local_310.ArrayNum) {
          lVar30 = 0;
          lVar27 = 0;
          do {
            uVar28 = 0;
            if ((int)uVar25 < local_310.ArrayNum) {
              uVar28 = ~uVar25 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar2 = *(undefined4 *)(local_310.AllocatorInstance.Data + lVar27 + 0x18);
            uVar28 = 0;
            if ((int)uVar25 < local_1c0[0]) {
              uVar28 = ~uVar25 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FVar24.Data = (float *)&local_208;
            if ((ForElementType<float> *)local_208.SecondaryData.Data !=
                (ForElementType<float> *)0x0) {
              FVar24.Data = local_208.SecondaryData.Data;
            }
            uVar25 = uVar25 + 1;
            lVar27 = lVar27 + 0x60;
            *(undefined4 *)(((ForElementType<float> *)FVar24.Data)->InlineData + lVar30) = uVar2;
            lVar30 = lVar30 + 4;
            param_6 = local_2e0;
          } while ((int)uVar25 < local_310.ArrayNum);
        }
        UBlendSpace::ResetBlendSamples
                  (local_2e8,&local_310,(float)(int)uVar22 * fVar54,param_5,true);
        iVar26 = local_1c0[0];
        FVar24.Data = local_208.SecondaryData.Data;
        fVar53 = GlobalVectorConstants::Float1110.m128_f32[0];
        fVar37 = GlobalVectorConstants::Float1110.m128_f32[1];
        fVar51 = GlobalVectorConstants::Float1110.m128_f32[2];
        fVar52 = GlobalVectorConstants::Float1110.m128_f32[3];
        uVar22 = 0;
        local_2fc[1] = 0;
        local_2fc[2] = 0;
        lVar27 = 0;
        local_2c8.DeltaTimeRecord.Delta = 0.0;
        local_2c8.DeltaTimeRecord.Previous = 0.0;
        local_2fc[3] = 0;
        local_2c8.bExtractRootMotion = true;
        local_2c8.DeltaTimeRecord.bPreviousIsValid = false;
        local_2c8.DeltaTimeRecord._9_3_ = 0;
        local_2c8.CurrentTime = 0.0;
        local_268._8_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_268._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_2c8.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2c8.PoseCurves.ArrayNum = 0;
        local_2c8.PoseCurves.ArrayMax = 0;
        local_2c8.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2c8.BonesRequired.ArrayNum = 0;
        local_2c8.BonesRequired.ArrayMax = 0;
        local_268._32_8_ = (undefined8)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_268._40_8_ = (undefined8)GlobalVectorConstants::FloatZero.m128_f32[1];
        local_2c8.InterpolationOverride.bIsSet = false;
        local_278 = '\0';
        local_274 = 0.0;
        local_268._24_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_268._16_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_268._48_8_ = (undefined8)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_268._56_8_ = (undefined8)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_218.m128d_f64[0] = (double)fVar51;
        local_218.m128d_f64[1] = (double)fVar52;
        dStack_220 = (double)fVar37;
        local_268._64_8_ = (double)fVar53;
        local_2c8.bLooping = param_5;
        if (0 < local_310.ArrayNum) {
          lVar31 = 0;
          do {
            uVar28 = ~uVar22 >> 0x1f;
            uVar25 = 0;
            if ((int)uVar22 < local_310.ArrayNum) {
              uVar25 = uVar28;
            }
            if ((uVar25 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FVar16.Data = local_310.AllocatorInstance.Data;
            if (fVar14 < *(float *)(local_310.AllocatorInstance.Data + lVar31 + 0x10)) {
              uVar25 = 0;
              if ((int)uVar22 < iVar26) {
                uVar25 = uVar28;
              }
              if ((uVar25 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              FVar21.Data = (float *)&local_208;
              if ((ForElementType<float> *)FVar24.Data != (ForElementType<float> *)0x0) {
                FVar21.Data = FVar24.Data;
              }
              fVar53 = *(float *)(FVar16.Data + lVar31 + 0x18) -
                       *(float *)(((ForElementType<float> *)FVar21.Data)->InlineData + lVar27 * 4);
              if (fVar53 < 0.0) {
                fVar37 = (float)(**(code **)(**(longlong **)(FVar16.Data + lVar31 + 8) + 0x2c0))();
                fVar53 = fVar53 + fVar37;
              }
              uVar25 = 0;
              if ((int)uVar22 < iVar26) {
                uVar25 = uVar28;
              }
              if ((uVar25 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              FVar21.Data = (float *)&local_208;
              if ((ForElementType<float> *)FVar24.Data != (ForElementType<float> *)0x0) {
                FVar21.Data = FVar24.Data;
              }
              local_2c8.CurrentTime =
                   (double)*(float *)(((ForElementType<float> *)FVar21.Data)->InlineData +
                                     lVar27 * 4);
              local_2c8.DeltaTimeRecord.Delta = fVar53;
              UAnimSequence::ExtractRootMotion
                        (*(UAnimSequence **)(FVar16.Data + lVar31 + 8),&local_158,&local_2c8);
              fVar53 = *(float *)(FVar16.Data + lVar31 + 0x10);
              if (fVar15 <= *(float *)(FVar16.Data + lVar31 + 0x10)) {
                fVar53 = fVar15;
              }
              if (fVar53 <= 0.0) {
                fVar53 = 0.0;
              }
              dVar10 = (double)fVar53;
              dVar11 = (double)fVar53;
              dVar12 = (double)fVar53;
              dVar13 = (double)fVar53;
              if (local_278 == '\0') {
                local_278 = '\x01';
                local_268._8_8_ = local_158.Rotation.XY.m128d_f64[1] * dVar11;
                local_268._0_8_ = local_158.Rotation.XY.m128d_f64[0] * dVar10;
                local_268._32_8_ = local_158.Translation.XY.m128d_f64[0] * dVar10;
                local_268._40_8_ = local_158.Translation.XY.m128d_f64[1] * dVar11;
                local_268._24_8_ = local_158.Rotation.ZW.m128d_f64[1] * dVar13;
                local_268._16_8_ = local_158.Rotation.ZW.m128d_f64[0] * dVar12;
                local_268._48_8_ = local_158.Translation.ZW.m128d_f64[0] * dVar12;
                local_268._56_8_ = local_158.Translation.ZW.m128d_f64[1] * dVar13;
                local_274 = fVar53;
              }
              else {
                dVar6 = local_158.Rotation.XY.m128d_f64[0] * dVar10;
                dVar7 = local_158.Rotation.XY.m128d_f64[1] * dVar11;
                dVar8 = local_158.Rotation.ZW.m128d_f64[0] * dVar12;
                dVar9 = local_158.Rotation.ZW.m128d_f64[1] * dVar13;
                dVar42 = (double)local_268._16_8_ * dVar8 + (double)local_268._0_8_ * dVar6;
                dVar46 = (double)local_268._24_8_ * dVar9 + (double)local_268._8_8_ * dVar7;
                auVar40._8_4_ = SUB84(dVar46,0);
                auVar40._0_8_ = dVar42;
                auVar40._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
                uVar32 = -(ulonglong)(0.0 <= auVar40._8_8_ + dVar42);
                uVar34 = -(ulonglong)(0.0 <= dVar42 + dVar46);
                uVar25 = (uint)(uVar32 >> 0x20);
                uVar28 = (uint)(uVar34 >> 0x20);
                auVar47._0_4_ = ~(uint)uVar32 & SUB84(0.0 - dVar6,0);
                auVar47._4_4_ = ~uVar25 & (uint)((ulonglong)(0.0 - dVar6) >> 0x20);
                auVar47._8_4_ = ~(uint)uVar34 & SUB84(0.0 - dVar7,0);
                auVar47._12_4_ = ~uVar28 & (uint)((ulonglong)(0.0 - dVar7) >> 0x20);
                auVar43._0_8_ = uVar32 & (ulonglong)dVar6;
                auVar43._8_4_ = (undefined4)((ulonglong)dVar7 & uVar34);
                auVar43._12_4_ = (undefined4)(((ulonglong)dVar7 & uVar34) >> 0x20);
                auVar45._0_4_ = ~(uint)uVar32 & SUB84(0.0 - dVar8,0);
                auVar45._4_4_ = ~uVar25 & (uint)((ulonglong)(0.0 - dVar8) >> 0x20);
                auVar45._8_4_ = ~(uint)uVar34 & SUB84(0.0 - dVar9,0);
                auVar45._12_4_ = ~uVar28 & (uint)((ulonglong)(0.0 - dVar9) >> 0x20);
                auVar49._0_8_ = uVar32 & (ulonglong)dVar8;
                auVar49._8_4_ = (undefined4)(uVar34 & (ulonglong)dVar9);
                auVar49._12_4_ = (undefined4)((uVar34 & (ulonglong)dVar9) >> 0x20);
                dVar6 = (double)local_268._24_8_ + SUB168(auVar45 | auVar49,8);
                local_268._32_8_ =
                     (double)local_268._32_8_ + local_158.Translation.XY.m128d_f64[0] * dVar10;
                local_268._40_8_ =
                     (double)local_268._40_8_ + local_158.Translation.XY.m128d_f64[1] * dVar11;
                dVar10 = (double)local_268._8_8_ + SUB168(auVar47 | auVar43,8);
                local_268._48_8_ =
                     (double)local_268._48_8_ + local_158.Translation.ZW.m128d_f64[0] * dVar12;
                local_268._56_8_ =
                     (double)local_268._56_8_ + local_158.Translation.ZW.m128d_f64[1] * dVar13;
                local_268._8_4_ = SUB84(dVar10,0);
                local_268._0_8_ = (double)local_268._0_8_ + SUB168(auVar47 | auVar43,0);
                local_268._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
                local_268._24_4_ = SUB84(dVar6,0);
                local_268._16_8_ = (double)local_268._16_8_ + SUB168(auVar45 | auVar49,0);
                local_268._28_4_ = (int)((ulonglong)dVar6 >> 0x20);
                local_274 = local_274 + fVar53;
              }
              dStack_220 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Y;
              local_268._64_8_ = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.X;
              local_218.m128d_f64[1] = 0.0;
              local_218.m128d_f64[0] = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Z;
            }
            uVar22 = uVar22 + 1;
            lVar27 = lVar27 + 1;
            lVar31 = lVar31 + 0x60;
          } while ((int)uVar22 < local_310.ArrayNum);
          fVar53 = GlobalVectorConstants::Float1110.m128_f32[0];
          fVar37 = GlobalVectorConstants::Float1110.m128_f32[1];
          fVar51 = GlobalVectorConstants::Float1110.m128_f32[2];
          fVar52 = GlobalVectorConstants::Float1110.m128_f32[3];
          param_6 = local_2e0;
          lVar23 = local_2d0;
          lVar31 = local_2d8;
        }
        uVar22 = local_300;
        iVar26 = local_300 - 1;
        uVar25 = 0;
        if (iVar26 < param_6->ArrayNum) {
          uVar25 = -local_300 >> 0x1f;
        }
        if (uVar25 == 0) {
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar19) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          fVar53 = GlobalVectorConstants::Float1110.m128_f32[0];
          fVar37 = GlobalVectorConstants::Float1110.m128_f32[1];
          fVar51 = GlobalVectorConstants::Float1110.m128_f32[2];
          fVar52 = GlobalVectorConstants::Float1110.m128_f32[3];
        }
        local_1b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_1b8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_1b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_1b8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_1b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1b8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_1b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_1b8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_1b8.Scale3D.XY.m128d_f64[0] = (double)fVar53;
        local_1b8.Scale3D.XY.m128d_f64[1] = (double)fVar37;
        local_1b8.Scale3D.ZW.m128d_f64[0] = (double)fVar51;
        local_1b8.Scale3D.ZW.m128d_f64[1] = (double)fVar52;
        UE::Math::TTransform<double>::Multiply
                  (&local_1b8,(TTransform<double> *)local_268,
                   (TTransform<double> *)
                   ((param_6->AllocatorInstance).Data + (longlong)iVar26 * 0x60));
        dVar18 = local_1b8.Scale3D.ZW.m128d_f64[1];
        dVar17 = local_1b8.Scale3D.ZW.m128d_f64[0];
        dVar46 = local_1b8.Scale3D.XY.m128d_f64[1];
        dVar42 = local_1b8.Scale3D.XY.m128d_f64[0];
        dVar9 = local_1b8.Translation.ZW.m128d_f64[1];
        dVar8 = local_1b8.Translation.ZW.m128d_f64[0];
        dVar7 = local_1b8.Translation.XY.m128d_f64[1];
        dVar6 = local_1b8.Translation.XY.m128d_f64[0];
        dVar13 = local_1b8.Rotation.ZW.m128d_f64[1];
        dVar12 = local_1b8.Rotation.ZW.m128d_f64[0];
        dVar11 = local_1b8.Rotation.XY.m128d_f64[1];
        dVar10 = local_1b8.Rotation.XY.m128d_f64[0];
        uVar25 = 0;
        if ((int)uVar22 < param_6->ArrayNum) {
          uVar25 = ~uVar22 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_6->AllocatorInstance).Data;
        *(double *)(pFVar3 + lVar31) = dVar10;
        *(double *)(pFVar3 + lVar31 + 8) = dVar11;
        *(double *)(pFVar3 + lVar31 + 0x10) = dVar12;
        *(double *)(pFVar3 + lVar31 + 0x10 + 8) = dVar13;
        *(double *)(pFVar3 + lVar31 + 0x20) = dVar6;
        *(double *)(pFVar3 + lVar31 + 0x20 + 8) = dVar7;
        *(double *)(pFVar3 + lVar31 + 0x30) = dVar8;
        *(double *)(pFVar3 + lVar31 + 0x30 + 8) = dVar9;
        *(double *)(pFVar3 + lVar31 + 0x40) = dVar42;
        *(double *)(pFVar3 + lVar31 + 0x40 + 8) = dVar46;
        *(double *)(pFVar3 + lVar31 + 0x50) = dVar17;
        *(double *)(pFVar3 + lVar31 + 0x50 + 8) = dVar18;
        uVar25 = 0;
        if ((int)uVar22 < param_6->ArrayNum) {
          uVar25 = ~uVar22 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_6->AllocatorInstance).Data;
        dVar10 = *(double *)(pFVar3 + lVar31);
        dVar11 = *(double *)(pFVar3 + lVar31 + 8);
        dVar12 = *(double *)(pFVar3 + lVar31 + 0x10);
        dVar13 = *(double *)(pFVar3 + lVar31 + 0x10 + 8);
        auVar44._0_8_ = dVar12 * dVar12 + dVar10 * dVar10;
        auVar44._8_8_ = dVar13 * dVar13 + dVar11 * dVar11;
        auVar38._8_4_ = SUB84(auVar44._8_8_,0);
        auVar38._0_8_ = auVar44._0_8_;
        auVar38._12_4_ = (int)((ulonglong)auVar44._8_8_ >> 0x20);
        auVar39._0_8_ = auVar38._8_8_ + auVar44._0_8_;
        auVar39._8_8_ = auVar44._0_8_ + auVar44._8_8_;
        auVar45 = sqrtpd(auVar44,auVar39);
        uVar34 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                  auVar39._0_8_);
        uVar35 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                  auVar39._8_8_);
        uVar33 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                  auVar39._0_8_);
        uVar36 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                  auVar39._8_8_);
        auVar40 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar45);
        auVar45 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar45);
        auVar41._0_8_ = uVar33 & (ulonglong)(auVar40._0_8_ * dVar10);
        uVar32 = uVar36 & (ulonglong)(auVar40._8_8_ * dVar11);
        auVar41._8_4_ = (undefined4)uVar32;
        auVar41._12_4_ = (undefined4)(uVar32 >> 0x20);
        auVar50._0_8_ = uVar34 & (ulonglong)(auVar45._0_8_ * dVar12);
        uVar32 = uVar35 & (ulonglong)(auVar45._8_8_ * dVar13);
        auVar50._8_4_ = (undefined4)uVar32;
        auVar50._12_4_ = (undefined4)(uVar32 >> 0x20);
        auVar5._4_4_ = ~(uint)(uVar33 >> 0x20) &
                       GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
        auVar5._0_4_ = ~(uint)uVar33 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
        auVar5._8_4_ = ~(uint)uVar36 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
        auVar5._12_4_ =
             ~(uint)(uVar36 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
        auVar48._0_4_ = ~(uint)uVar34 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
        auVar48._4_4_ =
             ~(uint)(uVar34 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
        auVar48._8_4_ = ~(uint)uVar35 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
        auVar48._12_4_ =
             ~(uint)(uVar35 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
        *(undefined1 (*) [16])(pFVar3 + lVar31) = auVar41 | auVar5;
        *(undefined1 (*) [16])(pFVar3 + lVar31 + 0x10) = auVar50 | auVar48;
        if (local_2c8.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c8.BonesRequired.AllocatorInstance.Data);
        }
        if (local_2c8.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c8.PoseCurves.AllocatorInstance.Data);
        }
        uVar22 = uVar22 + 1;
        lVar31 = lVar31 + 0x60;
        lVar23 = lVar23 + -1;
        local_300 = uVar22;
        local_2d8 = lVar31;
      } while (lVar23 != 0);
      local_2d0 = 0;
    }
  }
  DestructItems<FBlendSampleData,int>
            ((FBlendSampleData *)local_310.AllocatorInstance.Data,local_310.ArrayNum);
  if ((FBlendSampleData *)local_310.AllocatorInstance.Data != (FBlendSampleData *)0x0) {
    FMemory::Free(local_310.AllocatorInstance.Data);
  }
  return;
}

// Serialize @ 14a8cca40

FArchive * __cdecl UE::PoseSearch::Serialize(FArchive *param_1,FKDTree *param_2,float *param_3)

{
  undefined1 *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong lVar4;
  uint *puVar5;
  uint *puVar6;
  code *pcVar7;
  bool bVar8;
  byte bVar9;
  FArchive *pFVar10;
  FKDTreeImplementation *this;
  FKDTreeImplementation *pFVar11;
  undefined1 *puVar12;
  longlong lVar13;
  uint *puVar14;
  _Value_init_tag local_res8 [8];
  _Value_init_tag local_res10 [8];
  uint local_res20 [2];
  uint local_48;
  uint local_44;
  uint local_40 [2];
  KDTreeSingleIndexAdaptorParams local_38 [2];
  
  if (((param_2->KDTreeImplementation != (FKDTreeImplementation *)0x0) &&
      (0x7fffffff < *(ulonglong *)&param_2->KDTreeImplementation->field_0x28)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!KDTree.KDTreeImplementation || KDTree.KDTreeImplementation->m_size <= AccessorTypeMax"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\KDTree.cpp"
                         ,0x1f8,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FArchive *)(*pcVar7)();
    return pFVar10;
  }
  pFVar11 = (FKDTreeImplementation *)0x0;
  if (param_2->KDTreeImplementation == (FKDTreeImplementation *)0x0) {
    local_res20[0] = 0;
  }
  else {
    local_res20[0] = *(uint *)&param_2->KDTreeImplementation->field_0x28;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res20);
    }
  }
  else {
    local_res20[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  puVar1 = &param_1->field_0x2a;
  bVar9 = param_1->field_0x28 & 1;
  if ((int)local_res20[0] < 1) {
    if (bVar9 != 0) {
      FKDTree::Reset(param_2);
    }
  }
  else {
    if ((bVar9 != 0) && (param_2->KDTreeImplementation == (FKDTreeImplementation *)0x0)) {
      this = ::operator_new(0x90);
      if (this != (FKDTreeImplementation *)0x0) {
        local_38[0].leaf_max_size = 0;
        pFVar11 = FKDTreeImplementation::FKDTreeImplementation<>
                            (this,0,&param_2->DataSource,local_38);
      }
      param_2->KDTreeImplementation = pFVar11;
    }
    *(longlong *)&param_2->KDTreeImplementation->field_0x28 = (longlong)(int)local_res20[0];
    puVar12 = &param_2->KDTreeImplementation->field_0x38;
    puVar3 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
    if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
      if ((*puVar1 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar12,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)puVar12);
      }
    }
    else {
      *(undefined4 *)puVar12 = *puVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pFVar11 = param_2->KDTreeImplementation;
    local_48 = (uint)(*(longlong *)&pFVar11->field_0x48 - *(longlong *)&pFVar11->field_0x40 >> 3);
    if ((0x7fffffff <
         (ulonglong)(*(longlong *)&pFVar11->field_0x48 - *(longlong *)&pFVar11->field_0x40 >> 3)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("KDTree.KDTreeImplementation->root_bbox.size() <= AccessorTypeMax",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\KDTree.cpp"
                           ,0x20a,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FArchive *)(*pcVar7)();
      return pFVar10;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((*puVar1 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_48,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_48);
      }
    }
    else {
      local_48 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if ((param_1->field_0x28 & 1) != 0) {
      pFVar11 = param_2->KDTreeImplementation;
      (param_2->DataSource).Data = param_3;
      (param_2->DataSource).PointDim = *(int *)&pFVar11->field_0x38;
      (param_2->DataSource).PointCount = *(int *)&pFVar11->field_0x28;
      std::
      vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>::Interval>_>
      ::_Resize<std::_Value_init_tag>
                ((vector<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval,std::allocator<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Interval>_>
                  *)&pFVar11->field_0x40,(longlong)(int)local_48,local_res8);
    }
    lVar4 = *(longlong *)&param_2->KDTreeImplementation->field_0x48;
    for (lVar13 = *(longlong *)&param_2->KDTreeImplementation->field_0x40; lVar13 != lVar4;
        lVar13 = lVar13 + 8) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,lVar13,8);
    }
    if ((0x7fffffff < *(ulonglong *)&param_2->KDTreeImplementation->field_0x20) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("KDTree.KDTreeImplementation->m_leaf_max_size <= AccessorTypeMax",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\KDTree.cpp"
                           ,0x21b,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FArchive *)(*pcVar7)();
      return pFVar10;
    }
    local_44 = *(uint *)&param_2->KDTreeImplementation->field_0x20;
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((*puVar1 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_44,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_44);
      }
    }
    else {
      local_44 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    *(longlong *)&param_2->KDTreeImplementation->field_0x20 = (longlong)(int)local_44;
    if ((0x7fffffff <
         (ulonglong)
         (*(longlong *)&param_2->KDTreeImplementation->field_0x8 -
          *(longlong *)param_2->KDTreeImplementation >> 2)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("KDTree.KDTreeImplementation->vAcc.size() <= AccessorTypeMax",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\KDTree.cpp"
                           ,0x220,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FArchive *)(*pcVar7)();
      return pFVar10;
    }
    local_40[0] = (uint)(*(longlong *)&param_2->KDTreeImplementation->field_0x8 -
                         *(longlong *)param_2->KDTreeImplementation >> 2);
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((*puVar1 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_40,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_40);
      }
    }
    else {
      local_40[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if ((param_1->field_0x28 & 1) != 0) {
      std::vector<int,std::allocator<int>_>::_Resize<std::_Value_init_tag>
                ((vector<int,std::allocator<int>_> *)param_2->KDTreeImplementation,
                 (longlong)(int)local_40[0],local_res10);
    }
    puVar5 = *(uint **)&param_2->KDTreeImplementation->field_0x8;
    for (puVar14 = *(uint **)param_2->KDTreeImplementation; puVar14 != puVar5; puVar14 = puVar14 + 1
        ) {
      puVar6 = (uint *)**(undefined8 **)&param_1->field_0x8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
        if ((*puVar1 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar14,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,puVar14);
        }
      }
      else {
        *puVar14 = *puVar6;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
    }
    SerializeSubTree(param_1,param_2,(Node **)&param_2->KDTreeImplementation->field_0x18);
  }
  return param_1;
}

// SerializeSubTree @ 14a8ccf50

FArchive * __cdecl
UE::PoseSearch::SerializeSubTree(FArchive *param_1,FKDTree *param_2,Node **param_3)

{
  uint uVar1;
  Node *pNVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  uint *puVar5;
  float *pfVar6;
  code *pcVar7;
  bool bVar8;
  FArchive *pFVar9;
  Node *pNVar10;
  float *pfVar11;
  bool bVar12;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [2];
  float local_res20 [2];
  
  if ((param_2->KDTreeImplementation == (FKDTreeImplementation *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("KDTree.KDTreeImplementation",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\KDTree.cpp"
                         ,0x1bb,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar9 = (FArchive *)(*pcVar7)();
    return pFVar9;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    pNVar10 = nanoflann::PooledAllocator::
              allocate<nanoflann::KDTreeBaseClass<nanoflann::KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>,nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>::Node>
                        ((PooledAllocator *)&param_2->KDTreeImplementation->field_0x58,1);
    *param_3 = pNVar10;
    (pNVar10->node_type).lr.left = 0;
    (pNVar10->node_type).lr.right = 0;
    pNVar10->child1 = (Node *)0x0;
    pNVar10->child2 = (Node *)0x0;
  }
  pNVar10 = (*param_3)->child1;
  pNVar2 = (*param_3)->child2;
  bVar8 = pNVar10 != (Node *)0x0;
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  bVar12 = pNVar2 != (Node *)0x0;
  puVar5 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar5) {
    local_res8[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res8[0] = (uint)(pNVar10 != (Node *)0x0);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar1 = local_res8[0];
    if ((param_1->field_0x28 & 1) != 0) goto LAB_14a8cd03b;
  }
  else {
    uVar1 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar5;
LAB_14a8cd03b:
    bVar8 = uVar1 != 0;
  }
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar5 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar5) {
    local_res10[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res10[0] = (uint)(pNVar2 != (Node *)0x0);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar1 = local_res10[0];
    if ((param_1->field_0x28 & 1) != 0) goto LAB_14a8cd0a4;
  }
  else {
    uVar1 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar5;
LAB_14a8cd0a4:
    bVar12 = uVar1 != 0;
  }
  if ((bVar8) || (bVar12)) {
    pNVar10 = *param_3;
    puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pNVar10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pNVar10);
      }
    }
    else {
      (pNVar10->node_type).sub.divfeat = *puVar5;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pfVar11 = &((*param_3)->node_type).sub.divhigh;
    pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar11,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar11);
      }
    }
    else {
      *pfVar11 = *pfVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pfVar11 = &((*param_3)->node_type).sub.divlow;
    pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar11,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar11);
      }
    }
    else {
      *pfVar11 = *pfVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    if (bVar8) {
      SerializeSubTree(param_1,param_2,&(*param_3)->child1);
      goto LAB_14a8cd1e1;
    }
  }
  else {
    if ((0x7fffffff < ((*param_3)->node_type).lr.left) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("KDTreeNode->node_type.lr.left <= AccessorTypeMax",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\KDTree.cpp"
                           ,0x1cc,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar9 = (FArchive *)(*pcVar7)();
      return pFVar9;
    }
    if ((0x7fffffff < ((*param_3)->node_type).lr.right) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("KDTreeNode->node_type.lr.right <= AccessorTypeMax",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\KDTree.cpp"
                           ,0x1cd,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar9 = (FArchive *)(*pcVar7)();
      return pFVar9;
    }
    local_res18[0] = ((*param_3)->node_type).sub.divfeat;
    local_res20[0] = ((*param_3)->node_type).sub.divhigh;
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar4[1] < (float *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res20);
      }
    }
    else {
      local_res20[0] = *(float *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    *(longlong *)&(*param_3)->node_type = (longlong)(int)local_res18[0];
    *(longlong *)((longlong)&(*param_3)->node_type + 8) = (longlong)(int)local_res20[0];
  }
  if ((param_1->field_0x28 & 1) != 0) {
    (*param_3)->child1 = (Node *)0x0;
  }
LAB_14a8cd1e1:
  if (bVar12) {
    SerializeSubTree(param_1,param_2,&(*param_3)->child2);
  }
  else if ((param_1->field_0x28 & 1) != 0) {
    (*param_3)->child2 = (Node *)0x0;
  }
  return param_1;
}

// UpgradeToDatabaseAnimationAsset @ 14a8cfac0

FPoseSearchDatabaseAnimationAsset * __cdecl
UE::PoseSearch::UpgradeToDatabaseAnimationAsset
          (FPoseSearchDatabaseAnimationAsset *__return_storage_ptr__,FInstancedStruct *param_1)

{
  int iVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  UObject *pUVar5;
  longlong *plVar7;
  longlong lVar6;
  
  (__return_storage_ptr__->AnimAsset).field0_0x0.DebugPtr = (UObject *)0x0;
  __return_storage_ptr__->_padding_ = (longlong)&___7FPoseSearchDatabaseAnimationAsset__6B_;
  plVar7 = (longlong *)param_1->StructMemory;
  if ((plVar7 == (longlong *)0x0) ||
     (pUVar2 = (param_1->ScriptStruct).field0_0x0.DebugPtr, pUVar2 == (UScriptStruct *)0x0)) {
LAB_14a8cfb94:
    plVar7 = (longlong *)param_1->StructMemory;
    if ((plVar7 != (longlong *)0x0) &&
       (pUVar2 = (param_1->ScriptStruct).field0_0x0.DebugPtr, pUVar2 != (UScriptStruct *)0x0)) {
      if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseBlendSpace.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar4 = Z_Construct_UPackage__Script_PoseSearch();
        Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseBlendSpace.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace,
                             (UObject *)pUVar4,L"PoseSearchDatabaseBlendSpace");
      }
      if (pUVar2 == Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseBlendSpace.OuterSingleton)
      goto LAB_14a8cfb89;
      if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseBlendSpace.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar4 = Z_Construct_UPackage__Script_PoseSearch();
        Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseBlendSpace.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace,
                             (UObject *)pUVar4,L"PoseSearchDatabaseBlendSpace");
        if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseBlendSpace.OuterSingleton ==
            (UScriptStruct *)0x0) goto LAB_14a8cfc3b;
      }
      iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseBlendSpace.OuterSingleton)
                   ->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseBlendSpace.OuterSingleton)->
           _padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        lVar6 = *plVar7;
        goto LAB_14a8cfe33;
      }
    }
LAB_14a8cfc3b:
    plVar7 = (longlong *)param_1->StructMemory;
    if ((plVar7 != (longlong *)0x0) &&
       (pUVar2 = (param_1->ScriptStruct).field0_0x0.DebugPtr, pUVar2 != (UScriptStruct *)0x0)) {
      if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimComposite.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar4 = Z_Construct_UPackage__Script_PoseSearch();
        Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimComposite.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite,
                             (UObject *)pUVar4,L"PoseSearchDatabaseAnimComposite");
      }
      if (pUVar2 == Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimComposite.
                    OuterSingleton) goto LAB_14a8cfb89;
      if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimComposite.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar4 = Z_Construct_UPackage__Script_PoseSearch();
        Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimComposite.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite,
                             (UObject *)pUVar4,L"PoseSearchDatabaseAnimComposite");
        if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimComposite.OuterSingleton ==
            (UScriptStruct *)0x0) goto LAB_14a8cfce6;
      }
      iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimComposite.
                   OuterSingleton)->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimComposite.OuterSingleton)->
           _padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        lVar6 = *plVar7;
        goto LAB_14a8cfe33;
      }
    }
LAB_14a8cfce6:
    plVar7 = (longlong *)param_1->StructMemory;
    if ((plVar7 != (longlong *)0x0) &&
       (pUVar2 = (param_1->ScriptStruct).field0_0x0.DebugPtr, pUVar2 != (UScriptStruct *)0x0)) {
      if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimMontage.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar4 = Z_Construct_UPackage__Script_PoseSearch();
        Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimMontage.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage,
                             (UObject *)pUVar4,L"PoseSearchDatabaseAnimMontage");
      }
      if (pUVar2 == Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimMontage.OuterSingleton)
      goto LAB_14a8cfb89;
      if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimMontage.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar4 = Z_Construct_UPackage__Script_PoseSearch();
        Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimMontage.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage,
                             (UObject *)pUVar4,L"PoseSearchDatabaseAnimMontage");
        if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimMontage.OuterSingleton ==
            (UScriptStruct *)0x0) goto LAB_14a8cfd91;
      }
      iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimMontage.OuterSingleton)
                   ->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimMontage.OuterSingleton)->
           _padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        lVar6 = *plVar7;
        goto LAB_14a8cfe33;
      }
    }
LAB_14a8cfd91:
    plVar7 = (longlong *)param_1->StructMemory;
    if (plVar7 == (longlong *)0x0) {
      return __return_storage_ptr__;
    }
    pUVar2 = (param_1->ScriptStruct).field0_0x0.DebugPtr;
    if (pUVar2 == (UScriptStruct *)0x0) {
      return __return_storage_ptr__;
    }
    if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_PoseSearch();
      Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset,
                           (UObject *)pUVar4,L"PoseSearchDatabaseMultiAnimAsset");
    }
    if (pUVar2 != Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset.OuterSingleton
       ) {
      if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar4 = Z_Construct_UPackage__Script_PoseSearch();
        Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset,
                             (UObject *)pUVar4,L"PoseSearchDatabaseMultiAnimAsset");
        if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset.OuterSingleton ==
            (UScriptStruct *)0x0) {
          return __return_storage_ptr__;
        }
      }
      iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset.
                   OuterSingleton)->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset.OuterSingleton)->
           _padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) {
        return __return_storage_ptr__;
      }
    }
    lVar6 = *plVar7;
  }
  else {
    if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseSequence.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_PoseSearch();
      Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseSequence.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence,(UObject *)pUVar4,
                           L"PoseSearchDatabaseSequence");
    }
    if (pUVar2 != Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseSequence.OuterSingleton) {
      if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseSequence.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar4 = Z_Construct_UPackage__Script_PoseSearch();
        Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseSequence.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence,(UObject *)pUVar4
                             ,L"PoseSearchDatabaseSequence");
        if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseSequence.OuterSingleton ==
            (UScriptStruct *)0x0) goto LAB_14a8cfb94;
      }
      iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseSequence.OuterSingleton)->
                   _padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseSequence.OuterSingleton)->_padding_
         )) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_14a8cfb94;
    }
LAB_14a8cfb89:
    lVar6 = *plVar7;
  }
LAB_14a8cfe33:
  pUVar5 = (UObject *)(**(code **)(lVar6 + 8))(plVar7);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar5);
  }
  (__return_storage_ptr__->AnimAsset).field0_0x0.DebugPtr = pUVar5;
  return __return_storage_ptr__;
}

// Construct<FPoseSearchEvent> @ 14a8d58f0

void __cdecl UE::CoreUObject::Private::Construct<FPoseSearchEvent>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x100;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  return;
}

// ConstructForTests<FPoseSearchEvent> @ 14a8d5920

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPoseSearchEvent>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x100;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  return;
}

// Destruct<FPoseSearchEvent> @ 14a8d5950

void __cdecl UE::CoreUObject::Private::Destruct<FPoseSearchEvent>(void *param_1)

{
  return;
}

// Copy<FPoseSearchEvent> @ 14a8d5960

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseSearchEvent>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPoseSearchHistoryCollectorAnimNodeReference> @ 14a8d5b10

void __cdecl
UE::CoreUObject::Private::Construct<FPoseSearchHistoryCollectorAnimNodeReference>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPoseSearchHistoryCollectorAnimNodeReference> @ 14a8d5b20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPoseSearchHistoryCollectorAnimNodeReference>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPoseSearchHistoryCollectorAnimNodeReference> @ 14a8d5b30

void __cdecl
UE::CoreUObject::Private::Destruct<FPoseSearchHistoryCollectorAnimNodeReference>(void *param_1)

{
  return;
}

// Copy<FPoseSearchHistoryCollectorAnimNodeReference> @ 14a8d5b40

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseSearchHistoryCollectorAnimNodeReference>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPoseHistoryAnimationAttribute> @ 14a8d5c40

void __cdecl UE::CoreUObject::Private::Construct<FPoseHistoryAnimationAttribute>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPoseHistoryAnimationAttribute> @ 14a8d5c50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPoseHistoryAnimationAttribute>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPoseHistoryAnimationAttribute> @ 14a8d5c60

void __cdecl UE::CoreUObject::Private::Destruct<FPoseHistoryAnimationAttribute>(void *param_1)

{
  return;
}

// Copy<FPoseHistoryAnimationAttribute> @ 14a8d5cb0

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseHistoryAnimationAttribute>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FPoseHistoryAnimationAttribute> @ 14a8d5ce0

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FPoseHistoryAnimationAttribute>(void *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = ((uint)(*(ulonglong *)param_1 >> 0x14) & 0xffff ^ (uint)(*(ulonglong *)param_1 >> 4)) *
          -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar1 = uVar1 >> 0x10 ^ uVar1;
  uVar3 = (*(uint *)((longlong)param_1 + 0xc) ^ *(uint *)((longlong)param_1 + 8)) - uVar1 ^
          uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar1 ^ uVar3 << 8;
  uVar4 = (uVar1 - uVar3) - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar1 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar2 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar2 << 10;
  return (uVar4 - uVar1) - uVar2 ^ uVar1 >> 0xf;
}

// Construct<FPoseHistoryReference> @ 14a8d6070

void __cdecl UE::CoreUObject::Private::Construct<FPoseHistoryReference>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPoseHistoryReference> @ 14a8d6080

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPoseHistoryReference>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPoseHistoryReference> @ 14a8d6090

void __cdecl UE::CoreUObject::Private::Destruct<FPoseHistoryReference>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Copy<FPoseHistoryReference> @ 14a8d6220

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseHistoryReference>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      lVar1 = *(longlong *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1) + 8);
      uVar2 = *(undefined8 *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1));
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = (TReferenceControllerBase<1> *)puVar4[1];
      *puVar4 = uVar2;
      puVar4[1] = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPoseSearchTrajectorySample> @ 14a8d6320

void __cdecl UE::CoreUObject::Private::Construct<FPoseSearchTrajectorySample>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 2;
  return;
}

// ConstructForTests<FPoseSearchTrajectorySample> @ 14a8d6340

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPoseSearchTrajectorySample>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 2;
  return;
}

// Destruct<FPoseSearchTrajectorySample> @ 14a8d6360

void __cdecl UE::CoreUObject::Private::Destruct<FPoseSearchTrajectorySample>(void *param_1)

{
  return;
}

// Copy<FPoseSearchTrajectorySample> @ 14a8d6430

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseSearchTrajectorySample>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPoseSearchBone> @ 14a8d6730

void __cdecl UE::CoreUObject::Private::Construct<FPoseSearchBone>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x10) = 2;
  return;
}

// ConstructForTests<FPoseSearchBone> @ 14a8d6760

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPoseSearchBone>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x10) = 2;
  return;
}

// Destruct<FPoseSearchBone> @ 14a8d6790

void __cdecl UE::CoreUObject::Private::Destruct<FPoseSearchBone>(void *param_1)

{
  return;
}

// Copy<FPoseSearchBone> @ 14a8d67a0

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseSearchBone>(void *param_1,void *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      uVar1 = *(uint *)((longlong)param_1 + lVar2 + 8);
      *(uint *)((longlong)param_1 + 8) =
           (uVar1 ^ *(uint *)((longlong)param_1 + 8)) & 0x80000000 ^ uVar1;
      *(uint *)((longlong)param_1 + 8) =
           (*(uint *)((longlong)param_1 + lVar2 + 8) ^ uVar1) & 0x7fffffff ^
           *(uint *)((longlong)param_1 + lVar2 + 8);
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_1 + lVar2 + 0xc);
      *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_1 + lVar2 + 0x10);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPoseSearchInteractionAssetItem> @ 14a8d7720

void __cdecl UE::CoreUObject::Private::Construct<FPoseSearchInteractionAssetItem>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f000000;
  *(double (*) [2])((longlong)param_1 + 0x20) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x30) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x40) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x60) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x70) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return;
}

// ConstructForTests<FPoseSearchInteractionAssetItem> @ 14a8d77a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPoseSearchInteractionAssetItem>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f000000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f000000;
  *(double (*) [2])((longlong)param_1 + 0x20) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x30) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x40) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x60) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x70) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return;
}

// Destruct<FPoseSearchInteractionAssetItem> @ 14a8d7800

void __cdecl UE::CoreUObject::Private::Destruct<FPoseSearchInteractionAssetItem>(void *param_1)

{
  return;
}

// Copy<FPoseSearchInteractionAssetItem> @ 14a8d7810

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseSearchInteractionAssetItem>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar3 = *puVar1;
      puVar3[1] = puVar1[1];
      *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar1 + 2);
      *(undefined4 *)((longlong)puVar3 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0x14);
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      uVar2 = puVar1[7];
      puVar3[6] = puVar1[6];
      puVar3[7] = uVar2;
      uVar2 = puVar1[9];
      puVar3[8] = puVar1[8];
      puVar3[9] = uVar2;
      uVar2 = puVar1[0xb];
      puVar3[10] = puVar1[10];
      puVar3[0xb] = uVar2;
      uVar2 = puVar1[0xd];
      puVar3[0xc] = puVar1[0xc];
      puVar3[0xd] = uVar2;
      uVar2 = puVar1[0xf];
      puVar3[0xe] = puVar1[0xe];
      puVar3[0xf] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 0x10;
    } while (param_3 != 0);
  }
  return true;
}

// ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>_> @ 14a8dca00

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> *param_5,int param_6,
          int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FPoseSearchInteractionAvailability>_> @ 14a8dcaa0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FPoseSearchInteractionAvailability>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FPoseSearchInteractionAvailability> *param_5,int param_6,int *param_7)

{
  uint uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = (ulonglong)param_1;
  uVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      uVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      uVar1 = (uint)(uVar2 / uVar3);
      if ((int)uVar1 < param_3) {
        uVar1 = 0x7fffffff;
      }
    }
  }
  if ((int)uVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  uVar4 = uVar1;
  if (uVar1 < 5) {
    if (param_5->SecondaryData == (ForElementType<FPoseSearchInteractionAvailability>)0x0)
    goto LAB_14a8dcb11;
    uVar4 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_5->SecondaryData,0,uVar4,uVar3);
LAB_14a8dcb11:
  *param_7 = uVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>_> @ 14a8dcb50

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> *param_5,int param_6,
          int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
  ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UPoseSearchFeatureChannel_Position_const_*>_> @ 14a8dcbf0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UPoseSearchFeatureChannel_Position_const_*>_>
          (ushort param_1,ForElementType<UPoseSearchFeatureChannel_Position_const_*> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UPoseSearchFeatureChannel_Position_const_*>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FColor>_> @ 14a8dccc0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FColor>_>
          (ushort param_1,ForElementType<FColor> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FColor>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TTransform<double>_>_> @ 14a8dcd90

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TTransform<double>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Math::TTransform<double>_> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    iVar7 = 0x80;
    uVar8 = (ulonglong)param_1;
    if (0x80 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x81) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar8 * uVar3,0);
      iVar7 = (int)(uVar4 / uVar8);
      if (iVar7 < (int)uVar1) {
        iVar7 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TTransform<double>_>::ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::Math::TVector<double>_>_> @ 14a8dce70

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::Math::TVector<double>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TVector<double>_> *param_4
          ,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  uVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar4 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar3 = 4;
    if (4 < uVar1) {
      if (uVar4 < 5) {
        uVar4 = 0;
      }
      if (uVar4 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::Math::TVector<double>_>::
    ResizeAllocation(param_4,iVar2,uVar3,(ulonglong)param_1);
    *param_6 = uVar3;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FChooserEvaluationContext>_> @ 14a8dcf20

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FChooserEvaluationContext>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FChooserEvaluationContext> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = 4;
    uVar7 = (ulonglong)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar3 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FChooserEvaluationContext>::ResizeAllocation(param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FPoseHistoryEntry>_> @ 14a8dcff0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FPoseHistoryEntry>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::PoseSearch::FPoseHistoryEntry> *param_4,int *param_5,int *param_6)

{
  int iVar1;
  FPoseHistoryEntry *_Src;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *param_5;
  uVar4 = *param_6;
  uVar2 = iVar1 + param_3;
  *param_5 = uVar2;
  if ((uint)param_3 <= uVar4 - iVar1) {
    return iVar1;
  }
  if ((int)uVar2 < iVar1) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar2);
  }
  uVar3 = 4;
  if (uVar2 < 5) {
    _Src = (param_4->SecondaryData).Data;
  }
  else {
    if (uVar4 < 5) {
      uVar4 = 0;
    }
    if (uVar4 == 0) {
      uVar3 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar2) {
        uVar3 = uVar2;
      }
    }
    else {
      uVar3 = (int)((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + 0x10 + uVar2;
    }
    _Src = (param_4->SecondaryData).Data;
    if ((int)uVar3 < (int)uVar2) {
      uVar3 = 0x7fffffff;
    }
    if (4 < uVar3) {
      if (_Src == (FPoseHistoryEntry *)0x0) {
        TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FPoseHistoryEntry>::ResizeAllocation
                  (&param_4->SecondaryData,0,uVar3,(ulonglong)param_1);
        memmove((param_4->SecondaryData).Data,param_4,(longlong)iVar1 * 0x48);
      }
      else {
        TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FPoseHistoryEntry>::ResizeAllocation
                  (&param_4->SecondaryData,iVar1,uVar3,(ulonglong)param_1);
      }
      goto LAB_14a8dd0db;
    }
  }
  if (_Src != (FPoseHistoryEntry *)0x0) {
    memmove(param_4,_Src,(longlong)iVar1 * 0x48);
  }
LAB_14a8dd0db:
  *param_6 = uVar3;
  return iVar1;
}

// ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult>_> @ 14a8dd110

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    iVar7 = 0x100;
    uVar8 = (ulonglong)param_1;
    if (0x100 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x101) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar8 * uVar3,0);
      iVar7 = (int)(uVar4 / uVar8);
      if (iVar7 < (int)uVar1) {
        iVar7 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult>::ResizeAllocation
              (param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FSearchResult>_> @ 14a8dd1f0

int __cdecl
UE::Core::Private::
ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FSearchResult>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::PoseSearch::FSearchResult> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FSearchResult>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TTransform<double>_>_> @ 14a8dd290

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TTransform<double>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TTransform<double>_> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  iVar2 = 0x80;
  if (0x80 < (uint)param_4) {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TTransform<double>_>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::Math::TVector<double>_>_> @ 14a8dd350

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::Math::TVector<double>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TVector<double>_> *param_3,int param_4
          ,int *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else if ((((longlong)(iVar1 - param_4) * (ulonglong)param_1 < 0x4000) &&
           (iVar1 * 2 <= param_4 * 3)) ||
          ((iVar2 = param_4, iVar1 - param_4 < 0x41 && (param_4 != 0)))) {
    iVar2 = iVar1;
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::Math::TVector<double>_>::
    ResizeAllocation(param_3,param_4,iVar2,(ulonglong)param_1);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FChooserEvaluationContext>_> @ 14a8dd3e0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FChooserEvaluationContext>_>
          (uint param_1,uint param_2,ForElementType<FChooserEvaluationContext> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FChooserEvaluationContext>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult>_> @ 14a8dd4a0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult>_>
          (uint param_1,uint param_2,
          ForElementType<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  iVar2 = 0x100;
  if (0x100 < (uint)param_4) {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<0,TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FSearchResult>_> @ 14a8dd560

void __cdecl
UE::Core::Private::
ReallocShrink<0,TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FSearchResult>_>
          (uint param_1,uint param_2,ForElementType<UE::PoseSearch::FSearchResult> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FSearchResult>::ResizeAllocation
              (param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FChooserEvaluationContext>_> @ 14a8dd5d0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FChooserEvaluationContext>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FChooserEvaluationContext> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FChooserEvaluationContext>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// operator<< @ 14a8e3c60

FArchive * __cdecl UE::PoseSearch::operator<<(FArchive *param_1,FSparsePoseMultiMap<int> *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->MaxKey = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &param_2->MaxValue;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &param_2->DeltaKeyValue;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,&param_2->DataValues);
  return param_1;
}

// operator<< @ 14a8e3d70

FArchive * __cdecl UE::PoseSearch::operator<<(FArchive *param_1,FArchivedPoseHistory *param_2)

{
  FTransformTrajectory *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FTransformTrajectory *pFVar4;
  FPoseSearchQueryTrajectory local_28;
  FTransformTrajectory local_18;
  
  TSetPrivateFriend::
  Serialize<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
                      *)&param_2->BoneToTransformMap);
  TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->CollectedCurves);
  TArrayPrivateFriend::Serialize<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Entries);
  pFVar1 = &param_2->Trajectory;
  iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FPoseSearchCustomVersion::GUID);
  if (iVar3 < 1) {
    local_28.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Samples.ArrayNum = 0;
    local_28.Samples.ArrayMax = 0;
    ::operator<<(param_1,&local_28);
    pFVar4 = FPoseSearchQueryTrajectory::operator_FTransformTrajectory(&local_28,&local_18);
    if (pFVar1 != pFVar4) {
      pFVar2 = (pFVar1->Samples).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Samples).AllocatorInstance.Data = (pFVar4->Samples).AllocatorInstance.Data;
      (pFVar4->Samples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->Trajectory).Samples.ArrayNum = (pFVar4->Samples).ArrayNum;
      (param_2->Trajectory).Samples.ArrayMax = (pFVar4->Samples).ArrayMax;
      (pFVar4->Samples).ArrayNum = 0;
      (pFVar4->Samples).ArrayMax = 0;
    }
    if (local_18.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Samples.AllocatorInstance.Data);
    }
    if (local_28.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Samples.AllocatorInstance.Data);
      return param_1;
    }
  }
  else {
    ::operator<<(param_1,pFVar1);
  }
  return param_1;
}

// operator<< @ 14a8e3e80

FArchive * __cdecl UE::PoseSearch::operator<<(FArchive *param_1,FEventData *param_2)

{
  TArrayPrivateFriend::
  Serialize<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Data);
  return param_1;
}

// operator<< @ 14a8e3ea0

FArchive * __cdecl UE::PoseSearch::operator<<(FArchive *param_1,FPoseHistoryEntry *param_2)

{
  float *pfVar1;
  float *pfVar2;
  
  TArrayPrivateFriend::Serialize<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->ComponentSpaceRotations);
  TArrayPrivateFriend::Serialize<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->ComponentSpacePositions);
  TArrayPrivateFriend::Serialize<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->ComponentSpaceScales);
  TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>(param_1,&param_2->CurveValues);
  pfVar1 = &param_2->AccumulatedSeconds;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar2 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
  return param_1;
}

// operator<< @ 14a8e3f50

FArchive * __cdecl UE::PoseSearch::operator<<(FArchive *param_1,FPoseMetadata *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  FFloat16 FVar5;
  FPoseMetadata *pFVar6;
  bool bVar7;
  float fVar8;
  ushort local_res8 [4];
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  FPoseMetadata local_38;
  
  plVar3 = *(longlong **)&param_1->field_0x8;
  local_res20[0] = param_2->ValueOffset;
  bVar7 = param_2->bBlockTransition;
  local_res18[0] = param_2->AssetIndex;
  local_res8[0] = (param_2->CostAddend).Encoded;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res20);
    }
  }
  else {
    local_res20[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_res10[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res10[0] = (uint)bVar7;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar2 = local_res10[0];
    if ((param_1->field_0x28 & 1) == 0) goto LAB_14a8e4085;
  }
  else {
    uVar2 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  bVar7 = uVar2 != 0;
LAB_14a8e4085:
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((ushort *)plVar3[1] < (ushort *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(ushort *)*plVar3;
    *plVar3 = *plVar3 + 2;
  }
  fVar8 = FGenericPlatformMath::LoadHalf(local_res8);
  pFVar6 = FPoseMetadata::FPoseMetadata(&local_38,local_res20[0],local_res18[0],bVar7,fVar8);
  *(undefined8 *)param_2 = *(undefined8 *)pFVar6;
  FVar5.Encoded = (pFVar6->CostAddend).Encoded;
  *(undefined2 *)&param_2->field_0x8 = *(undefined2 *)&pFVar6->field_0x8;
  param_2->CostAddend = (FFloat16)FVar5.Encoded;
  return param_1;
}

// operator<< @ 14a8e4120

FArchive * __cdecl UE::PoseSearch::operator<<(FArchive *param_1,FSearchIndex *param_2)

{
  longlong *plVar1;
  float *pfVar2;
  undefined4 *puVar3;
  float *pfVar4;
  
  TArrayPrivateFriend::Serialize<float,TAlignedHeapAllocator<16>_>
            (param_1,(TArray<float,TAlignedHeapAllocator<16>_> *)param_2);
  operator<<(param_1,(FSparsePoseMultiMap<int> *)&param_2->_padding_);
  TArrayPrivateFriend::Serialize<UE::PoseSearch::FPoseMetadata,TAlignedHeapAllocator<16>_>
            (param_1,(TArray<UE::PoseSearch::FPoseMetadata,TAlignedHeapAllocator<16>_> *)
                     &param_2->_padding_);
  ::operator<<(param_1,(bool *)&param_2->_padding_);
  TArrayPrivateFriend::Serialize<UE::PoseSearch::FSearchIndexAsset,TAlignedHeapAllocator<16>_>
            (param_1,(TArray<UE::PoseSearch::FSearchIndexAsset,TAlignedHeapAllocator<16>_> *)
                     &param_2->_padding_);
  TArrayPrivateFriend::
  Serialize<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
                      *)&param_2->_padding_);
  plVar1 = &param_2->_padding_;
  puVar3 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)plVar1);
    }
  }
  else {
    *(undefined4 *)plVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  operator<<(param_1,(FSearchStats *)((longlong)&param_2->_padding_ + 4));
  TArrayPrivateFriend::Serialize<float,TAlignedHeapAllocator<16>_>(param_1,&param_2->WeightsSqrt);
  TArrayPrivateFriend::Serialize<float,TAlignedHeapAllocator<16>_>(param_1,&param_2->PCAValues);
  operator<<(param_1,&param_2->PCAValuesVectorToPoseIndexes);
  TArrayPrivateFriend::Serialize<float,TAlignedHeapAllocator<16>_>
            (param_1,&param_2->PCAProjectionMatrix);
  TArrayPrivateFriend::Serialize<float,TAlignedHeapAllocator<16>_>(param_1,&param_2->Mean);
  operator<<(param_1,&param_2->VPTree);
  Serialize(param_1,&param_2->KDTree,(float *)(param_2->PCAValues).AllocatorInstance.Data);
  pfVar2 = &param_2->PCAExplainedVariance;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  return param_1;
}

// operator<< @ 14a8e42b0

FArchive * __cdecl UE::PoseSearch::operator<<(FArchive *param_1,FSearchIndexAsset *param_2)

{
  undefined1 *puVar1;
  uint *puVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  code *pcVar6;
  float fVar7;
  FArchive *pFVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_68;
  float local_64;
  float local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  float local_50 [4];
  
  local_res20[0] = param_2->SourceAssetIdx;
  local_64 = param_2->BlendParameterX;
  plVar4 = *(longlong **)&param_1->field_0x8;
  local_68 = param_2->PermutationIdx;
  local_5c = param_2->FirstPoseIdx;
  local_58 = param_2->FirstSampleIdx;
  local_60 = param_2->BlendParameterY;
  local_54 = param_2->LastSampleIdx;
  bVar9 = param_2->bMirrored;
  local_50[0] = param_2->ToRealTimeFactor;
  bVar10 = param_2->bLooping;
  bVar11 = param_2->bDisableReselection;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res20);
    }
  }
  else {
    local_res20[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = &param_1->field_0x28;
  puVar2 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res8[0] = (uint)bVar9;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar3 = local_res8[0];
    if ((*puVar1 & 1) != 0) goto LAB_14a8e43d5;
  }
  else {
    uVar3 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar2;
LAB_14a8e43d5:
    bVar9 = uVar3 != 0;
  }
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  puVar2 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar2) {
    local_res10[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res10[0] = (uint)bVar10;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar3 = local_res10[0];
    if ((*puVar1 & 1) != 0) goto LAB_14a8e4430;
  }
  else {
    uVar3 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar2;
LAB_14a8e4430:
    bVar10 = uVar3 != 0;
  }
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  puVar2 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar2) {
    local_res18[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res18[0] = (uint)bVar11;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    if (1 < local_res18[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar3 = local_res18[0];
    if ((*puVar1 & 1) == 0) goto LAB_14a8e448f;
  }
  else {
    uVar3 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar2;
  }
  bVar11 = uVar3 != 0;
LAB_14a8e448f:
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_68,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_68);
    }
  }
  else {
    local_68 = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((float *)plVar4[1] < (float *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_64,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_64);
    }
  }
  else {
    local_64 = *(float *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((float *)plVar4[1] < (float *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_60,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_60);
    }
  }
  else {
    local_60 = *(float *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_5c,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_5c);
    }
  }
  else {
    local_5c = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_58,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_58);
    }
  }
  else {
    local_58 = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_54,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_54);
    }
  }
  else {
    local_54 = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((float *)plVar4[1] < (float *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_50,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_50);
    }
  }
  else {
    local_50[0] = *(float *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  param_2->bMirrored = false;
  param_2->SourceAssetIdx = local_res20[0];
  param_2->PermutationIdx = local_68;
  param_2->FirstPoseIdx = local_5c;
  param_2->BlendParameterX = local_64;
  fVar7 = __real_38d1b717;
  param_2->FirstSampleIdx = local_58;
  param_2->field_0x4 = (bVar10 | bVar11 * '\x02') * '\x02' | bVar9 | param_2->field_0x4 & 0xf9;
  param_2->LastSampleIdx = local_54;
  param_2->BlendParameterY = local_60;
  param_2->ToRealTimeFactor = local_50[0];
  if ((local_50[0] <= fVar7) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ToRealTimeFactor > (1.e-4f)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                         ,0x72,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pFVar8 = (FArchive *)(*pcVar6)();
    return pFVar8;
  }
  return param_1;
}

// operator<< @ 14a8e4720

FArchive * __cdecl UE::PoseSearch::operator<<(FArchive *param_1,FSearchIndexBase *param_2)

{
  float *pfVar1;
  float *pfVar2;
  
  TArrayPrivateFriend::Serialize<float,TAlignedHeapAllocator<16>_>(param_1,&param_2->Values);
  operator<<(param_1,&param_2->ValuesVectorToPoseIndexes);
  TArrayPrivateFriend::Serialize<UE::PoseSearch::FPoseMetadata,TAlignedHeapAllocator<16>_>
            (param_1,&param_2->PoseMetadata);
  ::operator<<(param_1,&param_2->bAnyBlockTransition);
  TArrayPrivateFriend::Serialize<UE::PoseSearch::FSearchIndexAsset,TAlignedHeapAllocator<16>_>
            (param_1,&param_2->Assets);
  TArrayPrivateFriend::
  Serialize<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
            (param_1,&(param_2->EventData).Data);
  pfVar1 = &param_2->MinCostAddend;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  operator<<(param_1,&param_2->Stats);
  return param_1;
}

// operator<< @ 14a8e47e0

FArchive * __cdecl UE::PoseSearch::operator<<(FArchive *param_1,FSearchStats *param_2)

{
  undefined1 *puVar1;
  float *pfVar2;
  float *pfVar3;
  
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->AverageSpeed = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar2 = &param_2->MaxSpeed;
  puVar1 = &param_1->field_0x2a;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar2 = &param_2->AverageAcceleration;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar2 = &param_2->MaxAcceleration;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar3 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar2 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((*puVar1 & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
  return param_1;
}

// operator() @ 14a8e5060

bool __thiscall
`UE::PoseSearch::InitSearchResults'::__l5::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  FSearchResult *pFVar6;
  FInteractionSearchContext *pFVar7;
  
  pFVar6 = TArrayView<UE::PoseSearch::FSearchResult_const_,int>::operator[]
                     (*(TArrayView<UE::PoseSearch::FSearchResult_const_,int> **)((longlong)this + 8)
                      ,param_1);
  if ((*(int *)pFVar6 == -1) ||
     (bVar4 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                         &pFVar6->field_0x4,(void *)0x0), bVar4)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  pFVar6 = TArrayView<UE::PoseSearch::FSearchResult_const_,int>::operator[]
                     (*(TArrayView<UE::PoseSearch::FSearchResult_const_,int> **)((longlong)this + 8)
                      ,param_2);
  if ((*(int *)pFVar6 == -1) ||
     (bVar5 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                         &pFVar6->field_0x4,(void *)0x0), bVar5)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (bVar4) {
    if (bVar5) {
      pFVar7 = TArrayView<UE::PoseSearch::FInteractionSearchContext_const_,int>::operator[]
                         (*(TArrayView<UE::PoseSearch::FInteractionSearchContext_const_,int> **)this
                          ,param_1);
      iVar3 = (int)pFVar7->_padding_;
      pFVar7 = TArrayView<UE::PoseSearch::FInteractionSearchContext_const_,int>::operator[]
                         (*(TArrayView<UE::PoseSearch::FInteractionSearchContext_const_,int> **)this
                          ,param_2);
      iVar1 = (int)pFVar7->_padding_;
      if (iVar3 <= iVar1) {
        if (iVar3 < iVar1) {
          return false;
        }
        pFVar6 = TArrayView<UE::PoseSearch::FSearchResult_const_,int>::operator[]
                           (*(TArrayView<UE::PoseSearch::FSearchResult_const_,int> **)
                             ((longlong)this + 8),param_1);
        fVar2 = (pFVar6->PoseCost).TotalCost;
        pFVar6 = TArrayView<UE::PoseSearch::FSearchResult_const_,int>::operator[]
                           (*(TArrayView<UE::PoseSearch::FSearchResult_const_,int> **)
                             ((longlong)this + 8),param_2);
        return fVar2 < (pFVar6->PoseCost).TotalCost;
      }
    }
  }
  else if (bVar5) {
    return false;
  }
  return true;
}

// AddPrerequisite @ 14a8e6850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::PoseSearch::AddPrerequisite(FTickFunction *param_1,UObject *param_2,FTickFunction *param_3)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  Type TVar5;
  FScriptContainerElement *this;
  FScriptContainerElement *pFVar6;
  undefined1 auStackY_168 [32];
  FWeakObjectPtr local_138;
  FWeakObjectPtr local_130;
  UObject *local_128;
  FName local_120;
  FString local_118;
  void *local_108 [2];
  void *local_f8 [2];
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  int local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  if (param_2 != (UObject *)0x0) {
    local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
    if (GVarPoseSearchInteractionDiagnoseTickDependencies) {
      bVar3 = IsInGameThread();
      local_e8._0_8_ = (FScriptContainerElement *)0x0;
      TVar5 = AnyNormalThreadNormalTask;
      local_e8._8_8_ = 0;
      local_c8 = (void *)0x0;
      local_c0 = 0;
      if (bVar3) {
        TVar5 = GameThread;
      }
      local_bc = 0x80;
      local_b8 = 0xffffffff;
      local_b4 = 0;
      local_a8 = (ForElementType<FSetElementId>)0x0;
      local_a0 = 0;
      bVar3 = ValidateTickDependenciesCycles
                        (param_1,(TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>
                                  *)local_e8);
      if (!bVar3) {
        LogTickFunction(param_1,TVar5,true,1,0x32);
      }
      if ((local_e8._8_4_ != local_b4) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("VisitedTickFunctions.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                             ,0x109,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar3 = ValidateTickDependenciesCycles
                        (param_3,(TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>
                                  *)local_e8);
      if (!bVar3) {
        LogTickFunction(param_3,TVar5,true,1,0x32);
      }
      if ((local_e8._8_4_ != local_b4) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("VisitedTickFunctions.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                             ,0x10e,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_a0 = 0;
      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8);
      }
      iVar2 = SUB84(local_e8._8_8_,4);
      local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
      }
      local_b8 = 0xffffffff;
      local_b4 = 0;
      local_c0 = 0;
      if (0x80 < local_bc) {
        local_bc = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
      }
      if (local_c8 != (void *)0x0) {
        FMemory::Free(local_c8);
      }
      if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_e8._0_8_);
      }
    }
    FTickFunction::AddPrerequisite(param_1,param_2,param_3);
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_2);
    }
    local_138.ObjectIndex = 0;
    local_138.ObjectSerialNumber = 0;
    local_128 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_2);
    }
    FWeakObjectPtr::operator=(&local_138,(FObjectPtr)&local_128);
    local_130 = (FWeakObjectPtr)param_3;
    if ((param_3 == (FTickFunction *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PrerequisiteTickFunction",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\EngineBaseTypes.h"
                           ,0x8c,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this = (param_1->Prerequisites).AllocatorInstance.Data;
    pFVar6 = this + (longlong)(param_1->Prerequisites).ArrayNum * 0x10;
    for (; this != pFVar6; this = this + 0x10) {
      bVar3 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                        ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)this,
                         (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_138);
      if ((bVar3) && (*(FWeakObjectPtr *)(this + 8) == local_130)) goto LAB_14a8e6b98;
    }
    if (1 < (byte)LogPoseSearch._0_1_) {
      (**(code **)(param_3->_padding_ + 0x20))(param_3,local_f8);
      local_120.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
      local_120.Number = *(uint *)&param_2->field_0x1c;
      ::FName::ToString(&local_120,&local_118);
      (**(code **)(param_1->_padding_ + 0x20))(param_1,local_108);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
      if (local_108[0] != (void *)0x0) {
        FMemory::Free(local_108[0]);
      }
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (local_f8[0] != (void *)0x0) {
        FMemory::Free(local_f8[0]);
      }
    }
LAB_14a8e6b98:
    if (GVarPoseSearchInteractionDiagnoseTickDependencies != false) {
      bVar3 = IsInGameThread();
      local_98._0_8_ = (FScriptContainerElement *)0x0;
      local_98._8_8_ = 0;
      local_78 = (void *)0x0;
      local_70 = 0;
      local_6c = 0x80;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = (ForElementType<FSetElementId>)0x0;
      local_50 = 0;
      bVar4 = ValidateTickDependenciesCycles
                        (param_1,(TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>
                                  *)local_98);
      if (!bVar4) {
        TVar5 = AnyNormalThreadNormalTask;
        if (bVar3) {
          TVar5 = GameThread;
        }
        LogTickFunction(param_1,TVar5,true,1,0x32);
      }
      if ((local_98._8_4_ != local_64) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("VisitedTickFunctions.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                             ,0x122,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      iVar2 = SUB84(local_98._8_8_,4);
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
    }
  }
  return;
}

// CalculateSimilarities @ 14a8eb390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::PoseSearch::CalculateSimilarities
          (TArray<UE::PoseSearch::FPosePairSimilarity,TSizedDefaultAllocator<32>_> *param_1,
          float param_2,int param_3,int param_4,TArray<float,TAlignedHeapAllocator<16>_> *param_5,
          TFunctionRef<TArrayView<float_const_,int>___cdecl(int,int)> *param_6)

{
  int *piVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ForElementType<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult> FVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStackY_948 [32];
  FIdentityFunctor local_918 [8];
  int local_910 [2];
  int local_908 [2];
  uint local_900;
  int local_8fc;
  TFunctionRef<TArrayView<float_const_,int>___cdecl(int,int)> *local_8f8;
  int local_8f0;
  undefined4 uStack_8ec;
  ForElementType<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult> local_8e0;
  int iStack_8d8;
  undefined4 uStack_8d4;
  ForElementType<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult> local_8d0;
  undefined8 uStack_8c8;
  undefined4 local_8c0;
  float local_8bc;
  FKDTree local_8b8;
  float *local_898 [2];
  TArrayView<float_const_,int> local_888;
  ForElementType<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult> local_878;
  int local_70 [2];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_948;
  piVar1 = &param_1->ArrayMax;
  uVar14 = (ulonglong)(uint)param_4;
  local_8f8 = param_6;
  local_900 = param_4;
  local_8fc = param_3;
  if (param_1->ArrayMax < 0x10000) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0x10000,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  if ((param_5->ArrayNum != param_3 * param_4) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Values.Num() == NumPoses * DataCardinality",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.cpp"
                         ,0x2f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  FKDTree::FKDTree(&local_8b8,param_4,param_3,(float *)(param_5->AllocatorInstance).Data,0x10);
  iVar15 = 0;
  local_70[1] = 0x100;
  local_878.SecondaryData =
       (ForElementType<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult>)0x0;
  local_70[0] = 0;
  if (param_4 < 1) {
    if (param_4 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar14);
    }
  }
  else {
    Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult>_>
              (8,4,param_4,&local_878,local_70,local_70 + 1);
  }
  iVar9 = param_3;
  if (0 < param_4) {
    do {
      local_910[0] = iVar9;
      local_908[0] = iVar15;
      (**(code **)param_6)(local_898,*(undefined8 *)&param_6->field_0x8,local_908,local_910);
      iVar9 = local_70[0];
      local_8e0 = (ForElementType<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult>)&local_878
      ;
      if (local_878.SecondaryData !=
          (ForElementType<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult>)0x0) {
        local_8e0 = local_878.SecondaryData;
      }
      if ((local_70[0] < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iStack_8d8 = iVar9;
      uStack_8c8._4_4_ = uStack_8d4;
      uStack_8c8._0_4_ = iVar9;
      local_8c0 = 0;
      local_8d0 = local_8e0;
      uVar11 = 0;
      lVar12 = 0;
      local_888.DataPtr = local_898[0];
      local_888._8_8_ = local_898[1];
      local_8bc = param_2;
      iVar7 = FKDTree::FindNeighbors(&local_8b8,(FRadiusMaxHeapResultSet *)&local_8d0,&local_888);
      iVar9 = local_70[0];
      if (0 < iVar7) {
        do {
          uVar13 = ~uVar11 >> 0x1f;
          uVar8 = 0;
          if ((int)uVar11 < iVar9) {
            uVar8 = uVar13;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             iVar9 = local_70[0], bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          FVar10 = (ForElementType<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult>)
                   &local_878;
          if (local_878.SecondaryData !=
              (ForElementType<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult>)0x0) {
            FVar10 = local_878.SecondaryData;
          }
          if (iVar15 != *(int *)((uchar *)((longlong)FVar10 + 4) + lVar12 * 8)) {
            uVar8 = 0;
            if ((int)uVar11 < iVar9) {
              uVar8 = uVar13;
            }
            local_8f0 = iVar15;
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               iVar9 = local_70[0], bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            FVar10 = (ForElementType<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult>)
                     &local_878;
            if (local_878.SecondaryData !=
                (ForElementType<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult>)0x0) {
              FVar10 = local_878.SecondaryData;
            }
            uStack_8ec = *(undefined4 *)((uchar *)((longlong)FVar10 + 4) + lVar12 * 8);
            uVar8 = 0;
            if ((int)uVar11 < iVar9) {
              uVar8 = uVar13;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            FVar10 = (ForElementType<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult>)
                     &local_878;
            if (local_878.SecondaryData !=
                (ForElementType<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult>)0x0) {
              FVar10 = local_878.SecondaryData;
            }
            uVar2 = *(undefined4 *)((longlong)FVar10 + lVar12 * 8);
            iVar9 = param_1->ArrayNum;
            if (iVar9 == *piVar1) {
              iVar9 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x40c,&param_1->AllocatorInstance,piVar1);
            }
            param_1->ArrayNum = iVar9 + 1;
            pFVar3 = (param_1->AllocatorInstance).Data;
            *(ulonglong *)(pFVar3 + (longlong)iVar9 * 0xc) = CONCAT44(uStack_8ec,local_8f0);
            *(undefined4 *)(pFVar3 + (longlong)iVar9 * 0xc + 8) = uVar2;
            iVar9 = local_70[0];
          }
          uVar11 = uVar11 + 1;
          lVar12 = lVar12 + 1;
        } while (lVar12 < iVar7);
        uVar14 = (ulonglong)local_900;
      }
      iVar15 = iVar15 + 1;
      param_6 = local_8f8;
      iVar9 = local_8fc;
    } while (iVar15 < (int)uVar14);
  }
  if (param_1->ArrayNum == 0) {
    if (local_878.SecondaryData !=
        (ForElementType<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult>)0x0) {
      FMemory::Free((void *)local_878.SecondaryData);
    }
    FKDTree::~FKDTree(&local_8b8);
    bVar5 = false;
  }
  else {
    AlgoImpl::
    IntroSortInternal<UE::PoseSearch::FPosePairSimilarity,int,FIdentityFunctor,TDereferenceWrapper<UE::PoseSearch::FPosePairSimilarity,_UE::PoseSearch::CalculateSimilarities_::__l19::<lambda_1>_>_>
              ((FPosePairSimilarity *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,
               local_918[0],(<lambda_1> *)local_918);
    if (local_878.SecondaryData !=
        (ForElementType<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult>)0x0) {
      FMemory::Free((void *)local_878.SecondaryData);
    }
    FKDTree::~FKDTree(&local_8b8);
    bVar5 = true;
  }
  return bVar5;
}

// CompareFeatureVectors @ 14a8ee370

float __cdecl
UE::PoseSearch::CompareFeatureVectors
          (TArrayView<float_const_,int> *param_1,TArrayView<float_const_,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  scalar_sum_op<float,float> local_res8 [8];
  undefined1 local_a8 [32];
  longlong local_88;
  float *local_80;
  longlong local_70;
  CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>
  local_68;
  
  if ((param_1->ArrayNum != param_2->ArrayNum) || (param_1->ArrayNum == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("A.Num() == B.Num() && A.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.cpp"
                       ,0x16,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  local_70 = (longlong)param_2->ArrayNum;
  local_a8._16_8_ = param_1->DataPtr;
  local_88 = (longlong)param_1->ArrayNum;
  local_80 = param_2->DataPtr;
  if (local_70 == 0) {
    return 0.0;
  }
  local_68.m_xpr.m_lhs._padding_ = local_a8._16_8_;
  local_68.m_xpr.m_lhs._padding_ = local_88;
  local_68.m_xpr.m_rhs._padding_ = (longlong)local_80;
  local_68.m_xpr.m_rhs._padding_ = local_70;
  fVar3 = Eigen::internal::
          redux_impl<Eigen::internal::scalar_sum_op<float,float>,Eigen::internal::redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>,3,0>
          ::
          run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
                    ((redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
                      *)local_a8,local_res8,&local_68);
  return fVar3;
}

// CompareFeatureVectors @ 14a8ee480

void __cdecl
UE::PoseSearch::CompareFeatureVectors
          (TArrayView<float_const_,int> *param_1,TArrayView<float_const_,int> *param_2,
          TArrayView<float_const_,int> *param_3,TArrayView<float,int> *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  assign_op<float,float> local_res8 [8];
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>,Eigen::internal::assign_op<float,float>,0>
  local_c8;
  float *local_a8 [2];
  longlong local_98;
  Map<Eigen::Array<float,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> local_90;
  undefined1 local_68 [40];
  longlong local_40;
  float *local_38;
  longlong local_28;
  float *local_20;
  longlong local_10;
  
  iVar1 = param_1->ArrayNum;
  if (((iVar1 != param_2->ArrayNum) || (iVar1 != param_3->ArrayNum)) || (iVar1 != param_4->ArrayNum)
     ) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("A.Num() == B.Num() && A.Num() == WeightsSqrt.Num() && A.Num() == Result.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchIndex.cpp"
                       ,10,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_98 = (longlong)param_4->ArrayNum;
  local_20 = param_3->DataPtr;
  local_10 = (longlong)param_3->ArrayNum;
  local_68._24_8_ = param_1->DataPtr;
  local_40 = (longlong)param_1->ArrayNum;
  local_38 = param_2->DataPtr;
  local_28 = (longlong)param_2->ArrayNum;
  local_a8[0] = param_4->DataPtr;
  local_c8.m_dst =
       (evaluator<Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_> *)local_a8;
  local_c8.m_src =
       (evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>
        *)local_68;
  local_c8.m_functor = local_res8;
  local_c8.m_dstExpr = &local_90;
  local_90._padding_ = (longlong)local_a8[0];
  local_90._padding_ = local_98;
  Eigen::internal::
  dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float,float>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<float,float>,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_,Eigen::Map<Eigen::Array<float,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_const_>_const_>_>,Eigen::internal::assign_op<float,float>,0>,3,0>
  ::run(&local_c8);
  return;
}

// GetRemappedComponentSpaceTransformIndex @ 14a8fd6c0

ushort __cdecl
UE::PoseSearch::GetRemappedComponentSpaceTransformIndex
          (USkeleton *param_1,USkeleton *param_2,
          TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
          *param_3,ushort param_4,bool *param_5)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FSkeletonRemappingRegistry *this;
  FSkeletonRemapping *this_00;
  ushort *puVar4;
  
  if ((param_4 == 0xfffe) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("BoneIndexType != WorldSpaceIndexType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                         ,0x62,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (param_4 != 0xffff) {
    if ((param_2 != (USkeleton *)0x0) && (param_2 != param_1)) {
      this = Anim::FSkeletonRemappingRegistry::Get();
      this_00 = Anim::FSkeletonRemappingRegistry::GetRemapping(this,param_1,param_2);
      bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
      if ((bVar2) && (bVar2 = FWeakObjectPtr::IsValid(&(this_00->TargetSkeleton).WeakPtr), bVar2)) {
        if ((int)(uint)param_4 < (this_00->SourceToTargetBoneIndexes).ArrayNum) {
          if (((this_00->SourceToTargetBoneIndexes).ArrayNum <= (int)(uint)param_4) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return uVar3;
          }
          param_4 = (ushort)*(undefined4 *)
                             ((this_00->SourceToTargetBoneIndexes).AllocatorInstance.Data +
                             (ulonglong)param_4 * 4);
        }
        else {
          param_4 = 0xffff;
        }
      }
    }
    if (*(int *)&param_3->field_0x8 != *(int *)&param_3->field_0x34) {
      puVar4 = TMapBase<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
               ::Find((TMapBase<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
                       *)param_3,param_4);
      if (puVar4 == (ushort *)0x0) {
        *param_5 = false;
        param_4 = 0;
      }
      else {
        param_4 = *puVar4;
      }
    }
  }
  return param_4;
}

// GetTypeHash @ 14a8ff970

uint __cdecl UE::PoseSearch::GetTypeHash(FHistoricalPoseIndex *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = (param_1->DatabaseKey).ObjectSerialNumber;
  uVar1 = param_1->PoseIndex;
  uVar4 = (param_1->DatabaseKey).ObjectIndex - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
  uVar5 = (uVar3 - uVar4) - uVar2 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 0xc;
  uVar3 = (uVar2 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar2 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 10;
  return (uVar1 >> 2) + 0x9e3779b9 + ((uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xf) + uVar1 * 0x40 ^ uVar1
  ;
}

// GetTypeHash @ 14a8ffa20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint __cdecl
UE::PoseSearch::GetTypeHash
          (TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
           *param_1)

{
  ushort uVar1;
  TTuple<unsigned_short,unsigned_short> TVar2;
  code *pcVar3;
  TTuple<unsigned_short,unsigned_short> *pTVar4;
  TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
  *pTVar5;
  TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  ForElementType<unsigned_int> FVar16;
  uint *puVar17;
  ForElementType<unsigned_int> FVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  TTuple<unsigned_short,unsigned_short> *pTVar22;
  int iVar23;
  undefined1 auStack_108 [48];
  undefined1 local_d8;
  FIdentityFunctor aFStack_d7 [3];
  uint uStack_d4;
  TTuple<unsigned_short,unsigned_short> *local_d0;
  ForElementType<unsigned_int> local_c8;
  int local_c0;
  int local_bc;
  TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
  *local_b8;
  TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  undefined4 uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  undefined4 local_34;
  ulonglong local_30;
  
  puVar15 = auStack_108;
  local_30 = __security_cookie.value ^ (ulonglong)&local_d8;
  iVar23 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  if (iVar23 == 0) {
    uVar19 = 0;
  }
  else {
    lVar20 = (longlong)iVar23;
    lVar12 = lVar20 * 4;
    local_d0 = (TTuple<unsigned_short,unsigned_short> *)0x0;
    puVar15 = auStack_108;
    if (lVar12 != 0) {
      uVar11 = lVar12 + 0x1e;
      if (uVar11 <= lVar12 + 0xfU) {
        uVar11 = 0xffffffffffffff0;
      }
      puVar15 = auStack_108 + -(uVar11 & 0xfffffffffffffff0);
      local_d0 = (TTuple<unsigned_short,unsigned_short> *)
                 ((longlong)&local_d0 + -(uVar11 & 0xfffffffffffffff0));
    }
    local_b8 = param_1;
    if (iVar23 < 0) {
      *(undefined8 *)(puVar15 + -8) = 0x14a8ffae0;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return uVar8;
      }
    }
    iVar14 = *(int *)&param_1->field_0x28;
    local_c8 = (ForElementType<unsigned_int>)&param_1->field_0x10;
    uVar8 = 0;
    iStack_a8 = 0;
    local_90 = 0;
    uStack_a4 = 1;
    iVar13 = 0;
    iStack_94 = 0;
    if (iVar14 != 0) {
      puVar17 = *(uint **)&param_1->field_0x20;
      if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
        puVar17 = (uint *)local_c8;
      }
      uVar19 = *puVar17;
      while (uVar19 == 0) {
        lVar12 = (longlong)iStack_a8;
        local_90 = local_90 + 0x20;
        iStack_a8 = iStack_a8 + 1;
        if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) {
          iVar13 = *(int *)&param_1->field_0x28;
          iStack_94 = iVar14;
          goto LAB_14a8ffb77;
        }
        uVar19 = (puVar17 + 1)[lVar12];
      }
      iVar13 = *(int *)&param_1->field_0x28;
      uStack_a4 = -uVar19 & uVar19;
      uVar11 = (ulonglong)uStack_a4 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_c0 = (int)lVar12;
      iStack_94 = local_90 + -1 + local_c0;
      if (iVar13 < iStack_94) {
        iStack_94 = iVar14;
      }
    }
LAB_14a8ffb77:
    uStack_8c = local_34;
    iStack_88 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
    uStack_d4 = *(uint *)&param_1->field_0x28;
    uStack_98 = 0xffffffff;
    TStack_78._padding_ = CONCAT44(uStack_a4,iStack_a8);
    uVar19 = uStack_d4 & 0xffffffe0;
    TStack_78.CurrentBitIndex = iStack_94;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uStack_d4 >> 5;
    bVar10 = (byte)uStack_d4;
    TStack_78._28_4_ = local_34;
    TStack_78.BaseBitIndex = local_90;
    uStack_58 = CONCAT44(uStack_84,iStack_88);
    local_b0 = param_1;
    local_a0 = (undefined1 *)local_c8;
    local_80 = param_1;
    TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c8;
    if (((int)uStack_d4 < 0) || (iVar13 < (int)uStack_d4)) {
      *(undefined8 *)(puVar15 + -8) = 0x14a8ffc08;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return uVar8;
      }
    }
    pTVar5 = local_b8;
    uVar9 = *(int *)((longlong)local_c8 + 0x18);
    FVar18 = local_c8;
    pTVar22 = local_d0;
    uVar21 = uStack_d4;
    if (uStack_d4 != uVar9) {
      FVar16 = *(ForElementType<unsigned_int> *)((longlong)local_c8 + 0x10);
      if (*(ForElementType<unsigned_int> *)((longlong)local_c8 + 0x10) ==
          (ForElementType<unsigned_int>)0x0) {
        FVar16 = local_c8;
      }
      uVar21 = -1 << (bVar10 & 0x1f) & *(uint *)((longlong)FVar16 + (longlong)iVar14 * 4);
      while (uVar21 == 0) {
        lVar12 = (longlong)iVar14;
        uVar19 = uVar19 + 0x20;
        iVar14 = iVar14 + 1;
        uStack_d4 = uVar9;
        uVar21 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14a8ffca0;
        uVar21 = *(uint *)((undefined1 *)((longlong)FVar16 + 4) + lVar12 * 4);
      }
      uVar11 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_bc = (int)lVar12;
      uStack_d4 = local_bc + -1 + uVar19;
      uVar21 = uStack_d4;
      if ((int)uVar9 < (int)uStack_d4) {
        uStack_d4 = uVar9;
        uVar21 = uVar9;
      }
    }
LAB_14a8ffca0:
    while( true ) {
      pTVar6 = local_80;
      if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
        local_d8 = 0;
        *(undefined8 *)(puVar15 + -8) = 0x14a8ffcbf;
        `TSparseArray<TSparseSetElement<TTuple<unsigned_short,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_d8);
        FVar18 = (ForElementType<unsigned_int>)&pTVar5->field_0x10;
      }
      pTVar4 = local_d0;
      if (((TStack_78.CurrentBitIndex == uVar21) &&
          ((ForElementType<unsigned_int>)TStack_78.Array == FVar18)) && (pTVar6 == pTVar5)) break;
      TVar2 = *(TTuple<unsigned_short,unsigned_short> *)
               (*(longlong *)pTVar6 + (longlong)TStack_78.CurrentBitIndex * 0xc);
      uVar19 = 0;
      if ((int)uVar8 < iVar23) {
        uVar19 = ~uVar8 >> 0x1f;
      }
      if (uVar19 == 0) {
        *(longlong *)(puVar15 + 0x28) = lVar20;
        *(longlong *)(puVar15 + 0x20) = (longlong)(int)uVar8;
        *(undefined8 *)(puVar15 + -8) = 0x14a8ffd21;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return uVar8;
        }
      }
      *pTVar22 = TVar2;
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      uVar8 = uVar8 + 1;
      *(undefined8 *)(puVar15 + -8) = 0x14a8ffd41;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
      FVar18 = (ForElementType<unsigned_int>)&pTVar5->field_0x10;
      pTVar22 = pTVar22 + 1;
    }
    *(undefined8 *)(puVar15 + -8) = 0x14a8ffd6b;
    AlgoImpl::
    StableSortInternal<TTuple<unsigned_short,unsigned_short>,FIdentityFunctor,TDereferenceWrapper<TTuple<unsigned_short,unsigned_short>,TLess<void>_>_>
              (pTVar4,iVar23,aFStack_d7[0],(TLess<void> *)aFStack_d7);
    uVar8 = 1;
    if (iVar23 < 1) {
      *(longlong *)(puVar15 + 0x28) = lVar20;
      *(undefined8 *)(puVar15 + 0x20) = 0;
      *(undefined8 *)(puVar15 + -8) = 0x14a8ffda3;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return uVar8;
      }
    }
    uVar1 = *(ushort *)pTVar4;
    uVar19 = (uVar1 >> 2) + 0x9e3779b9 + (uint)*(ushort *)&pTVar4->field_0x2 + (uint)uVar1 * 0x40 ^
             (uint)uVar1;
    if (1 < lVar20) {
      lVar12 = 1;
      do {
        uVar9 = 0;
        if ((int)uVar8 < iVar23) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if (uVar9 == 0) {
          *(longlong *)(puVar15 + 0x28) = lVar20;
          *(longlong *)(puVar15 + 0x20) = (longlong)(int)uVar8;
          *(undefined8 *)(puVar15 + -8) = 0x14a8ffe20;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return uVar8;
          }
        }
        uVar1 = *(ushort *)(pTVar4 + lVar12);
        uVar8 = uVar8 + 1;
        pTVar22 = pTVar4 + lVar12;
        lVar12 = lVar12 + 1;
        uVar19 = uVar19 ^ (uVar19 >> 2) + 0x9e3779b9 +
                          ((uint)(uVar1 >> 2) +
                           *(ushort *)&pTVar22->field_0x2 + 0x9e3779b9 + (uint)uVar1 * 0x40 ^
                          (uint)uVar1) + uVar19 * 0x40;
      } while (lVar12 < lVar20);
    }
  }
  *(undefined8 *)(puVar15 + -8) = 0x14a8ffe82;
  return uVar19;
}

// InitSearchResult @ 14a900860

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FInteractionSearchResult * __cdecl
UE::PoseSearch::InitSearchResult
          (FInteractionSearchResult *__return_storage_ptr__,FSearchResult *param_1,
          FInteractionSearchContext *param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  FInteractionSearchResult *pFVar6;
  UObject *pUVar7;
  USkeleton *pUVar8;
  IPoseHistory *pIVar9;
  FInteractionSearchContext *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ForElementType<UE::Math::TTransform<double>_> FVar14;
  ulonglong uVar15;
  longlong local_res8;
  ulonglong in_stack_ffffffffffffff98;
  
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0x7f7fffff;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = 0xffffffff;
  uVar12 = 0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0x7f7fffff;
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->SearchIndex = -1;
  (__return_storage_ptr__->ActorRootTransforms).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TTransform<double>_>)0x0;
  (__return_storage_ptr__->ActorRootTransforms).ArrayNum = 0;
  (__return_storage_ptr__->ActorRootTransforms).ArrayMax = 4;
  (__return_storage_ptr__->ActorRootBoneTransforms).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TTransform<double>_>)0x0;
  (__return_storage_ptr__->ActorRootBoneTransforms).ArrayNum = 0;
  (__return_storage_ptr__->ActorRootBoneTransforms).ArrayMax = 4;
  lVar3 = *(longlong *)&param_1->field_0x8;
  __return_storage_ptr__->_padding_ = *(longlong *)param_1;
  __return_storage_ptr__->_padding_ = lVar3;
  __return_storage_ptr__->_padding_ = *(longlong *)&param_1->EventPoseIdx;
  __return_storage_ptr__->_padding_ = *(int *)&param_1->bIsContinuingPoseSearch;
  __return_storage_ptr__->SearchIndex = param_3;
  iVar1 = (int)param_2->_padding_;
  TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
  SetNum(&__return_storage_ptr__->ActorRootTransforms,iVar1,Default);
  TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
  SetNum(&__return_storage_ptr__->ActorRootBoneTransforms,iVar1,Default);
  if (0 < iVar1) {
    local_res8 = 0;
    uVar15 = uVar12;
    do {
      uVar11 = (uint)uVar12;
      uVar13 = ~uVar11 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar11 < (int)param_2->_padding_) {
        uVar5 = uVar13;
      }
      if ((uVar5 == 0) &&
         (in_stack_ffffffffffffff98 = uVar15,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FInteractionSearchResult *)(*pcVar2)();
        return pFVar6;
      }
      pFVar10 = param_2;
      if ((FInteractionSearchContext *)param_2->_padding_ != (FInteractionSearchContext *)0x0) {
        pFVar10 = (FInteractionSearchContext *)param_2->_padding_;
      }
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(&pFVar10->_padding_ + uVar15));
      if ((pUVar7 == (UObject *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AnimContext",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                             ,0x86,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FInteractionSearchResult *)(*pcVar2)();
        return pFVar6;
      }
      pUVar8 = GetContextSkeleton(pUVar7,false);
      pIVar9 = FInteractionSearchContextBase::GetPoseHistory
                         ((FInteractionSearchContextBase *)param_2,uVar11);
      if (((pIVar9 == (IPoseHistory *)0x0) || (pUVar8 == (USkeleton *)0x0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PoseHistory && Skeleton",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                             ,0x89,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FInteractionSearchResult *)(*pcVar2)();
        return pFVar6;
      }
      pcVar2 = *(code **)(*(longlong *)pIVar9 + 8);
      uVar5 = 0;
      if ((int)uVar11 < (__return_storage_ptr__->ActorRootTransforms).ArrayNum) {
        uVar5 = uVar13;
      }
      if ((uVar5 == 0) &&
         (in_stack_ffffffffffffff98 = uVar15,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FInteractionSearchResult *)(*pcVar2)();
        return pFVar6;
      }
      FVar14 = (__return_storage_ptr__->ActorRootTransforms).AllocatorInstance.SecondaryData;
      if (FVar14 == (ForElementType<UE::Math::TTransform<double>_>)0x0) {
        FVar14 = (ForElementType<UE::Math::TTransform<double>_>)
                 &__return_storage_ptr__->ActorRootTransforms;
      }
      in_stack_ffffffffffffff98 = CONCAT62((int6)(in_stack_ffffffffffffff98 >> 0x10),0xffff);
      (*pcVar2)(pIVar9,0,(longlong)FVar14 + local_res8,pUVar8,in_stack_ffffffffffffff98,0xfffe,0);
      pcVar2 = *(code **)(*(longlong *)pIVar9 + 8);
      uVar5 = 0;
      if ((int)uVar11 < (__return_storage_ptr__->ActorRootBoneTransforms).ArrayNum) {
        uVar5 = uVar13;
      }
      if ((uVar5 == 0) &&
         (in_stack_ffffffffffffff98 = uVar15,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FInteractionSearchResult *)(*pcVar2)();
        return pFVar6;
      }
      FVar14 = (__return_storage_ptr__->ActorRootBoneTransforms).AllocatorInstance.SecondaryData;
      if (FVar14 == (ForElementType<UE::Math::TTransform<double>_>)0x0) {
        FVar14 = (ForElementType<UE::Math::TTransform<double>_>)
                 &__return_storage_ptr__->ActorRootBoneTransforms;
      }
      in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffffffff0000;
      (*pcVar2)(pIVar9,0,(longlong)FVar14 + local_res8,pUVar8,in_stack_ffffffffffffff98,0xffff,0);
      local_res8 = local_res8 + 0x60;
      uVar12 = (ulonglong)(uVar11 + 1);
      uVar15 = uVar15 + 1;
    } while ((int)(uVar11 + 1) < iVar1);
  }
  return __return_storage_ptr__;
}

// InitSearchResults @ 14a900b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::PoseSearch::InitSearchResults
          (TArray<UE::PoseSearch::FInteractionSearchResult,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<UE::PoseSearch::FSearchResult_const_,int> *param_2,
          TArrayView<UE::PoseSearch::FInteractionSearchContext_const_,int> *param_3)

{
  FInteractionSearchResult *pFVar1;
  code *pcVar2;
  TArray<UE::PoseSearch::FInteractionSearchResult,TSizedDefaultAllocator<32>_> *pTVar3;
  uint *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FInteractionSearchResult *pFVar8;
  ulonglong uVar9;
  FInteractionSearchContext *pFVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  ForElementType<int> FVar17;
  uint uVar18;
  uint *puVar19;
  undefined1 auStackY_548 [32];
  FIdentityFunctor local_4f8 [8];
  ForElementType<int> local_4f0;
  undefined8 local_4e8;
  uint *local_4e0;
  uint local_4d8;
  TArrayView<UE::PoseSearch::FSearchResult_const_,int> *local_4d0;
  UObject *local_4c8;
  TArray<UE::PoseSearch::FInteractionSearchResult,TSizedDefaultAllocator<32>_> *local_4c0;
  UObject *local_4b8;
  uint *local_4b0;
  TArrayView<UE::PoseSearch::FInteractionSearchContext_const_,int> *local_4a8;
  TArrayView<UE::PoseSearch::FSearchResult_const_,int> *local_4a0;
  TArrayView<UE::PoseSearch::FInteractionSearchContext_const_,int> local_498;
  TArrayView<UE::PoseSearch::FSearchResult_const_,int> local_488;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  local_478;
  FInteractionSearchResult local_3a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_548;
  pFVar1 = (FInteractionSearchResult *)(param_1->AllocatorInstance).Data;
  local_4d0 = param_2;
  local_4c0 = param_1;
  if (param_1->ArrayMax < 0) {
    DestructItems<UE::PoseSearch::FInteractionSearchResult,int>(pFVar1,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x360,0x10,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
  }
  else {
    DestructItems<UE::PoseSearch::FInteractionSearchResult,int>(pFVar1,param_1->ArrayNum);
    param_1->ArrayNum = 0;
  }
  puVar19 = (uint *)0x0;
  uVar13 = param_2->ArrayNum;
  if (uVar13 != 0) {
    uVar18 = 0;
    local_4e0 = (uint *)0x0;
    local_4f0.Data = (int *)0x0;
    local_4e8 = 0;
    if ((int)uVar13 < 1) {
      puVar15 = puVar19;
      FVar17.Data = (int *)puVar19;
      if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
      }
    }
    else {
      iVar6 = Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<int>_>
                        (4,4,uVar13,&local_4f0,(int *)&local_4e8,(int *)((longlong)&local_4e8 + 4));
      FVar17.Data = local_4f0.Data;
      local_4e0 = (uint *)local_4f0.Data;
      memset(local_4f0.Data + iVar6,0,(longlong)(int)uVar13 << 2);
      puVar15 = (uint *)(local_4e8 & 0xffffffff);
    }
    uVar13 = (uint)puVar15;
    puVar11 = puVar19;
    puVar12 = puVar19;
    puVar4 = local_4e0;
    if (0 < param_2->ArrayNum) {
      do {
        uVar16 = (uint)puVar11;
        uVar14 = uVar18;
        if ((int)uVar16 < (int)uVar13) {
          uVar14 = ~uVar16 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(uint *)((longlong)puVar12 + (longlong)FVar17.Data) = uVar16;
        puVar11 = (uint *)(ulonglong)(uVar16 + 1);
        puVar12 = puVar12 + 1;
        puVar4 = (uint *)FVar17.Data;
      } while ((int)(uVar16 + 1) < param_2->ArrayNum);
    }
    local_4e0 = puVar4;
    local_4a8 = param_3;
    local_4a0 = param_2;
    AlgoImpl::
    StableSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,_UE::PoseSearch::InitSearchResults_::__l5::<lambda_1>_>_>
              (FVar17.Data,uVar13,local_4f8[0],(<lambda_1> *)&local_4a8);
    uVar9 = (ulonglong)(int)uVar13;
    local_478.Elements._128_8_ = 0;
    local_478.Elements._136_4_ = 0;
    local_478.Elements._140_4_ = 8;
    puVar11 = (uint *)(FVar17.Data + uVar9);
    local_478.Elements._152_8_ = 0;
    local_478.Elements._160_8_ = ___xmm_00000000ffffffff0000002000000000;
    local_478.Elements._168_8_ = _UNK_150631d78;
    local_478.Hash.SecondaryData.Data = (FSetElementId *)0x0;
    local_478.HashSize = 0;
    local_4d8 = uVar13;
    local_4b0 = puVar11;
    while( true ) {
      if ((int)puVar15 != (int)uVar9) {
        local_4f8[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_4f8);
      }
      if ((uint *)FVar17.Data == puVar11) break;
      local_498.DataPtr = param_3->DataPtr;
      local_498.ArrayNum = param_3->ArrayNum;
      local_498._12_4_ = *(undefined4 *)&param_3->field_0xc;
      uVar13 = *FVar17.Data;
      local_488.DataPtr = param_2->DataPtr;
      local_488.ArrayNum = param_2->ArrayNum;
      local_488._12_4_ = *(undefined4 *)&param_2->field_0xc;
      bVar5 = IsPoseSearchResultUsable(uVar13,&local_488,&local_498,&local_478);
      if (bVar5) {
        uVar16 = ~uVar13 >> 0x1f;
        uVar14 = uVar18;
        if ((int)uVar13 < param_3->ArrayNum) {
          uVar14 = uVar16;
        }
        if ((uVar14 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar10 = param_3->DataPtr;
        uVar14 = uVar18;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar14 = uVar16;
        }
        if ((uVar14 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar8 = InitSearchResult(&local_3a8,local_4d0->DataPtr + (int)uVar13,pFVar10 + (int)uVar13,
                                  uVar13);
        pTVar3 = local_4c0;
        pFVar1 = (FInteractionSearchResult *)(local_4c0->AllocatorInstance).Data;
        if (((pFVar1 <= pFVar8) && (pFVar8 < pFVar1 + local_4c0->ArrayMax)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar6 = pTVar3->ArrayNum;
        if (iVar6 == pTVar3->ArrayMax) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x360,0x10,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
        }
        pTVar3->ArrayNum = iVar6 + 1;
        FInteractionSearchResult::FInteractionSearchResult
                  ((FInteractionSearchResult *)
                   ((pTVar3->AllocatorInstance).Data + (longlong)iVar6 * 0x360),pFVar8);
        if (local_3a8.ActorRootBoneTransforms.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Math::TTransform<double>_>)0x0) {
          FMemory::Free((void *)local_3a8.ActorRootBoneTransforms.AllocatorInstance.SecondaryData);
        }
        puVar15 = puVar19;
        if (local_3a8.ActorRootTransforms.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Math::TTransform<double>_>)0x0) {
          FMemory::Free((void *)local_3a8.ActorRootTransforms.AllocatorInstance.SecondaryData);
        }
        while( true ) {
          uVar14 = uVar18;
          if ((int)uVar13 < param_3->ArrayNum) {
            uVar14 = uVar16;
          }
          if ((uVar14 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar14 = (uint)puVar15;
          if ((int)param_3->DataPtr[(int)uVar13]._padding_ <= (int)uVar14) break;
          uVar7 = uVar18;
          if ((int)uVar13 < param_3->ArrayNum) {
            uVar7 = uVar16;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar10 = param_3->DataPtr + (int)uVar13;
          uVar7 = uVar18;
          if ((int)uVar14 < (int)pFVar10->_padding_) {
            uVar7 = ~uVar14 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((FInteractionSearchContext *)pFVar10->_padding_ != (FInteractionSearchContext *)0x0) {
            pFVar10 = (FInteractionSearchContext *)pFVar10->_padding_;
          }
          local_4b8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(&pFVar10->_padding_ + (int)uVar14));
          if ((local_4b8 == (UObject *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("SearchAnimContext",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                                 ,0xe7,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
          ::Emplace<UObject_const_*_const_&>(&local_478,&local_4c8,(bool *)&local_4b8);
          puVar15 = (uint *)(ulonglong)(uVar14 + 1);
        }
        puVar15 = (uint *)(local_4e8 & 0xffffffff);
        puVar11 = local_4b0;
        FVar17.Data = (int *)local_4e0;
        param_2 = local_4d0;
      }
      uVar9 = (ulonglong)local_4d8;
      FVar17.Data = FVar17.Data + 1;
      local_4e0 = (uint *)FVar17.Data;
    }
    local_478.HashSize = 0;
    TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
    ::
    ~TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
              (&local_478.Elements);
  }
  return;
}

// IsPoseSearchResultUsable @ 14a9024c0

bool __cdecl
UE::PoseSearch::IsPoseSearchResultUsable
          (int param_1,TArrayView<UE::PoseSearch::FSearchResult_const_,int> *param_2,
          TArrayView<UE::PoseSearch::FInteractionSearchContext_const_,int> *param_3,
          TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  FSearchResult *pFVar5;
  UObject *pUVar6;
  UObject **ppUVar7;
  uint uVar8;
  FInteractionSearchContext *pFVar9;
  
  pFVar5 = TArrayView<UE::PoseSearch::FSearchResult_const_,int>::operator[](param_2,param_1);
  if ((*(int *)pFVar5 != -1) &&
     (bVar2 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                         &pFVar5->field_0x4,(void *)0x0), !bVar2)) {
    uVar8 = 0;
    while( true ) {
      uVar4 = 0;
      if (param_1 < param_3->ArrayNum) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if ((int)param_3->DataPtr[param_1]._padding_ <= (int)uVar8) {
        return true;
      }
      uVar4 = 0;
      if (param_1 < param_3->ArrayNum) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      pFVar9 = param_3->DataPtr + param_1;
      uVar4 = 0;
      if ((int)uVar8 < (int)pFVar9->_padding_) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if ((FInteractionSearchContext *)pFVar9->_padding_ != (FInteractionSearchContext *)0x0) {
        pFVar9 = (FInteractionSearchContext *)pFVar9->_padding_;
      }
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(&pFVar9->_padding_ + (int)uVar8));
      if ((pUVar6 == (UObject *)0x0) ||
         (ppUVar7 = TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                    ::Find(param_4,pUVar6), ppUVar7 != (UObject **)0x0)) break;
      uVar8 = uVar8 + 1;
    }
  }
  return false;
}

// LerpEntries @ 14a902670

bool __cdecl
UE::PoseSearch::LerpEntries
          (float param_1,bool param_2,FPoseHistoryEntry *param_3,FPoseHistoryEntry *param_4,
          FName *param_5,TArrayView<FName_const_,int> *param_6,float *param_7)

{
  FName *pFVar1;
  int iVar2;
  FName *pFVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  pFVar1 = param_6->DataPtr;
  if (pFVar1 != pFVar1 + param_6->ArrayNum) {
    pFVar3 = pFVar1;
    do {
      if (*pFVar3 == *param_5) {
        iVar2 = (int)((longlong)pFVar3 - (longlong)pFVar1 >> 3);
        if (iVar2 != -1) {
          fVar5 = param_4->AccumulatedSeconds - param_3->AccumulatedSeconds;
          fVar6 = 0.0;
          if ((__real_322bcc77 < (float)((uint)fVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff)) &&
             (fVar6 = (param_1 - param_3->AccumulatedSeconds) / fVar5, !param_2)) {
            if (__real_3f800000 <= fVar6) {
              fVar6 = __real_3f800000;
            }
            if (fVar6 <= 0.0) {
              fVar6 = 0.0;
            }
          }
          if (__real_3727c5ac < (float)((uint)fVar6 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
            if (__real_3727c5ac <
                (float)((uint)(fVar6 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
              fVar5 = FPoseHistoryEntry::GetCurveValue(param_4,iVar2);
              fVar4 = FPoseHistoryEntry::GetCurveValue(param_3,iVar2);
              *param_7 = (fVar5 - fVar4) * fVar6 + fVar4;
              return true;
            }
            fVar6 = FPoseHistoryEntry::GetCurveValue(param_4,iVar2);
            *param_7 = fVar6;
            return true;
          }
          fVar6 = FPoseHistoryEntry::GetCurveValue(param_3,iVar2);
          *param_7 = fVar6;
          return true;
        }
        break;
      }
      pFVar3 = pFVar3 + 1;
    } while (pFVar3 != pFVar1 + param_6->ArrayNum);
  }
  *param_7 = 0.0;
  return false;
}

// LerpEntries @ 14a9027e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::PoseSearch::LerpEntries
          (float param_1,bool param_2,FPoseHistoryEntry *param_3,FPoseHistoryEntry *param_4,
          USkeleton *param_5,USkeleton *param_6,
          TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
          *param_7,ushort param_8,ushort param_9,TTransform<double> *param_10)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 uVar12;
  ushort uVar13;
  ushort uVar14;
  int iVar15;
  TTransform<double> *pTVar16;
  TTransform<double> *pTVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auStackY_848 [32];
  bool local_818 [8];
  USkeleton *local_810;
  USkeleton *local_808;
  USkeleton **local_800;
  USkeleton **local_7f8;
  TTransform<double> local_7e8;
  TTransform<double> local_788;
  TTransform<double> local_728;
  TTransform<double> local_6c8;
  TTransform<double> local_668;
  TTransform<double> local_608;
  TTransform<double> local_5a8;
  TTransform<double> local_548;
  TTransform<double> local_4e8;
  TTransform<double> local_488;
  TTransform<double> local_428;
  TTransform<double> local_3c8;
  TTransform<double> local_368;
  TTransform<double> local_308;
  TTransform<double> local_2a8;
  TTransform<double> local_248;
  TTransform<double> local_1e8;
  TTransform<double> local_188;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_848;
  local_808 = param_5;
  local_810 = param_6;
  if ((param_8 == param_9) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("BoneIndexType != ReferenceBoneIndexType",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                          ,0xa1,L""), bVar11)) {
    pcVar1 = (code *)swi(3);
    uVar12 = (*pcVar1)();
    return (bool)uVar12;
  }
  local_818[0] = true;
  uVar13 = GetRemappedComponentSpaceTransformIndex(local_808,local_810,param_7,param_8,local_818);
  if (uVar13 == 0xffff) {
    local_800 = &local_808;
    local_7f8 = &local_810;
    bVar11 = `UE::PoseSearch::LerpEntries'::__l10::<lambda_1>::operator()(&local_800);
    if (!bVar11) {
      *&(param_10->Rotation).XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      *&(param_10->Rotation).ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      *&(param_10->Translation).XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      *&(param_10->Translation).ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      *&(param_10->Scale3D).XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      *&(param_10->Scale3D).ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      return bVar11;
    }
  }
  fVar22 = param_4->AccumulatedSeconds - param_3->AccumulatedSeconds;
  fVar28 = 0.0;
  if ((__real_322bcc77 < (float)((uint)fVar22 & __xmm_7fffffff7fffffff7fffffff7fffffff)) &&
     (fVar28 = (param_1 - param_3->AccumulatedSeconds) / fVar22, !param_2)) {
    if (__real_3f800000 <= fVar28) {
      fVar28 = __real_3f800000;
    }
    if (fVar28 <= 0.0) {
      fVar28 = 0.0;
    }
  }
  uVar14 = GetRemappedComponentSpaceTransformIndex(local_808,local_810,param_7,param_9,local_818);
  uVar18 = (uint)uVar13;
  if (uVar14 == 0xffff) {
    if (__real_3727c5ac < (float)((uint)fVar28 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      if (__real_3727c5ac <
          (float)((uint)(fVar28 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        pTVar16 = FPoseHistoryEntry::GetComponentSpaceTransform(param_4,&local_728,uVar18);
        pTVar17 = FPoseHistoryEntry::GetComponentSpaceTransform(param_3,&local_6c8,uVar18);
        goto LAB_14a902fe5;
      }
      pTVar16 = &local_788;
      param_3 = param_4;
    }
    else {
      pTVar16 = &local_7e8;
    }
    pTVar16 = FPoseHistoryEntry::GetComponentSpaceTransform(param_3,pTVar16,uVar18);
    dVar6 = (pTVar16->Rotation).XY.m128d_f64[1];
    (param_10->Rotation).XY.m128d_f64[0] = (pTVar16->Rotation).XY.m128d_f64[0];
    (param_10->Rotation).XY.m128d_f64[1] = dVar6;
    dVar6 = (pTVar16->Rotation).ZW.m128d_f64[1];
    (param_10->Rotation).ZW.m128d_f64[0] = (pTVar16->Rotation).ZW.m128d_f64[0];
    (param_10->Rotation).ZW.m128d_f64[1] = dVar6;
    dVar6 = (pTVar16->Translation).XY.m128d_f64[1];
    (param_10->Translation).XY.m128d_f64[0] = (pTVar16->Translation).XY.m128d_f64[0];
    (param_10->Translation).XY.m128d_f64[1] = dVar6;
    dVar6 = (pTVar16->Translation).ZW.m128d_f64[1];
    (param_10->Translation).ZW.m128d_f64[0] = (pTVar16->Translation).ZW.m128d_f64[0];
    (param_10->Translation).ZW.m128d_f64[1] = dVar6;
    dVar6 = (pTVar16->Scale3D).XY.m128d_f64[1];
    (param_10->Scale3D).XY.m128d_f64[0] = (pTVar16->Scale3D).XY.m128d_f64[0];
    (param_10->Scale3D).XY.m128d_f64[1] = dVar6;
    dVar6 = (pTVar16->Scale3D).ZW.m128d_f64[1];
    (param_10->Scale3D).ZW.m128d_f64[0] = (pTVar16->Scale3D).ZW.m128d_f64[0];
    (param_10->Scale3D).ZW.m128d_f64[1] = dVar6;
  }
  else {
    uVar20 = (uint)uVar14;
    if ((float)((uint)fVar28 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_3727c5ac) {
      pTVar16 = FPoseHistoryEntry::GetComponentSpaceTransform(param_3,&local_1e8,uVar18);
      pTVar17 = FPoseHistoryEntry::GetComponentSpaceTransform(param_3,&local_668,uVar20);
      auVar23._8_8_ =
           -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
            (double)CONCAT44(*(uint *)((longlong)(pTVar17->Scale3D).ZW.m128d_f64 + 0xc) &
                             _UNK_15061cc8c,
                             *(uint *)((pTVar17->Scale3D).ZW.m128d_f64 + 1) & _UNK_15061cc88));
      auVar23._0_8_ =
           -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
            (double)CONCAT44(*(uint *)((longlong)(pTVar17->Scale3D).ZW.m128d_f64 + 4) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             *(uint *)(pTVar17->Scale3D).ZW.m128d_f64 &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      uVar18 = movmskpd((int)param_3,auVar23);
      lVar21 = -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
                (double)CONCAT44(*(uint *)((longlong)(pTVar17->Scale3D).XY.m128d_f64 + 0xc) &
                                 _UNK_15061cc8c,
                                 *(uint *)((pTVar17->Scale3D).XY.m128d_f64 + 1) & _UNK_15061cc88));
      auVar2._8_4_ = (int)lVar21;
      auVar2._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
                      (double)CONCAT44(*(uint *)((longlong)(pTVar17->Scale3D).XY.m128d_f64 + 4) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       *(uint *)(pTVar17->Scale3D).XY.m128d_f64 &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar2._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
      iVar15 = movmskpd((int)pTVar17,auVar2);
      if ((uVar18 & 0x3fffffff) == 0 && iVar15 == 0) {
        local_428.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_428.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_428.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_428.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_428.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
        ;
        local_428.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
        ;
      }
      else {
        UE::Math::TTransform<double>::InverseFast(pTVar17,&local_428);
      }
      local_4e8.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_4e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_4e8.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_4e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_4e8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_4e8.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_4e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_4e8.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_4e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_4e8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_4e8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_4e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_4e8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_4e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_4e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_4e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_4e8,pTVar16,&local_428);
      (param_10->Rotation).XY.m128d_f64[0] = local_4e8.Rotation.XY.m128d_f64[0];
      (param_10->Rotation).XY.m128d_f64[1] = local_4e8.Rotation.XY.m128d_f64[1];
      (param_10->Rotation).ZW.m128d_f64[0] = local_4e8.Rotation.ZW.m128d_f64[0];
      (param_10->Rotation).ZW.m128d_f64[1] = local_4e8.Rotation.ZW.m128d_f64[1];
      (param_10->Translation).XY.m128d_f64[0] = local_4e8.Translation.XY.m128d_f64[0];
      (param_10->Translation).XY.m128d_f64[1] = local_4e8.Translation.XY.m128d_f64[1];
      (param_10->Translation).ZW.m128d_f64[0] = local_4e8.Translation.ZW.m128d_f64[0];
      (param_10->Translation).ZW.m128d_f64[1] = local_4e8.Translation.ZW.m128d_f64[1];
      (param_10->Scale3D).XY.m128d_f64[0] = local_4e8.Scale3D.XY.m128d_f64[0];
      (param_10->Scale3D).XY.m128d_f64[1] = local_4e8.Scale3D.XY.m128d_f64[1];
      (param_10->Scale3D).ZW.m128d_f64[0] = local_4e8.Scale3D.ZW.m128d_f64[0];
      (param_10->Scale3D).ZW.m128d_f64[1] = local_4e8.Scale3D.ZW.m128d_f64[1];
      return local_818[0];
    }
    if ((float)((uint)(fVar28 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        __real_3727c5ac) {
      pTVar16 = FPoseHistoryEntry::GetComponentSpaceTransform(param_4,&local_188,uVar18);
      pTVar17 = FPoseHistoryEntry::GetComponentSpaceTransform(param_4,&local_608,uVar20);
      auVar24._8_8_ =
           -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
            (double)CONCAT44(*(uint *)((longlong)(pTVar17->Scale3D).ZW.m128d_f64 + 0xc) &
                             _UNK_15061cc8c,
                             *(uint *)((pTVar17->Scale3D).ZW.m128d_f64 + 1) & _UNK_15061cc88));
      auVar24._0_8_ =
           -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
            (double)CONCAT44(*(uint *)((longlong)(pTVar17->Scale3D).ZW.m128d_f64 + 4) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             *(uint *)(pTVar17->Scale3D).ZW.m128d_f64 &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      uVar18 = movmskpd((int)param_4,auVar24);
      lVar21 = -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
                (double)CONCAT44(*(uint *)((longlong)(pTVar17->Scale3D).XY.m128d_f64 + 0xc) &
                                 _UNK_15061cc8c,
                                 *(uint *)((pTVar17->Scale3D).XY.m128d_f64 + 1) & _UNK_15061cc88));
      auVar3._8_4_ = (int)lVar21;
      auVar3._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
                      (double)CONCAT44(*(uint *)((longlong)(pTVar17->Scale3D).XY.m128d_f64 + 4) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       *(uint *)(pTVar17->Scale3D).XY.m128d_f64 &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar3._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
      iVar15 = movmskpd((int)pTVar17,auVar3);
      if ((uVar18 & 0x3fffffff) == 0 && iVar15 == 0) {
        local_3c8.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_3c8.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_3c8.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_3c8.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_3c8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
        ;
        local_3c8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
        ;
      }
      else {
        UE::Math::TTransform<double>::InverseFast(pTVar17,&local_3c8);
      }
      local_488.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_488.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_488.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_488.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_488.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_488.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_488.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_488.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_488.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_488.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_488.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_488.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_488.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_488.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_488.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_488.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_488,pTVar16,&local_3c8);
      (param_10->Rotation).XY.m128d_f64[0] = local_488.Rotation.XY.m128d_f64[0];
      (param_10->Rotation).XY.m128d_f64[1] = local_488.Rotation.XY.m128d_f64[1];
      (param_10->Rotation).ZW.m128d_f64[0] = local_488.Rotation.ZW.m128d_f64[0];
      (param_10->Rotation).ZW.m128d_f64[1] = local_488.Rotation.ZW.m128d_f64[1];
      (param_10->Translation).XY.m128d_f64[0] = local_488.Translation.XY.m128d_f64[0];
      (param_10->Translation).XY.m128d_f64[1] = local_488.Translation.XY.m128d_f64[1];
      (param_10->Translation).ZW.m128d_f64[0] = local_488.Translation.ZW.m128d_f64[0];
      (param_10->Translation).ZW.m128d_f64[1] = local_488.Translation.ZW.m128d_f64[1];
      (param_10->Scale3D).XY.m128d_f64[0] = local_488.Scale3D.XY.m128d_f64[0];
      (param_10->Scale3D).XY.m128d_f64[1] = local_488.Scale3D.XY.m128d_f64[1];
      (param_10->Scale3D).ZW.m128d_f64[0] = local_488.Scale3D.ZW.m128d_f64[0];
      (param_10->Scale3D).ZW.m128d_f64[1] = local_488.Scale3D.ZW.m128d_f64[1];
      return local_818[0];
    }
    pTVar16 = FPoseHistoryEntry::GetComponentSpaceTransform(param_4,&local_128,uVar18);
    pTVar17 = FPoseHistoryEntry::GetComponentSpaceTransform(param_4,&local_5a8,uVar20);
    uVar10 = _UNK_15061cc8c;
    uVar9 = _UNK_15061cc88;
    uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    auVar25._8_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
          (double)CONCAT44(*(uint *)((longlong)(pTVar17->Scale3D).ZW.m128d_f64 + 0xc) &
                           _UNK_15061cc8c,
                           *(uint *)((pTVar17->Scale3D).ZW.m128d_f64 + 1) & _UNK_15061cc88));
    auVar25._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
          (double)CONCAT44(*(uint *)((longlong)(pTVar17->Scale3D).ZW.m128d_f64 + 4) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           *(uint *)(pTVar17->Scale3D).ZW.m128d_f64 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    uVar19 = movmskpd((int)param_4,auVar25);
    lVar21 = -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
              (double)CONCAT44(*(uint *)((longlong)(pTVar17->Scale3D).XY.m128d_f64 + 0xc) &
                               _UNK_15061cc8c,
                               *(uint *)((pTVar17->Scale3D).XY.m128d_f64 + 1) & _UNK_15061cc88));
    auVar4._8_4_ = (int)lVar21;
    auVar4._0_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
                    (double)CONCAT44(*(uint *)((longlong)(pTVar17->Scale3D).XY.m128d_f64 + 4) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     *(uint *)(pTVar17->Scale3D).XY.m128d_f64 &
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar4._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
    iVar15 = movmskpd((int)pTVar17,auVar4);
    if ((uVar19 & 0x3fffffff) == 0 && iVar15 == 0) {
      local_368.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_368.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_368.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_368.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_368.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_368.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      UE::Math::TTransform<double>::InverseFast(pTVar17,&local_368);
    }
    local_2a8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_2a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_2a8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_2a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_2a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_2a8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_2a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_2a8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_2a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_2a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_2a8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_2a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_2a8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_2a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_2a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_2a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_2a8,pTVar16,&local_368);
    pTVar16 = FPoseHistoryEntry::GetComponentSpaceTransform(param_3,&local_c8,uVar18);
    pTVar17 = FPoseHistoryEntry::GetComponentSpaceTransform(param_3,&local_548,uVar20);
    auVar27._0_8_ =
         (double)CONCAT44(uVar8 & *(uint *)((longlong)(pTVar17->Scale3D).XY.m128d_f64 + 4),
                          uVar7 & *(uint *)(pTVar17->Scale3D).XY.m128d_f64);
    auVar27._8_4_ = uVar9 & *(uint *)((pTVar17->Scale3D).XY.m128d_f64 + 1);
    auVar27._12_4_ = uVar10 & *(uint *)((longlong)(pTVar17->Scale3D).XY.m128d_f64 + 0xc);
    auVar26._8_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
          (double)CONCAT44(uVar10 & *(uint *)((longlong)(pTVar17->Scale3D).ZW.m128d_f64 + 0xc),
                           uVar9 & *(uint *)((pTVar17->Scale3D).ZW.m128d_f64 + 1)));
    auVar26._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
          (double)CONCAT44(uVar8 & *(uint *)((longlong)(pTVar17->Scale3D).ZW.m128d_f64 + 4),
                           uVar7 & *(uint *)(pTVar17->Scale3D).ZW.m128d_f64));
    uVar18 = movmskpd((int)param_3,auVar26);
    lVar21 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar27._8_8_);
    auVar5._8_4_ = (int)lVar21;
    auVar5._0_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar27._0_8_);
    auVar5._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
    iVar15 = movmskpd((int)pTVar17,auVar5);
    if ((uVar18 & 0x3fffffff) == 0 && iVar15 == 0) {
      local_308.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_308.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_308.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_308.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_308.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_308.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      UE::Math::TTransform<double>::InverseFast(pTVar17,&local_308);
    }
    local_248.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_248.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_248.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_248.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_248.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_248.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_248.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_248.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_248.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_248.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_248.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_248.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_248.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_248.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_248.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_248.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_248,pTVar16,&local_308);
    pTVar16 = &local_2a8;
    pTVar17 = &local_248;
LAB_14a902fe5:
    UE::Math::TTransform<double>::Blend(param_10,pTVar17,pTVar16,fVar28);
  }
  return local_818[0];
}

// LogTickFunction @ 14a903490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::PoseSearch::LogTickFunction
          (FTickFunction *param_1,Type param_2,bool param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  undefined8 local_48;
  int local_40;
  int local_3c;
  code *local_38;
  undefined8 *local_30;
  
  if (param_4 < param_5) {
    if (4 < (byte)LogPoseSearch._0_1_) {
      puVar1 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x20))(param_1,&local_38);
      if (*(int *)(puVar1 + 1) == 0) {
        local_48 = L"";
      }
      else {
        local_48 = (wchar_t *)*puVar1;
      }
      TCString<wchar_t>::Spc(param_4 * 2);
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
      if (local_38 != (code *)0x0) {
        FMemory::Free(local_38);
      }
    }
    if (param_3) {
      ShowPrerequistes(param_1,param_4,param_5);
    }
    local_30 = &local_48;
    local_48._0_5_ = CONCAT14(param_3,param_2);
    local_38 = Core::Private::Function::
               TFunctionRefCaller<`UE::PoseSearch::LogTickFunction'::__l25::<lambda_1>,void,FTickFunction_&>
               ::Call;
    local_3c = param_5;
    local_40 = param_4;
    (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_38);
  }
  else if (4 < (byte)LogPoseSearch._0_1_) {
    TCString<wchar_t>::Spc(param_4 * 2);
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    return;
  }
  return;
}

// MakeRoleToIndex @ 14a903650

TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
* __cdecl UE::PoseSearch::MakeRoleToIndex
                    (TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     *__return_storage_ptr__,TArrayView<FName_const_,int> *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
  *pTVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  TKeyInitializer<FName_const_&> local_res8;
  undefined4 local_res10;
  FName *local_res18;
  
  uVar6 = param_1->ArrayNum;
  uVar10 = (ulonglong)(int)uVar6;
  uVar11 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x5c = 4;
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x70 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x74 = 0x20;
  *(undefined4 *)&__return_storage_ptr__->field_0x78 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x7c = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x88 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x90 = 0;
  if (uVar6 != 0) {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidSetNum(uVar10);
    }
    TSparseArrayBase<20,4,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
    ::Reserve((TSparseArrayBase<20,4,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
               *)__return_storage_ptr__,uVar6);
    uVar5 = 1;
    if (uVar6 >> 1 != 0) {
      uVar5 = uVar6 >> 1;
    }
    uVar1 = (ulonglong)(uVar5 - 1) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar8 = 1 << ((byte)lVar2 & 0x1f);
    local_res10 = (undefined4)lVar2;
    uVar5 = 2;
    if ((1 < uVar8) && (uVar5 = uVar8, uVar6 < 4)) {
      uVar5 = 2;
    }
    if ((*(int *)&__return_storage_ptr__->field_0x90 == 0) ||
       (*(int *)&__return_storage_ptr__->field_0x90 < (int)uVar5)) {
      *(uint *)&__return_storage_ptr__->field_0x90 = uVar5;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
      ::Rehash((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                *)__return_storage_ptr__);
    }
  }
  if (0 < (int)uVar6) {
    do {
      iVar9 = (int)uVar10;
      uVar10 = uVar10 & 0xffffffff;
      uVar6 = 0;
      if ((int)uVar11 < iVar9) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                  *)(*pcVar3)();
        return pTVar7;
      }
      local_res18 = param_1->DataPtr + (int)uVar11;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
      ::Emplace<TKeyInitializer<FName_const_&>_>
                ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                  *)__return_storage_ptr__,&local_res8,(bool *)&local_res18);
      pTVar7 = __return_storage_ptr__;
      if (*(TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
            **)&__return_storage_ptr__->field_0x50 !=
          (TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
           *)0x0) {
        pTVar7 = *(TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   **)&__return_storage_ptr__->field_0x50;
      }
      *(uint *)(&pTVar7->field_0x8 + (longlong)(int)local_res8.Key * 0x14) = uVar11;
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < iVar9);
  }
  return __return_storage_ptr__;
}

// PruneValues @ 14a9060c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::PoseSearch::PruneValues
          (int param_1,int param_2,
          TArray<UE::PoseSearch::FPosePairSimilarity,TSizedDefaultAllocator<32>_> *param_3,
          TArray<float,TAlignedHeapAllocator<16>_> *param_4,
          TFunctionRef<unsigned_int___cdecl(int)> *param_5,
          TFunctionRef<void___cdecl(int,unsigned_int)> *param_6)

{
  ForAnyElementType *pFVar1;
  ForAnyElementType *pFVar2;
  uint *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  uint uVar6;
  TFunctionRef<void___cdecl(int,unsigned_int)> *pTVar7;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar8;
  int *piVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  ForElementType<FSetElementId> FVar17;
  FScriptContainerElement *pFVar18;
  uint *puVar19;
  undefined4 *puVar20;
  TArray<UE::PoseSearch::FPosePairSimilarity,TSizedDefaultAllocator<32>_> *pTVar21;
  longlong lVar22;
  undefined8 *puVar23;
  undefined1 auStackY_188 [32];
  undefined1 local_138;
  undefined1 local_137 [3];
  int local_134;
  undefined4 local_130;
  uint local_12c;
  int local_128;
  uint local_124;
  int local_120 [2];
  uint local_118;
  int local_114;
  undefined4 local_110 [2];
  undefined4 local_108 [2];
  uint local_100 [2];
  undefined4 local_f8 [2];
  uint local_f0;
  uint local_e8;
  undefined4 local_e0 [2];
  TFunctionRef<void___cdecl(int,unsigned_int)> *local_d8;
  undefined8 *local_d0;
  TArray<UE::PoseSearch::FPosePairSimilarity,TSizedDefaultAllocator<32>_> *local_c8;
  longlong local_c0;
  TArray<float,TAlignedHeapAllocator<16>_> *local_b8;
  int *local_b0;
  uint *local_a8;
  TFunctionRef<unsigned_int___cdecl(int)> *local_a0;
  TSet<TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_d8 = param_6;
  puVar23 = (undefined8 *)&param_5->field_0x8;
  local_a0 = param_5;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_134 = 0;
  local_128 = param_1;
  local_d0 = puVar23;
  local_c8 = param_3;
  local_b8 = param_4;
  if (0 < param_2) {
    do {
      local_120[0] = local_134;
      local_118 = (**(code **)param_5)(*puVar23,local_120);
      if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
        FVar17 = (ForElementType<FSetElementId>)&local_98.Hash;
        if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar17 = local_98.Hash.SecondaryData;
        }
        uVar12 = *(uint *)((longlong)FVar17 + (ulonglong)(local_98.HashSize - 1U & local_118) * 4);
        while (uVar12 != 0xffffffff) {
          puVar16 = (uint *)((longlong)(int)uVar12 * 0x20 + local_98.Elements._0_8_);
          if (*puVar16 == local_118) {
            if (puVar16 != (uint *)0x0) goto LAB_14a9061fe;
            break;
          }
          uVar12 = puVar16[6];
        }
      }
      local_a8 = &local_118;
      TSet<TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
                (&local_98,(uint)&local_114,
                 (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)local_118,(bool *)&local_a8);
      puVar16 = (uint *)((longlong)local_114 * 0x20 + local_98.Elements._0_8_);
LAB_14a9061fe:
      if (((*(int **)(puVar16 + 2) <= &local_134) &&
          (&local_134 < *(int **)(puVar16 + 2) + (int)puVar16[5])) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      uVar12 = puVar16[4];
      if (uVar12 == puVar16[5]) {
        uVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)(puVar16 + 2),(int *)(puVar16 + 5));
      }
      puVar16[4] = uVar12 + 1;
      *(int *)(((ForAnyElementType *)(puVar16 + 2))->Data + (longlong)(int)uVar12 * 4) = local_134;
      local_134 = local_134 + 1;
    } while (local_134 < param_2);
  }
  local_b0 = &param_4->ArrayNum;
  local_12c = *local_b0 - param_1;
  iVar15 = local_c8->ArrayNum;
  local_124 = 0;
  if (0 < iVar15) {
    local_c0 = 0;
    pTVar21 = local_c8;
    do {
      lVar22 = local_c0;
      uVar12 = 0;
      if ((int)local_124 < iVar15) {
        uVar12 = ~local_124 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      pFVar18 = (pTVar21->AllocatorInstance).Data + lVar22;
      local_110[0] = *(undefined4 *)pFVar18;
      uVar12 = (**(code **)param_5)(*puVar23,local_110);
      local_108[0] = *(undefined4 *)(pFVar18 + 4);
      uVar13 = (**(code **)param_5)(*puVar23,local_108);
      local_f0 = uVar13;
      if (uVar12 != uVar13) {
        if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
          FVar17 = (ForElementType<FSetElementId>)&local_98.Hash;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar17 = local_98.Hash.SecondaryData;
          }
          uVar14 = *(uint *)((longlong)FVar17 + (ulonglong)(local_98.HashSize - 1U & uVar12) * 4);
          while (uVar14 != 0xffffffff) {
            puVar16 = (uint *)((longlong)(int)uVar14 * 0x20 + local_98.Elements._0_8_);
            if (*puVar16 == uVar12) {
              if (puVar16 != (uint *)0x0) goto LAB_14a9063fb;
              goto LAB_14a9063cd;
            }
            uVar14 = puVar16[6];
          }
        }
        puVar16 = (uint *)0x0;
LAB_14a9063cd:
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L"");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
LAB_14a9063fb:
        pFVar1 = (ForAnyElementType *)(puVar16 + 2);
        if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
          FVar17 = (ForElementType<FSetElementId>)&local_98.Hash;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar17 = local_98.Hash.SecondaryData;
          }
          uVar14 = *(uint *)((longlong)FVar17 + (ulonglong)(local_98.HashSize - 1U & uVar13) * 4);
          while (uVar14 != 0xffffffff) {
            puVar19 = (uint *)((longlong)(int)uVar14 * 0x20 + local_98.Elements._0_8_);
            if (*puVar19 == uVar13) {
              if (puVar19 != (uint *)0x0) goto LAB_14a906465;
              goto LAB_14a90643f;
            }
            uVar14 = puVar19[6];
          }
        }
        puVar19 = (uint *)0x0;
LAB_14a90643f:
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L"");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
LAB_14a906465:
        pTVar7 = local_d8;
        uVar13 = puVar19[4];
        pFVar2 = (ForAnyElementType *)(puVar19 + 2);
        puVar20 = *(undefined4 **)(puVar19 + 2);
        puVar4 = puVar20 + (int)uVar13;
        while( true ) {
          if (puVar19[4] != uVar13) {
            local_138 = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_138);
          }
          piVar9 = local_b0;
          uVar6 = local_f0;
          uVar14 = local_12c;
          if (puVar20 == puVar4) break;
          local_130 = *puVar20;
          local_100[0] = uVar12;
          local_f8[0] = local_130;
          (**(code **)pTVar7)(*(undefined8 *)&pTVar7->field_0x8,local_f8,local_100);
          if (((pFVar1->Data <= (FScriptContainerElement *)&local_130) &&
              ((FScriptContainerElement *)&local_130 < pFVar1->Data + (longlong)(int)puVar16[5] * 4)
              ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar10)) {
            pcVar5 = (code *)swi(3);
            uVar11 = (*pcVar5)();
            return (bool)uVar11;
          }
          uVar14 = puVar16[4];
          if (uVar14 == puVar16[5]) {
            uVar14 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,pFVar1,(int *)(puVar16 + 5));
          }
          puVar20 = puVar20 + 1;
          puVar16[4] = uVar14 + 1;
          *(undefined4 *)(pFVar1->Data + (longlong)(int)uVar14 * 4) = local_130;
        }
        lVar22 = (longlong)(int)local_f0;
        if (local_f0 == local_12c) {
          uVar12 = puVar19[5];
          puVar19[4] = 0;
          pFVar1 = pFVar2;
          puVar16 = puVar19;
          uVar13 = local_12c;
        }
        else {
          uVar12 = 0;
          if ((int)local_12c < *local_b0) {
            uVar12 = ~local_12c >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            uVar11 = (*pcVar5)();
            return (bool)uVar11;
          }
          pTVar8 = local_b8;
          pFVar18 = (local_b8->AllocatorInstance).Data;
          uVar12 = 0;
          if ((int)uVar6 < *piVar9) {
            uVar12 = ~uVar6 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            uVar11 = (*pcVar5)();
            return (bool)uVar11;
          }
          memcpy((pTVar8->AllocatorInstance).Data + lVar22 * 4,pFVar18 + (longlong)(int)uVar14 * 4,
                 (longlong)local_128 << 2);
          if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
            FVar17 = (ForElementType<FSetElementId>)&local_98.Hash;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar17 = local_98.Hash.SecondaryData;
            }
            uVar12 = *(uint *)((longlong)FVar17 + (ulonglong)(local_98.HashSize - 1U & uVar14) * 4);
            while (uVar12 != 0xffffffff) {
              puVar16 = (uint *)((longlong)(int)uVar12 * 0x20 + local_98.Elements._0_8_);
              if (*puVar16 == uVar14) {
                if (puVar16 != (uint *)0x0) goto LAB_14a9066b4;
                goto LAB_14a90668e;
              }
              uVar12 = puVar16[6];
            }
          }
          puVar16 = (uint *)0x0;
LAB_14a90668e:
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L"");
          if (bVar10) {
            pcVar5 = (code *)swi(3);
            uVar11 = (*pcVar5)();
            return (bool)uVar11;
          }
LAB_14a9066b4:
          pTVar7 = local_d8;
          uVar12 = puVar16[4];
          pFVar1 = (ForAnyElementType *)(puVar16 + 2);
          puVar20 = *(undefined4 **)(puVar16 + 2);
          puVar4 = puVar20 + (int)uVar12;
          while( true ) {
            if (puVar16[4] != uVar12) {
              local_137[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_137);
            }
            uVar13 = local_12c;
            if (puVar20 == puVar4) break;
            local_e0[0] = *puVar20;
            local_e8 = uVar6;
            (**(code **)pTVar7)(*(undefined8 *)&pTVar7->field_0x8,local_e0);
            puVar20 = puVar20 + 1;
          }
          if (pFVar2 != pFVar1) {
            uVar12 = puVar16[4];
            puVar3 = puVar19 + 5;
            pFVar18 = pFVar1->Data;
            puVar19[4] = uVar12;
            if ((uVar12 == 0) && (*puVar3 == 0)) {
              *puVar3 = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar12,*puVar3,pFVar2,uVar12,(int *)puVar3);
              if (uVar12 != 0) {
                memcpy(pFVar2->Data,pFVar18,(longlong)(int)uVar12 << 2);
              }
            }
          }
          uVar12 = puVar16[5];
          puVar16[4] = 0;
        }
        if ((int)uVar12 < 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,pFVar1,0,(int *)(puVar16 + 5));
        }
        local_12c = uVar13 - local_128;
        pTVar21 = local_c8;
        puVar23 = local_d0;
        param_1 = local_128;
      }
      local_124 = local_124 + 1;
      iVar15 = pTVar21->ArrayNum;
      local_c0 = local_c0 + 0xc;
      param_4 = local_b8;
      param_5 = local_a0;
    } while ((int)local_124 < iVar15);
  }
  uVar13 = param_4->ArrayNum;
  uVar12 = param_1 + local_12c;
  if (uVar12 == uVar13) {
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
    bVar10 = false;
  }
  else {
    if ((int)uVar13 < (int)uVar12) {
      iVar15 = Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                         (4,4,uVar12 - uVar13,&param_4->AllocatorInstance,local_b0,
                          &param_4->ArrayMax);
      memset((param_4->AllocatorInstance).Data + (longlong)iVar15 * 4,0,
             (longlong)(int)(uVar12 - uVar13) << 2);
    }
    else {
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      if ((int)uVar12 < (int)uVar13) {
        uVar13 = uVar13 - uVar12;
        if (((int)(uVar12 | uVar13) < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        if (uVar13 != 0) {
          pFVar18 = (param_4->AllocatorInstance).Data + (longlong)(int)uVar12 * 4;
          iVar15 = (param_4->ArrayNum - uVar12) - uVar13;
          if (iVar15 != 0) {
            memmove(pFVar18,pFVar18 + (longlong)(int)uVar13 * 4,(longlong)iVar15 << 2);
          }
          iVar15 = param_4->ArrayNum - uVar13;
          param_4->ArrayNum = iVar15;
          Core::Private::ReallocShrink<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,&param_4->AllocatorInstance,iVar15,&param_4->ArrayMax);
        }
      }
    }
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
    bVar10 = true;
  }
  return bVar10;
}

// ShowPrerequistes @ 14a908a70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::PoseSearch::ShowPrerequistes(FTickFunction *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  void *local_38 [2];
  
  if (param_2 < param_3) {
    pFVar5 = (param_1->Prerequisites).AllocatorInstance.Data;
    iVar1 = (param_1->Prerequisites).ArrayNum;
    pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((param_1->Prerequisites).ArrayNum != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FTickPrerequisite_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar5 == pFVar6) break;
      plVar2 = *(longlong **)(pFVar5 + 8);
      if (plVar2 != (longlong *)0x0) {
        if (4 < (byte)LogPoseSearch._0_1_) {
          (**(code **)(*plVar2 + 0x20))(plVar2,local_38);
          if (((param_2 * 2 < 0) || (0xff < param_2 * 2)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                                 ,0x272,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
          if (local_38[0] != (void *)0x0) {
            FMemory::Free(local_38[0]);
          }
        }
        ShowPrerequistes(*(FTickFunction **)(pFVar5 + 8),param_2 + 1,param_3);
      }
      pFVar5 = pFVar5 + 0x10;
    }
  }
  else if (4 < (byte)LogPoseSearch._0_1_) {
    TCString<wchar_t>::Spc(param_2 * 2);
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    return;
  }
  return;
}

// ValidateTickDependenciesCycles @ 14a90a560

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::PoseSearch::ValidateTickDependenciesCycles
          (FTickFunction *param_1,
          TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator> *param_2)

{
  int iVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  char local_res8 [16];
  char local_res18 [8];
  FTickFunction *local_res20;
  TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator> *local_48;
  char *local_40;
  code *local_38;
  TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator> **local_30;
  
  local_res8[0] = '\x01';
  local_res18[0] = '\0';
  local_48 = (TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator> *)
             param_1;
  TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::
  Emplace<FTickFunction_*>(param_2,&local_res20,(bool *)&local_48);
  if (local_res18[0] == '\0') {
    pFVar3 = (param_1->Prerequisites).AllocatorInstance.Data;
    iVar1 = (param_1->Prerequisites).ArrayNum;
    pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((param_1->Prerequisites).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FTickPrerequisite,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar3 == pFVar4) {
        if (local_res8[0] != '\0') {
          local_40 = local_res8;
          local_30 = &local_48;
          local_38 = Core::Private::Function::
                     TFunctionRefCaller<`UE::PoseSearch::ValidateTickDependenciesCycles'::__l38::<lambda_1>,void,FTickFunction_&>
                     ::Call;
          local_48 = param_2;
          (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_38);
        }
        goto LAB_14a90a69e;
      }
      if ((*(FTickFunction **)(pFVar3 + 8) != (FTickFunction *)0x0) &&
         (bVar2 = ValidateTickDependenciesCycles(*(FTickFunction **)(pFVar3 + 8),param_2), !bVar2))
      break;
      pFVar3 = pFVar3 + 0x10;
    }
    TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::Remove
              (param_2,param_1);
    local_res8[0] = '\0';
  }
  else {
    if (1 < (byte)LogPoseSearch._0_1_) {
      (**(code **)(param_1->_padding_ + 0x20))(param_1,&local_38);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
      if (local_38 != (code *)0x0) {
        FMemory::Free(local_38);
      }
    }
    local_res8[0] = '\0';
  }
LAB_14a90a69e:
  TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::Remove
            (param_2,param_1);
  return (bool)local_res8[0];
}

// Construct<FPoseSearchContinuingProperties> @ 14a90c770

void __cdecl UE::CoreUObject::Private::Construct<FPoseSearchContinuingProperties>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FPoseSearchContinuingProperties> @ 14a90c7b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPoseSearchContinuingProperties>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FPoseSearchContinuingProperties> @ 14a90c7f0

void __cdecl UE::CoreUObject::Private::Destruct<FPoseSearchContinuingProperties>(void *param_1)

{
  return;
}

// Copy<FPoseSearchContinuingProperties> @ 14a90c800

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseSearchContinuingProperties>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar3 = *puVar1;
      *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar1 + 1);
      *(undefined1 *)((longlong)puVar3 + 0xc) = *(undefined1 *)((longlong)puVar1 + 0xc);
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      puVar3[4] = puVar1[4];
      *(undefined1 *)(puVar3 + 5) = *(undefined1 *)(puVar1 + 5);
      *(undefined1 *)((longlong)puVar3 + 0x29) = *(undefined1 *)((longlong)puVar1 + 0x29);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[6] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[6]);
      }
      puVar3[6] = puVar1[6];
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 7;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPoseSearchFutureProperties> @ 14a90ca20

void __cdecl UE::CoreUObject::Private::Construct<FPoseSearchFutureProperties>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPoseSearchFutureProperties> @ 14a90ca30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPoseSearchFutureProperties>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPoseSearchFutureProperties> @ 14a90ca40

void __cdecl UE::CoreUObject::Private::Destruct<FPoseSearchFutureProperties>(void *param_1)

{
  return;
}

// Copy<FPoseSearchFutureProperties> @ 14a90ca50

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseSearchFutureProperties>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMotionMatchingState> @ 14a90cb60

void __cdecl UE::CoreUObject::Private::Construct<FMotionMatchingState>(void *param_1)

{
  memset(param_1,0,0xf8);
  FMotionMatchingState::FMotionMatchingState(param_1);
  return;
}

// ConstructForTests<FMotionMatchingState> @ 14a90cb90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMotionMatchingState>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x7f7fffff;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x7f7fffff;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  *(FName *)((longlong)param_1 + 0x60) = PoseSearch::DefaultRole;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  return;
}

// Destruct<FMotionMatchingState> @ 14a90cba0

void __cdecl UE::CoreUObject::Private::Destruct<FMotionMatchingState>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  if (*(void **)((longlong)param_1 + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe8));
  }
  TSparseArray<TSparseSetElement<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xa8));
  if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x88));
  }
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  return;
}

// Copy<FMotionMatchingState> @ 14a90cbb0

bool __cdecl
UE::CoreUObject::Private::Copy<FMotionMatchingState>(void *param_1,void *param_2,int param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  TSparseArray<TSparseSetElement<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  TSparseArray<TSparseSetElement<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  
  puVar5 = param_1;
  puVar6 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar4 = puVar6[1];
    *puVar5 = *puVar6;
    puVar5[1] = uVar4;
    puVar5[2] = puVar6[2];
    *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(puVar6 + 3);
    FPoseSearchBlueprintResult::operator=
              ((FPoseSearchBlueprintResult *)(puVar5 + 4),
               (FPoseSearchBlueprintResult *)
               ((longlong)puVar5 + (longlong)param_2 + (0x20 - (longlong)param_1)));
    pTVar2 = (TSparseArray<TSparseSetElement<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)puVar5 + (longlong)param_2 + (0xa8 - (longlong)param_1));
    *(undefined4 *)(puVar5 + 0x13) =
         *(undefined4 *)((longlong)puVar5 + (longlong)param_2 + (0x98 - (longlong)param_1));
    this = (TSparseArray<TSparseSetElement<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)(puVar5 + 0x15);
    *(undefined4 *)((longlong)puVar5 + 0x9c) =
         *(undefined4 *)((longlong)puVar5 + (longlong)param_2 + (0x9c - (longlong)param_1));
    *(undefined1 *)(puVar5 + 0x14) =
         *(undefined1 *)((longlong)puVar5 + (longlong)param_2 + (0xa0 - (longlong)param_1));
    if (this != pTVar2) {
      Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)(puVar5 + 0x1c),(int *)(puVar5 + 0x1e),
                 (ForElementType<FSetElementId> *)
                 ((longlong)puVar5 + (longlong)param_2 + (0xe0 - (longlong)param_1)),
                 *(int *)((longlong)puVar5 + (longlong)param_2 + (0xf0 - (longlong)param_1)));
      iVar3 = *(int *)((longlong)puVar5 + (longlong)param_2 + (0xb0 - (longlong)param_1));
      TSparseArray<TSparseSetElement<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty(this,iVar3);
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,iVar3,(ForAnyElementType *)this,(int *)(puVar5 + 0x16),
                 (int *)((longlong)puVar5 + 0xb4));
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)
               ((longlong)puVar5 + (longlong)param_2 + (0xb8 - (longlong)param_1));
      *(undefined4 *)(puVar5 + 0x1b) =
           *(undefined4 *)((longlong)puVar5 + (longlong)param_2 + (0xd8 - (longlong)param_1));
      *(undefined4 *)((longlong)puVar5 + 0xdc) =
           *(undefined4 *)((longlong)puVar5 + (longlong)param_2 + (0xdc - (longlong)param_1));
      if ((TBitArray<FDefaultBitArrayAllocator> *)(puVar5 + 0x17) != pTVar1) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)(puVar5 + 0x17),pTVar1);
      }
      if (iVar3 != 0) {
        memcpy(*(void **)this,*(void **)pTVar2,(longlong)iVar3 * 0x18);
      }
    }
    puVar5 = puVar5 + 0x1f;
    puVar6 = puVar6 + 0x1f;
  }
  return true;
}

// Construct<FPoseSearchQueryTrajectory> @ 14a90d6a0

void __cdecl UE::CoreUObject::Private::Construct<FPoseSearchQueryTrajectory>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPoseSearchQueryTrajectory> @ 14a90d6d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPoseSearchQueryTrajectory>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPoseSearchQueryTrajectory> @ 14a90d6e0

void __cdecl UE::CoreUObject::Private::Destruct<FPoseSearchQueryTrajectory>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FPoseSearchQueryTrajectory> @ 14a90d750

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseSearchQueryTrajectory>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar5;
  
  if (param_3 != 0) {
    pFVar5 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar5);
      if (pFVar5 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
        _Src = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar5[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,0x10,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3 << 6);
          }
        }
      }
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPoseSearchQueryTrajectorySample> @ 14a90d870

void __cdecl UE::CoreUObject::Private::Construct<FPoseSearchQueryTrajectorySample>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)param_1 = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 8) = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0x18) = dVar2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FPoseSearchQueryTrajectorySample> @ 14a90d8c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPoseSearchQueryTrajectorySample>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)param_1 = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 8) = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0x18) = dVar2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FPoseSearchQueryTrajectorySample> @ 14a90d900

void __cdecl UE::CoreUObject::Private::Destruct<FPoseSearchQueryTrajectorySample>(void *param_1)

{
  return;
}

// Copy<FPoseSearchQueryTrajectorySample> @ 14a90d910

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseSearchQueryTrajectorySample>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar9 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar9 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar9 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      param_1 = (void *)((longlong)param_1 + 0x40);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPoseSearchTrajectory_WorldCollisionResults> @ 14a90dae0

void __cdecl
UE::CoreUObject::Private::Construct<FPoseSearchTrajectory_WorldCollisionResults>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FPoseSearchTrajectory_WorldCollisionResults> @ 14a90daf0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPoseSearchTrajectory_WorldCollisionResults>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FPoseSearchTrajectory_WorldCollisionResults> @ 14a90db00

void __cdecl
UE::CoreUObject::Private::Destruct<FPoseSearchTrajectory_WorldCollisionResults>(void *param_1)

{
  return;
}

// Copy<FPoseSearchTrajectory_WorldCollisionResults> @ 14a90db10

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseSearchTrajectory_WorldCollisionResults>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      uVar1 = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined4 *)(lVar2 + (longlong)param_2) = *(undefined4 *)param_2;
      *(undefined4 *)(lVar2 + 4 + (longlong)param_2) = uVar1;
      param_2 = (void *)((longlong)param_2 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPoseSearchTrajectoryData> @ 14a90db50

void __cdecl UE::CoreUObject::Private::Construct<FPoseSearchTrajectoryData>(void *param_1)

{
  memset((void *)((longlong)param_1 + 0xd),0,0x11b);
  *(undefined4 *)param_1 = 0x41200000;
  *(undefined8 *)((longlong)param_1 + 4) = 0x428c0000;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  *(undefined1 *)((longlong)param_1 + 0x98) = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0xa0));
  return;
}

// ConstructForTests<FPoseSearchTrajectoryData> @ 14a90dbb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPoseSearchTrajectoryData>(void *param_1)

{
  *(undefined4 *)param_1 = 0x41200000;
  *(undefined8 *)((longlong)param_1 + 4) = 0x428c0000;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  *(undefined1 *)((longlong)param_1 + 0x98) = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0xa0));
  return;
}

// Destruct<FPoseSearchTrajectoryData> @ 14a90dc00

void __cdecl UE::CoreUObject::Private::Destruct<FPoseSearchTrajectoryData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x110) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x110));
  }
  *(undefined ***)((longlong)param_1 + 0xa0) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0xf8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf8));
  }
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  if (*(void **)((longlong)param_1 + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe8));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xa8));
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  return;
}

// Copy<FPoseSearchTrajectoryData> @ 14a90dc10

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseSearchTrajectoryData>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
      *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
      FRuntimeFloatCurve::operator=
                ((FRuntimeFloatCurve *)((longlong)param_1 + 0x10),
                 (FRuntimeFloatCurve *)((longlong)param_2 + 0x10));
      *(undefined1 *)((longlong)param_1 + 0x98) = *(undefined1 *)((longlong)param_2 + 0x98);
      FRuntimeFloatCurve::operator=
                ((FRuntimeFloatCurve *)((longlong)param_1 + 0xa0),
                 (FRuntimeFloatCurve *)((longlong)param_2 + 0xa0));
      param_2 = (void *)((longlong)param_2 + 0x128);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x128);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPoseSearchRoledSkeleton> @ 14a90e1a0

void __cdecl UE::CoreUObject::Private::Construct<FPoseSearchRoledSkeleton>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FPoseSearchRoledSkeleton> @ 14a90e210

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPoseSearchRoledSkeleton>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FPoseSearchRoledSkeleton> @ 14a90e280

void __cdecl UE::CoreUObject::Private::Destruct<FPoseSearchRoledSkeleton>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
    return;
  }
  return;
}

// Copy<FPoseSearchRoledSkeleton> @ 14a90e2d0

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseSearchRoledSkeleton>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_3 != 0) {
    puVar6 = param_1;
    do {
      puVar5 = (undefined8 *)((longlong)puVar6 + ((longlong)param_2 - (longlong)param_1));
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar5 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar5);
      }
      *puVar6 = *puVar5;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar5[1] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar5[1]);
      }
      puVar6[1] = puVar5[1];
      puVar6[2] = puVar5[2];
      pFVar1 = (ForAnyElementType *)(puVar6 + 3);
      if (pFVar1 != (ForAnyElementType *)(puVar5 + 3)) {
        iVar3 = *(int *)(puVar5 + 4);
        piVar2 = (int *)((longlong)puVar6 + 0x24);
        pFVar4 = ((ForAnyElementType *)(puVar5 + 3))->Data;
        *(int *)(puVar6 + 4) = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,iVar3,*piVar2,pFVar1,iVar3,piVar2);
          if (iVar3 != 0) {
            memcpy(pFVar1->Data,pFVar4,(longlong)iVar3 << 4);
          }
        }
      }
      pFVar1 = (ForAnyElementType *)(puVar6 + 5);
      if (pFVar1 != (ForAnyElementType *)(puVar5 + 5)) {
        iVar3 = *(int *)(puVar5 + 6);
        piVar2 = (int *)((longlong)puVar6 + 0x34);
        pFVar4 = ((ForAnyElementType *)(puVar5 + 5))->Data;
        *(int *)(puVar6 + 6) = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar3,*piVar2,pFVar1,iVar3,piVar2);
          if (iVar3 != 0) {
            memcpy(pFVar1->Data,pFVar4,(longlong)iVar3 * 2);
          }
        }
      }
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)(puVar6 + 7),
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)(puVar5 + 7));
      param_3 = param_3 + -1;
      puVar6 = puVar6 + 9;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPoseSearchBlueprintResult> @ 14a90e690

void __cdecl UE::CoreUObject::Private::Construct<FPoseSearchBlueprintResult>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x7f7fffff;
  *(FName *)((longlong)param_1 + 0x40) = PoseSearch::DefaultRole;
  return;
}

// ConstructForTests<FPoseSearchBlueprintResult> @ 14a90e6f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPoseSearchBlueprintResult>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x7f7fffff;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  *(FName *)((longlong)param_1 + 0x40) = PoseSearch::DefaultRole;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  return;
}

// Destruct<FPoseSearchBlueprintResult> @ 14a90e760

void __cdecl UE::CoreUObject::Private::Destruct<FPoseSearchBlueprintResult>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
    return;
  }
  return;
}

// Copy<FPoseSearchBlueprintResult> @ 14a90e7e0

bool __cdecl
UE::CoreUObject::Private::Copy<FPoseSearchBlueprintResult>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if (param_3 != 0) {
    puVar7 = param_1;
    do {
      puVar3 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar7);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar3 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar3);
      }
      *puVar7 = *puVar3;
      *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar3 + 1);
      *(undefined1 *)((longlong)puVar7 + 0xc) = *(undefined1 *)((longlong)puVar3 + 0xc);
      *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar3 + 2);
      *(undefined1 *)((longlong)puVar7 + 0x14) = *(undefined1 *)((longlong)puVar3 + 0x14);
      *(undefined1 *)((longlong)puVar7 + 0x15) = *(undefined1 *)((longlong)puVar3 + 0x15);
      uVar6 = puVar3[4];
      puVar7[3] = puVar3[3];
      puVar7[4] = uVar6;
      puVar7[5] = puVar3[5];
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar3[6] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar3[6]);
      }
      puVar7[6] = puVar3[6];
      *(undefined4 *)(puVar7 + 7) = *(undefined4 *)(puVar3 + 7);
      *(undefined1 *)((longlong)puVar7 + 0x3c) = *(undefined1 *)((longlong)puVar3 + 0x3c);
      puVar7[8] = puVar3[8];
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(puVar7 + 9),
                 (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(puVar3 + 9));
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(puVar7 + 0xb),
                 (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(puVar3 + 0xb))
      ;
      pFVar1 = (ForAnyElementType *)(puVar7 + 0xd);
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 0xd)) {
        iVar4 = *(int *)(puVar3 + 0xe);
        piVar2 = (int *)((longlong)puVar7 + 0x74);
        pFVar5 = ((ForAnyElementType *)(puVar3 + 0xd))->Data;
        *(int *)(puVar7 + 0xe) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          ConstructItems<TObjectPtr<UObject_const_>,TObjectPtr<UObject_const_>,int>
                    (pFVar1->Data,(TObjectPtr<UObject_const_> *)pFVar5,iVar4);
        }
      }
      param_3 = param_3 + -1;
      puVar7 = puVar7 + 0xf;
    } while (param_3 != 0);
  }
  return true;
}

// Identical<FPoseSearchBlueprintResult> @ 14a90e960

bool __cdecl
UE::CoreUObject::Private::Identical<FPoseSearchBlueprintResult>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if (((((((*(longlong *)param_1 == *(longlong *)param_2) &&
          (*(float *)((longlong)param_2 + 8) == *(float *)((longlong)param_1 + 8))) &&
         (*(char *)((longlong)param_1 + 0xc) == *(char *)((longlong)param_2 + 0xc))) &&
        ((*(float *)((longlong)param_2 + 0x10) == *(float *)((longlong)param_1 + 0x10) &&
         (*(char *)((longlong)param_1 + 0x14) == *(char *)((longlong)param_2 + 0x14))))) &&
       ((*(char *)((longlong)param_1 + 0x15) == *(char *)((longlong)param_2 + 0x15) &&
        ((*(double *)((longlong)param_2 + 0x18) == *(double *)((longlong)param_1 + 0x18) &&
         (*(double *)((longlong)param_2 + 0x20) == *(double *)((longlong)param_1 + 0x20))))))) &&
      (*(double *)((longlong)param_2 + 0x28) == *(double *)((longlong)param_1 + 0x28))) &&
     (((((*(longlong *)((longlong)param_1 + 0x30) == *(longlong *)((longlong)param_2 + 0x30) &&
         (*(float *)((longlong)param_2 + 0x38) == *(float *)((longlong)param_1 + 0x38))) &&
        (*(char *)((longlong)param_1 + 0x3c) == *(char *)((longlong)param_2 + 0x3c))) &&
       (((*(longlong *)((longlong)param_1 + 0x40) == *(longlong *)((longlong)param_2 + 0x40) &&
         (*(int *)((longlong)param_1 + 0x70) == *(int *)((longlong)param_2 + 0x70))) &&
        ((bVar1 = CompareItems<TObjectPtr<UObject_const_>,int>
                            (*(TObjectPtr<UObject_const_> **)((longlong)param_1 + 0x68),
                             *(TObjectPtr<UObject_const_> **)((longlong)param_2 + 0x68),
                             *(int *)((longlong)param_1 + 0x70)), bVar1 &&
         ((*(int *)((longlong)param_1 + 0x50) == *(int *)((longlong)param_2 + 0x50) &&
          (iVar3 = *(int *)((longlong)param_1 + 0x60), iVar3 == *(int *)((longlong)param_2 + 0x60)))
         )))))) &&
      ((iVar2 = memcmp(*(void **)((longlong)param_1 + 0x48),*(void **)((longlong)param_2 + 0x48),
                       (longlong)*(int *)((longlong)param_1 + 0x50) * 0x60), iVar2 == 0 &&
       (iVar3 = memcmp(*(void **)((longlong)param_1 + 0x58),*(void **)((longlong)param_2 + 0x58),
                       (longlong)iVar3 * 0x60), iVar3 == 0)))))) {
    *param_4 = true;
    return true;
  }
  *param_4 = false;
  return true;
}

// CopyHash<TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>_> @ 14a90f960

void __cdecl
UE::Core::Private::
CopyHash<TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>_>
          (ForElementType<FSetElementId> *param_1,int *param_2,
          ForElementType<FSetElementId> *param_3,int param_4)

{
  ForElementType<FSetElementId> *pFVar1;
  uint *puVar2;
  FTlsAutoCleanup *pFVar3;
  FSetElementId *pFVar4;
  ulong64 uVar5;
  undefined1 local_res20 [8];
  code *local_18;
  undefined1 *local_10;
  
  if ((4 < (uint)param_4) && (param_4 != 0)) {
    if (param_4 < 0) {
                    /* WARNING: Subroutine does not return */
      OnInvalidMemStackAllocatorNum(param_4,4);
    }
    puVar2 = TThreadSingleton<FMemStack>::GetTlsSlot();
    local_10 = local_res20;
    local_18 = Function::
               TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar3 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar2);
    uVar5 = 8;
    if (0xf < (ulonglong)(longlong)(param_4 * 4)) {
      uVar5 = 0x10;
    }
    pFVar4 = FMemStackBase::Alloc((FMemStackBase *)(pFVar3 + 2),(longlong)(param_4 * 4),uVar5);
    (param_1->SecondaryData).Data = pFVar4;
  }
  pFVar1 = (ForElementType<FSetElementId> *)(param_3->SecondaryData).Data;
  if (pFVar1 != (ForElementType<FSetElementId> *)0x0) {
    param_3 = pFVar1;
  }
  pFVar1 = (ForElementType<FSetElementId> *)(param_1->SecondaryData).Data;
  if (pFVar1 != (ForElementType<FSetElementId> *)0x0) {
    param_1 = pFVar1;
  }
  if (param_4 != 0) {
    memcpy(param_1,param_3,(longlong)param_4 << 2);
  }
  *param_2 = param_4;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::IPoseHistory_const_*>_> @ 14a914f80

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::IPoseHistory_const_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::PoseSearch::IPoseHistory_const_*> *param_5,int param_6,int *param_7)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 4, 4 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::
  ForElementType<UE::PoseSearch::IPoseHistory_const_*>::ResizeAllocation
            (param_5,0,iVar1,(ulonglong)param_1);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FInteractionSearchContext>_> @ 14a914fe0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FInteractionSearchContext>_>
          (uint param_1,uint param_2,
          ForElementType<UE::PoseSearch::FInteractionSearchContext> *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_4;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::
    ForElementType<UE::PoseSearch::FInteractionSearchContext>::ResizeAllocation
              (param_3,uVar2,uVar3,(ulonglong)param_1);
    *param_4 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<int>_> @ 14a915100

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<int>_>
          (ushort param_1,ForElementType<int> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    if (uVar1 < 0x11) {
      uVar3 = 0x10;
    }
    else {
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<int>::ResizeAllocation
              (param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<AActor_*>_> @ 14a9151b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<AActor_*>_>
          (ushort param_1,ForElementType<AActor_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<AActor_*>::ResizeAllocation
              (param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UAnimInstance_*>_> @ 14a915250

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UAnimInstance_*>_>
          (ushort param_1,ForElementType<UAnimInstance_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UAnimInstance_*>::
    ResizeAllocation(param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UPrimitiveComponent_*>_> @ 14a9152f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UPrimitiveComponent_*>_>
          (ushort param_1,ForElementType<UPrimitiveComponent_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UPrimitiveComponent_*>::
    ResizeAllocation(param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FAnimContextInfo_const_*>_> @ 14a915390

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FAnimContextInfo_const_*>_>
          (ushort param_1,ForElementType<UE::PoseSearch::FAnimContextInfo_const_*> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    if (uVar1 < 9) {
      uVar3 = 8;
    }
    else {
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::
    ForElementType<UE::PoseSearch::FAnimContextInfo_const_*>::ResizeAllocation
              (param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UAnimInstance_const_*>_> @ 14a915440

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UAnimInstance_const_*>_>
          (ushort param_1,ForElementType<UAnimInstance_const_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    iVar8 = 0x80;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x80 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x81) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UAnimInstance_const_*>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UObject_const_*>_> @ 14a915510

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UObject_const_*>_>
          (ushort param_1,ForElementType<UObject_const_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UObject_const_*>::
    ResizeAllocation(param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_> @ 14a9155b0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_>
          (ushort param_1,ForElementType<UObject_const_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    iVar8 = 0x100;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x100 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x101) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>::ForElementType<UPoseSearchDatabase_const_*>_> @ 14a915680

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>::ForElementType<UPoseSearchDatabase_const_*>_>
          (ushort param_1,ForElementType<UPoseSearchDatabase_const_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    if (uVar1 < 0x21) {
      uVar3 = 0x20;
    }
    else {
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>::ForElementType<UPoseSearchDatabase_const_*>
    ::ResizeAllocation(param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<TTuple<UObject_const_*,int>_>_> @ 14a915730

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<TTuple<UObject_const_*,int>_>_>
          (ushort param_1,ForElementType<TTuple<UObject_const_*,int>_> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    if (uVar1 < 0x11) {
      uVar3 = 0x10;
    }
    else {
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::
    ForElementType<TTuple<UObject_const_*,int>_>::ResizeAllocation
              (param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>_>_> @ 14a9157e0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>_>_>
          (ushort param_1,
          ForElementType<TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>_>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    if (uVar1 < 9) {
      uVar3 = 8;
    }
    else {
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::
    ForElementType<TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>_>
    ::ResizeAllocation(param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>_> @ 14a915890

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>_>
          (ushort param_1,ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>::ResizeAllocation
              (param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FCachedQuery>_> @ 14a915950

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FCachedQuery>_>
          (ushort param_1,ForElementType<UE::PoseSearch::FCachedQuery> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    if (uVar1 < 9) {
      uVar3 = 8;
    }
    else {
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FCachedQuery>
    ::ResizeAllocation(param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FPoseSearchInteractionAvailability>_> @ 14a915a00

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FPoseSearchInteractionAvailability>_>
          (ushort param_1,ForElementType<FPoseSearchInteractionAvailability> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FPoseSearchInteractionAvailability>::ResizeAllocation
              (param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FSearchResult>_> @ 14a915b60

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FSearchResult>_>
          (ushort param_1,ForElementType<UE::PoseSearch::FSearchResult> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::
    ForElementType<UE::PoseSearch::FSearchResult>::ResizeAllocation
              (param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FSearchResult>_> @ 14a915c00

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FSearchResult>_>
          (ushort param_1,ForElementType<UE::PoseSearch::FSearchResult> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    if (uVar1 < 9) {
      uVar3 = 8;
    }
    else {
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::
    ForElementType<UE::PoseSearch::FSearchResult>::ResizeAllocation
              (param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::PoseSearch::FValidInteractionSearch>_> @ 14a915cb0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::PoseSearch::FValidInteractionSearch>_>
          (ushort param_1,ForElementType<UE::PoseSearch::FValidInteractionSearch> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::PoseSearch::FValidInteractionSearch>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>_> @ 14a915d80

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>_>
          (ushort param_1,ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>_>::ResizeAllocation
              (param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<FName>_> @ 14a915e40

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<FName>_>
          (ushort param_1,ForElementType<FName> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<FName>::ResizeAllocation
              (param_2,uVar2,uVar3,(ulonglong)(byte)param_1);
    *param_3 = uVar3;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_> @ 14a915ee0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_short> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 2) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UMirrorDataTable_const_*>_> @ 14a915fc0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UMirrorDataTable_const_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UMirrorDataTable_const_*> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  uVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar4 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar3 = 4;
    if (4 < uVar1) {
      if (uVar4 < 5) {
        uVar4 = 0;
      }
      if (uVar4 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UMirrorDataTable_const_*>::
    ResizeAllocation(param_4,iVar2,uVar3,(ulonglong)param_1);
    *param_6 = uVar3;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_> @ 14a916070

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  uVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar4 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar3 = 4;
    if (4 < uVar1) {
      if (uVar4 < 5) {
        uVar4 = 0;
      }
      if (uVar4 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>::ResizeAllocation
              (param_4,iVar2,uVar3,(ulonglong)param_1);
    *param_6 = uVar3;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_> @ 14a916120

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (uVar1 < 0x21) {
      uVar3 = 0x20;
    }
    else {
      if (uVar3 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>::ResizeAllocation
              (param_4,iVar2,uVar3,(ulonglong)param_1);
    *param_6 = uVar3;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_> @ 14a9161d0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    iVar7 = 0x80;
    uVar8 = (ulonglong)param_1;
    if (0x80 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x81) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar8 * uVar3,0);
      iVar7 = (int)(uVar4 / uVar8);
      if (iVar7 < (int)uVar1) {
        iVar7 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>::ResizeAllocation
              (param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_>_>_> @ 14a9162b0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (uVar1 < 9) {
      uVar3 = 8;
    }
    else {
      if (uVar3 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_>_>::ResizeAllocation
              (param_4,iVar2,uVar3,(ulonglong)param_1);
    *param_6 = uVar3;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_> @ 14a916360

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (uVar1 < 0x11) {
      uVar3 = 0x10;
    }
    else {
      if (uVar3 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>::ResizeAllocation
              (param_4,iVar2,uVar3,(ulonglong)param_1);
    *param_6 = uVar3;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>_> @ 14a916410

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (uVar1 < 0x11) {
      uVar3 = 0x10;
    }
    else {
      if (uVar3 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>::ResizeAllocation
              (param_4,iVar2,uVar3,(ulonglong)param_1);
    *param_6 = uVar3;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<752,8>_>_>_> @ 14a9164c0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<752,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<752,8>_>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  uVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar4 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar3 = 4;
    if (4 < uVar1) {
      if (uVar4 < 5) {
        uVar4 = 0;
      }
      if (uVar4 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<752,8>_>_>::ResizeAllocation
              (param_4,iVar2,uVar3,(ulonglong)param_1);
    *param_6 = uVar3;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_>_> @ 14a916570

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (uVar1 < 0x11) {
      uVar3 = 0x10;
    }
    else {
      if (uVar3 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_>::ResizeAllocation
              (param_4,iVar2,uVar3,(ulonglong)param_1);
    *param_6 = uVar3;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>_>_> @ 14a916620

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  uVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar4 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar3 = 4;
    if (4 < uVar1) {
      if (uVar4 < 5) {
        uVar4 = 0;
      }
      if (uVar4 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>_>::ResizeAllocation
              (param_4,iVar2,uVar3,(ulonglong)param_1);
    *param_6 = uVar3;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::Math::TTransform<double>_>_> @ 14a9166d0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::Math::TTransform<double>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Math::TTransform<double>_> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  uVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar4 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar3 = 4;
    if (4 < uVar1) {
      if (uVar4 < 5) {
        uVar4 = 0;
      }
      if (uVar4 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::
    ForElementType<UE::Math::TTransform<double>_>::ResizeAllocation
              (param_4,iVar2,uVar3,(ulonglong)param_1);
    *param_6 = uVar3;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FMemStackPoseHistory>_> @ 14a916780

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FMemStackPoseHistory>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::PoseSearch::FMemStackPoseHistory> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  uVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar4 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar3 = 4;
    if (4 < uVar1) {
      if (uVar4 < 5) {
        uVar4 = 0;
      }
      if (uVar4 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::
    ForElementType<UE::PoseSearch::FMemStackPoseHistory>::ResizeAllocation
              (param_4,iVar2,uVar3,(ulonglong)param_1);
    *param_6 = uVar3;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<bool>_> @ 14a916830

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<bool>_>
          (uint param_1,uint param_2,int param_3,ForElementType<bool> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  uVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar4 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar3 = 4;
    if (4 < uVar1) {
      if (uVar4 < 5) {
        uVar4 = 0;
      }
      if (uVar4 == 0) {
        uVar3 = 4;
        if (4 < (ulonglong)(longlong)(int)uVar1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<bool>::ResizeAllocation
              (param_4,iVar2,uVar3,(ulonglong)param_1);
    *param_6 = uVar3;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_> @ 14a9168e0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_>
          (uint param_1,uint param_2,int param_3,ForElementType<bool> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x11) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FAnimContextInfo>_> @ 14a9169c0

int __cdecl
UE::Core::Private::
ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FAnimContextInfo>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::PoseSearch::FAnimContextInfo> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_5;
  iVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar3 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (iVar3 == 0) {
      uVar4 = 4;
      if (4 < (ulonglong)(longlong)(int)uVar1) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = 0x7fffffff;
    }
    TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FAnimContextInfo>::ResizeAllocation
              (param_4,iVar2,uVar4,(ulonglong)param_1);
    *param_6 = uVar4;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_> @ 14a916a60

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
          (uint param_1,uint param_2,ForElementType<unsigned_short> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 2) {
    iVar2 = 1;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UAnimInstance_const_*>_> @ 14a916b20

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UAnimInstance_const_*>_>
          (uint param_1,uint param_2,ForElementType<UAnimInstance_const_*> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  iVar2 = 0x80;
  if (0x80 < (uint)param_4) {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UAnimInstance_const_*>
    ::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UMirrorDataTable_const_*>_> @ 14a916be0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UMirrorDataTable_const_*>_>
          (uint param_1,uint param_2,ForElementType<UMirrorDataTable_const_*> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else if ((((longlong)(iVar1 - param_4) * (ulonglong)param_1 < 0x4000) &&
           (iVar1 * 2 <= param_4 * 3)) ||
          ((iVar2 = param_4, iVar1 - param_4 < 0x41 && (param_4 != 0)))) {
    iVar2 = iVar1;
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UMirrorDataTable_const_*>::
    ResizeAllocation(param_3,param_4,iVar2,(ulonglong)param_1);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::Math::TTransform<double>_>_> @ 14a916c70

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::Math::TTransform<double>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TTransform<double>_> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else if ((((longlong)(iVar1 - param_4) * (ulonglong)param_1 < 0x4000) &&
           (iVar1 * 2 <= param_4 * 3)) ||
          ((iVar2 = param_4, iVar1 - param_4 < 0x41 && (param_4 != 0)))) {
    iVar2 = iVar1;
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::
    ForElementType<UE::Math::TTransform<double>_>::ResizeAllocation
              (param_3,param_4,iVar2,(ulonglong)param_1);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FMemStackPoseHistory>_> @ 14a916d90

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FMemStackPoseHistory>_>
          (uint param_1,uint param_2,ForElementType<UE::PoseSearch::FMemStackPoseHistory> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else if ((((longlong)(iVar1 - param_4) * (ulonglong)param_1 < 0x4000) &&
           (iVar1 * 2 <= param_4 * 3)) ||
          ((iVar2 = param_4, iVar1 - param_4 < 0x41 && (param_4 != 0)))) {
    iVar2 = iVar1;
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::
    ForElementType<UE::PoseSearch::FMemStackPoseHistory>::ResizeAllocation
              (param_3,param_4,iVar2,(ulonglong)param_1);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FSearchResult>_> @ 14a916e20

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FSearchResult>_>
          (uint param_1,uint param_2,ForElementType<UE::PoseSearch::FSearchResult> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_5;
  if ((uint)param_4 < 9) {
    iVar2 = 8;
  }
  else if ((((longlong)(iVar1 - param_4) * (ulonglong)param_1 < 0x4000) &&
           (iVar1 * 2 <= param_4 * 3)) ||
          ((iVar2 = param_4, iVar1 - param_4 < 0x41 && (param_4 != 0)))) {
    iVar2 = iVar1;
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::
    ForElementType<UE::PoseSearch::FSearchResult>::ResizeAllocation
              (param_3,param_4,iVar2,(ulonglong)param_1);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<bool>_> @ 14a916eb0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<bool>_>
          (uint param_1,uint param_2,ForElementType<bool> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else if ((((longlong)(iVar1 - param_4) * (ulonglong)param_1 < 0x4000) &&
           (iVar1 * 2 <= param_4 * 3)) ||
          ((iVar2 = param_4, iVar1 - param_4 < 0x41 && (param_4 != 0)))) {
    iVar2 = iVar1;
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<bool>::ResizeAllocation
              (param_3,param_4,iVar2,(ulonglong)param_1);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_> @ 14a916f40

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_>
          (uint param_1,uint param_2,ForElementType<bool> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x11) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<0,TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FAnimContextInfo>_> @ 14a917000

void __cdecl
UE::Core::Private::
ReallocShrink<0,TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FAnimContextInfo>_>
          (uint param_1,uint param_2,ForElementType<UE::PoseSearch::FAnimContextInfo> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = *param_5;
  if ((((0x3fff < (longlong)(iVar1 - param_4) * (ulonglong)param_1) || (param_4 * 3 < iVar1 * 2)) &&
      ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (param_4 != iVar1)) {
    *param_5 = param_4;
    TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FAnimContextInfo>::ResizeAllocation
              (param_3,param_4,param_4,(ulonglong)param_1);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_> @ 14a917070

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 4, 4 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 == *param_6) {
    return;
  }
  *param_6 = iVar1;
  TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>::ResizeAllocation
            (param_4,param_5,iVar1,(ulonglong)param_1);
  return;
}

// ReallocTo<2,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_> @ 14a9170b0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 0x20, 0x20 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 == *param_6) {
    return;
  }
  *param_6 = iVar1;
  TSizedInlineAllocator<32,32,TMemStackAllocator<0>_>::
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>::ResizeAllocation
            (param_4,param_5,iVar1,(ulonglong)param_1);
  return;
}

// ReallocTo<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_> @ 14a9170f0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x81) {
      iVar1 = 0x80;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_>_>_> @ 14a917170

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_>_> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 8, 8 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 == *param_6) {
    return;
  }
  *param_6 = iVar1;
  TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_>_>::ResizeAllocation
            (param_4,param_5,iVar1,(ulonglong)param_1);
  return;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_> @ 14a9171b0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 0x10, 0x10 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 == *param_6) {
    return;
  }
  *param_6 = iVar1;
  TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>::ResizeAllocation
            (param_4,param_5,iVar1,(ulonglong)param_1);
  return;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_>_> @ 14a9171f0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 0x10, 0x10 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 == *param_6) {
    return;
  }
  *param_6 = iVar1;
  TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_>::ResizeAllocation
            (param_4,param_5,iVar1,(ulonglong)param_1);
  return;
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>_>_> @ 14a917230

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>_> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 4, 4 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 == *param_6) {
    return;
  }
  *param_6 = iVar1;
  TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_>_>::ResizeAllocation
            (param_4,param_5,iVar1,(ulonglong)param_1);
  return;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<TTuple<UObject_const_*,int>_>_> @ 14a917270

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<TTuple<UObject_const_*,int>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TTuple<UObject_const_*,int>_> *param_4,int param_5,int *param_6)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 0x10, 0x10 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 == *param_6) {
    return;
  }
  *param_6 = iVar1;
  TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<TTuple<UObject_const_*,int>_>
  ::ResizeAllocation(param_4,param_5,iVar1,(ulonglong)param_1);
  return;
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FSearchResult>_> @ 14a9172b0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FSearchResult>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::PoseSearch::FSearchResult> *param_4,int param_5,int *param_6)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 4, 4 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 == *param_6) {
    return;
  }
  *param_6 = iVar1;
  TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FSearchResult>
  ::ResizeAllocation(param_4,param_5,iVar1,(ulonglong)param_1);
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FSearchResult>_> @ 14a9172f0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FSearchResult>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::PoseSearch::FSearchResult> *param_4,int param_5,int *param_6)

{
  int iVar1;
  
  iVar1 = param_3;
  if ((param_3 != 0) && (iVar1 = 8, 8 < (uint)param_3)) {
    iVar1 = param_3;
  }
  if (iVar1 == *param_6) {
    return;
  }
  *param_6 = iVar1;
  TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<UE::PoseSearch::FSearchResult>
  ::ResizeAllocation(param_4,param_5,iVar1,(ulonglong)param_1);
  return;
}

// RegisterType<FPoseHistoryAnimationAttribute> @ 14a917330

void __cdecl UE::Anim::AttributeTypes::RegisterType<FPoseHistoryAnimationAttribute>(void)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  UScriptStruct *local_res8 [4];
  FWeakObjectPtr local_18;
  undefined8 *local_10;
  
  local_res8[0] = FPoseHistoryAnimationAttribute::StaticStruct();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  local_18.ObjectIndex = 0;
  local_18.ObjectSerialNumber = 0;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  FWeakObjectPtr::operator=(&local_18,(FObjectPtr)local_res8);
  if (((RegisteredTypes.AllocatorInstance.Data <= &local_18) &&
      (&local_18 <
       (FWeakObjectPtr *)
       (RegisteredTypes.AllocatorInstance.Data + (longlong)RegisteredTypes.ArrayMax * 8))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (RegisteredTypes.ArrayNum == RegisteredTypes.ArrayMax) {
    RegisteredTypes.ArrayNum =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&RegisteredTypes.AllocatorInstance,&RegisteredTypes.ArrayMax);
  }
  lVar3 = (longlong)RegisteredTypes.ArrayNum;
  RegisteredTypes.ArrayNum = RegisteredTypes.ArrayNum + 1;
  *(FWeakObjectPtr *)(RegisteredTypes.AllocatorInstance.Data + lVar3 * 8) = local_18;
  local_10 = ::operator_new(8);
  if (local_10 != (undefined8 *)0x0) {
    *local_10 = &___7__TAttributeBlendOperator_UFPoseHistoryAnimationAttribute___Anim_UE__6B_;
  }
  if (((Operators.AllocatorInstance.Data <= (FScriptContainerElement *)&local_10) &&
      ((FScriptContainerElement *)&local_10 <
       Operators.AllocatorInstance.Data + (longlong)Operators.ArrayMax * 8)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (Operators.ArrayNum == Operators.ArrayMax) {
    Operators.ArrayNum =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&Operators.AllocatorInstance,&Operators.ArrayMax);
  }
  lVar3 = (longlong)Operators.ArrayNum;
  Operators.ArrayNum = Operators.ArrayNum + 1;
  *(undefined8 **)(Operators.AllocatorInstance.Data + lVar3 * 8) = local_10;
  return;
}

// Rehash<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>_> @ 14a917540

void __cdecl
UE::Core::Private::
Rehash<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>_>
          (ForElementType<FSetElementId> *param_1,int param_2)

{
  uchar *puVar1;
  ForElementType<FSetElementId> *pFVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> *pFVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if ((param_2 != 0) &&
     (TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>::
      ResizeAllocation(param_1,0,param_2,4), 0 < param_2)) {
    uVar6 = (ulonglong)(uint)param_2;
    uVar5 = 0;
    do {
      pFVar2 = (ForElementType<FSetElementId> *)(param_1->SecondaryData).Data;
      pFVar4 = param_1;
      if (pFVar2 != (ForElementType<FSetElementId> *)0x0) {
        pFVar4 = pFVar2;
      }
      uVar3 = uVar5 & (longlong)param_2 - 1U;
      uVar5 = uVar5 + 1;
      puVar1 = pFVar4->InlineData + uVar3 * 4;
      puVar1[0] = 0xff;
      puVar1[1] = 0xff;
      puVar1[2] = 0xff;
      puVar1[3] = 0xff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

// Rehash<TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>_> @ 14a9175b0

void __cdecl
UE::Core::Private::
Rehash<TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>_>
          (ForElementType<FSetElementId> *param_1,int param_2)

{
  uchar *puVar1;
  ForElementType<FSetElementId> *pFVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> *pFVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if ((param_2 != 0) &&
     (TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>::
      ResizeAllocation(param_1,0,param_2,4), 0 < param_2)) {
    uVar6 = (ulonglong)(uint)param_2;
    uVar5 = 0;
    do {
      pFVar2 = (ForElementType<FSetElementId> *)(param_1->SecondaryData).Data;
      pFVar4 = param_1;
      if (pFVar2 != (ForElementType<FSetElementId> *)0x0) {
        pFVar4 = pFVar2;
      }
      uVar3 = uVar5 & (longlong)param_2 - 1U;
      uVar5 = uVar5 + 1;
      puVar1 = pFVar4->InlineData + uVar3 * 4;
      puVar1[0] = 0xff;
      puVar1[1] = 0xff;
      puVar1[2] = 0xff;
      puVar1[3] = 0xff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

// Rehash<TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>_> @ 14a917620

void __cdecl
UE::Core::Private::
Rehash<TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>_>
          (ForElementType<FSetElementId> *param_1,int param_2)

{
  uchar *puVar1;
  ForElementType<FSetElementId> *pFVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> *pFVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if ((param_2 != 0) &&
     (TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<FSetElementId>::
      ResizeAllocation(param_1,0,param_2,4), 0 < param_2)) {
    uVar6 = (ulonglong)(uint)param_2;
    uVar5 = 0;
    do {
      pFVar2 = (ForElementType<FSetElementId> *)(param_1->SecondaryData).Data;
      pFVar4 = param_1;
      if (pFVar2 != (ForElementType<FSetElementId> *)0x0) {
        pFVar4 = pFVar2;
      }
      uVar3 = uVar5 & (longlong)param_2 - 1U;
      uVar5 = uVar5 + 1;
      puVar1 = pFVar4->InlineData + uVar3 * 4;
      puVar1[0] = 0xff;
      puVar1[1] = 0xff;
      puVar1[2] = 0xff;
      puVar1[3] = 0xff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

// UnregisterType<FPoseHistoryAnimationAttribute> @ 14a9182b0

void __cdecl UE::Anim::AttributeTypes::UnregisterType<FPoseHistoryAnimationAttribute>(void)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UScriptStruct *pUVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  
  bVar5 = UObjectInitialized();
  if (bVar5) {
    pUVar8 = FPoseHistoryAnimationAttribute::StaticStruct();
    FVar4 = RegisteredTypes.AllocatorInstance;
    pFVar1 = RegisteredTypes.AllocatorInstance.Data + (longlong)RegisteredTypes.ArrayNum * 8;
    for (FVar10 = RegisteredTypes.AllocatorInstance; FVar10.Data != pFVar1;
        FVar10.Data = FVar10.Data + 8) {
      bVar5 = TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::UEOpEquals<UScriptStruct,bool>
                        ((TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)FVar10.Data,pUVar8);
      if (bVar5) {
        uVar9 = (uint)((longlong)FVar10.Data - (longlong)FVar4.Data >> 3);
        if (uVar9 == 0xffffffff) {
          return;
        }
        uVar6 = 0;
        if ((int)uVar9 < RegisteredTypes.ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = (RegisteredTypes.ArrayNum - uVar9) + -1;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove(RegisteredTypes.AllocatorInstance.Data + (longlong)(int)uVar9 * 8,
                  RegisteredTypes.AllocatorInstance.Data +
                  (longlong)(RegisteredTypes.ArrayNum - iVar7) * 8,(longlong)iVar7 << 3);
        }
        RegisteredTypes.ArrayNum = RegisteredTypes.ArrayNum + -1;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,&RegisteredTypes.AllocatorInstance,RegisteredTypes.ArrayNum,
                   &RegisteredTypes.ArrayMax);
        uVar6 = 0;
        if ((int)uVar9 < Operators.ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar10.Data = Operators.AllocatorInstance.Data;
        puVar2 = *(undefined8 **)(Operators.AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
        pFVar1 = Operators.AllocatorInstance.Data + (longlong)(int)uVar9 * 8;
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        iVar7 = (Operators.ArrayNum - uVar9) + -1;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove(pFVar1,FVar10.Data + (longlong)(Operators.ArrayNum - iVar7) * 8,
                  (longlong)iVar7 << 3);
        }
        Operators.ArrayNum = Operators.ArrayNum + -1;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&Operators.AllocatorInstance,Operators.ArrayNum,&Operators.ArrayMax);
        return;
      }
    }
  }
  return;
}

// operator<< @ 14a91b3a0

FArchive * __cdecl UE::PoseSearch::operator<<(FArchive *param_1,FTraceMessage *param_2)

{
  int *piVar1;
  ulong64 *puVar2;
  ulong64 *puVar3;
  int *piVar4;
  
  puVar2 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Cycle);
    }
  }
  else {
    param_2->Cycle = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar2 = &param_2->AnimInstanceId;
  puVar3 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  piVar1 = &param_2->NodeId;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar4 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return param_1;
}

// operator<< @ 14a91b4d0

FArchive * __cdecl
UE::PoseSearch::operator<<(FArchive *param_1,FTraceMotionMatchingStateDatabaseEntry *param_2)

{
  ulong64 *puVar1;
  
  puVar1 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->DatabaseId);
    }
  }
  else {
    param_2->DatabaseId = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>(param_1,&param_2->QueryVector);
  TArrayPrivateFriend::
  Serialize<UE::PoseSearch::FTraceMotionMatchingStatePoseEntry,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->PoseEntries);
  return param_1;
}

// operator<< @ 14a91b550

FArchive * __cdecl
UE::PoseSearch::operator<<(FArchive *param_1,FTraceMotionMatchingStateMessage *param_2)

{
  float *pfVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  float *pfVar6;
  int *piVar7;
  EPoseSearchInterruptMode *pEVar8;
  int iVar9;
  
  plVar3 = (longlong *)**(longlong **)&param_1->field_0x8;
  if ((longlong *)(*(longlong **)&param_1->field_0x8)[1] < plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)param_2);
    }
  }
  else {
    param_2->_padding_ = *plVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  plVar3 = &param_2->_padding_;
  plVar4 = (longlong *)**(longlong **)&param_1->field_0x8;
  if ((longlong *)(*(longlong **)&param_1->field_0x8)[1] < plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar3,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)plVar3);
    }
  }
  else {
    *plVar3 = *plVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  plVar3 = &param_2->_padding_;
  puVar5 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)plVar3);
    }
  }
  else {
    *(undefined4 *)plVar3 = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->ElapsedPoseSearchTime;
  pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->AssetPlayerTime;
  pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->DeltaTime;
  pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->SimLinearVelocity;
  pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->SimAngularVelocity;
  pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->AnimLinearVelocity;
  pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->AnimAngularVelocity;
  pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->Playrate;
  pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->AnimLinearVelocityNoTimescale;
  pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->AnimAngularVelocityNoTimescale;
  pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->RecordingTime;
  pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->SearchBestCost;
  pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->SearchBruteForceCost;
  pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &param_2->SearchBestPosePos;
  piVar7 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar7 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<unsigned___int64,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->SkeletalMeshComponentIds);
  TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>(param_1,&param_2->Roles);
  TArrayPrivateFriend::
  Serialize<UE::PoseSearch::FTraceMotionMatchingStateDatabaseEntry,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->DatabaseEntries);
  TArrayPrivateFriend::Serialize<UE::PoseSearch::FArchivedPoseHistory,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->PoseHistories);
  piVar2 = &param_2->CurrentDbEntryIdx;
  piVar7 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar7 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &param_2->CurrentPoseEntryIdx;
  piVar7 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar7 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FPoseSearchCustomVersion::GUID);
  if (1 < iVar9) {
    pEVar8 = (EPoseSearchInterruptMode *)**(undefined8 **)&param_1->field_0x8;
    if (pEVar8 + 1 <= (EPoseSearchInterruptMode *)(*(undefined8 **)&param_1->field_0x8)[1]) {
      param_2->InterruptMode = *pEVar8;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
      return param_1;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->InterruptMode,1);
  }
  return param_1;
}

// operator<< @ 14a91bb20

FArchive * __cdecl
UE::PoseSearch::operator<<(FArchive *param_1,FTraceMotionMatchingStatePoseEntry *param_2)

{
  FPoseSearchCost *pFVar1;
  EPoseCandidateFlags *pEVar2;
  int *piVar3;
  float *pfVar4;
  EPoseCandidateFlags *pEVar5;
  
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->DbPoseIdx = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pFVar1 = &param_2->Cost;
  pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar1);
    }
  }
  else {
    pFVar1->TotalCost = *pfVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pEVar2 = &param_2->PoseCandidateFlags;
  pEVar5 = (EPoseCandidateFlags *)**(undefined8 **)&param_1->field_0x8;
  if (pEVar5 + 1 <= (EPoseCandidateFlags *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pEVar2 = *pEVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,pEVar2);
  return param_1;
}

// operator<< @ 14a91bc40

FArchive * __cdecl UE::PoseSearch::operator<<(FArchive *param_1,FVPTree *param_2)

{
  TArrayPrivateFriend::Serialize<UE::PoseSearch::FVPTreeNode,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Nodes);
  return param_1;
}

// operator<< @ 14a91bc60

FArchive * __cdecl UE::PoseSearch::operator<<(FArchive *param_1,FVPTreeNode *param_2)

{
  uint *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int *piVar6;
  
  puVar4 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    *(undefined4 *)&param_2->_padding_ = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = (uint *)((longlong)&param_2->_padding_ + 4);
  puVar3 = &param_1->field_0x2a;
  puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &param_2->LeftIndex;
  piVar6 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar6 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &param_2->RightIndex;
  piVar6 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar6 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar2 = *piVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((*puVar3 & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
  return param_1;
}

// AddToSearch @ 14a921db0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::PoseSearch::AddToSearch(FAssetsToSearchPerDatabase *param_1,UObject *param_2,bool param_3)

{
  int iVar1;
  longlong lVar2;
  UPoseSearchDatabase *pUVar3;
  longlong *plVar4;
  bool bVar5;
  UClass *pUVar6;
  TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>
  *pTVar7;
  FAssetsToSearchPerDatabase *pFVar8;
  FObjectPtr_u_0 *this;
  bool bVar9;
  bool bVar10;
  undefined1 local_res18 [8];
  FName local_res20;
  FString local_38;
  
  if (param_2 != (UObject *)0x0) {
    if (param_3) {
      pUVar6 = Z_Construct_UClass_UAnimSequenceBase_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) {
        lVar2 = *(longlong *)&param_2[3].field_0x8;
        bVar9 = false;
        bVar10 = false;
        this = (FObjectPtr_u_0 *)(lVar2 + 0x50);
        iVar1 = *(int *)&param_2[3].field_0x10;
        do {
          while( true ) {
            if (*(int *)&param_2[3].field_0x10 != iVar1) {
              `TCheckedPointerIterator<FAnimNotifyEvent_const_,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(local_res18);
            }
            if (this + -10 == (FObjectPtr_u_0 *)((longlong)iVar1 * 0xb8 + lVar2)) {
              return bVar10;
            }
            if (this->Handle != (UObject *)0x0) break;
LAB_14a921f0e:
            this = this + 0x17;
          }
          pUVar6 = Z_Construct_UClass_UAnimNotifyState_PoseSearchBranchIn_NoRegister();
          bVar5 = FObjectPtr::IsA((FObjectPtr *)this,pUVar6);
          if ((!bVar5) || (this->Handle == (UObject *)0x0)) goto LAB_14a921f0e;
          pUVar3 = *(UPoseSearchDatabase **)&this->Handle[1].field_0x8;
          if (pUVar3 != (UPoseSearchDatabase *)0x0) {
            bVar5 = AddToSearchForDatabase(param_1,param_2,pUVar3,true);
            bVar10 = bVar9;
            if (bVar5) {
              bVar9 = true;
              bVar10 = true;
            }
            goto LAB_14a921f0e;
          }
          if ((byte)LogPoseSearch._0_1_ < 2) goto LAB_14a921f0e;
          local_res20.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
          local_res20.Number = *(uint *)&param_2->field_0x1c;
          ::FName::ToString(&local_res20,&local_38);
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
          if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
          goto LAB_14a921f0e;
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
          this = this + 0x17;
        } while( true );
      }
    }
    pUVar6 = Z_Construct_UClass_UPoseSearchDatabase_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) {
      pFVar8 = param_1;
      if (*(FAssetsToSearchPerDatabase **)&param_1->field_0x6c0 != (FAssetsToSearchPerDatabase *)0x0
         ) {
        pFVar8 = *(FAssetsToSearchPerDatabase **)&param_1->field_0x6c0;
      }
      plVar4 = (longlong *)&pFVar8->field_0x0;
      for (; pFVar8 != (FAssetsToSearchPerDatabase *)
                       (plVar4 + (longlong)*(int *)&param_1->field_0x6c8 * 0x1b);
          pFVar8 = (FAssetsToSearchPerDatabase *)&pFVar8->field_0xd8) {
        if (*(UObject **)pFVar8 == param_2) {
          if (pFVar8 != (FAssetsToSearchPerDatabase *)0x0) {
            if (*(int *)&pFVar8->field_0x90 == *(int *)&pFVar8->field_0xb4) {
              return false;
            }
            TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
            ::UnhashElements((TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                              *)&pFVar8->field_0x8);
            *(undefined4 *)&pFVar8->field_0x90 = 0;
            if (*(int *)&pFVar8->field_0x94 < 0) {
              Core::Private::
              ReallocTo<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
                        (0x10,8,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>
                                   *)&pFVar8->field_0x8,0,(int *)&pFVar8->field_0x94);
            }
            *(undefined4 *)&pFVar8->field_0xb0 = 0xffffffff;
            *(undefined4 *)&pFVar8->field_0xb4 = 0;
            *(undefined4 *)&pFVar8->field_0xa8 = 0;
            return false;
          }
          break;
        }
      }
      pTVar7 = TArray<TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>_>
               ::AddDefaulted_GetRef
                         ((TArray<TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>_>
                           *)param_1);
      *(UObject **)pTVar7 = param_2;
    }
  }
  return false;
}

// AddToSearchForDatabase @ 14a922030

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::PoseSearch::AddToSearchForDatabase
          (FAssetsToSearchPerDatabase *param_1,UObject *param_2,UPoseSearchDatabase *param_3,
          bool param_4)

{
  int iVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 uVar5;
  UClass *pUVar6;
  FAssetsToSearchPerDatabase *pFVar7;
  UObject **ppUVar8;
  UObject *local_res10;
  undefined1 local_58 [8];
  FName local_50;
  FName local_48;
  FString local_40;
  FString local_30;
  
  local_res10 = param_2;
  if (param_2 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UPoseSearchDatabase_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar6->_padding_)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Cast<const UPoseSearchDatabase>(AssetToSearch) == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchLibrary.cpp"
                           ,0x68,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  bVar4 = UPoseSearchDatabase::Contains(param_3,param_2);
  if (bVar4) {
    pFVar7 = param_1;
    if (*(FAssetsToSearchPerDatabase **)&param_1->field_0x6c0 != (FAssetsToSearchPerDatabase *)0x0)
    {
      pFVar7 = *(FAssetsToSearchPerDatabase **)&param_1->field_0x6c0;
    }
    plVar3 = (longlong *)&pFVar7->field_0x0;
    for (; pFVar7 != (FAssetsToSearchPerDatabase *)
                     (plVar3 + (longlong)*(int *)&param_1->field_0x6c8 * 0x1b);
        pFVar7 = (FAssetsToSearchPerDatabase *)&pFVar7->field_0xd8) {
      if (*(UPoseSearchDatabase **)pFVar7 == param_3) {
        if (pFVar7 != (FAssetsToSearchPerDatabase *)0x0) {
          if (*(int *)&pFVar7->field_0x90 == *(int *)&pFVar7->field_0xb4) {
            return false;
          }
          ppUVar8 = (UObject **)local_58;
          goto LAB_14a9221a4;
        }
        break;
      }
    }
    pFVar7 = (FAssetsToSearchPerDatabase *)
             TArray<TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>_>
             ::AddDefaulted_GetRef
                       ((TArray<TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>_>
                         *)param_1);
    ppUVar8 = (UObject **)(local_58 + 4);
    *(UPoseSearchDatabase **)pFVar7 = param_3;
LAB_14a9221a4:
    TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
    ::Emplace<UObject_const_*_const_&>
              ((TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                *)&pFVar7->field_0x8,ppUVar8,(bool *)&local_res10);
  }
  else if ((param_4) && (1 < (byte)LogPoseSearch._0_1_)) {
    local_50.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
    local_50.Number = *(uint *)&param_2->field_0x1c;
    ::FName::ToString(&local_50,&local_30);
    local_48 = (FName)param_3->_padding_;
    ::FName::ToString(&local_48,&local_40);
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// CalculateDeltaAlignment @ 14a923a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __cdecl
UE::PoseSearch::CalculateDeltaAlignment
          (TTransform<double> *__return_storage_ptr__,TTransform<double> *param_1,
          TTransform<double> *param_2,TTransform<double> *param_3,float param_4,float param_5)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  TQuat<double> *pTVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar20;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint uVar23;
  uint uVar24;
  undefined1 auStack_1c8 [32];
  TQuat<double> local_1a8;
  TQuat<double> local_178;
  TQuat<double> local_158;
  TTransform<double> local_138;
  TTransform<double> local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  UE::Math::TTransform<double>::GetRelativeTransform(param_1,&local_d8,param_2);
  UE::Math::TTransform<double>::GetRelativeTransform(param_3,&local_138,param_2);
  if (__real_3f800000 <= param_5) {
    param_5 = __real_3f800000;
  }
  if (param_5 <= 0.0) {
    param_5 = 0.0;
  }
  auVar17._0_8_ = (double)param_5;
  auVar17._8_8_ = 0;
  local_1a8.X = local_138.Rotation.XY.m128d_f64[0];
  local_1a8.Y = local_138.Rotation.XY.m128d_f64[1];
  local_178.X = local_d8.Rotation.XY.m128d_f64[0];
  local_178.Y = local_d8.Rotation.XY.m128d_f64[1];
  if (__real_3f800000 <= param_4) {
    param_4 = __real_3f800000;
  }
  dVar3 = (local_138.Translation.XY.m128d_f64[0] - local_d8.Translation.XY.m128d_f64[0]) *
          auVar17._0_8_;
  dVar5 = (local_138.Translation.ZW.m128d_f64[0] - local_d8.Translation.ZW.m128d_f64[0]) *
          auVar17._0_8_;
  if (param_4 <= 0.0) {
    param_4 = 0.0;
  }
  dVar4 = (local_138.Translation.XY.m128d_f64[1] - local_d8.Translation.XY.m128d_f64[1]) *
          auVar17._0_8_;
  local_1a8.Z = local_138.Rotation.ZW.m128d_f64[0];
  local_1a8.W = local_138.Rotation.ZW.m128d_f64[1];
  local_178.Z = local_d8.Rotation.ZW.m128d_f64[0];
  local_178.W = local_d8.Rotation.ZW.m128d_f64[1];
  pTVar13 = UE::Math::TQuat<double>::Slerp_NotNormalized
                      (&local_158,&local_178,&local_1a8,(double)param_4);
  dVar7 = pTVar13->X;
  dVar8 = pTVar13->Y;
  dVar9 = pTVar13->Z;
  dVar10 = pTVar13->W;
  dVar16 = dVar7 * dVar7 + dVar9 * dVar9;
  dVar20 = dVar8 * dVar8 + dVar10 * dVar10;
  dVar1 = dVar20 + dVar16;
  dVar16 = dVar16 + dVar20;
  auVar21._8_4_ = SUB84(dVar16,0);
  auVar21._0_8_ = dVar1;
  auVar21._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  auVar21 = sqrtpd(auVar17,auVar21);
  uVar14 = -(ulonglong)(__real_3e45798ee0000000 <= dVar1);
  uVar15 = -(ulonglong)(__real_3e45798ee0000000 <= dVar16);
  uVar23 = (uint)(uVar14 >> 0x20);
  uVar24 = (uint)(uVar15 >> 0x20);
  auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar21);
  auVar18._0_8_ = uVar14 & (ulonglong)(auVar17._0_8_ * dVar9);
  uVar6 = uVar15 & (ulonglong)(auVar17._8_8_ * dVar10);
  auVar18._8_4_ = (undefined4)uVar6;
  auVar18._12_4_ = (undefined4)(uVar6 >> 0x20);
  auVar22._0_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar22._4_4_ =
       ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar22._8_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar22._12_4_ =
       ~uVar24 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar21);
  auVar19._0_8_ = (ulonglong)(auVar17._0_8_ * dVar7) & uVar14;
  uVar6 = (ulonglong)(auVar17._8_8_ * dVar8) & uVar15;
  auVar19._8_4_ = (undefined4)uVar6;
  auVar19._12_4_ = (undefined4)(uVar6 >> 0x20);
  auVar2._4_4_ = ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                                 0x20);
  auVar2._0_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar2._8_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar2._12_4_ =
       ~uVar24 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar19 | auVar2;
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar22 | auVar18;
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       dVar3 + local_d8.Translation.XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] =
       dVar4 + local_d8.Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] =
       dVar5 + local_d8.Translation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  uVar12 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar11 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)uVar11;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)uVar12;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
  return __return_storage_ptr__;
}

// CalculateFullAlignedTransforms @ 14a923cc0

void __cdecl
UE::PoseSearch::CalculateFullAlignedTransforms
          (FPoseSearchBlueprintResult *param_1,bool param_2,
          TArrayView<UE::Math::TTransform<double>,int> *param_3)

{
  TArrayView<UE::Math::TTransform<double>,int> local_18;
  
  local_18.DataPtr = param_3->DataPtr;
  local_18.ArrayNum = param_3->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_3->field_0xc;
  CalculateFullAlignedTransformsAtTime(param_1,param_1->SelectedTime,param_2,&local_18);
  return;
}

// CalculateFullAlignedTransformsAtTime @ 14a923cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::PoseSearch::CalculateFullAlignedTransformsAtTime
          (FPoseSearchBlueprintResult *param_1,float param_2,bool param_3,
          TArrayView<UE::Math::TTransform<double>,int> *param_4)

{
  FScriptContainerElement *pFVar1;
  UPoseSearchDatabase *pUVar2;
  UPoseSearchSchema *pUVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  UObject *pUVar7;
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
  double dVar19;
  bool bVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  UClass *pUVar24;
  FString *pFVar25;
  ForElementType<UE::Math::TTransform<double>_> FVar26;
  ForElementType<UMirrorDataTable_const_*> FVar27;
  ForElementType<bool> FVar28;
  uint uVar29;
  FScriptContainerElement *pFVar30;
  wchar_t *pwVar31;
  uint uVar32;
  size_t _Size;
  wchar_t *pwVar33;
  size_t sVar34;
  longlong lVar35;
  size_t sVar36;
  undefined1 auStackY_418 [32];
  undefined1 local_3e8 [8];
  size_t local_3e0;
  size_t local_3d8;
  UObject *local_3d0;
  undefined8 local_3c8;
  int iStack_3c0;
  undefined4 uStack_3bc;
  FScriptContainerElement *local_3b8;
  longlong local_3b0;
  TArrayView<UE::Math::TTransform<double>,int> *local_3a8;
  ForElementType<bool> *local_398;
  int iStack_390;
  undefined4 uStack_38c;
  TArray<UMirrorDataTable_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_> *local_388;
  int iStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  int iStack_370;
  undefined4 uStack_36c;
  ForElementType<bool> *local_368;
  undefined8 uStack_360;
  TArray<UMirrorDataTable_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_> *local_358;
  undefined8 uStack_350;
  undefined4 local_348;
  undefined4 uStack_344;
  int iStack_340;
  undefined4 uStack_33c;
  FString local_338;
  FString local_328;
  FString local_318;
  ForElementType<bool> local_308;
  int local_2f8 [2];
  TArray<UMirrorDataTable_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_> local_2f0;
  TTransform<double> local_2b8;
  ForElementType<UE::Math::TTransform<double>_> local_258;
  int local_c8 [4];
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_418;
  local_3a8 = param_4;
  if ((param_1->SelectedAnim).field0_0x0.DebugPtr == (UObject *)0x0) {
    pFVar25 = GetTypeName<UMultiAnimAsset>(&local_318);
    if ((pFVar25->Data).ArrayNum == 0) {
      pwVar33 = L"";
    }
    else {
      pwVar33 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar33);
  }
  pUVar24 = Z_Construct_UClass_UMultiAnimAsset_NoRegister();
  bVar20 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar24);
  if ((!bVar20) ||
     (local_3d0 = (param_1->SelectedAnim).field0_0x0.DebugPtr, local_3d0 == (UObject *)0x0)) {
    pFVar25 = GetTypeName<UMultiAnimAsset>(&local_338);
    pwVar33 = L"";
    if ((pFVar25->Data).ArrayNum == 0) {
      pwVar31 = L"";
    }
    else {
      pwVar31 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
    }
    pFVar25 = GetFullNameForCastLogError<UObject>
                        (&local_328,(param_1->SelectedAnim).field0_0x0.DebugPtr);
    if ((pFVar25->Data).ArrayNum != 0) {
      pwVar33 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar33,pwVar31);
  }
  iVar21 = (**(code **)(*(longlong *)local_3d0 + 0x2c8))();
  sVar34 = (size_t)iVar21;
  if ((param_4->ArrayNum != iVar21) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutFullAlignedTransforms.Num() == NumRoles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionUtils.cpp"
                          ,0x2d,L""), bVar20)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((param_1->ActorRootTransforms).ArrayNum != (param_1->ActorRootBoneTransforms).ArrayNum) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentResult.ActorRootTransforms.Num() == CurrentResult.ActorRootBoneTransforms.Num()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionUtils.cpp"
                          ,0x2e,L""), bVar20)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((param_1->ActorRootTransforms).ArrayNum != (param_1->AnimContexts).ArrayNum) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentResult.ActorRootTransforms.Num() == CurrentResult.AnimContexts.Num()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionUtils.cpp"
                          ,0x2f,L""), bVar20)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pUVar2 = (param_1->SelectedDatabase).field0_0x0.DebugPtr;
  if (((pUVar2 == (UPoseSearchDatabase *)0x0) ||
      ((pUVar2->Schema).field0_0x0.DebugPtr == (UPoseSearchSchema *)0x0)) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentResult.SelectedDatabase != nullptr && CurrentResult.SelectedDatabase->Schema != nullptr"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionUtils.cpp"
                          ,0x30,L""), bVar20)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_3c8 = (ForElementType<UE::Math::TTransform<double>_> *)
              (param_1->ActorRootTransforms).AllocatorInstance.Data;
  iVar22 = (param_1->ActorRootTransforms).ArrayNum;
  if ((iVar22 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar20)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_258.SecondaryData.Data = (TTransform<double> *)0x0;
  local_c8[0] = 0;
  local_c8[1] = 4;
  sVar36 = sVar34;
  local_3d8 = sVar34;
  iStack_3c0 = iVar22;
  if (param_3) {
    if (iVar21 < 1) {
      if (iVar21 < 0) goto LAB_14a92458c;
    }
    else {
      iVar22 = Core::Private::
               ReallocGrow<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<UE::Math::TTransform<double>_>_>
                         (0x60,0x10,iVar21,&local_258,local_c8,local_c8 + 1);
      FVar26.Data = (TTransform<double> *)&local_258;
      if ((ForElementType<UE::Math::TTransform<double>_> *)local_258.SecondaryData.Data !=
          (ForElementType<UE::Math::TTransform<double>_> *)0x0) {
        FVar26.Data = local_258.SecondaryData.Data;
      }
      DefaultConstructItems<UE::Math::TTransform<double>,int>
                (((ForElementType<UE::Math::TTransform<double>_> *)FVar26.Data)->InlineData +
                 (longlong)iVar22 * 0x60,iVar21);
    }
    uVar32 = 0;
    if (0 < iVar21) {
      lVar35 = 0;
      local_3e0 = sVar34;
      do {
        uVar29 = ~uVar32 >> 0x1f;
        uVar23 = 0;
        if ((int)uVar32 < (param_1->ActorRootBoneTransforms).ArrayNum) {
          uVar23 = uVar29;
        }
        if ((uVar23 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_3b8 = (param_1->ActorRootBoneTransforms).AllocatorInstance.Data;
        uVar23 = 0;
        if ((int)uVar32 < (param_1->ActorRootTransforms).ArrayNum) {
          uVar23 = uVar29;
        }
        if ((uVar23 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_2b8.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_2b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_2b8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_2b8.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_2b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_2b8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_2b8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_2b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_2b8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_2b8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_2b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_2b8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_2b8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_2b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_2b8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_2b8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_2b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_2b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_2b8,(TTransform<double> *)(local_3b8 + (longlong)(int)uVar32 * 0x60),
                   (TTransform<double> *)
                   ((param_1->ActorRootTransforms).AllocatorInstance.Data +
                   (longlong)(int)uVar32 * 0x60));
        dVar8 = local_2b8.Rotation.XY.m128d_f64[0];
        dVar9 = local_2b8.Rotation.XY.m128d_f64[1];
        dVar10 = local_2b8.Rotation.ZW.m128d_f64[0];
        dVar11 = local_2b8.Rotation.ZW.m128d_f64[1];
        dVar12 = local_2b8.Translation.XY.m128d_f64[0];
        dVar13 = local_2b8.Translation.XY.m128d_f64[1];
        uVar23 = 0;
        if ((int)uVar32 < local_c8[0]) {
          uVar23 = uVar29;
        }
        dVar14 = local_2b8.Translation.ZW.m128d_f64[0];
        dVar15 = local_2b8.Translation.ZW.m128d_f64[1];
        dVar16 = local_2b8.Scale3D.XY.m128d_f64[0];
        dVar17 = local_2b8.Scale3D.XY.m128d_f64[1];
        dVar18 = local_2b8.Scale3D.ZW.m128d_f64[0];
        dVar19 = local_2b8.Scale3D.ZW.m128d_f64[1];
        if ((uVar23 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar26.Data = (TTransform<double> *)&local_258;
        if ((ForElementType<UE::Math::TTransform<double>_> *)local_258.SecondaryData.Data !=
            (ForElementType<UE::Math::TTransform<double>_> *)0x0) {
          FVar26.Data = local_258.SecondaryData.Data;
        }
        uVar32 = uVar32 + 1;
        *(double *)
         (((ForElementType<UE::Math::TTransform<double>_> *)FVar26.Data)->InlineData + lVar35) =
             dVar8;
        *(double *)
         (((ForElementType<UE::Math::TTransform<double>_> *)FVar26.Data)->InlineData + lVar35 + 8) =
             dVar9;
        *(double *)
         (((ForElementType<UE::Math::TTransform<double>_> *)FVar26.Data)->InlineData + lVar35 + 0x10
         ) = dVar10;
        *(double *)
         (((ForElementType<UE::Math::TTransform<double>_> *)FVar26.Data)->InlineData + lVar35 + 0x10
         + 8) = dVar11;
        *(double *)
         (((ForElementType<UE::Math::TTransform<double>_> *)FVar26.Data)->InlineData + lVar35 + 0x20
         ) = dVar12;
        *(double *)
         (((ForElementType<UE::Math::TTransform<double>_> *)FVar26.Data)->InlineData + lVar35 + 0x20
         + 8) = dVar13;
        *(double *)
         (((ForElementType<UE::Math::TTransform<double>_> *)FVar26.Data)->InlineData + lVar35 + 0x30
         ) = dVar14;
        *(double *)
         (((ForElementType<UE::Math::TTransform<double>_> *)FVar26.Data)->InlineData + lVar35 + 0x30
         + 8) = dVar15;
        *(double *)
         (((ForElementType<UE::Math::TTransform<double>_> *)FVar26.Data)->InlineData + lVar35 + 0x40
         ) = dVar16;
        *(double *)
         (((ForElementType<UE::Math::TTransform<double>_> *)FVar26.Data)->InlineData + lVar35 + 0x40
         + 8) = dVar17;
        *(double *)
         (((ForElementType<UE::Math::TTransform<double>_> *)FVar26.Data)->InlineData + lVar35 + 0x50
         ) = dVar18;
        *(double *)
         (((ForElementType<UE::Math::TTransform<double>_> *)FVar26.Data)->InlineData + lVar35 + 0x50
         + 8) = dVar19;
        lVar35 = lVar35 + 0x60;
        local_3e0 = local_3e0 - 1;
      } while (local_3e0 != 0);
      sVar36 = local_3d8 & 0xffffffff;
      local_3e0 = 0;
      sVar34 = local_3d8;
    }
    iVar21 = local_c8[0];
    FVar26.Data = (TTransform<double> *)&local_258;
    if ((ForElementType<UE::Math::TTransform<double>_> *)local_258.SecondaryData.Data !=
        (ForElementType<UE::Math::TTransform<double>_> *)0x0) {
      FVar26.Data = local_258.SecondaryData.Data;
    }
    if ((local_c8[0] < 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar20)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uStack_3bc = uStack_36c;
    iStack_3c0 = iVar21;
    local_3c8 = (ForElementType<UE::Math::TTransform<double>_> *)FVar26.Data;
  }
  local_2f0.AllocatorInstance.SecondaryData.Data = (UMirrorDataTable **)0x0;
  local_2f0.ArrayNum = 0;
  local_2f0.ArrayMax = 4;
  _Size = sVar34;
  if (param_1->bIsMirrored != false) {
    TArray<UMirrorDataTable_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>::SetNum
              (&local_2f0,(int)sVar36,Default);
    uVar32 = 0;
    if (0 < (longlong)sVar34) {
      local_3e0 = 0;
      do {
        (**(code **)(*(longlong *)local_3d0 + 0x2d0))(local_3d0,&local_3b0,uVar32);
        pUVar3 = (((param_1->SelectedDatabase).field0_0x0.DebugPtr)->Schema).field0_0x0.DebugPtr;
        iVar21 = (pUVar3->Skeletons).ArrayNum;
        pFVar30 = (pUVar3->Skeletons).AllocatorInstance.Data;
        pFVar1 = pFVar30 + (longlong)iVar21 * 0x48;
        while( true ) {
          if ((pUVar3->Skeletons).ArrayNum != iVar21) {
            local_3e8[0] = 0;
            `TCheckedPointerIterator<FPoseSearchRoledSkeleton_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_3e8);
          }
          if (pFVar30 == pFVar1) {
            pFVar30 = (FScriptContainerElement *)0x0;
            goto LAB_14a924254;
          }
          if (*(longlong *)(pFVar30 + 0x10) == local_3b0) break;
          pFVar30 = pFVar30 + 0x48;
        }
        if (pFVar30 == (FScriptContainerElement *)0x0) {
LAB_14a924254:
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("RoledSkeleton",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionUtils.cpp"
                              ,0x49,L"");
          if (bVar20) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        uVar4 = *(undefined8 *)(pFVar30 + 8);
        uVar23 = 0;
        if ((int)uVar32 < local_2f0.ArrayNum) {
          uVar23 = ~uVar32 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar27.Data = (UMirrorDataTable **)&local_2f0;
        if ((TArray<UMirrorDataTable_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_> *)
            local_2f0.AllocatorInstance.SecondaryData.Data !=
            (TArray<UMirrorDataTable_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_> *)
            0x0) {
          FVar27.Data = local_2f0.AllocatorInstance.SecondaryData.Data;
        }
        uVar32 = uVar32 + 1;
        *(undefined8 *)
         ((((TArray<UMirrorDataTable_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_> *)
           FVar27.Data)->AllocatorInstance).InlineData + local_3e0 * 8) = uVar4;
        local_3e0 = local_3e0 + 1;
      } while ((longlong)local_3e0 < (longlong)local_3d8);
      sVar36 = local_3d8 & 0xffffffff;
      _Size = local_3d8;
    }
  }
  local_308.SecondaryData.Data = (bool *)0x0;
  local_2f8[0] = 0;
  local_2f8[1] = 4;
  iVar21 = (int)sVar36;
  if (iVar21 < 1) {
    sVar34 = sVar36;
    if (iVar21 < 0) {
LAB_14a92458c:
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(sVar34 & 0xffffffff);
    }
  }
  else {
    iVar21 = Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<bool>_>
                       (1,1,iVar21,&local_308,local_2f8,local_2f8 + 1);
    FVar28.Data = (bool *)&local_308;
    if ((ForElementType<bool> *)local_308.SecondaryData.Data != (ForElementType<bool> *)0x0) {
      FVar28.Data = local_308.SecondaryData.Data;
    }
    memset(((ForElementType<bool> *)FVar28.Data)->InlineData + iVar21,0,_Size);
  }
  uVar32 = 0;
  if (0 < (longlong)_Size) {
    lVar35 = 0;
    do {
      uVar23 = 0;
      if ((int)uVar32 < (param_1->AnimContexts).ArrayNum) {
        uVar23 = ~uVar32 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar5 = *(longlong *)((param_1->AnimContexts).AllocatorInstance.Data + lVar35 * 8);
      uVar23 = 0;
      if ((int)uVar32 < local_2f8[0]) {
        uVar23 = ~uVar32 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar28.Data = (bool *)&local_308;
      if ((ForElementType<bool> *)local_308.SecondaryData.Data != (ForElementType<bool> *)0x0) {
        FVar28.Data = local_308.SecondaryData.Data;
      }
      uVar32 = uVar32 + 1;
      ((ForElementType<bool> *)FVar28.Data)->InlineData[lVar35] = lVar5 != 0;
      lVar35 = lVar35 + 1;
    } while (lVar35 < (longlong)_Size);
  }
  iVar21 = local_2f8[0];
  pUVar7 = local_3d0;
  pcVar6 = *(code **)(*(longlong *)local_3d0 + 0x2e8);
  local_398 = &local_308;
  if ((ForElementType<bool> *)local_308.SecondaryData.Data != (ForElementType<bool> *)0x0) {
    local_398 = (ForElementType<bool> *)local_308.SecondaryData.Data;
  }
  if ((local_2f8[0] < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar20)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar22 = local_2f0.ArrayNum;
  iStack_390 = iVar21;
  local_388 = &local_2f0;
  if ((TArray<UMirrorDataTable_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_> *)
      local_2f0.AllocatorInstance.SecondaryData.Data !=
      (TArray<UMirrorDataTable_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_> *)0x0) {
    local_388 = (TArray<UMirrorDataTable_const_*,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
                 *)local_2f0.AllocatorInstance.SecondaryData.Data;
  }
  if ((local_2f0.ArrayNum < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar20)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uStack_360 = CONCAT44(uStack_38c,iStack_390);
  local_368 = local_398;
  iStack_380 = iVar22;
  uStack_350 = CONCAT44(uStack_37c,iVar22);
  local_348 = *(undefined4 *)&local_3a8->DataPtr;
  uStack_344 = *(undefined4 *)((longlong)&local_3a8->DataPtr + 4);
  iStack_340 = local_3a8->ArrayNum;
  uStack_33c = *(undefined4 *)&local_3a8->field_0xc;
  local_358 = local_388;
  local_378 = (undefined4)local_3c8;
  uStack_374 = local_3c8._4_4_;
  iStack_370 = iStack_3c0;
  uStack_36c = uStack_3bc;
  (*pcVar6)(pUVar7,param_2,&local_378,&local_348);
  return;
}

// CalculateWantedPlayRate @ 14a9248d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

float __cdecl
UE::PoseSearch::CalculateWantedPlayRate
          (FSearchResult *param_1,FSearchContext *param_2,FFloatInterval *param_3,float param_4,
          FPoseSearchEvent *param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UPoseSearchDatabase *pUVar4;
  FSearchIndex *pFVar5;
  UObject *pUVar6;
  UPoseSearchFeatureChannel_Trajectory *this;
  longlong lVar7;
  ulonglong uVar8;
  TArrayView<float_const_,int> *pTVar9;
  undefined1 *puVar10;
  TArrayView<float_const_,int> *pTVar11;
  float fVar12;
  float fVar13;
  undefined1 auStackY_118 [32];
  FString local_e8;
  FName local_d8 [2];
  TArrayView<float_const_,int> local_c8;
  float *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TArrayView<float_const_,int> local_a8;
  TArrayView<float,int> local_98;
  TArrayView<float_const_,int> local_88;
  TArrayView<float_const_,int> local_78;
  TArrayView<float_const_,int> local_68;
  TArrayView<float_const_,int> local_58;
  TArrayView<float_const_,int> local_48;
  ulonglong local_38;
  
  fVar12 = __real_3f800000;
  local_38 = __security_cookie.value ^ (ulonglong)&local_e8;
  puVar10 = auStackY_118;
  if ((*(int *)param_1 != -1) &&
     (bVar3 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                         &param_1->field_0x4,(void *)0x0), puVar10 = auStackY_118, !bVar3)) {
    if (param_1->EventPoseIdx == -1) {
      fVar13 = *(float *)param_3;
      if ((*(float *)&param_3->field_0x4 < fVar13) || (fVar13 <= __real_38d1b717)) {
        bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6030762926925677051>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchLibrary.cpp"
                           ,0x1fb,"PlayRate.Min <= PlayRate.Max && PlayRate.Min > (1.e-4f)");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          fVar12 = (float)(*pcVar2)();
          return fVar12;
        }
        puVar10 = auStackY_118;
        if (1 < (byte)LogPoseSearch._0_1_) {
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
          puVar10 = auStackY_118;
        }
      }
      else if ((float)((uint)(fVar13 - *(float *)&param_3->field_0x4) &
                      __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717) {
        puVar10 = auStackY_118;
        fVar12 = fVar13;
        if (__real_322bcc77 < (float)((uint)param_4 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          puVar10 = auStackY_118;
          fVar12 = fVar13 / param_4;
        }
      }
      else {
        pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1->field_0x4);
        FSearchContext::GetCachedQuery
                  (param_2,&local_c8,*(UPoseSearchSchema **)&pUVar6[1].field_0x8);
        puVar10 = auStackY_118;
        if (local_c8.ArrayNum != 0) {
          pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1->field_0x4);
          this = UPoseSearchSchema::FindFirstChannelOfType<UPoseSearchFeatureChannel_Trajectory>
                           (*(UPoseSearchSchema **)&pUVar6[1].field_0x8);
          if (this == (UPoseSearchFeatureChannel_Trajectory *)0x0) {
            puVar10 = auStackY_118;
            if (2 < (byte)LogPoseSearch._0_1_) {
              pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1->field_0x4);
              if (*(longlong *)&pUVar6[1].field_0x8 == 0) {
                ::FString::FString(&local_e8,L"None");
              }
              else {
                local_d8[0] = *(FName *)(*(longlong *)&pUVar6[1].field_0x8 + 0x18);
                ::FName::ToString(local_d8,&local_e8);
              }
              Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
              puVar10 = auStackY_118;
              if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e8.Data.AllocatorInstance.Data);
                puVar10 = auStackY_118;
              }
            }
          }
          else {
            pUVar4 = (UPoseSearchDatabase *)
                     FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1->field_0x4);
            pFVar5 = UPoseSearchDatabase::GetSearchIndex(pUVar4);
            if ((int)pFVar5->_padding_ == 0) {
              iStack_b0 = FSearchIndex::GetNumDimensions(pFVar5);
              lVar7 = (longlong)iStack_b0 * 4;
              local_b8 = (float *)0x0;
              puVar10 = auStackY_118;
              if (lVar7 != 0) {
                uVar8 = lVar7 + 0x1e;
                if (uVar8 <= lVar7 + 0xfU) {
                  uVar8 = 0xffffffffffffff0;
                }
                puVar10 = auStackY_118 + -(uVar8 & 0xfffffffffffffff0);
                local_b8 = (float *)((longlong)local_d8 + -(uVar8 & 0xfffffffffffffff0) + -8);
              }
              if (iStack_b0 < 0) {
                *(undefined8 *)(puVar10 + -8) = 0x14a924b04;
                bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ArrayNum >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xfe,L"");
                if (bVar3) {
                  pcVar2 = (code *)swi(3);
                  fVar12 = (float)(*pcVar2)();
                  return fVar12;
                }
              }
              local_98._12_4_ = uStack_ac;
              local_98.ArrayNum = iStack_b0;
              iVar1 = *(int *)param_1;
              local_98.DataPtr = local_b8;
              *(undefined8 *)(puVar10 + -8) = 0x14a924b26;
              FSearchIndex::GetReconstructedPoseValues(pFVar5,&local_a8,iVar1,&local_98);
              if (local_a8.ArrayNum == 0) {
                if (2 < (byte)LogPoseSearch._0_1_) {
                  *(undefined8 *)(puVar10 + -8) = 0x14a924b4b;
                  Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
                }
                fVar13 = *(float *)&param_3->field_0x4;
                if (fVar12 <= *(float *)&param_3->field_0x4) {
                  fVar13 = fVar12;
                }
                fVar12 = fVar13;
                if (fVar13 <= *(float *)param_3) {
                  fVar12 = *(float *)param_3;
                }
                goto LAB_14a924cc5;
              }
              pTVar11 = &local_88;
              pTVar9 = &local_78;
              local_88.DataPtr = local_a8.DataPtr;
              local_78.DataPtr = local_c8.DataPtr;
            }
            else {
              FSearchIndex::GetPoseValues(pFVar5,&local_68,*(int *)param_1);
              pTVar11 = &local_58;
              pTVar9 = &local_48;
              puVar10 = auStackY_118;
            }
            *(undefined8 *)(puVar10 + -8) = 0x14a924b82;
            fVar13 = UPoseSearchFeatureChannel_Trajectory::GetEstimatedSpeedRatio
                               (this,pTVar9,pTVar11);
            fVar12 = *(float *)&param_3->field_0x4;
            if (fVar13 <= *(float *)&param_3->field_0x4) {
              fVar12 = fVar13;
            }
            if (fVar12 <= *(float *)param_3) {
              fVar12 = *(float *)param_3;
            }
          }
        }
      }
    }
    else {
      if (((*(int *)param_1 == -1) ||
          (bVar3 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                             ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                              &param_1->field_0x4,(void *)0x0), bVar3)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchResult.cpp"
                             ,0xb5,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        fVar12 = (float)(*pcVar2)();
        return fVar12;
      }
      pUVar4 = (UPoseSearchDatabase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1->field_0x4);
      pFVar5 = UPoseSearchDatabase::GetSearchIndex(pUVar4);
      bVar3 = FEventData::IsPoseFromEventTag
                        ((FEventData *)&pFVar5->_padding_,param_1->EventPoseIdx,&param_5->EventTag);
      puVar10 = auStackY_118;
      if (((bVar3) &&
          (fVar13 = FSearchResult::CalculateTimeToEvent(param_1), puVar10 = auStackY_118,
          __real_38d1b717 < fVar13)) &&
         (puVar10 = auStackY_118, __real_38d1b717 < param_5->TimeToEvent)) {
        puVar10 = auStackY_118;
        fVar12 = fVar13 / param_5->TimeToEvent;
      }
    }
  }
LAB_14a924cc5:
  *(undefined8 *)(puVar10 + -8) = 0x14a924cd7;
  return fVar12;
}

// GetCommonDefaultRole @ 14a92b340

FName __cdecl
UE::PoseSearch::GetCommonDefaultRole
          (TArrayView<TObjectPtr<UPoseSearchDatabase_const_>_const_,int> *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TObjectPtr<UPoseSearchDatabase_const_>_u_0 *pTVar5;
  FName FVar6;
  TArrayView<TObjectPtr<UPoseSearchDatabase_const_>_const_,int> *in_RDX;
  
  iVar1 = in_RDX->ArrayNum;
  param_1->DataPtr = (TObjectPtr<UPoseSearchDatabase_const_> *)DefaultRole;
  if (iVar1 == 0) {
    return (FName)param_1;
  }
  pTVar5 = &TArrayView<TObjectPtr<UPoseSearchDatabase_const_>_const_,int>::operator[](in_RDX,0)->
            field0_0x0;
  if ((pTVar5->DebugPtr != (UPoseSearchDatabase *)0x0) &&
     (lVar2 = *(longlong *)((longlong)pTVar5->DebugPtr + 0x30), lVar2 != 0)) {
    if (*(int *)(lVar2 + 0x40) != 0) {
      if (*(int *)(lVar2 + 0x40) < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          FVar6 = (FName)(*pcVar3)();
          return FVar6;
        }
      }
      param_1->DataPtr =
           *(TObjectPtr<UPoseSearchDatabase_const_> **)(*(longlong *)(lVar2 + 0x38) + 0x10);
      return (FName)param_1;
    }
    param_1->DataPtr = (TObjectPtr<UPoseSearchDatabase_const_> *)DefaultRole;
  }
  return (FName)param_1;
}

// GetRoleIndex @ 14a92c460

int __cdecl UE::PoseSearch::GetRoleIndex(UMultiAnimAsset *param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FName *pFVar4;
  int iVar5;
  undefined1 local_res8 [8];
  
  if ((param_1 == (UMultiAnimAsset *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("MultiAnimAsset",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionUtils.cpp"
                         ,0xe,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  iVar3 = (**(code **)(*(longlong *)param_1 + 0x2c8))(param_1);
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      pFVar4 = (FName *)(**(code **)(*(longlong *)param_1 + 0x2d0))(param_1,local_res8,iVar5);
      if (*pFVar4 == *param_2) {
        return iVar5;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return -1;
}

// MakeRoleToIndex @ 14a92fb40

TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
* __cdecl UE::PoseSearch::MakeRoleToIndex
                    (TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     *__return_storage_ptr__,UMultiAnimAsset *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
  *pTVar7;
  FName *pFVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  undefined1 local_res8 [8];
  
  if ((param_1 == (UMultiAnimAsset *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MultiAnimAsset",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionUtils.cpp"
                         ,0x1c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
              *)(*pcVar3)();
    return pTVar7;
  }
  uVar5 = (**(code **)(*(longlong *)param_1 + 0x2c8))(param_1);
  iVar11 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x5c = 4;
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x70 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x74 = 0x20;
  *(undefined4 *)&__return_storage_ptr__->field_0x78 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x7c = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x88 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x90 = 0;
  if (uVar5 != 0) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidSetNum((longlong)(int)uVar5);
    }
    TSparseArrayBase<20,4,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
    ::Reserve((TSparseArrayBase<20,4,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
               *)__return_storage_ptr__,uVar5);
    uVar6 = 1;
    if (uVar5 >> 1 != 0) {
      uVar6 = uVar5 >> 1;
    }
    uVar1 = (ulonglong)(uVar6 - 1) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar10 = 1 << ((byte)lVar2 & 0x1f);
    uVar6 = 2;
    if ((1 < uVar10) && (uVar6 = uVar10, uVar5 < 4)) {
      uVar6 = 2;
    }
    if ((*(int *)&__return_storage_ptr__->field_0x90 == 0) ||
       (*(int *)&__return_storage_ptr__->field_0x90 < (int)uVar6)) {
      *(uint *)&__return_storage_ptr__->field_0x90 = uVar6;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
      ::Rehash((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                *)__return_storage_ptr__);
    }
  }
  if (0 < (int)uVar5) {
    do {
      pFVar8 = (FName *)(**(code **)(*(longlong *)param_1 + 0x2d0))(param_1,local_res8,iVar11);
      piVar9 = TMapBase<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
               ::Emplace<FName>((TMapBase<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                 *)__return_storage_ptr__,pFVar8);
      *piVar9 = iVar11;
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)uVar5);
  }
  return __return_storage_ptr__;
}

// PopulateContinuingPoseSearches @ 14a934700

void __cdecl
UE::PoseSearch::PopulateContinuingPoseSearches
          (FPoseSearchContinuingProperties *param_1,TArrayView<UObject_const_*,int> *param_2,
          FSearchContext *param_3,FAssetsToSearchPerDatabase *param_4,bool param_5)

{
  FScriptContainerElement *pFVar1;
  UObject **ppUVar2;
  int iVar3;
  UObject *pUVar4;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar5;
  UPoseSearchDatabase *pUVar6;
  uint uVar7;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar8;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar9;
  UClass *pUVar10;
  ForElementType<FSetElementId> *pFVar11;
  UObject **ppUVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  
  pUVar4 = (param_1->PlayingAsset).field0_0x0.DebugPtr;
  if (pUVar4 != (UObject *)0x0) {
    if ((param_3->AssetsToConsider_DEPRECATED).ArrayNum == 0) {
      pTVar8 = FSearchContext::GetAssetsToConsiderSet(param_3);
      if (pTVar8 != (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                     *)0x0) {
        iVar13 = *(int *)&(pTVar8->Elements).field_0xac;
        iVar3 = *(int *)&(pTVar8->Elements).field_0x88;
        if (iVar3 != iVar13) {
          uVar7 = ((uint)((ulonglong)pUVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar4 >> 4)) *
                  -0x7a143595;
          uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
          if (iVar3 == iVar13) {
            return;
          }
          pFVar11 = (ForElementType<FSetElementId> *)(pTVar8->Hash).SecondaryData.Data;
          if (pFVar11 == (ForElementType<FSetElementId> *)0x0) {
            pFVar11 = &pTVar8->Hash;
          }
          iVar13 = *(int *)(pFVar11->InlineData +
                           (ulonglong)(pTVar8->HashSize - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
          if (iVar13 == -1) {
            return;
          }
          pTVar5 = *(TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                     **)&(pTVar8->Elements).field_0x80;
          while( true ) {
            pTVar9 = pTVar8;
            if (pTVar5 != (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                           *)0x0) {
              pTVar9 = pTVar5;
            }
            if (*(UObject **)(&(pTVar9->Elements).field_0x0 + (longlong)iVar13 * 0x10) == pUVar4)
            break;
            pTVar9 = pTVar8;
            if (pTVar5 != (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                           *)0x0) {
              pTVar9 = pTVar5;
            }
            iVar13 = *(int *)(&(pTVar9->Elements).field_0x8 + (longlong)iVar13 * 0x10);
            if (iVar13 == -1) {
              return;
            }
          }
          if (iVar13 == -1) {
            return;
          }
        }
      }
LAB_14a93483a:
      pUVar6 = (param_1->PlayingAssetDatabase).field0_0x0.DebugPtr;
      if (pUVar6 != (UPoseSearchDatabase *)0x0) {
        AddToSearchForDatabase(param_4,pUVar4,pUVar6,false);
      }
      ppUVar12 = param_2->DataPtr;
      ppUVar2 = ppUVar12 + param_2->ArrayNum;
      for (; ppUVar12 != ppUVar2; ppUVar12 = ppUVar12 + 1) {
        pUVar6 = (UPoseSearchDatabase *)*ppUVar12;
        if (pUVar6 != (UPoseSearchDatabase *)0x0) {
          pUVar10 = Z_Construct_UClass_UPoseSearchDatabase_NoRegister();
          iVar13 = (int)pUVar10->_padding_;
          if ((iVar13 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar13 * 8) ==
              &pUVar10->_padding_)) {
            AddToSearchForDatabase(param_4,pUVar4,pUVar6,false);
          }
        }
      }
      AddToSearch(param_4,pUVar4,param_5);
    }
    else {
      pFVar14 = (param_3->AssetsToConsider_DEPRECATED).AllocatorInstance.Data;
      pFVar1 = pFVar14 + (longlong)(param_3->AssetsToConsider_DEPRECATED).ArrayNum * 8;
      for (; pFVar14 != pFVar1; pFVar14 = pFVar14 + 8) {
        if (*(UObject **)pFVar14 == pUVar4) goto LAB_14a93483a;
      }
    }
  }
  return;
}

// PopulateSearches @ 14a934de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::PoseSearch::PopulateSearches
          (TArrayView<UObject_const_*,int> *param_1,FSearchContext *param_2,
          FAssetsToSearchPerDatabase *param_3,bool param_4)

{
  UObject **ppUVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  FAssetsToSearchPerDatabase *pFVar4;
  UPoseSearchDatabase *this;
  ForElementType<FSetElementId> *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  uint *puVar14;
  FTlsAutoCleanup *pFVar15;
  void *pvVar16;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar17;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar18;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar19;
  longlong lVar20;
  TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *pTVar21;
  ForElementType<FSetElementId> *pFVar22;
  FSetElementId *pFVar23;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar24;
  uint uVar25;
  UObject **ppUVar26;
  undefined1 *puVar27;
  FScriptContainerElement *pFVar28;
  undefined1 *puVar29;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *pTVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  ulong64 uVar34;
  void *pvVar35;
  int *piVar36;
  undefined1 auStackY_438 [32];
  undefined1 local_408;
  undefined1 local_407;
  undefined1 local_406;
  undefined1 local_405;
  undefined1 local_404;
  undefined1 local_403 [3];
  FAssetsToSearchPerDatabase *local_400;
  undefined8 local_3f8;
  undefined1 local_3f0;
  undefined1 local_3ef;
  undefined1 local_3ee;
  undefined1 local_3ed [5];
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *local_3e8;
  undefined8 uStack_3e0;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *local_3d8;
  uint uStack_3d0;
  int iStack_3cc;
  int local_3c8;
  undefined4 uStack_3c4;
  int iStack_3c0;
  undefined4 uStack_3bc;
  FAssetsToSearchPerDatabase *local_3b8;
  FAssetsToSearchPerDatabase *local_3b0;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> local_3a8;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> local_388;
  undefined4 local_368;
  int local_364;
  int local_360;
  undefined1 local_35c [8];
  undefined4 local_354;
  UObject *local_350;
  longlong local_348;
  UObject *local_340;
  ulonglong local_338;
  UObject *local_330;
  UObject *local_328;
  undefined1 *local_320;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> TStack_318;
  undefined8 uStack_2f8;
  undefined1 *local_2f0;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> TStack_2e8;
  undefined8 uStack_2c8;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
  *local_2c0;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> TStack_2b8;
  undefined8 uStack_298;
  code *local_290;
  undefined1 *local_288;
  code *local_280;
  undefined1 *local_278;
  code *local_270;
  undefined1 *local_268;
  code *local_260;
  undefined1 *local_258;
  undefined4 local_234;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> local_230;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> local_210;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> local_1f0 [8];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *local_170;
  int local_168;
  undefined4 local_164;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> local_160;
  undefined8 uStack_148;
  FSetElementId local_140 [4];
  FSetElementId *local_130;
  uint local_128;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> local_120 [8];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *local_a0;
  int local_98;
  undefined4 local_94;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> local_90;
  undefined8 uStack_78;
  FSetElementId local_70 [4];
  FSetElementId *local_60;
  uint local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_438;
  ppUVar26 = param_1->DataPtr;
  ppUVar1 = ppUVar26 + param_1->ArrayNum;
  local_400 = param_3;
  uVar10 = _UNK_150631d78;
  uVar11 = ___xmm_00000000ffffffff0000002000000000;
  for (; ___xmm_00000000ffffffff0000002000000000 = uVar11, _UNK_150631d78 = uVar10,
      ppUVar26 != ppUVar1; ppUVar26 = ppUVar26 + 1) {
    AddToSearch(param_3,*ppUVar26,param_4);
    uVar10 = _UNK_150631d78;
    uVar11 = ___xmm_00000000ffffffff0000002000000000;
  }
  if ((param_2->AssetsToConsider_DEPRECATED).ArrayNum == 0) {
    pTVar17 = FSearchContext::GetAssetsToConsiderSet(param_2);
    uVar11 = _UNK_150631d78;
    uVar10 = ___xmm_00000000ffffffff0000002000000000;
    if ((pTVar17 !=
         (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
          *)0x0) &&
       (*(int *)&(pTVar17->Elements).field_0x88 != *(int *)&(pTVar17->Elements).field_0xac)) {
      pFVar4 = *(FAssetsToSearchPerDatabase **)&param_3->field_0x6c0;
      piVar36 = (int *)&param_3->field_0x6c8;
      iVar32 = *piVar36;
      if (pFVar4 != (FAssetsToSearchPerDatabase *)0x0) {
        param_3 = pFVar4;
        local_400 = pFVar4;
      }
      local_3b8 = (FAssetsToSearchPerDatabase *)
                  ((longlong)&param_3->field_0x0 + (longlong)iVar32 * 0x1b * 8);
      local_3f8 = piVar36;
      while( true ) {
        pFVar4 = local_3b8;
        if (*piVar36 != iVar32) {
          local_405 = 0;
          `TCheckedPointerIterator<TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_405);
        }
        if (param_3 == pFVar4) break;
        local_3b0 = *(FAssetsToSearchPerDatabase **)param_3;
        if ((local_3b0 == (FAssetsToSearchPerDatabase *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Database",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchLibrary.cpp"
                                ,0x148,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = local_400;
        uVar9 = ___xmm_00000000ffffffff0000002000000000;
        pvVar35 = &param_3->field_0x8;
        if (*(int *)&local_400->field_0x90 == *(int *)&param_3->field_0xb4) {
          puVar29 = &(pTVar17->Elements).field_0x90;
          local_388._padding_._0_4_ = 0;
          local_388._padding_._4_4_ = 1;
          local_388.UnvisitedBitMask = 0xffffffff;
          local_388.CurrentBitIndex = 0;
          local_388.BaseBitIndex = 0;
          local_388.Array =
               (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)puVar29;
          if (*(int *)&(pTVar17->Elements).field_0xa0 != 0) {
            TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::
            FindFirstSetBit(&local_388);
          }
          uStack_3e0 = CONCAT44(local_388._padding_._4_4_,(undefined4)local_388._padding_);
          iStack_3cc = local_388.CurrentBitIndex;
          uStack_3d0 = local_388.UnvisitedBitMask;
          uStack_3c4 = local_388._28_4_;
          local_3c8 = local_388.BaseBitIndex;
          iStack_3c0 = *(int *)&(pTVar17->Elements).field_0x88 -
                       *(int *)&(pTVar17->Elements).field_0xac;
          local_3d8 = local_388.Array;
          uStack_298 = CONCAT44(uStack_3bc,iStack_3c0);
          TStack_2b8.Array = local_388.Array;
          local_3e8 = pTVar17;
          local_2c0 = pTVar17;
          TStack_2b8._padding_ = uStack_3e0;
          TStack_2b8._16_8_ = _uStack_3d0;
          TStack_2b8._24_8_ = _local_3c8;
          pTVar18 = TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::
                    TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>
                              (&local_210,
                               (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
                               puVar29,*(int *)&(pTVar17->Elements).field_0xa0);
          pFVar4 = local_3b0;
          uStack_3e0 = pTVar18->_padding_;
          pTVar8 = pTVar18->Array;
          uVar9._0_4_ = pTVar18->UnvisitedBitMask;
          uVar9._4_4_ = pTVar18->CurrentBitIndex;
          local_3c8 = pTVar18->BaseBitIndex;
          uStack_3c4 = *(undefined4 *)&pTVar18->field_0x1c;
          local_3d8 = pTVar8;
          _uStack_3d0 = uVar9;
          while( true ) {
            pTVar30 = local_2c0;
            if (*(int *)&(local_2c0->Elements).field_0x88 -
                *(int *)&(local_2c0->Elements).field_0xac != (int)uStack_298) {
              local_403[0] = 0;
              `TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_403);
            }
            if (((TStack_2b8.CurrentBitIndex == uVar9._4_4_) && (TStack_2b8.Array == pTVar8)) &&
               (piVar36 = local_3f8, pTVar30 == pTVar17)) break;
            pTVar19 = *(TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                        **)&(pTVar30->Elements).field_0x80;
            if (pTVar19 !=
                (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                 *)0x0) {
              pTVar30 = pTVar19;
            }
            local_330 = *(UObject **)
                         (&(pTVar30->Elements).field_0x0 +
                         (longlong)TStack_2b8.CurrentBitIndex * 0x10);
            bVar12 = UPoseSearchDatabase::Contains((UPoseSearchDatabase *)pFVar4,local_330);
            if (bVar12) {
              TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
              ::Emplace<UObject_const_*_const_&>(pvVar35,&local_328,(bool *)&local_330);
            }
            TStack_2b8.UnvisitedBitMask = TStack_2b8.UnvisitedBitMask & ~TStack_2b8._padding_._4_4_;
            TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::
            FindFirstSetBit(&TStack_2b8);
          }
        }
        else {
          local_a0 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)0x0;
          local_98 = 0;
          local_94 = 8;
          local_90.AllocatorInstance.SecondaryData.Data = (uint *)0x0;
          local_60 = (FSetElementId *)0x0;
          local_58 = 0;
          ___xmm_00000000ffffffff0000002000000000 = (int)uVar10;
          _UNK_150631d74 = SUB84(uVar10,4);
          local_90.NumBits = ___xmm_00000000ffffffff0000002000000000;
          local_90.MaxBits = _UNK_150631d74;
          uStack_78 = uVar11;
          uVar25 = *(int *)&local_400->field_0x90 - *(int *)&param_3->field_0xb4;
          ___xmm_00000000ffffffff0000002000000000 = uVar9;
          if (uVar25 != 0) {
            if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
              Core::Private::OnInvalidSetNum((longlong)(int)uVar25);
            }
            TSparseArrayBase<16,8,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            ::Reserve((TSparseArrayBase<16,8,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                       *)&local_120[0].ElementData,uVar25);
            uVar13 = 1;
            if (uVar25 >> 1 != 0) {
              uVar13 = uVar25 >> 1;
            }
            uVar3 = (ulonglong)(uVar13 - 1) * 2 + 1;
            lVar20 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            uVar13 = 1 << ((byte)lVar20 & 0x1f);
            local_354 = (undefined4)lVar20;
            if (uVar13 < 4) {
              uVar13 = 4;
            }
            else if (uVar25 < 4) {
              uVar13 = 4;
            }
            if ((local_58 == 0) || ((int)local_58 < (int)uVar13)) {
              local_58 = uVar13;
              TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
              ::Rehash((TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                        *)&local_120[0].ElementData);
            }
          }
          puVar29 = &param_3->field_0x98;
          local_3a8._padding_._0_4_ = 0;
          local_3a8._padding_._4_4_ = 1;
          local_3a8.UnvisitedBitMask = 0xffffffff;
          local_3a8.CurrentBitIndex = 0;
          local_3a8.BaseBitIndex = 0;
          local_3a8.Array =
               (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)puVar29;
          if (*(int *)&param_3->field_0xa8 != 0) {
            TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::
            FindFirstSetBit(&local_3a8);
          }
          uStack_3e0 = CONCAT44(local_3a8._padding_._4_4_,(undefined4)local_3a8._padding_);
          iStack_3cc = local_3a8.CurrentBitIndex;
          uStack_3d0 = local_3a8.UnvisitedBitMask;
          uStack_3c4 = local_3a8._28_4_;
          local_3c8 = local_3a8.BaseBitIndex;
          iStack_3c0 = *(int *)&pFVar4->field_0x90 - *(int *)&param_3->field_0xb4;
          local_3d8 = local_3a8.Array;
          uStack_2c8 = CONCAT44(uStack_3bc,iStack_3c0);
          TStack_2e8.Array = local_3a8.Array;
          local_3e8 = pvVar35;
          local_2f0 = pvVar35;
          TStack_2e8._padding_ = uStack_3e0;
          TStack_2e8._16_8_ = _uStack_3d0;
          TStack_2e8._24_8_ = _local_3c8;
          pTVar18 = TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::
                    TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>
                              (&local_230,
                               (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
                               puVar29,*(int *)&param_3->field_0xa8);
          uVar7._0_4_ = pTVar18->UnvisitedBitMask;
          uVar7._4_4_ = pTVar18->CurrentBitIndex;
          local_3c8 = pTVar18->BaseBitIndex;
          uStack_3c4 = *(undefined4 *)&pTVar18->field_0x1c;
          uStack_3e0 = pTVar18->_padding_;
          local_3d8 = pTVar18->Array;
          _uStack_3d0 = uVar7;
          while( true ) {
            puVar29 = local_2f0;
            if (*(int *)(local_2f0 + 0x88) - *(int *)(local_2f0 + 0xac) != (int)uStack_2c8) {
              local_404 = 0;
              `TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_404);
            }
            uVar25 = local_58;
            if (((TStack_2e8.CurrentBitIndex == uVar7._4_4_) && (TStack_2e8.Array == local_3d8)) &&
               (puVar29 == pvVar35)) break;
            if (*(undefined1 **)(puVar29 + 0x80) != (undefined1 *)0x0) {
              puVar29 = *(undefined1 **)(puVar29 + 0x80);
            }
            local_338 = *(ulonglong *)(puVar29 + (longlong)TStack_2e8.CurrentBitIndex * 0x10);
            uVar25 = ((uint)(local_338 >> 0x14) & 0xffff ^ (uint)(local_338 >> 4)) * -0x7a143595;
            uVar25 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb;
            if (*(int *)&(pTVar17->Elements).field_0x88 != *(int *)&(pTVar17->Elements).field_0xac)
            {
              pFVar5 = (ForElementType<FSetElementId> *)(pTVar17->Hash).SecondaryData.Data;
              pFVar22 = &pTVar17->Hash;
              if (pFVar5 != (ForElementType<FSetElementId> *)0x0) {
                pFVar22 = pFVar5;
              }
              iVar33 = *(int *)(pFVar22->InlineData +
                               (ulonglong)(pTVar17->HashSize - 1U & (uVar25 >> 0x10 ^ uVar25)) * 4);
              if (iVar33 != -1) {
                pTVar30 = *(TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                            **)&(pTVar17->Elements).field_0x80;
                do {
                  pTVar19 = pTVar17;
                  if (pTVar30 !=
                      (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
                    pTVar19 = pTVar30;
                  }
                  if (*(ulonglong *)(&(pTVar19->Elements).field_0x0 + (longlong)iVar33 * 0x10) ==
                      local_338) {
                    if (iVar33 != -1) {
                      TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                      ::Emplace<UObject_const_*_const_&>
                                ((TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                                  *)&local_120[0].ElementData,&local_350,(bool *)&local_338);
                    }
                    break;
                  }
                  pTVar19 = pTVar17;
                  if (pTVar30 !=
                      (TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                       *)0x0) {
                    pTVar19 = pTVar30;
                  }
                  iVar33 = *(int *)(&(pTVar19->Elements).field_0x8 + (longlong)iVar33 * 0x10);
                } while (iVar33 != -1);
              }
            }
            TStack_2e8.UnvisitedBitMask = TStack_2e8.UnvisitedBitMask & ~TStack_2e8._padding_._4_4_;
            TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::
            FindFirstSetBit(&TStack_2e8);
          }
          local_3f8 = piVar36;
          if (pvVar35 != local_120) {
            lVar20 = (longlong)(int)local_58;
            if ((4 < local_58) && (local_58 != 0)) {
              if (*(longlong *)&param_3->field_0xc8 == 0) {
                if ((int)local_58 < 0) {
                    /* WARNING: Subroutine does not return */
                  Core::Private::OnInvalidMemStackAllocatorNum(local_58,4);
                }
                puVar14 = TThreadSingleton<FMemStack>::GetTlsSlot();
                local_268 = &local_3ee;
                local_270 = Core::Private::Function::
                            TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                            ::Call;
                pTVar21 = (TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_270;
              }
              else {
                if ((int)local_58 < 0) {
                    /* WARNING: Subroutine does not return */
                  Core::Private::OnInvalidMemStackAllocatorNum(local_58,4);
                }
                puVar14 = TThreadSingleton<FMemStack>::GetTlsSlot();
                local_258 = local_3ed;
                local_260 = Core::Private::Function::
                            TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                            ::Call;
                pTVar21 = (TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_260;
              }
              pFVar15 = FThreadSingletonInitializer::Get(pTVar21,puVar14);
              uVar34 = 8;
              if (0xf < (ulonglong)(longlong)(int)(uVar25 * 4)) {
                uVar34 = 0x10;
              }
              pvVar16 = FMemStackBase::Alloc
                                  ((FMemStackBase *)(pFVar15 + 2),(longlong)(int)(uVar25 * 4),uVar34
                                  );
              *(void **)&param_3->field_0xc8 = pvVar16;
            }
            pFVar23 = local_70;
            if (local_60 != (FSetElementId *)0x0) {
              pFVar23 = local_60;
            }
            pvVar16 = &param_3->field_0xb8;
            if (*(void **)&param_3->field_0xc8 != (void *)0x0) {
              pvVar16 = *(void **)&param_3->field_0xc8;
            }
            if (uVar25 != 0) {
              memcpy(pvVar16,pFVar23,lVar20 << 2);
            }
            iVar33 = local_98;
            *(uint *)&param_3->field_0xd0 = uVar25;
            lVar20 = (longlong)local_98;
            TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            ::Empty(pvVar35,local_98);
            Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
                      (0x10,8,iVar33,pvVar35,(int *)&local_400->field_0x90,
                       (int *)&param_3->field_0x94);
            *(undefined4 *)&param_3->field_0xb0 = (undefined4)uStack_78;
            *(undefined4 *)&param_3->field_0xb4 = uStack_78._4_4_;
            if ((TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
                &param_3->field_0x98 != &local_90) {
              TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::
              Assign<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>
                        ((TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
                         &param_3->field_0x98,&local_90);
            }
            if (*(void **)&param_3->field_0x88 != (void *)0x0) {
              pvVar35 = *(void **)&param_3->field_0x88;
            }
            pTVar24 = local_120;
            if (local_a0 != (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)0x0) {
              pTVar24 = local_a0;
            }
            if (iVar33 != 0) {
              memcpy(pvVar35,pTVar24,lVar20 << 4);
            }
          }
          local_58 = 0;
          TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
          ::
          ~TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                    ((TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                      *)&local_120[0].ElementData);
        }
        param_3 = (FAssetsToSearchPerDatabase *)&local_400->field_0xd8;
        local_400 = param_3;
      }
    }
  }
  else {
    pFVar4 = *(FAssetsToSearchPerDatabase **)&param_3->field_0x6c0;
    local_3b8 = (FAssetsToSearchPerDatabase *)&param_3->field_0x6c8;
    iVar32 = *(int *)local_3b8;
    local_3f8 = (int *)CONCAT44(local_3f8._4_4_,iVar32);
    if (pFVar4 != (FAssetsToSearchPerDatabase *)0x0) {
      param_3 = pFVar4;
      local_400 = pFVar4;
    }
    local_3b0 = (FAssetsToSearchPerDatabase *)
                ((longlong)&param_3->field_0x0 + (longlong)iVar32 * 0x1b * 8);
    while( true ) {
      pFVar4 = local_3b0;
      if (*(int *)local_3b8 != iVar32) {
        local_408 = 0;
        `TCheckedPointerIterator<TTuple<UPoseSearchDatabase_const_*,TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_408);
      }
      if (param_3 == pFVar4) break;
      this = *(UPoseSearchDatabase **)param_3;
      if ((this == (UPoseSearchDatabase *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Database",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchLibrary.cpp"
                              ,0x122,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pvVar35 = &param_3->field_0x8;
      iVar32 = *(int *)&param_3->field_0x90;
      if (iVar32 == *(int *)&param_3->field_0xb4) {
        pFVar28 = (param_2->AssetsToConsider_DEPRECATED).AllocatorInstance.Data;
        iVar32 = (param_2->AssetsToConsider_DEPRECATED).ArrayNum;
        pFVar2 = pFVar28 + (longlong)iVar32 * 8;
        while( true ) {
          if ((param_2->AssetsToConsider_DEPRECATED).ArrayNum != iVar32) {
            local_406 = 0;
            `TCheckedPointerIterator<UObject_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_406);
          }
          if (pFVar28 == pFVar2) break;
          local_340 = *(UObject **)pFVar28;
          bVar12 = UPoseSearchDatabase::Contains(this,local_340);
          if (bVar12) {
            TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
            ::Emplace<UObject_const_*_const_&>
                      (pvVar35,(UObject **)(local_35c + 4),(bool *)&local_340);
          }
          pFVar28 = pFVar28 + 8;
        }
      }
      else {
        local_164 = 8;
        local_170 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)0x0;
        iVar33 = 0;
        local_168 = 0;
        local_160.AllocatorInstance.SecondaryData.Data = (uint *)0x0;
        local_130 = (FSetElementId *)0x0;
        local_128 = 0;
        uVar25 = iVar32 - *(int *)&param_3->field_0xb4;
        local_160._16_8_ = uVar11;
        uStack_148 = uVar10;
        if (uVar25 != 0) {
          if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidSetNum((longlong)(int)uVar25);
          }
          TSparseArrayBase<16,8,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
          ::Reserve((TSparseArrayBase<16,8,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                     *)&local_1f0[0].ElementData,uVar25);
          uVar13 = 1;
          if (uVar25 >> 1 != 0) {
            uVar13 = uVar25 >> 1;
          }
          uVar3 = (ulonglong)(uVar13 - 1) * 2 + 1;
          lVar20 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          uVar13 = 1 << ((byte)lVar20 & 0x1f);
          local_368 = (undefined4)lVar20;
          if (uVar13 < 4) {
            uVar13 = 4;
          }
          else if (uVar25 < 4) {
            uVar13 = 4;
          }
          if ((local_128 == 0) || ((int)local_128 < (int)uVar13)) {
            local_128 = uVar13;
            TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
            ::Rehash((TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                      *)&local_1f0[0].ElementData);
          }
        }
        puVar29 = &param_3->field_0x98;
        iVar32 = *(int *)&param_3->field_0xa8;
        uVar25 = 1;
        local_3c8 = 0;
        iStack_3cc = local_3c8;
        if (iVar32 != 0) {
          puVar14 = (uint *)puVar29;
          if (*(uint **)&param_3->field_0xa0 != (uint *)0x0) {
            puVar14 = *(uint **)&param_3->field_0xa0;
          }
          uVar13 = *puVar14;
          local_3c8 = 0;
          iVar33 = 0;
          while (uVar13 == 0) {
            lVar20 = (longlong)iVar33;
            local_3c8 = local_3c8 + 0x20;
            iVar33 = iVar33 + 1;
            iStack_3cc = iVar32;
            if ((int)(iVar32 + -1 + (iVar32 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar33)
            goto LAB_14a93504d;
            uVar13 = puVar14[lVar20 + 1];
          }
          uVar25 = -uVar13 & uVar13;
          uVar3 = (ulonglong)uVar25 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          local_364 = (int)lVar20;
          iStack_3cc = local_364 + -1 + local_3c8;
          if (iVar32 < iStack_3cc) {
            iStack_3cc = iVar32;
          }
        }
LAB_14a93504d:
        uVar13 = *(uint *)&param_3->field_0xa8;
        iStack_3c0 = *(int *)&param_3->field_0x90 - *(int *)&param_3->field_0xb4;
        uVar31 = uVar13 & 0xffffffe0;
        uStack_3e0 = CONCAT44(uVar25,iVar33);
        uStack_3d0 = 0xffffffff;
        uStack_3c4 = local_234;
        TStack_318._padding_ = uStack_3e0;
        iVar33 = (int)uVar13 >> 5;
        uStack_2f8 = CONCAT44(uStack_3bc,iStack_3c0);
        TStack_318.UnvisitedBitMask = 0xffffffff;
        TStack_318.CurrentBitIndex = iStack_3cc;
        TStack_318.BaseBitIndex = local_3c8;
        TStack_318._28_4_ = local_234;
        local_3e8 = pvVar35;
        local_3d8 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)puVar29;
        local_320 = pvVar35;
        TStack_318.Array = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)puVar29
        ;
        if ((((int)uVar13 < 0) || (iVar32 < (int)uVar13)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar25 = *(uint *)&param_3->field_0xa8;
        if (uVar13 != uVar25) {
          puVar27 = puVar29;
          if (*(undefined1 **)&param_3->field_0xa0 != (undefined1 *)0x0) {
            puVar27 = *(undefined1 **)&param_3->field_0xa0;
          }
          uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar27 + (longlong)iVar33 * 4);
          while (uVar13 == 0) {
            lVar20 = (longlong)iVar33;
            uVar31 = uVar31 + 0x20;
            iVar33 = iVar33 + 1;
            uVar13 = uVar25;
            if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar33)
            goto LAB_14a935160;
            uVar13 = *(uint *)(puVar27 + lVar20 * 4 + 4);
          }
          uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
          lVar20 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          local_360 = (int)lVar20;
          uVar13 = local_360 + -1 + uVar31;
          if ((int)uVar25 < (int)uVar13) {
            uVar13 = uVar25;
          }
        }
LAB_14a935160:
        while( true ) {
          puVar27 = local_320;
          if (*(int *)(local_320 + 0x88) - *(int *)(local_320 + 0xac) != (int)uStack_2f8) {
            local_407 = 0;
            `TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_407);
          }
          uVar25 = local_128;
          if (((TStack_318.CurrentBitIndex == uVar13) &&
              (TStack_318.Array ==
               (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)puVar29)) &&
             (puVar27 == pvVar35)) break;
          if (*(undefined1 **)(puVar27 + 0x80) != (undefined1 *)0x0) {
            puVar27 = *(undefined1 **)(puVar27 + 0x80);
          }
          local_348 = *(longlong *)(puVar27 + (longlong)TStack_318.CurrentBitIndex * 0x10);
          pFVar28 = (param_2->AssetsToConsider_DEPRECATED).AllocatorInstance.Data;
          pFVar2 = pFVar28 + (longlong)(param_2->AssetsToConsider_DEPRECATED).ArrayNum * 8;
          for (; pFVar28 != pFVar2; pFVar28 = pFVar28 + 8) {
            if (*(longlong *)pFVar28 == local_348) {
              TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
              ::Emplace<UObject_const_*_const_&>
                        ((TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,TInlineSetAllocator<8,UE::PoseSearch::TMemStackSetAllocator<0>_>_>
                          *)&local_1f0[0].ElementData,(UObject **)local_35c,(bool *)&local_348);
              break;
            }
          }
          TStack_318.UnvisitedBitMask = TStack_318.UnvisitedBitMask & ~TStack_318._padding_._4_4_;
          TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
                    (&TStack_318);
        }
        if (pvVar35 != local_1f0) {
          lVar20 = (longlong)(int)local_128;
          if ((4 < local_128) && (local_128 != 0)) {
            if (*(longlong *)&param_3->field_0xc8 == 0) {
              if ((int)local_128 < 0) {
                    /* WARNING: Subroutine does not return */
                Core::Private::OnInvalidMemStackAllocatorNum(local_128,4);
              }
              puVar14 = TThreadSingleton<FMemStack>::GetTlsSlot();
              local_288 = &local_3f0;
              local_290 = Core::Private::Function::
                          TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                          ::Call;
              pTVar21 = (TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_290;
            }
            else {
              if ((int)local_128 < 0) {
                    /* WARNING: Subroutine does not return */
                Core::Private::OnInvalidMemStackAllocatorNum(local_128,4);
              }
              puVar14 = TThreadSingleton<FMemStack>::GetTlsSlot();
              local_278 = &local_3ef;
              local_280 = Core::Private::Function::
                          TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                          ::Call;
              pTVar21 = (TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_280;
            }
            pFVar15 = FThreadSingletonInitializer::Get(pTVar21,puVar14);
            uVar34 = 8;
            if (0xf < (ulonglong)(longlong)(int)(uVar25 * 4)) {
              uVar34 = 0x10;
            }
            pvVar16 = FMemStackBase::Alloc
                                ((FMemStackBase *)(pFVar15 + 2),(longlong)(int)(uVar25 * 4),uVar34);
            *(void **)&param_3->field_0xc8 = pvVar16;
          }
          pFVar23 = local_140;
          if (local_130 != (FSetElementId *)0x0) {
            pFVar23 = local_130;
          }
          pvVar16 = &param_3->field_0xb8;
          if (*(void **)&param_3->field_0xc8 != (void *)0x0) {
            pvVar16 = *(void **)&param_3->field_0xc8;
          }
          if (uVar25 != 0) {
            memcpy(pvVar16,pFVar23,lVar20 << 2);
          }
          iVar32 = local_168;
          *(uint *)&param_3->field_0xd0 = uVar25;
          lVar20 = (longlong)local_168;
          TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
          ::Empty(pvVar35,local_168);
          Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
                    (0x10,8,iVar32,pvVar35,(int *)&local_400->field_0x90,(int *)&param_3->field_0x94
                    );
          *(undefined4 *)&param_3->field_0xb0 = (undefined4)uStack_148;
          *(undefined4 *)&param_3->field_0xb4 = uStack_148._4_4_;
          if ((TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)puVar29 !=
              &local_160) {
            TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::
            Assign<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>
                      ((TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)puVar29,
                       &local_160);
          }
          if (*(void **)&param_3->field_0x88 != (void *)0x0) {
            pvVar35 = *(void **)&param_3->field_0x88;
          }
          pTVar24 = local_1f0;
          if (local_170 != (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)0x0) {
            pTVar24 = local_170;
          }
          if (iVar32 != 0) {
            memcpy(pvVar35,pTVar24,lVar20 << 4);
          }
        }
        local_128 = 0;
        TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
        ::
        ~TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                  ((TSparseArray<TSparseSetElement<UObject_const_*>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                    *)&local_1f0[0].ElementData);
        param_3 = local_400;
      }
      param_3 = (FAssetsToSearchPerDatabase *)&param_3->field_0xd8;
      iVar32 = (int)local_3f8;
      local_400 = param_3;
    }
  }
  return;
}

// ShouldUsePoseSearchBranchIn @ 14a93de00

bool __cdecl UE::PoseSearch::ShouldUsePoseSearchBranchIn(TArrayView<UObject_const_*,int> *param_1)

{
  UObject **ppUVar1;
  int iVar2;
  UObject *pUVar3;
  longlong lVar4;
  UClass *pUVar5;
  UObject **ppUVar6;
  
  ppUVar6 = param_1->DataPtr;
  ppUVar1 = ppUVar6 + param_1->ArrayNum;
  while( true ) {
    if (ppUVar6 == ppUVar1) {
      return false;
    }
    pUVar3 = *ppUVar6;
    if (pUVar3 == (UObject *)0x0) {
      return true;
    }
    pUVar5 = Z_Construct_UClass_UPoseSearchDatabase_NoRegister();
    lVar4 = *(longlong *)&pUVar3->field_0x10;
    iVar2 = (int)pUVar5->_padding_;
    if (*(int *)(lVar4 + 0x38) < iVar2) {
      return true;
    }
    if ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar5->_padding_) break;
    ppUVar6 = ppUVar6 + 1;
  }
  return true;
}

// operator() @ 1505566b0

bool __thiscall `UE::PoseSearch::LerpEntries'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<627472916396638373>);
  if (bVar4) {
    if (**(longlong **)((longlong)this + 8) == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      local_res18[0] = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(local_res18,&local_38);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<627472916396638373>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1505567a6;
    }
  }
  bVar4 = false;
LAB_1505567a6:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

