// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 21

// StaticClass @ 14ceff040

UClass * __cdecl UMotionWarpingUtilities::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionWarpingUtilities.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"MotionWarpingUtilities",
               &Z_Registration_Info_UClass_UMotionWarpingUtilities.InnerSingleton,
               StaticRegisterNativesUMotionWarpingUtilities,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMotionWarpingUtilities>,
               InternalVTableHelperCtorCaller<UMotionWarpingUtilities>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionWarpingUtilities.InnerSingleton;
}

// UMotionWarpingUtilities @ 14cf04750

UMotionWarpingUtilities * __thiscall
UMotionWarpingUtilities::UMotionWarpingUtilities
          (UMotionWarpingUtilities *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMotionWarpingUtilities__6B_;
  return this;
}

// UMotionWarpingUtilities @ 14cf04780

UMotionWarpingUtilities * __thiscall
UMotionWarpingUtilities::UMotionWarpingUtilities
          (UMotionWarpingUtilities *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMotionWarpingUtilities__6B_;
  return this;
}

// ~UMotionWarpingUtilities @ 14cf05990

void __thiscall UMotionWarpingUtilities::~UMotionWarpingUtilities(UMotionWarpingUtilities *this)

{
  *(undefined ***)this = &___7UMotionWarpingUtilities__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// CalculateRootTransformRelativeToWarpPointAtTime @ 14cf099f0

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

TTransform<double> * __cdecl
UMotionWarpingUtilities::CalculateRootTransformRelativeToWarpPointAtTime
          (TTransform<double> *__return_storage_ptr__,ACharacter *param_1,UAnimSequenceBase *param_2
          ,float param_3,TTransform<double> *param_4)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  TTransform<double> *pTVar4;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [32];
  TTransform<double> local_168;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  pdVar3 = (double *)(**(code **)(*(longlong *)param_1 + 0x8e0))(param_1,local_188);
  dVar2 = pdVar3[3] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar1 = pdVar3[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  local_108.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar2,0);
  local_108.Rotation.ZW.m128d_f64[0] =
       pdVar3[2] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  local_108.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_108.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar1,0);
  local_108.Rotation.XY.m128d_f64[0] =
       *pdVar3 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  local_108.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_108.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_108.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_108.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_108.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  pTVar4 = ExtractRootTransformFromAnimation(&local_168,param_2,param_3);
  local_a8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_a8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_a8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_a8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_a8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_a8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_a8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_a8,&local_108,pTVar4);
  local_168.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_168.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_168.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_168.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_168.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_168.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_168.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_168.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_168.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_168.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_168.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_168.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_168.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_168.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_168.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_168.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_168.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_168.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_168,&local_108,param_4);
  UE::Math::TTransform<double>::GetRelativeTransform(&local_a8,__return_storage_ptr__,&local_168);
  return __return_storage_ptr__;
}

// CalculateRootTransformRelativeToWarpPointAtTime @ 14cf09b90

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

TTransform<double> * __cdecl
UMotionWarpingUtilities::CalculateRootTransformRelativeToWarpPointAtTime
          (TTransform<double> *__return_storage_ptr__,ACharacter *param_1,UAnimSequenceBase *param_2
          ,float param_3,FName *param_4)

{
  USkeletalMeshComponent *this;
  code *pcVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  UAnimInstance *this_00;
  FBoneContainer *this_01;
  UObject *pUVar5;
  TTransform<double> *pTVar6;
  double *pdVar7;
  undefined1 auStackY_3c8 [32];
  int local_388;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_380;
  FCurveFilterSettings local_370;
  FCSPose<FCompactPose> local_358;
  TArrayView<unsigned_short_const_,int> local_308;
  undefined1 local_2f8 [32];
  TTransform<double> local_2d8;
  TTransform<double> local_278;
  TTransform<double> local_218;
  FBoneContainer local_1b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  this = (param_1->Mesh).field0_0x0.DebugPtr;
  if ((this != (USkeletalMeshComponent *)0x0) &&
     (this_00 = USkeletalMeshComponent::GetAnimInstance(this), this_00 != (UAnimInstance *)0x0)) {
    this_01 = UAnimInstance::GetRequiredBones(this_00);
    local_388 = FBoneContainer::GetPoseBoneIndexForBoneName(this_01,param_4);
    if (local_388 != -1) {
      local_388 = local_388 << 0x10;
      local_380.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_380.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,2,0,&local_380.AllocatorInstance,2,&local_380.ArrayMax);
      *(int *)local_380.AllocatorInstance.Data = local_388;
      FReferenceSkeleton::EnsureParentsExistAndSort(this_01->RefSkeleton,&local_380);
      pUVar5 = FWeakObjectPtr::Get(&(this_01->Asset).WeakPtr);
      local_308.ArrayNum = local_380.ArrayNum;
      local_308.DataPtr = (ushort *)local_380.AllocatorInstance.Data;
      local_370.FilterCurves = (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
      local_370.FilterMode = DisallowAll;
      local_370.LODIndex = 0;
      if ((local_380.ArrayNum < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TTransform<double> *)(*pcVar1)();
        return pTVar6;
      }
      FBoneContainer::FBoneContainer(&local_1b8,&local_308,&local_370,pUVar5);
      local_358.Pose._0_8_ = 0;
      local_358.Pose._16_8_ = 0;
      local_358.ComponentSpaceFlags._0_8_ = 0;
      local_358.Pose._8_8_ = 0;
      local_358.ComponentSpaceFlags._8_8_ = 0;
      local_358.BoneMask._0_8_ = 0;
      local_358.BoneMask._8_8_ = 0;
      local_358.BonesToConvert.AllocatorInstance.Data = (FCompactPoseBoneIndex *)0x0;
      local_358.BonesToConvert.ArrayNum = 0;
      local_358.BonesToConvert.ArrayMax = 0;
      ExtractComponentSpacePose(param_2,&local_1b8,param_3,false,&local_358);
      pdVar7 = (double *)(**(code **)(*(longlong *)param_1 + 0x8e0))(param_1,local_2f8);
      dVar3 = pdVar7[3] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar2 = pdVar7[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      local_2d8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar3,0);
      local_2d8.Rotation.ZW.m128d_f64[0] =
           pdVar7[2] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      local_2d8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
      local_2d8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar2,0);
      local_2d8.Rotation.XY.m128d_f64[0] =
           *pdVar7 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      local_2d8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar2 >> 0x20);
      local_2d8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_2d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_2d8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_2d8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_2d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_2d8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_2d8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_2d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_2d8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_2d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_2d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_2d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      pTVar6 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                         (&local_358,(FCompactPoseBoneIndex)0x0);
      local_218.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_218.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_218.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_218.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_218.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_218.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_218.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_218.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_218.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_218.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_218.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_218.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_218.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_218.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_218.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_218.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_218.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_218.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_218,&local_2d8,pTVar6);
      pTVar6 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                         (&local_358,(FCompactPoseBoneIndex)0x1);
      local_278.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_278.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_278.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_278.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_278.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_278.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_278.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_278.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_278.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_278.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_278.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_278.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_278.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_278.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_278.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_278.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_278.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_278.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_278,&local_2d8,pTVar6);
      UE::Math::TTransform<double>::GetRelativeTransform
                (&local_218,__return_storage_ptr__,&local_278);
      FBoneContainer::~FBoneContainer(&local_1b8);
      if (local_380.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_380.AllocatorInstance.Data);
      return __return_storage_ptr__;
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
  return __return_storage_ptr__;
}

// CalculateRootTransformRelativeToWarpPointAtTime @ 14cf09f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __cdecl
UMotionWarpingUtilities::CalculateRootTransformRelativeToWarpPointAtTime
          (TTransform<double> *__return_storage_ptr__,UMotionWarpingBaseAdapter *param_1,
          UAnimSequenceBase *param_2,float param_3,TTransform<double> *param_4)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  TTransform<double> *pTVar4;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [32];
  TTransform<double> local_168;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  pdVar3 = (double *)(**(code **)(param_1->_padding_ + 0x2d0))(param_1,local_188);
  dVar2 = pdVar3[3] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar1 = pdVar3[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  local_108.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar2,0);
  local_108.Rotation.ZW.m128d_f64[0] =
       pdVar3[2] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  local_108.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_108.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar1,0);
  local_108.Rotation.XY.m128d_f64[0] =
       *pdVar3 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  local_108.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_108.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_108.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_108.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_108.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  pTVar4 = ExtractRootTransformFromAnimation(&local_168,param_2,param_3);
  local_a8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_a8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_a8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_a8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_a8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_a8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_a8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_a8,&local_108,pTVar4);
  local_168.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_168.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_168.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_168.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_168.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_168.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_168.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_168.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_168.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_168.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_168.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_168.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_168.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_168.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_168.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_168.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_168.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_168.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_168,&local_108,param_4);
  UE::Math::TTransform<double>::GetRelativeTransform(&local_a8,__return_storage_ptr__,&local_168);
  return __return_storage_ptr__;
}

// CalculateRootTransformRelativeToWarpPointAtTime @ 14cf0a0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __cdecl
UMotionWarpingUtilities::CalculateRootTransformRelativeToWarpPointAtTime
          (TTransform<double> *__return_storage_ptr__,UMotionWarpingBaseAdapter *param_1,
          UAnimSequenceBase *param_2,float param_3,FName *param_4)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  USkeletalMeshComponent *this;
  UAnimInstance *this_00;
  FBoneContainer *this_01;
  UObject *pUVar5;
  TTransform<double> *pTVar6;
  double *pdVar7;
  undefined1 auStackY_3c8 [32];
  int local_388;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_380;
  FCurveFilterSettings local_370;
  FCSPose<FCompactPose> local_358;
  TArrayView<unsigned_short_const_,int> local_308;
  undefined1 local_2f8 [32];
  TTransform<double> local_2d8;
  TTransform<double> local_278;
  TTransform<double> local_218;
  FBoneContainer local_1b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  this = (USkeletalMeshComponent *)(**(code **)(param_1->_padding_ + 0x2b8))(param_1);
  if ((this != (USkeletalMeshComponent *)0x0) &&
     (this_00 = USkeletalMeshComponent::GetAnimInstance(this), this_00 != (UAnimInstance *)0x0)) {
    this_01 = UAnimInstance::GetRequiredBones(this_00);
    local_388 = FBoneContainer::GetPoseBoneIndexForBoneName(this_01,param_4);
    if (local_388 != -1) {
      local_388 = local_388 << 0x10;
      local_380.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_380.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,2,0,&local_380.AllocatorInstance,2,&local_380.ArrayMax);
      *(int *)local_380.AllocatorInstance.Data = local_388;
      FReferenceSkeleton::EnsureParentsExistAndSort(this_01->RefSkeleton,&local_380);
      pUVar5 = FWeakObjectPtr::Get(&(this_01->Asset).WeakPtr);
      local_308.ArrayNum = local_380.ArrayNum;
      local_308.DataPtr = (ushort *)local_380.AllocatorInstance.Data;
      local_370.FilterCurves = (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
      local_370.FilterMode = DisallowAll;
      local_370.LODIndex = 0;
      if ((local_380.ArrayNum < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TTransform<double> *)(*pcVar1)();
        return pTVar6;
      }
      FBoneContainer::FBoneContainer(&local_1b8,&local_308,&local_370,pUVar5);
      local_358.Pose._0_8_ = 0;
      local_358.Pose._16_8_ = 0;
      local_358.ComponentSpaceFlags._0_8_ = 0;
      local_358.Pose._8_8_ = 0;
      local_358.ComponentSpaceFlags._8_8_ = 0;
      local_358.BoneMask._0_8_ = 0;
      local_358.BoneMask._8_8_ = 0;
      local_358.BonesToConvert.AllocatorInstance.Data = (FCompactPoseBoneIndex *)0x0;
      local_358.BonesToConvert.ArrayNum = 0;
      local_358.BonesToConvert.ArrayMax = 0;
      ExtractComponentSpacePose(param_2,&local_1b8,param_3,false,&local_358);
      pdVar7 = (double *)(**(code **)(param_1->_padding_ + 0x2d0))(param_1,local_2f8);
      dVar3 = pdVar7[3] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar2 = pdVar7[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      local_2d8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar3,0);
      local_2d8.Rotation.ZW.m128d_f64[0] =
           pdVar7[2] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      local_2d8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
      local_2d8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar2,0);
      local_2d8.Rotation.XY.m128d_f64[0] =
           *pdVar7 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      local_2d8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar2 >> 0x20);
      local_2d8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_2d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_2d8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_2d8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_2d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_2d8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_2d8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_2d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_2d8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_2d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_2d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_2d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      pTVar6 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                         (&local_358,(FCompactPoseBoneIndex)0x0);
      local_218.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_218.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_218.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_218.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_218.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_218.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_218.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_218.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_218.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_218.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_218.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_218.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_218.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_218.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_218.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_218.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_218.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_218.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_218,&local_2d8,pTVar6);
      pTVar6 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                         (&local_358,(FCompactPoseBoneIndex)0x1);
      local_278.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_278.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_278.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_278.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_278.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_278.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_278.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_278.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_278.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_278.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_278.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_278.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_278.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_278.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_278.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_278.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_278.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_278.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_278,&local_2d8,pTVar6);
      UE::Math::TTransform<double>::GetRelativeTransform
                (&local_218,__return_storage_ptr__,&local_278);
      FBoneContainer::~FBoneContainer(&local_1b8);
      if (local_380.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_380.AllocatorInstance.Data);
      return __return_storage_ptr__;
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
  return __return_storage_ptr__;
}

// ExtractBoneTransformFromAnimationAtTime @ 14cf0cf30

void __cdecl
UMotionWarpingUtilities::ExtractBoneTransformFromAnimationAtTime
          (UAnimInstance *param_1,UAnimSequenceBase *param_2,float param_3,bool param_4,
          FName param_5,bool param_6,TTransform<double> *param_7)

{
  double *pdVar1;
  undefined4 *puVar2;
  code *pcVar3;
  double dVar4;
  TTransform<double> *pTVar5;
  bool bVar6;
  FCompactPoseBoneIndex FVar7;
  uint *puVar8;
  FTlsAutoCleanup *pFVar9;
  FBoneContainer *pFVar10;
  TTransform<double> *pTVar11;
  longlong lVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  FMemMark local_c8;
  FCompactPose local_a0;
  FCSPose<FCompactPose> local_88;
  code *local_38;
  TTransform<double> **local_30;
  
  pTVar5 = param_7;
  *&(param_7->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(param_7->Rotation).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(param_7->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(param_7->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(param_7->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(param_7->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  if ((param_1 != (UAnimInstance *)0x0) && (param_2 != (UAnimSequenceBase *)0x0)) {
    puVar8 = TThreadSingleton<FMemStack>::GetTlsSlot();
    local_30 = &param_7;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar9 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar8);
    local_c8.Mem = (FMemStackBase *)(pFVar9 + 2);
    local_c8.Top = (local_c8.Mem)->Top;
    local_c8.SavedChunk = *(FTaggedMemory **)(pFVar9 + 4);
    local_c8.bPopped = false;
    local_c8.NextTopmostMark = *(FMemMark **)(pFVar9 + 5);
    pFVar9[5] = (FTlsAutoCleanup)&local_c8;
    *(int *)(pFVar9 + 6) = *(int *)(pFVar9 + 6) + 1;
    pFVar10 = UAnimInstance::GetRequiredBones(param_1);
    FVar7 = (FCompactPoseBoneIndex)FBoneContainer::GetPoseBoneIndexForBoneName(pFVar10,&param_5);
    if (FVar7 != (FCompactPoseBoneIndex)0xffffffff) {
      if (param_6) {
        local_a0._0_8_ = 0;
        local_a0._8_8_ = 0;
        local_a0._16_8_ = 0;
        pFVar10 = UAnimInstance::GetRequiredBones(param_1);
        ExtractLocalSpacePose(param_2,pFVar10,param_3,param_4,&local_a0);
        uVar13 = 0;
        if ((int)FVar7 < (int)local_a0._8_4_) {
          uVar13 = ~(uint)FVar7 >> 0x1f;
        }
        if (uVar13 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        lVar12 = (longlong)(int)FVar7 * 0x60;
        dVar4 = ((double *)(lVar12 + local_a0._0_8_))[1];
        (pTVar5->Rotation).XY.m128d_f64[0] = *(double *)(lVar12 + local_a0._0_8_);
        (pTVar5->Rotation).XY.m128d_f64[1] = dVar4;
        pdVar1 = (double *)(lVar12 + 0x10 + local_a0._0_8_);
        dVar4 = pdVar1[1];
        (pTVar5->Rotation).ZW.m128d_f64[0] = *pdVar1;
        (pTVar5->Rotation).ZW.m128d_f64[1] = dVar4;
        pdVar1 = (double *)(lVar12 + 0x20 + local_a0._0_8_);
        dVar4 = pdVar1[1];
        (pTVar5->Translation).XY.m128d_f64[0] = *pdVar1;
        (pTVar5->Translation).XY.m128d_f64[1] = dVar4;
        pdVar1 = (double *)(lVar12 + 0x30 + local_a0._0_8_);
        dVar4 = pdVar1[1];
        (pTVar5->Translation).ZW.m128d_f64[0] = *pdVar1;
        (pTVar5->Translation).ZW.m128d_f64[1] = dVar4;
        pdVar1 = (double *)(lVar12 + 0x40 + local_a0._0_8_);
        dVar4 = pdVar1[1];
        (pTVar5->Scale3D).XY.m128d_f64[0] = *pdVar1;
        (pTVar5->Scale3D).XY.m128d_f64[1] = dVar4;
        puVar2 = (undefined4 *)(lVar12 + 0x50 + local_a0._0_8_);
        uVar14 = *puVar2;
        uVar15 = puVar2[1];
        uVar16 = puVar2[2];
        uVar17 = puVar2[3];
      }
      else {
        local_88.Pose._0_8_ = 0;
        local_88.Pose._16_8_ = 0;
        local_88.ComponentSpaceFlags._0_8_ = 0;
        local_88.Pose._8_8_ = 0;
        local_88.ComponentSpaceFlags._8_8_ = 0;
        local_88.BoneMask._0_8_ = 0;
        local_88.BoneMask._8_8_ = 0;
        local_88.BonesToConvert.AllocatorInstance.Data = (FCompactPoseBoneIndex *)0x0;
        local_88.BonesToConvert.ArrayNum = 0;
        local_88.BonesToConvert.ArrayMax = 0;
        pFVar10 = UAnimInstance::GetRequiredBones(param_1);
        ExtractComponentSpacePose(param_2,pFVar10,param_3,param_4,&local_88);
        pTVar11 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&local_88,FVar7);
        dVar4 = (pTVar11->Rotation).XY.m128d_f64[1];
        (pTVar5->Rotation).XY.m128d_f64[0] = (pTVar11->Rotation).XY.m128d_f64[0];
        (pTVar5->Rotation).XY.m128d_f64[1] = dVar4;
        dVar4 = (pTVar11->Rotation).ZW.m128d_f64[1];
        (pTVar5->Rotation).ZW.m128d_f64[0] = (pTVar11->Rotation).ZW.m128d_f64[0];
        (pTVar5->Rotation).ZW.m128d_f64[1] = dVar4;
        dVar4 = (pTVar11->Translation).XY.m128d_f64[1];
        (pTVar5->Translation).XY.m128d_f64[0] = (pTVar11->Translation).XY.m128d_f64[0];
        (pTVar5->Translation).XY.m128d_f64[1] = dVar4;
        dVar4 = (pTVar11->Translation).ZW.m128d_f64[1];
        (pTVar5->Translation).ZW.m128d_f64[0] = (pTVar11->Translation).ZW.m128d_f64[0];
        (pTVar5->Translation).ZW.m128d_f64[1] = dVar4;
        dVar4 = (pTVar11->Scale3D).XY.m128d_f64[1];
        (pTVar5->Scale3D).XY.m128d_f64[0] = (pTVar11->Scale3D).XY.m128d_f64[0];
        (pTVar5->Scale3D).XY.m128d_f64[1] = dVar4;
        uVar14 = *(undefined4 *)(pTVar11->Scale3D).ZW.m128d_f64;
        uVar15 = *(undefined4 *)((longlong)(pTVar11->Scale3D).ZW.m128d_f64 + 4);
        uVar16 = *(undefined4 *)((pTVar11->Scale3D).ZW.m128d_f64 + 1);
        uVar17 = *(undefined4 *)((longlong)(pTVar11->Scale3D).ZW.m128d_f64 + 0xc);
      }
      *(undefined4 *)(pTVar5->Scale3D).ZW.m128d_f64 = uVar14;
      *(undefined4 *)((longlong)(pTVar5->Scale3D).ZW.m128d_f64 + 4) = uVar15;
      *(undefined4 *)((pTVar5->Scale3D).ZW.m128d_f64 + 1) = uVar16;
      *(undefined4 *)((longlong)(pTVar5->Scale3D).ZW.m128d_f64 + 0xc) = uVar17;
    }
    if (local_c8.bPopped == false) {
      if ((local_c8.Mem)->TopMark != &local_c8) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mem.TopMark == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                           ,0x215,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_c8.bPopped = true;
      (local_c8.Mem)->NumMarks = (local_c8.Mem)->NumMarks + -1;
      if (local_c8.SavedChunk != (local_c8.Mem)->TopChunk) {
        FMemStackBase::FreeChunks(local_c8.Mem,local_c8.SavedChunk);
      }
      (local_c8.Mem)->Top = local_c8.Top;
      (local_c8.Mem)->TopMark = local_c8.NextTopmostMark;
    }
  }
  return;
}

// ExtractComponentSpacePose @ 14cf0d220

void __cdecl
UMotionWarpingUtilities::ExtractComponentSpacePose
          (UAnimSequenceBase *param_1,FBoneContainer *param_2,float param_3,bool param_4,
          FCSPose<FCompactPose> *param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined1 local_28 [16];
  FBoneContainer *local_18;
  
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_18 = (FBoneContainer *)0x0;
  ExtractLocalSpacePose(param_1,param_2,param_3,param_4,(FCompactPose *)local_28);
  FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer
            ((FBaseCompactPose<TMemStackAllocator<0>_> *)param_5,local_18);
  if (param_5 != (FCSPose<FCompactPose> *)local_28) {
    *(undefined8 *)&param_5->Pose = local_28._0_8_;
    *(undefined4 *)&(param_5->Pose).field_0x8 = local_28._8_4_;
    *(undefined4 *)&(param_5->Pose).field_0xc = local_28._12_4_;
    local_28._8_8_ = 0;
    local_28._0_8_ = 0;
  }
  uVar3 = *(uint *)&(param_5->Pose).field_0x8;
  local_18 = (FBoneContainer *)0x0;
  if (-1 < (int)uVar3) {
    puVar1 = &(param_5->ComponentSpaceFlags).field_0xc;
    puVar2 = &(param_5->ComponentSpaceFlags).field_0x8;
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)puVar1 != uVar3) {
      UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<unsigned_char>_>
                (1,1,uVar3,(ForElementType<unsigned_char> *)&param_5->ComponentSpaceFlags,0,
                 (int *)puVar1);
    }
    iVar4 = *(int *)&(param_5->Pose).field_0x8;
    iVar7 = UE::Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<unsigned_char>_>
                      (1,1,iVar4,(ForElementType<unsigned_char> *)&param_5->ComponentSpaceFlags,
                       (int *)puVar2,(int *)puVar1);
    memset((void *)((longlong)iVar7 + *(longlong *)&param_5->ComponentSpaceFlags),0,(longlong)iVar4)
    ;
    if (*(int *)puVar2 < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    **(undefined1 **)&param_5->ComponentSpaceFlags = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// ExtractLocalSpacePose @ 14cf0d370

void __cdecl
UMotionWarpingUtilities::ExtractLocalSpacePose
          (UAnimSequenceBase *param_1,FBoneContainer *param_2,float param_3,bool param_4,
          FCompactPose *param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *local_e8;
  undefined8 local_e0;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_d8;
  undefined8 local_d0;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  FAnimExtractContext local_a8;
  FBlendedCurve local_58;
  FAnimationPoseData local_38 [2];
  
  FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer
            ((FBaseCompactPose<TMemStackAllocator<0>_> *)param_5,param_2);
  local_58._0_8_ = 0;
  local_58._8_8_ = 0;
  local_58._16_1_ = 0;
  local_58._24_8_ = 0;
  FBlendedCurve::InitFrom(&local_58,param_2);
  local_a8.DeltaTimeRecord.bPreviousIsValid = false;
  local_a8.CurrentTime = (double)param_3;
  local_a8.DeltaTimeRecord._9_2_ = 0;
  local_a8.DeltaTimeRecord._11_1_ = 0;
  local_a8.bLooping = false;
  local_a8.DeltaTimeRecord.Delta = 0.0;
  local_a8.DeltaTimeRecord.Previous = 0.0;
  local_a8.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.PoseCurves.ArrayNum = 0;
  local_a8.PoseCurves.ArrayMax = 0;
  local_a8.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.BonesRequired.ArrayNum = 0;
  local_a8.BonesRequired.ArrayMax = 0;
  local_a8.InterpolationOverride.bIsSet = false;
  local_e8 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_e0 = 0;
  local_d8 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_d0 = 0;
  local_c8 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)0x0;
  local_c0 = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8.bExtractRootMotion = param_4;
  FAnimationPoseData::FAnimationPoseData
            (local_38,param_5,&local_58,(FStackAttributeContainer *)&local_e8);
  if (param_1 != (UAnimSequenceBase *)0x0) {
    pUVar4 = Z_Construct_UClass_UAnimSequence_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) {
      if (param_1 != (UAnimSequenceBase *)0x0) {
        pUVar4 = Z_Construct_UClass_UAnimMontage_NoRegister();
        iVar1 = (int)pUVar4->_padding_;
        if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar4->_padding_)) {
          if ((int)param_1[2]._padding_ < 1) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          FAnimTrack::GetAnimationPose((FAnimTrack *)(param_1[2]._padding_ + 8),local_38,&local_a8);
        }
      }
    }
    else {
      UAnimSequence::GetBonePose((UAnimSequence *)param_1,local_38,&local_a8,false);
    }
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (local_c8,(int)local_c0);
  if (local_c8 !=
      (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FMemory::Free(local_c8);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (local_d8,(int)local_d0);
  if (local_d8 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_d8);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_e8,(int)local_e0);
  if (local_e8 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_e8);
  }
  if (local_a8.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.BonesRequired.AllocatorInstance.Data);
  }
  if (local_a8.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.PoseCurves.AllocatorInstance.Data);
  }
  return;
}

// ExtractRootMotionFromAnimation @ 14cf0e200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __cdecl
UMotionWarpingUtilities::ExtractRootMotionFromAnimation
          (TTransform<double> *__return_storage_ptr__,UAnimSequenceBase *param_1,float param_2,
          float param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  TTransform<double> *pTVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  UAnimSequence *pUVar8;
  undefined1 auStackY_298 [32];
  undefined1 local_268 [8];
  TArray<FRootMotionExtractionStep,TSizedDefaultAllocator<32>_> local_260;
  undefined4 local_248;
  undefined4 local_238;
  FAnimExtractContext local_230;
  FAnimExtractContext local_1e8;
  char local_198;
  undefined4 local_194;
  undefined1 local_188 [72];
  double dStack_140;
  __m128d local_138;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_298;
  if (param_1 == (UAnimSequenceBase *)0x0) {
LAB_14cf0e26c:
    pUVar8 = (UAnimSequence *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UAnimMontage_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       (pUVar8 = (UAnimSequence *)param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       != &pUVar4->_padding_)) goto LAB_14cf0e26c;
  }
  if (pUVar8 != (UAnimSequence *)0x0) {
    local_198 = '\0';
    local_194 = 0;
    local_188._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_188._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_188._12_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_188._24_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_188._16_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_188._28_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_188._40_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_188._32_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_188._44_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_188._56_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_188._48_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_188._60_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    unique0x100003ec = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_188._64_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    unique0x100003f0 =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_138.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_138.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_138.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    if (0 < (pUVar8->RetargetSourceAssetReferencePose).ArrayNum) {
      if (((pUVar8->RetargetSourceAssetReferencePose).ArrayNum < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TTransform<double> *)(*pcVar2)();
        return pTVar5;
      }
      local_260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_260.ArrayNum = 0;
      local_260.ArrayMax = 0;
      FAnimTrack::GetRootMotionExtractionStepsForTrackRange
                ((FAnimTrack *)
                 ((pUVar8->RetargetSourceAssetReferencePose).AllocatorInstance.Data + 8),&local_260,
                 param_2,param_3);
      iVar1 = local_260.ArrayNum;
      pFVar7 = local_260.AllocatorInstance.Data + (longlong)local_260.ArrayNum * 0x10;
      FVar6.Data = local_260.AllocatorInstance.Data;
      while( true ) {
        if (local_260.ArrayNum != iVar1) {
          `TCheckedPointerIterator<FRootMotionExtractionStep,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_268);
        }
        if (FVar6.Data == pFVar7) break;
        if (*(UAnimSequence **)FVar6.Data != (UAnimSequence *)0x0) {
          local_248 = 0;
          local_230.bExtractRootMotion = false;
          local_230.DeltaTimeRecord.Delta = 0.0;
          local_230.DeltaTimeRecord.Previous = 0.0;
          local_230.DeltaTimeRecord.bPreviousIsValid = false;
          local_230.DeltaTimeRecord._9_2_ = 0;
          local_230.DeltaTimeRecord._11_1_ = 0;
          local_230.bLooping = false;
          local_230.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_230.PoseCurves.ArrayNum = 0;
          local_230.PoseCurves.ArrayMax = 0;
          local_230.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_230.BonesRequired.ArrayNum = 0;
          local_230.BonesRequired.ArrayMax = 0;
          local_230.InterpolationOverride.bIsSet = false;
          local_230.CurrentTime = 0.0;
          pTVar5 = UAnimSequence::ExtractRootMotionFromRange
                             (*(UAnimSequence **)FVar6.Data,&local_c8,
                              (double)*(float *)(FVar6.Data + 8),
                              (double)*(float *)(FVar6.Data + 0xc),&local_230);
          if (local_198 == '\0') {
            local_198 = '\x01';
            local_188._0_16_ = *(undefined1 (*) [16])(pTVar5->Rotation).XY.m128d_f64;
            local_188._16_16_ = *(undefined1 (*) [16])(pTVar5->Rotation).ZW.m128d_f64;
            local_188._32_16_ = *(undefined1 (*) [16])(pTVar5->Translation).XY.m128d_f64;
            local_194 = 0x3f800000;
            local_188._48_4_ = *(undefined4 *)(pTVar5->Translation).ZW.m128d_f64;
            local_188._52_4_ = *(undefined4 *)((longlong)(pTVar5->Translation).ZW.m128d_f64 + 4);
            local_188._56_4_ = *(undefined4 *)((pTVar5->Translation).ZW.m128d_f64 + 1);
            local_188._60_4_ = *(undefined4 *)((longlong)(pTVar5->Translation).ZW.m128d_f64 + 0xc);
          }
          else {
            local_128.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_128.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_128.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_128.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_128.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_128.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_128.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_128.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_128.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_128.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_128.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_128.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_128.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_128.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_128.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_128.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_128.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_128.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            UE::Math::TTransform<double>::Multiply
                      (&local_128,pTVar5,(TTransform<double> *)local_188);
            local_188._0_8_ = local_128.Rotation.XY.m128d_f64[0];
            local_188._8_8_ = local_128.Rotation.XY.m128d_f64[1];
            local_188._16_8_ = local_128.Rotation.ZW.m128d_f64[0];
            local_188._24_8_ = local_128.Rotation.ZW.m128d_f64[1];
            local_188._32_8_ = local_128.Translation.XY.m128d_f64[0];
            local_188._40_8_ = local_128.Translation.XY.m128d_f64[1];
            local_188._48_4_ = local_128.Translation.ZW.m128d_f64[0]._0_4_;
            local_188._52_4_ = local_128.Translation.ZW.m128d_f64[0]._4_4_;
            local_188._56_4_ = local_128.Translation.ZW.m128d_f64[1]._0_4_;
            local_188._60_4_ = local_128.Translation.ZW.m128d_f64[1]._4_4_;
          }
          dStack_140 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Y;
          local_188._64_8_ = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.X;
          local_138.m128d_f64[1] = 0.0;
          local_138.m128d_f64[0] = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Z;
          if (local_230.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_230.BonesRequired.AllocatorInstance.Data);
          }
          if (local_230.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_230.PoseCurves.AllocatorInstance.Data);
          }
        }
        FVar6.Data = FVar6.Data + 0x10;
      }
      if (local_260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.AllocatorInstance.Data);
      }
    }
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (double)local_188._0_8_;
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)local_188._8_8_;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)local_188._16_8_;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)local_188._24_8_;
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (double)local_188._32_8_;
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)local_188._40_8_;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)local_188._48_8_;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)local_188._56_8_;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (double)local_188._64_8_;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dStack_140;
    goto LAB_14cf0e617;
  }
  if (param_1 == (UAnimSequenceBase *)0x0) {
LAB_14cf0e544:
    param_1 = (UAnimSequenceBase *)(UAnimSequence *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UAnimSequence_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) goto LAB_14cf0e544;
  }
  if ((UAnimSequence *)param_1 != (UAnimSequence *)0x0) {
    local_1e8.bLooping = false;
    local_238 = 0;
    local_1e8.bExtractRootMotion = false;
    local_1e8.DeltaTimeRecord.bPreviousIsValid = false;
    local_1e8.DeltaTimeRecord._9_2_ = 0;
    local_1e8.DeltaTimeRecord._11_1_ = 0;
    local_1e8.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.PoseCurves.ArrayNum = 0;
    local_1e8.PoseCurves.ArrayMax = 0;
    local_1e8.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.BonesRequired.ArrayNum = 0;
    local_1e8.BonesRequired.ArrayMax = 0;
    local_1e8.InterpolationOverride.bIsSet = false;
    local_1e8.CurrentTime = 0.0;
    local_1e8.DeltaTimeRecord.Delta = 0.0;
    local_1e8.DeltaTimeRecord.Previous = 0.0;
    UAnimSequence::ExtractRootMotionFromRange
              ((UAnimSequence *)param_1,__return_storage_ptr__,(double)param_2,(double)param_3,
               &local_1e8);
    if (local_1e8.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.BonesRequired.AllocatorInstance.Data);
    }
    if (local_1e8.PoseCurves.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_1e8.PoseCurves.AllocatorInstance.Data);
    return __return_storage_ptr__;
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
  local_138.m128d_f64[0]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
  local_138.m128d_f64[0]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
  local_138.m128d_f64[1]._0_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
  local_138.m128d_f64[1]._4_4_ =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
LAB_14cf0e617:
  *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = local_138.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) =
       local_138.m128d_f64[0]._4_4_;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) = local_138.m128d_f64[1]._0_4_
  ;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) =
       local_138.m128d_f64[1]._4_4_;
  return __return_storage_ptr__;
}

// ExtractRootTransformFromAnimation @ 14cf0e780

TTransform<double> * __cdecl
UMotionWarpingUtilities::ExtractRootTransformFromAnimation
          (TTransform<double> *__return_storage_ptr__,UAnimSequenceBase *param_1,float param_2)

{
  int iVar1;
  UAnimSequence *this;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  TTransform<double> *pTVar5;
  FAnimSegment *this_00;
  ForAnyElementType FVar6;
  float fVar7;
  float local_res18 [4];
  FAnimExtractContext local_b8;
  FAnimExtractContext local_70;
  
  local_res18[0] = param_2;
  if (param_1 != (UAnimSequenceBase *)0x0) {
    pUVar4 = Z_Construct_UClass_UAnimMontage_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      if (((int)param_1[2]._padding_ < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TTransform<double> *)(*pcVar2)();
        return pTVar5;
      }
      this_00 = FAnimTrack::GetSegmentAtTime
                          ((FAnimTrack *)(param_1[2]._padding_ + 8),local_res18[0]);
      if ((this_00 == (FAnimSegment *)0x0) ||
         ((this_00->AnimReference).field0_0x0.DebugPtr == (UAnimSequenceBase *)0x0))
      goto LAB_14cf0e9a5;
      pUVar4 = Z_Construct_UClass_UAnimSequence_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
      if ((!bVar3) ||
         (this = (UAnimSequence *)(this_00->AnimReference).field0_0x0.DebugPtr,
         this == (UAnimSequence *)0x0)) goto LAB_14cf0e9a5;
      fVar7 = FAnimSegment::ConvertTrackPosToAnimPos(this_00,local_res18);
      local_b8.DeltaTimeRecord._9_2_ = 0;
      local_b8.CurrentTime = (double)fVar7;
      local_b8.bExtractRootMotion = false;
      local_b8.DeltaTimeRecord.bPreviousIsValid = false;
      local_b8.DeltaTimeRecord._11_1_ = 0;
      local_b8.DeltaTimeRecord.Delta = 0.0;
      local_b8.DeltaTimeRecord.Previous = 0.0;
      local_b8.bLooping = false;
      local_b8.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.PoseCurves.ArrayNum = 0;
      local_b8.PoseCurves.ArrayMax = 0;
      local_b8.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.BonesRequired.ArrayNum = 0;
      local_b8.BonesRequired.ArrayMax = 0;
      local_b8.InterpolationOverride.bIsSet = false;
      UAnimSequence::ExtractRootTrackTransform
                (this,__return_storage_ptr__,&local_b8,(FBoneContainer *)0x0);
      FVar6.Data = local_b8.PoseCurves.AllocatorInstance.Data;
      if (local_b8.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.BonesRequired.AllocatorInstance.Data);
        FVar6.Data = local_b8.PoseCurves.AllocatorInstance.Data;
      }
      goto LAB_14cf0e999;
    }
  }
  if (param_1 == (UAnimSequenceBase *)0x0) {
LAB_14cf0e921:
    param_1 = (UAnimSequenceBase *)(UAnimSequence *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UAnimSequence_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) goto LAB_14cf0e921;
  }
  if ((UAnimSequence *)param_1 == (UAnimSequence *)0x0) {
LAB_14cf0e9a5:
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
    return __return_storage_ptr__;
  }
  local_70.bLooping = false;
  local_70.bExtractRootMotion = false;
  local_70.DeltaTimeRecord.bPreviousIsValid = false;
  local_70.CurrentTime = (double)local_res18[0];
  local_70.DeltaTimeRecord._9_2_ = 0;
  local_70.DeltaTimeRecord._11_1_ = 0;
  local_70.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.PoseCurves.ArrayNum = 0;
  local_70.PoseCurves.ArrayMax = 0;
  local_70.DeltaTimeRecord.Delta = 0.0;
  local_70.DeltaTimeRecord.Previous = 0.0;
  local_70.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.BonesRequired.ArrayNum = 0;
  local_70.BonesRequired.ArrayMax = 0;
  local_70.InterpolationOverride.bIsSet = false;
  UAnimSequence::ExtractRootTrackTransform
            ((UAnimSequence *)param_1,__return_storage_ptr__,&local_70,(FBoneContainer *)0x0);
  FVar6.Data = local_70.PoseCurves.AllocatorInstance.Data;
  if (local_70.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.BonesRequired.AllocatorInstance.Data);
    FVar6.Data = local_70.PoseCurves.AllocatorInstance.Data;
  }
LAB_14cf0e999:
  if (FVar6.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar6.Data);
  }
  return __return_storage_ptr__;
}

// GetMotionWarpingWindowsForWarpTargetFromAnimation @ 14cf0fa60

void __cdecl
UMotionWarpingUtilities::GetMotionWarpingWindowsForWarpTargetFromAnimation
          (UAnimSequenceBase *param_1,FName param_2,
          TArray<FMotionWarpingWindowData,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  TObjectPtr<UAnimNotifyState>_u_0 TVar2;
  TObjectPtr<UAnimNotifyState>_u_0 *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  FAnimNotifyEvent *this;
  longlong lVar10;
  uint uVar11;
  float fVar12;
  longlong local_res8;
  TObjectPtr<UAnimNotifyState>_u_0 local_38;
  undefined8 local_30;
  
  if ((param_1 != (UAnimSequenceBase *)0x0) && (param_2 != (FName)0x0)) {
    piVar1 = &param_3->ArrayMax;
    param_3->ArrayNum = 0;
    if (param_3->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_3->AllocatorInstance,0,piVar1);
    }
    uVar11 = 0;
    if (0 < (param_1->Notifies).ArrayNum) {
      local_res8 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar11 < (param_1->Notifies).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this = (FAnimNotifyEvent *)((param_1->Notifies).AllocatorInstance.Data + local_res8);
        if ((this->NotifyStateClass).field0_0x0.DebugPtr != (UAnimNotifyState *)0x0) {
          pUVar9 = UAnimNotifyState_MotionWarping::StaticClass();
          bVar6 = FObjectPtr::IsA((FObjectPtr *)&this->NotifyStateClass,pUVar9);
          if (((bVar6) &&
              (TVar2 = (TObjectPtr<UAnimNotifyState>_u_0)
                       (this->NotifyStateClass).field0_0x0.DebugPtr,
              TVar2.DebugPtr != (UAnimNotifyState *)0x0)) && (TVar2.DebugPtr[1]._padding_ != 0)) {
            pUVar9 = URootMotionModifier_Warp::StaticClass();
            bVar6 = FObjectPtr::IsA((FObjectPtr *)(TVar2.DebugPtr + 1),pUVar9);
            if (((bVar6) && (TVar2.DebugPtr[1]._padding_ != 0)) &&
               (*(FName *)(TVar2.DebugPtr[1]._padding_ + 0x170) == param_2)) {
              local_38.DebugPtr = (UAnimNotifyState *)0x0;
              local_30 = 0;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
              }
              local_38 = TVar2;
              fVar12 = FAnimNotifyEvent::GetTriggerTime(this);
              local_30 = CONCAT44(local_30._4_4_,fVar12);
              fVar12 = FAnimNotifyEvent::GetEndTriggerTime(this);
              pTVar3 = (TObjectPtr<UAnimNotifyState>_u_0 *)(param_3->AllocatorInstance).Data;
              local_30 = CONCAT44(fVar12,(undefined4)local_30);
              if (((pTVar3 <= &local_38) && (&local_38 < pTVar3 + (longlong)*piVar1 * 2)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar8 = param_3->ArrayNum;
              if (iVar8 == *piVar1) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&param_3->AllocatorInstance,piVar1);
              }
              pFVar4 = (param_3->AllocatorInstance).Data;
              lVar10 = (longlong)iVar8;
              param_3->ArrayNum = iVar8 + 1;
              ((TObjectPtr<UAnimNotifyState>_u_0 *)(pFVar4 + lVar10 * 0x10))->DebugPtr =
                   (UAnimNotifyState *)local_38;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_38.DebugPtr != (UAnimNotifyState *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)local_38.DebugPtr);
              }
              *(undefined4 *)(pFVar4 + lVar10 * 0x10 + 8) = (undefined4)local_30;
              *(undefined4 *)(pFVar4 + lVar10 * 0x10 + 0xc) = local_30._4_4_;
            }
          }
        }
        uVar11 = uVar11 + 1;
        local_res8 = local_res8 + 0xb8;
      } while ((int)uVar11 < (param_1->Notifies).ArrayNum);
    }
  }
  return;
}

// GetMotionWarpingWindowsFromAnimation @ 14cf0fd40

void __cdecl
UMotionWarpingUtilities::GetMotionWarpingWindowsFromAnimation
          (UAnimSequenceBase *param_1,
          TArray<FMotionWarpingWindowData,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TObjectPtr<UAnimNotifyState>_u_0 TVar2;
  TObjectPtr<UAnimNotifyState>_u_0 *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  FAnimNotifyEvent *this;
  ulonglong uVar13;
  float fVar14;
  TObjectPtr<UAnimNotifyState>_u_0 local_38;
  undefined8 local_30;
  
  if (param_1 != (UAnimSequenceBase *)0x0) {
    uVar12 = 0;
    piVar1 = &param_2->ArrayMax;
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
    }
    uVar13 = uVar12;
    if (0 < (param_1->Notifies).ArrayNum) {
      do {
        uVar11 = (uint)uVar12;
        uVar7 = 0;
        if ((int)uVar11 < (param_1->Notifies).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this = (FAnimNotifyEvent *)((param_1->Notifies).AllocatorInstance.Data + uVar13);
        if ((this->NotifyStateClass).field0_0x0.DebugPtr != (UAnimNotifyState *)0x0) {
          pUVar9 = UAnimNotifyState_MotionWarping::StaticClass();
          bVar6 = FObjectPtr::IsA((FObjectPtr *)&this->NotifyStateClass,pUVar9);
          if ((bVar6) &&
             (TVar2 = (TObjectPtr<UAnimNotifyState>_u_0)(this->NotifyStateClass).field0_0x0.DebugPtr
             , TVar2.DebugPtr != (UAnimNotifyState *)0x0)) {
            local_38.DebugPtr = (UAnimNotifyState *)0x0;
            local_30 = 0;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
            }
            local_38 = TVar2;
            fVar14 = FAnimNotifyEvent::GetTriggerTime(this);
            local_30 = CONCAT44(local_30._4_4_,fVar14);
            fVar14 = FAnimNotifyEvent::GetEndTriggerTime(this);
            pTVar3 = (TObjectPtr<UAnimNotifyState>_u_0 *)(param_2->AllocatorInstance).Data;
            local_30 = CONCAT44(fVar14,(undefined4)local_30);
            if (((pTVar3 <= &local_38) && (&local_38 < pTVar3 + (longlong)*piVar1 * 2)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar8 = param_2->ArrayNum;
            if (iVar8 == *piVar1) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&param_2->AllocatorInstance,piVar1);
            }
            pFVar4 = (param_2->AllocatorInstance).Data;
            lVar10 = (longlong)iVar8;
            param_2->ArrayNum = iVar8 + 1;
            ((TObjectPtr<UAnimNotifyState>_u_0 *)(pFVar4 + lVar10 * 0x10))->DebugPtr =
                 (UAnimNotifyState *)local_38;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_38.DebugPtr != (UAnimNotifyState *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_38.DebugPtr);
            }
            *(undefined4 *)(pFVar4 + lVar10 * 0x10 + 8) = (undefined4)local_30;
            *(undefined4 *)(pFVar4 + lVar10 * 0x10 + 0xc) = local_30._4_4_;
          }
        }
        uVar12 = (ulonglong)(uVar11 + 1);
        uVar13 = uVar13 + 0xb8;
      } while ((int)(uVar11 + 1) < (param_1->Notifies).ArrayNum);
    }
  }
  return;
}

// GetPrivateStaticClass @ 14cf10990

UClass * __cdecl UMotionWarpingUtilities::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionWarpingUtilities.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"MotionWarpingUtilities",
               &Z_Registration_Info_UClass_UMotionWarpingUtilities.InnerSingleton,
               StaticRegisterNativesUMotionWarpingUtilities,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMotionWarpingUtilities>,
               InternalVTableHelperCtorCaller<UMotionWarpingUtilities>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionWarpingUtilities.InnerSingleton;
}

// StaticRegisterNativesUMotionWarpingUtilities @ 14cf1bf00

void __cdecl UMotionWarpingUtilities::StaticRegisterNativesUMotionWarpingUtilities(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UMotionWarpingUtilities_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execExtractBoneTransformFromAnimationAtTime @ 14cf22880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMotionWarpingUtilities::execExtractBoneTransformFromAnimationAtTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  double *pdVar1;
  undefined4 *puVar2;
  FProperty *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  UAnimSequenceBase *pUVar18;
  UAnimInstance *this;
  FCompactPoseBoneIndex FVar19;
  uint *puVar20;
  FTlsAutoCleanup *pFVar21;
  FBoneContainer *pFVar22;
  TTransform<double> *pTVar23;
  longlong lVar24;
  double (*padVar25) [2];
  uint uVar26;
  bool bVar27;
  bool bVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auStackY_1a8 [32];
  undefined1 local_178 [4];
  int local_174;
  int local_170;
  float local_16c;
  FName local_168;
  UAnimSequenceBase *local_160;
  UAnimInstance *local_158;
  FMemMark local_150;
  FCompactPose local_128;
  FName local_110;
  FCSPose<FCompactPose> local_108;
  code *local_b8;
  undefined1 *local_b0;
  double local_a8 [2];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_158 = (UAnimInstance *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  local_160 = (UAnimSequenceBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_160,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_160);
  }
  local_16c = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_16c,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_16c);
  }
  local_174 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_174,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_174);
  }
  bVar27 = local_174 != 0;
  local_168.ComparisonIndex.Value = 0;
  local_168.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  local_170 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_170,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_170);
  }
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar14 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar15 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar16 = GlobalVectorConstants::Float1110.m128_f32[3];
  bVar28 = local_170 == 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_a8[1]._0_4_ = SUB84((double)fVar8,0);
  local_a8[0] = (double)fVar5;
  local_a8[1]._4_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  local_98._8_4_ = SUB84((double)fVar14,0);
  local_98._0_8_ = (double)fVar11;
  local_98._12_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
  local_88._8_4_ = SUB84((double)fVar9,0);
  local_88._0_8_ = (double)fVar6;
  local_88._12_4_ = (int)((ulonglong)(double)fVar9 >> 0x20);
  local_78._8_4_ = SUB84((double)fVar15,0);
  local_78._0_8_ = (double)fVar12;
  local_78._12_4_ = (int)((ulonglong)(double)fVar15 >> 0x20);
  local_68._8_4_ = SUB84((double)fVar10,0);
  local_68._0_8_ = (double)fVar7;
  local_68._12_4_ = (int)((ulonglong)(double)fVar10 >> 0x20);
  local_58._8_4_ = SUB84((double)fVar16,0);
  local_58._0_8_ = (double)fVar13;
  local_58._12_4_ = (int)((ulonglong)(double)fVar16 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  this = local_158;
  pUVar18 = local_160;
  fVar5 = local_16c;
  padVar25 = &local_a8;
  if ((double (*) [2])param_2->MostRecentPropertyAddress != (double (*) [2])0x0) {
    padVar25 = (double (*) [2])param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *padVar25 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  padVar25[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  padVar25[2] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  padVar25[3] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  padVar25[4] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  padVar25[5] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_110 = local_168;
  if ((local_158 != (UAnimInstance *)0x0) && (local_160 != (UAnimSequenceBase *)0x0)) {
    puVar20 = TThreadSingleton<FMemStack>::GetTlsSlot();
    local_b0 = local_178;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar21 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_b8,puVar20);
    local_150.Mem = (FMemStackBase *)(pFVar21 + 2);
    local_150.Top = (local_150.Mem)->Top;
    local_150.SavedChunk = *(FTaggedMemory **)(pFVar21 + 4);
    local_150.bPopped = false;
    local_150.NextTopmostMark = *(FMemMark **)(pFVar21 + 5);
    pFVar21[5] = (FTlsAutoCleanup)&local_150;
    *(int *)(pFVar21 + 6) = *(int *)(pFVar21 + 6) + 1;
    pFVar22 = UAnimInstance::GetRequiredBones(this);
    FVar19 = (FCompactPoseBoneIndex)FBoneContainer::GetPoseBoneIndexForBoneName(pFVar22,&local_110);
    if (FVar19 != (FCompactPoseBoneIndex)0xffffffff) {
      if (bVar28) {
        local_108.Pose._0_8_ = 0;
        local_108.Pose._16_8_ = 0;
        local_108.ComponentSpaceFlags._0_8_ = 0;
        local_108.Pose._8_8_ = 0;
        local_108.ComponentSpaceFlags._8_8_ = 0;
        local_108.BoneMask._0_8_ = 0;
        local_108.BoneMask._8_8_ = 0;
        local_108.BonesToConvert.AllocatorInstance.Data = (FCompactPoseBoneIndex *)0x0;
        local_108.BonesToConvert.ArrayNum = 0;
        local_108.BonesToConvert.ArrayMax = 0;
        pFVar22 = UAnimInstance::GetRequiredBones(this);
        ExtractComponentSpacePose(pUVar18,pFVar22,fVar5,bVar27,&local_108);
        pTVar23 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&local_108,FVar19);
        dVar17 = (pTVar23->Rotation).XY.m128d_f64[1];
        (*padVar25)[0] = (pTVar23->Rotation).XY.m128d_f64[0];
        (*padVar25)[1] = dVar17;
        dVar17 = (pTVar23->Rotation).ZW.m128d_f64[1];
        padVar25[1][0] = (pTVar23->Rotation).ZW.m128d_f64[0];
        padVar25[1][1] = dVar17;
        dVar17 = (pTVar23->Translation).XY.m128d_f64[1];
        padVar25[2][0] = (pTVar23->Translation).XY.m128d_f64[0];
        padVar25[2][1] = dVar17;
        dVar17 = (pTVar23->Translation).ZW.m128d_f64[1];
        padVar25[3][0] = (pTVar23->Translation).ZW.m128d_f64[0];
        padVar25[3][1] = dVar17;
        dVar17 = (pTVar23->Scale3D).XY.m128d_f64[1];
        padVar25[4][0] = (pTVar23->Scale3D).XY.m128d_f64[0];
        padVar25[4][1] = dVar17;
        uVar29 = *(undefined4 *)(pTVar23->Scale3D).ZW.m128d_f64;
        uVar30 = *(undefined4 *)((longlong)(pTVar23->Scale3D).ZW.m128d_f64 + 4);
        uVar31 = *(undefined4 *)((pTVar23->Scale3D).ZW.m128d_f64 + 1);
        uVar32 = *(undefined4 *)((longlong)(pTVar23->Scale3D).ZW.m128d_f64 + 0xc);
      }
      else {
        local_128._0_8_ = 0;
        local_128._8_8_ = 0;
        local_128._16_8_ = 0;
        pFVar22 = UAnimInstance::GetRequiredBones(this);
        ExtractLocalSpacePose(pUVar18,pFVar22,fVar5,bVar27,&local_128);
        uVar26 = 0;
        if ((int)FVar19 < (int)local_128._8_4_) {
          uVar26 = ~(uint)FVar19 >> 0x1f;
        }
        if (uVar26 == 0) {
          bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar27) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        lVar24 = (longlong)(int)FVar19 * 0x60;
        dVar17 = ((double *)(lVar24 + local_128._0_8_))[1];
        (*padVar25)[0] = *(double *)(lVar24 + local_128._0_8_);
        (*padVar25)[1] = dVar17;
        pdVar1 = (double *)(lVar24 + 0x10 + local_128._0_8_);
        dVar17 = pdVar1[1];
        padVar25[1][0] = *pdVar1;
        padVar25[1][1] = dVar17;
        pdVar1 = (double *)(lVar24 + 0x20 + local_128._0_8_);
        dVar17 = pdVar1[1];
        padVar25[2][0] = *pdVar1;
        padVar25[2][1] = dVar17;
        pdVar1 = (double *)(lVar24 + 0x30 + local_128._0_8_);
        dVar17 = pdVar1[1];
        padVar25[3][0] = *pdVar1;
        padVar25[3][1] = dVar17;
        pdVar1 = (double *)(lVar24 + 0x40 + local_128._0_8_);
        dVar17 = pdVar1[1];
        padVar25[4][0] = *pdVar1;
        padVar25[4][1] = dVar17;
        puVar2 = (undefined4 *)(lVar24 + 0x50 + local_128._0_8_);
        uVar29 = *puVar2;
        uVar30 = puVar2[1];
        uVar31 = puVar2[2];
        uVar32 = puVar2[3];
      }
      *(undefined4 *)padVar25[5] = uVar29;
      *(undefined4 *)((longlong)padVar25[5] + 4) = uVar30;
      *(undefined4 *)(padVar25[5] + 1) = uVar31;
      *(undefined4 *)((longlong)padVar25[5] + 0xc) = uVar32;
    }
    if (local_150.bPopped == false) {
      if ((local_150.Mem)->TopMark != &local_150) {
        bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L"");
        if (bVar27) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      local_150.bPopped = true;
      (local_150.Mem)->NumMarks = (local_150.Mem)->NumMarks + -1;
      if (local_150.SavedChunk != (local_150.Mem)->TopChunk) {
        FMemStackBase::FreeChunks(local_150.Mem,local_150.SavedChunk);
      }
      (local_150.Mem)->Top = local_150.Top;
      (local_150.Mem)->TopMark = local_150.NextTopmostMark;
    }
  }
  return;
}

// execExtractRootMotionFromAnimation @ 14cf22dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMotionWarpingUtilities::execExtractRootMotionFromAnimation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TTransform<double> *pTVar3;
  undefined1 auStack_a8 [32];
  float local_88;
  float local_84;
  UAnimSequenceBase *local_80;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_80 = (UAnimSequenceBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_84 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_84,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_84);
  }
  local_88 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = ExtractRootMotionFromAnimation(&local_78,local_80,local_84,local_88);
  dVar2 = (pTVar3->Rotation).XY.m128d_f64[1];
  *(double *)param_3 = (pTVar3->Rotation).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 8) = dVar2;
  dVar2 = (pTVar3->Rotation).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x10) = (pTVar3->Rotation).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x18) = dVar2;
  dVar2 = (pTVar3->Translation).XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x20) = (pTVar3->Translation).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x28) = dVar2;
  dVar2 = (pTVar3->Translation).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x30) = (pTVar3->Translation).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x38) = dVar2;
  dVar2 = (pTVar3->Scale3D).XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x40) = (pTVar3->Scale3D).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x48) = dVar2;
  dVar2 = (pTVar3->Scale3D).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x50) = (pTVar3->Scale3D).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x58) = dVar2;
  return;
}

// execGetMotionWarpingWindowsForWarpTargetFromAnimation @ 14cf22f30

void __cdecl
UMotionWarpingUtilities::execGetMotionWarpingWindowsForWarpTargetFromAnimation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  FProperty *pFVar3;
  TObjectPtr<UAnimNotifyState>_u_0 TVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  longlong lVar13;
  ForAnyElementType *pFVar14;
  FAnimNotifyEvent *this;
  uint uVar15;
  float fVar16;
  longlong local_res10 [2];
  longlong local_res20;
  longlong local_68;
  TObjectPtr<UAnimNotifyState>_u_0 local_58;
  undefined8 local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  
  uVar15 = 0;
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  lVar8 = local_res20;
  lVar7 = local_res10[0];
  pFVar14 = &local_48;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar14 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res20 != 0) && (local_res10[0] != 0)) {
    iVar11 = *(int *)((longlong)&pFVar14[1].Data + 4);
    piVar1 = (int *)((longlong)&pFVar14[1].Data + 4);
    *(undefined4 *)&pFVar14[1].Data = 0;
    if (iVar11 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,pFVar14,0,piVar1);
    }
    if (0 < *(int *)(lVar8 + 0x88)) {
      local_68 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar15 < *(int *)(lVar8 + 0x88)) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this = (FAnimNotifyEvent *)(*(longlong *)(lVar8 + 0x80) + local_68);
        if ((this->NotifyStateClass).field0_0x0.DebugPtr != (UAnimNotifyState *)0x0) {
          pUVar12 = UAnimNotifyState_MotionWarping::StaticClass();
          bVar9 = FObjectPtr::IsA((FObjectPtr *)&this->NotifyStateClass,pUVar12);
          if (((bVar9) &&
              (TVar4 = (TObjectPtr<UAnimNotifyState>_u_0)
                       (this->NotifyStateClass).field0_0x0.DebugPtr,
              TVar4.DebugPtr != (UAnimNotifyState *)0x0)) && (TVar4.DebugPtr[1]._padding_ != 0)) {
            pUVar12 = URootMotionModifier_Warp::StaticClass();
            bVar9 = FObjectPtr::IsA((FObjectPtr *)(TVar4.DebugPtr + 1),pUVar12);
            if (((bVar9) && (TVar4.DebugPtr[1]._padding_ != 0)) &&
               (*(longlong *)(TVar4.DebugPtr[1]._padding_ + 0x170) == lVar7)) {
              local_58.DebugPtr = (UAnimNotifyState *)0x0;
              local_50 = 0;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
              }
              local_58 = TVar4;
              fVar16 = FAnimNotifyEvent::GetTriggerTime(this);
              local_50 = CONCAT44(local_50._4_4_,fVar16);
              fVar16 = FAnimNotifyEvent::GetEndTriggerTime(this);
              local_50 = CONCAT44(fVar16,(undefined4)local_50);
              if ((((TObjectPtr<UAnimNotifyState>_u_0 *)pFVar14->Data <= &local_58) &&
                  (&local_58 <
                   (TObjectPtr<UAnimNotifyState>_u_0 *)pFVar14->Data + (longlong)*piVar1 * 2)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar11 = *(int *)&pFVar14[1].Data;
              if (iVar11 == *piVar1) {
                iVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,pFVar14,piVar1);
              }
              pFVar5 = pFVar14->Data;
              lVar13 = (longlong)iVar11;
              *(int *)&pFVar14[1].Data = iVar11 + 1;
              ((TObjectPtr<UAnimNotifyState>_u_0 *)(pFVar5 + lVar13 * 0x10))->DebugPtr =
                   (UAnimNotifyState *)local_58;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_58.DebugPtr != (UAnimNotifyState *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)local_58.DebugPtr);
              }
              *(undefined4 *)(pFVar5 + lVar13 * 0x10 + 8) = (undefined4)local_50;
              *(undefined4 *)(pFVar5 + lVar13 * 0x10 + 0xc) = local_50._4_4_;
            }
          }
        }
        uVar15 = uVar15 + 1;
        local_68 = local_68 + 0xb8;
      } while ((int)uVar15 < *(int *)(lVar8 + 0x88));
    }
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// execGetMotionWarpingWindowsFromAnimation @ 14cf232f0

void __cdecl
UMotionWarpingUtilities::execGetMotionWarpingWindowsFromAnimation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FProperty *pFVar2;
  TObjectPtr<UAnimNotifyState>_u_0 TVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UClass *pUVar10;
  longlong lVar11;
  FAnimNotifyEvent *this;
  ForAnyElementType *pFVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  float fVar16;
  longlong local_res10;
  TObjectPtr<UAnimNotifyState>_u_0 local_48;
  undefined8 local_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  
  uVar13 = 0;
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  lVar6 = local_res10;
  pFVar12 = &local_38;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar12 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != 0) {
    iVar9 = *(int *)((longlong)&pFVar12[1].Data + 4);
    piVar1 = (int *)((longlong)&pFVar12[1].Data + 4);
    *(undefined4 *)&pFVar12[1].Data = 0;
    if (iVar9 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,pFVar12,0,piVar1);
    }
    uVar15 = uVar13;
    if (0 < *(int *)(lVar6 + 0x88)) {
      do {
        uVar14 = (uint)uVar15;
        uVar8 = 0;
        if ((int)uVar14 < *(int *)(lVar6 + 0x88)) {
          uVar8 = ~uVar14 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this = (FAnimNotifyEvent *)(*(longlong *)(lVar6 + 0x80) + uVar13);
        if ((this->NotifyStateClass).field0_0x0.DebugPtr != (UAnimNotifyState *)0x0) {
          pUVar10 = UAnimNotifyState_MotionWarping::StaticClass();
          bVar7 = FObjectPtr::IsA((FObjectPtr *)&this->NotifyStateClass,pUVar10);
          if ((bVar7) &&
             (TVar3 = (TObjectPtr<UAnimNotifyState>_u_0)(this->NotifyStateClass).field0_0x0.DebugPtr
             , TVar3.DebugPtr != (UAnimNotifyState *)0x0)) {
            local_48.DebugPtr = (UAnimNotifyState *)0x0;
            local_40 = 0;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
            }
            local_48 = TVar3;
            fVar16 = FAnimNotifyEvent::GetTriggerTime(this);
            local_40 = CONCAT44(local_40._4_4_,fVar16);
            fVar16 = FAnimNotifyEvent::GetEndTriggerTime(this);
            local_40 = CONCAT44(fVar16,(undefined4)local_40);
            if ((((TObjectPtr<UAnimNotifyState>_u_0 *)pFVar12->Data <= &local_48) &&
                (&local_48 <
                 (TObjectPtr<UAnimNotifyState>_u_0 *)pFVar12->Data + (longlong)*piVar1 * 2)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar9 = *(int *)&pFVar12[1].Data;
            if (iVar9 == *piVar1) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,pFVar12,piVar1);
            }
            pFVar4 = pFVar12->Data;
            lVar11 = (longlong)iVar9;
            *(int *)&pFVar12[1].Data = iVar9 + 1;
            ((TObjectPtr<UAnimNotifyState>_u_0 *)(pFVar4 + lVar11 * 0x10))->DebugPtr =
                 (UAnimNotifyState *)local_48;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_48.DebugPtr != (UAnimNotifyState *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_48.DebugPtr);
            }
            *(undefined4 *)(pFVar4 + lVar11 * 0x10 + 8) = (undefined4)local_40;
            *(undefined4 *)(pFVar4 + lVar11 * 0x10 + 0xc) = local_40._4_4_;
          }
        }
        uVar13 = uVar13 + 0xb8;
        uVar15 = (ulonglong)(uVar14 + 1);
      } while ((int)(uVar14 + 1) < *(int *)(lVar6 + 0x88));
    }
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

