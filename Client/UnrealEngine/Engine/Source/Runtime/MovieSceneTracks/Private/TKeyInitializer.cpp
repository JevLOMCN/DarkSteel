// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 6

// operator<UCameraComponent_*,UE::MovieScene::FAccumulatedShake>_TTuple<UCameraComponent_*,UE::MovieScene::FAccumulatedShake> @ 14672b7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TTuple<UCameraComponent_*,UE::MovieScene::FAccumulatedShake> * __thiscall
TKeyInitializer<UCameraComponent_*_const_&>::
operator<UCameraComponent_*,UE::MovieScene::FAccumulatedShake>_TTuple<UCameraComponent_*,UE::MovieScene::FAccumulatedShake>
          (TKeyInitializer<UCameraComponent_*_const_&> *this,
          TTuple<UCameraComponent_*,UE::MovieScene::FAccumulatedShake> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ForElementType<TTuple<FPostProcessSettings,float>_> FVar9;
  undefined1 auStack_fd8 [32];
  FAccumulatedShake local_fb8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_fd8;
  local_fb8._2_8_ = 0;
  local_fb8._padding_._2_4_ = 0;
  local_fb8._padding_._6_2_ = 0;
  memset(&local_fb8.field_0x74,0,0xf0c);
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_fb8.TotalTransformOffset.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_fb8.TotalTransformOffset.Rotation.XY.m128d_f64[1] =
       (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_fb8.PostProcessSettings.AllocatorInstance._3848_8_ = 0;
  local_fb8.PostProcessSettings._3864_8_ = 0;
  local_fb8.bApplyTransform = false;
  local_fb8.bApplyPostProcessing = false;
  local_fb8.TotalFOVOffset = 0.0;
  local_fb8.PostProcessSettings.AllocatorInstance.SecondaryData =
       (ForElementType<TTuple<FPostProcessSettings,float>_>)0x0;
  local_fb8.TotalTransformOffset.Rotation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_fb8.TotalTransformOffset.Rotation.ZW.m128d_f64[1] =
       (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_fb8.PostProcessSettings.ArrayNum = 0;
  local_fb8.PostProcessSettings.ArrayMax = 2;
  *(UCameraComponent **)__return_storage_ptr__ = *this->Key;
  local_fb8.TotalTransformOffset.Translation.ZW.m128d_f64[0] = (double)fVar5;
  local_fb8.TotalTransformOffset.Translation.ZW.m128d_f64[1] = (double)fVar7;
  local_fb8.TotalTransformOffset.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar3,0);
  local_fb8.TotalTransformOffset.Translation.XY.m128d_f64[0] = (double)fVar1;
  local_fb8.TotalTransformOffset.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)fVar3 >> 0x20);
  local_fb8.TotalTransformOffset.Scale3D.ZW.m128d_f64[0] = (double)fVar6;
  local_fb8.TotalTransformOffset.Scale3D.ZW.m128d_f64[1] = (double)fVar8;
  local_fb8.TotalTransformOffset.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar4,0);
  local_fb8.TotalTransformOffset.Scale3D.XY.m128d_f64[0] = (double)fVar2;
  local_fb8.TotalTransformOffset.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)fVar4 >> 0x20);
  UE::MovieScene::FAccumulatedShake::FAccumulatedShake
            ((FAccumulatedShake *)&__return_storage_ptr__->field_0x10,&local_fb8);
  FVar9 = (ForElementType<TTuple<FPostProcessSettings,float>_>)&local_fb8.PostProcessSettings;
  if (local_fb8.PostProcessSettings.AllocatorInstance.SecondaryData !=
      (ForElementType<TTuple<FPostProcessSettings,float>_>)0x0) {
    FVar9 = local_fb8.PostProcessSettings.AllocatorInstance.SecondaryData;
  }
  DestructItems<TTuple<FPostProcessSettings,float>,int>
            ((TTuple<FPostProcessSettings,float> *)FVar9,local_fb8.PostProcessSettings.ArrayNum);
  if (local_fb8.PostProcessSettings.AllocatorInstance.SecondaryData !=
      (ForElementType<TTuple<FPostProcessSettings,float>_>)0x0) {
    FMemory::Free((void *)local_fb8.PostProcessSettings.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// operator<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData>_TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData> @ 14672b990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData>
* __thiscall
TKeyInitializer<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>_const_&>::
operator<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData>_TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData>
          (TKeyInitializer<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>_const_&> *this,
          TTuple<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentInputEvaluationData>
          *__return_storage_ptr__)

{
  TTuple<UE::MovieScene::FInstanceHandle,FObjectKey> *pTVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStackY_198 [32];
  undefined1 local_168 [24];
  undefined8 uStack_150;
  void *local_148;
  undefined4 local_140;
  uint local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  void *local_128;
  ulonglong local_120;
  undefined1 local_118 [24];
  undefined8 uStack_100;
  void *local_f8;
  undefined4 local_f0;
  uint local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  void *local_d8;
  ulonglong local_d0;
  ForAnyElementType local_c8;
  undefined8 local_c0;
  TBitArray<FDefaultBitArrayAllocator> local_b8;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  void *local_88;
  ulonglong local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  void *local_38;
  ulonglong local_30;
  ForAnyElementType local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_13c = 0x80;
  local_168._0_8_ = (FScriptContainerElement *)0x0;
  local_130 = 0;
  local_120 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_90 = 0;
  local_80 = 0;
  local_40 = 0;
  local_30 = 0;
  pTVar1 = this->Key;
  local_168._16_8_ = 0;
  uStack_150 = 0;
  local_118._16_8_ = 0;
  uStack_100 = 0;
  local_b8.AllocatorInstance.InlineData[0] = '\0';
  local_b8.AllocatorInstance.InlineData[1] = '\0';
  local_b8.AllocatorInstance.InlineData[2] = '\0';
  local_b8.AllocatorInstance.InlineData[3] = '\0';
  local_b8.AllocatorInstance.InlineData[4] = '\0';
  local_b8.AllocatorInstance.InlineData[5] = '\0';
  local_b8.AllocatorInstance.InlineData[6] = '\0';
  local_b8.AllocatorInstance.InlineData[7] = '\0';
  local_b8.AllocatorInstance.InlineData[8] = '\0';
  local_b8.AllocatorInstance.InlineData[9] = '\0';
  local_b8.AllocatorInstance.InlineData[10] = '\0';
  local_b8.AllocatorInstance.InlineData[0xb] = '\0';
  local_b8.AllocatorInstance.InlineData[0xc] = '\0';
  local_b8.AllocatorInstance.InlineData[0xd] = '\0';
  local_b8.AllocatorInstance.InlineData[0xe] = '\0';
  local_b8.AllocatorInstance.InlineData[0xf] = '\0';
  local_68.AllocatorInstance.InlineData[0] = '\0';
  local_68.AllocatorInstance.InlineData[1] = '\0';
  local_68.AllocatorInstance.InlineData[2] = '\0';
  local_68.AllocatorInstance.InlineData[3] = '\0';
  local_68.AllocatorInstance.InlineData[4] = '\0';
  local_68.AllocatorInstance.InlineData[5] = '\0';
  local_68.AllocatorInstance.InlineData[6] = '\0';
  local_68.AllocatorInstance.InlineData[7] = '\0';
  local_68.AllocatorInstance.InlineData[8] = '\0';
  local_68.AllocatorInstance.InlineData[9] = '\0';
  local_68.AllocatorInstance.InlineData[10] = '\0';
  local_68.AllocatorInstance.InlineData[0xb] = '\0';
  local_68.AllocatorInstance.InlineData[0xc] = '\0';
  local_68.AllocatorInstance.InlineData[0xd] = '\0';
  local_68.AllocatorInstance.InlineData[0xe] = '\0';
  local_68.AllocatorInstance.InlineData[0xf] = '\0';
  local_168._8_8_ = 0;
  local_148 = (void *)0x0;
  local_140 = 0;
  local_138 = 0xffffffff;
  local_134 = 0;
  local_128 = (void *)0x0;
  local_118._0_8_ = (FScriptContainerElement *)0x0;
  local_118._8_8_ = 0;
  local_f8 = (void *)0x0;
  local_f0 = 0;
  local_ec = 0x80;
  local_e8 = 0xffffffff;
  local_e4 = 0;
  local_d8 = (void *)0x0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  local_b8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_b8.NumBits = 0;
  local_b8.MaxBits = 0x80;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_88 = (void *)0x0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_68.MaxBits = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20._0_4_ = 0;
  local_20._4_4_ = 0;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)pTVar1;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = *(undefined4 *)&pTVar1->field_0x8;
  UE::MovieScene::FAudioComponentInputEvaluationData::FAudioComponentInputEvaluationData
            ((FAudioComponentInputEvaluationData *)&__return_storage_ptr__->field_0x10,
             (FAudioComponentInputEvaluationData *)local_168);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  local_30 = local_30 & 0xffffffff00000000;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  uVar3 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68.NumBits = 0;
  if (0x80 < (uint)local_68.MaxBits) {
    local_68.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  local_80 = local_80 & 0xffffffff00000000;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  uVar3 = local_c0 >> 0x20;
  local_c0 = local_c0 & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&local_c8,0,(int *)((longlong)&local_c0 + 4));
  }
  local_98 = 0xffffffff;
  local_94 = 0;
  local_b8.NumBits = 0;
  if (0x80 < (uint)local_b8.MaxBits) {
    local_b8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_b8,0);
  }
  if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
  }
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  local_d0 = local_d0 & 0xffffffff00000000;
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_118,0,local_118._8_4_);
  iVar2 = SUB84(local_118._8_8_,4);
  local_118._8_8_ = local_118._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_118,0,(int *)(local_118 + 0xc));
  }
  local_e8 = 0xffffffff;
  local_e4 = 0;
  local_f0 = 0;
  if (0x80 < local_ec) {
    local_ec = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10),0);
  }
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  if ((FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._0_8_);
  }
  local_120 = local_120 & 0xffffffff00000000;
  if (local_128 != (void *)0x0) {
    FMemory::Free(local_128);
  }
  iVar2 = SUB84(local_168._8_8_,4);
  local_168._8_8_ = local_168._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)local_168,0,(int *)(local_168 + 0xc));
  }
  local_138 = 0xffffffff;
  local_134 = 0;
  local_140 = 0;
  if (0x80 < local_13c) {
    local_13c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10),0);
  }
  if (local_148 != (void *)0x0) {
    FMemory::Free(local_148);
  }
  if ((FScriptContainerElement *)local_168._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_168._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>_>_TTuple<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>_> @ 14672bd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>_>
* __thiscall
TKeyInitializer<FObjectKey_const_&>::
operator<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>_>_TTuple<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>_>
          (TKeyInitializer<FObjectKey_const_&> *this,
          TTuple<FObjectKey,TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  void *local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30 = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  iVar1 = this->Key->ObjectSerialNumber;
  *(int *)&__return_storage_ptr__->field_0x0 = this->Key->ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = iVar1;
  TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>
  ::
  TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>
            ((TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>
              *)&__return_storage_ptr__->field_0x8,
             (TMap<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FInstanceHandle,FObjectKey>,UE::MovieScene::FAudioComponentEvaluationData,0>_>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations>_TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations> @ 1467d0900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations>
* __thiscall
TKeyInitializer<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>_&&>::
operator<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations>_TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations>
          (TKeyInitializer<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>_&&> *this,
          TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations>
          *__return_storage_ptr__)

{
  FWeakObjectPtr FVar1;
  ForElementType<UE::MovieScene::FActiveSkeletalAnimation> FVar2;
  undefined1 auStack_448 [32];
  undefined8 local_428 [2];
  FBoundObjectActiveSkeletalAnimations local_418;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_448;
  memset(&local_418,0,0x160);
  memset(&local_418.SimulatedAnimations,0,0x160);
  memset(&local_418.BoneTransformFinalizeData.SwapRootBone,0,0x118);
  local_418.Animations.ArrayMax = 2;
  local_418.Animations.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FActiveSkeletalAnimation>)0x0;
  local_418.Animations.ArrayNum = 0;
  local_418.SimulatedAnimations.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FActiveSkeletalAnimation>)0x0;
  local_418.SimulatedAnimations.ArrayNum = 0;
  local_418.BoneTransformFinalizeData.SkeletalMeshComponent.WeakPtr.ObjectSerialNumber = 0;
  local_428[0] = 0;
  local_418.SimulatedAnimations.ArrayMax = 2;
  local_418.BoneTransformFinalizeData.SkeletalMeshComponent.WeakPtr.ObjectIndex = 0;
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)&local_418.BoneTransformFinalizeData,(FObjectPtr)local_428);
  local_418.BoneTransformFinalizeData.MeshRelativeRootMotionTransform.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_418.BoneTransformFinalizeData.MeshRelativeRootMotionTransform.Rotation.XY.m128d_f64[1] =
       (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_418.BoneTransformFinalizeData.SwapRootBone = SwapRootBone_None;
  local_418.BoneTransformFinalizeData.InitialActorTransform.bIsSet = false;
  local_418.BoneTransformFinalizeData.InverseMeshToActorRotation.bIsSet = false;
  local_418.BoneTransformFinalizeData.OnBoneTransformsFinalizedHandle.ID = 0;
  local_418.BoneTransformFinalizeData.MeshRelativeRootMotionTransform.Rotation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_418.BoneTransformFinalizeData.MeshRelativeRootMotionTransform.Rotation.ZW.m128d_f64[1] =
       (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_418.BoneTransformFinalizeData.MeshRelativeRootMotionTransform.Translation.XY.m128d_f64[1].
  _0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_418.BoneTransformFinalizeData.MeshRelativeRootMotionTransform.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_418.BoneTransformFinalizeData.MeshRelativeRootMotionTransform.Translation.XY.m128d_f64[1].
  _4_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_418.BoneTransformFinalizeData.MeshRelativeRootMotionTransform.Translation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_418.BoneTransformFinalizeData.MeshRelativeRootMotionTransform.Translation.ZW.m128d_f64[1] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_418.BoneTransformFinalizeData.MeshRelativeRootMotionTransform.Scale3D.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_418.BoneTransformFinalizeData.MeshRelativeRootMotionTransform.Scale3D.ZW.m128d_f64[1] =
       (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_418.BoneTransformFinalizeData.MeshRelativeRootMotionTransform.Scale3D.XY.m128d_f64[1]._0_4_
       = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_418.BoneTransformFinalizeData.MeshRelativeRootMotionTransform.Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_418.BoneTransformFinalizeData.MeshRelativeRootMotionTransform.Scale3D.XY.m128d_f64[1]._4_4_
       = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  FVar1 = this->Key->WeakPtr;
  *(int *)&__return_storage_ptr__->field_0x0 = FVar1.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = FVar1.ObjectSerialNumber;
  UE::MovieScene::FBoundObjectActiveSkeletalAnimations::FBoundObjectActiveSkeletalAnimations
            ((FBoundObjectActiveSkeletalAnimations *)&__return_storage_ptr__->field_0x10,&local_418)
  ;
  FVar2 = (ForElementType<UE::MovieScene::FActiveSkeletalAnimation>)&local_418.SimulatedAnimations;
  if (local_418.SimulatedAnimations.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::FActiveSkeletalAnimation>)0x0) {
    FVar2 = local_418.SimulatedAnimations.AllocatorInstance.SecondaryData;
  }
  DestructItems<UE::MovieScene::FActiveSkeletalAnimation,int>
            ((FActiveSkeletalAnimation *)FVar2,local_418.SimulatedAnimations.ArrayNum);
  if (local_418.SimulatedAnimations.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::FActiveSkeletalAnimation>)0x0) {
    FMemory::Free((void *)local_418.SimulatedAnimations.AllocatorInstance.SecondaryData);
  }
  FVar2 = (ForElementType<UE::MovieScene::FActiveSkeletalAnimation>)&local_418;
  if (local_418.Animations.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::FActiveSkeletalAnimation>)0x0) {
    FVar2 = local_418.Animations.AllocatorInstance.SecondaryData;
  }
  DestructItems<UE::MovieScene::FActiveSkeletalAnimation,int>
            ((FActiveSkeletalAnimation *)FVar2,local_418.Animations.ArrayNum);
  if (local_418.Animations.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::FActiveSkeletalAnimation>)0x0) {
    FMemory::Free((void *)local_418.Animations.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// operator<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>_TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_> @ 1467d0ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>
* __thiscall
TKeyInitializer<FObjectKey_&&>::
operator<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>_TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>
          (TKeyInitializer<FObjectKey_&&> *this,
          TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  void *local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30 = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  iVar1 = this->Key->ObjectSerialNumber;
  *(int *)&__return_storage_ptr__->field_0x0 = this->Key->ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = iVar1;
  TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>
  ::
  TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>
            ((TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>
              *)&__return_storage_ptr__->field_0x8,
             (TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData>_TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData> @ 1467d0c00

TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData> * __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData>_TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData>
          *__return_storage_ptr__)

{
  uint uVar1;
  
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  __return_storage_ptr__->field_0x9 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  if (*(void **)&__return_storage_ptr__->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&__return_storage_ptr__->field_0x30);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 2;
  return __return_storage_ptr__;
}

