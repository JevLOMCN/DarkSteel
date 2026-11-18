// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 18

// StaticClass @ 1475101d0

UClass * __cdecl UAnimStreamable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimStreamable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimStreamable",
               &Z_Registration_Info_UClass_UAnimStreamable.InnerSingleton,
               StaticRegisterNativesUAnimStreamable,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimStreamable>,InternalVTableHelperCtorCaller<UAnimStreamable>,
               local_res8,UAnimSequenceBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimStreamable.InnerSingleton;
}

// UAnimStreamable @ 1475321c0

UAnimStreamable * __thiscall
UAnimStreamable::UAnimStreamable(UAnimStreamable *this,FVTableHelper *param_1)

{
  UAnimationAsset::UAnimationAsset((UAnimationAsset *)this,param_1);
  (this->SamplingFrameRate).Numerator = 60000;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->RetargetSource).ComparisonIndex = 0;
  (this->RetargetSource).Number = 0;
  (this->SamplingFrameRate).Denominator = 1;
  (this->RunningAnimPlatformData).Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RunningAnimPlatformData).Chunks.ArrayNum = 0;
  (this->RunningAnimPlatformData).Chunks.ArrayMax = 0;
  (this->BoneCompressionSettings).field0_0x0.DebugPtr = (UAnimBoneCompressionSettings *)0x0;
  (this->CurveCompressionSettings).field0_0x0.DebugPtr = (UAnimCurveCompressionSettings *)0x0;
  (this->VariableFrameStrippingSettings).field0_0x0.DebugPtr =
       (UVariableFrameStrippingSettings *)0x0;
  return this;
}

// UAnimStreamable @ 147532260

UAnimStreamable * __thiscall
UAnimStreamable::UAnimStreamable(UAnimStreamable *this,FObjectInitializer *param_1)

{
  UAnimationAsset::UAnimationAsset((UAnimationAsset *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  (this->RetargetSource).ComparisonIndex = 0;
  (this->RetargetSource).Number = 0;
  (this->SamplingFrameRate).Numerator = 60000;
  (this->SamplingFrameRate).Denominator = 1;
  (this->RunningAnimPlatformData).Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RunningAnimPlatformData).Chunks.ArrayNum = 0;
  (this->RunningAnimPlatformData).Chunks.ArrayMax = 0;
  (this->BoneCompressionSettings).field0_0x0.DebugPtr = (UAnimBoneCompressionSettings *)0x0;
  (this->CurveCompressionSettings).field0_0x0.DebugPtr = (UAnimCurveCompressionSettings *)0x0;
  (this->VariableFrameStrippingSettings).field0_0x0.DebugPtr =
       (UVariableFrameStrippingSettings *)0x0;
  this->bUseRawDataOnly = true;
  return this;
}

// ~UAnimStreamable @ 147533b20

void __thiscall UAnimStreamable::~UAnimStreamable(UAnimStreamable *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  DestructItems<FAnimStreamableChunk,int>
            ((FAnimStreamableChunk *)(this->RunningAnimPlatformData).Chunks.AllocatorInstance.Data,
             (this->RunningAnimPlatformData).Chunks.ArrayNum);
  pFVar1 = (this->RunningAnimPlatformData).Chunks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UAnimSequenceBase::~UAnimSequenceBase((UAnimSequenceBase *)this);
  return;
}

// FinishDestroy @ 147555a80

void __thiscall UAnimStreamable::FinishDestroy(UAnimStreamable *this)

{
  FStreamingManagerCollection *this_00;
  IAnimationStreamingManager *pIVar1;
  
  UObject::FinishDestroy((UObject *)this);
  this_00 = IStreamingManager::Get();
  pIVar1 = FStreamingManagerCollection::GetAnimationStreamingManager(this_00);
                    /* WARNING: Could not recover jumptable at 0x000147555ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pIVar1 + 0xa0))(pIVar1,this,*(code **)(*(longlong *)pIVar1 + 0xa0));
  return;
}

// GetAnimationPose @ 147558090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAnimStreamable::GetAnimationPose
          (UAnimStreamable *this,FAnimationPoseData *param_1,FAnimExtractContext *param_2)

{
  FStreamableAnimPlatformData *pFVar1;
  undefined8 *puVar2;
  int iVar3;
  FBoneContainer *pFVar4;
  FScriptContainerElement *pFVar5;
  UAnimCurveCompressionCodec *pUVar6;
  FScriptContainerElement *pFVar7;
  USkeleton *this_00;
  code *pcVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  FName *pFVar29;
  FThreadSafeStaticStat<FStat_STAT_AnimStreamable_GetAnimationPose> FVar30;
  FBaseCompactPose<TMemStackAllocator<0>_> *pFVar31;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar32;
  FStreamingManagerCollection *this_01;
  UAnimStreamable *pUVar33;
  FCompressedAnimSequence *pFVar34;
  longlong lVar35;
  uint uVar36;
  ulonglong uVar37;
  longlong lVar38;
  int iVar39;
  longlong lVar40;
  undefined1 auStackY_308 [32];
  FName local_2a0;
  FColor_u_0 local_280;
  uint local_27c;
  UAnimStreamable *local_278;
  FName local_270;
  FBaseCompactPose<TMemStackAllocator<0>_> *local_268;
  FAnimExtractContext local_258;
  FName local_208;
  undefined4 local_1f0;
  FBlendedCurve *local_1e8;
  FName local_1e0;
  FAnimExtractContext *local_1d8;
  UAnimStreamable *local_1d0;
  FName local_1c8;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FAnimSequenceDecompressionContext local_188;
  FRootMotionReset local_118;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_308;
  FVar30 = StatPtr_STAT_AnimStreamable_GetAnimationPose;
  local_278 = this;
  if (StatPtr_STAT_AnimStreamable_GetAnimationPose ==
      (FThreadSafeStaticStat<FStat_STAT_AnimStreamable_GetAnimationPose>)0x0) {
    pFVar29 = ::FName::FName(&local_1c8,"STAT_AnimStreamable_GetAnimationPose");
    FVar30 = (FThreadSafeStaticStat<FStat_STAT_AnimStreamable_GetAnimationPose>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimStreamable_GetAnimationPose,
                        *pFVar29,L"AnimStreamable GetAnimationPose","STATGROUP_Anim",
                        "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_2a0 = *(FName *)FVar30;
  bVar22 = false;
  bVar23 = false;
  local_208.ComparisonIndex.Value = 0;
  local_208.Number = 0;
  bVar24 = false;
  bVar25 = false;
  if ((local_2a0.ComparisonIndex.Value.Value == 0) && (local_2a0.Number == 0)) {
LAB_14755820d:
    bVar23 = bVar25;
    bVar22 = bVar24;
    bVar24 = false;
    local_2a0 = local_208;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_280.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_280._s_0,(char *)*(FName *)((longlong)FVar30 + 0x10));
      bVar22 = false;
      bVar23 = true;
      bVar24 = false;
      bVar25 = true;
      if (-1 < CpuChannel->Enabled) {
        local_270.ComparisonIndex.Value = local_2a0.ComparisonIndex.Value.Value;
        local_270.Number = local_2a0.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_270,(wchar_t *)*(FName *)((longlong)FVar30 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimStreamable.cpp"
                   ,0xfc);
        bVar22 = true;
        bVar23 = true;
        bVar24 = true;
        bVar25 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14755820d;
    FThreadStats::AddMessage(local_2a0,CycleScopeStart);
    bVar24 = true;
  }
  if (__CsvProfilerStat253 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("AnimStreamable_GetAnimationPose",_GCsvCategory_Animation.Index);
    __CsvProfilerStat253 = true;
  }
  local_27c = _GCsvCategory_Animation.Index;
  FCsvProfiler::BeginStat
            ("AnimStreamable_GetAnimationPose",_GCsvCategory_Animation.Index,
             "CSV_AnimStreamable_GetAnimationPose");
  pFVar31 = (FBaseCompactPose<TMemStackAllocator<0>_> *)FAnimationPoseData::GetPose(param_1);
  local_268 = pFVar31;
  local_1e8 = FAnimationPoseData::GetCurve(param_1);
  FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose(pFVar31,pFVar31->BoneContainer);
  pFVar4 = pFVar31->BoneContainer;
  if ((USkeleton *)this->_padding_ == (USkeleton *)0x0) {
    FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose(pFVar31,pFVar4);
  }
  else {
    if (pFVar4->bDisableRetargeting == false) {
      FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose(pFVar31,pFVar4);
    }
    else {
      pTVar32 = USkeleton::GetRefLocalPoses((USkeleton *)this->_padding_,this->RetargetSource);
      uVar28 = (uint)pFVar31->_padding_;
      uVar36 = 0;
      if (uVar28 != 0) {
        lVar40 = 0;
        lVar38 = 0;
        do {
          uVar26 = 0;
          if ((int)uVar36 < (pFVar4->CompactPoseToSkeletonIndex).ArrayNum) {
            uVar26 = ~uVar36 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar26 = *(uint *)((pFVar4->CompactPoseToSkeletonIndex).AllocatorInstance.Data + lVar38);
          uVar27 = 0;
          if ((int)uVar26 < pTVar32->ArrayNum) {
            uVar27 = ~uVar26 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar31 = local_268;
          lVar35 = (longlong)(int)uVar26 * 0x60;
          pFVar5 = (pTVar32->AllocatorInstance).Data;
          uVar10 = *(undefined8 *)(pFVar5 + lVar35);
          uVar11 = *(undefined8 *)(pFVar5 + lVar35 + 8);
          uVar12 = *(undefined8 *)(pFVar5 + lVar35 + 0x10);
          uVar13 = *(undefined8 *)(pFVar5 + lVar35 + 0x10 + 8);
          uVar14 = *(undefined8 *)(pFVar5 + lVar35 + 0x20);
          uVar15 = *(undefined8 *)(pFVar5 + lVar35 + 0x20 + 8);
          uVar16 = *(undefined8 *)(pFVar5 + lVar35 + 0x30);
          uVar17 = *(undefined8 *)(pFVar5 + lVar35 + 0x30 + 8);
          uVar18 = *(undefined8 *)(pFVar5 + lVar35 + 0x40);
          uVar19 = *(undefined8 *)(pFVar5 + lVar35 + 0x40 + 8);
          uVar20 = *(undefined8 *)(pFVar5 + lVar35 + 0x50);
          uVar21 = *(undefined8 *)(pFVar5 + lVar35 + 0x50 + 8);
          uVar26 = 0;
          if ((int)uVar36 < (int)local_268->_padding_) {
            uVar26 = ~uVar36 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar35 = pFVar31->_padding_;
          uVar36 = uVar36 + 1;
          lVar38 = lVar38 + 4;
          *(undefined8 *)(lVar35 + lVar40) = uVar10;
          ((undefined8 *)(lVar35 + lVar40))[1] = uVar11;
          puVar2 = (undefined8 *)(lVar35 + 0x10 + lVar40);
          *puVar2 = uVar12;
          puVar2[1] = uVar13;
          puVar2 = (undefined8 *)(lVar35 + 0x20 + lVar40);
          *puVar2 = uVar14;
          puVar2[1] = uVar15;
          puVar2 = (undefined8 *)(lVar35 + 0x30 + lVar40);
          *puVar2 = uVar16;
          puVar2[1] = uVar17;
          puVar2 = (undefined8 *)(lVar35 + 0x40 + lVar40);
          *puVar2 = uVar18;
          puVar2[1] = uVar19;
          puVar2 = (undefined8 *)(lVar35 + 0x50 + lVar40);
          *puVar2 = uVar20;
          puVar2[1] = uVar21;
          lVar40 = lVar40 + 0x60;
          this = local_278;
        } while (uVar36 != uVar28);
      }
    }
    pFVar1 = &this->RunningAnimPlatformData;
    local_118.RootMotionRootLock = (Type)(this->RootMotionRootLock).Value;
    local_118.bEnableRootMotion = this->bEnableRootMotion;
    local_118.bForceRootLock = this->bForceRootLock;
    local_118.AnimFirstFrame.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_118.AnimFirstFrame.Rotation.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_118.AnimFirstFrame.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_118.bIsValidAdditive = false;
    local_118.AnimFirstFrame.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_118.AnimFirstFrame.Rotation.ZW.m128d_f64[0] =
         (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_118.AnimFirstFrame.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_118.AnimFirstFrame.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_118.AnimFirstFrame.Translation.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_118.AnimFirstFrame.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_118.AnimFirstFrame.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_118.AnimFirstFrame.Translation.ZW.m128d_f64[0] =
         (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_118.AnimFirstFrame.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_118.AnimFirstFrame.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_118.AnimFirstFrame.Scale3D.ZW.m128d_f64[0] =
         (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_118.AnimFirstFrame.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    local_118.AnimFirstFrame.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_118.AnimFirstFrame.Scale3D.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_118.AnimFirstFrame.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    uVar28 = GetChunkIndexForTime(this,&pFVar1->Chunks,(float)param_2->CurrentTime);
    if ((uVar28 != 0xffffffff) ||
       (local_1d8 = param_2, local_1d0 = this,
       bVar25 = `UAnimStreamable::GetAnimationPose'::__l29::<lambda_1>::operator()(&local_1d8),
       bVar25)) {
      uVar36 = 0;
      if ((int)uVar28 < (this->RunningAnimPlatformData).Chunks.ArrayNum) {
        uVar36 = ~uVar28 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar5 = (pFVar1->Chunks).AllocatorInstance.Data;
      this_01 = IStreamingManager::Get();
      pUVar33 = (UAnimStreamable *)
                FStreamingManagerCollection::GetAnimationStreamingManager(this_01);
      local_278 = pUVar33;
      pFVar34 = (FCompressedAnimSequence *)(**(code **)(pUVar33->_padding_ + 0xb0))(pUVar33,this);
      if (pFVar34 == (FCompressedAnimSequence *)0x0) {
        if ((byte)LogAnimation._0_1_ < 3) goto LAB_147558a50;
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_1c0,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      }
      else {
        pUVar6 = (pFVar34->CurveCompressionCodec).field0_0x0.DebugPtr;
        (**(code **)(*(longlong *)pUVar6 + 0x2c0))
                  (pUVar6,pFVar34,local_1e8,(float)param_2->CurrentTime);
        if (uVar28 == 0) {
          dVar9 = param_2->CurrentTime - (double)*(float *)pFVar5;
        }
        else {
          pFVar34 = (FCompressedAnimSequence *)(**(code **)(pUVar33->_padding_ + 0xb0))(pUVar33);
          dVar9 = param_2->CurrentTime - (double)*(float *)(pFVar5 + (longlong)(int)uVar28 * 0x40);
          if (pFVar34 == (FCompressedAnimSequence *)0x0) {
            iVar39 = (this->RunningAnimPlatformData).Chunks.ArrayNum;
            uVar37 = (ulonglong)uVar28;
            do {
              uVar36 = ((int)uVar37 + -1 + iVar39) % iVar39;
              uVar37 = (ulonglong)(int)uVar36;
              if (uVar36 == uVar28) {
                if ((byte)LogAnimation._0_1_ < 3) goto LAB_147558a50;
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)this,&local_1a0,(UObject *)0x0,None);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
                local_1c0.Data.AllocatorInstance.Data = local_1a0.Data.AllocatorInstance.Data;
                goto LAB_147558a3e;
              }
              pFVar34 = (FCompressedAnimSequence *)
                        (**(code **)(local_278->_padding_ + 0xb0))(local_278,this);
              uVar26 = 0;
              if ((int)uVar36 < (this->RunningAnimPlatformData).Chunks.ArrayNum) {
                uVar26 = ~uVar36 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              dVar9 = (double)*(float *)((pFVar1->Chunks).AllocatorInstance.Data + uVar37 * 0x40 + 4
                                        );
            } while (pFVar34 == (FCompressedAnimSequence *)0x0);
            if (2 < (byte)LogAnimation._0_1_) {
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)this,&local_1b0,(UObject *)0x0,None);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
              if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
              }
            }
          }
        }
        if ((pFVar34->CompressedTrackToSkeletonMapTable).ArrayNum == 0) goto LAB_147558a50;
        local_258.bLooping = false;
        local_1f0 = 0;
        local_258.bExtractRootMotion = param_2->bExtractRootMotion;
        local_258.DeltaTimeRecord.bPreviousIsValid = false;
        local_258.DeltaTimeRecord._9_3_ = 0;
        local_258.DeltaTimeRecord.Delta = 0.0;
        local_258.DeltaTimeRecord.Previous = 0.0;
        local_258.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_258.PoseCurves.ArrayNum = 0;
        local_258.PoseCurves.ArrayMax = 0;
        local_258.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_258.BonesRequired.ArrayNum = 0;
        local_258.BonesRequired.ArrayMax = 0;
        local_258.InterpolationOverride.bIsSet = false;
        iVar39 = 0;
        local_258.CurrentTime = dVar9;
        if (&local_258.BonesRequired != &param_2->BonesRequired) {
          uVar36 = (param_2->BonesRequired).ArrayNum;
          pFVar7 = (param_2->BonesRequired).AllocatorInstance.Data;
          local_258.BonesRequired.ArrayMax = 0;
          local_258.BonesRequired.ArrayNum = uVar36;
          if (uVar36 != 0) {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,uVar36,0,&local_258.BonesRequired.AllocatorInstance,uVar36,
                       &local_258.BonesRequired.ArrayMax);
            memcpy(local_258.BonesRequired.AllocatorInstance.Data,pFVar7,(longlong)(int)uVar36);
            iVar39 = local_258.PoseCurves.ArrayMax;
          }
        }
        if (&local_258.PoseCurves != &param_2->PoseCurves) {
          iVar3 = (param_2->PoseCurves).ArrayNum;
          pFVar7 = (param_2->PoseCurves).AllocatorInstance.Data;
          local_258.PoseCurves.ArrayNum = iVar3;
          if ((iVar3 == 0) && (iVar39 == 0)) {
            local_258.PoseCurves.ArrayNum = 0;
            local_258.PoseCurves.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,iVar3,iVar39,&local_258.PoseCurves.AllocatorInstance,iVar3,
                       &local_258.PoseCurves.ArrayMax);
            if (iVar3 != 0) {
              memcpy(local_258.PoseCurves.AllocatorInstance.Data,pFVar7,(longlong)iVar3 << 4);
            }
          }
        }
        this_00 = (USkeleton *)this->_padding_;
        pTVar32 = USkeleton::GetRefLocalPoses(this_00,(FName)0x0);
        local_1e0 = (FName)this->_padding_;
        FAnimSequenceDecompressionContext::FAnimSequenceDecompressionContext
                  (&local_188,&this->SamplingFrameRate,
                   *(int *)(pFVar5 + ((longlong)(int)uVar28 * 0x10 + 2) * 4),this->Interpolation,
                   &local_1e0,(pFVar34->CompressedDataStructure).Ptr,pTVar32,
                   &pFVar34->CompressedTrackToSkeletonMapTable,this_00,false,AAT_None);
        UE::Anim::Decompression::DecompressPose
                  ((FCompactPose *)local_268,pFVar34,&local_258,&local_188,this->RetargetSource,
                   &local_118);
        local_1c0.Data.AllocatorInstance.Data = local_258.PoseCurves.AllocatorInstance.Data;
        if (local_258.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.BonesRequired.AllocatorInstance.Data);
          local_1c0.Data.AllocatorInstance.Data = local_258.PoseCurves.AllocatorInstance.Data;
        }
      }
LAB_147558a3e:
      if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_147558a50:
  FCsvProfiler::EndStat("AnimStreamable_GetAnimationPose",local_27c);
  if (bVar23) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar24) {
    FThreadStats::AddMessage(local_2a0,CycleScopeEnd);
  }
  return;
}

// GetChunkIndexForTime @ 14755ae20

int __thiscall
UAnimStreamable::GetChunkIndexForTime
          (UAnimStreamable *this,TArray<FAnimStreamableChunk,TSizedDefaultAllocator<32>_> *param_1,
          float param_2)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  iVar5 = param_1->ArrayNum;
  uVar6 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      fVar1 = *(float *)((param_1->AllocatorInstance).Data + lVar7 + 4);
      if (param_2 < fVar1) {
        return uVar6;
      }
      iVar5 = param_1->ArrayNum;
      param_2 = param_2 - fVar1;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x40;
    } while ((int)uVar6 < iVar5);
  }
  return iVar5 + -1;
}

// GetNumberOfSampledKeys @ 14755ddd0

int __thiscall UAnimStreamable::GetNumberOfSampledKeys(UAnimStreamable *this)

{
  return this->NumberOfKeys;
}

// GetPrivateStaticClass @ 14755ebf0

UClass * __cdecl UAnimStreamable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimStreamable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimStreamable",
               &Z_Registration_Info_UClass_UAnimStreamable.InnerSingleton,
               StaticRegisterNativesUAnimStreamable,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimStreamable>,InternalVTableHelperCtorCaller<UAnimStreamable>,
               local_res8,UAnimSequenceBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimStreamable.InnerSingleton;
}

// GetResourceSizeEx @ 147560100

void __thiscall UAnimStreamable::GetResourceSizeEx(UAnimStreamable *this,FResourceSizeEx *param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  UScriptStruct *pUVar4;
  longlong lVar5;
  ulong64 uVar6;
  FStreamingManagerCollection *this_00;
  IAnimationStreamingManager *pIVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  undefined1 local_res8 [8];
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  lVar3 = (**(code **)(this->_padding_ + 0x300))(this);
  pUVar4 = FRawCurveTracks::StaticStruct();
  if (pUVar4 == (UScriptStruct *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4056023009599684510>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequenceBase.cpp"
                       ,0x62,"Struct");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    iVar10 = (int)*(short *)((longlong)&pUVar4->_padding_ + 4);
    FResourceSizeEx::AddDedicatedSystemMemoryBytes
              (param_1,(longlong)((int)pUVar4->_padding_ + -1 + iVar10 & -iVar10));
    FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)*(int *)(lVar3 + 0xc) * 0x90);
  }
  iVar10 = (this->RunningAnimPlatformData).Chunks.ArrayNum;
  lVar3 = 0;
  pFVar8 = (this->RunningAnimPlatformData).Chunks.AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar10 * 0x40;
  while( true ) {
    if ((this->RunningAnimPlatformData).Chunks.ArrayNum != iVar10) {
      `TCheckedPointerIterator<FAnimStreamableChunk_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar9) break;
    lVar5 = 0x40;
    if (*(FCompressedAnimSequence **)(pFVar8 + 0x10) != (FCompressedAnimSequence *)0x0) {
      uVar6 = FCompressedAnimSequence::GetMemorySize(*(FCompressedAnimSequence **)(pFVar8 + 0x10));
      lVar5 = uVar6 + 0x40;
    }
    lVar3 = lVar3 + lVar5;
    pFVar8 = pFVar8 + 0x40;
  }
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,lVar3 + 0x10);
  this_00 = IStreamingManager::Get();
  pIVar7 = FStreamingManagerCollection::GetAnimationStreamingManager(this_00);
  uVar6 = (**(code **)(*(longlong *)pIVar7 + 0xa8))(pIVar7,this);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,uVar6);
  return;
}

// GetStreamingAnimPlatformData @ 147563010

FStreamableAnimPlatformData * __thiscall
UAnimStreamable::GetStreamingAnimPlatformData(UAnimStreamable *this,ITargetPlatform *param_1)

{
  return &this->RunningAnimPlatformData;
}

// HandleAssetPlayerTickedInternal @ 1475638d0

void __thiscall
UAnimStreamable::HandleAssetPlayerTickedInternal
          (UAnimStreamable *this,FAnimAssetTickContext *param_1,float param_2,float param_3,
          FAnimTickRecord *param_4,FAnimNotifyQueue *param_5)

{
  int iVar1;
  FStreamingManagerCollection *this_00;
  IAnimationStreamingManager *pIVar2;
  float local_res18 [2];
  float local_res20 [2];
  FAnimNotifyContext local_38 [2];
  
  local_38[0].TickRecord = param_4;
  local_38[0].ActiveNotifies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38[0].ActiveNotifies.ArrayNum = 0;
  local_38[0].ActiveNotifies.ArrayMax = 0;
  local_res18[0] = param_3;
  local_res20[0] = param_2;
  UAnimSequenceBase::GetAnimNotifies((UAnimSequenceBase *)this,local_res20,local_res18,local_38);
  FAnimNotifyQueue::AddAnimNotifies
            (param_5,param_1->bIsLeader,&local_38[0].ActiveNotifies,param_4->EffectiveBlendWeight);
  DestructItems<FAnimNotifyEventReference,int>
            ((FAnimNotifyEventReference *)local_38[0].ActiveNotifies.AllocatorInstance.Data,
             local_38[0].ActiveNotifies.ArrayNum);
  if ((FAnimNotifyEventReference *)local_38[0].ActiveNotifies.AllocatorInstance.Data !=
      (FAnimNotifyEventReference *)0x0) {
    FMemory::Free(local_38[0].ActiveNotifies.AllocatorInstance.Data);
  }
  iVar1 = GetChunkIndexForTime(this,&(this->RunningAnimPlatformData).Chunks,param_2);
  this_00 = IStreamingManager::Get();
  pIVar2 = FStreamingManagerCollection::GetAnimationStreamingManager(this_00);
                    /* WARNING: Could not recover jumptable at 0x0001475639a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pIVar2 + 0xb0))(pIVar2,this,iVar1,1);
  return;
}

// PostLoad @ 147571de0

void __thiscall UAnimStreamable::PostLoad(UAnimStreamable *this)

{
  FStreamingManagerCollection *this_00;
  IAnimationStreamingManager *pIVar1;
  
  UAnimationAsset::PostLoad((UAnimationAsset *)this);
  (**(code **)(this->_padding_ + 0x328))(this);
  this_00 = IStreamingManager::Get();
  pIVar1 = FStreamingManagerCollection::GetAnimationStreamingManager(this_00);
                    /* WARNING: Could not recover jumptable at 0x000147571e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pIVar1 + 0x98))(pIVar1,this,*(code **)(*(longlong *)pIVar1 + 0x98));
  return;
}

// PreSave @ 147571f40

void __thiscall UAnimStreamable::PreSave(UAnimStreamable *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// Serialize @ 147578260

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAnimStreamable::Serialize(UAnimStreamable *this,FArchive *param_1)

{
  undefined1 *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  uint uVar4;
  bool bVar5;
  uint local_res10 [2];
  FString local_18;
  
  UAnimSequenceBase::Serialize((UAnimSequenceBase *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  bVar5 = SUB41(uVar4,0);
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = &param_1->field_0x28;
  puVar2 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar2) {
    local_res10[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res10[0] = uVar4;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10);
    if (1 < local_res10[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar4 = local_res10[0];
    if ((*puVar1 & 1) == 0) goto LAB_147578313;
  }
  else {
    uVar4 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar2;
  }
  bVar5 = uVar4 != 0;
LAB_147578313:
  if (bVar5 == false) {
    if ((*puVar1 & 1) != 0) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0,None);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    FStreamableAnimPlatformData::Serialize(&this->RunningAnimPlatformData,param_1,this);
  }
  return;
}

// Serialize @ 1475783b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAnimStreamable::Serialize(UAnimStreamable *this,FStructuredArchiveRecord param_1)

{
  undefined1 *puVar1;
  uint *puVar2;
  FFastPathLoadBuffer *pFVar3;
  FArchiveState *this_00;
  uint uVar4;
  bool bVar5;
  uint local_res10 [2];
  FSlotBase local_res18 [2];
  FString local_28;
  
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
  UAnimSequenceBase::Serialize((UAnimSequenceBase *)this,(FArchive *)this_00);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FUE5MainStreamObjectVersion::GUID);
  if ((this_00->SavePackageData == (FArchiveSavePackageData *)0x0) ||
     (this_00->SavePackageData->CookContext == (FArchiveCookContext *)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  bVar5 = SUB41(uVar4,0);
  pFVar3 = this_00->ActiveFPLB;
  puVar2 = (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (pFVar3->EndFastPathLoadBuffer < puVar2) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] = uVar4;
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar4 = local_res10[0];
    if (this_00->ArIsLoading == 0) goto LAB_147578479;
  }
  else {
    uVar4 = *(uint *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)puVar2;
  }
  bVar5 = uVar4 != 0;
LAB_147578479:
  if (bVar5 == false) {
    if (this_00->ArIsLoading != 0) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0,None);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    FStreamableAnimPlatformData::Serialize(&this->RunningAnimPlatformData,(FArchive *)this_00,this);
  }
  return;
}

// StaticRegisterNativesUAnimStreamable @ 14757ac50

void __cdecl UAnimStreamable::StaticRegisterNativesUAnimStreamable(void)

{
  return;
}

// operator() @ 15050bbb0

bool __thiscall `UAnimStreamable::GetAnimationPose'::__l29::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1282793223919500972>);
  if (bVar2) {
    UObjectBaseUtility::GetFullName
              (*(UObjectBaseUtility **)((longlong)this + 8),&local_18,(UObject *)0x0,None);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1282793223919500972>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15050bc2a;
    }
  }
  bVar2 = false;
LAB_15050bc2a:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

