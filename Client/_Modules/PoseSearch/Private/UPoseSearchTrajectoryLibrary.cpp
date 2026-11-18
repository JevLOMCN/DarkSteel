// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 47

// StaticClass @ 14a90c960

UClass * __cdecl UPoseSearchTrajectoryLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchTrajectoryLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchTrajectoryLibrary",
               &Z_Registration_Info_UClass_UPoseSearchTrajectoryLibrary.InnerSingleton,
               StaticRegisterNativesUPoseSearchTrajectoryLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchTrajectoryLibrary>,
               InternalVTableHelperCtorCaller<UPoseSearchTrajectoryLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchTrajectoryLibrary.InnerSingleton;
}

// UPoseSearchTrajectoryLibrary @ 14a91a4b0

UPoseSearchTrajectoryLibrary * __thiscall
UPoseSearchTrajectoryLibrary::UPoseSearchTrajectoryLibrary
          (UPoseSearchTrajectoryLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPoseSearchTrajectoryLibrary__6B_;
  return this;
}

// UPoseSearchTrajectoryLibrary @ 14a91a4e0

UPoseSearchTrajectoryLibrary * __thiscall
UPoseSearchTrajectoryLibrary::UPoseSearchTrajectoryLibrary
          (UPoseSearchTrajectoryLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPoseSearchTrajectoryLibrary__6B_;
  return this;
}

// ~UPoseSearchTrajectoryLibrary @ 14a91b0a0

void __thiscall
UPoseSearchTrajectoryLibrary::~UPoseSearchTrajectoryLibrary(UPoseSearchTrajectoryLibrary *this)

{
  *(undefined ***)this = &___7UPoseSearchTrajectoryLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// DrawTrajectory @ 14a927ec0

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
UPoseSearchTrajectoryLibrary::DrawTrajectory
          (UObject *param_1,FPoseSearchQueryTrajectory *param_2,float param_3,float param_4)

{
  FTransformTrajectory *pFVar1;
  UWorld *pUVar2;
  FTransformTrajectory local_38 [3];
  
  pFVar1 = FPoseSearchQueryTrajectory::operator_FTransformTrajectory(param_2,local_38);
  pUVar2 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (pUVar2 != (UWorld *)0x0) {
    UTransformTrajectoryBlueprintLibrary::DebugDrawTrajectory(pFVar1,pUVar2,param_3,param_4);
  }
  if (local_38[0].Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Samples.AllocatorInstance.Data);
  }
  return;
}

// DrawTransformTrajectory @ 14a927f50

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
UPoseSearchTrajectoryLibrary::DrawTransformTrajectory
          (UObject *param_1,FTransformTrajectory *param_2,float param_3,float param_4)

{
  UWorld *pUVar1;
  
  pUVar1 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (pUVar1 != (UWorld *)0x0) {
    UTransformTrajectoryBlueprintLibrary::DebugDrawTrajectory(param_2,pUVar1,param_3,param_4);
  }
  return;
}

// GetPrivateStaticClass @ 14a92c290

UClass * __cdecl UPoseSearchTrajectoryLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchTrajectoryLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchTrajectoryLibrary",
               &Z_Registration_Info_UClass_UPoseSearchTrajectoryLibrary.InnerSingleton,
               StaticRegisterNativesUPoseSearchTrajectoryLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchTrajectoryLibrary>,
               InternalVTableHelperCtorCaller<UPoseSearchTrajectoryLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchTrajectoryLibrary.InnerSingleton;
}

// GetTrajectoryAngularVelocity @ 14a92ccb0

void __cdecl
UPoseSearchTrajectoryLibrary::GetTrajectoryAngularVelocity
          (FPoseSearchQueryTrajectory *param_1,float param_2,float param_3,TVector<double> *param_4,
          bool param_5)

{
  FTransformTrajectory *pFVar1;
  FTransformTrajectory local_38 [3];
  
  pFVar1 = FPoseSearchQueryTrajectory::operator_FTransformTrajectory(param_1,local_38);
  GetTransformTrajectoryAngularVelocity(pFVar1,param_2,param_3,param_4,param_5);
  if (local_38[0].Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Samples.AllocatorInstance.Data);
  }
  return;
}

// GetTrajectorySampleAtTime @ 14a92cd20

void __cdecl
UPoseSearchTrajectoryLibrary::GetTrajectorySampleAtTime
          (FPoseSearchQueryTrajectory *param_1,float param_2,
          FPoseSearchQueryTrajectorySample *param_3,bool param_4)

{
  double dVar1;
  float fVar2;
  undefined4 uVar3;
  FPoseSearchQueryTrajectorySample *pFVar4;
  FPoseSearchQueryTrajectorySample local_48;
  
  pFVar4 = FPoseSearchQueryTrajectory::GetSampleAtTime(param_1,&local_48,param_2,param_4);
  dVar1 = (pFVar4->Facing).Y;
  (param_3->Facing).X = (pFVar4->Facing).X;
  (param_3->Facing).Y = dVar1;
  dVar1 = (pFVar4->Facing).W;
  (param_3->Facing).Z = (pFVar4->Facing).Z;
  (param_3->Facing).W = dVar1;
  dVar1 = (pFVar4->Position).field0_0x0._s_0.Y;
  (param_3->Position).field0_0x0._s_0.X = (pFVar4->Position).field0_0x0._s_0.X;
  (param_3->Position).field0_0x0._s_0.Y = dVar1;
  fVar2 = pFVar4->AccumulatedSeconds;
  uVar3 = *(undefined4 *)&pFVar4->field_0x3c;
  (param_3->Position).field0_0x0._s_0.Z = (pFVar4->Position).field0_0x0._s_0.Z;
  param_3->AccumulatedSeconds = fVar2;
  *(undefined4 *)&param_3->field_0x3c = uVar3;
  return;
}

// GetTrajectoryVelocity @ 14a92cdc0

void __cdecl
UPoseSearchTrajectoryLibrary::GetTrajectoryVelocity
          (FPoseSearchQueryTrajectory *param_1,float param_2,float param_3,TVector<double> *param_4,
          bool param_5)

{
  FTransformTrajectory *pFVar1;
  FTransformTrajectory local_38 [3];
  
  pFVar1 = FPoseSearchQueryTrajectory::operator_FTransformTrajectory(param_1,local_38);
  GetTransformTrajectoryVelocity(pFVar1,param_2,param_3,param_4,param_5);
  if (local_38[0].Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Samples.AllocatorInstance.Data);
  }
  return;
}

// GetTransform @ 14a92ce30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __cdecl
UPoseSearchTrajectoryLibrary::GetTransform
          (TTransform<double> *__return_storage_ptr__,FPoseSearchQueryTrajectorySample *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (param_1->Facing).Y;
  dVar2 = (param_1->Facing).Z;
  dVar3 = (param_1->Facing).W;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_1->Facing).X;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (param_1->Position).field0_0x0._s_0.Y;
  dVar1 = (param_1->Position).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (param_1->Position).field0_0x0._s_0.X;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  dVar1 = _UNK_150689688;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = _UNK_150689518;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar1;
  return __return_storage_ptr__;
}

// GetTransformTrajectoryAngularVelocity @ 14a92ce80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPoseSearchTrajectoryLibrary::GetTransformTrajectoryAngularVelocity
          (FTransformTrajectory *param_1,float param_2,float param_3,TVector<double> *param_4,
          bool param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  TQuat<double> local_138;
  TQuat<double> local_118;
  FTransformTrajectorySample local_f8;
  FTransformTrajectorySample local_b8 [2];
  
  if (__real_322bcc77 < (float)((uint)(param_2 - param_3) & __xmm_7fffffff7fffffff7fffffff7fffffff))
  {
    FTransformTrajectory::GetSampleAtTime(param_1,&local_f8,param_2,param_5);
    FTransformTrajectory::GetSampleAtTime(param_1,local_b8,param_3,param_5);
    dVar3 = __real_3ff0000000000000;
    local_f8.Facing.Z =
         local_f8.Facing.Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    local_f8.Facing.W =
         local_f8.Facing.W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    local_f8.Facing.X =
         local_f8.Facing.X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    local_f8.Facing.Y =
         local_f8.Facing.Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    local_138.X = local_b8[0].Facing.X * local_f8.Facing.W *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                  local_b8[0].Facing.W * local_f8.Facing.X +
                  local_b8[0].Facing.Y * local_f8.Facing.Z *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                  local_b8[0].Facing.Z * local_f8.Facing.Y *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar7 = local_b8[0].Facing.X * local_f8.Facing.Z *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
            local_b8[0].Facing.W * local_f8.Facing.Y +
            local_b8[0].Facing.Y * local_f8.Facing.W *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
            local_b8[0].Facing.Z * local_f8.Facing.X *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    auVar6._8_4_ = SUB84(dVar7,0);
    auVar6._0_8_ = local_138.X;
    auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    local_138.Y = auVar6._8_8_;
    dVar5 = local_b8[0].Facing.X * local_f8.Facing.Y *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
            local_b8[0].Facing.W * local_f8.Facing.Z +
            local_b8[0].Facing.Y * local_f8.Facing.X *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
            local_b8[0].Facing.Z * local_f8.Facing.W *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar10 = local_b8[0].Facing.X * local_f8.Facing.X *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             local_b8[0].Facing.W * local_f8.Facing.W +
             local_b8[0].Facing.Y * local_f8.Facing.Y *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             local_b8[0].Facing.Z * local_f8.Facing.Z *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar4._8_4_ = SUB84(dVar10,0);
    auVar4._0_8_ = dVar5;
    auVar4._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    local_138.W = auVar4._8_8_;
    dVar9 = __real_bff0000000000000;
    if (0.0 <= dVar10 * UE::Math::TQuat<double>::Identity.W +
               dVar5 * UE::Math::TQuat<double>::Identity.Z +
               dVar7 * UE::Math::TQuat<double>::Identity.Y +
               local_138.X * UE::Math::TQuat<double>::Identity.X) {
      dVar9 = __real_3ff0000000000000;
    }
    local_138.Y = local_138.Y * dVar9;
    local_138.X = local_138.X * dVar9;
    auVar1._8_4_ = SUB84(dVar5 * dVar9,0);
    auVar1._0_8_ = local_138.Y;
    auVar1._12_4_ = (int)((ulonglong)(dVar5 * dVar9) >> 0x20);
    local_138.Z = auVar1._8_8_;
    local_138.W = local_138.W * dVar9;
    UE::Math::TQuat<double>::Log(&local_138,&local_118);
    dVar3 = dVar3 / (double)(param_3 - param_2);
    dVar10 = local_118.Z * ___xmm_40000000000000004000000000000000 * dVar3 *
             ___xmm_404ca5dc1a63c1f8404ca5dc1a63c1f8;
    dVar5 = local_118.Y * _UNK_150689698 * dVar3 * _UNK_1512ba0b8;
    auVar2._8_4_ = SUB84(dVar5,0);
    auVar2._0_8_ = local_118.X * ___xmm_40000000000000004000000000000000 * dVar3 *
                   ___xmm_404ca5dc1a63c1f8404ca5dc1a63c1f8;
    auVar2._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    *(undefined1 (*) [16])&param_4->field0_0x0 = auVar2;
    (param_4->field0_0x0)._s_0.Z = dVar10;
  }
  else {
    if (2 < (byte)LogPoseSearch._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (param_4->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (param_4->field0_0x0)._s_0.Y = (double)uVar8;
    (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  return;
}

// GetTransformTrajectorySampleAtTime @ 14a92d180

void __cdecl
UPoseSearchTrajectoryLibrary::GetTransformTrajectorySampleAtTime
          (FTransformTrajectory *param_1,float param_2,FTransformTrajectorySample *param_3,
          bool param_4)

{
  double dVar1;
  float fVar2;
  undefined4 uVar3;
  FTransformTrajectorySample *pFVar4;
  FTransformTrajectorySample local_48;
  
  pFVar4 = FTransformTrajectory::GetSampleAtTime(param_1,&local_48,param_2,param_4);
  dVar1 = (pFVar4->Facing).Y;
  (param_3->Facing).X = (pFVar4->Facing).X;
  (param_3->Facing).Y = dVar1;
  dVar1 = (pFVar4->Facing).W;
  (param_3->Facing).Z = (pFVar4->Facing).Z;
  (param_3->Facing).W = dVar1;
  dVar1 = (pFVar4->Position).field0_0x0._s_0.Y;
  (param_3->Position).field0_0x0._s_0.X = (pFVar4->Position).field0_0x0._s_0.X;
  (param_3->Position).field0_0x0._s_0.Y = dVar1;
  fVar2 = pFVar4->TimeInSeconds;
  uVar3 = *(undefined4 *)&pFVar4->field_0x3c;
  (param_3->Position).field0_0x0._s_0.Z = (pFVar4->Position).field0_0x0._s_0.Z;
  param_3->TimeInSeconds = fVar2;
  *(undefined4 *)&param_3->field_0x3c = uVar3;
  return;
}

// GetTransformTrajectorySampleTransform @ 14a92d1c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __cdecl
UPoseSearchTrajectoryLibrary::GetTransformTrajectorySampleTransform
          (TTransform<double> *__return_storage_ptr__,FTransformTrajectorySample *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (param_1->Facing).Y;
  dVar2 = (param_1->Facing).Z;
  dVar3 = (param_1->Facing).W;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_1->Facing).X;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (param_1->Position).field0_0x0._s_0.Y;
  dVar1 = (param_1->Position).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (param_1->Position).field0_0x0._s_0.X;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  dVar1 = _UNK_150689688;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = _UNK_150689518;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar1;
  return __return_storage_ptr__;
}

// GetTransformTrajectoryVelocity @ 14a92d210

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPoseSearchTrajectoryLibrary::GetTransformTrajectoryVelocity
          (FTransformTrajectory *param_1,float param_2,float param_3,TVector<double> *param_4,
          bool param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  FTransformTrajectorySample local_a8;
  FTransformTrajectorySample local_68;
  
  if (__real_322bcc77 < (float)((uint)(param_2 - param_3) & __xmm_7fffffff7fffffff7fffffff7fffffff))
  {
    FTransformTrajectory::GetSampleAtTime(param_1,&local_68,param_2,param_5);
    FTransformTrajectory::GetSampleAtTime(param_1,&local_a8,param_3,param_5);
    dVar4 = __real_3ff0000000000000 / (double)(param_3 - param_2);
    dVar2 = (local_a8.Position.field0_0x0._s_0.Y - local_68.Position.field0_0x0._s_0.Y) * dVar4;
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = (local_a8.Position.field0_0x0._s_0.X - local_68.Position.field0_0x0._s_0.X) *
                   dVar4;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])&param_4->field0_0x0 = auVar1;
    (param_4->field0_0x0)._s_0.Z =
         (local_a8.Position.field0_0x0._s_0.Z - local_68.Position.field0_0x0._s_0.Z) * dVar4;
  }
  else {
    if (2 < (byte)LogPoseSearch._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (param_4->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (param_4->field0_0x0)._s_0.Y = (double)uVar3;
    (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  return;
}

// HandleTrajectoryWorldCollisions @ 14a92d320

void __cdecl
UPoseSearchTrajectoryLibrary::HandleTrajectoryWorldCollisions
          (UObject *param_1,UAnimInstance *param_2,FPoseSearchQueryTrajectory *param_3,bool param_4,
          float param_5,FPoseSearchQueryTrajectory *param_6,
          FPoseSearchTrajectory_WorldCollisionResults *param_7,ETraceTypeQuery param_8,bool param_9,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_10,Type param_11,bool param_12,
          float param_13,FLinearColor *param_14,FLinearColor *param_15,float param_16)

{
  FScriptContainerElement *pFVar1;
  FPoseSearchQueryTrajectory local_58;
  FTransformTrajectory local_48;
  FTransformTrajectory local_38;
  FLinearColor_u_0 local_28;
  FLinearColor_u_0 local_18;
  
  FPoseSearchQueryTrajectory::operator_FTransformTrajectory(param_3,&local_38);
  local_48.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Samples.ArrayNum = 0;
  local_48.Samples.ArrayMax = 0;
  local_28._0_8_ = *(undefined8 *)&param_15->field0_0x0;
  local_28._8_8_ = *(undefined8 *)((longlong)&param_15->field0_0x0 + 8);
  local_18._0_8_ = *(undefined8 *)&param_14->field0_0x0;
  local_18._8_8_ = *(undefined8 *)((longlong)&param_14->field0_0x0 + 8);
  HandleTransformTrajectoryWorldCollisions
            (param_1,param_2,&local_38,param_4,param_5,&local_48,param_7,param_8,param_9,param_10,
             param_11,param_12,param_13,(FLinearColor *)&local_18._s_0,
             (FLinearColor *)&local_28._s_0,param_16);
  FPoseSearchQueryTrajectory::FPoseSearchQueryTrajectory(&local_58,&local_48);
  if (param_6 != &local_58) {
    pFVar1 = (param_6->Samples).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_6->Samples).AllocatorInstance.Data = local_58.Samples.AllocatorInstance.Data;
    (param_6->Samples).ArrayNum = local_58.Samples.ArrayNum;
    (param_6->Samples).ArrayMax = local_58.Samples.ArrayMax;
    local_58.Samples.ArrayNum = 0;
    local_58.Samples.ArrayMax = 0;
    local_58.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_58.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Samples.AllocatorInstance.Data);
  }
  if (local_48.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Samples.AllocatorInstance.Data);
  }
  if (local_38.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Samples.AllocatorInstance.Data);
  }
  return;
}

// HandleTrajectoryWorldCollisionsWithGravity @ 14a92d4a0

void __cdecl
UPoseSearchTrajectoryLibrary::HandleTrajectoryWorldCollisionsWithGravity
          (UObject *param_1,FPoseSearchQueryTrajectory *param_2,TVector<double> *param_3,
          bool param_4,TVector<double> *param_5,float param_6,FPoseSearchQueryTrajectory *param_7,
          FPoseSearchTrajectory_WorldCollisionResults *param_8,ETraceTypeQuery param_9,bool param_10
          ,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_11,Type param_12,bool param_13,
          float param_14,FLinearColor *param_15,FLinearColor *param_16,float param_17)

{
  FScriptContainerElement *pFVar1;
  FPoseSearchQueryTrajectory local_98;
  FTransformTrajectory local_88;
  FTransformTrajectory local_78;
  FLinearColor_u_0 local_68;
  FLinearColor_u_0 local_58;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  FPoseSearchQueryTrajectory::operator_FTransformTrajectory(param_2,&local_78);
  local_88.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Samples.ArrayNum = 0;
  local_88.Samples.ArrayMax = 0;
  local_68._0_8_ = *(undefined8 *)&param_16->field0_0x0;
  local_68._8_8_ = *(undefined8 *)((longlong)&param_16->field0_0x0 + 8);
  local_58._0_8_ = *(undefined8 *)&param_15->field0_0x0;
  local_58._8_8_ = *(undefined8 *)((longlong)&param_15->field0_0x0 + 8);
  local_48._s_0.X = (param_5->field0_0x0)._s_0.X;
  local_48._s_0.Y = (param_5->field0_0x0)._s_0.Y;
  local_48._s_0.Z = (param_5->field0_0x0)._s_0.Z;
  local_28._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  HandleTransformTrajectoryWorldCollisionsWithGravity
            (param_1,&local_78,(TVector<double> *)&local_28._s_0,param_4,
             (TVector<double> *)&local_48._s_0,param_6,&local_88,param_8,param_9,param_10,param_11,
             param_12,param_13,param_14,(FLinearColor *)&local_58._s_0,
             (FLinearColor *)&local_68._s_0,param_17);
  FPoseSearchQueryTrajectory::FPoseSearchQueryTrajectory(&local_98,&local_88);
  if (param_7 != &local_98) {
    pFVar1 = (param_7->Samples).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_7->Samples).AllocatorInstance.Data = local_98.Samples.AllocatorInstance.Data;
    (param_7->Samples).ArrayNum = local_98.Samples.ArrayNum;
    (param_7->Samples).ArrayMax = local_98.Samples.ArrayMax;
    local_98.Samples.ArrayNum = 0;
    local_98.Samples.ArrayMax = 0;
    local_98.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_98.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Samples.AllocatorInstance.Data);
  }
  if (local_88.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Samples.AllocatorInstance.Data);
  }
  if (local_78.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Samples.AllocatorInstance.Data);
  }
  return;
}

// HandleTransformTrajectoryWorldCollisions @ 14a92d650

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
UPoseSearchTrajectoryLibrary::HandleTransformTrajectoryWorldCollisions
          (UObject *param_1,UAnimInstance *param_2,FTransformTrajectory *param_3,bool param_4,
          float param_5,FTransformTrajectory *param_6,
          FPoseSearchTrajectory_WorldCollisionResults *param_7,ETraceTypeQuery param_8,bool param_9,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_10,Type param_11,bool param_12,
          float param_13,FLinearColor *param_14,FLinearColor *param_15,float param_16)

{
  double dVar1;
  int iVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  AActor *pAVar6;
  UClass *pUVar7;
  undefined4 *puVar8;
  uint uVar9;
  double dVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  FLinearColor_u_0 local_a8;
  FLinearColor_u_0 local_98;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68 [4];
  
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  dVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  dVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
  local_68[0]._16_8_ = uVar11;
  if (((param_4) && (param_2 != (UAnimInstance *)0x0)) &&
     (pAVar6 = UAnimInstance::GetOwningActor(param_2), pAVar6 != (AActor *)0x0)) {
    pUVar7 = Z_Construct_UClass_ACharacter_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if (((iVar2 <= *(int *)(pAVar6->_padding_ + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(pAVar6->_padding_ + 0x30) + (longlong)iVar2 * 8)
         == &pUVar7->_padding_)) &&
       (plVar3 = *(longlong **)&pAVar6[1].AttachmentReplication.LocationOffset.field_0x10,
       plVar3 != (longlong *)0x0)) {
      dVar4 = (double)plVar3[0x3c];
      dVar5 = (double)plVar3[0x3d];
      dVar1 = (double)plVar3[0x3e];
      uVar9 = (**(code **)(*plVar3 + 0x4f8))();
      dVar10 = (double)(float)(uVar9 ^ __xmm_80000000800000008000000080000000);
      uVar11 = dVar10 * dVar1;
      dVar4 = dVar10 * dVar4;
      dVar10 = dVar10 * dVar5;
      local_68[0]._16_8_ = uVar11;
      puVar8 = (undefined4 *)(**(code **)(pAVar6->_padding_ + 0x360))(pAVar6,local_68);
      uVar12 = *puVar8;
      uVar13 = puVar8[1];
      uVar14 = puVar8[2];
      uVar15 = puVar8[3];
      local_68[0]._16_8_ = *(undefined8 *)(puVar8 + 4);
    }
  }
  local_88._8_4_ = SUB84(dVar10,0);
  local_88._0_8_ = dVar4;
  local_88._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  local_a8._0_8_ = *(undefined8 *)&param_15->field0_0x0;
  local_a8._8_8_ = *(undefined8 *)((longlong)&param_15->field0_0x0 + 8);
  local_98._0_8_ = *(undefined8 *)&param_14->field0_0x0;
  local_98._8_8_ = *(undefined8 *)((longlong)&param_14->field0_0x0 + 8);
  local_88._s_0.Z = (double)uVar11;
  local_68[0]._0_4_ = uVar12;
  local_68[0]._4_4_ = uVar13;
  local_68[0]._8_4_ = uVar14;
  local_68[0]._12_4_ = uVar15;
  HandleTransformTrajectoryWorldCollisionsWithGravity
            (param_1,param_3,(TVector<double> *)&local_68[0]._s_0,param_4,
             (TVector<double> *)&local_88._s_0,param_5,param_6,param_7,param_8,param_9,param_10,
             param_11,param_12,param_13,(FLinearColor *)&local_98._s_0,
             (FLinearColor *)&local_a8._s_0,param_16);
  return;
}

// HandleTransformTrajectoryWorldCollisionsWithGravity @ 14a92d8c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UPoseSearchTrajectoryLibrary::HandleTransformTrajectoryWorldCollisionsWithGravity
          (UObject *param_1,FTransformTrajectory *param_2,TVector<double> *param_3,bool param_4,
          TVector<double> *param_5,float param_6,FTransformTrajectory *param_7,
          FPoseSearchTrajectory_WorldCollisionResults *param_8,ETraceTypeQuery param_9,bool param_10
          ,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_11,Type param_12,bool param_13,
          float param_14,FLinearColor *param_15,FLinearColor *param_16,float param_17)

{
  undefined8 uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  FTransformTrajectory *this;
  bool bVar10;
  bool bVar11;
  TVector<double> *pTVar12;
  FTransformTrajectorySample *pFVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  float fVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  float fVar34;
  double local_508;
  undefined1 local_4f8 [16];
  FLinearColor_u_0 local_4e8;
  double local_4d8;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined4 uStack_4b0;
  undefined1 uStack_4ac;
  undefined2 uStack_4ab;
  undefined1 uStack_4a9;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined4 uStack_490;
  undefined1 uStack_48c;
  undefined2 uStack_48b;
  undefined1 uStack_489;
  TVector<double>_u_0 local_488;
  TVector<double>_u_0 local_468;
  FLinearColor_u_0 local_448;
  FLinearColor_u_0 local_438;
  FLinearColor_u_0 local_428;
  TVector<double>_u_0 local_418;
  TVector<double>_u_0 local_3f8;
  TVector<double>_u_0 local_3d8;
  TVector<double>_u_0 local_3b8;
  TVector<double>_u_0 local_398 [2];
  double local_368;
  double local_348;
  TVector<double> local_338;
  undefined1 local_318 [48];
  double dStack_2e8;
  double local_2e0;
  int local_274;
  FWeakObjectPtr local_260;
  FWeakObjectPtr FStack_258;
  undefined1 local_250 [16];
  undefined1 local_218 [164];
  int local_174;
  FWeakObjectPtr local_160;
  FWeakObjectPtr FStack_158;
  IActorInstanceManagerInterface *local_150;
  undefined8 uStack_148;
  FTransformTrajectorySample local_118 [3];
  
  this = param_7;
  FTransformTrajectory::operator=(param_7,param_2);
  fVar27 = __real_322bcc77;
  dVar24 = (param_3->field0_0x0)._s_0.Z;
  fVar34 = 0.0;
  iVar2 = (param_7->Samples).ArrayNum;
  lVar19 = (longlong)iVar2;
  local_4d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_508 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
  dVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
  param_7._0_4_ = (float)dVar24;
  local_4f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
  if (param_4) {
    dVar21 = (param_5->field0_0x0)._s_0.X;
    uVar16 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar17 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (((__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & uVar17,SUB84(dVar21,0) & uVar16)) ||
        (uVar1 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8),
        __real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar17,(uint)uVar1 & uVar16))) ||
       (uVar1 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 0x10),
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar17,(uint)uVar1 & uVar16))) {
      dVar25 = (param_5->field0_0x0)._s_0.Y;
      dVar26 = (param_5->field0_0x0)._s_0.Z;
      auVar22._0_8_ = dVar25 * dVar25;
      auVar22._8_8_ = 0;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = dVar21 * dVar21 + auVar22._0_8_ + dVar26 * dVar26;
      auVar23 = sqrtpd(auVar22,auVar23);
      fVar34 = (float)auVar23._0_8_;
      if (fVar34 <= __real_322bcc77) {
      }
      else {
        dVar7 = (double)(__real_3f800000 / fVar34);
        local_508 = dVar7 * dVar21;
        dVar8 = dVar7 * dVar25;
        local_4f8._8_8_ = dVar8;
        local_4f8._0_8_ = local_508;
        local_4d8 = dVar7 * dVar26;
      }
      fVar34 = (float)((uint)fVar34 ^ __xmm_80000000800000008000000080000000);
      dVar26 = (dVar8 * (param_3->field0_0x0)._s_0.Y + local_508 * (param_3->field0_0x0)._s_0.X +
               local_4d8 * dVar24) / (dVar8 * dVar8 + local_508 * local_508 + local_4d8 * local_4d8)
      ;
      dVar25 = dVar26 * local_508;
      dVar24 = dVar26 * dVar8;
      dVar26 = dVar26 * local_4d8;
      dVar21 = SQRT(dVar24 * dVar24 + dVar25 * dVar25 + dVar26 * dVar26);
      dVar24 = dVar8 * dVar24 + local_508 * dVar25 + local_4d8 * dVar26;
      if (dVar24 <= 0.0) {
        if (0.0 <= dVar24) {
          param_7._0_4_ = (float)(dVar21 * __real_8000000000000000);
        }
        else {
          param_7._0_4_ = (float)(dVar21 * __real_3ff0000000000000);
        }
      }
      else {
        param_7._0_4_ = (float)(dVar21 * __real_bff0000000000000);
      }
    }
  }
  dVar24 = local_4d8;
  uVar18 = (ulonglong)local_4d8 >> 0x20;
  uVar17 = SUB84(local_4d8,0);
  uVar16 = 0;
  if ((int)(iVar2 - 1U) < iVar2) {
    uVar16 = ~(iVar2 - 1U) >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar15 = 0;
  fVar20 = (float)((uint)fVar34 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  param_8->TimeToLand =
       *(float *)((this->Samples).AllocatorInstance.Data +
                 (longlong)(this->Samples).ArrayNum * 0x40 + -8);
  dVar21 = __real_40a7700000000000;
  if (fVar20 <= fVar27) {
    if ((0.0 < param_6) && (uVar18 = uVar15, 0 < iVar2)) {
      do {
        uVar17 = (uint)uVar18;
        uVar16 = 0;
        if ((int)uVar17 < (this->Samples).ArrayNum) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this->Samples).AllocatorInstance.Data;
        if (0.0 < *(float *)(pFVar3 + uVar15 + 0x38)) {
          memset(local_218,0,0x100);
          local_4e8._0_8_ = *(undefined8 *)&param_15->field0_0x0;
          local_4e8._8_8_ = *(undefined8 *)((longlong)&param_15->field0_0x0 + 8);
          uStack_48b = 0;
          local_4a8 = 0;
          uStack_4a0 = 0;
          uStack_489 = 0;
          local_160.ObjectIndex = 0;
          local_160.ObjectSerialNumber = 0;
          FStack_158.ObjectIndex = 0;
          FStack_158.ObjectSerialNumber = 0;
          local_498 = 0;
          uStack_48c = 0;
          local_398[0]._16_8_ = *(undefined8 *)(pFVar3 + uVar15 + 0x30);
          uStack_490 = 0xffffffff;
          uStack_148._0_4_ = -1;
          uStack_148._4_1_ = Invalid;
          uStack_148._5_3_ = 0;
          local_218._4_4_ = 1.0;
          local_174 = -1;
          local_150 = (IActorInstanceManagerInterface *)0x0;
          local_428._0_8_ = *(undefined8 *)&param_16->field0_0x0;
          local_428._8_8_ = *(undefined8 *)((longlong)&param_16->field0_0x0 + 8);
          local_468._s_0.Y =
               UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * dVar21 +
               *(double *)(pFVar3 + uVar15 + 0x28);
          local_398[0]._0_8_ = *(undefined8 *)(pFVar3 + uVar15 + 0x20);
          local_398[0]._8_8_ = *(undefined8 *)(pFVar3 + uVar15 + 0x20 + 8);
          local_468._s_0.X =
               UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * dVar21 +
               *(double *)(pFVar3 + uVar15 + 0x20);
          local_468._s_0.Z =
               UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * dVar21 +
               *(double *)(pFVar3 + uVar15 + 0x30);
          bVar10 = UKismetSystemLibrary::LineTraceSingle
                             (param_1,(TVector<double> *)&local_468._s_0,
                              (TVector<double> *)&local_398[0]._s_0,param_9,param_10,param_11,
                              param_12,(FHitResult *)local_218,param_13,
                              (FLinearColor *)&local_4e8._s_0,(FLinearColor *)&local_428._s_0,
                              param_17);
          if (bVar10) {
            *(double *)(pFVar3 + uVar15 + 0x30) = (double)param_6 + (double)local_218._56_8_;
          }
        }
        uVar15 = uVar15 + 0x40;
        lVar19 = lVar19 + -1;
        uVar18 = (ulonglong)(uVar17 + 1);
      } while (lVar19 != 0);
    }
  }
  else {
    bVar9 = true;
    dVar21 = (double)(float)((uint)fVar34 ^ __xmm_80000000800000008000000080000000);
    bVar10 = false;
    uVar16 = 1;
    fVar27 = 0.0;
    if (1 < lVar19) {
      uVar30 = (uint)__xmm_80000000000000008000000000000000;
      uVar31 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      lVar14 = 0x40;
      lVar19 = lVar19 + -1;
      uVar28 = __xmm_80000000800000008000000080000000;
      do {
        uVar29 = 0;
        if ((int)uVar16 < (this->Samples).ArrayNum) {
          uVar29 = ~uVar16 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this->Samples).AllocatorInstance.Data;
        if (0.0 < *(float *)(pFVar3 + lVar14 + 0x38)) {
          uVar29 = 0;
          if ((int)(uVar16 - 1) < (this->Samples).ArrayNum) {
            uVar29 = -uVar16 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (this->Samples).AllocatorInstance.Data;
          fVar27 = fVar27 + (*(float *)(pFVar3 + lVar14 + 0x38) - *(float *)(pFVar4 + lVar14 + -8));
          if (bVar10) {
            uVar28 = SUB84(local_508,0) ^ uVar30;
            uVar29 = (uint)((ulonglong)local_508 >> 0x20) ^ uVar31;
            local_348 = *(double *)(pFVar4 + lVar14 + -0x10);
            uVar32 = uVar17 ^ uVar30;
            uVar33 = (uint)uVar18 ^ uVar31;
            uVar30 = SUB84(dVar8,0) ^ uVar30;
            uVar31 = (uint)((ulonglong)dVar8 >> 0x20) ^ uVar31;
            dVar25 = (*(double *)(pFVar3 + lVar14 + 0x20) * (double)CONCAT44(uVar29,uVar28) +
                      *(double *)(pFVar3 + lVar14 + 0x28) * (double)CONCAT44(uVar31,uVar30) +
                     *(double *)(pFVar3 + lVar14 + 0x30) * (double)CONCAT44(uVar33,uVar32)) -
                     ((double)CONCAT44(uVar31,uVar30) * *(double *)(pFVar4 + lVar14 + -0x20 + 8) +
                      (double)CONCAT44(uVar29,uVar28) * *(double *)(pFVar4 + lVar14 + -0x20) +
                     (double)CONCAT44(uVar33,uVar32) * local_348);
            *(double *)(pFVar3 + lVar14 + 0x20) =
                 *(double *)(pFVar3 + lVar14 + 0x20) - (double)CONCAT44(uVar29,uVar28) * dVar25;
            *(double *)(pFVar3 + lVar14 + 0x28) =
                 *(double *)(pFVar3 + lVar14 + 0x28) - (double)CONCAT44(uVar31,uVar30) * dVar25;
            *(double *)(pFVar3 + lVar14 + 0x30) =
                 *(double *)(pFVar3 + lVar14 + 0x30) - (double)CONCAT44(uVar33,uVar32) * dVar25;
            uVar28 = __xmm_80000000800000008000000080000000;
          }
          dVar25 = (double)(fVar27 * __real_3f000000 * fVar27);
          dVar26 = dVar25 * dVar21 * local_508 + *(double *)(pFVar3 + lVar14 + 0x20);
          dVar7 = dVar25 * dVar21 * dVar8 + *(double *)(pFVar3 + lVar14 + 0x28);
          dVar25 = dVar25 * dVar21 * dVar24 + *(double *)(pFVar3 + lVar14 + 0x30);
          *(double *)(pFVar3 + lVar14 + 0x20) = dVar26;
          *(double *)(pFVar3 + lVar14 + 0x28) = dVar7;
          *(double *)(pFVar3 + lVar14 + 0x30) = dVar25;
          memset(local_318,0,0x100);
          uStack_4ab = 0;
          uStack_4a9 = 0;
          local_4b8 = 0;
          uStack_4ac = 0;
          uStack_4b0 = 0xffffffff;
          local_318._4_4_ = 1.0;
          local_274 = -1;
          local_4c8 = 0;
          uStack_4c0 = 0;
          local_260.ObjectIndex = 0;
          local_260.ObjectSerialNumber = 0;
          FStack_258.ObjectIndex = 0;
          FStack_258.ObjectSerialNumber = 0;
          local_250._12_4_ = 0;
          local_250._0_12_ = ZEXT412(0xffffffff) << 0x40;
          if (0.0 < param_6) {
            dVar6 = (double)(float)((uint)param_14 ^ uVar28);
            local_448._0_8_ = *(undefined8 *)&param_16->field0_0x0;
            local_448._8_8_ = *(undefined8 *)((longlong)&param_16->field0_0x0 + 8);
            local_418._s_0.X = (double)*(undefined8 *)(pFVar3 + lVar14 + 0x20);
            local_418._s_0.Y = (double)*(undefined8 *)(pFVar3 + lVar14 + 0x20 + 8);
            local_438._0_8_ = *(undefined8 *)&param_15->field0_0x0;
            local_438._8_8_ = *(undefined8 *)((longlong)&param_15->field0_0x0 + 8);
            local_418._s_0.Z = (double)*(undefined8 *)(pFVar3 + lVar14 + 0x30);
            local_488._s_0.X = dVar6 * local_508 + dVar26;
            local_488._s_0.Y = dVar6 * dVar8 + dVar7;
            local_488._s_0.Z = dVar6 * dVar24 + dVar25;
            bVar11 = UKismetSystemLibrary::LineTraceSingle
                               (param_1,(TVector<double> *)&local_488._s_0,
                                (TVector<double> *)&local_418._s_0,param_9,param_10,param_11,
                                param_12,(FHitResult *)local_318,param_13,
                                (FLinearColor *)&local_438._s_0,(FLinearColor *)&local_448._s_0,
                                param_17);
            if (bVar11) {
              local_3d8._s_0.Z = (double)*(undefined8 *)(pFVar3 + lVar14 + 0x30);
              local_3f8._s_0.X = (double)local_4f8._0_8_;
              local_3f8._s_0.Y = (double)local_4f8._8_8_;
              local_3f8._s_0.Z = dVar24;
              local_3d8._s_0.X = (double)*(undefined8 *)(pFVar3 + lVar14 + 0x20);
              local_3d8._s_0.Y = (double)*(undefined8 *)(pFVar3 + lVar14 + 0x20 + 8);
              local_3b8._s_0.Z = local_2e0;
              local_3b8._s_0.X = (double)local_318._40_8_;
              local_3b8._s_0.Y = dStack_2e8;
              pTVar12 = UKismetMathLibrary::FindClosestPointOnLine
                                  (&local_338,(TVector<double> *)&local_3b8._s_0,
                                   (TVector<double> *)&local_3d8._s_0,
                                   (TVector<double> *)&local_3f8._s_0);
              bVar10 = true;
              dVar26 = (double)param_6;
              dVar25 = (pTVar12->field0_0x0)._s_0.Y;
              local_368 = (pTVar12->field0_0x0)._s_0.Z;
              *(double *)(pFVar3 + lVar14 + 0x20) =
                   (pTVar12->field0_0x0)._s_0.X - dVar26 * local_508;
              *(double *)(pFVar3 + lVar14 + 0x28) = dVar25 - dVar26 * dVar8;
              *(double *)(pFVar3 + lVar14 + 0x30) = local_368 - dVar26 * dVar24;
              if (bVar9) {
                pFVar13 = FTransformTrajectory::GetSampleAtTime(this,local_118,0.0,false);
                bVar9 = false;
                fVar27 = (SQRT(param_7._0_4_ * param_7._0_4_ -
                               (float)((uint)((float)*(double *)(pFVar3 + lVar14 + 0x30) -
                                             (float)(pFVar13->Position).field0_0x0._s_0.Z) &
                                      __xmm_7fffffff7fffffff7fffffff7fffffff) * (fVar34 + fVar34)) +
                         param_7._0_4_) * (__real_bf800000 / fVar34);
                param_8->TimeToLand = fVar27;
                param_8->LandSpeed = fVar27 * fVar34 + param_7._0_4_;
              }
              fVar27 = 0.0;
            }
          }
          uVar30 = (uint)__xmm_80000000000000008000000000000000;
          uVar31 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        }
        uVar16 = uVar16 + 1;
        lVar14 = lVar14 + 0x40;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
  }
  param_8->LandSpeed = fVar34 * param_8->TimeToLand + param_7._0_4_;
  return;
}

// InitTrajectorySamples @ 14a92ed70

void __cdecl
UPoseSearchTrajectoryLibrary::InitTrajectorySamples
          (FPoseSearchQueryTrajectory *param_1,FPoseSearchTrajectoryData *param_2,
          TVector<double> *param_3,TQuat<double> *param_4,FSampling *param_5,float param_6)

{
  FScriptContainerElement *pFVar1;
  FPoseSearchQueryTrajectory local_68;
  FTransformTrajectory local_58;
  TVector<double>_u_0 local_48;
  TQuat<double> local_28;
  
  FPoseSearchQueryTrajectory::operator_FTransformTrajectory(param_1,&local_58);
  local_28.X = param_4->X;
  local_28.Y = param_4->Y;
  local_28.Z = param_4->Z;
  local_28.W = param_4->W;
  local_48._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_48._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_48._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  InitTrajectorySamples(&local_58,(TVector<double> *)&local_48._s_0,&local_28,param_5,param_6);
  FPoseSearchQueryTrajectory::FPoseSearchQueryTrajectory(&local_68,&local_58);
  if (param_1 != &local_68) {
    pFVar1 = (param_1->Samples).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Samples).AllocatorInstance.Data = local_68.Samples.AllocatorInstance.Data;
    (param_1->Samples).ArrayNum = local_68.Samples.ArrayNum;
    (param_1->Samples).ArrayMax = local_68.Samples.ArrayMax;
    local_68.Samples.ArrayNum = 0;
    local_68.Samples.ArrayMax = 0;
    local_68.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Samples.AllocatorInstance.Data);
  }
  if (local_58.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Samples.AllocatorInstance.Data);
  }
  return;
}

// InitTrajectorySamples @ 14a92ee70

void __cdecl
UPoseSearchTrajectoryLibrary::InitTrajectorySamples
          (FPoseSearchQueryTrajectory *param_1,TVector<double> *param_2,TQuat<double> *param_3,
          FSampling *param_4,float param_5)

{
  FScriptContainerElement *pFVar1;
  FPoseSearchQueryTrajectory local_68;
  FTransformTrajectory local_58;
  TVector<double>_u_0 local_48;
  TQuat<double> local_28;
  
  FPoseSearchQueryTrajectory::operator_FTransformTrajectory(param_1,&local_58);
  local_28.X = param_3->X;
  local_28.Y = param_3->Y;
  local_28.Z = param_3->Z;
  local_28.W = param_3->W;
  local_48._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_48._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_48._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  InitTrajectorySamples(&local_58,(TVector<double> *)&local_48._s_0,&local_28,param_4,param_5);
  FPoseSearchQueryTrajectory::FPoseSearchQueryTrajectory(&local_68,&local_58);
  if (param_1 != &local_68) {
    pFVar1 = (param_1->Samples).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Samples).AllocatorInstance.Data = local_68.Samples.AllocatorInstance.Data;
    (param_1->Samples).ArrayNum = local_68.Samples.ArrayNum;
    (param_1->Samples).ArrayMax = local_68.Samples.ArrayMax;
    local_68.Samples.ArrayNum = 0;
    local_68.Samples.ArrayMax = 0;
    local_68.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Samples.AllocatorInstance.Data);
  }
  if (local_58.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Samples.AllocatorInstance.Data);
  }
  return;
}

// InitTrajectorySamples @ 14a92ef80

void __cdecl
UPoseSearchTrajectoryLibrary::InitTrajectorySamples
          (FTransformTrajectory *param_1,TVector<double> *param_2,TQuat<double> *param_3,
          FSampling *param_4,float param_5)

{
  int *piVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  float fVar19;
  
  uVar10 = param_4->NumHistorySamples;
  uVar17 = (ulonglong)(int)uVar10;
  piVar1 = &(param_1->Samples).ArrayNum;
  uVar13 = *piVar1;
  uVar12 = uVar10 + 1 + param_4->NumPredictionSamples;
  if (uVar13 != uVar12) {
    if ((int)uVar13 < (int)uVar12) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,uVar12 - uVar13,(ForAnyElementType *)param_1,piVar1,
                 &(param_1->Samples).ArrayMax);
    }
    else {
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      if ((int)uVar12 < (int)uVar13) {
        uVar13 = uVar13 - uVar12;
        if (((int)(uVar13 | uVar12) < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar13 != 0) {
          pFVar11 = (param_1->Samples).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x40;
          iVar9 = (*piVar1 - uVar13) - uVar12;
          if (iVar9 != 0) {
            memmove(pFVar11,pFVar11 + (longlong)(int)uVar13 * 0x40,(longlong)iVar9 << 6);
          }
          *piVar1 = *piVar1 - uVar13;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,0x10,(ForAnyElementType *)param_1,*piVar1,&(param_1->Samples).ArrayMax);
        }
      }
    }
    uVar13 = 0;
    fVar19 = param_4->SecondsPerHistorySample;
    if (fVar19 <= 0.0) {
      fVar19 = 0.0;
    }
    uVar18 = uVar17;
    if (0 < (int)uVar10) {
      lVar16 = 0;
      do {
        dVar5 = (param_2->field0_0x0)._s_0.X;
        dVar6 = (param_2->field0_0x0)._s_0.Y;
        dVar2 = (param_2->field0_0x0)._s_0.Z;
        uVar15 = ~uVar13 >> 0x1f;
        uVar12 = 0;
        if ((int)uVar13 < *piVar1) {
          uVar12 = uVar15;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_1->Samples).AllocatorInstance.Data;
        pFVar11 = pFVar3 + lVar16 + 0x20;
        *(double *)pFVar11 = dVar5;
        *(double *)(pFVar11 + 8) = dVar6;
        *(double *)(pFVar3 + lVar16 + 0x30) = dVar2;
        dVar2 = param_3->X;
        dVar5 = param_3->Y;
        dVar6 = param_3->Z;
        dVar7 = param_3->W;
        uVar12 = 0;
        if ((int)uVar13 < *piVar1) {
          uVar12 = uVar15;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_1->Samples).AllocatorInstance.Data;
        pFVar11 = pFVar3 + lVar16;
        *(double *)pFVar11 = dVar2;
        *(double *)(pFVar11 + 8) = dVar5;
        pFVar3 = pFVar3 + lVar16 + 0x10;
        *(double *)pFVar3 = dVar6;
        *(double *)(pFVar3 + 8) = dVar7;
        uVar12 = 0;
        if ((int)uVar13 < *piVar1) {
          uVar12 = uVar15;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = uVar13 + ~uVar10;
        uVar13 = uVar13 + 1;
        *(float *)((param_1->Samples).AllocatorInstance.Data + lVar16 + 0x38) =
             (float)iVar9 * fVar19;
        lVar16 = lVar16 + 0x40;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
      uVar18 = (ulonglong)uVar10;
    }
    uVar14 = uVar18 & 0xffffffff;
    iVar9 = *piVar1;
    fVar19 = param_4->SecondsPerPredictionSample;
    if (fVar19 <= 0.0) {
      fVar19 = 0.0;
    }
    if ((int)uVar18 < iVar9) {
      lVar16 = uVar17 << 6;
      do {
        dVar5 = (param_2->field0_0x0)._s_0.X;
        dVar6 = (param_2->field0_0x0)._s_0.Y;
        uVar13 = (uint)uVar14;
        dVar2 = (param_2->field0_0x0)._s_0.Z;
        uVar12 = ~uVar13 >> 0x1f;
        uVar10 = 0;
        if ((int)uVar13 < iVar9) {
          uVar10 = uVar12;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_1->Samples).AllocatorInstance.Data;
        pFVar11 = pFVar3 + lVar16 + 0x20;
        *(double *)pFVar11 = dVar5;
        *(double *)(pFVar11 + 8) = dVar6;
        dVar5 = param_3->X;
        dVar6 = param_3->Y;
        *(double *)(pFVar3 + lVar16 + 0x30) = dVar2;
        dVar2 = param_3->Z;
        dVar7 = param_3->W;
        uVar10 = 0;
        if ((int)uVar13 < *piVar1) {
          uVar10 = uVar12;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_1->Samples).AllocatorInstance.Data;
        pFVar11 = pFVar3 + lVar16;
        *(double *)pFVar11 = dVar5;
        *(double *)(pFVar11 + 8) = dVar6;
        pFVar3 = pFVar3 + lVar16 + 0x10;
        *(double *)pFVar3 = dVar2;
        *(double *)(pFVar3 + 8) = dVar7;
        uVar10 = 0;
        if ((int)uVar13 < *piVar1) {
          uVar10 = uVar12;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        *(float *)((param_1->Samples).AllocatorInstance.Data + lVar16 + 0x38) =
             (float)(int)(uVar13 - (int)uVar18) * fVar19 + param_5;
        lVar16 = lVar16 + 0x40;
        iVar9 = *piVar1;
      } while ((int)(uVar13 + 1) < iVar9);
    }
  }
  return;
}

// PoseSearchGeneratePredictorTrajectory @ 14a935ba0

void __cdecl
UPoseSearchTrajectoryLibrary::PoseSearchGeneratePredictorTrajectory
          (UObject *param_1,FPoseSearchTrajectoryData *param_2,float param_3,
          FPoseSearchQueryTrajectory *param_4,float *param_5,FPoseSearchQueryTrajectory *param_6,
          float param_7,int param_8,float param_9,int param_10)

{
  FScriptContainerElement *pFVar1;
  UClass *pUVar2;
  void *pvVar3;
  FPoseSearchQueryTrajectory local_58;
  FTransformTrajectory local_48;
  UObject *local_38;
  void *local_30;
  FTransformTrajectory local_28 [2];
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UPoseSearchTrajectoryPredictorInterface_NoRegister();
    pvVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar2);
    if (pvVar3 != (void *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      pUVar2 = Z_Construct_UClass_UPoseSearchTrajectoryPredictorInterface_NoRegister();
      pvVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar2);
      FPoseSearchQueryTrajectory::operator_FTransformTrajectory(param_4,local_28);
      local_48.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Samples.ArrayNum = 0;
      local_48.Samples.ArrayMax = 0;
      local_38 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      local_30 = pvVar3;
      PoseSearchGenerateTransformTrajectoryWithPredictor
                ((TScriptInterface<IPoseSearchTrajectoryPredictorInterface> *)&local_38,param_3,
                 local_28,param_5,&local_48,param_7,param_8,param_9,param_10);
      FPoseSearchQueryTrajectory::FPoseSearchQueryTrajectory(&local_58,&local_48);
      if (param_6 != &local_58) {
        pFVar1 = (param_6->Samples).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_6->Samples).AllocatorInstance.Data = local_58.Samples.AllocatorInstance.Data;
        (param_6->Samples).ArrayNum = local_58.Samples.ArrayNum;
        (param_6->Samples).ArrayMax = local_58.Samples.ArrayMax;
        local_58.Samples.ArrayNum = 0;
        local_58.Samples.ArrayMax = 0;
        local_58.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_58.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Samples.AllocatorInstance.Data);
      }
      if (local_48.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Samples.AllocatorInstance.Data);
      }
      if (local_28[0].Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Samples.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// PoseSearchGeneratePredictorTransformTrajectory @ 14a935d50

void __cdecl
UPoseSearchTrajectoryLibrary::PoseSearchGeneratePredictorTransformTrajectory
          (UObject *param_1,FPoseSearchTrajectoryData *param_2,float param_3,
          FTransformTrajectory *param_4,float *param_5,FTransformTrajectory *param_6,float param_7,
          int param_8,float param_9,int param_10)

{
  UClass *pUVar1;
  void *pvVar2;
  UObject *local_28;
  void *local_20;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = Z_Construct_UClass_UPoseSearchTrajectoryPredictorInterface_NoRegister();
    pvVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
    if (pvVar2 != (void *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      local_28 = param_1;
      pUVar1 = Z_Construct_UClass_UPoseSearchTrajectoryPredictorInterface_NoRegister();
      local_20 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
      PoseSearchGenerateTransformTrajectoryWithPredictor
                ((TScriptInterface<IPoseSearchTrajectoryPredictorInterface> *)&local_28,param_3,
                 param_4,param_5,param_6,param_7,param_8,param_9,param_10);
    }
  }
  return;
}

// PoseSearchGenerateTrajectory @ 14a935e30

void __cdecl
UPoseSearchTrajectoryLibrary::PoseSearchGenerateTrajectory
          (UObject *param_1,FPoseSearchTrajectoryData *param_2,float param_3,
          FPoseSearchQueryTrajectory *param_4,float *param_5,FPoseSearchQueryTrajectory *param_6,
          float param_7,int param_8,float param_9,int param_10)

{
  FScriptContainerElement *pFVar1;
  FPoseSearchQueryTrajectory local_48;
  FTransformTrajectory local_38;
  FTransformTrajectory local_28 [2];
  
  FPoseSearchQueryTrajectory::operator_FTransformTrajectory(param_4,local_28);
  local_38.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Samples.ArrayNum = 0;
  local_38.Samples.ArrayMax = 0;
  PoseSearchGenerateTransformTrajectory
            (param_1,param_2,param_3,local_28,param_5,&local_38,param_7,param_8,param_9,param_10);
  FPoseSearchQueryTrajectory::FPoseSearchQueryTrajectory(&local_48,&local_38);
  if (param_6 != &local_48) {
    pFVar1 = (param_6->Samples).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_6->Samples).AllocatorInstance.Data = local_48.Samples.AllocatorInstance.Data;
    (param_6->Samples).ArrayNum = local_48.Samples.ArrayNum;
    (param_6->Samples).ArrayMax = local_48.Samples.ArrayMax;
    local_48.Samples.ArrayNum = 0;
    local_48.Samples.ArrayMax = 0;
    local_48.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Samples.AllocatorInstance.Data);
  }
  if (local_38.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Samples.AllocatorInstance.Data);
  }
  if (local_28[0].Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Samples.AllocatorInstance.Data);
  }
  return;
}

// PoseSearchGenerateTrajectoryWithPredictor @ 14a935f70

void __cdecl
UPoseSearchTrajectoryLibrary::PoseSearchGenerateTrajectoryWithPredictor
          (TScriptInterface<IPoseSearchTrajectoryPredictorInterface> *param_1,float param_2,
          FPoseSearchQueryTrajectory *param_3,float *param_4,FPoseSearchQueryTrajectory *param_5,
          float param_6,int param_7,float param_8,int param_9)

{
  FScriptContainerElement *pFVar1;
  FPoseSearchQueryTrajectory local_58;
  FTransformTrajectory local_48;
  UObject *local_38 [2];
  FTransformTrajectory local_28 [2];
  
  FPoseSearchQueryTrajectory::operator_FTransformTrajectory(param_3,local_28);
  local_38[0] = *(UObject **)param_1;
  local_48.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Samples.ArrayNum = 0;
  local_48.Samples.ArrayMax = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_38[0]);
  }
  local_38[1] = *(UObject **)&param_1->field_0x8;
  PoseSearchGenerateTransformTrajectoryWithPredictor
            ((TScriptInterface<IPoseSearchTrajectoryPredictorInterface> *)local_38,param_2,local_28,
             param_4,&local_48,param_6,param_7,param_8,param_9);
  FPoseSearchQueryTrajectory::FPoseSearchQueryTrajectory(&local_58,&local_48);
  if (param_5 != &local_58) {
    pFVar1 = (param_5->Samples).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_5->Samples).AllocatorInstance.Data = local_58.Samples.AllocatorInstance.Data;
    (param_5->Samples).ArrayNum = local_58.Samples.ArrayNum;
    (param_5->Samples).ArrayMax = local_58.Samples.ArrayMax;
    local_58.Samples.ArrayNum = 0;
    local_58.Samples.ArrayMax = 0;
    local_58.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_58.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Samples.AllocatorInstance.Data);
  }
  if (local_48.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Samples.AllocatorInstance.Data);
  }
  if (local_28[0].Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Samples.AllocatorInstance.Data);
  }
  return;
}

// PoseSearchGenerateTransformTrajectory @ 14a9360d0

void __cdecl
UPoseSearchTrajectoryLibrary::PoseSearchGenerateTransformTrajectory
          (UObject *param_1,FPoseSearchTrajectoryData *param_2,float param_3,
          FTransformTrajectory *param_4,float *param_5,FTransformTrajectory *param_6,float param_7,
          int param_8,float param_9,int param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FSampling local_138;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_108;
  double dStack_f0;
  FDerived local_e8;
  
  local_138.SecondsPerHistorySample = param_7;
  local_138.NumHistorySamples = param_8;
  local_138.SecondsPerPredictionSample = param_9;
  local_e8.ControllerYawRate = 0.0;
  local_e8.MaxSpeed = 0.0;
  local_e8.BrakingDeceleration = 0.0;
  local_e8.BrakingSubStepTime = 0.0;
  local_e8.Velocity.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_e8.Velocity.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_138.NumPredictionSamples = param_10;
  local_e8.Acceleration.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_e8.Acceleration.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_e8.Position.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_e8.Position.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_e8.Friction = 0.0;
  local_e8.Velocity.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_e8.Acceleration.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_e8.Position.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_e8.Facing.X = UE::Math::TQuat<double>::Identity.X;
  local_e8.Facing.Y = UE::Math::TQuat<double>::Identity.Y;
  local_e8.MeshCompRelativeRotation.X = UE::Math::TQuat<double>::Identity.X;
  local_e8.MeshCompRelativeRotation.Y = UE::Math::TQuat<double>::Identity.Y;
  local_e8.Facing.Z = UE::Math::TQuat<double>::Identity.Z;
  local_e8.Facing.W = UE::Math::TQuat<double>::Identity.W;
  local_e8.MeshCompRelativeRotation.Z = UE::Math::TQuat<double>::Identity.Z;
  local_e8.MeshCompRelativeRotation.W = UE::Math::TQuat<double>::Identity.W;
  local_e8.bOrientRotationToMovement = false;
  local_e8.bStepGroundPrediction = true;
  param_8 = (int)*param_5;
  FPoseSearchTrajectoryData::UpdateData(param_2,param_3,param_1,&local_e8,(FState *)&param_8);
  uVar3 = local_e8.Position.field0_0x0._s_0.Z;
  uVar2 = local_e8.Position.field0_0x0._s_0.Y;
  uVar1 = local_e8.Position.field0_0x0._s_0.X;
  local_128._s_0.X = local_e8.Position.field0_0x0._s_0.X;
  local_128._s_0.Y = local_e8.Position.field0_0x0._s_0.Y;
  local_108._s_0.X = local_e8.Facing.X;
  local_108._s_0.Y = local_e8.Facing.Y;
  local_108._s_0.Z = local_e8.Facing.Z;
  dStack_f0 = local_e8.Facing.W;
  local_128._s_0.Z = local_e8.Position.field0_0x0._s_0.Z;
  InitTrajectorySamples
            (param_4,(TVector<double> *)&local_128._s_0,(TQuat<double> *)&local_108._s_0,&local_138,
             param_3);
  local_128._s_0.X = local_e8.Velocity.field0_0x0._s_0.X;
  local_128._s_0.Y = local_e8.Velocity.field0_0x0._s_0.Y;
  local_128._s_0.Z = local_e8.Velocity.field0_0x0._s_0.Z;
  local_108._s_0.X = (double)uVar1;
  local_108._s_0.Y = (double)uVar2;
  local_108._s_0.Z = (double)uVar3;
  UpdateHistory_TransformHistory
            (param_4,(TVector<double> *)&local_108._s_0,(TVector<double> *)&local_128._s_0,
             &local_138,param_3);
  UpdatePrediction_SimulateCharacterMovement(param_4,param_2,&local_e8,&local_138,param_3);
  *param_5 = (float)param_8;
  FTransformTrajectory::operator=(param_6,param_4);
  return;
}

// PoseSearchGenerateTransformTrajectoryWithPredictor @ 14a9362b0

void __cdecl
UPoseSearchTrajectoryLibrary::PoseSearchGenerateTransformTrajectoryWithPredictor
          (TScriptInterface<IPoseSearchTrajectoryPredictorInterface> *param_1,float param_2,
          FTransformTrajectory *param_3,float *param_4,FTransformTrajectory *param_5,float param_6,
          int param_7,float param_8,int param_9)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  FSampling local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_98;
  TQuat<double> local_78 [2];
  
  local_128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_148.SecondsPerHistorySample = param_6;
  local_108 = UE::Math::TQuat<double>::Identity.Z._0_4_;
  uStack_104 = UE::Math::TQuat<double>::Identity.Z._4_4_;
  uStack_100 = UE::Math::TQuat<double>::Identity.W._0_4_;
  uStack_fc = UE::Math::TQuat<double>::Identity.W._4_4_;
  local_148.SecondsPerPredictionSample = param_8;
  local_148.NumHistorySamples = param_7;
  local_148.NumPredictionSamples = param_9;
  local_138 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uStack_134 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uStack_130 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uStack_12c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  local_f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uStack_f4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uStack_f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uStack_ec = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  local_118 = UE::Math::TQuat<double>::Identity.X._0_4_;
  uStack_114 = UE::Math::TQuat<double>::Identity.X._4_4_;
  uStack_110 = UE::Math::TQuat<double>::Identity.Y._0_4_;
  uStack_10c = UE::Math::TQuat<double>::Identity.Y._4_4_;
  if ((*(longlong *)param_1 != 0) &&
     (plVar2 = *(longlong **)&param_1->field_0x8, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_138,&local_118,&local_f8);
  }
  local_d8._0_4_ = local_138;
  local_d8._4_4_ = uStack_134;
  local_d8._8_4_ = uStack_130;
  local_d8._12_4_ = uStack_12c;
  local_d8._s_0.Z = local_128;
  local_78[0].X._0_4_ = local_118;
  local_78[0].X._4_4_ = uStack_114;
  local_78[0].Y._0_4_ = uStack_110;
  local_78[0].Y._4_4_ = uStack_10c;
  local_78[0].Z._0_4_ = local_108;
  local_78[0].Z._4_4_ = uStack_104;
  local_78[0].W._0_4_ = uStack_100;
  local_78[0].W._4_4_ = uStack_fc;
  InitTrajectorySamples(param_3,(TVector<double> *)&local_d8._s_0,local_78,&local_148,param_2);
  local_b8._s_0.X = (double)CONCAT44(uStack_f4,local_f8);
  local_b8._s_0.Y = (double)CONCAT44(uStack_ec,uStack_f0);
  local_98._s_0.X = (double)CONCAT44(uStack_134,local_138);
  local_98._s_0.Y = (double)CONCAT44(uStack_12c,uStack_130);
  local_b8._s_0.Z = local_e8;
  local_98._s_0.Z = local_128;
  UpdateHistory_TransformHistory
            (param_3,(TVector<double> *)&local_98._s_0,(TVector<double> *)&local_b8._s_0,&local_148,
             param_2);
  uVar13 = (uint)~param_7 >> 0x1f;
  uVar11 = 0;
  if (param_7 < (param_3->Samples).ArrayNum) {
    uVar11 = uVar13;
  }
  if (uVar11 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  dVar9 = local_128;
  lVar12 = (longlong)param_7 * 0x40;
  *(float *)((param_3->Samples).AllocatorInstance.Data + lVar12 + 0x38) = param_2;
  uVar5 = CONCAT44(uStack_134,local_138);
  uVar6 = CONCAT44(uStack_12c,uStack_130);
  uVar11 = 0;
  if (param_7 < (param_3->Samples).ArrayNum) {
    uVar11 = uVar13;
  }
  if (uVar11 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (param_3->Samples).AllocatorInstance.Data;
  pFVar1 = pFVar3 + lVar12 + 0x20;
  *(undefined8 *)pFVar1 = uVar5;
  *(undefined8 *)(pFVar1 + 8) = uVar6;
  *(double *)(pFVar3 + lVar12 + 0x30) = dVar9;
  uVar5 = CONCAT44(uStack_114,local_118);
  uVar6 = CONCAT44(uStack_10c,uStack_110);
  uVar7 = CONCAT44(uStack_104,local_108);
  uVar8 = CONCAT44(uStack_fc,uStack_100);
  uVar11 = 0;
  if (param_7 < (param_3->Samples).ArrayNum) {
    uVar11 = uVar13;
  }
  if (uVar11 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (param_3->Samples).AllocatorInstance.Data;
  pFVar1 = pFVar3 + lVar12;
  *(undefined8 *)pFVar1 = uVar5;
  *(undefined8 *)(pFVar1 + 8) = uVar6;
  pFVar3 = pFVar3 + lVar12 + 0x10;
  *(undefined8 *)pFVar3 = uVar7;
  *(undefined8 *)(pFVar3 + 8) = uVar8;
  if ((*(longlong *)param_1 != 0) &&
     (plVar2 = *(longlong **)&param_1->field_0x8, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_3,param_9,param_8,param_7);
  }
  FTransformTrajectory::operator=(param_5,param_3);
  return;
}

// RemapVectorMagnitudeWithCurve @ 14a9395d0

TVector<double> * __cdecl
UPoseSearchTrajectoryLibrary::RemapVectorMagnitudeWithCurve
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,bool param_2,
          FRuntimeFloatCurve *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  FRichCurve *this;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  float fVar8;
  
  if (param_2) {
    dVar1 = (param_1->field0_0x0)._s_0.X;
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    dVar7 = (param_1->field0_0x0)._s_0.Z;
    auVar5._0_8_ = dVar1 * dVar1;
    auVar5._8_8_ = 0;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar2 * dVar2 + auVar5._0_8_ + dVar7 * dVar7;
    auVar6 = sqrtpd(auVar5,auVar6);
    fVar8 = (float)auVar6._0_8_;
    if (__real_38d1b717 < fVar8) {
      this = FRuntimeFloatCurve::GetRichCurveConst(param_3);
      fVar4 = FRichCurve::Eval(this,fVar8,0.0);
      dVar7 = (double)(fVar4 / fVar8);
      dVar2 = (param_1->field0_0x0)._s_0.X;
      dVar1 = dVar7 * (param_1->field0_0x0)._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar7 * (param_1->field0_0x0)._s_0.Z;
      auVar3._8_4_ = SUB84(dVar1,0);
      auVar3._0_8_ = dVar7 * dVar2;
      auVar3._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar3;
      return __return_storage_ptr__;
    }
  }
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPoseSearchTrajectoryLibrary @ 14a93ee70

void __cdecl UPoseSearchTrajectoryLibrary::StaticRegisterNativesUPoseSearchTrajectoryLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UPoseSearchTrajectoryLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateHistory_TransformHistory @ 14a9430d0

void __cdecl
UPoseSearchTrajectoryLibrary::UpdateHistory_TransformHistory
          (FPoseSearchQueryTrajectory *param_1,FPoseSearchTrajectoryData *param_2,
          TVector<double> *param_3,TVector<double> *param_4,FSampling *param_5,float param_6)

{
  FScriptContainerElement *pFVar1;
  FPoseSearchQueryTrajectory local_68;
  FTransformTrajectory local_58;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  FPoseSearchQueryTrajectory::operator_FTransformTrajectory(param_1,&local_58);
  local_48._s_0.X = (param_4->field0_0x0)._s_0.X;
  local_48._s_0.Y = (param_4->field0_0x0)._s_0.Y;
  local_48._s_0.Z = (param_4->field0_0x0)._s_0.Z;
  local_28._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  UpdateHistory_TransformHistory
            (&local_58,(TVector<double> *)&local_28._s_0,(TVector<double> *)&local_48._s_0,param_5,
             param_6);
  FPoseSearchQueryTrajectory::FPoseSearchQueryTrajectory(&local_68,&local_58);
  if (param_1 != &local_68) {
    pFVar1 = (param_1->Samples).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Samples).AllocatorInstance.Data = local_68.Samples.AllocatorInstance.Data;
    (param_1->Samples).ArrayNum = local_68.Samples.ArrayNum;
    (param_1->Samples).ArrayMax = local_68.Samples.ArrayMax;
    local_68.Samples.ArrayNum = 0;
    local_68.Samples.ArrayMax = 0;
    local_68.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Samples.AllocatorInstance.Data);
  }
  if (local_58.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Samples.AllocatorInstance.Data);
  }
  return;
}

// UpdateHistory_TransformHistory @ 14a9431d0

void __cdecl
UPoseSearchTrajectoryLibrary::UpdateHistory_TransformHistory
          (FPoseSearchQueryTrajectory *param_1,TVector<double> *param_2,TVector<double> *param_3,
          FSampling *param_4,float param_5)

{
  FScriptContainerElement *pFVar1;
  FPoseSearchQueryTrajectory local_68;
  FTransformTrajectory local_58;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  FPoseSearchQueryTrajectory::operator_FTransformTrajectory(param_1,&local_58);
  local_48._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_48._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_48._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  local_28._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  UpdateHistory_TransformHistory
            (&local_58,(TVector<double> *)&local_28._s_0,(TVector<double> *)&local_48._s_0,param_4,
             param_5);
  FPoseSearchQueryTrajectory::FPoseSearchQueryTrajectory(&local_68,&local_58);
  if (param_1 != &local_68) {
    pFVar1 = (param_1->Samples).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Samples).AllocatorInstance.Data = local_68.Samples.AllocatorInstance.Data;
    (param_1->Samples).ArrayNum = local_68.Samples.ArrayNum;
    (param_1->Samples).ArrayMax = local_68.Samples.ArrayMax;
    local_68.Samples.ArrayNum = 0;
    local_68.Samples.ArrayMax = 0;
    local_68.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Samples.AllocatorInstance.Data);
  }
  if (local_58.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Samples.AllocatorInstance.Data);
  }
  return;
}

// UpdateHistory_TransformHistory @ 14a9432e0

void __cdecl
UPoseSearchTrajectoryLibrary::UpdateHistory_TransformHistory
          (FTransformTrajectory *param_1,TVector<double> *param_2,TVector<double> *param_3,
          FSampling *param_4,float param_5)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  int *piVar25;
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  int local_c8;
  
  uVar7 = param_4->NumHistorySamples;
  if (0 < (int)uVar7) {
    fVar1 = param_4->SecondsPerHistorySample;
    if (((param_1->Samples).ArrayNum <= (int)uVar7) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumHistorySamples < Trajectory.Samples.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchTrajectoryLibrary.cpp"
                            ,0x13a,L""), bVar17)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar22 = 0;
    dVar12 = (double)param_5;
    uVar20 = ~uVar7 >> 0x1f;
    uVar18 = 0;
    if ((int)uVar7 < (param_1->Samples).ArrayNum) {
      uVar18 = uVar20;
    }
    dVar2 = (param_3->field0_0x0)._s_0.X;
    dVar3 = (param_3->field0_0x0)._s_0.Y;
    dVar4 = (param_3->field0_0x0)._s_0.Z;
    if ((uVar18 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar8 = (param_1->Samples).AllocatorInstance.Data;
    lVar19 = (longlong)(int)uVar7 * 0x40;
    dVar13 = ((param_2->field0_0x0)._s_0.X - *(double *)(pFVar8 + lVar19 + 0x20)) - dVar12 * dVar2;
    dVar2 = ((param_2->field0_0x0)._s_0.Y - *(double *)(pFVar8 + lVar19 + 0x28)) - dVar12 * dVar3;
    dVar12 = ((param_2->field0_0x0)._s_0.Z - *(double *)(pFVar8 + lVar19 + 0x30)) - dVar12 * dVar4;
    uVar28 = 0;
    uVar18 = 0;
    if (0.0 < fVar1) {
      uVar21 = uVar7 - 1;
      uVar23 = uVar18;
      if ((int)uVar21 < (param_1->Samples).ArrayNum) {
        uVar23 = ~uVar21 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar26 = uVar22;
      uVar29 = uVar22;
      if ((float)(*(uint *)((param_1->Samples).AllocatorInstance.Data +
                           (longlong)(int)uVar21 * 0x40 + 0x38) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff) < fVar1) {
        while( true ) {
          uVar23 = (uint)uVar26;
          uVar20 = uVar18;
          if ((int)uVar23 < (param_1->Samples).ArrayNum) {
            uVar20 = ~uVar23 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) break;
          pFVar8 = (param_1->Samples).AllocatorInstance.Data;
          *(float *)(pFVar8 + uVar22 + 0x38) = *(float *)(pFVar8 + uVar22 + 0x38) - param_5;
          uVar20 = uVar28;
          if ((int)uVar23 < (param_1->Samples).ArrayNum) {
            uVar20 = ~uVar23 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar8 = (param_1->Samples).AllocatorInstance.Data;
          uVar29 = uVar29 + 1;
          *(double *)(pFVar8 + uVar22 + 0x20) = dVar13 + *(double *)(pFVar8 + uVar22 + 0x20);
          dVar3 = *(double *)(pFVar8 + uVar22 + 0x28 + 8) + dVar12;
          auVar11._8_4_ = SUB84(dVar3,0);
          auVar11._0_8_ = *(double *)(pFVar8 + uVar22 + 0x28) + dVar2;
          auVar11._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
          *(undefined1 (*) [16])(pFVar8 + uVar22 + 0x28) = auVar11;
          uVar22 = uVar22 + 0x40;
          uVar26 = (ulonglong)(uVar23 + 1);
          if ((longlong)(int)uVar7 <= (longlong)uVar29) {
            return;
          }
        }
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    if (0 < (int)(uVar7 - 1)) {
      local_c8 = 1;
      uVar26 = uVar22;
      do {
        uVar23 = (uint)uVar22;
        uVar24 = ~(uVar23 + 1) >> 0x1f;
        uVar21 = uVar28;
        if (local_c8 < (param_1->Samples).ArrayNum) {
          uVar21 = uVar24;
        }
        if ((uVar21 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar27 = ~uVar23 >> 0x1f;
        fVar1 = *(float *)((param_1->Samples).AllocatorInstance.Data + uVar26 + 0x78);
        uVar21 = uVar18;
        if ((int)uVar23 < (param_1->Samples).ArrayNum) {
          uVar21 = uVar27;
        }
        if ((uVar21 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        *(float *)((param_1->Samples).AllocatorInstance.Data + uVar26 + 0x38) = fVar1 - param_5;
        uVar21 = uVar18;
        if ((int)(uVar23 + 1) < (param_1->Samples).ArrayNum) {
          uVar21 = uVar24;
        }
        if ((uVar21 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar8 = (param_1->Samples).AllocatorInstance.Data;
        dVar3 = *(double *)(pFVar8 + uVar26 + 0x60);
        dVar4 = *(double *)(pFVar8 + uVar26 + 0x68);
        dVar5 = *(double *)(pFVar8 + uVar26 + 0x70);
        uVar21 = uVar18;
        if ((int)uVar23 < (param_1->Samples).ArrayNum) {
          uVar21 = uVar27;
        }
        if ((uVar21 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar8 = (param_1->Samples).AllocatorInstance.Data;
        *(double *)(pFVar8 + uVar26 + 0x20) = dVar13 + dVar3;
        *(double *)(pFVar8 + uVar26 + 0x28) = dVar2 + dVar4;
        *(double *)(pFVar8 + uVar26 + 0x30) = dVar12 + dVar5;
        uVar21 = uVar18;
        if ((int)(uVar23 + 1) < (param_1->Samples).ArrayNum) {
          uVar21 = uVar24;
        }
        if ((uVar21 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar9 = (param_1->Samples).AllocatorInstance.Data;
        pFVar8 = pFVar9 + uVar26 + 0x40;
        uVar6 = *(undefined8 *)pFVar8;
        uVar14 = *(undefined8 *)(pFVar8 + 8);
        pFVar9 = pFVar9 + uVar26 + 0x50;
        uVar15 = *(undefined8 *)pFVar9;
        uVar16 = *(undefined8 *)(pFVar9 + 8);
        uVar21 = uVar28;
        if ((int)uVar23 < (param_1->Samples).ArrayNum) {
          uVar21 = uVar27;
        }
        if ((uVar21 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar9 = (param_1->Samples).AllocatorInstance.Data;
        uVar22 = (ulonglong)(uVar23 + 1);
        pFVar8 = pFVar9 + uVar26;
        *(undefined8 *)pFVar8 = uVar6;
        *(undefined8 *)(pFVar8 + 8) = uVar14;
        pFVar9 = pFVar9 + uVar26 + 0x10;
        *(undefined8 *)pFVar9 = uVar15;
        *(undefined8 *)(pFVar9 + 8) = uVar16;
        uVar26 = uVar26 + 0x40;
        local_c8 = local_c8 + 1;
      } while ((int)(uVar23 + 1) < (int)(uVar7 - 1));
    }
    piVar25 = &(param_1->Samples).ArrayNum;
    uVar21 = uVar7 - 1;
    uVar24 = ~uVar21 >> 0x1f;
    uVar23 = uVar28;
    if ((int)uVar21 < (param_1->Samples).ArrayNum) {
      uVar23 = uVar24;
    }
    if ((uVar23 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    lVar19 = (longlong)(int)uVar21 * 0x40;
    *(undefined4 *)((param_1->Samples).AllocatorInstance.Data + lVar19 + 0x38) = 0;
    uVar23 = uVar18;
    if ((int)uVar7 < (param_1->Samples).ArrayNum) {
      uVar23 = uVar20;
    }
    if ((uVar23 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar9 = (param_1->Samples).AllocatorInstance.Data;
    pFVar8 = pFVar9 + (longlong)(int)uVar7 * 0x40 + 0x20;
    uVar14 = *(undefined8 *)pFVar8;
    uVar15 = *(undefined8 *)(pFVar8 + 8);
    uVar6 = *(undefined8 *)(pFVar9 + (longlong)(int)uVar7 * 0x40 + 0x30);
    if ((int)uVar21 < *piVar25) {
      uVar18 = uVar24;
    }
    if ((uVar18 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar9 = (param_1->Samples).AllocatorInstance.Data;
    pFVar8 = pFVar9 + lVar19 + 0x20;
    *(undefined8 *)pFVar8 = uVar14;
    *(undefined8 *)(pFVar8 + 8) = uVar15;
    *(undefined8 *)(pFVar9 + lVar19 + 0x30) = uVar6;
    uVar18 = uVar28;
    if ((int)uVar7 < *piVar25) {
      uVar18 = uVar20;
    }
    if ((uVar18 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar9 = (param_1->Samples).AllocatorInstance.Data;
    pFVar8 = pFVar9 + (longlong)(int)uVar7 * 0x40;
    uVar6 = *(undefined8 *)pFVar8;
    uVar14 = *(undefined8 *)(pFVar8 + 8);
    pFVar9 = pFVar9 + (longlong)(int)uVar7 * 0x40 + 0x10;
    uVar15 = *(undefined8 *)pFVar9;
    uVar16 = *(undefined8 *)(pFVar9 + 8);
    if ((int)uVar21 < *piVar25) {
      uVar28 = uVar24;
    }
    if ((uVar28 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar9 = (param_1->Samples).AllocatorInstance.Data;
    pFVar8 = pFVar9 + (longlong)(int)uVar21 * 0x40;
    *(undefined8 *)pFVar8 = uVar6;
    *(undefined8 *)(pFVar8 + 8) = uVar14;
    pFVar9 = pFVar9 + (longlong)(int)uVar21 * 0x40 + 0x10;
    *(undefined8 *)pFVar9 = uVar15;
    *(undefined8 *)(pFVar9 + 8) = uVar16;
  }
  return;
}

// UpdateHistory_TransformHistory @ 14a943a80

void __cdecl
UPoseSearchTrajectoryLibrary::UpdateHistory_TransformHistory
          (FTransformTrajectory *param_1,TVector<double> *param_2,TVector<double> *param_3,
          FSampling *param_4,float param_5,float param_6)

{
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  local_48._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_48._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_48._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  local_28._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  UpdateHistory_TransformHistory
            (param_1,(TVector<double> *)&local_28._s_0,(TVector<double> *)&local_48._s_0,param_4,
             param_5);
  return;
}

// UpdateHistory_WorldSpace @ 14a943ae0

void __cdecl
UPoseSearchTrajectoryLibrary::UpdateHistory_WorldSpace
          (FTransformTrajectory *param_1,FSampling *param_2,float param_3)

{
  float fVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  int local_res10;
  
  uVar10 = param_2->NumHistorySamples;
  lVar16 = (longlong)(int)uVar10;
  if (0 < (int)uVar10) {
    piVar20 = &(param_1->Samples).ArrayNum;
    fVar1 = param_2->SecondsPerHistorySample;
    if ((*piVar20 <= (int)uVar10) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumHistorySamples < Trajectory.Samples.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchTrajectoryLibrary.cpp"
                           ,0x169,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar13 = 0;
    uVar14 = 0;
    if (0.0 < fVar1) {
      uVar11 = uVar10 - 1;
      uVar12 = uVar14;
      if ((int)uVar11 < *piVar20) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar15 = uVar13;
      if ((float)(*(uint *)((param_1->Samples).AllocatorInstance.Data +
                           (longlong)(int)uVar11 * 0x40 + 0x38) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff) < fVar1) {
        while( true ) {
          uVar12 = (uint)uVar13;
          uVar10 = uVar14;
          if ((int)uVar12 < *piVar20) {
            uVar10 = ~uVar12 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) break;
          pFVar3 = (param_1->Samples).AllocatorInstance.Data;
          uVar13 = (ulonglong)(uVar12 + 1);
          *(float *)(pFVar3 + uVar15 + 0x38) = *(float *)(pFVar3 + uVar15 + 0x38) - param_3;
          lVar16 = lVar16 + -1;
          uVar15 = uVar15 + 0x40;
          if (lVar16 == 0) {
            return;
          }
        }
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    piVar20 = &(param_1->Samples).ArrayNum;
    if (0 < (int)(uVar10 - 1)) {
      local_res10 = 1;
      uVar15 = uVar13;
      do {
        uVar12 = (uint)uVar13;
        uVar19 = ~(uVar12 + 1) >> 0x1f;
        uVar11 = uVar14;
        if (local_res10 < *piVar20) {
          uVar11 = uVar19;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar18 = ~uVar12 >> 0x1f;
        fVar1 = *(float *)((param_1->Samples).AllocatorInstance.Data + uVar15 + 0x78);
        uVar11 = uVar14;
        if ((int)uVar12 < *piVar20) {
          uVar11 = uVar18;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(float *)((param_1->Samples).AllocatorInstance.Data + uVar15 + 0x38) = fVar1 - param_3;
        uVar11 = uVar14;
        if ((int)(uVar12 + 1) < *piVar20) {
          uVar11 = uVar19;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (param_1->Samples).AllocatorInstance.Data;
        pFVar3 = pFVar4 + uVar15 + 0x60;
        uVar6 = *(undefined8 *)pFVar3;
        uVar7 = *(undefined8 *)(pFVar3 + 8);
        uVar2 = *(undefined8 *)(pFVar4 + uVar15 + 0x70);
        uVar11 = uVar14;
        if ((int)uVar12 < *piVar20) {
          uVar11 = uVar18;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (param_1->Samples).AllocatorInstance.Data;
        pFVar3 = pFVar4 + uVar15 + 0x20;
        *(undefined8 *)pFVar3 = uVar6;
        *(undefined8 *)(pFVar3 + 8) = uVar7;
        *(undefined8 *)(pFVar4 + uVar15 + 0x30) = uVar2;
        uVar11 = uVar14;
        if ((int)(uVar12 + 1) < *piVar20) {
          uVar11 = uVar19;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (param_1->Samples).AllocatorInstance.Data;
        pFVar3 = pFVar4 + uVar15 + 0x40;
        uVar2 = *(undefined8 *)pFVar3;
        uVar6 = *(undefined8 *)(pFVar3 + 8);
        pFVar4 = pFVar4 + uVar15 + 0x50;
        uVar7 = *(undefined8 *)pFVar4;
        uVar8 = *(undefined8 *)(pFVar4 + 8);
        uVar11 = uVar14;
        if ((int)uVar12 < *piVar20) {
          uVar11 = uVar18;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (param_1->Samples).AllocatorInstance.Data;
        uVar13 = (ulonglong)(uVar12 + 1);
        pFVar3 = pFVar4 + uVar15;
        *(undefined8 *)pFVar3 = uVar2;
        *(undefined8 *)(pFVar3 + 8) = uVar6;
        pFVar4 = pFVar4 + uVar15 + 0x10;
        *(undefined8 *)pFVar4 = uVar7;
        *(undefined8 *)(pFVar4 + 8) = uVar8;
        uVar15 = uVar15 + 0x40;
        local_res10 = local_res10 + 1;
      } while ((int)(uVar12 + 1) < (int)(uVar10 - 1));
    }
    piVar20 = &(param_1->Samples).ArrayNum;
    uVar11 = uVar10 - 1;
    uVar19 = ~uVar11 >> 0x1f;
    uVar12 = uVar14;
    if ((int)uVar11 < *piVar20) {
      uVar12 = uVar19;
    }
    if ((uVar12 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar16 = (longlong)(int)uVar11 * 0x40;
    *(undefined4 *)((param_1->Samples).AllocatorInstance.Data + lVar16 + 0x38) = 0;
    uVar12 = uVar14;
    if ((int)uVar10 < *piVar20) {
      uVar12 = ~uVar10 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (param_1->Samples).AllocatorInstance.Data;
    lVar17 = (longlong)(int)uVar10 * 0x40;
    pFVar3 = pFVar4 + lVar17 + 0x20;
    uVar6 = *(undefined8 *)pFVar3;
    uVar7 = *(undefined8 *)(pFVar3 + 8);
    uVar2 = *(undefined8 *)(pFVar4 + lVar17 + 0x30);
    uVar12 = uVar14;
    if ((int)uVar11 < *piVar20) {
      uVar12 = uVar19;
    }
    if ((uVar12 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (param_1->Samples).AllocatorInstance.Data;
    pFVar3 = pFVar4 + lVar16 + 0x20;
    *(undefined8 *)pFVar3 = uVar6;
    *(undefined8 *)(pFVar3 + 8) = uVar7;
    *(undefined8 *)(pFVar4 + lVar16 + 0x30) = uVar2;
    uVar12 = uVar14;
    if ((int)uVar10 < *piVar20) {
      uVar12 = ~uVar10 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (param_1->Samples).AllocatorInstance.Data;
    pFVar3 = pFVar4 + lVar17;
    uVar2 = *(undefined8 *)pFVar3;
    uVar6 = *(undefined8 *)(pFVar3 + 8);
    pFVar4 = pFVar4 + lVar17 + 0x10;
    uVar7 = *(undefined8 *)pFVar4;
    uVar8 = *(undefined8 *)(pFVar4 + 8);
    if ((int)uVar11 < *piVar20) {
      uVar14 = uVar19;
    }
    if ((uVar14 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (param_1->Samples).AllocatorInstance.Data;
    pFVar3 = pFVar4 + (longlong)(int)uVar11 * 0x40;
    *(undefined8 *)pFVar3 = uVar2;
    *(undefined8 *)(pFVar3 + 8) = uVar6;
    pFVar4 = pFVar4 + (longlong)(int)uVar11 * 0x40 + 0x10;
    *(undefined8 *)pFVar4 = uVar7;
    *(undefined8 *)(pFVar4 + 8) = uVar8;
  }
  return;
}

// UpdatePrediction_SimulateCharacterMovement @ 14a9455e0

void __cdecl
UPoseSearchTrajectoryLibrary::UpdatePrediction_SimulateCharacterMovement
          (FPoseSearchQueryTrajectory *param_1,FPoseSearchTrajectoryData *param_2,FDerived *param_3,
          FSampling *param_4,float param_5)

{
  FScriptContainerElement *pFVar1;
  FPoseSearchQueryTrajectory local_28;
  FTransformTrajectory local_18;
  
  FPoseSearchQueryTrajectory::operator_FTransformTrajectory(param_1,&local_18);
  UpdatePrediction_SimulateCharacterMovement(&local_18,param_2,param_3,param_4,param_5);
  FPoseSearchQueryTrajectory::FPoseSearchQueryTrajectory(&local_28,&local_18);
  if (param_1 != &local_28) {
    pFVar1 = (param_1->Samples).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Samples).AllocatorInstance.Data = local_28.Samples.AllocatorInstance.Data;
    (param_1->Samples).ArrayNum = local_28.Samples.ArrayNum;
    (param_1->Samples).ArrayMax = local_28.Samples.ArrayMax;
    local_28.Samples.ArrayNum = 0;
    local_28.Samples.ArrayMax = 0;
    local_28.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Samples.AllocatorInstance.Data);
  }
  if (local_18.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Samples.AllocatorInstance.Data);
  }
  return;
}

// UpdatePrediction_SimulateCharacterMovement @ 14a9456c0

void __cdecl
UPoseSearchTrajectoryLibrary::UpdatePrediction_SimulateCharacterMovement
          (FTransformTrajectory *param_1,FPoseSearchTrajectoryData *param_2,FDerived *param_3,
          FSampling *param_4,float param_5)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  undefined8 uVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  TVector<double> *pTVar21;
  FRichCurve *this;
  TQuat<double> *pTVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong uVar27;
  float fVar28;
  double dVar29;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar30;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar37;
  undefined4 uVar38;
  undefined8 uVar39;
  double dVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  float fVar45;
  uint uVar46;
  uint uVar47;
  double local_res10;
  double local_278;
  double dStack_270;
  undefined8 local_268;
  TVector<double>_u_0 local_260;
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  TVector<double>_u_0 local_228;
  TQuat<double> local_208;
  TVector<double>_u_0 local_1e8;
  double local_1c0;
  double local_1b8;
  TVector<double>_u_0 local_1b0;
  TVector<double>_u_0 local_198;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  TVector<double> local_158;
  TVector<double> local_140;
  TQuat<double> local_128;
  TQuat<double> local_108 [6];
  
  auVar35 = *(undefined1 (*) [16])&(param_3->Position).field0_0x0;
  dVar9 = auVar35._8_8_;
  local_1c0 = *(double *)((longlong)&(param_3->Position).field0_0x0 + 0x10);
  uVar41 = SUB84(local_1c0,0);
  uVar42 = (undefined4)((ulonglong)local_1c0 >> 0x20);
  RemapVectorMagnitudeWithCurve
            ((TVector<double> *)&local_278,&param_3->Velocity,param_2->bUseSpeedRemappingCurve,
             &param_2->SpeedRemappingCurve);
  RemapVectorMagnitudeWithCurve
            ((TVector<double> *)&local_260._s_0,&param_3->Acceleration,
             param_2->bUseAccelerationRemappingCurve,&param_2->AccelerationRemappingCurve);
  uVar44 = local_260._12_4_;
  uVar43 = local_260._8_4_;
  uVar38 = local_260._4_4_;
  uVar37 = local_260._0_4_;
  dVar16 = __real_3f1a36e2e0000000;
  uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar14 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar46 = SUB84(local_260._s_0.Z,0);
  uVar47 = (uint)((ulonglong)local_260._16_8_ >> 0x20);
  dVar40 = (double)CONCAT44(local_260._12_4_,local_260._8_4_);
  dVar7 = (double)CONCAT44(local_260._4_4_,local_260._0_4_);
  if ((__real_38d1b717 < param_2->BendVelocityTowardsAcceleration) &&
     (((__real_3f1a36e2e0000000 <
        (double)CONCAT44(local_260._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         local_260._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
       (__real_3f1a36e2e0000000 <
        (double)CONCAT44(local_260._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         local_260._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (__real_3f1a36e2e0000000 <
       (double)CONCAT44(uVar47 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        uVar46 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))))) {
    auVar33._0_8_ = dStack_270 * dStack_270;
    auVar33._8_8_ = 0;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = local_278 * local_278 + auVar33._0_8_ + (double)local_268 * (double)local_268;
    auVar31 = sqrtpd(auVar33,auVar31);
    dVar30 = (double)(float)auVar31._0_8_;
    local_1b8 = __real_3ff0000000000000 /
                SQRT(dVar40 * dVar40 + dVar7 * dVar7 + local_260._s_0.Z * local_260._s_0.Z);
    dVar7 = dVar7 * local_1b8 * dVar30;
    dVar40 = dVar40 * local_1b8 * dVar30;
    dVar30 = local_260._s_0.Z * local_1b8 * dVar30;
    if (param_2->BendVelocityTowardsAcceleration < __real_3f7ff972) {
      dVar29 = (double)param_2->BendVelocityTowardsAcceleration;
      dStack_270 = (dVar40 - dStack_270) * dVar29 + dStack_270;
      local_268 = (dVar30 - (double)local_268) * dVar29 + (double)local_268;
      local_278 = (dVar7 - local_278) * dVar29 + local_278;
      auVar32._0_8_ = local_278 * local_278;
      auVar32._8_8_ = 0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = dStack_270 * dStack_270 + auVar32._0_8_ + (double)local_268 * (double)local_268
      ;
      auVar33 = sqrtpd(auVar32,auVar6);
      if ((float)auVar33._0_8_ <= __real_38d1b717) goto LAB_14a94591b;
      dVar30 = (double)((float)auVar31._0_8_ / (float)auVar33._0_8_);
      dVar7 = local_278 * dVar30;
      dVar40 = dStack_270 * dVar30;
      dVar30 = (double)local_268 * dVar30;
    }
    dStack_270 = dVar40;
    local_278 = dVar7;
    local_268 = dVar30;
  }
LAB_14a94591b:
  local_238._0_8_ = (param_3->Facing).Z;
  local_238._8_8_ = (param_3->Facing).W;
  iVar3 = param_4->NumHistorySamples;
  uVar24 = (ulonglong)iVar3;
  local_248._0_8_ = (param_3->Facing).X;
  local_248._8_8_ = (param_3->Facing).Y;
  fVar2 = param_4->SecondsPerPredictionSample;
  local_1b0._s_0.X = 0.0;
  local_1b0._s_0.Y = 0.0;
  local_1b0._s_0.Z = (double)(fVar2 * param_3->ControllerYawRate);
  UE::Math::TQuat<double>::MakeFromEuler(&local_208,(TVector<double> *)&local_1b0._s_0);
  iVar19 = (param_1->Samples).ArrayNum + -1;
  if (iVar3 <= iVar19) {
    lVar25 = uVar24 << 6;
    local_res10 = auVar35._0_8_;
    uVar27 = uVar24;
    dVar7 = local_1c0;
    while( true ) {
      uVar23 = (uint)uVar24;
      uVar26 = ~uVar23 >> 0x1f;
      uVar20 = 0;
      if ((int)uVar23 < (param_1->Samples).ArrayNum) {
        uVar20 = uVar26;
      }
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (param_1->Samples).AllocatorInstance.Data;
      pFVar1 = pFVar4 + lVar25 + 0x20;
      *(double *)pFVar1 = local_res10;
      *(double *)(pFVar1 + 8) = dVar9;
      *(ulonglong *)(pFVar4 + lVar25 + 0x30) = CONCAT44(uVar42,uVar41);
      uVar10 = local_248._0_8_;
      uVar11 = local_248._8_8_;
      uVar39 = local_238._0_8_;
      uVar17 = local_238._8_8_;
      uVar20 = 0;
      if ((int)uVar23 < (param_1->Samples).ArrayNum) {
        uVar20 = uVar26;
      }
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (param_1->Samples).AllocatorInstance.Data;
      pFVar1 = pFVar4 + lVar25;
      *(undefined8 *)pFVar1 = uVar10;
      *(undefined8 *)(pFVar1 + 8) = uVar11;
      pFVar4 = pFVar4 + lVar25 + 0x10;
      *(undefined8 *)pFVar4 = uVar39;
      *(undefined8 *)(pFVar4 + 8) = uVar17;
      uVar20 = 0;
      if ((int)uVar23 < (param_1->Samples).ArrayNum) {
        uVar20 = uVar26;
      }
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(float *)((param_1->Samples).AllocatorInstance.Data + lVar25 + 0x38) = param_5;
      if (uVar27 == (longlong)iVar19) break;
      param_5 = param_5 + fVar2;
      dVar40 = (double)fVar2;
      local_res10 = local_res10 + dVar40 * local_278;
      dVar7 = dVar7 + dVar40 * (double)local_268;
      dVar9 = dVar9 + dVar40 * dStack_270;
      local_1c0 = dVar7;
      if (param_3->bStepGroundPrediction != false) {
        dVar30 = local_208.Y * (double)CONCAT44(uVar47,uVar46) -
                 local_208.Z * (double)CONCAT44(uVar44,uVar43);
        dVar30 = dVar30 + dVar30;
        dVar29 = local_208.Z * (double)CONCAT44(uVar38,uVar37) -
                 local_208.X * (double)CONCAT44(uVar47,uVar46);
        dVar40 = local_208.X * (double)CONCAT44(uVar44,uVar43) -
                 local_208.Y * (double)CONCAT44(uVar38,uVar37);
        dVar29 = dVar29 + dVar29;
        dVar40 = dVar40 + dVar40;
        local_1e8._s_0.X =
             (local_208.Y * dVar40 - local_208.Z * dVar29) +
             local_208.W * dVar30 + (double)CONCAT44(uVar38,uVar37);
        local_1e8._s_0.Y =
             (local_208.Z * dVar30 - local_208.X * dVar40) +
             local_208.W * dVar29 + (double)CONCAT44(uVar44,uVar43);
        local_1e8._s_0.Z =
             (local_208.X * dVar29 - local_208.Y * dVar30) +
             local_208.W * dVar40 + (double)CONCAT44(uVar47,uVar46);
        pTVar21 = RemapVectorMagnitudeWithCurve
                            (&local_140,(TVector<double> *)&local_1e8._s_0,
                             param_2->bUseAccelerationRemappingCurve,
                             &param_2->AccelerationRemappingCurve);
        dVar40 = *(double *)((longlong)&pTVar21->field0_0x0 + 0x10);
        uVar20 = *(uint *)&pTVar21->field0_0x0;
        uVar26 = *(uint *)((longlong)&pTVar21->field0_0x0 + 4);
        uVar12 = *(uint *)((longlong)&pTVar21->field0_0x0 + 8);
        uVar13 = *(uint *)((longlong)&pTVar21->field0_0x0 + 0xc);
        local_260._0_4_ = uVar20;
        local_260._4_4_ = uVar26;
        local_260._8_4_ = uVar12;
        local_260._12_4_ = uVar13;
        local_260._s_0.Z = dVar40;
        FPoseSearchTrajectoryData::StepCharacterMovementGroundPrediction
                  (param_2,(TVector<double> *)&local_228._s_0,fVar2,(TVector<double> *)&local_278,
                   (TVector<double> *)&local_260._s_0,param_3);
        uVar39 = local_228._s_0.Z;
        uVar11 = local_228._s_0.Y;
        uVar10 = local_228._s_0.X;
        if (param_2->bUseSpeedRemappingCurve != false) {
          auVar34._0_8_ = local_228._s_0.Y * local_228._s_0.Y;
          auVar34._8_8_ = 0;
          auVar35._8_8_ = 0;
          auVar35._0_8_ =
               local_228._s_0.X * local_228._s_0.X + auVar34._0_8_ +
               local_228._s_0.Z * local_228._s_0.Z;
          auVar35 = sqrtpd(auVar34,auVar35);
          fVar45 = (float)auVar35._0_8_;
          if (__real_38d1b717 < fVar45) {
            this = FRuntimeFloatCurve::GetRichCurveConst(&param_2->SpeedRemappingCurve);
            fVar28 = FRichCurve::Eval(this,fVar45,0.0);
            dVar30 = (double)(fVar28 / fVar45);
            uVar39 = dVar30 * (double)uVar39;
            uVar10 = dVar30 * (double)uVar10;
            uVar11 = dVar30 * (double)uVar11;
          }
        }
        unique0x100005b6 = (int)uVar11;
        local_278 = (double)uVar10;
        unique0x100005ba = (int)((ulonglong)uVar11 >> 0x20);
        auVar36._8_4_ = SUB84(local_208.Z,0);
        auVar36._0_8_ = local_208.Z;
        auVar36._12_4_ = (int)((ulonglong)local_208.Z >> 0x20);
        dVar30 = local_208.X * (double)local_238._8_8_ *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 (double)local_248._0_8_ * local_208.W +
                 (double)local_238._0_8_ * local_208.Y *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 local_208.Z * (double)local_248._8_8_ *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar29 = local_208.X * (double)local_238._0_8_ *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 (double)local_248._8_8_ * local_208.W +
                 (double)local_238._8_8_ * local_208.Y *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 auVar36._8_8_ * (double)local_248._0_8_ *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        uVar37 = SUB84(dVar29,0);
        uVar38 = (undefined4)((ulonglong)dVar29 >> 0x20);
        dVar29 = local_208.X * (double)local_248._8_8_ *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                 (double)local_238._0_8_ * local_208.W +
                 (double)local_248._0_8_ * local_208.Y *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                 local_208.Z * (double)local_238._8_8_ *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar8 = local_208.X * (double)local_248._0_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                (double)local_238._8_8_ * local_208.W +
                (double)local_248._8_8_ * local_208.Y *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                local_208.Z * (double)local_238._0_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        uVar43 = SUB84(dVar8,0);
        uVar44 = (undefined4)((ulonglong)dVar8 >> 0x20);
        uVar46 = SUB84(local_260._s_0.Z,0);
        uVar47 = (uint)((ulonglong)local_260._16_8_ >> 0x20);
        local_178._8_4_ = uVar37;
        local_178._0_8_ = dVar30;
        local_178._12_4_ = uVar38;
        local_248._8_4_ = uVar37;
        local_248._0_8_ = dVar30;
        local_248._12_4_ = uVar38;
        local_168._8_4_ = uVar43;
        local_168._0_8_ = dVar29;
        local_168._12_4_ = uVar44;
        local_238._8_4_ = uVar43;
        local_238._0_8_ = dVar29;
        local_238._12_4_ = uVar44;
        uVar43 = local_260._8_4_;
        uVar44 = local_260._12_4_;
        uVar37 = local_260._0_4_;
        uVar38 = local_260._4_4_;
        local_268 = uVar39;
        if ((param_3->bOrientRotationToMovement != false) &&
           (((uVar37 = uVar20, uVar38 = uVar26, uVar43 = uVar12, uVar44 = uVar13,
             dVar16 < (double)CONCAT44(uVar26 & uVar15,uVar20 & uVar14) ||
             (dVar16 < (double)CONCAT44(uVar13 & uVar15,uVar12 & uVar14))) ||
            (dVar16 < (double)CONCAT44(uVar47 & uVar15,uVar46 & uVar14))))) {
          local_198._0_4_ = uVar20;
          local_198._4_4_ = uVar26;
          local_198._8_4_ = uVar12;
          local_198._12_4_ = uVar13;
          local_198._16_8_ = dVar40;
          UE::Math::TQuat<double>::RotateVector
                    (&param_3->MeshCompRelativeRotation,&local_158,
                     (TVector<double> *)&local_198._s_0);
          fVar45 = param_2->RotateTowardsMovementSpeed;
          pTVar22 = UE::Math::TVector<double>::ToOrientationQuat(&local_158,&local_128);
          pTVar22 = FMath::QInterpConstantTo<double>
                              (local_108,(TQuat<double> *)local_248,pTVar22,fVar2,fVar45);
          local_248._0_8_ = pTVar22->X;
          local_248._8_8_ = pTVar22->Y;
          local_238._0_8_ = pTVar22->Z;
          local_238._8_8_ = pTVar22->W;
        }
      }
      uVar24 = (ulonglong)(uVar23 + 1);
      uVar41 = SUB84(local_1c0,0);
      uVar42 = (undefined4)((ulonglong)local_1c0 >> 0x20);
      uVar27 = uVar27 + 1;
      lVar25 = lVar25 + 0x40;
    }
  }
  return;
}

// execDrawTransformTrajectory @ 14a947970

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
UPoseSearchTrajectoryLibrary::execDrawTransformTrajectory
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  UWorld *pUVar4;
  FTransformTrajectory *pFVar5;
  float local_res10 [2];
  float local_res20 [2];
  UObject *local_48;
  FTransformTrajectory local_40 [3];
  
  local_48 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_40[0].Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40[0].Samples.ArrayNum = 0;
  local_40[0].Samples.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_40);
  }
  local_res20[0] = 0.0;
  pFVar5 = local_40;
  if ((FTransformTrajectory *)param_2->MostRecentPropertyAddress != (FTransformTrajectory *)0x0) {
    pFVar5 = (FTransformTrajectory *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
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
  fVar3 = local_res20[0];
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar4 = UEngine::GetWorldFromContextObject(GEngine,local_48,LogAndReturnNull);
  if (pUVar4 != (UWorld *)0x0) {
    UTransformTrajectoryBlueprintLibrary::DebugDrawTrajectory(pFVar5,pUVar4,fVar3,fVar2);
  }
  if (local_40[0].Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40[0].Samples.AllocatorInstance.Data);
  }
  return;
}

// execGetTransformTrajectoryAngularVelocity @ 14a947d80

void __cdecl
UPoseSearchTrajectoryLibrary::execGetTransformTrajectoryAngularVelocity
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FTransformTrajectory *pFVar2;
  TVector<double> *pTVar3;
  int local_res10 [4];
  float local_res20 [2];
  float local_48 [2];
  FTransformTrajectory local_40;
  TVector<double> local_30;
  
  local_40.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.Samples.ArrayNum = 0;
  local_40.Samples.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_48[0] = 0.0;
  pFVar2 = &local_40;
  if ((FTransformTrajectory *)param_2->MostRecentPropertyAddress != (FTransformTrajectory *)0x0) {
    pFVar2 = (FTransformTrajectory *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_res10[0] = 0;
  pTVar3 = &local_30;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
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
  GetTransformTrajectoryAngularVelocity
            (pFVar2,local_48[0],local_res20[0],pTVar3,local_res10[0] != 0);
  if (local_40.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Samples.AllocatorInstance.Data);
  }
  return;
}

// execGetTransformTrajectorySampleAtTime @ 14a947f70

void __cdecl
UPoseSearchTrajectoryLibrary::execGetTransformTrajectorySampleAtTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  FTransformTrajectorySample *pFVar3;
  double *pdVar4;
  FTransformTrajectory *this;
  int local_res10 [2];
  float local_res20 [2];
  FTransformTrajectory local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined4 local_60;
  FTransformTrajectorySample local_58;
  
  local_a8.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Samples.ArrayNum = 0;
  local_a8.Samples.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res20[0] = 0.0;
  this = &local_a8;
  if ((FTransformTrajectory *)param_2->MostRecentPropertyAddress != (FTransformTrajectory *)0x0) {
    this = (FTransformTrajectory *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_98 = UE::Math::TQuat<double>::Identity.X;
  dStack_90 = UE::Math::TQuat<double>::Identity.Y;
  local_60 = 0;
  local_88 = UE::Math::TQuat<double>::Identity.Z;
  dStack_80 = UE::Math::TQuat<double>::Identity.W;
  local_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res10[0] = 0;
  pdVar4 = &local_98;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar4 = (double *)param_2->MostRecentPropertyAddress;
  }
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
  pFVar3 = FTransformTrajectory::GetSampleAtTime(this,&local_58,local_res20[0],local_res10[0] != 0);
  dVar2 = (pFVar3->Facing).Y;
  *pdVar4 = (pFVar3->Facing).X;
  pdVar4[1] = dVar2;
  dVar2 = (pFVar3->Facing).W;
  pdVar4[2] = (pFVar3->Facing).Z;
  pdVar4[3] = dVar2;
  dVar2 = (pFVar3->Position).field0_0x0._s_0.Y;
  pdVar4[4] = (pFVar3->Position).field0_0x0._s_0.X;
  pdVar4[5] = dVar2;
  dVar2 = *(double *)&pFVar3->TimeInSeconds;
  pdVar4[6] = (pFVar3->Position).field0_0x0._s_0.Z;
  pdVar4[7] = dVar2;
  if (local_a8.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Samples.AllocatorInstance.Data);
  }
  return;
}

// execGetTransformTrajectorySampleTransform @ 14a948150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UPoseSearchTrajectoryLibrary::execGetTransformTrajectorySampleTransform
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  FProperty *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double *pdVar9;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  undefined4 local_10;
  
  local_48 = UE::Math::TQuat<double>::Identity.X;
  dStack_40 = UE::Math::TQuat<double>::Identity.Y;
  local_38 = UE::Math::TQuat<double>::Identity.Z;
  dStack_30 = UE::Math::TQuat<double>::Identity.W;
  local_10 = 0;
  local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pdVar9 = &local_48;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar9 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar3 = pdVar9[1];
  dVar1 = pdVar9[6];
  dVar4 = pdVar9[4];
  dVar5 = pdVar9[5];
  dVar6 = pdVar9[2];
  dVar7 = pdVar9[3];
  *(double *)param_3 = *pdVar9;
  *(double *)((longlong)param_3 + 8) = dVar3;
  *(double *)((longlong)param_3 + 0x10) = dVar6;
  *(double *)((longlong)param_3 + 0x18) = dVar7;
  *(double *)((longlong)param_3 + 0x20) = dVar4;
  *(double *)((longlong)param_3 + 0x28) = dVar5;
  *(double *)((longlong)param_3 + 0x30) = dVar1;
  *(undefined8 *)((longlong)param_3 + 0x38) = 0;
  uVar8 = _UNK_150689688;
  *(undefined8 *)((longlong)param_3 + 0x40) = ___xmm_3ff00000000000003ff0000000000000;
  *(undefined8 *)((longlong)param_3 + 0x48) = uVar8;
  uVar8 = _UNK_150689518;
  *(undefined8 *)((longlong)param_3 + 0x50) = ___xmm_00000000000000003ff0000000000000;
  *(undefined8 *)((longlong)param_3 + 0x58) = uVar8;
  return;
}

// execGetTransformTrajectoryVelocity @ 14a948250

void __cdecl
UPoseSearchTrajectoryLibrary::execGetTransformTrajectoryVelocity
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FTransformTrajectory *pFVar2;
  TVector<double> *pTVar3;
  int local_res10 [4];
  float local_res20 [2];
  float local_48 [2];
  FTransformTrajectory local_40;
  TVector<double> local_30;
  
  local_40.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.Samples.ArrayNum = 0;
  local_40.Samples.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_48[0] = 0.0;
  pFVar2 = &local_40;
  if ((FTransformTrajectory *)param_2->MostRecentPropertyAddress != (FTransformTrajectory *)0x0) {
    pFVar2 = (FTransformTrajectory *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_res10[0] = 0;
  pTVar3 = &local_30;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
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
  GetTransformTrajectoryVelocity(pFVar2,local_48[0],local_res20[0],pTVar3,local_res10[0] != 0);
  if (local_40.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Samples.AllocatorInstance.Data);
  }
  return;
}

// execHandleTransformTrajectoryWorldCollisions @ 14a948440

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
UPoseSearchTrajectoryLibrary::execHandleTransformTrajectoryWorldCollisions
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  double dVar2;
  int iVar3;
  FTransformTrajectory *pFVar4;
  FProperty *pFVar5;
  longlong *plVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  byte bVar10;
  byte bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UObject *pUVar15;
  AActor *pAVar16;
  UClass *pUVar17;
  undefined4 *puVar18;
  FPoseSearchTrajectory_WorldCollisionResults *pFVar19;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  uint uVar24;
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  byte local_res10 [16];
  byte local_res20 [8];
  int local_1c4;
  int local_1c0;
  int local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0 [2];
  FPoseSearchTrajectory_WorldCollisionResults local_1a8;
  UAnimInstance *local_1a0;
  UObject *local_198;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_190;
  FTransformTrajectory local_180;
  FTransformTrajectory local_170;
  FTransformTrajectory *local_160;
  FTransformTrajectory *local_158;
  TVector<double>_u_0 local_148;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  FLinearColor_u_0 local_108;
  FLinearColor_u_0 local_f8;
  TVector<double>_u_0 local_e8 [7];
  
  local_198 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  local_1a0 = (UAnimInstance *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a0);
  }
  local_170.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.Samples.ArrayNum = 0;
  local_170.Samples.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_170,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_170);
  }
  local_1c4 = 0;
  local_158 = &local_170;
  if ((FTransformTrajectory *)param_2->MostRecentPropertyAddress != (FTransformTrajectory *)0x0) {
    local_158 = (FTransformTrajectory *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c4,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c4);
  }
  bVar21 = local_1c4 != 0;
  local_1b0[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1b0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1b0);
  }
  local_180.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_180.Samples.ArrayNum = 0;
  local_180.Samples.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_180,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_180);
  }
  pFVar4 = (FTransformTrajectory *)param_2->MostRecentPropertyAddress;
  local_1a8.TimeToLand = 0.0;
  local_1a8.LandSpeed = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_160 = &local_180;
  if (pFVar4 != (FTransformTrajectory *)0x0) {
    local_160 = pFVar4;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  local_res20[0] = 0;
  pFVar19 = &local_1a8;
  if ((FPoseSearchTrajectory_WorldCollisionResults *)param_2->MostRecentPropertyAddress !=
      (FPoseSearchTrajectory_WorldCollisionResults *)0x0) {
    pFVar19 = (FPoseSearchTrajectory_WorldCollisionResults *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_1c0 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c0);
  }
  bVar22 = local_1c0 != 0;
  local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190.ArrayNum = 0;
  local_190.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_190,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_190);
  }
  local_res10[0] = 0;
  pTVar20 = &local_190;
  if ((TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar20 = (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_1bc = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1bc,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1bc);
  }
  bVar23 = local_1bc != 0;
  local_1b4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b4,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b4);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_1b8 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b8,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b8);
  }
  pUVar15 = local_198;
  fVar14 = local_1b0[0];
  fVar13 = local_1b4;
  fVar12 = local_1b8;
  bVar11 = local_res20[0];
  bVar10 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  dVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
  uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  dVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
  local_148._s_0.Z = (double)uVar8;
  if ((bVar21) && (local_1a0 != (UAnimInstance *)0x0)) {
    pAVar16 = UAnimInstance::GetOwningActor(local_1a0);
    if (pAVar16 != (AActor *)0x0) {
      pUVar17 = Z_Construct_UClass_ACharacter_NoRegister();
      iVar3 = (int)pUVar17->_padding_;
      if (((iVar3 <= *(int *)(pAVar16->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pAVar16->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
           &pUVar17->_padding_)) &&
         (plVar6 = *(longlong **)&pAVar16[1].AttachmentReplication.LocationOffset.field_0x10,
         plVar6 != (longlong *)0x0)) {
        dVar9 = (double)plVar6[0x3c];
        dVar7 = (double)plVar6[0x3d];
        dVar2 = (double)plVar6[0x3e];
        uVar24 = (**(code **)(*plVar6 + 0x4f8))();
        dVar25 = (double)(float)(uVar24 ^ __xmm_80000000800000008000000080000000);
        uVar8 = dVar2 * dVar25;
        dVar9 = dVar9 * dVar25;
        dVar7 = dVar7 * dVar25;
        local_148._s_0.Z = (double)uVar8;
        puVar18 = (undefined4 *)(**(code **)(pAVar16->_padding_ + 0x360))(pAVar16,&local_148);
        uVar26 = *puVar18;
        uVar27 = puVar18[1];
        uVar28 = puVar18[2];
        uVar29 = puVar18[3];
        local_148._s_0.Z = (double)*(undefined8 *)(puVar18 + 4);
      }
    }
  }
  local_108._0_8_ = local_128;
  local_108._8_8_ = uStack_120;
  local_f8._0_8_ = local_118;
  local_f8._8_8_ = uStack_110;
  local_e8[0]._8_4_ = SUB84(dVar7,0);
  local_e8[0]._0_8_ = dVar9;
  local_e8[0]._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  local_148._0_4_ = uVar26;
  local_148._4_4_ = uVar27;
  local_148._8_4_ = uVar28;
  local_148._12_4_ = uVar29;
  local_e8[0]._16_8_ = uVar8;
  HandleTransformTrajectoryWorldCollisionsWithGravity
            (pUVar15,local_158,(TVector<double> *)&local_148._s_0,bVar21,
             (TVector<double> *)&local_e8[0]._s_0,fVar14,local_160,pFVar19,(uint)bVar11,bVar22,
             pTVar20,(uint)bVar10,bVar23,fVar13,(FLinearColor *)&local_f8._s_0,
             (FLinearColor *)&local_108._s_0,fVar12);
  if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.AllocatorInstance.Data);
  }
  if (local_180.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Samples.AllocatorInstance.Data);
  }
  if (local_170.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Samples.AllocatorInstance.Data);
  }
  return;
}

// execHandleTransformTrajectoryWorldCollisionsWithGravity @ 14a948a80

void __cdecl
UPoseSearchTrajectoryLibrary::execHandleTransformTrajectoryWorldCollisionsWithGravity
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FTransformTrajectory *pFVar1;
  FProperty *pFVar2;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FTransformTrajectory *pFVar4;
  FPoseSearchTrajectory_WorldCollisionResults *pFVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  byte local_res10 [16];
  byte local_res20 [8];
  int local_154;
  int local_150;
  int local_14c;
  float local_148;
  float local_144;
  float local_140 [2];
  FPoseSearchTrajectory_WorldCollisionResults local_138;
  UObject *local_130;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_128;
  FTransformTrajectory local_118;
  FTransformTrajectory local_108;
  FTransformTrajectory *local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  FLinearColor_u_0 local_98;
  FLinearColor_u_0 local_88;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_58;
  
  local_130 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_130,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_130);
  }
  local_108.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Samples.ArrayNum = 0;
  local_108.Samples.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_f8 = &local_108;
  if ((FTransformTrajectory *)param_2->MostRecentPropertyAddress != (FTransformTrajectory *)0x0) {
    local_f8 = (FTransformTrajectory *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_154 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_154,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_154);
  }
  bVar6 = local_154 != 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_140[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_140,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_140);
  }
  local_118.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Samples.ArrayNum = 0;
  local_118.Samples.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  pFVar1 = (FTransformTrajectory *)param_2->MostRecentPropertyAddress;
  local_138.TimeToLand = 0.0;
  local_138.LandSpeed = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar4 = &local_118;
  if (pFVar1 != (FTransformTrajectory *)0x0) {
    pFVar4 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  local_res20[0] = 0;
  pFVar5 = &local_138;
  if ((FPoseSearchTrajectory_WorldCollisionResults *)param_2->MostRecentPropertyAddress !=
      (FPoseSearchTrajectory_WorldCollisionResults *)0x0) {
    pFVar5 = (FPoseSearchTrajectory_WorldCollisionResults *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_150 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_150,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_150);
  }
  bVar7 = local_150 != 0;
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
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
  local_res10[0] = 0;
  pTVar3 = &local_128;
  if ((TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_14c = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_14c,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_14c);
  }
  bVar8 = local_14c != 0;
  local_144 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_144,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_144);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_148 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_98._0_8_ = local_e8;
  local_98._8_8_ = uStack_e0;
  local_88._0_8_ = local_d8;
  local_88._8_8_ = uStack_d0;
  local_78._s_0.X = local_c8;
  local_78._s_0.Y = dStack_c0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_78._s_0.Z = local_b8;
  local_58._s_0.X = local_b0;
  local_58._s_0.Y = dStack_a8;
  local_58._s_0.Z = local_a0;
  HandleTransformTrajectoryWorldCollisionsWithGravity
            (local_130,local_f8,(TVector<double> *)&local_58._s_0,bVar6,
             (TVector<double> *)&local_78._s_0,local_140[0],pFVar4,pFVar5,(uint)local_res20[0],bVar7
             ,pTVar3,(uint)local_res10[0],bVar8,local_144,(FLinearColor *)&local_88._s_0,
             (FLinearColor *)&local_98._s_0,local_148);
  if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  if (local_118.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Samples.AllocatorInstance.Data);
  }
  if (local_108.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Samples.AllocatorInstance.Data);
  }
  return;
}

// execPoseSearchGeneratePredictorTransformTrajectory @ 14a949cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPoseSearchTrajectoryLibrary::execPoseSearchGeneratePredictorTransformTrajectory
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  UObjectBaseUtility *this;
  UClass *pUVar8;
  void *pvVar9;
  float *pfVar10;
  FTransformTrajectory *pFVar11;
  FTransformTrajectory *pFVar12;
  undefined1 auStackY_238 [32];
  float local_1e8;
  int local_1e4;
  float local_1e0;
  int local_1dc;
  float local_1d8;
  float local_1d4;
  UObjectBaseUtility *local_1d0;
  FTransformTrajectory local_1c8;
  FTransformTrajectory local_1b8;
  UObjectBaseUtility *local_1a8;
  void *local_1a0;
  FPoseSearchTrajectoryData local_198;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1d0 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d0);
  }
  local_198.RotateTowardsMovementSpeed = 10.0;
  local_198.MaxControllerYawRate = 70.0;
  local_198.BendVelocityTowardsAcceleration = 0.0;
  local_198.bUseSpeedRemappingCurve = false;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&local_198.SpeedRemappingCurve);
  local_198.bUseAccelerationRemappingCurve = false;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&local_198.AccelerationRemappingCurve);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  local_1d4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d4,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d4);
  }
  local_1b8.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.Samples.ArrayNum = 0;
  local_1b8.Samples.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b8);
  }
  pFVar12 = (FTransformTrajectory *)param_2->MostRecentPropertyAddress;
  local_1e8 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar11 = &local_1b8;
  if (pFVar12 != (FTransformTrajectory *)0x0) {
    pFVar11 = pFVar12;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e8);
  }
  local_1c8.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.Samples.ArrayNum = 0;
  local_1c8.Samples.ArrayMax = 0;
  pfVar10 = &local_1e8;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar10 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c8);
  }
  local_1d8 = 0.0;
  pFVar12 = &local_1c8;
  if ((FTransformTrajectory *)param_2->MostRecentPropertyAddress != (FTransformTrajectory *)0x0) {
    pFVar12 = (FTransformTrajectory *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d8);
  }
  local_1dc = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1dc,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1dc);
  }
  local_1e0 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e0);
  }
  local_1e4 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e4,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e4);
  }
  this = local_1d0;
  fVar7 = local_1d4;
  fVar6 = local_1d8;
  iVar5 = local_1dc;
  fVar4 = local_1e0;
  iVar3 = local_1e4;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_1d0 != (UObjectBaseUtility *)0x0) {
    pUVar8 = Z_Construct_UClass_UPoseSearchTrajectoryPredictorInterface_NoRegister();
    pvVar9 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar8);
    if (pvVar9 != (void *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_1a8 = this;
      pUVar8 = Z_Construct_UClass_UPoseSearchTrajectoryPredictorInterface_NoRegister();
      local_1a0 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar8);
      PoseSearchGenerateTransformTrajectoryWithPredictor
                ((TScriptInterface<IPoseSearchTrajectoryPredictorInterface> *)&local_1a8,fVar7,
                 pFVar11,pfVar10,pFVar12,fVar6,iVar5,fVar4,iVar3);
    }
  }
  if (local_1c8.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Samples.AllocatorInstance.Data);
  }
  if (local_1b8.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Samples.AllocatorInstance.Data);
  }
  FPoseSearchTrajectoryData::~FPoseSearchTrajectoryData(&local_198);
  return;
}

// execPoseSearchGenerateTransformTrajectory @ 14a94a090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPoseSearchTrajectoryLibrary::execPoseSearchGenerateTransformTrajectory
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FTransformTrajectory *pFVar2;
  FPoseSearchTrajectoryData *pFVar3;
  float *pfVar4;
  FTransformTrajectory *pFVar5;
  undefined1 auStackY_1f8 [32];
  float local_1a8;
  int local_1a4;
  float local_1a0;
  int local_19c;
  float local_198;
  float local_194;
  UObject *local_190;
  FTransformTrajectory local_188;
  FTransformTrajectory local_178;
  FPoseSearchTrajectoryData local_168;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_190 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_190,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_190);
  }
  local_168.RotateTowardsMovementSpeed = 10.0;
  local_168.MaxControllerYawRate = 70.0;
  local_168.BendVelocityTowardsAcceleration = 0.0;
  local_168.bUseSpeedRemappingCurve = false;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&local_168.SpeedRemappingCurve);
  local_168.bUseAccelerationRemappingCurve = false;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&local_168.AccelerationRemappingCurve);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  local_194 = 0.0;
  pFVar3 = &local_168;
  if ((FPoseSearchTrajectoryData *)param_2->MostRecentPropertyAddress !=
      (FPoseSearchTrajectoryData *)0x0) {
    pFVar3 = (FPoseSearchTrajectoryData *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_194,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_194);
  }
  local_178.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.Samples.ArrayNum = 0;
  local_178.Samples.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  pFVar2 = (FTransformTrajectory *)param_2->MostRecentPropertyAddress;
  local_1a8 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar5 = &local_178;
  if (pFVar2 != (FTransformTrajectory *)0x0) {
    pFVar5 = pFVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  local_188.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.Samples.ArrayNum = 0;
  local_188.Samples.ArrayMax = 0;
  pfVar4 = &local_1a8;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar4 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  local_198 = 0.0;
  pFVar2 = &local_188;
  if ((FTransformTrajectory *)param_2->MostRecentPropertyAddress != (FTransformTrajectory *)0x0) {
    pFVar2 = (FTransformTrajectory *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  local_19c = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_19c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_19c);
  }
  local_1a0 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a0);
  }
  local_1a4 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a4);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PoseSearchGenerateTransformTrajectory
            (local_190,pFVar3,local_194,pFVar5,pfVar4,pFVar2,local_198,local_19c,local_1a0,local_1a4
            );
  if (local_188.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Samples.AllocatorInstance.Data);
  }
  if (local_178.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Samples.AllocatorInstance.Data);
  }
  FPoseSearchTrajectoryData::~FPoseSearchTrajectoryData(&local_168);
  return;
}

// execPoseSearchGenerateTransformTrajectoryWithPredictor @ 14a94a460

void __cdecl
UPoseSearchTrajectoryLibrary::execPoseSearchGenerateTransformTrajectoryWithPredictor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  FTransformTrajectory *pFVar7;
  float *pfVar8;
  FTransformTrajectory *pFVar9;
  float local_res10 [4];
  int local_res20 [2];
  float local_a8;
  int local_a4;
  float local_a0;
  float local_9c;
  FTransformTrajectory local_98;
  FTransformTrajectory local_88;
  UObject *local_78;
  undefined8 uStack_70;
  UObject *local_68 [8];
  
  local_78 = (UObject *)0x0;
  uStack_70 = 0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_9c = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_9c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_9c);
  }
  local_88.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Samples.ArrayNum = 0;
  local_88.Samples.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pFVar7 = (FTransformTrajectory *)param_2->MostRecentPropertyAddress;
  local_res10[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar9 = &local_88;
  if (pFVar7 != (FTransformTrajectory *)0x0) {
    pFVar9 = pFVar7;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_98.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Samples.ArrayNum = 0;
  local_98.Samples.ArrayMax = 0;
  pfVar8 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar8 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a0 = 0.0;
  pFVar7 = &local_98;
  if ((FTransformTrajectory *)param_2->MostRecentPropertyAddress != (FTransformTrajectory *)0x0) {
    pFVar7 = (FTransformTrajectory *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_a4 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a4);
  }
  local_a8 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
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
  fVar6 = local_9c;
  fVar5 = local_a0;
  iVar4 = local_a4;
  fVar3 = local_a8;
  iVar2 = local_res20[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68[0] = local_78;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_78 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_78);
  }
  local_68[1] = (UObject *)uStack_70;
  PoseSearchGenerateTransformTrajectoryWithPredictor
            ((TScriptInterface<IPoseSearchTrajectoryPredictorInterface> *)local_68,fVar6,pFVar9,
             pfVar8,pFVar7,fVar5,iVar4,fVar3,iVar2);
  if (local_98.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Samples.AllocatorInstance.Data);
  }
  if (local_88.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Samples.AllocatorInstance.Data);
  }
  return;
}

