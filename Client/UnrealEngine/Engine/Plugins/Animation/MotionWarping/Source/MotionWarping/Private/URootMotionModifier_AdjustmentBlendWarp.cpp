// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 19

// StaticClass @ 14cefe620

UClass * __cdecl URootMotionModifier_AdjustmentBlendWarp::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URootMotionModifier_AdjustmentBlendWarp.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"RootMotionModifier_AdjustmentBlendWarp",
               &Z_Registration_Info_UClass_URootMotionModifier_AdjustmentBlendWarp.InnerSingleton,
               StaticRegisterNativesURootMotionModifier_AdjustmentBlendWarp,0x4c0,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<URootMotionModifier_AdjustmentBlendWarp>,
               InternalVTableHelperCtorCaller<URootMotionModifier_AdjustmentBlendWarp>,local_res8,
               URootMotionModifier_Warp::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URootMotionModifier_AdjustmentBlendWarp.InnerSingleton;
}

// URootMotionModifier_AdjustmentBlendWarp @ 14cf04a70

URootMotionModifier_AdjustmentBlendWarp * __thiscall
URootMotionModifier_AdjustmentBlendWarp::URootMotionModifier_AdjustmentBlendWarp
          (URootMotionModifier_AdjustmentBlendWarp *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  URootMotionModifier_Warp::URootMotionModifier_Warp((URootMotionModifier_Warp *)this,param_1);
  this->bWarpIKBones = false;
  this->_padding_ = (longlong)&___7URootMotionModifier_AdjustmentBlendWarp__6B_;
  (this->IKBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IKBones).ArrayNum = 0;
  (this->IKBones).ArrayMax = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->CachedMeshTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->CachedMeshTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->CachedMeshTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CachedMeshTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->CachedMeshTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->CachedMeshTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->CachedMeshTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CachedMeshTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->CachedMeshTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->CachedMeshTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->CachedMeshTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->CachedMeshTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->CachedMeshRelativeTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->CachedMeshRelativeTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->CachedMeshRelativeTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CachedMeshRelativeTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->CachedMeshRelativeTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->CachedMeshRelativeTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->CachedMeshRelativeTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CachedMeshRelativeTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->CachedMeshRelativeTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->CachedMeshRelativeTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->CachedMeshRelativeTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->CachedMeshRelativeTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->CachedRootMotion).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->CachedRootMotion).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->CachedRootMotion).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CachedRootMotion).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->CachedRootMotion).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->CachedRootMotion).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->CachedRootMotion).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CachedRootMotion).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->CachedRootMotion).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->CachedRootMotion).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->CachedRootMotion).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->CachedRootMotion).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->Result).AnimationTracks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Result).AnimationTracks.ArrayNum = 0;
  (this->Result).AnimationTracks.ArrayMax = 0;
  (this->Result).TrackNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Result).TrackNames.ArrayNum = 0;
  (this->Result).TrackNames.ArrayMax = 0;
  return this;
}

// URootMotionModifier_AdjustmentBlendWarp @ 14cf04be0

URootMotionModifier_AdjustmentBlendWarp * __thiscall
URootMotionModifier_AdjustmentBlendWarp::URootMotionModifier_AdjustmentBlendWarp
          (URootMotionModifier_AdjustmentBlendWarp *this,FObjectInitializer *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  URootMotionModifier_Warp::URootMotionModifier_Warp((URootMotionModifier_Warp *)this,param_1);
  this->bWarpIKBones = false;
  this->_padding_ = (longlong)&___7URootMotionModifier_AdjustmentBlendWarp__6B_;
  (this->IKBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IKBones).ArrayNum = 0;
  (this->IKBones).ArrayMax = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->CachedMeshTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->CachedMeshTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->CachedMeshTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CachedMeshTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->CachedMeshTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->CachedMeshTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->CachedMeshTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CachedMeshTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->CachedMeshTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->CachedMeshTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->CachedMeshTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->CachedMeshTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->CachedMeshRelativeTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->CachedMeshRelativeTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->CachedMeshRelativeTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CachedMeshRelativeTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->CachedMeshRelativeTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->CachedMeshRelativeTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->CachedMeshRelativeTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CachedMeshRelativeTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->CachedMeshRelativeTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->CachedMeshRelativeTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->CachedMeshRelativeTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->CachedMeshRelativeTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->CachedRootMotion).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->CachedRootMotion).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->CachedRootMotion).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CachedRootMotion).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->CachedRootMotion).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->CachedRootMotion).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->CachedRootMotion).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CachedRootMotion).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->CachedRootMotion).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->CachedRootMotion).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->CachedRootMotion).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->CachedRootMotion).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->Result).AnimationTracks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Result).AnimationTracks.ArrayNum = 0;
  (this->Result).AnimationTracks.ArrayMax = 0;
  (this->Result).TrackNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Result).TrackNames.ArrayNum = 0;
  (this->Result).TrackNames.ArrayMax = 0;
  return this;
}

// ~URootMotionModifier_AdjustmentBlendWarp @ 14cf05a00

void __thiscall
URootMotionModifier_AdjustmentBlendWarp::~URootMotionModifier_AdjustmentBlendWarp
          (URootMotionModifier_AdjustmentBlendWarp *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7URootMotionModifier_AdjustmentBlendWarp__6B_;
  pFVar1 = (this->Result).TrackNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRawAnimSequenceTrack,int>
            ((FRawAnimSequenceTrack *)(this->Result).AnimationTracks.AllocatorInstance.Data,
             (this->Result).AnimationTracks.ArrayNum);
  pFVar1 = (this->Result).AnimationTracks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IKBones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7URootMotionModifier__6B_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// AddRootMotionModifierAdjustmentBlendWarp @ 14cf07830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

URootMotionModifier_AdjustmentBlendWarp * __cdecl
URootMotionModifier_AdjustmentBlendWarp::AddRootMotionModifierAdjustmentBlendWarp
          (UMotionWarpingComponent *param_1,UAnimSequenceBase *param_2,float param_3,float param_4,
          FName param_5,EWarpPointAnimProvider param_6,TTransform<double> *param_7,FName param_8,
          bool param_9,bool param_10,bool param_11,bool param_12,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_13)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  URootMotionModifier_AdjustmentBlendWarp *pUVar10;
  UClass *pUVar11;
  longlong *plVar12;
  undefined1 auStackY_118 [32];
  UAnimSequenceBase *local_d8 [2];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if (param_1 == (UMotionWarpingComponent *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8185310451802833358>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\MotionWarping\\Source\\MotionWarping\\Private\\RootMotionModifier_AdjustmentBlendWarp.cpp"
                       ,0x1ce,"InMotionWarpingComp");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      pUVar10 = (URootMotionModifier_AdjustmentBlendWarp *)(*pcVar4)();
      return pUVar10;
    }
    pUVar10 = (URootMotionModifier_AdjustmentBlendWarp *)0x0;
  }
  else {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar11 = StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar11);
    local_c8._8_8_ = param_1;
    pUVar10 = (URootMotionModifier_AdjustmentBlendWarp *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar12 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    local_d8[0] = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UAnimSequenceBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar10->_padding_,(FObjectPtr)local_d8);
    pTVar2 = &pUVar10->IKBones;
    pUVar10->_padding_ = (longlong)param_5;
    *(EWarpPointAnimProvider *)&pUVar10->_padding_ = param_6;
    *(float *)&pUVar10->_padding_ = param_3;
    *(float *)((longlong)&pUVar10->_padding_ + 4) = param_4;
    dVar5 = (param_7->Rotation).XY.m128d_f64[1];
    dVar6 = (param_7->Rotation).ZW.m128d_f64[0];
    dVar7 = (param_7->Rotation).ZW.m128d_f64[1];
    pUVar10->_padding_ = (longlong)(param_7->Rotation).XY.m128d_f64[0];
    pUVar10->_padding_ = (longlong)dVar5;
    dVar5 = (param_7->Translation).XY.m128d_f64[0];
    dVar8 = (param_7->Translation).XY.m128d_f64[1];
    pUVar10->_padding_ = (longlong)dVar6;
    pUVar10->_padding_ = (longlong)dVar7;
    dVar6 = (param_7->Translation).ZW.m128d_f64[0];
    dVar7 = (param_7->Translation).ZW.m128d_f64[1];
    pUVar10->_padding_ = (longlong)dVar5;
    pUVar10->_padding_ = (longlong)dVar8;
    dVar5 = (param_7->Scale3D).XY.m128d_f64[0];
    dVar8 = (param_7->Scale3D).XY.m128d_f64[1];
    pUVar10->_padding_ = (longlong)dVar6;
    pUVar10->_padding_ = (longlong)dVar7;
    dVar6 = (param_7->Scale3D).ZW.m128d_f64[0];
    dVar7 = (param_7->Scale3D).ZW.m128d_f64[1];
    pUVar10->_padding_ = (longlong)param_8;
    *(bool *)&pUVar10->_padding_ = param_9;
    *(bool *)((longlong)&pUVar10->_padding_ + 1) = param_10;
    *(bool *)&pUVar10->_padding_ = param_11;
    pUVar10->bWarpIKBones = param_12;
    pUVar10->_padding_ = (longlong)dVar5;
    pUVar10->_padding_ = (longlong)dVar8;
    pUVar10->_padding_ = (longlong)dVar6;
    pUVar10->_padding_ = (longlong)dVar7;
    if (pTVar2 != param_13) {
      iVar3 = param_13->ArrayNum;
      piVar1 = &(pUVar10->IKBones).ArrayMax;
      _Src = (param_13->AllocatorInstance).Data;
      (pUVar10->IKBones).ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
        if (iVar3 != 0) {
          memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
        }
      }
    }
    UMotionWarpingComponent::AddModifier(param_1,(URootMotionModifier *)pUVar10);
  }
  return pUVar10;
}

// AdjustmentBlendWarp @ 14cf081c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
URootMotionModifier_AdjustmentBlendWarp::AdjustmentBlendWarp
          (FBoneContainer *param_1,FCSPose<FCompactPose> *param_2,
          FMotionDeltaTrackContainer *param_3,FAnimSequenceTrackContainer *param_4)

{
  int *piVar1;
  int *piVar2;
  double *pdVar3;
  double *pdVar4;
  undefined8 *puVar5;
  ushort uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FReferenceSkeleton *pFVar10;
  undefined8 uVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  double dVar29;
  bool bVar30;
  int iVar31;
  uint uVar32;
  undefined7 extraout_var;
  TRotator<double> *pTVar33;
  TVector<double> *pTVar34;
  TQuat<double> *pTVar35;
  uint uVar36;
  int iVar37;
  longlong lVar38;
  longlong lVar39;
  uint uVar40;
  FScriptContainerElement *pFVar41;
  uint uVar42;
  uint uVar43;
  longlong lVar44;
  longlong lVar45;
  longlong lVar46;
  uint uVar47;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar48;
  longlong lVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  float fVar70;
  __m128d _Var71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  float fVar84;
  longlong local_3a8;
  float local_3a0;
  float fStack_39c;
  float local_398;
  float local_394;
  float fStack_390;
  float local_38c;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 local_380;
  longlong local_378;
  uint local_370;
  longlong local_368;
  float local_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float local_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  longlong local_338;
  longlong local_330;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  double local_318;
  double local_310 [3];
  int *local_2f8;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_2f0;
  FScriptContainerElement *local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  TVector<double>_u_0 local_2b8;
  TVector<double>_u_0 local_2a0;
  TVector<double>_u_0 local_288;
  double local_270;
  double local_268;
  double local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  TQuat<double> local_228;
  TQuat<double> local_208;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  TVector<double> local_1b8;
  TVector<double> local_1a0;
  TRotator<double> local_188;
  TVector<double> local_170;
  TRotator<double> local_158;
  TVector<double> local_140;
  TRotator<double> local_128;
  TQuat<double> local_108 [6];
  
  uVar42 = (param_1->BoneIndicesArray).ArrayNum;
  if ((int)uVar42 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar42);
  }
  piVar1 = &(param_4->AnimationTracks).ArrayNum;
  DestructItems<FRawAnimSequenceTrack,int>
            ((FRawAnimSequenceTrack *)(param_4->AnimationTracks).AllocatorInstance.Data,
             (param_4->AnimationTracks).ArrayNum);
  piVar2 = &(param_4->AnimationTracks).ArrayMax;
  *piVar1 = 0;
  if (*piVar2 != uVar42) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,uVar42,(ForAnyElementType *)param_4,0,piVar2);
  }
  iVar31 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x30,8,uVar42,(ForAnyElementType *)param_4,piVar1,piVar2);
  memset((param_4->AnimationTracks).AllocatorInstance.Data + (longlong)iVar31 * 0x30,0,
         (longlong)(int)uVar42 * 0x30);
  pTVar48 = &param_4->TrackNames;
  piVar1 = &(param_4->TrackNames).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(param_4->TrackNames).ArrayMax;
  local_2f8 = piVar1;
  local_2f0 = pTVar48;
  if ((param_4->TrackNames).ArrayMax != uVar42) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar42,&pTVar48->AllocatorInstance,0,piVar2);
  }
  iVar31 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,4,uVar42,&pTVar48->AllocatorInstance,piVar1,piVar2);
  memset((pTVar48->AllocatorInstance).Data + (longlong)iVar31 * 8,0,(longlong)(int)uVar42 * 8);
  dVar29 = __real_3f1a36e2e0000000;
  uVar28 = _UNK_15061cc8c;
  uVar27 = _UNK_15061cc88;
  uVar26 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar25 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar24 = __real_3ff0000000000000;
  uVar42 = *(uint *)&(param_2->Pose).field_0x8;
  uVar43 = 0;
  if (uVar42 != 0) {
    uVar60 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
    uVar64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
    uVar65 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
    uVar66 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
    uVar61 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
    uVar67 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
    uVar68 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
    uVar69 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
    uVar72 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
    uVar73 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
    uVar74 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
    uVar75 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
    uVar76 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
    uVar77 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
    uVar78 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
    uVar79 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
    uVar80 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
    uVar81 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
    uVar82 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
    uVar83 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
    local_3a8 = 0;
    _Var71 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
    local_370 = uVar42;
    do {
      fVar84 = __real_3f800000;
      iVar31 = *(int *)&(param_2->Pose).field_0x8;
      uVar40 = ~uVar43 >> 0x1f;
      uVar32 = 0;
      if ((int)uVar43 < iVar31) {
        uVar32 = uVar40;
      }
      if (uVar32 == 0) {
        iVar31 = 0x506106c8;
        bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar32 = (uint)CONCAT71(extraout_var,bVar30);
        if (bVar30) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar72 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
        uVar73 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
        uVar74 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
        uVar75 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
        uVar80 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
        uVar81 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
        uVar82 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
        uVar83 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
        uVar76 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
        uVar77 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
        uVar78 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
        uVar79 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
        uVar61 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
        uVar67 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
        uVar68 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
        uVar69 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
        uVar60 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar65 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar66 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
        _Var71 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
      }
      lVar7 = *(longlong *)&param_2->Pose;
      lVar46 = local_3a8 * 0x60;
      uVar62 = SUB84(dVar29,0);
      uVar63 = (undefined4)((ulonglong)dVar29 >> 0x20);
      auVar50._8_4_ = uVar62;
      auVar50._0_8_ = dVar29;
      auVar50._12_4_ = uVar63;
      local_268 = dVar29;
      pdVar3 = (double *)(lVar7 + 0x30 + lVar46);
      pdVar4 = (double *)(lVar7 + 0x20 + lVar46);
      dVar13 = *pdVar3 - (double)CONCAT44(uVar77,uVar76);
      dVar14 = pdVar3[1] - (double)CONCAT44(uVar79,uVar78);
      dVar15 = *pdVar4 - (double)CONCAT44(uVar81,uVar80);
      dVar16 = pdVar4[1] - (double)CONCAT44(uVar83,uVar82);
      auVar51._8_8_ =
           -(ulonglong)
            (auVar50._8_8_ <
            (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar28,SUB84(dVar14,0) & uVar27));
      auVar51._0_8_ =
           -(ulonglong)
            (dVar29 < (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & uVar26,
                                       SUB84(dVar13,0) & uVar25));
      uVar36 = movmskpd(iVar31,auVar51);
      lVar49 = -(ulonglong)
                (dVar29 < (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & uVar28,
                                           SUB84(dVar16,0) & uVar27));
      auVar17._8_4_ = (int)lVar49;
      auVar17._0_8_ =
           -(ulonglong)
            (dVar29 < (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar26,
                                       SUB84(dVar15,0) & uVar25));
      auVar17._12_4_ = (int)((ulonglong)lVar49 >> 0x20);
      iVar31 = movmskpd(uVar32,auVar17);
      local_2c8 = lVar46;
      if ((uVar36 & 0x3fffffff) == 0 && iVar31 == 0) {
        pdVar3 = (double *)(lVar7 + 0x10 + lVar46);
        dVar22 = *pdVar3;
        dVar23 = pdVar3[1];
        dVar20 = *(double *)(lVar7 + lVar46);
        dVar21 = ((double *)(lVar7 + lVar46))[1];
        local_270 = dVar29;
        dVar13 = dVar22 - _Var71.m128d_f64[0];
        dVar14 = dVar23 - _Var71.m128d_f64[1];
        dVar15 = dVar20 - (double)CONCAT44(uVar73,uVar72);
        dVar16 = dVar21 - (double)CONCAT44(uVar75,uVar74);
        auVar52._8_4_ = uVar62;
        auVar52._0_8_ = dVar29;
        auVar52._12_4_ = uVar63;
        auVar53._8_8_ =
             -(ulonglong)
              (auVar52._8_8_ <
              (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar28,SUB84(dVar14,0) & uVar27))
        ;
        auVar53._0_8_ =
             -(ulonglong)
              (dVar29 < (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & uVar26,
                                         SUB84(dVar13,0) & uVar25));
        iVar37 = movmskpd(0,auVar53);
        auVar54._8_4_ = uVar62;
        auVar54._0_8_ = dVar29;
        auVar54._12_4_ = uVar63;
        auVar55._8_8_ =
             -(ulonglong)
              (auVar54._8_8_ <
              (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & uVar28,SUB84(dVar16,0) & uVar27))
        ;
        auVar55._0_8_ =
             -(ulonglong)
              (dVar29 < (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar26,
                                         SUB84(dVar15,0) & uVar25));
        dVar20 = dVar20 + (double)CONCAT44(uVar73,uVar72);
        dVar21 = dVar21 + (double)CONCAT44(uVar75,uVar74);
        dVar22 = dVar22 + _Var71.m128d_f64[0];
        dVar23 = dVar23 + _Var71.m128d_f64[1];
        uVar32 = movmskpd(iVar31,auVar55);
        uVar36 = iVar37 << 2 | uVar32;
        fVar84 = __real_3f800000;
        if (uVar36 != 0) {
          auVar56._8_4_ = uVar62;
          auVar56._0_8_ = dVar29;
          auVar56._12_4_ = uVar63;
          auVar57._8_8_ =
               -(ulonglong)
                (auVar56._8_8_ <
                (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) & uVar28,SUB84(dVar23,0) & uVar27
                                ));
          auVar57._0_8_ =
               -(ulonglong)
                (dVar29 < (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar26,
                                           SUB84(dVar22,0) & uVar25));
          uVar36 = movmskpd(uVar36,auVar57);
          lVar49 = -(ulonglong)
                    (dVar29 < (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & uVar28,
                                               SUB84(dVar21,0) & uVar27));
          auVar18._8_4_ = (int)lVar49;
          auVar18._0_8_ =
               -(ulonglong)
                (dVar29 < (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & uVar26,
                                           SUB84(dVar20,0) & uVar25));
          auVar18._12_4_ = (int)((ulonglong)lVar49 >> 0x20);
          uVar32 = movmskpd(uVar32,auVar18);
          if ((uVar36 & 0x3fffffff) != 0 || uVar32 != 0) goto LAB_14cf08573;
        }
        pdVar3 = (double *)(lVar7 + 0x50 + lVar46);
        pdVar4 = (double *)(lVar7 + 0x40 + lVar46);
        auVar58._8_4_ = uVar62;
        auVar58._0_8_ = dVar29;
        auVar58._12_4_ = uVar63;
        local_260 = dVar29;
        dVar13 = *pdVar3 - (double)CONCAT44(uVar64,uVar60);
        dVar14 = pdVar3[1] - (double)CONCAT44(uVar66,uVar65);
        dVar15 = *pdVar4 - (double)CONCAT44(uVar67,uVar61);
        dVar16 = pdVar4[1] - (double)CONCAT44(uVar69,uVar68);
        auVar59._8_8_ =
             -(ulonglong)
              (auVar58._8_8_ <
              (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar28,SUB84(dVar14,0) & uVar27))
        ;
        auVar59._0_8_ =
             -(ulonglong)
              (dVar29 < (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & uVar26,
                                         SUB84(dVar13,0) & uVar25));
        uVar36 = movmskpd(0,auVar59);
        lVar49 = -(ulonglong)
                  (dVar29 < (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & uVar28,
                                             SUB84(dVar16,0) & uVar27));
        auVar19._8_4_ = (int)lVar49;
        auVar19._0_8_ =
             -(ulonglong)
              (dVar29 < (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar26,
                                         SUB84(dVar15,0) & uVar25));
        auVar19._12_4_ = (int)((ulonglong)lVar49 >> 0x20);
        iVar31 = movmskpd(uVar32,auVar19);
        if ((uVar36 & 0x3fffffff) != 0 || iVar31 != 0) goto LAB_14cf08573;
      }
      else {
LAB_14cf08573:
        uVar32 = 0;
        if ((int)uVar43 < (param_3->Tracks).ArrayNum) {
          uVar32 = uVar40;
        }
        if ((uVar32 == 0) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar8 = (param_3->Tracks).AllocatorInstance.Data;
        uVar32 = *(uint *)(pFVar8 + lVar46 + 8);
        uVar36 = 0;
        if ((int)uVar43 < (param_4->AnimationTracks).ArrayNum) {
          uVar36 = uVar40;
        }
        if ((uVar36 == 0) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar41 = (param_4->AnimationTracks).AllocatorInstance.Data + local_3a8 * 0x30;
        if ((int)uVar32 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar32);
        }
        pFVar9 = pFVar41 + 0xc;
        if (*(int *)(pFVar41 + 0xc) < (int)uVar32) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,uVar32,(ForAnyElementType *)pFVar41,*(int *)&pFVar41[8].field_0x0,
                     (int *)pFVar9);
        }
        if (*(int *)(pFVar41 + 0x1c) < (int)uVar32) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,0x10,uVar32,(ForAnyElementType *)(pFVar41 + 0x10),
                     *(int *)&pFVar41[0x18].field_0x0,(int *)(pFVar41 + 0x1c));
        }
        if ((*(int *)(pFVar8 + lVar46 + 8) < 1) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        lVar49 = *(longlong *)(pFVar8 + lVar46);
        local_1e8 = *(double *)(lVar49 + 0x20);
        dStack_1e0 = *(double *)(lVar49 + 0x28);
        local_1d8 = *(double *)(lVar49 + 0x30);
        local_394 = (float)local_1e8;
        fStack_390 = (float)dStack_1e0;
        local_38c = (float)local_1d8;
        if (((*(FScriptContainerElement **)&pFVar41->field_0x0 <=
              (FScriptContainerElement *)&local_394) &&
            ((FScriptContainerElement *)&local_394 <
             *(FScriptContainerElement **)&pFVar41->field_0x0 + (longlong)*(int *)pFVar9 * 0xc)) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar30)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar31 = *(int *)&pFVar41[8].field_0x0;
        if (iVar31 == *(int *)(pFVar41 + 0xc)) {
          iVar31 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,(ForAnyElementType *)pFVar41,(int *)pFVar9);
        }
        *(int *)&pFVar41[8].field_0x0 = iVar31 + 1;
        pFVar9 = *(FScriptContainerElement **)&pFVar41->field_0x0;
        *(ulonglong *)(pFVar9 + (longlong)iVar31 * 0xc) = CONCAT44(fStack_390,local_394);
        *(float *)(pFVar9 + (longlong)iVar31 * 0xc + 8) = local_38c;
        if ((*(int *)(pFVar8 + lVar46 + 8) < 1) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pdVar3 = *(double **)(pFVar8 + lVar46);
        local_348 = (float)*pdVar3;
        fStack_344 = (float)pdVar3[1];
        fStack_340 = (float)pdVar3[2];
        fStack_33c = (float)pdVar3[3];
        if (((*(FScriptContainerElement **)&pFVar41[0x10].field_0x0 <=
              (FScriptContainerElement *)&local_348) &&
            ((FScriptContainerElement *)&local_348 <
             *(FScriptContainerElement **)&pFVar41[0x10].field_0x0 +
             (longlong)*(int *)(pFVar41 + 0x1c) * 0x10)) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar30)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar31 = *(int *)&pFVar41[0x18].field_0x0;
        if (iVar31 == *(int *)(pFVar41 + 0x1c)) {
          iVar31 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1010,(ForAnyElementType *)(pFVar41 + 0x10),(int *)(pFVar41 + 0x1c));
        }
        *(int *)&pFVar41[0x18].field_0x0 = iVar31 + 1;
        pFVar9 = *(FScriptContainerElement **)&pFVar41[0x10].field_0x0;
        local_388 = 0x3f800000;
        uStack_384 = 0x3f800000;
        local_380 = 0x3f800000;
        *(ulonglong *)(pFVar9 + (longlong)iVar31 * 0x10) = CONCAT44(fStack_344,local_348);
        *(ulonglong *)(pFVar9 + (longlong)iVar31 * 0x10 + 8) = CONCAT44(fStack_33c,fStack_340);
        if (((*(FScriptContainerElement **)&pFVar41[0x20].field_0x0 <=
              (FScriptContainerElement *)&local_388) &&
            ((FScriptContainerElement *)&local_388 <
             *(FScriptContainerElement **)&pFVar41[0x20].field_0x0 +
             (longlong)*(int *)(pFVar41 + 0x2c) * 0xc)) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar30)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar31 = *(int *)&pFVar41[0x28].field_0x0;
        if (iVar31 == *(int *)(pFVar41 + 0x2c)) {
          iVar31 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,(ForAnyElementType *)(pFVar41 + 0x20),(int *)(pFVar41 + 0x2c));
        }
        *(int *)&pFVar41[0x28].field_0x0 = iVar31 + 1;
        pFVar41 = *(FScriptContainerElement **)&pFVar41[0x20].field_0x0;
        *(ulonglong *)(pFVar41 + (longlong)iVar31 * 0xc) = CONCAT44(uStack_384,local_388);
        *(undefined4 *)(pFVar41 + (longlong)iVar31 * 0xc + 8) = local_380;
        pFVar10 = param_1->RefSkeleton;
        uVar36 = 0;
        if ((int)uVar43 < (param_1->BoneIndicesArray).ArrayNum) {
          uVar36 = uVar40;
        }
        if ((uVar36 == 0) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar6 = *(ushort *)((param_1->BoneIndicesArray).AllocatorInstance.Data + local_3a8 * 2);
        if (((pFVar10->FinalRefBoneInfo).ArrayNum <= (int)(uint)uVar6) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar11 = *(undefined8 *)
                  ((pFVar10->FinalRefBoneInfo).AllocatorInstance.Data + (ulonglong)uVar6 * 0xc);
        uVar36 = 0;
        if ((int)uVar43 < *local_2f8) {
          uVar36 = uVar40;
        }
        if ((uVar36 == 0) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        *(undefined8 *)((local_2f0->AllocatorInstance).Data + local_3a8 * 8) = uVar11;
        puVar5 = (undefined8 *)(lVar7 + 0x20 + lVar46);
        local_258 = *puVar5;
        uStack_250 = puVar5[1];
        local_248 = *(undefined8 *)(lVar7 + 0x30 + lVar46);
        pdVar3 = (double *)(lVar7 + 0x10 + lVar46);
        local_228.Z = *pdVar3;
        local_228.W = pdVar3[1];
        local_228.X = *(double *)(lVar7 + lVar46);
        local_228.Y = ((double *)(lVar7 + lVar46))[1];
        pTVar33 = UE::Math::TQuat<double>::Rotator(&local_228,&local_188);
        UE::Math::TRotator<double>::Euler(pTVar33,&local_1a0);
        uVar36 = 1;
        uVar60 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar61 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        local_2b8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_2a0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_2b8._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        local_2b8._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        local_2b8._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        local_2b8._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        local_2a0._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        local_2a0._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        local_2a0._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        local_2a0._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        if (1 < (int)uVar32) {
          local_378 = 0x60;
          local_368 = 0x18;
          local_2e8 = pFVar8 + lVar46 + 0x30;
          local_338 = local_3a8 * 0x30;
          local_2d8 = (longlong)&local_240 - (longlong)local_2e8;
          local_2d0 = (longlong)&local_2b8 - (longlong)local_2e8;
          local_2e0 = (longlong)&local_258 - (longlong)local_2e8;
          local_2c0 = (longlong)&local_328 - (longlong)local_2e8;
          while( true ) {
            lVar7 = local_2c0;
            uVar47 = ~uVar36 >> 0x1f;
            uVar42 = 0;
            if ((int)uVar36 < *(int *)(pFVar8 + lVar46 + 8)) {
              uVar42 = uVar47;
            }
            if (uVar42 == 0) {
              bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar30) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              uVar60 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
              uVar61 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
            }
            local_330 = *(longlong *)(pFVar8 + lVar46);
            uVar42 = 0;
            if ((int)uVar36 < *(int *)(pFVar8 + lVar46 + 0x18)) {
              uVar42 = uVar47;
            }
            fVar70 = (float)(int)uVar36 * (fVar84 / (float)(int)(uVar32 - 1));
            if (uVar42 == 0) {
              bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar30) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              uVar60 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
              uVar61 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
            }
            lVar44 = local_2d0;
            lVar39 = local_2d8;
            lVar49 = local_2e0;
            puVar5 = (undefined8 *)(*(longlong *)(pFVar8 + lVar46 + 0x10) + local_368);
            local_240 = *puVar5;
            uStack_238 = puVar5[1];
            local_230 = *(undefined8 *)(*(longlong *)(pFVar8 + lVar46 + 0x10) + 0x10 + local_368);
            lVar38 = 3;
            local_318 = (double)CONCAT44(uVar61,uVar60);
            pFVar41 = local_2e8;
            local_328 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
            uStack_324 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            uStack_320 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            uStack_31c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            do {
              dVar13 = *(double *)pFVar41;
              dVar14 = *(double *)(pFVar41 + lVar49);
              if ((double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & uVar26,
                                   SUB84(dVar13,0) & uVar25) <= dVar24) {
                dVar13 = (double)fVar70 * dVar14;
              }
              else {
                dVar13 = (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar26,
                                          SUB84(dVar14,0) & uVar25) *
                         (*(double *)(pFVar41 + lVar39) / dVar13);
                if (dVar14 <= 0.0) {
                  dVar13 = *(double *)(pFVar41 + lVar44) - dVar13;
                }
                else {
                  dVar13 = *(double *)(pFVar41 + lVar44) + dVar13;
                }
              }
              *(double *)(pFVar41 + lVar7) = dVar13;
              lVar46 = local_2c8;
              pFVar41 = pFVar41 + 8;
              lVar38 = lVar38 + -1;
            } while (lVar38 != 0);
            uVar42 = 0;
            if ((int)uVar43 < (param_4->AnimationTracks).ArrayNum) {
              uVar42 = uVar40;
            }
            if ((uVar42 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar41 = (param_4->AnimationTracks).AllocatorInstance.Data + local_338;
            pdVar3 = (double *)(local_330 + 0x20 + local_378);
            local_1d0 = *pdVar3;
            dStack_1c8 = pdVar3[1];
            local_1c0 = *(double *)(local_330 + 0x30 + local_378);
            local_3a0 = (float)(local_1d0 + (double)CONCAT44(uStack_324,local_328));
            fStack_39c = (float)(dStack_1c8 + (double)CONCAT44(uStack_31c,uStack_320));
            local_398 = (float)(local_1c0 + local_318);
            if (((*(FScriptContainerElement **)&pFVar41->field_0x0 <=
                  (FScriptContainerElement *)&local_3a0) &&
                ((FScriptContainerElement *)&local_3a0 <
                 *(FScriptContainerElement **)&pFVar41->field_0x0 +
                 (longlong)*(int *)(pFVar41 + 0xc) * 0xc)) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar30)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar31 = *(int *)&pFVar41[8].field_0x0;
            if (iVar31 == *(int *)(pFVar41 + 0xc)) {
              iVar31 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x40c,(ForAnyElementType *)pFVar41,(int *)(pFVar41 + 0xc));
            }
            *(int *)&pFVar41[8].field_0x0 = iVar31 + 1;
            pFVar41 = *(FScriptContainerElement **)&pFVar41->field_0x0;
            local_2b8._s_0.Z = local_318;
            *(ulonglong *)(pFVar41 + (longlong)iVar31 * 0xc) = CONCAT44(fStack_39c,local_3a0);
            local_2b8._s_0.X = (double)CONCAT44(uStack_324,local_328);
            local_2b8._s_0.Y = (double)CONCAT44(uStack_31c,uStack_320);
            *(float *)(pFVar41 + (longlong)iVar31 * 0xc + 8) = local_398;
            uVar42 = 0;
            if ((int)uVar36 < *(int *)(pFVar8 + lVar46 + 0x28)) {
              uVar42 = uVar47;
            }
            if ((uVar42 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            lVar7 = local_368;
            UE::Math::TRotator<double>::Euler
                      ((TRotator<double> *)(*(longlong *)(pFVar8 + lVar46 + 0x20) + local_368),
                       &local_1b8);
            pTVar34 = UE::Math::TRotator<double>::Euler
                                ((TRotator<double> *)(pFVar8 + lVar46 + 0x48),&local_170);
            local_310[0] = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                            UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
            local_310[1] = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                            UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
            lVar49 = 3;
            lVar38 = (longlong)&local_1b8 - (longlong)pTVar34;
            lVar45 = (longlong)&local_2a0 - (longlong)pTVar34;
            lVar44 = (longlong)&local_1a0 - (longlong)pTVar34;
            lVar39 = (longlong)local_310 - (longlong)pTVar34;
            local_310[2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            do {
              dVar13 = *(double *)&pTVar34->field0_0x0;
              dVar14 = *(double *)(lVar44 + (longlong)pTVar34);
              if ((double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & uVar26,
                                   SUB84(dVar13,0) & uVar25) <= dVar24) {
                dVar15 = (double)fVar70 * dVar14;
              }
              else {
                dVar15 = *(double *)(lVar45 + (longlong)pTVar34);
                dVar13 = (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar26,
                                          SUB84(dVar14,0) & uVar25) *
                         (*(double *)(lVar38 + (longlong)pTVar34) / dVar13);
                if (dVar14 <= 0.0) {
                  dVar15 = dVar15 - dVar13;
                }
                else {
                  dVar15 = dVar15 + dVar13;
                }
              }
              *(double *)(lVar39 + (longlong)pTVar34) = dVar15;
              pTVar34 = (TVector<double> *)((longlong)&pTVar34->field0_0x0 + 8);
              lVar49 = lVar49 + -1;
            } while (lVar49 != 0);
            uVar42 = 0;
            if ((int)uVar43 < (param_4->AnimationTracks).ArrayNum) {
              uVar42 = uVar40;
            }
            if ((uVar42 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            lVar49 = local_338;
            pFVar41 = (param_4->AnimationTracks).AllocatorInstance.Data;
            local_208.X = *(double *)(local_330 + local_378);
            local_208.Y = ((double *)(local_330 + local_378))[1];
            pdVar3 = (double *)(local_330 + 0x10 + local_378);
            local_208.Z = *pdVar3;
            local_208.W = pdVar3[1];
            pTVar33 = UE::Math::TQuat<double>::Rotator(&local_208,&local_158);
            pTVar34 = UE::Math::TRotator<double>::Euler(pTVar33,&local_140);
            local_288._s_0.Z = local_310[2] + (pTVar34->field0_0x0)._s_0.Z;
            local_288._s_0.Y = local_310[1] + (pTVar34->field0_0x0)._s_0.Y;
            local_288._s_0.X = local_310[0] + (pTVar34->field0_0x0)._s_0.X;
            pTVar33 = UE::Math::TRotator<double>::MakeFromEuler
                                (&local_128,(TVector<double> *)&local_288._s_0);
            pTVar35 = UE::Math::TRotator<double>::Quaternion(pTVar33,local_108);
            fStack_34c = (float)pTVar35->W;
            fStack_350 = (float)pTVar35->Z;
            fStack_354 = (float)pTVar35->Y;
            local_358 = (float)pTVar35->X;
            if (((*(float **)(pFVar41 + lVar49 + 0x10) <= &local_358) &&
                (&local_358 <
                 *(float **)(pFVar41 + lVar49 + 0x10) +
                 (longlong)*(int *)(pFVar41 + lVar49 + 0x1c) * 4)) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar30)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar31 = *(int *)(pFVar41 + lVar49 + 0x18);
            if (iVar31 == *(int *)(pFVar41 + lVar49 + 0x1c)) {
              iVar31 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x1010,(ForAnyElementType *)(pFVar41 + lVar49 + 0x10),
                                  (int *)(pFVar41 + lVar49 + 0x1c));
            }
            local_2a0._s_0.X = local_310[0];
            local_2a0._s_0.Y = local_310[1];
            local_378 = local_378 + 0x60;
            *(int *)(pFVar41 + lVar49 + 0x18) = iVar31 + 1;
            local_368 = lVar7 + 0x18;
            uVar36 = uVar36 + 1;
            puVar5 = (undefined8 *)
                     (*(longlong *)(pFVar41 + lVar49 + 0x10) + (longlong)iVar31 * 0x10);
            *puVar5 = CONCAT44(fStack_354,local_358);
            puVar5[1] = CONCAT44(fStack_34c,fStack_350);
            local_2a0._s_0.Z = local_310[2];
            uVar42 = local_370;
            if ((int)uVar32 <= (int)uVar36) break;
            uVar60 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
            uVar61 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          }
        }
        uVar72 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
        uVar73 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
        uVar74 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
        uVar75 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
        uVar80 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
        uVar81 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
        uVar82 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
        uVar83 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
        uVar76 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
        uVar77 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
        uVar78 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
        uVar79 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
        uVar61 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
        uVar67 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
        uVar68 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
        uVar69 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
        uVar60 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar65 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar66 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
        _Var71.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      }
      local_3a8 = local_3a8 + 1;
      uVar43 = uVar43 + 1;
    } while (uVar43 != uVar42);
  }
  return;
}

// DrawDebugWarpedTracks @ 14cf0b310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
URootMotionModifier_AdjustmentBlendWarp::DrawDebugWarpedTracks
          (URootMotionModifier_AdjustmentBlendWarp *this,float param_1)

{
  FAnimSequenceTrackContainer *this_00;
  longlong *plVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [16];
  float fVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  bool bVar20;
  int iVar21;
  undefined4 extraout_EAX;
  int iVar22;
  undefined4 extraout_EAX_00;
  UClass *pUVar23;
  AActor *this_01;
  UWorld *pUVar24;
  longlong lVar25;
  TQuat<double> *this_02;
  uint uVar26;
  URootMotionModifier_AdjustmentBlendWarp *pUVar27;
  uint uVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
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
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar55 [16];
  double dVar61;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  ulong64 uVar70;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  double dVar71;
  double dVar72;
  undefined4 uVar73;
  double dVar74;
  double dVar75;
  undefined4 uVar76;
  double dVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined4 uVar87;
  undefined4 uVar88;
  uint uVar89;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  undefined1 auStackY_6d8 [32];
  TVector<double>_u_0 local_680;
  TVector<double>_u_0 local_668;
  TVector<double>_u_0 local_650;
  TVector<double>_u_0 local_638;
  TVector<double>_u_0 local_620;
  TVector<double>_u_0 local_608;
  TQuat<double> local_5e8;
  TQuat<double> local_5c8;
  TQuat<double> local_5a8;
  TRotator<double> local_588;
  TRotator<double> local_570;
  TRotator<double> local_558;
  TRotator<double> local_540;
  TQuat<double> local_528;
  TTransform<double> local_508;
  TTransform<double> local_4a8;
  TTransform<double> local_448;
  TTransform<double> local_3e8;
  TTransform<double> local_388;
  TTransform<double> local_328;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  uint uVar54;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_6d8;
  lVar25 = this->_padding_;
  if (lVar25 != 0) {
    pUVar23 = UMotionWarpingComponent::StaticClass();
    iVar21 = (int)pUVar23->_padding_;
    if (((iVar21 <= *(int *)(*(longlong *)(lVar25 + 0x10) + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar25 + 0x10) + 0x30) + (longlong)iVar21 * 8)
         == &pUVar23->_padding_)) &&
       (plVar1 = *(longlong **)(lVar25 + 0xe0), plVar1 != (longlong *)0x0)) {
      this_01 = (AActor *)(**(code **)(*plVar1 + 0x2b0))(plVar1);
      pUVar24 = AActor::GetWorld(this_01);
      lVar25 = (**(code **)(*plVar1 + 0x2b8))(plVar1);
      if (pUVar24 != (UWorld *)0x0) {
        this_00 = &this->Result;
        iVar21 = FAnimSequenceTrackContainer::GetNum(this_00);
        if ((0 < iVar21) &&
           (*(float *)&this->_padding_ <= *(float *)((longlong)&this->_padding_ + 4))) {
          local_508.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_508.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_508.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_508.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_508.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_508.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_508.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_508.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_508.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_508.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_508.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_508.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          ExtractBoneTransformAtFrame(this,&local_508,0,0);
          uVar18 = _UNK_15061cc8c;
          uVar17 = _UNK_15061cc88;
          uVar16 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          uVar15 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          uVar28 = 0;
          lVar29 = 0;
          while( true ) {
            if (((this->Result).TrackNames.ArrayNum != (this->Result).AnimationTracks.ArrayNum) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TrackNames.Num() == AnimationTracks.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimSequence.h"
                                    ,0x51,L""), bVar20)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((this->Result).AnimationTracks.ArrayNum <= (int)uVar28) break;
            if (((int)uVar28 < 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (1 < *(int *)((this_00->AnimationTracks).AllocatorInstance.Data + lVar29 + 8)) {
              iVar21 = 0;
              while( true ) {
                uVar26 = 0;
                if ((int)uVar28 < (this->Result).AnimationTracks.ArrayNum) {
                  uVar26 = ~uVar28 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                if (*(int *)((this_00->AnimationTracks).AllocatorInstance.Data + lVar29 + 8) + -1 <=
                    iVar21) break;
                local_4a8.Rotation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[0];
                local_4a8.Rotation.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[1];
                local_4a8.Rotation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[2];
                local_4a8.Rotation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[3];
                local_4a8.Translation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                local_4a8.Translation.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[1];
                local_4a8.Translation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                local_4a8.Translation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                local_4a8.Scale3D.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[0];
                local_4a8.Scale3D.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[1];
                uVar70 = GlobalVectorConstants::Float1110.m128_u64[1];
                local_4a8.Scale3D.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[2];
                local_4a8.Scale3D.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[3];
                pUVar27 = this;
                ExtractBoneTransformAtFrame(this,&local_4a8,uVar28,iVar21);
                auVar33._8_8_ = local_508.Scale3D.XY.m128d_f64[1];
                auVar33._0_8_ = local_508.Scale3D.XY.m128d_f64[0];
                dVar71 = (double)GlobalVectorConstants::SmallNumber.m128_f32[0];
                dVar74 = (double)GlobalVectorConstants::SmallNumber.m128_f32[1];
                uVar54 = (uint)((ulonglong)local_508.Scale3D.ZW.m128d_f64[0] >> 0x20);
                auVar44._0_8_ =
                     (double)CONCAT44(uVar54 & uVar16,
                                      SUB84(local_508.Scale3D.ZW.m128d_f64[0],0) & uVar15);
                auVar44._8_4_ = SUB84(local_508.Scale3D.ZW.m128d_f64[1],0) & uVar17;
                auVar44._12_4_ =
                     (uint)((ulonglong)local_508.Scale3D.ZW.m128d_f64[1] >> 0x20) & uVar18;
                dVar77 = (double)GlobalVectorConstants::SmallNumber.m128_f32[2];
                auVar79._8_4_ = SUB84((double)GlobalVectorConstants::SmallNumber.m128_f32[3],0);
                auVar79._0_8_ = dVar77;
                auVar79._12_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::SmallNumber.m128_f32[3] >> 0x20
                          );
                uVar89 = SUB84(local_508.Scale3D.XY.m128d_f64[0],0) & uVar15;
                uVar90 = (uint)((ulonglong)local_508.Scale3D.XY.m128d_f64[0] >> 0x20) & uVar16;
                uVar91 = SUB84(local_508.Scale3D.XY.m128d_f64[1],0) & uVar17;
                uVar92 = (uint)((ulonglong)local_508.Scale3D.XY.m128d_f64[1] >> 0x20) & uVar18;
                auVar32._8_8_ = -(ulonglong)(auVar79._8_8_ < auVar44._8_8_);
                auVar32._0_8_ = -(ulonglong)(dVar77 < auVar44._0_8_);
                auVar45._8_4_ = SUB84(dVar74,0);
                auVar45._0_8_ = dVar71;
                auVar45._12_4_ = (int)((ulonglong)dVar74 >> 0x20);
                uVar26 = movmskpd((int)pUVar27,auVar32);
                auVar46._8_8_ = -(ulonglong)(auVar45._8_8_ < (double)CONCAT44(uVar92,uVar91));
                auVar46._0_8_ = -(ulonglong)(dVar71 < (double)CONCAT44(uVar90,uVar89));
                iVar22 = movmskpd(extraout_EAX,auVar46);
                if ((uVar26 & 0x3fffffff) == 0 && iVar22 == 0) {
                  local_3e8.Rotation.XY.m128d_f64 =
                       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
                  local_3e8.Rotation.ZW.m128d_f64 =
                       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
                  local_3e8.Translation.XY.m128d_f64 =
                       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
                  local_3e8.Translation.ZW.m128d_f64 =
                       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
                  local_3e8.Scale3D.XY.m128d_f64 =
                       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
                  local_3e8.Scale3D.ZW.m128d_f64 =
                       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
                }
                else {
                  auVar11._4_8_ = uVar70;
                  auVar11._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
                  auVar62._0_8_ = auVar11._0_8_ << 0x20;
                  auVar62._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
                  auVar62._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
                  auVar63._8_8_ = auVar62._8_8_;
                  auVar63._0_8_ = local_508.Scale3D.ZW.m128d_f64[0];
                  dVar9 = local_508.Rotation.XY.m128d_f64[0] *
                          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
                  dVar10 = local_508.Rotation.XY.m128d_f64[1] *
                           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
                  uVar87 = SUB84(dVar10,0);
                  uVar88 = (undefined4)((ulonglong)dVar10 >> 0x20);
                  dVar7 = local_508.Rotation.ZW.m128d_f64[0] *
                          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
                  dVar8 = local_508.Rotation.ZW.m128d_f64[1] *
                          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
                  uVar76 = (undefined4)((ulonglong)dVar8 >> 0x20);
                  auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                  auVar33);
                  lVar30 = -(ulonglong)((double)CONCAT44(uVar90,uVar89) <= dVar71);
                  lVar31 = -(ulonglong)((double)CONCAT44(uVar92,uVar91) <= dVar74);
                  local_3e8.Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar30 & auVar33._0_4_;
                  local_3e8.Scale3D.XY.m128d_f64[0]._4_4_ =
                       ~(uint)((ulonglong)lVar30 >> 0x20) & auVar33._4_4_;
                  local_3e8.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar31 & auVar33._8_4_;
                  local_3e8.Scale3D.XY.m128d_f64[1]._4_4_ =
                       ~(uint)((ulonglong)lVar31 >> 0x20) & auVar33._12_4_;
                  local_3e8.Rotation.XY.m128d_f64[1]._0_4_ = uVar87;
                  local_3e8.Rotation.XY.m128d_f64[0] = dVar9;
                  local_3e8.Rotation.XY.m128d_f64[1]._4_4_ = uVar88;
                  dVar71 = (double)CONCAT44(local_3e8.Scale3D.XY.m128d_f64[0]._4_4_,
                                            local_3e8.Scale3D.XY.m128d_f64[0]._0_4_) *
                           local_508.Translation.XY.m128d_f64[0];
                  dVar74 = (double)CONCAT44(local_3e8.Scale3D.XY.m128d_f64[1]._4_4_,
                                            local_3e8.Scale3D.XY.m128d_f64[1]._0_4_) *
                           local_508.Translation.XY.m128d_f64[1];
                  uVar73 = (undefined4)((ulonglong)dVar74 >> 0x20);
                  auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                  auVar63);
                  lVar30 = -(ulonglong)
                            ((double)CONCAT44(uVar16 & uVar54,
                                              uVar15 & SUB84(local_508.Scale3D.ZW.m128d_f64[0],0))
                            <= dVar77);
                  auVar81._8_4_ = SUB84(dVar74,0);
                  auVar81._0_8_ = dVar71;
                  auVar81._12_4_ = uVar73;
                  local_3e8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar8,0);
                  local_3e8.Rotation.ZW.m128d_f64[0] = dVar7;
                  local_3e8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar76;
                  auVar78._8_4_ = uVar87;
                  auVar78._0_8_ = dVar9;
                  auVar78._12_4_ = uVar88;
                  local_3e8.Scale3D.ZW.m128d_f64[0] =
                       (double)CONCAT44(~(uint)((ulonglong)lVar30 >> 0x20) & auVar33._4_4_,
                                        ~(uint)lVar30 & auVar33._0_4_);
                  auVar55._8_4_ = uVar87;
                  auVar55._0_8_ = dVar9;
                  auVar55._12_4_ = uVar88;
                  dVar61 = auVar55._8_8_;
                  dVar77 = local_3e8.Scale3D.ZW.m128d_f64[0] * local_508.Translation.ZW.m128d_f64[0]
                  ;
                  dVar72 = local_508.Translation.ZW.m128d_f64[1] * 0.0;
                  auVar34._8_4_ = SUB84(dVar7,0);
                  auVar34._0_8_ = dVar61;
                  auVar34._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
                  auVar47._8_4_ = SUB84(dVar74,0);
                  auVar47._0_8_ = dVar71;
                  auVar47._12_4_ = uVar73;
                  auVar3._8_4_ = SUB84(dVar72,0);
                  auVar3._0_8_ = dVar77;
                  auVar3._12_4_ = (int)((ulonglong)dVar72 >> 0x20);
                  auVar33 = blendpd(auVar47,auVar3,2);
                  auVar82._0_8_ = auVar81._8_8_ * dVar9 - dVar61 * dVar71;
                  auVar82._8_8_ = dVar77 * dVar10 - auVar34._8_8_ * dVar74;
                  auVar5._8_4_ = SUB84(dVar8,0);
                  auVar5._0_8_ = dVar7;
                  auVar5._12_4_ = uVar76;
                  auVar79 = blendpd(auVar78,auVar5,2);
                  auVar48._0_8_ = auVar33._0_8_ * dVar7 - auVar79._0_8_ * dVar77;
                  auVar48._8_8_ = auVar33._8_8_ * dVar8 - auVar79._8_8_ * dVar72;
                  dVar72 = auVar82._8_8_ + auVar82._8_8_;
                  dVar75 = auVar48._0_8_ + auVar48._0_8_;
                  auVar33 = blendpd(auVar82,auVar48,2);
                  auVar83._0_8_ = auVar33._0_8_ + auVar33._0_8_;
                  auVar83._8_8_ = auVar33._8_8_ + auVar33._8_8_;
                  uVar73 = SUB84(dVar75,0);
                  auVar64._8_4_ = uVar73;
                  auVar64._0_8_ = dVar72;
                  uVar76 = (undefined4)((ulonglong)dVar75 >> 0x20);
                  auVar64._12_4_ = uVar76;
                  auVar35._8_4_ = uVar73;
                  auVar35._0_8_ = dVar72;
                  auVar35._12_4_ = uVar76;
                  auVar56._8_4_ = uVar73;
                  auVar56._0_8_ = dVar72;
                  auVar56._12_4_ = uVar76;
                  auVar33 = blendpd(auVar56,auVar83,2);
                  auVar65._0_8_ = auVar64._8_8_ * dVar9 - dVar72 * dVar61;
                  auVar65._8_8_ = auVar83._0_8_ * dVar10 - auVar35._8_8_ * dVar7;
                  auVar36._8_4_ = SUB84(auVar83._8_8_,0);
                  auVar36._0_8_ = auVar83._0_8_;
                  auVar36._12_4_ = (int)((ulonglong)auVar83._8_8_ >> 0x20);
                  auVar57._0_8_ = auVar33._0_8_ * dVar7 - auVar83._0_8_ * auVar79._0_8_;
                  auVar57._8_8_ = auVar33._8_8_ * dVar8 - auVar36._8_8_ * auVar79._8_8_;
                  auVar37._8_4_ = SUB84(auVar65._8_8_,0);
                  auVar37._0_8_ = auVar65._0_8_;
                  auVar37._12_4_ = (int)((ulonglong)auVar65._8_8_ >> 0x20);
                  auVar33 = blendpd(auVar65,auVar57,2);
                  local_3e8.Translation.ZW.m128d_f64[1] = 0.0;
                  local_3e8.Translation.ZW.m128d_f64[0] =
                       0.0 - (auVar83._0_8_ * dVar8 + dVar77 + auVar33._0_8_);
                  local_3e8.Translation.XY.m128d_f64[1] =
                       0.0 - (dVar75 * dVar8 + dVar74 + auVar57._0_8_);
                  local_3e8.Translation.XY.m128d_f64[0] =
                       0.0 - (dVar72 * dVar8 + dVar71 + auVar37._8_8_);
                  local_3e8.Scale3D.ZW.m128d_f64[1] = 0.0;
                }
                local_1a8.Rotation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[0];
                local_1a8.Rotation.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[1];
                local_1a8.Rotation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[2];
                local_1a8.Rotation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[3];
                local_1a8.Translation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                local_1a8.Translation.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[1];
                local_1a8.Translation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                local_1a8.Translation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                local_1a8.Scale3D.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[0];
                local_1a8.Scale3D.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[1];
                local_1a8.Scale3D.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[2];
                local_1a8.Scale3D.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[3];
                UE::Math::TTransform<double>::Multiply(&local_1a8,&local_4a8,&local_3e8);
                local_388.Rotation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[0];
                local_388.Rotation.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[1];
                local_388.Rotation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[2];
                local_388.Rotation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[3];
                local_388.Translation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                local_388.Translation.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[1];
                local_388.Translation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                local_388.Translation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                local_388.Scale3D.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[0];
                local_388.Scale3D.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[1];
                local_388.Scale3D.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[2];
                local_388.Scale3D.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[3];
                UE::Math::TTransform<double>::Multiply
                          (&local_388,&local_1a8,&this->CachedMeshTransform);
                iVar21 = iVar21 + 1;
                local_4a8.Rotation.XY.m128d_f64[0] = local_388.Rotation.XY.m128d_f64[0];
                local_4a8.Rotation.XY.m128d_f64[1] = local_388.Rotation.XY.m128d_f64[1];
                local_4a8.Translation.XY.m128d_f64[0] = local_388.Translation.XY.m128d_f64[0];
                local_4a8.Translation.XY.m128d_f64[1] = local_388.Translation.XY.m128d_f64[1];
                local_4a8.Scale3D.XY.m128d_f64[0] = local_388.Scale3D.XY.m128d_f64[0];
                local_4a8.Scale3D.XY.m128d_f64[1] = local_388.Scale3D.XY.m128d_f64[1];
                local_448.Rotation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[0];
                local_448.Rotation.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[1];
                local_4a8.Rotation.ZW.m128d_f64[0] = local_388.Rotation.ZW.m128d_f64[0];
                local_4a8.Rotation.ZW.m128d_f64[1] = local_388.Rotation.ZW.m128d_f64[1];
                local_448.Rotation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[2];
                local_448.Rotation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[3];
                local_4a8.Translation.ZW.m128d_f64[0] = local_388.Translation.ZW.m128d_f64[0];
                local_4a8.Translation.ZW.m128d_f64[1] = local_388.Translation.ZW.m128d_f64[1];
                local_4a8.Scale3D.ZW.m128d_f64[0] = local_388.Scale3D.ZW.m128d_f64[0];
                local_4a8.Scale3D.ZW.m128d_f64[1] = local_388.Scale3D.ZW.m128d_f64[1];
                local_448.Translation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                local_448.Translation.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[1];
                uVar70 = GlobalVectorConstants::FloatZero.m128_u64[1];
                local_448.Translation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                local_448.Translation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                local_448.Scale3D.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[0];
                local_448.Scale3D.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[1];
                local_448.Scale3D.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[2];
                local_448.Scale3D.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[3];
                pUVar27 = this;
                ExtractBoneTransformAtFrame(this,&local_448,uVar28,iVar21);
                auVar13._8_8_ = local_508.Scale3D.XY.m128d_f64[1];
                auVar13._0_8_ = local_508.Scale3D.XY.m128d_f64[0];
                dVar71 = (double)GlobalVectorConstants::SmallNumber.m128_f32[0];
                dVar74 = (double)GlobalVectorConstants::SmallNumber.m128_f32[1];
                uVar54 = (uint)((ulonglong)local_508.Scale3D.ZW.m128d_f64[0] >> 0x20);
                auVar49._0_8_ =
                     (double)CONCAT44(uVar54 & uVar16,
                                      SUB84(local_508.Scale3D.ZW.m128d_f64[0],0) & uVar15);
                auVar49._8_4_ = SUB84(local_508.Scale3D.ZW.m128d_f64[1],0) & uVar17;
                auVar49._12_4_ =
                     (uint)((ulonglong)local_508.Scale3D.ZW.m128d_f64[1] >> 0x20) & uVar18;
                dVar77 = (double)GlobalVectorConstants::SmallNumber.m128_f32[2];
                auVar38._8_4_ = SUB84((double)GlobalVectorConstants::SmallNumber.m128_f32[3],0);
                auVar38._0_8_ = dVar77;
                auVar38._12_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::SmallNumber.m128_f32[3] >> 0x20
                          );
                uVar89 = SUB84(local_508.Scale3D.XY.m128d_f64[0],0) & uVar15;
                uVar90 = (uint)((ulonglong)local_508.Scale3D.XY.m128d_f64[0] >> 0x20) & uVar16;
                uVar91 = SUB84(local_508.Scale3D.XY.m128d_f64[1],0) & uVar17;
                uVar92 = (uint)((ulonglong)local_508.Scale3D.XY.m128d_f64[1] >> 0x20) & uVar18;
                auVar39._8_8_ = -(ulonglong)(auVar38._8_8_ < auVar49._8_8_);
                auVar39._0_8_ = -(ulonglong)(dVar77 < auVar49._0_8_);
                auVar50._8_4_ = SUB84(dVar74,0);
                auVar50._0_8_ = dVar71;
                auVar50._12_4_ = (int)((ulonglong)dVar74 >> 0x20);
                uVar26 = movmskpd((int)pUVar27,auVar39);
                auVar51._8_8_ = -(ulonglong)(auVar50._8_8_ < (double)CONCAT44(uVar92,uVar91));
                auVar51._0_8_ = -(ulonglong)(dVar71 < (double)CONCAT44(uVar90,uVar89));
                iVar22 = movmskpd(extraout_EAX_00,auVar51);
                if ((uVar26 & 0x3fffffff) == 0 && iVar22 == 0) {
                  local_328.Rotation.XY.m128d_f64 =
                       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
                  local_328.Rotation.ZW.m128d_f64 =
                       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
                  local_328.Translation.XY.m128d_f64 =
                       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
                  local_328.Translation.ZW.m128d_f64 =
                       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
                  local_328.Scale3D.XY.m128d_f64 =
                       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
                  local_328.Scale3D.ZW.m128d_f64 =
                       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
                }
                else {
                  auVar12._4_8_ = uVar70;
                  auVar12._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
                  auVar66._0_8_ = auVar12._0_8_ << 0x20;
                  auVar66._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
                  auVar66._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
                  auVar67._8_8_ = auVar66._8_8_;
                  auVar67._0_8_ = local_508.Scale3D.ZW.m128d_f64[0];
                  dVar9 = local_508.Rotation.XY.m128d_f64[0] *
                          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
                  dVar10 = local_508.Rotation.XY.m128d_f64[1] *
                           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
                  uVar87 = SUB84(dVar10,0);
                  uVar88 = (undefined4)((ulonglong)dVar10 >> 0x20);
                  dVar7 = local_508.Rotation.ZW.m128d_f64[0] *
                          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
                  dVar8 = local_508.Rotation.ZW.m128d_f64[1] *
                          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
                  uVar76 = (undefined4)((ulonglong)dVar8 >> 0x20);
                  auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                  auVar13);
                  lVar30 = -(ulonglong)((double)CONCAT44(uVar90,uVar89) <= dVar71);
                  lVar31 = -(ulonglong)((double)CONCAT44(uVar92,uVar91) <= dVar74);
                  local_328.Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar30 & auVar33._0_4_;
                  local_328.Scale3D.XY.m128d_f64[0]._4_4_ =
                       ~(uint)((ulonglong)lVar30 >> 0x20) & auVar33._4_4_;
                  local_328.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar31 & auVar33._8_4_;
                  local_328.Scale3D.XY.m128d_f64[1]._4_4_ =
                       ~(uint)((ulonglong)lVar31 >> 0x20) & auVar33._12_4_;
                  dVar71 = (double)CONCAT44(local_328.Scale3D.XY.m128d_f64[0]._4_4_,
                                            local_328.Scale3D.XY.m128d_f64[0]._0_4_) *
                           local_508.Translation.XY.m128d_f64[0];
                  dVar74 = (double)CONCAT44(local_328.Scale3D.XY.m128d_f64[1]._4_4_,
                                            local_328.Scale3D.XY.m128d_f64[1]._0_4_) *
                           local_508.Translation.XY.m128d_f64[1];
                  uVar73 = (undefined4)((ulonglong)dVar74 >> 0x20);
                  auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                  auVar67);
                  lVar30 = -(ulonglong)
                            ((double)CONCAT44(uVar16 & uVar54,
                                              uVar15 & SUB84(local_508.Scale3D.ZW.m128d_f64[0],0))
                            <= dVar77);
                  auVar84._8_4_ = SUB84(dVar74,0);
                  auVar84._0_8_ = dVar71;
                  auVar84._12_4_ = uVar73;
                  local_328.Rotation.XY.m128d_f64[1]._0_4_ = uVar87;
                  local_328.Rotation.XY.m128d_f64[0] = dVar9;
                  local_328.Rotation.XY.m128d_f64[1]._4_4_ = uVar88;
                  local_328.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar8,0);
                  local_328.Rotation.ZW.m128d_f64[0] = dVar7;
                  local_328.Rotation.ZW.m128d_f64[1]._4_4_ = uVar76;
                  local_328.Scale3D.ZW.m128d_f64[0] =
                       (double)CONCAT44(~(uint)((ulonglong)lVar30 >> 0x20) & auVar33._4_4_,
                                        ~(uint)lVar30 & auVar33._0_4_);
                  auVar80._8_4_ = uVar87;
                  auVar80._0_8_ = dVar9;
                  auVar80._12_4_ = uVar88;
                  dVar77 = local_508.Translation.ZW.m128d_f64[0] * local_328.Scale3D.ZW.m128d_f64[0]
                  ;
                  dVar72 = local_508.Translation.ZW.m128d_f64[1] * 0.0;
                  auVar6._8_4_ = SUB84(dVar8,0);
                  auVar6._0_8_ = dVar7;
                  auVar6._12_4_ = uVar76;
                  auVar79 = blendpd(auVar80,auVar6,2);
                  auVar58._8_4_ = uVar87;
                  auVar58._0_8_ = dVar9;
                  auVar58._12_4_ = uVar88;
                  dVar61 = auVar58._8_8_;
                  auVar52._8_4_ = SUB84(dVar74,0);
                  auVar52._0_8_ = dVar71;
                  auVar52._12_4_ = uVar73;
                  auVar40._8_4_ = SUB84(dVar7,0);
                  auVar40._0_8_ = dVar61;
                  auVar40._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
                  auVar4._8_4_ = SUB84(dVar72,0);
                  auVar4._0_8_ = dVar77;
                  auVar4._12_4_ = (int)((ulonglong)dVar72 >> 0x20);
                  auVar33 = blendpd(auVar52,auVar4,2);
                  auVar85._0_8_ = auVar84._8_8_ * dVar9 - dVar61 * dVar71;
                  auVar85._8_8_ = dVar77 * dVar10 - auVar40._8_8_ * dVar74;
                  auVar53._0_8_ = auVar33._0_8_ * dVar7 - auVar79._0_8_ * dVar77;
                  auVar53._8_8_ = auVar33._8_8_ * dVar8 - auVar79._8_8_ * dVar72;
                  dVar72 = auVar85._8_8_ + auVar85._8_8_;
                  dVar75 = auVar53._0_8_ + auVar53._0_8_;
                  auVar33 = blendpd(auVar85,auVar53,2);
                  auVar86._0_8_ = auVar33._0_8_ + auVar33._0_8_;
                  auVar86._8_8_ = auVar33._8_8_ + auVar33._8_8_;
                  uVar73 = SUB84(dVar75,0);
                  auVar68._8_4_ = uVar73;
                  auVar68._0_8_ = dVar72;
                  uVar76 = (undefined4)((ulonglong)dVar75 >> 0x20);
                  auVar68._12_4_ = uVar76;
                  auVar41._8_4_ = uVar73;
                  auVar41._0_8_ = dVar72;
                  auVar41._12_4_ = uVar76;
                  auVar59._8_4_ = uVar73;
                  auVar59._0_8_ = dVar72;
                  auVar59._12_4_ = uVar76;
                  auVar33 = blendpd(auVar59,auVar86,2);
                  auVar69._0_8_ = auVar68._8_8_ * dVar9 - dVar72 * dVar61;
                  auVar69._8_8_ = auVar86._0_8_ * dVar10 - auVar41._8_8_ * dVar7;
                  auVar42._8_4_ = SUB84(auVar86._8_8_,0);
                  auVar42._0_8_ = auVar86._0_8_;
                  auVar42._12_4_ = (int)((ulonglong)auVar86._8_8_ >> 0x20);
                  auVar60._0_8_ = auVar33._0_8_ * dVar7 - auVar86._0_8_ * auVar79._0_8_;
                  auVar60._8_8_ = auVar33._8_8_ * dVar8 - auVar42._8_8_ * auVar79._8_8_;
                  auVar43._8_4_ = SUB84(auVar69._8_8_,0);
                  auVar43._0_8_ = auVar69._0_8_;
                  auVar43._12_4_ = (int)((ulonglong)auVar69._8_8_ >> 0x20);
                  auVar33 = blendpd(auVar69,auVar60,2);
                  local_328.Translation.ZW.m128d_f64[1] = 0.0;
                  local_328.Translation.ZW.m128d_f64[0] =
                       0.0 - (auVar86._0_8_ * dVar8 + dVar77 + auVar33._0_8_);
                  local_328.Translation.XY.m128d_f64[1] =
                       0.0 - (dVar75 * dVar8 + dVar74 + auVar60._0_8_);
                  local_328.Translation.XY.m128d_f64[0] =
                       0.0 - (dVar72 * dVar8 + dVar71 + auVar43._8_8_);
                  local_328.Scale3D.ZW.m128d_f64[1] = 0.0;
                }
                local_148.Rotation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[0];
                local_148.Rotation.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[1];
                local_148.Rotation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[2];
                local_148.Rotation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[3];
                local_148.Translation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                local_148.Translation.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[1];
                local_148.Translation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                local_148.Translation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                local_148.Scale3D.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[0];
                local_148.Scale3D.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[1];
                local_148.Scale3D.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[2];
                local_148.Scale3D.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[3];
                UE::Math::TTransform<double>::Multiply(&local_148,&local_448,&local_328);
                local_2c8.Rotation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[0];
                local_2c8.Rotation.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[1];
                local_2c8.Rotation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[2];
                local_2c8.Rotation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[3];
                local_2c8.Translation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                local_2c8.Translation.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[1];
                local_2c8.Translation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                local_2c8.Translation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                local_2c8.Scale3D.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[0];
                local_2c8.Scale3D.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[1];
                local_2c8.Scale3D.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[2];
                local_2c8.Scale3D.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[3];
                UE::Math::TTransform<double>::Multiply
                          (&local_2c8,&local_148,&this->CachedMeshTransform);
                local_448.Rotation.XY.m128d_f64[0] = local_2c8.Rotation.XY.m128d_f64[0];
                local_448.Rotation.XY.m128d_f64[1] = local_2c8.Rotation.XY.m128d_f64[1];
                local_448.Scale3D.XY.m128d_f64[0] = local_2c8.Scale3D.XY.m128d_f64[0];
                local_448.Scale3D.XY.m128d_f64[1] = local_2c8.Scale3D.XY.m128d_f64[1];
                local_448.Rotation.ZW.m128d_f64[0] = local_2c8.Rotation.ZW.m128d_f64[0];
                local_448.Rotation.ZW.m128d_f64[1] = local_2c8.Rotation.ZW.m128d_f64[1];
                local_668._s_0.X = local_4a8.Translation.XY.m128d_f64[0];
                local_668._s_0.Y = local_4a8.Translation.XY.m128d_f64[1];
                local_448.Scale3D.ZW.m128d_f64[0] = local_2c8.Scale3D.ZW.m128d_f64[0];
                local_448.Scale3D.ZW.m128d_f64[1] = local_2c8.Scale3D.ZW.m128d_f64[1];
                local_448.Translation.XY.m128d_f64[0] = local_2c8.Translation.XY.m128d_f64[0];
                local_448.Translation.XY.m128d_f64[1] = local_2c8.Translation.XY.m128d_f64[1];
                local_448.Translation.ZW.m128d_f64[0] = local_2c8.Translation.ZW.m128d_f64[0];
                local_448.Translation.ZW.m128d_f64[1] = local_2c8.Translation.ZW.m128d_f64[1];
                local_680._s_0.X = local_2c8.Translation.XY.m128d_f64[0];
                local_680._s_0.Y = local_2c8.Translation.XY.m128d_f64[1];
                local_680._s_0.Z = local_2c8.Translation.ZW.m128d_f64[0];
                local_668._s_0.Z = local_4a8.Translation.ZW.m128d_f64[0];
                DrawDebugLine(pUVar24,(TVector<double> *)&local_668._s_0,
                              (TVector<double> *)&local_680._s_0,&FColor::Yellow,false,param_1,'\0',
                              __real_3f000000);
              }
            }
            uVar28 = uVar28 + 1;
            lVar29 = lVar29 + 0x30;
          }
          local_5e8.X = (this->CachedMeshTransform).Rotation.XY.m128d_f64[0];
          local_5e8.Y = (this->CachedMeshTransform).Rotation.XY.m128d_f64[1];
          local_5e8.Z = (this->CachedMeshTransform).Rotation.ZW.m128d_f64[0];
          local_5e8.W = (this->CachedMeshTransform).Rotation.ZW.m128d_f64[1];
          UE::Math::TQuat<double>::Rotator(&local_5e8,&local_588);
          fVar19 = __real_41a00000;
          fVar14 = __real_3f800000;
          local_650._s_0.X = (this->CachedMeshTransform).Translation.XY.m128d_f64[0];
          local_650._s_0.Y = (this->CachedMeshTransform).Translation.XY.m128d_f64[1];
          local_650._s_0.Z = (this->CachedMeshTransform).Translation.ZW.m128d_f64[0];
          DrawDebugCoordinateSystem
                    (pUVar24,(TVector<double> *)&local_650._s_0,&local_588,__real_41a00000,false,
                     param_1,'\0',__real_3f800000);
          local_5c8.X = *(double *)(lVar25 + 0x1f0);
          local_5c8.Y = *(double *)(lVar25 + 0x1f8);
          local_5c8.Z = *(double *)(lVar25 + 0x200);
          local_5c8.W = *(double *)(lVar25 + 0x208);
          UE::Math::TQuat<double>::Rotator(&local_5c8,&local_570);
          local_638._s_0.X = *(double *)(lVar25 + 0x210);
          local_638._s_0.Y = *(double *)(lVar25 + 0x218);
          local_638._s_0.Z = *(double *)(lVar25 + 0x220);
          DrawDebugCoordinateSystem
                    (pUVar24,(TVector<double> *)&local_638._s_0,&local_570,fVar19,false,param_1,'\0'
                     ,fVar14);
          this_02 = URootMotionModifier_Warp::GetTargetRotation
                              ((URootMotionModifier_Warp *)this,&local_528);
          UE::Math::TQuat<double>::Rotator(this_02,&local_558);
          fVar19 = __real_42480000;
          local_620._s_0.X = (double)this->_padding_;
          local_620._s_0.Y = (double)this->_padding_;
          local_620._s_0.Z = (double)this->_padding_;
          DrawDebugCoordinateSystem
                    (pUVar24,(TVector<double> *)&local_620._s_0,&local_558,__real_42480000,false,
                     param_1,'\0',fVar14);
          local_268.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_268.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_268.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_268.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_268.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_268.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_268.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_268.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_268.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_268.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_268.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_268.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          UE::Math::TTransform<double>::Multiply
                    (&local_268,&this->CachedRootMotion,&this->CachedMeshTransform);
          local_5a8.X = local_268.Rotation.XY.m128d_f64[0];
          local_5a8.Y = local_268.Rotation.XY.m128d_f64[1];
          local_5a8.Z = local_268.Rotation.ZW.m128d_f64[0];
          local_5a8.W = local_268.Rotation.ZW.m128d_f64[1];
          UE::Math::TQuat<double>::Rotator(&local_5a8,&local_540);
          local_208.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_208.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_208.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_208.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_208.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_208.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_208.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_208.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_208.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_208.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_208.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_208.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          UE::Math::TTransform<double>::Multiply
                    (&local_208,&this->CachedRootMotion,&this->CachedMeshTransform);
          local_608._s_0.X = local_208.Translation.XY.m128d_f64[0];
          local_608._s_0.Y = local_208.Translation.XY.m128d_f64[1];
          local_608._s_0.Z = local_208.Translation.ZW.m128d_f64[0];
          DrawDebugCoordinateSystem
                    (pUVar24,(TVector<double> *)&local_608._s_0,&local_540,fVar19,false,param_1,'\0'
                     ,fVar14);
        }
      }
    }
  }
  return;
}

// ExtractBoneTransformAtFrame @ 14cf0cb60

void __thiscall
URootMotionModifier_AdjustmentBlendWarp::ExtractBoneTransformAtFrame
          (URootMotionModifier_AdjustmentBlendWarp *this,TTransform<double> *param_1,int param_2,
          int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((-1 < param_2) && (param_2 < (this->Result).AnimationTracks.ArrayNum)) {
    uVar3 = 0;
    if (param_2 < (this->Result).AnimationTracks.ArrayNum) {
      uVar3 = (uint)~param_2 >> 0x1f;
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
    if ((-1 < param_3) &&
       (param_3 < *(int *)((this->Result).AnimationTracks.AllocatorInstance.Data +
                          (longlong)param_2 * 0x30 + 8))) {
      uVar3 = 0;
      if (param_2 < (this->Result).AnimationTracks.ArrayNum) {
        uVar3 = (uint)~param_2 >> 0x1f;
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
      FAnimationUtils::ExtractTransformForFrameFromTrack
                ((FRawAnimSequenceTrack *)
                 ((this->Result).AnimationTracks.AllocatorInstance.Data + (longlong)param_2 * 0x30),
                 param_3,param_1);
      return;
    }
  }
  *&(param_1->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(param_1->Rotation).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(param_1->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(param_1->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(param_1->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(param_1->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return;
}

// ExtractBoneTransformAtTime @ 14cf0ccd0

void __thiscall
URootMotionModifier_AdjustmentBlendWarp::ExtractBoneTransformAtTime
          (URootMotionModifier_AdjustmentBlendWarp *this,TTransform<double> *param_1,FName *param_2,
          float param_3)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar1 = (FName *)(this->Result).TrackNames.AllocatorInstance.Data;
  if (pFVar1 != pFVar1 + (this->Result).TrackNames.ArrayNum) {
    pFVar2 = pFVar1;
    do {
      if (*pFVar2 == *param_2) {
        ExtractBoneTransformAtTime
                  (this,param_1,(int)((longlong)pFVar2 - (longlong)pFVar1 >> 3),param_3);
        return;
      }
      pFVar2 = pFVar2 + 1;
    } while (pFVar2 != pFVar1 + (this->Result).TrackNames.ArrayNum);
  }
  ExtractBoneTransformAtTime(this,param_1,-1,param_3);
  return;
}

// ExtractBoneTransformAtTime @ 14cf0cd20

void __thiscall
URootMotionModifier_AdjustmentBlendWarp::ExtractBoneTransformAtTime
          (URootMotionModifier_AdjustmentBlendWarp *this,TTransform<double> *param_1,int param_2,
          float param_3)

{
  float fVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  
  if ((-1 < param_2) && (param_2 < (this->Result).AnimationTracks.ArrayNum)) {
    uVar7 = (uint)~param_2 >> 0x1f;
    uVar6 = 0;
    if (param_2 < (this->Result).AnimationTracks.ArrayNum) {
      uVar6 = uVar7;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar8 = (longlong)param_2 * 0x30;
    iVar2 = *(int *)((this->Result).AnimationTracks.AllocatorInstance.Data + lVar8 + 0x18);
    uVar6 = 0;
    if (param_2 < (this->Result).AnimationTracks.ArrayNum) {
      uVar6 = uVar7;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (this->Result).AnimationTracks.AllocatorInstance.Data;
    fVar1 = *(float *)&this->_padding_;
    fVar9 = *(float *)((longlong)&this->_padding_ + 4) - fVar1;
    if (iVar2 < *(int *)(pFVar3 + lVar8 + 8)) {
      iVar2 = *(int *)(pFVar3 + lVar8 + 8);
    }
    uVar6 = 0;
    if (param_2 < (this->Result).AnimationTracks.ArrayNum) {
      uVar6 = uVar7;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FAnimationUtils::ExtractTransformFromTrack
              ((FRawAnimSequenceTrack *)
               ((this->Result).AnimationTracks.AllocatorInstance.Data + lVar8),
               (double)(((param_3 - fVar1) / fVar9) * fVar9),iVar2,(double)fVar9,Linear,param_1);
    return;
  }
  *&(param_1->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(param_1->Rotation).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(param_1->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(param_1->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(param_1->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(param_1->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return;
}

// ExtractMotionDeltaFromRange @ 14cf0d5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
URootMotionModifier_AdjustmentBlendWarp::ExtractMotionDeltaFromRange
          (FBoneContainer *param_1,UAnimSequenceBase *param_2,float param_3,float param_4,
          float param_5,FMotionDeltaTrackContainer *param_6)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  double dVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_MotionWarping_ExtractMotionDelta> FVar14;
  TTransform<double> *pTVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  FName FVar20;
  int *piVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  FCompactPoseBoneIndex FVar24;
  float fVar25;
  undefined1 auStackY_3b8 [32];
  FCompactPoseBoneIndex local_354;
  longlong local_350;
  FColor_u_0 local_340 [2];
  int *local_338;
  double local_330;
  double dStack_328;
  double local_320;
  double local_318;
  double dStack_310;
  double local_308;
  FName local_300;
  UAnimSequenceBase *local_2f8;
  FBoneContainer *local_2f0;
  FName local_2e8;
  FName local_2e0;
  double *local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  FCSPose<FCompactPose> local_2b8;
  TRotator<double> local_268;
  TRotator<double> local_250;
  FName local_238 [2];
  TQuat<double> local_228;
  TQuat<double> local_208;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  FVar14 = StatPtr_STAT_MotionWarping_ExtractMotionDelta;
  local_2f8 = param_2;
  local_2f0 = param_1;
  if (StatPtr_STAT_MotionWarping_ExtractMotionDelta ==
      (FThreadSafeStaticStat<FStat_STAT_MotionWarping_ExtractMotionDelta>)0x0) {
    pFVar13 = ::FName::FName(local_238,"STAT_MotionWarping_ExtractMotionDelta");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_MotionWarping_ExtractMotionDelta>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MotionWarping_ExtractMotionDelta,
                        *pFVar13,L"MotionWarping ExtractMotionDelta","STATGROUP_Anim",
                        "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar14;
  bVar4 = false;
  bVar5 = false;
  local_2e0.ComparisonIndex.Value = 0;
  local_2e0.Number = 0;
  bVar9 = false;
  bVar10 = false;
  if ((FVar20.ComparisonIndex.Value.Value != 0) || (FVar20.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_340[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_340[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar4 = false;
      bVar5 = true;
      bVar9 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_300.ComparisonIndex.Value = FVar20.ComparisonIndex.Value.Value;
        local_300.Number = FVar20.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_300,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\MotionWarping\\Source\\MotionWarping\\Private\\RootMotionModifier_AdjustmentBlendWarp.cpp"
                   ,0xd8);
        bVar4 = true;
        bVar5 = true;
        bVar9 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_2e8 = FVar20;
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar9 = true;
      goto LAB_14cf0d778;
    }
  }
  bVar5 = bVar10;
  bVar4 = bVar9;
  bVar9 = false;
  local_2e8 = local_2e0;
  FVar20 = local_2e0;
LAB_14cf0d778:
  if ((param_2 == (UAnimSequenceBase *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Animation",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\MotionWarping\\Source\\MotionWarping\\Private\\RootMotionModifier_AdjustmentBlendWarp.cpp"
                          ,0xda,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar12 = (param_1->BoneIndicesArray).ArrayNum;
  local_2d0 = (double *)0x0;
  local_2c8 = 0;
  local_2c0 = 0;
  uVar23 = 1 - ((int)ROUND(__real_bf000000 - (param_4 - param_3) * (__real_40000000 / param_5)) >> 1
               );
  UMotionWarpingUtilities::ExtractLocalSpacePose
            (param_2,param_1,param_3,false,(FCompactPose *)&local_2d0);
  if (((int)local_2c8 < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_2b8.Pose._0_8_ = 0;
  local_2b8.Pose._8_8_ = 0;
  local_2b8.ComponentSpaceFlags._8_8_ = 0;
  local_f8.Rotation.XY.m128d_f64[0] = *local_2d0;
  local_f8.Rotation.XY.m128d_f64[1] = local_2d0[1];
  local_f8.Rotation.ZW.m128d_f64[0] = local_2d0[2];
  local_f8.Rotation.ZW.m128d_f64[1] = local_2d0[3];
  local_f8.Translation.XY.m128d_f64[0] = local_2d0[4];
  local_f8.Translation.XY.m128d_f64[1] = local_2d0[5];
  local_f8.Translation.ZW.m128d_f64[0] = local_2d0[6];
  local_f8.Translation.ZW.m128d_f64[1] = local_2d0[7];
  local_f8.Scale3D.XY.m128d_f64[0] = local_2d0[8];
  local_f8.Scale3D.XY.m128d_f64[1] = local_2d0[9];
  local_f8.Scale3D.ZW.m128d_f64[0] = local_2d0[10];
  local_f8.Scale3D.ZW.m128d_f64[1] = local_2d0[0xb];
  local_2b8.Pose._16_8_ = 0;
  local_2b8.ComponentSpaceFlags._0_8_ = 0;
  local_2b8.BoneMask._0_8_ = 0;
  local_2b8.BoneMask._8_8_ = 0;
  local_2b8.BonesToConvert.AllocatorInstance.Data = (FCompactPoseBoneIndex *)0x0;
  local_2b8.BonesToConvert.ArrayNum = 0;
  local_2b8.BonesToConvert.ArrayMax = 0;
  UMotionWarpingUtilities::ExtractComponentSpacePose(param_2,param_1,param_3,false,&local_2b8);
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  piVar21 = &(param_6->Tracks).ArrayMax;
  local_338 = piVar21;
  if (*piVar21 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,uVar12,(ForAnyElementType *)param_6,(param_6->Tracks).ArrayNum,piVar21);
  }
  local_354 = (FCompactPoseBoneIndex)0x0;
  if (0 < (int)uVar12) {
    do {
      pTVar15 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&local_2b8,local_354);
      UE::Math::TTransform<double>::GetRelativeTransform(pTVar15,&local_158,&local_f8);
      iVar11 = (param_6->Tracks).ArrayNum;
      if (iVar11 == *piVar21) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x860,(ForAnyElementType *)param_6,piVar21);
      }
      (param_6->Tracks).ArrayNum = iVar11 + 1;
      pFVar22 = (param_6->Tracks).AllocatorInstance.Data + (longlong)iVar11 * 0x60;
      DefaultConstructItems<FMotionDeltaTrack,int>(pFVar22,1);
      if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
      }
      if (*(int *)(pFVar22 + 0xc) < (int)uVar23) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,uVar23,(ForAnyElementType *)pFVar22,*(int *)&pFVar22[8].field_0x0,
                   (int *)(pFVar22 + 0xc));
      }
      if (*(int *)(pFVar22 + 0x1c) < (int)uVar23) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar23,(ForAnyElementType *)(pFVar22 + 0x10),
                   *(int *)&pFVar22[0x18].field_0x0,(int *)(pFVar22 + 0x1c));
      }
      if (*(int *)(pFVar22 + 0x2c) < (int)uVar23) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar23,(ForAnyElementType *)(pFVar22 + 0x20),
                   *(int *)&pFVar22[0x28].field_0x0,(int *)(pFVar22 + 0x2c));
      }
      if (((*(TTransform<double> **)&pFVar22->field_0x0 <= &local_158) &&
          (&local_158 < *(TTransform<double> **)&pFVar22->field_0x0 + *(int *)(pFVar22 + 0xc))) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar11 = *(int *)&pFVar22[8].field_0x0;
      if (iVar11 == *(int *)(pFVar22 + 0xc)) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1060,(ForAnyElementType *)pFVar22,(int *)(pFVar22 + 0xc));
      }
      *(int *)&pFVar22[8].field_0x0 = iVar11 + 1;
      pFVar1 = *(FScriptContainerElement **)&pFVar22->field_0x0;
      lVar16 = (longlong)iVar11 * 0x60;
      *(double *)(pFVar1 + lVar16) = local_158.Rotation.XY.m128d_f64[0];
      *(double *)(pFVar1 + lVar16 + 8) = local_158.Rotation.XY.m128d_f64[1];
      *(double *)(pFVar1 + lVar16 + 0x10) = local_158.Rotation.ZW.m128d_f64[0];
      *(double *)(pFVar1 + lVar16 + 0x10 + 8) = local_158.Rotation.ZW.m128d_f64[1];
      *(double *)(pFVar1 + lVar16 + 0x20) = local_158.Translation.XY.m128d_f64[0];
      *(double *)(pFVar1 + lVar16 + 0x20 + 8) = local_158.Translation.XY.m128d_f64[1];
      *(double *)(pFVar1 + lVar16 + 0x30) = local_158.Translation.ZW.m128d_f64[0];
      *(double *)(pFVar1 + lVar16 + 0x30 + 8) = local_158.Translation.ZW.m128d_f64[1];
      *(double *)(pFVar1 + lVar16 + 0x40) = local_158.Scale3D.XY.m128d_f64[0];
      *(double *)(pFVar1 + lVar16 + 0x40 + 8) = local_158.Scale3D.XY.m128d_f64[1];
      *(double *)(pFVar1 + lVar16 + 0x50) = local_158.Scale3D.ZW.m128d_f64[0];
      *(double *)(pFVar1 + lVar16 + 0x50 + 8) = local_158.Scale3D.ZW.m128d_f64[1];
      if (((*(FScriptContainerElement **)&pFVar22[0x10].field_0x0 <
            (FScriptContainerElement *)
            ((longlong)&UE::Math::TVector<double>::ZeroVector.field0_0x0 + 1)) &&
          (&UE::Math::TVector<double>::ZeroVector <
           *(FScriptContainerElement **)&pFVar22[0x10].field_0x0 +
           (longlong)*(int *)(pFVar22 + 0x1c) * 0x18)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar11 = *(int *)&pFVar22[0x18].field_0x0;
      if (iVar11 == *(int *)(pFVar22 + 0x1c)) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)(pFVar22 + 0x10),(int *)(pFVar22 + 0x1c));
      }
      *(int *)&pFVar22[0x18].field_0x0 = iVar11 + 1;
      uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      pFVar2 = *(FScriptContainerElement **)&pFVar22[0x10].field_0x0;
      pFVar1 = pFVar2 + (longlong)iVar11 * 0x18;
      *(double *)pFVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      *(undefined8 *)(pFVar1 + 8) = uVar7;
      *(double *)(pFVar2 + (longlong)iVar11 * 0x18 + 0x10) =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (((*(FScriptContainerElement **)&pFVar22[0x20].field_0x0 <
            (FScriptContainerElement *)
            ((longlong)&UE::Math::TRotator<double>::ZeroRotator.Pitch + 1)) &&
          (&UE::Math::TRotator<double>::ZeroRotator <
           (TRotator<double> *)
           (*(FScriptContainerElement **)&pFVar22[0x20].field_0x0 +
           (longlong)*(int *)(pFVar22 + 0x2c) * 0x18))) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar11 = *(int *)&pFVar22[0x28].field_0x0;
      if (iVar11 == *(int *)(pFVar22 + 0x2c)) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)(pFVar22 + 0x20),(int *)(pFVar22 + 0x2c));
      }
      *(int *)&pFVar22[0x28].field_0x0 = iVar11 + 1;
      dVar8 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      pFVar2 = *(FScriptContainerElement **)&pFVar22[0x20].field_0x0;
      pFVar1 = pFVar2 + (longlong)iVar11 * 0x18;
      *(double *)pFVar1 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      *(double *)(pFVar1 + 8) = dVar8;
      *(double *)(pFVar2 + (longlong)iVar11 * 0x18 + 0x10) =
           UE::Math::TRotator<double>::ZeroRotator.Roll;
      uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_354 = (FCompactPoseBoneIndex)((int)local_354 + 1);
      *(double *)&pFVar22[0x30].field_0x0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      *(undefined8 *)&pFVar22[0x38].field_0x0 = uVar7;
      *(double *)&pFVar22[0x40].field_0x0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dVar8 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      *(double *)&pFVar22[0x48].field_0x0 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      *(double *)&pFVar22[0x50].field_0x0 = dVar8;
      *(double *)&pFVar22[0x58].field_0x0 = UE::Math::TRotator<double>::ZeroRotator.Roll;
      piVar21 = local_338;
      param_2 = local_2f8;
      param_1 = local_2f0;
    } while ((int)local_354 < (int)uVar12);
  }
  uVar6 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar23 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_338 = (int *)(longlong)(int)uVar12;
  piVar21 = local_338;
  do {
    do {
      local_350 = (longlong)piVar21;
      if (param_4 <= param_3) {
        if (bVar5) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar4) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar9) {
          FThreadStats::AddMessage(FVar20,CycleScopeEnd);
        }
        return;
      }
      fVar25 = param_4 - param_3;
      if (param_5 <= param_4 - param_3) {
        fVar25 = param_5;
      }
      param_3 = param_3 + fVar25;
      UMotionWarpingUtilities::ExtractComponentSpacePose(param_2,param_1,param_3,false,&local_2b8);
      FVar24 = (FCompactPoseBoneIndex)0x0;
      piVar21 = (int *)local_350;
      FVar20 = local_2e8;
    } while (local_350 < 1);
    lVar16 = 0;
    do {
      uVar12 = 0;
      if ((int)FVar24 < (param_6->Tracks).ArrayNum) {
        uVar12 = ~(uint)FVar24 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar22 = (param_6->Tracks).AllocatorInstance.Data + lVar16;
      pTVar15 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&local_2b8,FVar24);
      UE::Math::TTransform<double>::GetRelativeTransform(pTVar15,&local_1b8,&local_f8);
      uVar18 = *(int *)&pFVar22[8].field_0x0 - 1;
      uVar12 = 0;
      if ((int)uVar18 < *(int *)&pFVar22[8].field_0x0) {
        uVar12 = ~uVar18 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar19 = (longlong)*(int *)&pFVar22[8].field_0x0;
      pTVar15 = *(TTransform<double> **)&pFVar22->field_0x0;
      if (((pTVar15 <= &local_1b8) && (&local_1b8 < pTVar15 + *(int *)(pFVar22 + 0xc))) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar11 = *(int *)&pFVar22[8].field_0x0;
      if (iVar11 == *(int *)(pFVar22 + 0xc)) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1060,(ForAnyElementType *)pFVar22,(int *)(pFVar22 + 0xc));
      }
      *(int *)&pFVar22[8].field_0x0 = iVar11 + 1;
      pFVar1 = *(FScriptContainerElement **)&pFVar22->field_0x0;
      lVar17 = (longlong)iVar11 * 0x60;
      *(double *)(pFVar1 + lVar17) = local_1b8.Rotation.XY.m128d_f64[0];
      *(double *)(pFVar1 + lVar17 + 8) = local_1b8.Rotation.XY.m128d_f64[1];
      *(double *)(pFVar1 + lVar17 + 0x10) = local_1b8.Rotation.ZW.m128d_f64[0];
      *(double *)(pFVar1 + lVar17 + 0x10 + 8) = local_1b8.Rotation.ZW.m128d_f64[1];
      *(double *)(pFVar1 + lVar17 + 0x20) = local_1b8.Translation.XY.m128d_f64[0];
      *(double *)(pFVar1 + lVar17 + 0x20 + 8) = local_1b8.Translation.XY.m128d_f64[1];
      *(double *)(pFVar1 + lVar17 + 0x30) = local_1b8.Translation.ZW.m128d_f64[0];
      *(double *)(pFVar1 + lVar17 + 0x30 + 8) = local_1b8.Translation.ZW.m128d_f64[1];
      *(double *)(pFVar1 + lVar17 + 0x40) = local_1b8.Scale3D.XY.m128d_f64[0];
      *(double *)(pFVar1 + lVar17 + 0x40 + 8) = local_1b8.Scale3D.XY.m128d_f64[1];
      *(double *)(pFVar1 + lVar17 + 0x50) = local_1b8.Scale3D.ZW.m128d_f64[0];
      *(double *)(pFVar1 + lVar17 + 0x50 + 8) = local_1b8.Scale3D.ZW.m128d_f64[1];
      local_1d0 = pTVar15[lVar19 + -1].Translation.XY.m128d_f64[0];
      dStack_1c8 = pTVar15[lVar19 + -1].Translation.XY.m128d_f64[1];
      local_1c0 = pTVar15[lVar19 + -1].Translation.ZW.m128d_f64[0];
      local_1e8 = local_1b8.Translation.XY.m128d_f64[0];
      dStack_1e0 = local_1b8.Translation.XY.m128d_f64[1];
      local_1d8 = local_1b8.Translation.ZW.m128d_f64[0];
      local_320 = (double)CONCAT44((uint)((ulonglong)
                                          (local_1b8.Translation.ZW.m128d_f64[0] - local_1c0) >>
                                         0x20) & uVar6,
                                   SUB84(local_1b8.Translation.ZW.m128d_f64[0] - local_1c0,0) &
                                   uVar23);
      local_330 = (double)CONCAT44((uint)((ulonglong)
                                          (local_1b8.Translation.XY.m128d_f64[0] - local_1d0) >>
                                         0x20) & uVar6,
                                   SUB84(local_1b8.Translation.XY.m128d_f64[0] - local_1d0,0) &
                                   uVar23);
      dStack_328 = (double)CONCAT44((uint)((ulonglong)
                                           (local_1b8.Translation.XY.m128d_f64[1] - dStack_1c8) >>
                                          0x20) & uVar6,
                                    SUB84(local_1b8.Translation.XY.m128d_f64[1] - dStack_1c8,0) &
                                    uVar23);
      if (((*(FScriptContainerElement **)&pFVar22[0x10].field_0x0 <=
            (FScriptContainerElement *)&local_330) &&
          ((FScriptContainerElement *)&local_330 <
           *(FScriptContainerElement **)&pFVar22[0x10].field_0x0 +
           (longlong)*(int *)(pFVar22 + 0x1c) * 0x18)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar11 = *(int *)&pFVar22[0x18].field_0x0;
      if (iVar11 == *(int *)(pFVar22 + 0x1c)) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)(pFVar22 + 0x10),(int *)(pFVar22 + 0x1c));
      }
      *(int *)&pFVar22[0x18].field_0x0 = iVar11 + 1;
      pFVar2 = *(FScriptContainerElement **)&pFVar22[0x10].field_0x0;
      pFVar1 = pFVar2 + (longlong)iVar11 * 0x18;
      *(double *)pFVar1 = local_330;
      *(double *)(pFVar1 + 8) = dStack_328;
      *(double *)(pFVar2 + (longlong)iVar11 * 0x18 + 0x10) = local_320;
      *(FScriptContainerElement **)&pFVar22[0x30].field_0x0 =
           (FScriptContainerElement *)
           (local_330 + (double)*(FScriptContainerElement **)&pFVar22[0x30].field_0x0);
      *(FScriptContainerElement **)&pFVar22[0x38].field_0x0 =
           (FScriptContainerElement *)
           (dStack_328 + (double)*(FScriptContainerElement **)&pFVar22[0x38].field_0x0);
      *(FScriptContainerElement **)&pFVar22[0x40].field_0x0 =
           (FScriptContainerElement *)
           (local_320 + (double)*(FScriptContainerElement **)&pFVar22[0x40].field_0x0);
      local_228.X = local_1b8.Rotation.XY.m128d_f64[0];
      local_228.Y = local_1b8.Rotation.XY.m128d_f64[1];
      local_228.Z = local_1b8.Rotation.ZW.m128d_f64[0];
      local_228.W = local_1b8.Rotation.ZW.m128d_f64[1];
      UE::Math::TQuat<double>::Rotator(&local_228,&local_268);
      local_208.X = pTVar15[lVar19 + -1].Rotation.XY.m128d_f64[0];
      local_208.Y = pTVar15[lVar19 + -1].Rotation.XY.m128d_f64[1];
      local_208.Z = pTVar15[lVar19 + -1].Rotation.ZW.m128d_f64[0];
      local_208.W = pTVar15[lVar19 + -1].Rotation.ZW.m128d_f64[1];
      UE::Math::TQuat<double>::Rotator(&local_208,&local_250);
      local_318 = (double)CONCAT44((uint)((ulonglong)(local_268.Pitch - local_250.Pitch) >> 0x20) &
                                   uVar6,SUB84(local_268.Pitch - local_250.Pitch,0) & uVar23);
      dStack_310 = (double)CONCAT44((uint)((ulonglong)(local_268.Yaw - local_250.Yaw) >> 0x20) &
                                    uVar6,SUB84(local_268.Yaw - local_250.Yaw,0) & uVar23);
      local_308 = (double)CONCAT44((uint)((ulonglong)(local_268.Roll - local_250.Roll) >> 0x20) &
                                   uVar6,SUB84(local_268.Roll - local_250.Roll,0) & uVar23);
      if (((*(FScriptContainerElement **)&pFVar22[0x20].field_0x0 <=
            (FScriptContainerElement *)&local_318) &&
          ((FScriptContainerElement *)&local_318 <
           *(FScriptContainerElement **)&pFVar22[0x20].field_0x0 +
           (longlong)*(int *)(pFVar22 + 0x2c) * 0x18)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar11 = *(int *)&pFVar22[0x28].field_0x0;
      if (iVar11 == *(int *)(pFVar22 + 0x2c)) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)(pFVar22 + 0x20),(int *)(pFVar22 + 0x2c));
      }
      FVar24 = (FCompactPoseBoneIndex)((int)FVar24 + 1);
      *(int *)&pFVar22[0x28].field_0x0 = iVar11 + 1;
      lVar16 = lVar16 + 0x60;
      local_350 = local_350 + -1;
      pFVar2 = *(FScriptContainerElement **)&pFVar22[0x20].field_0x0;
      pFVar1 = pFVar2 + (longlong)iVar11 * 0x18;
      *(double *)pFVar1 = local_318;
      *(double *)(pFVar1 + 8) = dStack_310;
      *(double *)(pFVar2 + (longlong)iVar11 * 0x18 + 0x10) = local_308;
      *(FScriptContainerElement **)&pFVar22[0x48].field_0x0 =
           (FScriptContainerElement *)
           (local_318 + (double)*(FScriptContainerElement **)&pFVar22[0x48].field_0x0);
      *(FScriptContainerElement **)&pFVar22[0x50].field_0x0 =
           (FScriptContainerElement *)
           (dStack_310 + (double)*(FScriptContainerElement **)&pFVar22[0x50].field_0x0);
      *(FScriptContainerElement **)&pFVar22[0x58].field_0x0 =
           (FScriptContainerElement *)
           (local_308 + (double)*(FScriptContainerElement **)&pFVar22[0x58].field_0x0);
      piVar21 = local_338;
      FVar20 = local_2e8;
      param_2 = local_2f8;
      param_1 = local_2f0;
    } while (local_350 != 0);
  } while( true );
}

// ExtractWarpedRootMotion @ 14cf0ea10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
URootMotionModifier_AdjustmentBlendWarp::ExtractWarpedRootMotion
          (URootMotionModifier_AdjustmentBlendWarp *this,TTransform<double> *__return_storage_ptr__)

{
  undefined1 auStack_f8 [32];
  TTransform<double> local_d8;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_d8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_d8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_d8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_d8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_d8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_d8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_d8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  ExtractBoneTransformAtTime(this,&local_d8,0,*(float *)&this->_padding_);
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
  ExtractBoneTransformAtTime(this,&local_78,0,*(float *)((longlong)&this->_padding_ + 4));
  UE::Math::TTransform<double>::GetRelativeTransform(&local_78,__return_storage_ptr__,&local_d8);
  return __return_storage_ptr__;
}

// GetAdjustmentBlendIKBoneTransformAndAlpha @ 14cf0efe0

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
URootMotionModifier_AdjustmentBlendWarp::GetAdjustmentBlendIKBoneTransformAndAlpha
          (ACharacter *param_1,FName param_2,TTransform<double> *param_3,float *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  URootMotionModifier_AdjustmentBlendWarp *this;
  bool bVar5;
  longlong lVar6;
  UClass *pUVar7;
  FAnimMontageInstance *pFVar8;
  UAnimMontage *pUVar9;
  undefined8 *puVar10;
  undefined1 local_res8 [8];
  UClass *local_res18;
  float *local_res20;
  
  *&(param_3->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(param_3->Rotation).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(param_3->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(param_3->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(param_3->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(param_3->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *param_4 = 0.0;
  if (param_1 != (ACharacter *)0x0) {
    pcVar4 = *(code **)(*(longlong *)param_1 + 0x738);
    local_res20 = param_4;
    local_res18 = UMotionWarpingComponent::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    lVar6 = (*pcVar4)(param_1,&local_res18);
    if (lVar6 != 0) {
      puVar10 = *(undefined8 **)(lVar6 + 0xe8);
      iVar2 = *(int *)(lVar6 + 0xf0);
      puVar1 = puVar10 + iVar2;
      do {
        if (*(int *)(lVar6 + 0xf0) != iVar2) {
          `TCheckedPointerIterator<URootMotionModifier_*_const,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res8);
        }
        if (puVar10 == puVar1) {
          return;
        }
        this = (URootMotionModifier_AdjustmentBlendWarp *)*puVar10;
        if ((this != (URootMotionModifier_AdjustmentBlendWarp *)0x0) &&
           ((char)this->_padding_ == '\x01')) {
          pUVar7 = StaticClass();
          iVar3 = (int)pUVar7->_padding_;
          if ((iVar3 <= *(int *)(this->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
              &pUVar7->_padding_)) {
            pFVar8 = ACharacter::GetRootMotionAnimMontageInstance(param_1);
            if (pFVar8 == (FAnimMontageInstance *)0x0) {
              pUVar9 = (UAnimMontage *)0x0;
            }
            else {
              pUVar9 = (pFVar8->Montage).field0_0x0.DebugPtr;
            }
            bVar5 = TWeakObjectPtr<UAnimSequenceBase_const_,FWeakObjectPtr>::
                    UEOpEquals<UAnimMontage,bool>
                              ((TWeakObjectPtr<UAnimSequenceBase_const_,FWeakObjectPtr> *)
                               &this->_padding_,pUVar9);
            if (bVar5) {
              GetIKBoneTransformAndAlpha(this,param_2,param_3,local_res20);
              return;
            }
          }
        }
        puVar10 = puVar10 + 1;
      } while( true );
    }
  }
  return;
}

// GetIKBoneTransformAndAlpha @ 14cf0f3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
URootMotionModifier_AdjustmentBlendWarp::GetIKBoneTransformAndAlpha
          (URootMotionModifier_AdjustmentBlendWarp *this,FName param_1,TTransform<double> *param_2,
          float *param_3)

{
  FName *pFVar1;
  code *pcVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [12];
  bool bVar13;
  undefined4 extraout_EAX;
  int iVar14;
  uint uVar15;
  FName *pFVar16;
  URootMotionModifier_AdjustmentBlendWarp *pUVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
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
  double dVar33;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  undefined4 uVar40;
  double dVar41;
  undefined4 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  undefined1 auStack_2c8 [32];
  TTransform<double> local_2a8;
  TTransform<double> local_248;
  TTransform<double> local_1e8;
  TTransform<double> local_188;
  TTransform<double> local_128;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  if (((this->Result).TrackNames.ArrayNum != (this->Result).AnimationTracks.ArrayNum) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("TrackNames.Num() == AnimationTracks.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimSequence.h"
                          ,0x51,L""), bVar13)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->Result).AnimationTracks.ArrayNum != 0) && (this->bWarpIKBones != false)) {
    pFVar16 = (FName *)(this->IKBones).AllocatorInstance.Data;
    pFVar1 = pFVar16 + (this->IKBones).ArrayNum;
    for (; pFVar16 != pFVar1; pFVar16 = pFVar16 + 1) {
      if (*pFVar16 == param_1) {
        local_2a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_2a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_2a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_2a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_2a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_2a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_2a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_2a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_2a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_2a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_2a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_2a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        ExtractBoneTransformAtTime(this,&local_2a8,0,0.0);
        pFVar1 = (FName *)(this->Result).TrackNames.AllocatorInstance.Data;
        local_188.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_188.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_188.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_188.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_188.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_188.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_188.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_188.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_188.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_188.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_188.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_188.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        pFVar16 = pFVar1;
        goto joined_r0x00014cf0f5c4;
      }
    }
  }
  *&(param_2->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(param_2->Rotation).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(param_2->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(param_2->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(param_2->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(param_2->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *param_3 = 0.0;
  return;
joined_r0x00014cf0f5c4:
  if (pFVar16 == pFVar1 + (this->Result).TrackNames.ArrayNum) {
    iVar14 = -1;
LAB_14cf0f5de:
    auVar34 = ZEXT416((uint)*(float *)&this->_padding_);
    pUVar17 = this;
    ExtractBoneTransformAtTime(this,&local_188,iVar14,*(float *)&this->_padding_);
    uVar3 = (uint)((ulonglong)local_2a8.Scale3D.ZW.m128d_f64[0] >> 0x20);
    auVar26._8_8_ = local_2a8.Scale3D.XY.m128d_f64[1];
    auVar26._0_8_ = local_2a8.Scale3D.XY.m128d_f64[0];
    auVar29._0_8_ =
         (double)CONCAT44(uVar3 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(local_2a8.Scale3D.ZW.m128d_f64[0],0) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar29._8_4_ = SUB84(local_2a8.Scale3D.ZW.m128d_f64[1],0) & _UNK_15061cc88;
    auVar29._12_4_ = (uint)((ulonglong)local_2a8.Scale3D.ZW.m128d_f64[1] >> 0x20) & _UNK_15061cc8c;
    uVar51 = SUB84(local_2a8.Scale3D.XY.m128d_f64[0],0) &
             (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar52 = (uint)((ulonglong)local_2a8.Scale3D.XY.m128d_f64[0] >> 0x20) &
             __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar53 = SUB84(local_2a8.Scale3D.XY.m128d_f64[1],0) & _UNK_15061cc88;
    uVar54 = (uint)((ulonglong)local_2a8.Scale3D.XY.m128d_f64[1] >> 0x20) & _UNK_15061cc8c;
    auVar25._8_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar29._8_8_);
    auVar25._0_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar29._0_8_);
    uVar15 = movmskpd((int)pUVar17,auVar25);
    auVar44._8_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < (double)CONCAT44(uVar54,uVar53))
    ;
    auVar44._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < (double)CONCAT44(uVar52,uVar51))
    ;
    iVar14 = movmskpd(extraout_EAX,auVar44);
    if ((uVar15 & 0x3fffffff) == 0 && iVar14 == 0) {
      local_248.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_248.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_248.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_248.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_248.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_248.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      auVar12._4_8_ = auVar34._8_8_;
      auVar12._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
      auVar35._0_8_ = auVar12._0_8_ << 0x20;
      auVar35._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar35._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar36._8_8_ = auVar35._8_8_;
      auVar36._0_8_ = local_2a8.Scale3D.ZW.m128d_f64[0];
      lVar18 = -(ulonglong)
                ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & uVar3,
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                  SUB84(local_2a8.Scale3D.ZW.m128d_f64[0],0)) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar26);
      lVar19 = -(ulonglong)
                ((double)CONCAT44(uVar52,uVar51) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
      lVar20 = -(ulonglong)
                ((double)CONCAT44(uVar54,uVar53) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
      local_248.Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar19 & auVar26._0_4_;
      local_248.Scale3D.XY.m128d_f64[0]._4_4_ = ~(uint)((ulonglong)lVar19 >> 0x20) & auVar26._4_4_;
      local_248.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar20 & auVar26._8_4_;
      local_248.Scale3D.XY.m128d_f64[1]._4_4_ = ~(uint)((ulonglong)lVar20 >> 0x20) & auVar26._12_4_;
      auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar36);
      local_248.Scale3D.ZW.m128d_f64[0] =
           (double)CONCAT44(~(uint)((ulonglong)lVar18 >> 0x20) & auVar26._4_4_,
                            ~(uint)lVar18 & auVar26._0_4_);
      dVar8 = local_2a8.Rotation.ZW.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar9 = local_2a8.Rotation.ZW.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      uVar48 = (undefined4)((ulonglong)dVar9 >> 0x20);
      dVar10 = local_2a8.Rotation.XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar11 = local_2a8.Rotation.XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      uVar49 = SUB84(dVar11,0);
      uVar50 = (undefined4)((ulonglong)dVar11 >> 0x20);
      dVar4 = local_2a8.Translation.XY.m128d_f64[0] *
              (double)CONCAT44(local_248.Scale3D.XY.m128d_f64[0]._4_4_,
                               local_248.Scale3D.XY.m128d_f64[0]._0_4_);
      dVar5 = local_2a8.Translation.XY.m128d_f64[1] *
              (double)CONCAT44(local_248.Scale3D.XY.m128d_f64[1]._4_4_,
                               local_248.Scale3D.XY.m128d_f64[1]._0_4_);
      uVar40 = (undefined4)((ulonglong)dVar5 >> 0x20);
      auVar30._8_4_ = uVar49;
      auVar30._0_8_ = dVar10;
      auVar30._12_4_ = uVar50;
      dVar33 = auVar30._8_8_;
      auVar21._8_4_ = SUB84(dVar8,0);
      auVar21._0_8_ = dVar33;
      auVar21._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      dVar6 = local_2a8.Translation.ZW.m128d_f64[0] * local_248.Scale3D.ZW.m128d_f64[0];
      dVar39 = local_2a8.Translation.ZW.m128d_f64[1] * 0.0;
      auVar45._8_4_ = SUB84(dVar5,0);
      auVar45._0_8_ = dVar4;
      auVar45._12_4_ = uVar40;
      auVar43._8_4_ = uVar49;
      auVar43._0_8_ = dVar10;
      auVar43._12_4_ = uVar50;
      auVar27._8_4_ = SUB84(dVar5,0);
      auVar27._0_8_ = dVar4;
      auVar27._12_4_ = uVar40;
      auVar34._8_4_ = SUB84(dVar39,0);
      auVar34._0_8_ = dVar6;
      auVar34._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
      auVar26 = blendpd(auVar27,auVar34,2);
      auVar46._0_8_ = auVar45._8_8_ * dVar10 - dVar33 * dVar4;
      auVar46._8_8_ = dVar6 * dVar11 - auVar21._8_8_ * dVar5;
      auVar7._8_4_ = SUB84(dVar9,0);
      auVar7._0_8_ = dVar8;
      auVar7._12_4_ = uVar48;
      auVar44 = blendpd(auVar43,auVar7,2);
      auVar28._0_8_ = auVar26._0_8_ * dVar8 - auVar44._0_8_ * dVar6;
      auVar28._8_8_ = auVar26._8_8_ * dVar9 - auVar44._8_8_ * dVar39;
      dVar39 = auVar46._8_8_ + auVar46._8_8_;
      dVar41 = auVar28._0_8_ + auVar28._0_8_;
      auVar26 = blendpd(auVar46,auVar28,2);
      auVar47._0_8_ = auVar26._0_8_ + auVar26._0_8_;
      auVar47._8_8_ = auVar26._8_8_ + auVar26._8_8_;
      uVar40 = SUB84(dVar41,0);
      auVar37._8_4_ = uVar40;
      auVar37._0_8_ = dVar39;
      uVar42 = (undefined4)((ulonglong)dVar41 >> 0x20);
      auVar37._12_4_ = uVar42;
      auVar22._8_4_ = uVar40;
      auVar22._0_8_ = dVar39;
      auVar22._12_4_ = uVar42;
      auVar31._8_4_ = uVar40;
      auVar31._0_8_ = dVar39;
      auVar31._12_4_ = uVar42;
      auVar26 = blendpd(auVar31,auVar47,2);
      auVar38._0_8_ = auVar37._8_8_ * dVar10 - dVar39 * dVar33;
      auVar38._8_8_ = auVar47._0_8_ * dVar11 - auVar22._8_8_ * dVar8;
      auVar23._8_4_ = SUB84(auVar47._8_8_,0);
      auVar23._0_8_ = auVar47._0_8_;
      auVar23._12_4_ = (int)((ulonglong)auVar47._8_8_ >> 0x20);
      auVar32._0_8_ = auVar26._0_8_ * dVar8 - auVar47._0_8_ * auVar44._0_8_;
      auVar32._8_8_ = auVar26._8_8_ * dVar9 - auVar23._8_8_ * auVar44._8_8_;
      auVar24._8_4_ = SUB84(auVar38._8_8_,0);
      auVar24._0_8_ = auVar38._0_8_;
      auVar24._12_4_ = (int)((ulonglong)auVar38._8_8_ >> 0x20);
      auVar26 = blendpd(auVar38,auVar32,2);
      local_248.Rotation.XY.m128d_f64[1]._0_4_ = uVar49;
      local_248.Rotation.XY.m128d_f64[0] = dVar10;
      local_248.Rotation.XY.m128d_f64[1]._4_4_ = uVar50;
      local_248.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar9,0);
      local_248.Rotation.ZW.m128d_f64[0] = dVar8;
      local_248.Rotation.ZW.m128d_f64[1]._4_4_ = uVar48;
      local_248.Translation.ZW.m128d_f64[1] = 0.0;
      local_248.Translation.ZW.m128d_f64[0] = 0.0 - (auVar47._0_8_ * dVar9 + dVar6 + auVar26._0_8_);
      local_248.Scale3D.ZW.m128d_f64[1] = 0.0;
      local_248.Translation.XY.m128d_f64[1] = 0.0 - (dVar41 * dVar9 + dVar5 + auVar32._0_8_);
      local_248.Translation.XY.m128d_f64[0] = 0.0 - (dVar39 * dVar9 + dVar4 + auVar24._8_8_);
    }
    local_128.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_128.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_128.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_128.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_128.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_128.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_128.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_128.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_128.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_128.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_128.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_128.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_128,&local_188,&local_248);
    local_1e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_1e8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_1e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_1e8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_1e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_1e8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_1e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_1e8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_1e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_1e8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_1e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_1e8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_1e8,&local_128,&this->CachedMeshTransform);
    (param_2->Rotation).XY.m128d_f64[0] = local_1e8.Rotation.XY.m128d_f64[0];
    (param_2->Rotation).XY.m128d_f64[1] = local_1e8.Rotation.XY.m128d_f64[1];
    (param_2->Rotation).ZW.m128d_f64[0] = local_1e8.Rotation.ZW.m128d_f64[0];
    (param_2->Rotation).ZW.m128d_f64[1] = local_1e8.Rotation.ZW.m128d_f64[1];
    (param_2->Translation).XY.m128d_f64[0] = local_1e8.Translation.XY.m128d_f64[0];
    (param_2->Translation).XY.m128d_f64[1] = local_1e8.Translation.XY.m128d_f64[1];
    (param_2->Translation).ZW.m128d_f64[0] = local_1e8.Translation.ZW.m128d_f64[0];
    (param_2->Translation).ZW.m128d_f64[1] = local_1e8.Translation.ZW.m128d_f64[1];
    (param_2->Scale3D).XY.m128d_f64[0] = local_1e8.Scale3D.XY.m128d_f64[0];
    (param_2->Scale3D).XY.m128d_f64[1] = local_1e8.Scale3D.XY.m128d_f64[1];
    (param_2->Scale3D).ZW.m128d_f64[0] = local_1e8.Scale3D.ZW.m128d_f64[0];
    (param_2->Scale3D).ZW.m128d_f64[1] = local_1e8.Scale3D.ZW.m128d_f64[1];
    *param_3 = *(float *)&this->_padding_;
    return;
  }
  if (*pFVar16 == param_1) {
    iVar14 = (int)((longlong)pFVar16 - (longlong)pFVar1 >> 3);
    goto LAB_14cf0f5de;
  }
  pFVar16 = pFVar16 + 1;
  goto joined_r0x00014cf0f5c4;
}

// GetPrivateStaticClass @ 14cf10b00

UClass * __cdecl URootMotionModifier_AdjustmentBlendWarp::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URootMotionModifier_AdjustmentBlendWarp.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"RootMotionModifier_AdjustmentBlendWarp",
               &Z_Registration_Info_UClass_URootMotionModifier_AdjustmentBlendWarp.InnerSingleton,
               StaticRegisterNativesURootMotionModifier_AdjustmentBlendWarp,0x4c0,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<URootMotionModifier_AdjustmentBlendWarp>,
               InternalVTableHelperCtorCaller<URootMotionModifier_AdjustmentBlendWarp>,local_res8,
               URootMotionModifier_Warp::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URootMotionModifier_AdjustmentBlendWarp.InnerSingleton;
}

// OnTargetTransformChanged @ 14cf13260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
URootMotionModifier_AdjustmentBlendWarp::OnTargetTransformChanged
          (URootMotionModifier_AdjustmentBlendWarp *this)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  FRawAnimSequenceTrack *pFVar6;
  double dVar7;
  UClass *pUVar8;
  USceneComponent *this_00;
  UAnimSequenceBase *pUVar9;
  TTransform<double> *pTVar10;
  undefined1 auStackY_c8 [32];
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  lVar5 = this->_padding_;
  if (lVar5 != 0) {
    pUVar8 = UMotionWarpingComponent::StaticClass();
    iVar4 = (int)pUVar8->_padding_;
    if (((iVar4 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar4 * 8)
         == &pUVar8->_padding_)) && (*(longlong **)(lVar5 + 0xe0) != (longlong *)0x0)) {
      this_00 = (USceneComponent *)(**(code **)(**(longlong **)(lVar5 + 0xe0) + 0x2b8))();
      if (this_00 != (USceneComponent *)0x0) {
        fVar2 = *(float *)((longlong)&this->_padding_ + 4);
        fVar3 = *(float *)&this->_padding_;
        *(float *)&this->_padding_ = fVar3;
        pUVar9 = (UAnimSequenceBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pTVar10 = UMotionWarpingUtilities::ExtractRootMotionFromAnimation
                            (&local_98,pUVar9,fVar3,fVar2);
        dVar7 = (pTVar10->Rotation).XY.m128d_f64[1];
        (this->CachedRootMotion).Rotation.XY.m128d_f64[0] = (pTVar10->Rotation).XY.m128d_f64[0];
        (this->CachedRootMotion).Rotation.XY.m128d_f64[1] = dVar7;
        dVar7 = (pTVar10->Rotation).ZW.m128d_f64[1];
        (this->CachedRootMotion).Rotation.ZW.m128d_f64[0] = (pTVar10->Rotation).ZW.m128d_f64[0];
        (this->CachedRootMotion).Rotation.ZW.m128d_f64[1] = dVar7;
        dVar7 = (pTVar10->Translation).XY.m128d_f64[1];
        (this->CachedRootMotion).Translation.XY.m128d_f64[0] =
             (pTVar10->Translation).XY.m128d_f64[0];
        (this->CachedRootMotion).Translation.XY.m128d_f64[1] = dVar7;
        dVar7 = (pTVar10->Translation).ZW.m128d_f64[1];
        (this->CachedRootMotion).Translation.ZW.m128d_f64[0] =
             (pTVar10->Translation).ZW.m128d_f64[0];
        (this->CachedRootMotion).Translation.ZW.m128d_f64[1] = dVar7;
        dVar7 = (pTVar10->Scale3D).XY.m128d_f64[1];
        (this->CachedRootMotion).Scale3D.XY.m128d_f64[0] = (pTVar10->Scale3D).XY.m128d_f64[0];
        (this->CachedRootMotion).Scale3D.XY.m128d_f64[1] = dVar7;
        dVar7 = (pTVar10->Scale3D).ZW.m128d_f64[1];
        (this->CachedRootMotion).Scale3D.ZW.m128d_f64[0] = (pTVar10->Scale3D).ZW.m128d_f64[0];
        (this->CachedRootMotion).Scale3D.ZW.m128d_f64[1] = dVar7;
        pTVar10 = USceneComponent::GetRelativeTransform(this_00,&local_98);
        piVar1 = &(this->Result).AnimationTracks.ArrayMax;
        dVar7 = (pTVar10->Rotation).XY.m128d_f64[1];
        (this->CachedMeshRelativeTransform).Rotation.XY.m128d_f64[0] =
             (pTVar10->Rotation).XY.m128d_f64[0];
        (this->CachedMeshRelativeTransform).Rotation.XY.m128d_f64[1] = dVar7;
        dVar7 = (pTVar10->Rotation).ZW.m128d_f64[1];
        (this->CachedMeshRelativeTransform).Rotation.ZW.m128d_f64[0] =
             (pTVar10->Rotation).ZW.m128d_f64[0];
        (this->CachedMeshRelativeTransform).Rotation.ZW.m128d_f64[1] = dVar7;
        dVar7 = (pTVar10->Translation).XY.m128d_f64[1];
        (this->CachedMeshRelativeTransform).Translation.XY.m128d_f64[0] =
             (pTVar10->Translation).XY.m128d_f64[0];
        (this->CachedMeshRelativeTransform).Translation.XY.m128d_f64[1] = dVar7;
        dVar7 = (pTVar10->Translation).ZW.m128d_f64[1];
        (this->CachedMeshRelativeTransform).Translation.ZW.m128d_f64[0] =
             (pTVar10->Translation).ZW.m128d_f64[0];
        (this->CachedMeshRelativeTransform).Translation.ZW.m128d_f64[1] = dVar7;
        dVar7 = (pTVar10->Scale3D).XY.m128d_f64[1];
        (this->CachedMeshRelativeTransform).Scale3D.XY.m128d_f64[0] =
             (pTVar10->Scale3D).XY.m128d_f64[0];
        (this->CachedMeshRelativeTransform).Scale3D.XY.m128d_f64[1] = dVar7;
        dVar7 = (pTVar10->Scale3D).ZW.m128d_f64[1];
        (this->CachedMeshRelativeTransform).Scale3D.ZW.m128d_f64[0] =
             (pTVar10->Scale3D).ZW.m128d_f64[0];
        (this->CachedMeshRelativeTransform).Scale3D.ZW.m128d_f64[1] = dVar7;
        dVar7 = (this_00->ComponentToWorld).Rotation.XY.m128d_f64[1];
        (this->CachedMeshTransform).Rotation.XY.m128d_f64[0] =
             (this_00->ComponentToWorld).Rotation.XY.m128d_f64[0];
        (this->CachedMeshTransform).Rotation.XY.m128d_f64[1] = dVar7;
        dVar7 = (this_00->ComponentToWorld).Rotation.ZW.m128d_f64[1];
        (this->CachedMeshTransform).Rotation.ZW.m128d_f64[0] =
             (this_00->ComponentToWorld).Rotation.ZW.m128d_f64[0];
        (this->CachedMeshTransform).Rotation.ZW.m128d_f64[1] = dVar7;
        dVar7 = (this_00->ComponentToWorld).Translation.XY.m128d_f64[1];
        (this->CachedMeshTransform).Translation.XY.m128d_f64[0] =
             (this_00->ComponentToWorld).Translation.XY.m128d_f64[0];
        (this->CachedMeshTransform).Translation.XY.m128d_f64[1] = dVar7;
        dVar7 = (this_00->ComponentToWorld).Translation.ZW.m128d_f64[1];
        (this->CachedMeshTransform).Translation.ZW.m128d_f64[0] =
             (this_00->ComponentToWorld).Translation.ZW.m128d_f64[0];
        (this->CachedMeshTransform).Translation.ZW.m128d_f64[1] = dVar7;
        dVar7 = (this_00->ComponentToWorld).Scale3D.XY.m128d_f64[1];
        (this->CachedMeshTransform).Scale3D.XY.m128d_f64[0] =
             (this_00->ComponentToWorld).Scale3D.XY.m128d_f64[0];
        (this->CachedMeshTransform).Scale3D.XY.m128d_f64[1] = dVar7;
        dVar7 = (this_00->ComponentToWorld).Scale3D.ZW.m128d_f64[1];
        (this->CachedMeshTransform).Scale3D.ZW.m128d_f64[0] =
             (this_00->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
        (this->CachedMeshTransform).Scale3D.ZW.m128d_f64[1] = dVar7;
        pFVar6 = (FRawAnimSequenceTrack *)(this->Result).AnimationTracks.AllocatorInstance.Data;
        iVar4 = (this->Result).AnimationTracks.ArrayNum;
        if (*piVar1 < 0) {
          DestructItems<FRawAnimSequenceTrack,int>(pFVar6,iVar4);
          (this->Result).AnimationTracks.ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,0,(ForAnyElementType *)&this->Result,0,piVar1);
          }
        }
        else {
          DestructItems<FRawAnimSequenceTrack,int>(pFVar6,iVar4);
          (this->Result).AnimationTracks.ArrayNum = 0;
        }
        iVar4 = (this->Result).TrackNames.ArrayMax;
        (this->Result).TrackNames.ArrayNum = 0;
        if (iVar4 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,0,&(this->Result).TrackNames.AllocatorInstance,0,
                     &(this->Result).TrackNames.ArrayMax);
        }
      }
    }
  }
  return;
}

// PrecomputeWarpedTracks @ 14cf13860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
URootMotionModifier_AdjustmentBlendWarp::PrecomputeWarpedTracks
          (URootMotionModifier_AdjustmentBlendWarp *this)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  FName FVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined1 auVar14 [12];
  ulonglong uVar15;
  FReferenceSkeleton *pFVar16;
  bool bVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<FStat_STAT_MotionWarping_PrecomputeWarpedTracks> FVar22;
  UClass *pUVar23;
  USkeletalMeshComponent *this_00;
  UAnimInstance *this_01;
  FBoneContainer *this_02;
  UObject *pUVar24;
  UAnimSequenceBase *pUVar25;
  TQuat<double> *pTVar26;
  TTransform<double> *pTVar27;
  FScriptContainerElement *pFVar28;
  FCompactPoseBoneIndex FVar29;
  FName *pFVar30;
  longlong lVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  undefined8 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar56;
  double dVar57;
  double dVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  uint uVar62;
  uint uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined1 auStackY_788 [32];
  undefined2 local_728;
  undefined1 local_726 [6];
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_720;
  FName local_710;
  byte local_708;
  FColor_u_0 local_700 [2];
  FMotionDeltaTrackContainer local_6f8;
  FCurveFilterSettings local_6e8;
  undefined1 local_6d8 [16];
  FBoneContainer *local_6c8;
  ForElementType<unsigned_char> FStack_6c0;
  undefined8 local_6b8;
  TTypedIndexRange<FCompactPoseBoneIndex,TArray<unsigned_char,TMemStackAllocator<0>_>_> local_6b0;
  ForElementType<FCompactPoseBoneIndex> local_6a0;
  undefined8 local_698;
  FName local_688 [2];
  FCSPose<FCompactPose> local_678;
  TArrayView<unsigned_short_const_,int> local_628;
  TQuat<double> local_618;
  undefined4 local_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined4 local_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  TVector<double>_u_0 local_5d8;
  TVector<double>_u_0 local_5c0;
  FName local_5a8;
  undefined1 local_5a0 [16];
  double local_590;
  double local_578;
  double local_570;
  double dStack_568;
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
  double local_510;
  double dStack_508;
  double local_500;
  TTransform<double> local_4f8;
  TTransform<double> local_498;
  TQuat<double> local_438;
  TTransform<double> local_418;
  TTransform<double> local_3b8;
  TTransform<double> local_358;
  TTransform<double> local_2f8;
  TTransform<double> local_298;
  FBoneContainer local_238;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_788;
  lVar31 = 2;
  FVar22 = StatPtr_STAT_MotionWarping_PrecomputeWarpedTracks;
  if (StatPtr_STAT_MotionWarping_PrecomputeWarpedTracks ==
      (FThreadSafeStaticStat<FStat_STAT_MotionWarping_PrecomputeWarpedTracks>)0x0) {
    pFVar21 = ::FName::FName(&local_5a8,"STAT_MotionWarping_PrecomputeWarpedTracks");
    FVar22 = (FThreadSafeStaticStat<FStat_STAT_MotionWarping_PrecomputeWarpedTracks>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_MotionWarping_PrecomputeWarpedTracks,*pFVar21,
                        L"MotionWarping PrecomputeWarpedTracks","STATGROUP_Anim","STATCAT_Advanced",
                        L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_710.ComparisonIndex.Value = 0;
  local_710.Number = 0;
  local_708 = 0;
  FVar5 = *(FName *)FVar22;
  if ((FVar5.ComparisonIndex.Value.Value != 0) || (FVar5.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_700[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_700[0]._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      local_708 = local_708 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_688[0].ComparisonIndex.Value = FVar5.ComparisonIndex.Value.Value;
        local_688[0].Number = FVar5.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (local_688,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\MotionWarping\\Source\\MotionWarping\\Private\\RootMotionModifier_AdjustmentBlendWarp.cpp"
                   ,0x6c);
        local_708 = local_708 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_710 = FVar5;
      local_6e8.FilterCurves = (TArray<FName,TSizedDefaultAllocator<32>_> *)FVar5;
      FThreadStats::AddMessage(FVar5,CycleScopeStart);
      local_708 = local_708 | 4;
    }
  }
  lVar6 = this->_padding_;
  if (lVar6 == 0) goto LAB_14cf14771;
  pUVar23 = UMotionWarpingComponent::StaticClass();
  iVar19 = (int)pUVar23->_padding_;
  if ((((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < iVar19) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar19 * 8)
        != &pUVar23->_padding_)) || (*(longlong **)(lVar6 + 0xe0) == (longlong *)0x0)) ||
     (this_00 = (USkeletalMeshComponent *)(**(code **)(**(longlong **)(lVar6 + 0xe0) + 0x2b8))(),
     this_00 == (USkeletalMeshComponent *)0x0)) goto LAB_14cf14771;
  this_01 = USkeletalMeshComponent::GetAnimInstance(this_00);
  this_02 = UAnimInstance::GetRequiredBones(this_01);
  local_720.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_720.ArrayNum = 0;
  local_720.ArrayMax = 0;
  iVar19 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x202,&local_720.AllocatorInstance,&local_720.ArrayMax);
  local_720.ArrayNum = iVar19 + 1;
  *(undefined2 *)(local_720.AllocatorInstance.Data + (longlong)iVar19 * 2) = 0;
  if ((this->bWarpIKBones == false) || ((this->IKBones).ArrayNum < 1)) {
    bVar18 = false;
  }
  else {
    pFVar30 = (FName *)(this->IKBones).AllocatorInstance.Data;
    bVar18 = true;
    iVar19 = (this->IKBones).ArrayNum;
    pFVar21 = pFVar30 + iVar19;
    while( true ) {
      if ((this->IKBones).ArrayNum != iVar19) {
        local_726[0] = 0;
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_726);
      }
      if (pFVar30 == pFVar21) break;
      iVar20 = FBoneContainer::GetPoseBoneIndexForBoneName(this_02,pFVar30);
      if (iVar20 != -1) {
        local_728 = (undefined2)iVar20;
        if (((local_720.AllocatorInstance.Data <= (FScriptContainerElement *)&local_728) &&
            ((FScriptContainerElement *)&local_728 <
             local_720.AllocatorInstance.Data + (longlong)local_720.ArrayMax * 2)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar20 = local_720.ArrayNum;
        if (local_720.ArrayNum == local_720.ArrayMax) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_720.AllocatorInstance,&local_720.ArrayMax);
        }
        local_720.ArrayNum = iVar20 + 1;
        *(undefined2 *)(local_720.AllocatorInstance.Data + (longlong)iVar20 * 2) = local_728;
      }
      pFVar30 = pFVar30 + 1;
    }
    FReferenceSkeleton::EnsureParentsExistAndSort(this_02->RefSkeleton,&local_720);
  }
  pUVar24 = FWeakObjectPtr::Get(&(this_02->Asset).WeakPtr);
  local_628.ArrayNum = local_720.ArrayNum;
  local_628.DataPtr = (ushort *)local_720.AllocatorInstance.Data;
  local_6e8.FilterCurves = (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
  local_6e8.FilterMode = DisallowAll;
  local_6e8.LODIndex = 0;
  if ((local_720.ArrayNum < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar17)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FBoneContainer::FBoneContainer(&local_238,&local_628,&local_6e8,pUVar24);
  fVar2 = *(float *)((longlong)&this->_padding_ + 4);
  local_678.Pose._0_8_ = 0;
  local_678.Pose._16_8_ = 0;
  local_678.ComponentSpaceFlags._0_8_ = 0;
  local_678.Pose._8_8_ = 0;
  local_678.ComponentSpaceFlags._8_8_ = 0;
  local_678.BoneMask._0_8_ = 0;
  local_678.BoneMask._8_8_ = 0;
  local_678.BonesToConvert.AllocatorInstance.Data = (FCompactPoseBoneIndex *)0x0;
  local_678.BonesToConvert.ArrayNum = 0;
  local_678.BonesToConvert.ArrayMax = 0;
  pUVar25 = (UAnimSequenceBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UMotionWarpingUtilities::ExtractComponentSpacePose(pUVar25,&local_238,fVar2,true,&local_678);
  local_560 = (double)this->_padding_;
  local_570 = (double)this->_padding_;
  dStack_568 = (double)this->_padding_;
  dVar41 = local_560 - (this->CachedMeshTransform).Translation.ZW.m128d_f64[0];
  dVar56 = (this->CachedMeshTransform).Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar58 = (this->CachedMeshTransform).Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar8 = (this->CachedMeshTransform).Rotation.ZW.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar9 = (this->CachedMeshTransform).Rotation.ZW.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar53._8_4_ = SUB84(dVar58,0);
  auVar53._0_8_ = dVar56;
  auVar53._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
  auVar44._8_4_ = SUB84(dVar9,0);
  auVar44._0_8_ = dVar8;
  auVar44._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  auVar54 = blendpd(auVar53,auVar44,2);
  dVar11 = local_570 - (this->CachedMeshTransform).Translation.XY.m128d_f64[0];
  dVar12 = dStack_568 - (this->CachedMeshTransform).Translation.XY.m128d_f64[1];
  uVar72 = (undefined4)((ulonglong)dVar12 >> 0x20);
  auVar32._8_4_ = SUB84(dVar8,0);
  auVar32._0_8_ = dVar58;
  auVar32._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar59._8_4_ = SUB84(dVar12,0);
  auVar59._0_8_ = dVar11;
  auVar59._12_4_ = uVar72;
  auVar43._8_4_ = SUB84(dVar12,0);
  auVar43._0_8_ = dVar11;
  auVar43._12_4_ = uVar72;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar41;
  auVar44 = blendpd(auVar43,auVar10,2);
  auVar60._0_8_ = auVar59._8_8_ * dVar56 - dVar58 * dVar11;
  auVar60._8_8_ = dVar41 * dVar58 - auVar32._8_8_ * dVar12;
  auVar45._0_8_ = auVar44._0_8_ * dVar8 - auVar54._0_8_ * dVar41;
  auVar45._8_8_ = auVar44._8_8_ * dVar9 - auVar54._8_8_ * 0.0;
  auVar44 = blendpd(auVar60,auVar45,2);
  dVar52 = auVar60._8_8_ + auVar60._8_8_;
  dVar57 = auVar45._0_8_ + auVar45._0_8_;
  uVar72 = SUB84(dVar57,0);
  uVar73 = (undefined4)((ulonglong)dVar57 >> 0x20);
  auVar61._0_8_ = auVar44._0_8_ + auVar44._0_8_;
  auVar61._8_8_ = auVar44._8_8_ + auVar44._8_8_;
  auVar50._8_4_ = uVar72;
  auVar50._0_8_ = dVar52;
  auVar50._12_4_ = uVar73;
  auVar33._8_4_ = uVar72;
  auVar33._0_8_ = dVar52;
  auVar33._12_4_ = uVar73;
  auVar46._8_4_ = uVar72;
  auVar46._0_8_ = dVar52;
  auVar46._12_4_ = uVar73;
  auVar44 = blendpd(auVar46,auVar61,2);
  auVar51._0_8_ = auVar50._8_8_ * dVar56 - dVar52 * dVar58;
  auVar51._8_8_ = auVar61._0_8_ * dVar58 - auVar33._8_8_ * dVar8;
  auVar34._8_4_ = SUB84(auVar61._8_8_,0);
  auVar34._0_8_ = auVar61._0_8_;
  auVar34._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
  auVar47._0_8_ = auVar44._0_8_ * dVar8 - auVar61._0_8_ * auVar54._0_8_;
  auVar47._8_8_ = auVar44._8_8_ * dVar9 - auVar34._8_8_ * auVar54._8_8_;
  auVar54._8_4_ = SUB84(auVar51._8_8_,0);
  auVar54._0_8_ = auVar51._0_8_;
  auVar54._12_4_ = (int)((ulonglong)auVar51._8_8_ >> 0x20);
  dVar8 = dVar52 * dVar9 + dVar11 + auVar54._8_8_;
  dVar11 = dVar57 * dVar9 + dVar12 + auVar47._0_8_;
  local_5a0._8_4_ = SUB84(dVar11,0);
  local_5a0._0_8_ = dVar8;
  local_5a0._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar44 = blendpd(auVar51,auVar47,2);
  local_590 = auVar61._0_8_ * dVar9 + dVar41 + auVar44._0_8_;
  local_578 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
  uVar42 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if ((char)this->_padding_ == '\0') {
LAB_14cf13e58:
    uVar72 = SUB84(local_578,0);
    uVar73 = (undefined4)((ulonglong)local_578 >> 0x20);
  }
  else {
    local_558 = (this->CachedRootMotion).Translation.XY.m128d_f64[0];
    dStack_550 = (this->CachedRootMotion).Translation.XY.m128d_f64[1];
    local_548 = (this->CachedRootMotion).Translation.ZW.m128d_f64[0];
    uVar42 = dVar8 - local_558;
    uVar13 = dVar11 - dStack_550;
    local_618.Z = local_590 - local_548;
    local_578 = local_618.Z;
    if (*(char *)((longlong)&this->_padding_ + 1) == '\0') goto LAB_14cf13e58;
    uVar72 = 0;
    uVar73 = 0;
  }
  local_5f8 = UE::Math::TQuat<double>::Identity.X._0_4_;
  uStack_5f4 = UE::Math::TQuat<double>::Identity.X._4_4_;
  uStack_5f0 = UE::Math::TQuat<double>::Identity.Y._0_4_;
  uStack_5ec = UE::Math::TQuat<double>::Identity.Y._4_4_;
  local_5e8 = UE::Math::TQuat<double>::Identity.Z._0_4_;
  uStack_5e4 = UE::Math::TQuat<double>::Identity.Z._4_4_;
  uStack_5e0 = UE::Math::TQuat<double>::Identity.W._0_4_;
  uStack_5dc = UE::Math::TQuat<double>::Identity.W._4_4_;
  uVar64 = UE::Math::TQuat<double>::Identity.X._0_4_;
  uVar65 = UE::Math::TQuat<double>::Identity.X._4_4_;
  uVar66 = UE::Math::TQuat<double>::Identity.Y._0_4_;
  uVar67 = UE::Math::TQuat<double>::Identity.Y._4_4_;
  uVar68 = UE::Math::TQuat<double>::Identity.Z._0_4_;
  uVar69 = UE::Math::TQuat<double>::Identity.Z._4_4_;
  uVar70 = UE::Math::TQuat<double>::Identity.W._0_4_;
  uVar71 = UE::Math::TQuat<double>::Identity.W._4_4_;
  if ((char)this->_padding_ != '\0') {
    URootMotionModifier_Warp::GetTargetRotation((URootMotionModifier_Warp *)this,&local_618);
    dVar8 = (this->CachedMeshRelativeTransform).Rotation.XY.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar9 = (this->CachedMeshRelativeTransform).Rotation.XY.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar41 = (this->CachedMeshRelativeTransform).Rotation.ZW.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar56 = (this->CachedMeshRelativeTransform).Rotation.ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    local_418.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_418.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_418.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_418.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_418.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_418.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_418.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_418.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_418.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_418.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_418.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_418.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply
              (&local_418,&this->CachedRootMotion,&this->CachedMeshTransform);
    auVar35._8_4_ = SUB84(dVar56,0);
    auVar35._0_8_ = dVar56;
    auVar35._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
    auVar48._8_4_ = SUB84(dVar9,0);
    auVar48._0_8_ = dVar9;
    auVar48._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    dVar57 = (double)CONCAT44((uint)((ulonglong)local_618.Y >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(local_618.Y,0) ^ (uint)__xmm_80000000000000008000000000000000);
    dVar57 = dVar57 + dVar57;
    auVar36._8_4_ = SUB84(dVar41,0);
    auVar36._0_8_ = dVar41;
    auVar36._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    dVar52 = local_618.Z + local_618.Z;
    dVar11 = dVar8 * local_418.Rotation.ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar56 * local_418.Rotation.XY.m128d_f64[0] +
             dVar9 * local_418.Rotation.ZW.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar41 * local_418.Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar12 = dVar8 * local_418.Rotation.ZW.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             auVar35._8_8_ * local_418.Rotation.XY.m128d_f64[1] +
             auVar48._8_8_ * local_418.Rotation.ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             auVar36._8_8_ * local_418.Rotation.XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    uVar62 = SUB84(dVar12,0);
    uVar63 = (uint)((ulonglong)dVar12 >> 0x20);
    auVar37._8_4_ = _UNK_15066df78;
    auVar37._0_8_ = dVar57;
    auVar37._12_4_ = _UNK_15066df7c;
    local_5d8._s_0.X = (dVar57 * local_618.Y - dVar52 * local_618.Z) + __real_3ff0000000000000;
    dVar12 = dVar8 * local_418.Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             dVar56 * local_418.Rotation.ZW.m128d_f64[0] +
             dVar9 * local_418.Rotation.XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar41 * local_418.Rotation.ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar9 = dVar8 * local_418.Rotation.XY.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
            dVar56 * local_418.Rotation.ZW.m128d_f64[1] +
            dVar9 * local_418.Rotation.XY.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
            dVar41 * local_418.Rotation.ZW.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    local_5d8._s_0.Y = dVar52 * local_618.W - dVar57 * local_618.X;
    auVar14._4_8_ = auVar37._8_8_;
    auVar14._0_4_ = (int)((ulonglong)dVar11 >> 0x20);
    auVar38._0_8_ = auVar14._0_8_ << 0x20;
    auVar38._8_4_ = uVar62;
    auVar38._12_4_ = uVar63;
    dVar8 = dVar12 + dVar12;
    local_5d8._s_0.Z = dVar57 * local_618.W + dVar52 * local_618.X;
    dVar52 = (double)CONCAT44(uVar63 ^ __xmm_80000000000000008000000000000000._4_4_,
                              uVar62 ^ (uint)__xmm_80000000000000008000000000000000);
    dVar52 = dVar52 + dVar52;
    local_5c0._s_0.X = (dVar52 * auVar38._8_8_ - dVar8 * dVar12) + __real_3ff0000000000000;
    local_5c0._s_0.Z = dVar8 * dVar11 + dVar52 * dVar9;
    local_5c0._s_0.Y = dVar8 * dVar9 - dVar52 * dVar11;
    pTVar26 = UE::Math::TQuat<double>::FindBetweenNormals
                        (&local_438,(TVector<double> *)&local_5c0._s_0,
                         (TVector<double> *)&local_5d8._s_0);
    uVar64 = *(undefined4 *)&pTVar26->X;
    uVar65 = *(undefined4 *)((longlong)&pTVar26->X + 4);
    uVar66 = *(undefined4 *)&pTVar26->Y;
    uVar67 = *(undefined4 *)((longlong)&pTVar26->Y + 4);
    uVar68 = *(undefined4 *)&pTVar26->Z;
    uVar69 = *(undefined4 *)((longlong)&pTVar26->Z + 4);
    uVar70 = *(undefined4 *)&pTVar26->W;
    uVar71 = *(undefined4 *)((longlong)&pTVar26->W + 4);
  }
  local_6d8._0_8_ = 0;
  local_6c8 = (FBoneContainer *)0x0;
  FStack_6c0.Data = (uchar *)0x0;
  local_6d8._8_8_ = 0;
  local_6b8 = 0;
  local_6b0._0_8_ = 0;
  local_6b0._8_8_ = 0;
  local_6a0.Data = (FCompactPoseBoneIndex *)0x0;
  local_698._0_4_ = 0;
  local_698._4_4_ = 0;
  local_5f8 = uVar64;
  uStack_5f4 = uVar65;
  uStack_5f0 = uVar66;
  uStack_5ec = uVar67;
  local_5e8 = uVar68;
  uStack_5e4 = uVar69;
  uStack_5e0 = uVar70;
  uStack_5dc = uVar71;
  FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer
            ((FBaseCompactPose<TMemStackAllocator<0>_> *)local_6d8,&local_238);
  FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
            ((FBaseCompactPose<TMemStackAllocator<0>_> *)local_6d8,local_6c8);
  if ((int)local_6d8._8_4_ < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(local_6d8._8_8_ & 0xffffffff);
  }
  FVar29 = (FCompactPoseBoneIndex)0x1;
  uVar15 = local_6b8 >> 0x20;
  local_6b8 = local_6b8 & 0xffffffff00000000;
  iVar19 = local_6d8._8_4_;
  if ((int)uVar15 != local_6d8._8_4_) {
    UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<unsigned_char>_>
              (1,1,local_6d8._8_4_,&FStack_6c0,0,(int *)((longlong)&local_6b8 + 4));
    iVar19 = local_6d8._8_4_;
  }
  iVar20 = UE::Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<unsigned_char>_>
                     (1,1,iVar19,&FStack_6c0,(int *)&local_6b8,(int *)((longlong)&local_6b8 + 4));
  memset(FStack_6c0.Data + iVar20,0,(longlong)iVar19);
  if (((int)local_6b8 < 1) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  *FStack_6c0.Data = '\x01';
  local_4f8.Translation.ZW.m128d_f64[0] = (double)CONCAT44(uVar73,uVar72);
  local_4f8.Translation.ZW.m128d_f64[1] = 0.0;
  local_4f8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_4f8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_4f8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_4f8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_4f8.Rotation.XY.m128d_f64[0]._0_4_ = uVar64;
  local_4f8.Rotation.XY.m128d_f64[0]._4_4_ = uVar65;
  local_4f8.Rotation.XY.m128d_f64[1]._0_4_ = uVar66;
  local_4f8.Rotation.XY.m128d_f64[1]._4_4_ = uVar67;
  local_4f8.Rotation.ZW.m128d_f64[0]._0_4_ = uVar68;
  local_4f8.Rotation.ZW.m128d_f64[0]._4_4_ = uVar69;
  local_4f8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar70;
  local_4f8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar71;
  local_4f8.Translation.XY.m128d_f64[0] = (double)uVar42;
  local_4f8.Translation.XY.m128d_f64[1] = (double)uVar13;
  FCSPose<FCompactPose>::SetComponentSpaceTransform
            ((FCSPose<FCompactPose> *)local_6d8,(FCompactPoseBoneIndex)0x0,&local_4f8);
  if (bVar18) {
    auVar44 = *(undefined1 (*) [16])(this->CachedRootMotion).Rotation.XY.m128d_f64;
    dVar56 = (double)CONCAT44(uVar71,uVar70);
    dVar52 = (this->CachedRootMotion).Rotation.ZW.m128d_f64[0];
    dVar57 = (this->CachedRootMotion).Rotation.ZW.m128d_f64[1];
    local_540 = (this->CachedRootMotion).Translation.XY.m128d_f64[0];
    dStack_538 = (this->CachedRootMotion).Translation.XY.m128d_f64[1];
    local_530 = (this->CachedRootMotion).Translation.ZW.m128d_f64[0];
    dVar9 = (double)CONCAT44(uVar65,uVar64);
    auVar55._8_4_ = uVar64;
    auVar55._0_8_ = dVar9;
    auVar55._12_4_ = uVar65;
    dVar8 = auVar44._0_8_;
    dVar41 = auVar44._8_8_;
    auVar39._8_4_ = uVar70;
    auVar39._0_8_ = dVar56;
    auVar39._12_4_ = uVar71;
    dVar12 = (double)CONCAT44(uVar67,uVar66);
    auVar49._8_4_ = uVar66;
    auVar49._0_8_ = dVar12;
    auVar49._12_4_ = uVar67;
    auVar40._8_4_ = auVar44._0_4_;
    auVar40._0_8_ = dVar41;
    auVar40._12_4_ = auVar44._4_4_;
    local_298.Translation.XY.m128d_f64[0] = local_540 + (double)uVar42;
    local_298.Translation.ZW.m128d_f64[0] = local_530 + (double)CONCAT44(uVar73,uVar72);
    local_298.Rotation.XY.m128d_f64[0] =
         dVar9 * dVar57 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         dVar56 * dVar8 +
         dVar12 * dVar52 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         dVar41 * (double)CONCAT44(uVar69,uVar68) *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    local_298.Rotation.XY.m128d_f64[1] =
         auVar55._8_8_ * dVar52 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
         auVar39._8_8_ * dVar41 +
         auVar49._8_8_ * dVar57 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
         auVar40._8_8_ * (double)CONCAT44(uVar69,uVar68) *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    local_298.Translation.XY.m128d_f64[1] = dStack_538 + (double)uVar13;
    local_298.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_298.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    dVar11 = (double)CONCAT44(uVar65,uVar64) * dVar8 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             (double)CONCAT44(uVar71,uVar70) * dVar57 +
             (double)CONCAT44(uVar67,uVar66) * dVar41 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             dVar52 * (double)CONCAT44(uVar69,uVar68) *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    local_298.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_298.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    local_298.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar11,0);
    local_298.Rotation.ZW.m128d_f64[0] =
         dVar9 * dVar41 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
         dVar56 * dVar52 +
         dVar12 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
         dVar57 * (double)CONCAT44(uVar69,uVar68) *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    local_298.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar11 >> 0x20);
    local_298.Translation.ZW.m128d_f64[1] = 0.0;
    if (1 < (int)local_678.Pose._8_4_) {
      do {
        pFVar16 = local_238.RefSkeleton;
        uVar62 = 0;
        if ((int)FVar29 < local_238.BoneIndicesArray.ArrayNum) {
          uVar62 = ~(uint)FVar29 >> 0x1f;
        }
        if ((uVar62 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar4 = *(ushort *)(local_238.BoneIndicesArray.AllocatorInstance.Data + lVar31);
        if (((pFVar16->FinalRefBoneInfo).ArrayNum <= (int)(uint)uVar4) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar28 = (this->IKBones).AllocatorInstance.Data;
        pFVar1 = pFVar28 + (longlong)(this->IKBones).ArrayNum * 8;
        for (; pFVar28 != pFVar1; pFVar28 = pFVar28 + 8) {
          if (*(longlong *)pFVar28 ==
              *(longlong *)
               ((pFVar16->FinalRefBoneInfo).AllocatorInstance.Data + (ulonglong)uVar4 * 0xc)) {
            pTVar27 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&local_678,FVar29);
            local_2f8.Rotation.XY.m128d_f64[0] = (pTVar27->Rotation).XY.m128d_f64[0];
            local_2f8.Rotation.XY.m128d_f64[1] = (pTVar27->Rotation).XY.m128d_f64[1];
            local_2f8.Rotation.ZW.m128d_f64[0] = (pTVar27->Rotation).ZW.m128d_f64[0];
            local_2f8.Rotation.ZW.m128d_f64[1] = (pTVar27->Rotation).ZW.m128d_f64[1];
            local_2f8.Translation.XY.m128d_f64[0] = (pTVar27->Translation).XY.m128d_f64[0];
            local_2f8.Translation.XY.m128d_f64[1] = (pTVar27->Translation).XY.m128d_f64[1];
            local_2f8.Translation.ZW.m128d_f64[0] = (pTVar27->Translation).ZW.m128d_f64[0];
            local_2f8.Translation.ZW.m128d_f64[1] = (pTVar27->Translation).ZW.m128d_f64[1];
            local_2f8.Scale3D.XY.m128d_f64[0] = (pTVar27->Scale3D).XY.m128d_f64[0];
            local_2f8.Scale3D.XY.m128d_f64[1] = (pTVar27->Scale3D).XY.m128d_f64[1];
            local_2f8.Scale3D.ZW.m128d_f64[0] = (pTVar27->Scale3D).ZW.m128d_f64[0];
            local_2f8.Scale3D.ZW.m128d_f64[1] = (pTVar27->Scale3D).ZW.m128d_f64[1];
            local_3b8.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_3b8.Rotation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[1];
            local_3b8.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_3b8.Rotation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[3];
            local_3b8.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_3b8.Translation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[1];
            local_3b8.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_3b8.Translation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[3];
            local_3b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_3b8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1]
            ;
            local_3b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_3b8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3]
            ;
            UE::Math::TTransform<double>::Multiply(&local_3b8,&local_2f8,&local_298);
            local_358.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_358.Rotation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[1];
            local_358.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_358.Rotation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[3];
            local_358.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_358.Translation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[1];
            local_358.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_358.Translation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[3];
            local_358.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_358.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1]
            ;
            local_358.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_358.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3]
            ;
            UE::Math::TTransform<double>::Multiply(&local_358,&local_2f8,&this->CachedRootMotion);
            local_498.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_498.Rotation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[1];
            local_510 = local_358.Translation.XY.m128d_f64[0];
            dStack_508 = local_358.Translation.XY.m128d_f64[1];
            local_498.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_498.Rotation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[3];
            local_518 = local_3b8.Translation.ZW.m128d_f64[0];
            local_498.Translation.XY.m128d_f64[0] =
                 local_3b8.Translation.XY.m128d_f64[0] - local_358.Translation.XY.m128d_f64[0];
            local_528 = local_3b8.Translation.XY.m128d_f64[0];
            dStack_520 = local_3b8.Translation.XY.m128d_f64[1];
            local_498.Translation.XY.m128d_f64[1] =
                 local_3b8.Translation.XY.m128d_f64[1] - local_358.Translation.XY.m128d_f64[1];
            local_500 = local_358.Translation.ZW.m128d_f64[0];
            local_498.Translation.ZW.m128d_f64[0] =
                 local_3b8.Translation.ZW.m128d_f64[0] - local_358.Translation.ZW.m128d_f64[0];
            local_498.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_498.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1]
            ;
            local_498.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_498.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3]
            ;
            local_498.Translation.ZW.m128d_f64[1] = 0.0;
            FCSPose<FCompactPose>::SetComponentSpaceTransform
                      ((FCSPose<FCompactPose> *)local_6d8,FVar29,&local_498);
            break;
          }
        }
        FVar29 = (FCompactPoseBoneIndex)((int)FVar29 + 1);
        lVar31 = lVar31 + 2;
      } while ((int)FVar29 < (int)local_678.Pose._8_4_);
    }
  }
  fVar2 = *(float *)((longlong)&this->_padding_ + 4);
  fVar3 = *(float *)&this->_padding_;
  local_6f8.Tracks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6f8.Tracks.ArrayNum = 0;
  local_6f8.Tracks.ArrayMax = 0;
  pUVar25 = (UAnimSequenceBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  ExtractMotionDeltaFromRange(&local_238,pUVar25,fVar3,fVar2,__real_3c888889,&local_6f8);
  AdjustmentBlendWarp(&local_238,(FCSPose<FCompactPose> *)local_6d8,&local_6f8,&this->Result);
  DestructItems<FMotionDeltaTrack,int>
            ((FMotionDeltaTrack *)local_6f8.Tracks.AllocatorInstance.Data,local_6f8.Tracks.ArrayNum)
  ;
  if ((FMotionDeltaTrack *)local_6f8.Tracks.AllocatorInstance.Data != (FMotionDeltaTrack *)0x0) {
    FMemory::Free(local_6f8.Tracks.AllocatorInstance.Data);
  }
  FBoneContainer::~FBoneContainer(&local_238);
  if (local_720.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_720.AllocatorInstance.Data);
  }
LAB_14cf14771:
  if ((local_708 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_708 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_708 & 4) != 0) {
    FThreadStats::AddMessage(local_710,CycleScopeEnd);
  }
  return;
}

// ProcessRootMotion @ 14cf15ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
URootMotionModifier_AdjustmentBlendWarp::ProcessRootMotion
          (URootMotionModifier_AdjustmentBlendWarp *this,TTransform<double> *__return_storage_ptr__,
          TTransform<double> *param_1,float param_2)

{
  int iVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  TConsoleVariableData<float> *pTVar4;
  bool bVar5;
  TTransform<double> *pTVar6;
  undefined1 auStackY_138 [32];
  FString local_108;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if ((this->Result).TrackNames.ArrayNum != (this->Result).AnimationTracks.ArrayNum) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TrackNames.Num() == AnimationTracks.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimSequence.h"
                       ,0x51,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TTransform<double> *)(*pcVar2)();
      return pTVar6;
    }
  }
  if ((this->Result).AnimationTracks.ArrayNum == 0) {
    PrecomputeWarpedTracks(this);
  }
  local_f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_f8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_f8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_f8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_f8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_f8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_f8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_f8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_f8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  ExtractBoneTransformAtTime(this,&local_f8,0,*(float *)&this->_padding_);
  local_98.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_98.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_98.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_98.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_98.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_98.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_98.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_98.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_98.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_98.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_98.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_98.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_98.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_98.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  ExtractBoneTransformAtTime(this,&local_98,0,*(float *)((longlong)&this->_padding_ + 4));
  UE::Math::TTransform<double>::GetRelativeTransform(&local_98,__return_storage_ptr__,&local_f8);
  pTVar3 = FMotionWarpingCVars::CVarMotionWarpingDebug.Ref;
  bVar5 = IsInParallelGameThread();
  if (!bVar5) {
    bVar5 = IsInGameThread();
    if (!bVar5) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TTransform<double> *)(*pcVar2)();
        return pTVar6;
      }
    }
  }
  iVar1 = pTVar3->ShadowedValue[0];
  if ((iVar1 == 1) || (iVar1 == 3)) {
    ::FString::FString(&local_108,L"AdjustmentBlendWarp");
    URootMotionModifier_Warp::PrintLog
              ((URootMotionModifier_Warp *)this,&local_108,param_1,__return_storage_ptr__);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
  }
  pTVar4 = FMotionWarpingCVars::CVarMotionWarpingDrawDebugDuration.Ref;
  if (iVar1 - 2U < 2) {
    bVar5 = IsInParallelGameThread();
    if (!bVar5) {
      bVar5 = IsInGameThread();
      if (!bVar5) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TTransform<double> *)(*pcVar2)();
          return pTVar6;
        }
      }
    }
    DrawDebugWarpedTracks(this,pTVar4->ShadowedValue[0]);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesURootMotionModifier_AdjustmentBlendWarp @ 14cf1bf50

void __cdecl
URootMotionModifier_AdjustmentBlendWarp::
StaticRegisterNativesURootMotionModifier_AdjustmentBlendWarp(void)

{
  return;
}

