// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 10

// StaticClass @ 14cf348d0

UClass * __cdecl UARTrackedPose::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTrackedPose.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTrackedPose",
               &Z_Registration_Info_UClass_UARTrackedPose.InnerSingleton,
               StaticRegisterNativesUARTrackedPose,0x1b0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARTrackedPose>,
               InternalVTableHelperCtorCaller<UARTrackedPose>,local_res8,
               UARTrackedGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTrackedPose.InnerSingleton;
}

// UARTrackedPose @ 14cf43510

UARTrackedPose * __thiscall
UARTrackedPose::UARTrackedPose(UARTrackedPose *this,FVTableHelper *param_1)

{
  UARTrackedGeometry::UARTrackedGeometry((UARTrackedGeometry *)this,param_1);
  *(undefined ***)this = &___7UARTrackedPose__6B_;
  (this->TrackedPose).SkeletonDefinition.NumJoints = 0;
  (this->TrackedPose).SkeletonDefinition.JointNames.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TrackedPose).SkeletonDefinition.JointNames.ArrayNum = 0;
  (this->TrackedPose).SkeletonDefinition.JointNames.ArrayMax = 0;
  (this->TrackedPose).SkeletonDefinition.ParentIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TrackedPose).SkeletonDefinition.ParentIndices.ArrayNum = 0;
  (this->TrackedPose).SkeletonDefinition.ParentIndices.ArrayMax = 0;
  (this->TrackedPose).JointTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrackedPose).JointTransforms.ArrayNum = 0;
  (this->TrackedPose).JointTransforms.ArrayMax = 0;
  (this->TrackedPose).IsJointTracked.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrackedPose).IsJointTracked.ArrayNum = 0;
  (this->TrackedPose).IsJointTracked.ArrayMax = 0;
  (this->TrackedPose).JointTransformSpace = Model;
  return this;
}

// UARTrackedPose @ 14cf43580

UARTrackedPose * __thiscall UARTrackedPose::UARTrackedPose(UARTrackedPose *this)

{
  UARTrackedGeometry::UARTrackedGeometry((UARTrackedGeometry *)this);
  *(undefined ***)this = &___7UARTrackedPose__6B_;
  (this->TrackedPose).SkeletonDefinition.NumJoints = 0;
  (this->TrackedPose).SkeletonDefinition.JointNames.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TrackedPose).SkeletonDefinition.JointNames.ArrayNum = 0;
  (this->TrackedPose).SkeletonDefinition.JointNames.ArrayMax = 0;
  (this->TrackedPose).SkeletonDefinition.ParentIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TrackedPose).SkeletonDefinition.ParentIndices.ArrayNum = 0;
  (this->TrackedPose).SkeletonDefinition.ParentIndices.ArrayMax = 0;
  (this->TrackedPose).JointTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrackedPose).JointTransforms.ArrayNum = 0;
  (this->TrackedPose).JointTransforms.ArrayMax = 0;
  (this->TrackedPose).IsJointTracked.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrackedPose).IsJointTracked.ArrayNum = 0;
  (this->TrackedPose).IsJointTracked.ArrayMax = 0;
  (this->TrackedPose).JointTransformSpace = Model;
  return this;
}

// ~UARTrackedPose @ 14cf44d00

void __thiscall UARTrackedPose::~UARTrackedPose(UARTrackedPose *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7UARTrackedPose__6B_;
  pFVar1 = (this->TrackedPose).IsJointTracked.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TrackedPose).JointTransforms.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TrackedPose).SkeletonDefinition.ParentIndices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TrackedPose).SkeletonDefinition.JointNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UARTrackedGeometry::~UARTrackedGeometry((UARTrackedGeometry *)this);
  return;
}

// DebugDraw @ 14cf4dd70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UARTrackedPose::DebugDraw
          (UARTrackedPose *this,UWorld *param_1,FLinearColor *param_2,float param_3,float param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStackY_208 [32];
  FColor_u_0 local_1c8 [2];
  UWorld *local_1c0;
  TVector<double>_u_0 local_1b8;
  TVector<double>_u_0 local_1a0;
  TTransform<double> local_188;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if ((this->TrackedPose).JointTransformSpace == Model) {
    local_1c0 = param_1;
    UARTrackedGeometry::GetLocalToWorldTransform((UARTrackedGeometry *)this,&local_c8);
    fVar8 = (param_2->field0_0x0)._s_0.B;
    fVar10 = (param_2->field0_0x0)._s_0.R;
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    if (__real_3f800000 <= fVar8) {
      fVar8 = __real_3f800000;
    }
    if (__real_3f800000 <= fVar10) {
      fVar10 = __real_3f800000;
    }
    fVar9 = (param_2->field0_0x0)._s_0.G;
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    local_1c8[0]._0_1_ = (undefined1)(int)(fVar8 * __real_437f0000 + __real_3f000000);
    if (__real_3f800000 <= fVar9) {
      fVar9 = __real_3f800000;
    }
    fVar8 = (param_2->field0_0x0)._s_0.A;
    uVar6 = 0;
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    local_1c8[0]._1_1_ = (undefined1)(int)(fVar9 * __real_437f0000 + __real_3f000000);
    if (__real_3f800000 <= fVar8) {
      fVar8 = __real_3f800000;
    }
    local_1c8[0]._2_1_ = (undefined1)(int)(fVar10 * __real_437f0000 + __real_3f000000);
    local_1c8[0]._3_1_ = (undefined1)(int)(fVar8 * __real_437f0000 + __real_3f000000);
    if (0 < (this->TrackedPose).SkeletonDefinition.NumJoints) {
      lVar7 = 0;
      do {
        uVar5 = ~uVar6 >> 0x1f;
        uVar3 = 0;
        if ((int)uVar6 < (this->TrackedPose).IsJointTracked.ArrayNum) {
          uVar3 = uVar5;
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
        if ((this->TrackedPose).IsJointTracked.AllocatorInstance.Data[lVar7] !=
            (FScriptContainerElement)0x0) {
          uVar3 = 0;
          if ((int)uVar6 < (this->TrackedPose).SkeletonDefinition.ParentIndices.ArrayNum) {
            uVar3 = uVar5;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uVar3 = *(uint *)((this->TrackedPose).SkeletonDefinition.ParentIndices.AllocatorInstance.
                            Data + lVar7 * 4);
          if ((-1 < (int)uVar3) && ((int)uVar3 < (this->TrackedPose).SkeletonDefinition.NumJoints))
          {
            uVar4 = 0;
            if ((int)uVar3 < (this->TrackedPose).IsJointTracked.ArrayNum) {
              uVar4 = ~uVar3 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if ((this->TrackedPose).IsJointTracked.AllocatorInstance.Data[(int)uVar3] !=
                (FScriptContainerElement)0x0) {
              uVar4 = 0;
              if ((int)uVar6 < (this->TrackedPose).JointTransforms.ArrayNum) {
                uVar4 = uVar5;
              }
              if ((uVar4 == 0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar2)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
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
              local_128.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_128.Scale3D.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
              local_128.Scale3D.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
              local_128.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_128.Scale3D.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
              UE::Math::TTransform<double>::Multiply
                        (&local_128,
                         (TTransform<double> *)
                         ((this->TrackedPose).JointTransforms.AllocatorInstance.Data +
                         (longlong)(int)uVar6 * 0x60),&local_c8);
              uVar5 = 0;
              if ((int)uVar3 < (this->TrackedPose).JointTransforms.ArrayNum) {
                uVar5 = ~uVar3 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar2)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              local_188.Rotation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
              local_188.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_188.Rotation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
              local_188.Rotation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
              local_188.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_188.Rotation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
              local_188.Translation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
              local_188.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_188.Translation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
              local_188.Translation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
              local_188.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_188.Translation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
              local_188.Scale3D.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
              local_188.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_188.Scale3D.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
              local_188.Scale3D.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
              local_188.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_188.Scale3D.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
              UE::Math::TTransform<double>::Multiply
                        (&local_188,
                         (TTransform<double> *)
                         ((this->TrackedPose).JointTransforms.AllocatorInstance.Data +
                         (longlong)(int)uVar3 * 0x60),&local_c8);
              local_1b8._s_0.X = local_188.Translation.XY.m128d_f64[0];
              local_1b8._s_0.Y = local_188.Translation.XY.m128d_f64[1];
              local_1b8._s_0.Z = local_188.Translation.ZW.m128d_f64[0];
              local_1a0._s_0.X = local_128.Translation.XY.m128d_f64[0];
              local_1a0._s_0.Y = local_128.Translation.XY.m128d_f64[1];
              local_1a0._s_0.Z = local_128.Translation.ZW.m128d_f64[0];
              DrawDebugLine(local_1c0,(TVector<double> *)&local_1a0._s_0,
                            (TVector<double> *)&local_1b8._s_0,(FColor *)&local_1c8[0]._s_0,false,
                            param_4,'\0',0.0);
            }
          }
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 1;
      } while ((int)uVar6 < (this->TrackedPose).SkeletonDefinition.NumJoints);
    }
  }
  return;
}

// GetNetworkPayload @ 14cf52ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UARTrackedPose::GetNetworkPayload(UARTrackedPose *this,FARPoseUpdatePayload *param_1)

{
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  UARTrackedGeometry::GetLocalToWorldTransform((UARTrackedGeometry *)this,&local_78);
  (param_1->WorldTransform).Rotation.XY.m128d_f64[0] = local_78.Rotation.XY.m128d_f64[0];
  (param_1->WorldTransform).Rotation.XY.m128d_f64[1] = local_78.Rotation.XY.m128d_f64[1];
  (param_1->WorldTransform).Rotation.ZW.m128d_f64[0] = local_78.Rotation.ZW.m128d_f64[0];
  (param_1->WorldTransform).Rotation.ZW.m128d_f64[1] = local_78.Rotation.ZW.m128d_f64[1];
  (param_1->WorldTransform).Translation.XY.m128d_f64[0] = local_78.Translation.XY.m128d_f64[0];
  (param_1->WorldTransform).Translation.XY.m128d_f64[1] = local_78.Translation.XY.m128d_f64[1];
  (param_1->WorldTransform).Translation.ZW.m128d_f64[0] = local_78.Translation.ZW.m128d_f64[0];
  (param_1->WorldTransform).Translation.ZW.m128d_f64[1] = local_78.Translation.ZW.m128d_f64[1];
  (param_1->WorldTransform).Scale3D.XY.m128d_f64[0] = local_78.Scale3D.XY.m128d_f64[0];
  (param_1->WorldTransform).Scale3D.XY.m128d_f64[1] = local_78.Scale3D.XY.m128d_f64[1];
  (param_1->WorldTransform).Scale3D.ZW.m128d_f64[0] = local_78.Scale3D.ZW.m128d_f64[0];
  (param_1->WorldTransform).Scale3D.ZW.m128d_f64[1] = local_78.Scale3D.ZW.m128d_f64[1];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&param_1->JointTransforms,&(this->TrackedPose).JointTransforms);
  return;
}

// GetPrivateStaticClass @ 14cf55a80

UClass * __cdecl UARTrackedPose::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTrackedPose.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTrackedPose",
               &Z_Registration_Info_UClass_UARTrackedPose.InnerSingleton,
               StaticRegisterNativesUARTrackedPose,0x1b0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARTrackedPose>,
               InternalVTableHelperCtorCaller<UARTrackedPose>,local_res8,
               UARTrackedGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTrackedPose.InnerSingleton;
}

// StaticRegisterNativesUARTrackedPose @ 14cf61620

void __cdecl UARTrackedPose::StaticRegisterNativesUARTrackedPose(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UARTrackedPose_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateTrackedPose @ 14cf676f0

void __thiscall
UARTrackedPose::UpdateTrackedPose
          (UARTrackedPose *this,TSharedRef<FARSupportInterface,1> *param_1,uint param_2,
          double param_3,TTransform<double> *param_4,TTransform<double> *param_5,FARPose3D *param_6)

{
  UARTrackedGeometry::UpdateTrackedGeometry
            ((UARTrackedGeometry *)this,param_1,param_2,param_3,param_4,param_5);
  FARSkeletonDefinition::operator=
            (&(this->TrackedPose).SkeletonDefinition,&param_6->SkeletonDefinition);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->TrackedPose).JointTransforms,&param_6->JointTransforms);
  TArray<bool,TSizedDefaultAllocator<32>_>::operator=
            (&(this->TrackedPose).IsJointTracked,&param_6->IsJointTracked);
  (this->TrackedPose).JointTransformSpace = param_6->JointTransformSpace;
  return;
}

// execGetTrackedPoseData @ 14cf6fa50

void __cdecl UARTrackedPose::execGetTrackedPoseData(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FARSkeletonDefinition::operator=(param_3,(FARSkeletonDefinition *)&param_1[8].field_0x18);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_3 + 0x28),
             (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             &param_1[9].field_0x18);
  TArray<bool,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<bool,TSizedDefaultAllocator<32>_> *)((longlong)param_3 + 0x38),
             (TArray<bool,TSizedDefaultAllocator<32>_> *)(param_1 + 10));
  *(undefined1 *)((longlong)param_3 + 0x48) = param_1[10].field_0x10;
  return;
}

