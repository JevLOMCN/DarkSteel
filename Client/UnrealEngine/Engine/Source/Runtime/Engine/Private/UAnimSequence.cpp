// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 89

// StaticClass @ 1474991e0

UClass * __cdecl UAnimSequence::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSequence.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimSequence",
               &Z_Registration_Info_UClass_UAnimSequence.InnerSingleton,
               StaticRegisterNativesUAnimSequence,0x1f0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimSequence>,InternalVTableHelperCtorCaller<UAnimSequence>,
               local_res8,UAnimSequenceBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSequence.InnerSingleton;
}

// UAnimSequence @ 1474b4300

UAnimSequence * __thiscall UAnimSequence::UAnimSequence(UAnimSequence *this,FVTableHelper *param_1)

{
  UAnimSequenceBase::UAnimSequenceBase((UAnimSequenceBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  (this->BoneCompressionSettings).field0_0x0.DebugPtr = (UAnimBoneCompressionSettings *)0x0;
  (this->CurveCompressionSettings).field0_0x0.DebugPtr = (UAnimCurveCompressionSettings *)0x0;
  (this->CompressedData).CompressedTrackToSkeletonMapTable.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CompressedData).CompressedTrackToSkeletonMapTable.ArrayNum = 0;
  (this->CompressedData).CompressedTrackToSkeletonMapTable.ArrayMax = 0;
  (this->CompressedData).CompressedCurveNames.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CompressedData).CompressedCurveNames.ArrayNum = 0;
  (this->CompressedData).CompressedCurveNames.ArrayMax = 0;
  (this->CompressedData).IndexedCurveNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompressedData).IndexedCurveNames.ArrayNum = 0;
  (this->CompressedData).IndexedCurveNames.ArrayMax = 0;
  *(undefined8 *)&(this->CompressedData).CompressedByteStream = 0;
  *(undefined8 *)&(this->CompressedData).CompressedByteStream.field_0x8 = 0;
  *(undefined8 *)&(this->CompressedData).CompressedByteStream.field_0x10 = 0;
  *(undefined8 *)&(this->CompressedData).CompressedByteStream.field_0x18 = 0;
  (this->CompressedData).CompressedCurveByteStream.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CompressedData).CompressedCurveByteStream.ArrayNum = 0;
  (this->CompressedData).CompressedCurveByteStream.ArrayMax = 0;
  (this->CompressedData).CompressedDataStructure.Ptr = (ICompressedAnimData *)0x0;
  (this->CompressedData).BoneCompressionCodec.field0_0x0.DebugPtr = (UAnimBoneCompressionCodec *)0x0
  ;
  (this->CompressedData).CurveCompressionCodec.field0_0x0.DebugPtr =
       (UAnimCurveCompressionCodec *)0x0;
  (this->CompressedData).CompressedRawDataSize = 0;
  (this->VariableFrameStrippingSettings).field0_0x0.DebugPtr =
       (UVariableFrameStrippingSettings *)0x0;
  (this->RefPoseSeq).field0_0x0.DebugPtr = (UAnimSequence *)0x0;
  (this->RetargetSource).ComparisonIndex = 0;
  (this->RetargetSource).Number = 0;
  (this->RetargetSourceAssetReferencePose).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RetargetSourceAssetReferencePose).ArrayNum = 0;
  (this->RetargetSourceAssetReferencePose).ArrayMax = 0;
  this->StripAnimDataOnDedicatedServer = UseProjectSetting;
  (this->AuthoredSyncMarkers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AuthoredSyncMarkers).ArrayNum = 0;
  (this->AuthoredSyncMarkers).ArrayMax = 0;
  (this->UniqueMarkerNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueMarkerNames).ArrayNum = 0;
  (this->UniqueMarkerNames).ArrayMax = 0;
  *(undefined8 *)&this->AttributeCurves = 0;
  *(undefined8 *)&(this->AttributeCurves).field_0x8 = 0;
  *(undefined8 *)&(this->AttributeCurves).field_0x20 = 0;
  (this->PlatformTargetFrameRate).Default.Numerator = 0x1e;
  (this->PlatformTargetFrameRate).Default.Denominator = 1;
  *(undefined4 *)&(this->AttributeCurves).field_0x28 = 0;
  *(undefined4 *)&(this->AttributeCurves).field_0x2c = 0x80;
  *(undefined4 *)&(this->AttributeCurves).field_0x34 = 0;
  *(undefined4 *)&(this->AttributeCurves).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AttributeCurves).field_0x40 = 0;
  *(undefined4 *)&(this->AttributeCurves).field_0x48 = 0;
  return this;
}

// UAnimSequence @ 1474b4460

UAnimSequence * __thiscall
UAnimSequence::UAnimSequence(UAnimSequence *this,FObjectInitializer *param_1)

{
  UAnimSequenceBase::UAnimSequenceBase((UAnimSequenceBase *)this,param_1);
  this->bUseNormalizedRootMotionScale = true;
  this->bRootMotionSettingsCopiedFromMontage = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  (this->BoneCompressionSettings).field0_0x0.DebugPtr = (UAnimBoneCompressionSettings *)0x0;
  (this->CurveCompressionSettings).field0_0x0.DebugPtr = (UAnimCurveCompressionSettings *)0x0;
  (this->CompressedData).CompressedTrackToSkeletonMapTable.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CompressedData).CompressedTrackToSkeletonMapTable.ArrayNum = 0;
  (this->CompressedData).CompressedTrackToSkeletonMapTable.ArrayMax = 0;
  (this->CompressedData).CompressedCurveNames.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CompressedData).CompressedCurveNames.ArrayNum = 0;
  (this->CompressedData).CompressedCurveNames.ArrayMax = 0;
  (this->CompressedData).IndexedCurveNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompressedData).IndexedCurveNames.ArrayNum = 0;
  (this->CompressedData).IndexedCurveNames.ArrayMax = 0;
  *(undefined8 *)&(this->CompressedData).CompressedByteStream = 0;
  *(undefined8 *)&(this->CompressedData).CompressedByteStream.field_0x8 = 0;
  *(undefined8 *)&(this->CompressedData).CompressedByteStream.field_0x10 = 0;
  *(undefined8 *)&(this->CompressedData).CompressedByteStream.field_0x18 = 0;
  (this->CompressedData).CompressedCurveByteStream.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CompressedData).CompressedCurveByteStream.ArrayNum = 0;
  (this->CompressedData).CompressedCurveByteStream.ArrayMax = 0;
  (this->CompressedData).CompressedDataStructure.Ptr = (ICompressedAnimData *)0x0;
  (this->CompressedData).BoneCompressionCodec.field0_0x0.DebugPtr = (UAnimBoneCompressionCodec *)0x0
  ;
  (this->CompressedData).CurveCompressionCodec.field0_0x0.DebugPtr =
       (UAnimCurveCompressionCodec *)0x0;
  (this->CompressedData).CompressedRawDataSize = 0;
  (this->VariableFrameStrippingSettings).field0_0x0.DebugPtr =
       (UVariableFrameStrippingSettings *)0x0;
  (this->RefPoseSeq).field0_0x0.DebugPtr = (UAnimSequence *)0x0;
  (this->RetargetSource).ComparisonIndex = 0;
  (this->RetargetSource).Number = 0;
  (this->RetargetSourceAssetReferencePose).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RetargetSourceAssetReferencePose).ArrayNum = 0;
  (this->RetargetSourceAssetReferencePose).ArrayMax = 0;
  (this->RootMotionRootLock).Value = '\0';
  (this->AuthoredSyncMarkers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AuthoredSyncMarkers).ArrayNum = 0;
  (this->AuthoredSyncMarkers).ArrayMax = 0;
  (this->UniqueMarkerNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueMarkerNames).ArrayNum = 0;
  (this->UniqueMarkerNames).ArrayMax = 0;
  *(undefined8 *)&this->AttributeCurves = 0;
  *(undefined8 *)&(this->AttributeCurves).field_0x8 = 0;
  *(undefined8 *)&(this->AttributeCurves).field_0x20 = 0;
  this->Interpolation = Linear;
  this->bEnableRootMotion = false;
  this->StripAnimDataOnDedicatedServer = UseProjectSetting;
  (this->PlatformTargetFrameRate).Default.Numerator = 0x1e;
  (this->PlatformTargetFrameRate).Default.Denominator = 1;
  *(undefined4 *)&(this->AttributeCurves).field_0x28 = 0;
  *(undefined4 *)&(this->AttributeCurves).field_0x2c = 0x80;
  *(undefined4 *)&(this->AttributeCurves).field_0x34 = 0;
  *(undefined4 *)&(this->AttributeCurves).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AttributeCurves).field_0x40 = 0;
  *(undefined4 *)&(this->AttributeCurves).field_0x48 = 0;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  return this;
}

// ~UAnimSequence @ 1474b5740

void __thiscall UAnimSequence::~UAnimSequence(UAnimSequence *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  *(undefined4 *)&(this->AttributeCurves).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AttributeCurves).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FAnimationAttributeIdentifier,FAttributeCurve>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FAnimationAttributeIdentifier,FAttributeCurve>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FAnimationAttributeIdentifier,FAttributeCurve>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AttributeCurves);
  pFVar2 = (this->UniqueMarkerNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AuthoredSyncMarkers).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RetargetSourceAssetReferencePose).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FCompressedAnimSequence::~FCompressedAnimSequence(&this->CompressedData);
  UAnimSequenceBase::~UAnimSequenceBase((UAnimSequenceBase *)this);
  return;
}

// AddReferencedObjects @ 1474b9650

void __cdecl UAnimSequence::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  UObject::AddReferencedObjects(param_1,param_2);
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UAnimSequence>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    (**(code **)(param_2->_padding_ + 0x88))(param_2,&param_1[7].field_0x10,0,0);
                    /* WARNING: Could not recover jumptable at 0x0001474b96c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2->_padding_ + 0x88))(param_2,&param_1[7].field_0x18,0,0);
    return;
  }
  pFVar3 = GetTypeName<UAnimSequence>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// AdvanceMarkerPhaseAsFollower @ 1474bb670

void __thiscall
UAnimSequence::AdvanceMarkerPhaseAsFollower
          (UAnimSequence *this,FMarkerTickContext *param_1,float param_2,bool param_3,float *param_4
          ,FMarkerPair *param_5,FMarkerPair *param_6,UMirrorDataTable *param_7)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FName *pFVar6;
  uint uVar7;
  ulonglong uVar8;
  FName FVar9;
  FName FVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  uint local_res18;
  longlong local_88;
  
  ValidateCurrentPosition
            (this,&param_1->MarkerSyncStartPostion,0.0 <= param_2,param_3,param_4,param_5,param_6,
             param_7);
  uVar8 = 0;
  uVar12 = uVar8;
  if (0.0 > param_2) {
    local_res18 = 0;
    local_88 = 0;
    do {
      iVar11 = param_5->MarkerIndex;
      if (iVar11 == -1) {
        if (((param_3) && ((param_1->MarkerSyncEndPostion).PreviousMarkerName != (FName)0x0)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("!bLooping || Context.GetMarkerSyncEndPosition().PreviousMarkerName == NAME_None"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                               ,0xff4,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar15 = param_2 + *param_4;
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
        *param_4 = fVar15;
        iVar11 = param_5->MarkerIndex;
        break;
      }
      uVar7 = (uint)uVar8;
      if ((param_1->MarkersPassedThisTick).ArrayNum <= (int)uVar7) break;
      param_6->MarkerIndex = iVar11;
      uVar4 = 0;
      if ((int)uVar7 < (param_1->MarkersPassedThisTick).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->MarkersPassedThisTick).AllocatorInstance.Data;
      iVar11 = (this->AuthoredSyncMarkers).ArrayNum;
      FVar9 = *(FName *)(pFVar1 + local_88);
      uVar7 = param_5->MarkerIndex;
      iVar5 = (iVar11 - uVar7) + -1;
      iVar13 = iVar11;
      while( true ) {
        uVar4 = 0;
        if ((int)uVar7 < (this->AuthoredSyncMarkers).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar10 = *(FName *)((this->AuthoredSyncMarkers).AllocatorInstance.Data +
                           (longlong)(int)uVar7 * 0xc);
        if ((param_7 != (UMirrorDataTable *)0x0) &&
           (pFVar6 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                     ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                             *)&param_7->SyncToMirrorSyncMap,FVar10), pFVar6 != (FName *)0x0)) {
          FVar10 = *pFVar6;
        }
        if (((FVar10 == FVar9) || (iVar13 = iVar13 + -1, iVar13 < 0)) ||
           ((param_5->MarkerIndex == 0 && (!param_3)))) break;
        iVar5 = (iVar5 + 1) % iVar11;
        uVar7 = (iVar11 - iVar5) - 1;
        param_5->MarkerIndex = uVar7;
      }
      iVar11 = param_5->MarkerIndex;
      if ((iVar11 < 0) || ((this->AuthoredSyncMarkers).ArrayNum <= iVar11)) {
LAB_1474bbc46:
        param_5->MarkerIndex = -1;
      }
      else {
        if ((iVar11 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar10 = *(FName *)((this->AuthoredSyncMarkers).AllocatorInstance.Data +
                           (longlong)iVar11 * 0xc);
        if ((param_7 != (UMirrorDataTable *)0x0) &&
           (pFVar6 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                     ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                             *)&param_7->SyncToMirrorSyncMap,FVar10), pFVar6 != (FName *)0x0)) {
          FVar10 = *pFVar6;
        }
        if (FVar10 != FVar9) goto LAB_1474bbc46;
      }
      iVar11 = param_5->MarkerIndex;
      if (iVar11 == -1) {
        param_2 = *(float *)(pFVar1 + local_88 + 8);
      }
      local_res18 = local_res18 + 1;
      uVar8 = (ulonglong)local_res18;
      local_88 = local_88 + 0xc;
    } while ((int)local_res18 < (param_1->MarkersPassedThisTick).ArrayNum);
    if ((param_1->MarkerSyncEndPostion).PreviousMarkerName == (FName)0x0) {
      param_5->MarkerIndex = -1;
    }
    else if ((iVar11 != -1) && (0 < (param_1->MarkersPassedThisTick).ArrayNum)) {
      param_6->MarkerIndex = iVar11;
      FVar9 = (param_1->MarkerSyncEndPostion).PreviousMarkerName;
      iVar11 = (this->AuthoredSyncMarkers).ArrayNum;
      uVar7 = param_5->MarkerIndex;
      iVar5 = (iVar11 - uVar7) + -1;
      iVar13 = iVar11;
      while( true ) {
        uVar4 = 0;
        if ((int)uVar7 < (this->AuthoredSyncMarkers).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar10 = *(FName *)((this->AuthoredSyncMarkers).AllocatorInstance.Data +
                           (longlong)(int)uVar7 * 0xc);
        if ((param_7 != (UMirrorDataTable *)0x0) &&
           (pFVar6 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                     ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                             *)&param_7->SyncToMirrorSyncMap,FVar10), pFVar6 != (FName *)0x0)) {
          FVar10 = *pFVar6;
        }
        if (((FVar10 == FVar9) || (iVar13 = iVar13 + -1, iVar13 < 0)) ||
           ((param_5->MarkerIndex == 0 && (!param_3)))) break;
        iVar5 = (iVar5 + 1) % iVar11;
        uVar7 = (iVar11 - iVar5) - 1;
        param_5->MarkerIndex = uVar7;
      }
      iVar11 = param_5->MarkerIndex;
      if ((-1 < iVar11) && (iVar11 < (this->AuthoredSyncMarkers).ArrayNum)) {
        if ((iVar11 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar10 = *(FName *)((this->AuthoredSyncMarkers).AllocatorInstance.Data +
                           (longlong)iVar11 * 0xc);
        if ((param_7 != (UMirrorDataTable *)0x0) &&
           (pFVar6 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                     ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                             *)&param_7->SyncToMirrorSyncMap,FVar10), pFVar6 != (FName *)0x0)) {
          FVar10 = *pFVar6;
        }
        if (FVar10 == FVar9) goto LAB_1474bbe6b;
      }
      param_5->MarkerIndex = -1;
    }
LAB_1474bbe6b:
    uVar7 = param_5->MarkerIndex;
    if (uVar7 != 0xffffffff) {
      uVar4 = 0;
      if ((int)uVar7 < (this->AuthoredSyncMarkers).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((*(FName *)((this->AuthoredSyncMarkers).AllocatorInstance.Data +
                     (longlong)(int)uVar7 * 0xc) !=
           (param_1->MarkerSyncEndPostion).PreviousMarkerName) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("AuthoredSyncMarkers[PreviousMarker.MarkerIndex].MarkerName == LeaderEndPosition.PreviousMarkerName"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                             ,0x1024,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (param_5->MarkerIndex == -1) {
      return;
    }
    iVar11 = param_6->MarkerIndex;
    goto joined_r0x0001474bbf11;
  }
  do {
    iVar11 = param_6->MarkerIndex;
    if (iVar11 == -1) {
      if (((param_3) && ((param_1->MarkerSyncEndPostion).NextMarkerName != (FName)0x0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bLooping || Context.GetMarkerSyncEndPosition().NextMarkerName == NAME_None"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                             ,0xfb0,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar14 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
      fVar15 = param_2 + *param_4;
      if (fVar14 <= param_2 + *param_4) {
        fVar15 = fVar14;
      }
      *param_4 = fVar15;
      iVar11 = param_6->MarkerIndex;
      break;
    }
    uVar7 = (uint)uVar8;
    if ((int)uVar7 < (param_1->MarkersPassedThisTick).ArrayNum) {
      param_5->MarkerIndex = iVar11;
      uVar4 = 0;
      if ((int)uVar7 < (param_1->MarkersPassedThisTick).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->MarkersPassedThisTick).AllocatorInstance.Data;
      AdvanceMarkerForwards
                (&param_6->MarkerIndex,*(FName *)(pFVar1 + uVar12),param_3,
                 &this->AuthoredSyncMarkers,param_7);
      iVar11 = param_6->MarkerIndex;
      if (iVar11 == -1) {
        param_2 = *(float *)(pFVar1 + uVar12 + 8);
      }
      uVar8 = (ulonglong)(uVar7 + 1);
      uVar12 = uVar12 + 0xc;
    }
  } while ((int)uVar8 < (param_1->MarkersPassedThisTick).ArrayNum);
  if ((param_1->MarkerSyncEndPostion).NextMarkerName == (FName)0x0) {
    param_6->MarkerIndex = -1;
  }
  else if ((iVar11 != -1) && (0 < (param_1->MarkersPassedThisTick).ArrayNum)) {
    param_5->MarkerIndex = iVar11;
    FVar9 = (param_1->MarkerSyncEndPostion).NextMarkerName;
    iVar11 = (this->AuthoredSyncMarkers).ArrayNum;
    while( true ) {
      uVar7 = param_6->MarkerIndex;
      uVar4 = 0;
      if ((int)uVar7 < (this->AuthoredSyncMarkers).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar10 = *(FName *)((this->AuthoredSyncMarkers).AllocatorInstance.Data +
                         (longlong)(int)uVar7 * 0xc);
      if ((param_7 != (UMirrorDataTable *)0x0) &&
         (pFVar6 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                   ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                           *)&param_7->SyncToMirrorSyncMap,FVar10), pFVar6 != (FName *)0x0)) {
        FVar10 = *pFVar6;
      }
      if ((FVar10 == FVar9) || (iVar11 = iVar11 + -1, iVar11 < 0)) break;
      iVar5 = param_6->MarkerIndex + 1;
      param_6->MarkerIndex = iVar5;
      iVar13 = (this->AuthoredSyncMarkers).ArrayNum;
      if ((iVar5 == iVar13) && (!param_3)) break;
      param_6->MarkerIndex = iVar5 % iVar13;
    }
    iVar11 = param_6->MarkerIndex;
    if ((-1 < iVar11) && (iVar11 < (this->AuthoredSyncMarkers).ArrayNum)) {
      if ((iVar11 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar10 = *(FName *)((this->AuthoredSyncMarkers).AllocatorInstance.Data +
                         (longlong)iVar11 * 0xc);
      if ((param_7 != (UMirrorDataTable *)0x0) &&
         (pFVar6 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                   ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                           *)&param_7->SyncToMirrorSyncMap,FVar10), pFVar6 != (FName *)0x0)) {
        FVar10 = *pFVar6;
      }
      if (FVar10 == FVar9) goto LAB_1474bb98c;
    }
    param_6->MarkerIndex = -1;
  }
LAB_1474bb98c:
  uVar7 = param_6->MarkerIndex;
  if (uVar7 != 0xffffffff) {
    uVar4 = 0;
    if ((int)uVar7 < (this->AuthoredSyncMarkers).ArrayNum) {
      uVar4 = ~uVar7 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar9 = *(FName *)((this->AuthoredSyncMarkers).AllocatorInstance.Data +
                      (longlong)(int)uVar7 * 0xc);
    if ((param_7 != (UMirrorDataTable *)0x0) &&
       (pFVar6 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                         *)&param_7->SyncToMirrorSyncMap,FVar9), pFVar6 != (FName *)0x0)) {
      FVar9 = *pFVar6;
    }
    if ((FVar9 != (param_1->MarkerSyncEndPostion).NextMarkerName) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("MarkerOrMirroredName(AuthoredSyncMarkers[NextMarker.MarkerIndex].MarkerName, MirrorTable) == LeaderEndPosition.NextMarkerName"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                           ,0xfe0,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_5->MarkerIndex == -1) {
    return;
  }
  iVar11 = param_6->MarkerIndex;
joined_r0x0001474bbf11:
  if (iVar11 != -1) {
    fVar15 = GetCurrentTimeFromMarkers
                       (this,param_5,param_6,(param_1->MarkerSyncEndPostion).PositionBetweenMarkers)
    ;
    *param_4 = fVar15;
  }
  return;
}

// AdvanceMarkerPhaseAsLeader @ 1474bbf60

void __thiscall
UAnimSequence::AdvanceMarkerPhaseAsLeader
          (UAnimSequence *this,bool param_1,float param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3,float *param_4,FMarkerPair *param_5,
          FMarkerPair *param_6,TArray<FPassedMarker,TSizedDefaultAllocator<32>_> *param_7,
          UMirrorDataTable *param_8)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float *local_80;
  UAnimSequence *local_78;
  
  if ((param_2 == 0.0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MoveDelta != 0.f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                         ,0xd18,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*param_4 <= 0.0 && *param_4 != 0.0) ||
     (fVar11 = *param_4, fVar9 = (float)(**(code **)(this->_padding_ + 0x2c0))(this), fVar9 < fVar11
     )) {
    local_80 = param_4;
    local_78 = this;
    `UAnimSequence::AdvanceMarkerPhaseAsLeader'::__l2::<lambda_1>::operator()(&local_80);
  }
  fVar9 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
  fVar11 = *param_4;
  if (fVar9 <= *param_4) {
    fVar11 = fVar9;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  *param_4 = fVar11;
  if (param_2 < 0.0) {
    uVar6 = param_5->MarkerIndex;
    while (uVar6 != 0xffffffff) {
      uVar5 = 0;
      if ((int)uVar6 < (this->AuthoredSyncMarkers).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->AuthoredSyncMarkers).AllocatorInstance.Data;
      if (param_5->TimeToMarker <= param_2) {
        fVar11 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
        fVar11 = FGenericPlatformMath::Fmod(param_2 + *param_4,fVar11);
        *param_4 = fVar11;
        if (fVar11 < 0.0) {
          fVar11 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
          *param_4 = fVar11 + *param_4;
        }
        param_5->TimeToMarker = param_5->TimeToMarker - param_2;
        param_6->TimeToMarker = param_6->TimeToMarker - param_2;
        goto LAB_1474bc7fc;
      }
      *param_4 = *(float *)(pFVar1 + (longlong)(int)uVar6 * 0xc + 8);
      param_2 = param_2 - param_5->TimeToMarker;
      param_6->MarkerIndex = param_5->MarkerIndex;
      param_6->TimeToMarker = 0.0;
      pFVar7 = (param_7->AllocatorInstance).Data;
      uStack_88 = 0;
      uStack_84 = 0;
      local_8c = 0;
      if (((pFVar7 <= (FScriptContainerElement *)&local_8c) &&
          ((FScriptContainerElement *)&local_8c < pFVar7 + (longlong)param_7->ArrayMax * 0xc)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar5 = param_7->ArrayNum;
      if (uVar5 == param_7->ArrayMax) {
        uVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&param_7->AllocatorInstance,&param_7->ArrayMax);
      }
      param_7->ArrayNum = uVar5 + 1;
      pFVar7 = (param_7->AllocatorInstance).Data;
      lVar8 = (longlong)(int)uVar5;
      *(ulonglong *)(pFVar7 + lVar8 * 0xc) = CONCAT44(uStack_88,local_8c);
      *(undefined4 *)(pFVar7 + lVar8 * 0xc + 8) = uStack_84;
      uVar2 = *(undefined8 *)(pFVar1 + (longlong)(int)uVar6 * 0xc);
      uVar6 = 0;
      if ((int)uVar5 < param_7->ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined8 *)((param_7->AllocatorInstance).Data + lVar8 * 0xc) = uVar2;
      uVar6 = 0;
      if ((int)uVar5 < param_7->ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar11 = 0.0;
      *(float *)((param_7->AllocatorInstance).Data + lVar8 * 0xc + 8) = param_2;
LAB_1474bc680:
      param_5->MarkerIndex = param_5->MarkerIndex + -1;
      if (-1 < param_5->MarkerIndex) {
LAB_1474bc6ad:
        uVar6 = param_5->MarkerIndex;
        uVar5 = 0;
        if ((int)uVar6 < (this->AuthoredSyncMarkers).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar7 = (param_3->AllocatorInstance).Data;
        pFVar1 = pFVar7 + (longlong)param_3->ArrayNum * 8;
        if (pFVar7 != pFVar1) {
          do {
            if (*(longlong *)pFVar7 ==
                *(longlong *)
                 ((this->AuthoredSyncMarkers).AllocatorInstance.Data + (longlong)(int)uVar6 * 0xc))
            goto LAB_1474bc739;
            pFVar7 = pFVar7 + 8;
          } while (pFVar7 != pFVar1);
        }
        goto LAB_1474bc680;
      }
      if (param_1) {
        param_5->MarkerIndex = (this->AuthoredSyncMarkers).ArrayNum + -1;
        fVar9 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
        fVar11 = fVar11 - fVar9;
        goto LAB_1474bc6ad;
      }
      param_5->MarkerIndex = -1;
LAB_1474bc739:
      uVar6 = param_5->MarkerIndex;
      if (uVar6 != 0xffffffff) {
        uVar5 = 0;
        if ((int)uVar6 < (this->AuthoredSyncMarkers).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        param_5->TimeToMarker =
             (fVar11 + *(float *)((this->AuthoredSyncMarkers).AllocatorInstance.Data +
                                 (longlong)(int)uVar6 * 0xc + 8)) - *param_4;
      }
      uVar6 = param_5->MarkerIndex;
    }
    fVar11 = *param_4;
    fVar9 = fVar11 + param_2;
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    *param_4 = fVar9;
    param_5->TimeToMarker = fVar9;
    fVar11 = *param_4 - fVar11;
    param_5 = param_6;
  }
  else {
    uVar6 = param_6->MarkerIndex;
    while (uVar6 != 0xffffffff) {
      uVar5 = 0;
      if ((int)uVar6 < (this->AuthoredSyncMarkers).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->AuthoredSyncMarkers).AllocatorInstance.Data;
      if (param_2 < param_6->TimeToMarker || param_2 == param_6->TimeToMarker) {
        fVar11 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
        fVar11 = FGenericPlatformMath::Fmod(param_2 + *param_4,fVar11);
        *param_4 = fVar11;
        if (fVar11 < 0.0) {
          fVar11 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
          *param_4 = fVar11 + *param_4;
        }
        param_6->TimeToMarker = param_6->TimeToMarker - param_2;
        param_5->TimeToMarker = param_5->TimeToMarker - param_2;
        goto LAB_1474bc7fc;
      }
      *param_4 = *(float *)(pFVar1 + (longlong)(int)uVar6 * 0xc + 8);
      param_2 = param_2 - param_6->TimeToMarker;
      param_5->MarkerIndex = param_6->MarkerIndex;
      param_5->TimeToMarker = 0.0;
      pFVar7 = (param_7->AllocatorInstance).Data;
      uStack_94 = 0;
      uStack_90 = 0;
      local_98 = 0;
      if (((pFVar7 <= (FScriptContainerElement *)&local_98) &&
          ((FScriptContainerElement *)&local_98 < pFVar7 + (longlong)param_7->ArrayMax * 0xc)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar5 = param_7->ArrayNum;
      if (uVar5 == param_7->ArrayMax) {
        uVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&param_7->AllocatorInstance,&param_7->ArrayMax);
      }
      param_7->ArrayNum = uVar5 + 1;
      pFVar7 = (param_7->AllocatorInstance).Data;
      lVar8 = (longlong)(int)uVar5;
      *(ulonglong *)(pFVar7 + lVar8 * 0xc) = CONCAT44(uStack_94,local_98);
      *(undefined4 *)(pFVar7 + lVar8 * 0xc + 8) = uStack_90;
      uVar2 = *(undefined8 *)(pFVar1 + (longlong)(int)uVar6 * 0xc);
      uVar6 = 0;
      if ((int)uVar5 < param_7->ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined8 *)((param_7->AllocatorInstance).Data + lVar8 * 0xc) = uVar2;
      uVar6 = 0;
      if ((int)uVar5 < param_7->ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar11 = 0.0;
      *(float *)((param_7->AllocatorInstance).Data + lVar8 * 0xc + 8) = param_2;
LAB_1474bc270:
      param_6->MarkerIndex = param_6->MarkerIndex + 1;
      if (param_6->MarkerIndex < (this->AuthoredSyncMarkers).ArrayNum) {
LAB_1474bc29f:
        uVar6 = param_6->MarkerIndex;
        uVar5 = 0;
        if ((int)uVar6 < (this->AuthoredSyncMarkers).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar7 = (param_3->AllocatorInstance).Data;
        pFVar1 = pFVar7 + (longlong)param_3->ArrayNum * 8;
        if (pFVar7 != pFVar1) {
          do {
            if (*(longlong *)pFVar7 ==
                *(longlong *)
                 ((this->AuthoredSyncMarkers).AllocatorInstance.Data + (longlong)(int)uVar6 * 0xc))
            goto LAB_1474bc329;
            pFVar7 = pFVar7 + 8;
          } while (pFVar7 != pFVar1);
        }
        goto LAB_1474bc270;
      }
      if (param_1) {
        param_6->MarkerIndex = 0;
        fVar11 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
        goto LAB_1474bc29f;
      }
      param_6->MarkerIndex = -1;
LAB_1474bc329:
      uVar6 = param_6->MarkerIndex;
      if (uVar6 != 0xffffffff) {
        uVar5 = 0;
        if ((int)uVar6 < (this->AuthoredSyncMarkers).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        param_6->TimeToMarker =
             (fVar11 + *(float *)((this->AuthoredSyncMarkers).AllocatorInstance.Data +
                                 (longlong)(int)uVar6 * 0xc + 8)) - *param_4;
      }
      uVar6 = param_6->MarkerIndex;
    }
    fVar11 = *param_4;
    fVar10 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
    fVar9 = param_2 + *param_4;
    if (fVar10 <= param_2 + *param_4) {
      fVar9 = fVar10;
    }
    *param_4 = fVar9;
    fVar10 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
    param_6->TimeToMarker = fVar10 - fVar9;
    fVar11 = *param_4 - fVar11;
  }
  param_5->TimeToMarker = param_5->TimeToMarker - fVar11;
LAB_1474bc7fc:
  if (((*param_4 <= 0.0 && *param_4 != 0.0) ||
      (fVar11 = *param_4, fVar9 = (float)(**(code **)(this->_padding_ + 0x2c0))(this),
      fVar9 < fVar11)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentTime >= 0.f && CurrentTime <= GetPlayLength()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                         ,0xdcf,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// BeginDestroy @ 1474c0a90

void __thiscall UAnimSequence::BeginDestroy(UAnimSequence *this)

{
  UObject::BeginDestroy((UObject *)this);
  FCompressedAnimSequence::Reset(&this->CompressedData);
  return;
}

// CanEvaluateRawAnimationData @ 1474c42d0

bool __thiscall UAnimSequence::CanEvaluateRawAnimationData(UAnimSequence *this)

{
  return false;
}

// EnableRootMotionSettingFromMontage @ 1474cca60

void __thiscall
UAnimSequence::EnableRootMotionSettingFromMontage(UAnimSequence *this,bool param_1,Type param_2)

{
  if (this->bRootMotionSettingsCopiedFromMontage == false) {
    this->bEnableRootMotion = param_1;
    (this->RootMotionRootLock).Value = (uchar)param_2;
    this->bRootMotionSettingsCopiedFromMontage = true;
  }
  return;
}

// EvaluateAttributes @ 1474ccc30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAnimSequence::EvaluateAttributes
          (UAnimSequence *this,FAnimationPoseData *param_1,FAnimExtractContext *param_2,bool param_3
          )

{
  ulonglong uVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  ForElementType<unsigned_int> FVar7;
  TMap<FAnimationAttributeIdentifier,FAttributeCurve,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAnimationAttributeIdentifier,FAttributeCurve,0>_>
  *pTVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_public:_void___cdecl_UAnimSequence::EvaluateAttributes(FAnimationPoseData_&,FAnimExtractContext_const_&,bool)const_::_2_::FStat_STAT_EvaluateAttributes>
  FVar13;
  FCompactPose *pFVar14;
  FSkeletonRemappingRegistry *this_00;
  USkeleton *pUVar15;
  FSkeletonRemapping *this_01;
  uchar *puVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  ForElementType<unsigned_int> FVar23;
  uint *puVar24;
  uint uVar25;
  undefined1 local_118 [4];
  FColor_u_0 local_114;
  FName local_110;
  ForElementType<unsigned_int> local_108;
  FName local_100;
  FName local_f8;
  TMap<FAnimationAttributeIdentifier,FAttributeCurve,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAnimationAttributeIdentifier,FAttributeCurve,0>_>
  *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  int local_b8;
  int local_b4;
  longlong local_b0;
  TMap<FAnimationAttributeIdentifier,FAttributeCurve,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAnimationAttributeIdentifier,FAttributeCurve,0>_>
  *local_a8;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *local_a0;
  TMap<FAnimationAttributeIdentifier,FAttributeCurve,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAnimationAttributeIdentifier,FAttributeCurve,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FAttributeId local_68;
  FName local_50;
  FName local_48 [2];
  
  iVar22 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_EvaluateAttributes ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UAnimSequence::EvaluateAttributes(FAnimationPoseData_&,FAnimExtractContext_const_&,bool)const_::_2_::FStat_STAT_EvaluateAttributes>
         )0x0) {
      pFVar12 = ::FName::FName(&local_50,"STAT_EvaluateAttributes");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EvaluateAttributes,*pFVar12,
                 L"STAT_EvaluateAttributes","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar13 = StatPtr_STAT_EvaluateAttributes;
  if (StatPtr_STAT_EvaluateAttributes ==
      (FThreadSafeStaticStat<_public:_void___cdecl_UAnimSequence::EvaluateAttributes(FAnimationPoseData_&,FAnimExtractContext_const_&,bool)const_::_2_::FStat_STAT_EvaluateAttributes>
       )0x0) {
    pFVar12 = ::FName::FName(local_48,"STAT_EvaluateAttributes");
    FVar13 = (FThreadSafeStaticStat<_public:_void___cdecl_UAnimSequence::EvaluateAttributes(FAnimationPoseData_&,FAnimExtractContext_const_&,bool)const_::_2_::FStat_STAT_EvaluateAttributes>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EvaluateAttributes,*pFVar12,
                          L"STAT_EvaluateAttributes","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar13;
  bVar6 = false;
  bVar5 = false;
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  bVar10 = false;
  bVar9 = false;
  if ((FVar3.ComparisonIndex.Value.Value != 0) || (FVar3.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_114.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_114._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar5 = true;
      bVar10 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_110.ComparisonIndex.Value = FVar3.ComparisonIndex.Value.Value;
        local_110.Number = FVar3.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_110,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                   ,0xe81);
        bVar6 = true;
        bVar5 = true;
        bVar10 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_100 = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      bVar9 = true;
      goto LAB_1474ccdce;
    }
  }
  bVar6 = bVar10;
  bVar5 = bVar9;
  bVar9 = false;
  local_100 = local_f8;
LAB_1474ccdce:
  pFVar14 = FAnimationPoseData::GetPose(param_1);
  lVar17 = *(longlong *)&pFVar14->field_0x10;
  local_b0 = lVar17;
  local_a0 = (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)
             FAnimationPoseData::GetAttributes(param_1);
  this_00 = UE::Anim::FSkeletonRemappingRegistry::Get();
  pUVar15 = (USkeleton *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar17 + 0x40));
  this_01 = UE::Anim::FSkeletonRemappingRegistry::GetRemapping
                      (this_00,(USkeleton *)this->_padding_,pUVar15);
  local_a8 = &this->AttributeCurves;
  local_c8 = 0;
  local_108 = (ForElementType<unsigned_int>)&(this->AttributeCurves).field_0x10;
  uStack_dc = 1;
  iVar2 = *(int *)&(this->AttributeCurves).field_0x28;
  iStack_cc = 0;
  if (iVar2 != 0) {
    puVar24 = *(uint **)&(this->AttributeCurves).field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)local_108;
    }
    uVar19 = *puVar24;
    iVar22 = 0;
    while (uVar19 == 0) {
      lVar17 = (longlong)iVar22;
      local_c8 = local_c8 + 0x20;
      iVar22 = iVar22 + 1;
      iStack_cc = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar22) goto LAB_1474cce9e;
      uVar19 = (puVar24 + 1)[lVar17];
    }
    uStack_dc = -uVar19 & uVar19;
    uVar1 = (ulonglong)uStack_dc * 2 + 1;
    lVar17 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_b8 = (int)lVar17;
    iStack_cc = local_b8 + -1 + local_c8;
    if (iVar2 < iStack_cc) {
      iStack_cc = iVar2;
    }
  }
LAB_1474cce9e:
  local_e8 = &this->AttributeCurves;
  iStack_c0 = *(int *)&(this->AttributeCurves).field_0x8 -
              *(int *)&(this->AttributeCurves).field_0x34;
  uVar19 = *(uint *)&(this->AttributeCurves).field_0x28;
  uStack_d0 = 0xffffffff;
  TStack_90.CurrentBitIndex = iStack_cc;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  TStack_90._padding_ = CONCAT44(uStack_dc,iVar22);
  uVar25 = uVar19 & 0xffffffe0;
  iVar21 = (int)uVar19 >> 5;
  TStack_90._28_4_ = iStack_cc;
  TStack_90.BaseBitIndex = local_c8;
  uStack_70 = CONCAT44(uStack_bc,iStack_c0);
  iStack_e0 = iVar22;
  local_d8 = (undefined1 *)local_108;
  iStack_c4 = iStack_cc;
  local_98 = local_e8;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_108;
  if ((((int)uVar19 < 0) || (iVar2 < (int)uVar19)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar17 = local_b0;
  FVar7 = local_108;
  uVar11 = *(int *)((longlong)local_108 + 0x18);
  if (uVar19 != uVar11) {
    FVar23 = *(ForElementType<unsigned_int> *)((longlong)local_108 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_108 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar23 = local_108;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)((longlong)FVar23 + (longlong)iVar21 * 4);
    while (uVar19 == 0) {
      lVar18 = (longlong)iVar21;
      uVar25 = uVar25 + 0x20;
      iVar21 = iVar21 + 1;
      uVar19 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
      goto LAB_1474ccfc0;
      uVar19 = *(uint *)((undefined1 *)((longlong)FVar23 + 4) + lVar18 * 4);
    }
    uVar1 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_b4 = (int)lVar18;
    uVar19 = local_b4 + -1 + uVar25;
    if ((int)uVar11 < (int)uVar19) {
      uVar19 = uVar11;
    }
  }
LAB_1474ccfc0:
  do {
    pTVar8 = local_98;
    if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
      local_118[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FAnimationAttributeIdentifier,FAttributeCurve>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_118);
    }
    FVar3 = local_100;
    if (((TStack_90.CurrentBitIndex == uVar19) &&
        ((ForElementType<unsigned_int>)TStack_90.Array == FVar7)) && (pTVar8 == local_a8)) {
      if (bVar5) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar6) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar9) {
        FThreadStats::AddMessage(FVar3,CycleScopeEnd);
      }
      return;
    }
    lVar18 = *(longlong *)pTVar8;
    lVar20 = (longlong)TStack_90.CurrentBitIndex * 0xf8;
    uVar25 = *(uint *)(lVar20 + 0x10 + lVar18);
    bVar10 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_01);
    if ((bVar10) && (bVar10 = FWeakObjectPtr::IsValid(&(this_01->TargetSkeleton).WeakPtr), bVar10))
    {
      if (((int)uVar25 < 0) || ((this_01->SourceToTargetBoneIndexes).ArrayNum <= (int)uVar25)) {
        uVar25 = 0xffffffff;
      }
      else {
        uVar11 = 0;
        if ((int)uVar25 < (this_01->SourceToTargetBoneIndexes).ArrayNum) {
          uVar11 = ~uVar25 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar25 = *(uint *)((this_01->SourceToTargetBoneIndexes).AllocatorInstance.Data +
                          (longlong)(int)uVar25 * 4);
      }
    }
    if (((int)uVar25 < 0) || (*(int *)(lVar17 + 0x88) <= (int)uVar25)) {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<8192494858347217512>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BoneContainer.h"
                          ,0x268,"SkeletonToCompactPose.IsValidIndex(SkeletonIndex)");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      uVar11 = 0;
      if ((int)uVar25 < *(int *)(lVar17 + 0x88)) {
        uVar11 = ~uVar25 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar22 = *(int *)(*(longlong *)(lVar17 + 0x80) + (longlong)(int)uVar25 * 4);
      if (iVar22 != -1) {
        local_68.Namespace = UE::Anim::BoneAttributeNamespace;
        local_68.Name = *(FName *)(lVar20 + lVar18);
        local_68.Index = iVar22;
        puVar16 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                  FindOrAdd(local_a0,*(UScriptStruct **)(lVar20 + 0x18 + lVar18),&local_68);
        FAttributeCurve::EvaluateToPtr
                  ((FAttributeCurve *)(lVar18 + 0x40 + lVar20),
                   *(UScriptStruct **)(lVar20 + 0x18 + lVar18),(float)param_2->CurrentTime,puVar16);
      }
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  } while( true );
}

// EvaluateCurveData @ 1474cd7e0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
UAnimSequence::EvaluateCurveData
          (UAnimSequence *this,FName param_1,FAnimExtractContext *param_2,bool param_3)

{
  int *piVar1;
  UAnimCurveCompressionCodec *pUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_protected:_float___cdecl_UAnimSequence::EvaluateCurveData_Lockless(FName,FAnimExtractContext_const_&,bool)const_::_2_::FStat_EvaluateCurveDataByName>
  FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  float fVar15;
  FName FStackX_8;
  FColor_u_0 aFStackX_20 [2];
  LARGE_INTEGER LStack_88;
  FName FStack_80;
  FName FStack_78;
  FName FStack_70;
  FStatMessage aFStack_60 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_EvaluateCurveDataByName ==
          (FThreadSafeStaticStat<_protected:_float___cdecl_UAnimSequence::EvaluateCurveData_Lockless(FName,FAnimExtractContext_const_&,bool)const_::_2_::FStat_EvaluateCurveDataByName>
           )0x0) {
        pFVar10 = ::FName::FName(&FStack_80,"EvaluateCurveDataByName");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_EvaluateCurveDataByName,*pFVar10,
                   L"EvaluateCurveDataByName","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar11 = StatPtr_EvaluateCurveDataByName;
  if (StatPtr_EvaluateCurveDataByName ==
      (FThreadSafeStaticStat<_protected:_float___cdecl_UAnimSequence::EvaluateCurveData_Lockless(FName,FAnimExtractContext_const_&,bool)const_::_2_::FStat_EvaluateCurveDataByName>
       )0x0) {
    pFVar10 = ::FName::FName(&FStack_78,"EvaluateCurveDataByName");
    FVar11 = (FThreadSafeStaticStat<_protected:_float___cdecl_UAnimSequence::EvaluateCurveData_Lockless(FName,FAnimExtractContext_const_&,bool)const_::_2_::FStat_EvaluateCurveDataByName>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_EvaluateCurveDataByName,*pFVar10,
                          L"EvaluateCurveDataByName","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar4 = false;
  bVar6 = false;
  FStack_70.ComparisonIndex.Value = 0;
  FStack_70.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value == 0) && (uVar12 == 0)) {
LAB_1474cd984:
    bVar5 = false;
    FVar14 = FStack_70;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStackX_20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStackX_20[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        FStackX_8.ComparisonIndex.Value = FVar13.Value;
        FStackX_8.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStackX_8,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                   ,0xcb5);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1474cd984;
    LStack_88.s.LowPart = FVar13.Value;
    LStack_88.s.HighPart = uVar12;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
  }
  if (!param_3) {
    bVar7 = FCompressedAnimSequence::IsCurveDataValid(&this->CompressedData,this,false);
    if (bVar7) {
      bVar7 = false;
      goto LAB_1474cd9e7;
    }
  }
  bVar7 = true;
  if (param_3) {
    cVar9 = (**(code **)(this->_padding_ + 0x3e0))(this);
    if (cVar9 == '\0') {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bForceUseRawData || CanEvaluateRawAnimationData()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                         ,0xcb9,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        fVar15 = (float)(*pcVar3)();
        return fVar15;
      }
    }
  }
LAB_1474cd9e7:
  cVar9 = (**(code **)(this->_padding_ + 0x3e0))(this);
  if ((cVar9 == '\0') || (!bVar7)) {
    bVar7 = FCompressedAnimSequence::IsCurveDataValid(&this->CompressedData,this,false);
    if ((bVar7) &&
       (pUVar2 = (this->CompressedData).CurveCompressionCodec.field0_0x0.DebugPtr,
       pUVar2 != (UAnimCurveCompressionCodec *)0x0)) {
      fVar15 = (float)(**(code **)(*(longlong *)pUVar2 + 0x2d0))
                                (pUVar2,&this->CompressedData,param_1,(float)param_2->CurrentTime);
    }
    else {
      fVar15 = 0.0;
    }
  }
  else {
    fVar15 = UAnimSequenceBase::EvaluateCurveData((UAnimSequenceBase *)this,param_1,param_2,param_3)
    ;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      aFStack_60[0].NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      aFStack_60[0].NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStack_88);
      aFStack_60[0].StatData.Pad[4] = '\0';
      aFStack_60[0].StatData.Pad[5] = '\0';
      aFStack_60[0].StatData.Pad[6] = '\0';
      aFStack_60[0].StatData.Pad[7] = '\0';
      aFStack_60[0].StatData.Pad[0] = LStack_88.s.LowPart._0_1_;
      aFStack_60[0].StatData.Pad[1] = LStack_88.s.LowPart._1_1_;
      aFStack_60[0].StatData.Pad[2] = LStack_88.s.LowPart._2_1_;
      aFStack_60[0].StatData.Pad[3] = LStack_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,aFStack_60);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return fVar15;
}

// EvaluateCurveData @ 1474cd7f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAnimSequence::EvaluateCurveData
          (UAnimSequence *this,FBlendedCurve *param_1,FAnimExtractContext *param_2,bool param_3)

{
  int *piVar1;
  FCompressedAnimSequence *this_00;
  UAnimCurveCompressionCodec *pUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_AnimSeq_EvalCurveData> FVar11;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FName FStackX_8;
  FColor_u_0 aFStackX_20 [2];
  LARGE_INTEGER LStack_68;
  FName FStack_60;
  FName FStack_58;
  FStatMessage FStack_48;
  
  FVar11 = StatPtr_STAT_AnimSeq_EvalCurveData;
  if (StatPtr_STAT_AnimSeq_EvalCurveData ==
      (FThreadSafeStaticStat<FStat_STAT_AnimSeq_EvalCurveData>)0x0) {
    pFVar10 = ::FName::FName(&FStack_60,"STAT_AnimSeq_EvalCurveData");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_AnimSeq_EvalCurveData>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimSeq_EvalCurveData,*pFVar10,
                        L"AnimSeq EvalCurveData","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar4 = false;
  bVar6 = false;
  FStack_58.ComparisonIndex.Value = 0;
  FStack_58.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value == 0) && (uVar12 == 0)) {
LAB_1474cdd70:
    bVar5 = false;
    FVar14 = FStack_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStackX_20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStackX_20[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        FStackX_8.ComparisonIndex.Value = FVar13.Value;
        FStackX_8.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStackX_8,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                   ,0xc96);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1474cdd70;
    LStack_68.s.LowPart = FVar13.Value;
    LStack_68.s.HighPart = uVar12;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
  }
  this_00 = &this->CompressedData;
  if (!param_3) {
    bVar7 = FCompressedAnimSequence::IsCurveDataValid(this_00,this,false);
    if (bVar7) {
      bVar7 = false;
      goto LAB_1474cddd6;
    }
  }
  bVar7 = true;
  if (param_3) {
    cVar9 = (**(code **)(this->_padding_ + 0x3e0))(this);
    if (cVar9 == '\0') {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bForceUseRawData || CanEvaluateRawAnimationData()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                         ,0xc9a,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
LAB_1474cddd6:
  cVar9 = (**(code **)(this->_padding_ + 0x3e0))(this);
  if ((cVar9 == '\0') || (!bVar7)) {
    bVar7 = FCompressedAnimSequence::IsCurveDataValid(this_00,this,false);
    if ((bVar7) &&
       ((this->CompressedData).CurveCompressionCodec.field0_0x0.DebugPtr !=
        (UAnimCurveCompressionCodec *)0x0)) {
      if (__CsvProfilerStat3239 == false) {
        FCsvProfilerTrace::OutputInlineStat("EvaluateCurveData",_GCsvCategory_Animation.Index);
        __CsvProfilerStat3239 = true;
      }
      uVar12 = _GCsvCategory_Animation.Index;
      FCsvProfiler::BeginStat
                ("EvaluateCurveData",_GCsvCategory_Animation.Index,"CSV_EvaluateCurveData");
      pUVar2 = (this->CompressedData).CurveCompressionCodec.field0_0x0.DebugPtr;
      (**(code **)(*(longlong *)pUVar2 + 0x2c0))(pUVar2,this_00,param_1,(float)param_2->CurrentTime)
      ;
      FCsvProfiler::EndStat("EvaluateCurveData",uVar12);
    }
  }
  else {
    UAnimSequenceBase::EvaluateCurveData((UAnimSequenceBase *)this,param_1,param_2,param_3);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      FStack_48.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      FStack_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStack_68);
      FStack_48.StatData.Pad[4] = '\0';
      FStack_48.StatData.Pad[5] = '\0';
      FStack_48.StatData.Pad[6] = '\0';
      FStack_48.StatData.Pad[7] = '\0';
      FStack_48.StatData.Pad[0] = LStack_68.s.LowPart._0_1_;
      FStack_48.StatData.Pad[1] = LStack_68.s.LowPart._1_1_;
      FStack_48.StatData.Pad[2] = LStack_68.s.LowPart._2_1_;
      FStack_48.StatData.Pad[3] = LStack_68.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&FStack_48);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// EvaluateCurveData_Lockless @ 1474cd800

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
UAnimSequence::EvaluateCurveData_Lockless
          (UAnimSequence *this,FName param_1,FAnimExtractContext *param_2,bool param_3)

{
  int *piVar1;
  UAnimCurveCompressionCodec *pUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_protected:_float___cdecl_UAnimSequence::EvaluateCurveData_Lockless(FName,FAnimExtractContext_const_&,bool)const_::_2_::FStat_EvaluateCurveDataByName>
  FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  float fVar15;
  FName local_res8;
  FColor_u_0 local_res20 [2];
  LARGE_INTEGER local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FStatMessage local_60 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_EvaluateCurveDataByName ==
          (FThreadSafeStaticStat<_protected:_float___cdecl_UAnimSequence::EvaluateCurveData_Lockless(FName,FAnimExtractContext_const_&,bool)const_::_2_::FStat_EvaluateCurveDataByName>
           )0x0) {
        pFVar10 = ::FName::FName(&local_80,"EvaluateCurveDataByName");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_EvaluateCurveDataByName,*pFVar10,
                   L"EvaluateCurveDataByName","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar11 = StatPtr_EvaluateCurveDataByName;
  if (StatPtr_EvaluateCurveDataByName ==
      (FThreadSafeStaticStat<_protected:_float___cdecl_UAnimSequence::EvaluateCurveData_Lockless(FName,FAnimExtractContext_const_&,bool)const_::_2_::FStat_EvaluateCurveDataByName>
       )0x0) {
    pFVar10 = ::FName::FName(&local_78,"EvaluateCurveDataByName");
    FVar11 = (FThreadSafeStaticStat<_protected:_float___cdecl_UAnimSequence::EvaluateCurveData_Lockless(FName,FAnimExtractContext_const_&,bool)const_::_2_::FStat_EvaluateCurveDataByName>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_EvaluateCurveDataByName,*pFVar10,
                          L"EvaluateCurveDataByName","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar4 = false;
  bVar6 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value == 0) && (uVar12 == 0)) {
LAB_1474cd984:
    bVar5 = false;
    FVar14 = local_70;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar13.Value;
        local_res8.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                   ,0xcb5);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1474cd984;
    local_88.s.LowPart = FVar13.Value;
    local_88.s.HighPart = uVar12;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
  }
  if (!param_3) {
    bVar7 = FCompressedAnimSequence::IsCurveDataValid(&this->CompressedData,this,false);
    if (bVar7) {
      bVar7 = false;
      goto LAB_1474cd9e7;
    }
  }
  bVar7 = true;
  if (param_3) {
    cVar9 = (**(code **)(this->_padding_ + 0x3e0))(this);
    if (cVar9 == '\0') {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bForceUseRawData || CanEvaluateRawAnimationData()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                         ,0xcb9,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        fVar15 = (float)(*pcVar3)();
        return fVar15;
      }
    }
  }
LAB_1474cd9e7:
  cVar9 = (**(code **)(this->_padding_ + 0x3e0))(this);
  if ((cVar9 == '\0') || (!bVar7)) {
    bVar7 = FCompressedAnimSequence::IsCurveDataValid(&this->CompressedData,this,false);
    if ((bVar7) &&
       (pUVar2 = (this->CompressedData).CurveCompressionCodec.field0_0x0.DebugPtr,
       pUVar2 != (UAnimCurveCompressionCodec *)0x0)) {
      fVar15 = (float)(**(code **)(*(longlong *)pUVar2 + 0x2d0))
                                (pUVar2,&this->CompressedData,param_1,(float)param_2->CurrentTime);
    }
    else {
      fVar15 = 0.0;
    }
  }
  else {
    fVar15 = UAnimSequenceBase::EvaluateCurveData((UAnimSequenceBase *)this,param_1,param_2,param_3)
    ;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60[0].NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_60[0].NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_88);
      local_60[0].StatData.Pad[4] = '\0';
      local_60[0].StatData.Pad[5] = '\0';
      local_60[0].StatData.Pad[6] = '\0';
      local_60[0].StatData.Pad[7] = '\0';
      local_60[0].StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_60[0].StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_60[0].StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_60[0].StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_60);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return fVar15;
}

// EvaluateCurveData_Lockless @ 1474cdc20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAnimSequence::EvaluateCurveData_Lockless
          (UAnimSequence *this,FBlendedCurve *param_1,FAnimExtractContext *param_2,bool param_3)

{
  int *piVar1;
  FCompressedAnimSequence *this_00;
  UAnimCurveCompressionCodec *pUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_AnimSeq_EvalCurveData> FVar11;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FName local_res8;
  FColor_u_0 local_res20 [2];
  LARGE_INTEGER local_68;
  FName local_60;
  FName local_58;
  FStatMessage local_48;
  
  FVar11 = StatPtr_STAT_AnimSeq_EvalCurveData;
  if (StatPtr_STAT_AnimSeq_EvalCurveData ==
      (FThreadSafeStaticStat<FStat_STAT_AnimSeq_EvalCurveData>)0x0) {
    pFVar10 = ::FName::FName(&local_60,"STAT_AnimSeq_EvalCurveData");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_AnimSeq_EvalCurveData>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimSeq_EvalCurveData,*pFVar10,
                        L"AnimSeq EvalCurveData","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar4 = false;
  bVar6 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value == 0) && (uVar12 == 0)) {
LAB_1474cdd70:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar13.Value;
        local_res8.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                   ,0xc96);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1474cdd70;
    local_68.s.LowPart = FVar13.Value;
    local_68.s.HighPart = uVar12;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
  }
  this_00 = &this->CompressedData;
  if (!param_3) {
    bVar7 = FCompressedAnimSequence::IsCurveDataValid(this_00,this,false);
    if (bVar7) {
      bVar7 = false;
      goto LAB_1474cddd6;
    }
  }
  bVar7 = true;
  if (param_3) {
    cVar9 = (**(code **)(this->_padding_ + 0x3e0))(this);
    if (cVar9 == '\0') {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bForceUseRawData || CanEvaluateRawAnimationData()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                         ,0xc9a,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
LAB_1474cddd6:
  cVar9 = (**(code **)(this->_padding_ + 0x3e0))(this);
  if ((cVar9 == '\0') || (!bVar7)) {
    bVar7 = FCompressedAnimSequence::IsCurveDataValid(this_00,this,false);
    if ((bVar7) &&
       ((this->CompressedData).CurveCompressionCodec.field0_0x0.DebugPtr !=
        (UAnimCurveCompressionCodec *)0x0)) {
      if (__CsvProfilerStat3239 == false) {
        FCsvProfilerTrace::OutputInlineStat("EvaluateCurveData",_GCsvCategory_Animation.Index);
        __CsvProfilerStat3239 = true;
      }
      uVar12 = _GCsvCategory_Animation.Index;
      FCsvProfiler::BeginStat
                ("EvaluateCurveData",_GCsvCategory_Animation.Index,"CSV_EvaluateCurveData");
      pUVar2 = (this->CompressedData).CurveCompressionCodec.field0_0x0.DebugPtr;
      (**(code **)(*(longlong *)pUVar2 + 0x2c0))(pUVar2,this_00,param_1,(float)param_2->CurrentTime)
      ;
      FCsvProfiler::EndStat("EvaluateCurveData",uVar12);
    }
  }
  else {
    UAnimSequenceBase::EvaluateCurveData((UAnimSequenceBase *)this,param_1,param_2,param_3);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_48.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_68);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_68.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_68.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_68.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_68.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_48);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// ExtractRootMotion @ 1474d1550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
UAnimSequence::ExtractRootMotion
          (UAnimSequence *this,TTransform<double> *__return_storage_ptr__,
          FAnimExtractContext *param_1)

{
  __m128d *p_Var1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ETypeAdvanceAnim EVar20;
  TTransform<double> *pTVar21;
  bool bVar22;
  float fVar23;
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
  undefined4 uVar39;
  float fVar40;
  undefined1 auStackY_1f8 [32];
  char local_1c8 [4];
  float local_1c4;
  float local_1c0 [2];
  UAnimSequence *local_1b8;
  char *local_1b0;
  float *local_1a8;
  float *local_1a0;
  char local_198;
  undefined4 local_194;
  undefined1 local_188 [80];
  __m128d local_138;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  fVar40 = (param_1->DeltaTimeRecord).Delta;
  local_198 = '\0';
  local_194 = 0;
  dVar5 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dVar6 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  dVar8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dVar9 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  dVar11 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  dVar12 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  dVar14 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dVar15 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar17 = (undefined8)GlobalVectorConstants::Float1110.m128_f32[1];
  dVar3 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_188._8_4_ = SUB84(dVar6,0);
  local_188._0_8_ = dVar5;
  local_188._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  local_138.m128d_f64[1]._0_4_ = SUB84(dVar3,0);
  local_138.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_138.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_188._24_4_ = SUB84(dVar9,0);
  local_188._16_8_ = dVar8;
  local_188._28_4_ = (int)((ulonglong)dVar9 >> 0x20);
  local_188._40_4_ = SUB84(dVar12,0);
  local_188._32_8_ = dVar11;
  local_188._44_4_ = (int)((ulonglong)dVar12 >> 0x20);
  local_188._56_4_ = SUB84(dVar15,0);
  local_188._48_8_ = dVar14;
  local_188._60_4_ = (int)((ulonglong)dVar15 >> 0x20);
  local_188._72_4_ = (int)uVar17;
  local_188._64_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_188._76_4_ = (int)((ulonglong)uVar17 >> 0x20);
  uVar18 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  uVar19 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  if (fVar40 != 0.0) {
    local_1c8[0] = fVar40 < 0.0;
    fVar23 = (float)param_1->CurrentTime;
    while( true ) {
      local_1c4 = fVar23;
      local_1c0[0] = fVar23;
      fVar23 = (float)(**(code **)(this->_padding_ + 0x2c0))();
      EVar20 = FAnimationRuntime::AdvanceTime(false,fVar40,&local_1c4,fVar23);
      if (local_1c8[0] == '\0') {
        bVar22 = local_1c4 < local_1c0[0];
      }
      else {
        bVar22 = local_1c0[0] < local_1c4;
      }
      if (bVar22) {
        local_1b0 = local_1c8;
        local_1a8 = local_1c0;
        local_1a0 = &local_1c4;
        local_1b8 = this;
        `UAnimSequence::ExtractRootMotion'::__l7::<lambda_1>::operator()(&local_1b8);
      }
      pTVar21 = ExtractRootMotionFromRange
                          (this,&local_c8,(double)local_1c0[0],(double)local_1c4,param_1);
      if (local_198 == '\0') {
        local_198 = '\x01';
        uVar24 = *(undefined4 *)(pTVar21->Rotation).XY.m128d_f64;
        uVar25 = *(undefined4 *)((longlong)(pTVar21->Rotation).XY.m128d_f64 + 4);
        uVar26 = *(undefined4 *)((pTVar21->Rotation).XY.m128d_f64 + 1);
        uVar27 = *(undefined4 *)((longlong)(pTVar21->Rotation).XY.m128d_f64 + 0xc);
        local_188._0_16_ = *(undefined1 (*) [16])(pTVar21->Rotation).XY.m128d_f64;
        p_Var1 = &(pTVar21->Rotation).ZW;
        uVar28 = *(undefined4 *)p_Var1->m128d_f64;
        uVar29 = *(undefined4 *)((longlong)(pTVar21->Rotation).ZW.m128d_f64 + 4);
        uVar30 = *(undefined4 *)((pTVar21->Rotation).ZW.m128d_f64 + 1);
        uVar31 = *(undefined4 *)((longlong)(pTVar21->Rotation).ZW.m128d_f64 + 0xc);
        local_188._16_16_ = *(undefined1 (*) [16])p_Var1->m128d_f64;
        uVar32 = *(undefined4 *)(pTVar21->Translation).XY.m128d_f64;
        uVar33 = *(undefined4 *)((longlong)(pTVar21->Translation).XY.m128d_f64 + 4);
        uVar34 = *(undefined4 *)((pTVar21->Translation).XY.m128d_f64 + 1);
        uVar35 = *(undefined4 *)((longlong)(pTVar21->Translation).XY.m128d_f64 + 0xc);
        local_188._32_16_ = *(undefined1 (*) [16])(pTVar21->Translation).XY.m128d_f64;
        local_194 = 0x3f800000;
        uVar36 = *(undefined4 *)(pTVar21->Translation).ZW.m128d_f64;
        uVar37 = *(undefined4 *)((longlong)(pTVar21->Translation).ZW.m128d_f64 + 4);
        uVar38 = *(undefined4 *)((pTVar21->Translation).ZW.m128d_f64 + 1);
        uVar39 = *(undefined4 *)((longlong)(pTVar21->Translation).ZW.m128d_f64 + 0xc);
      }
      else {
        local_128.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_128.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_128.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_128.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_128.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_128.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_128.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_128.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_128.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_128.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_128.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_128.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_128.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_128.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_128.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_128.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_128.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_128.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_128,pTVar21,(TTransform<double> *)local_188);
        uVar24 = local_128.Rotation.XY.m128d_f64[0]._0_4_;
        uVar25 = local_128.Rotation.XY.m128d_f64[0]._4_4_;
        uVar26 = local_128.Rotation.XY.m128d_f64[1]._0_4_;
        uVar27 = local_128.Rotation.XY.m128d_f64[1]._4_4_;
        uVar28 = local_128.Rotation.ZW.m128d_f64[0]._0_4_;
        uVar29 = local_128.Rotation.ZW.m128d_f64[0]._4_4_;
        uVar30 = local_128.Rotation.ZW.m128d_f64[1]._0_4_;
        uVar31 = local_128.Rotation.ZW.m128d_f64[1]._4_4_;
        uVar32 = local_128.Translation.XY.m128d_f64[0]._0_4_;
        uVar33 = local_128.Translation.XY.m128d_f64[0]._4_4_;
        uVar34 = local_128.Translation.XY.m128d_f64[1]._0_4_;
        uVar35 = local_128.Translation.XY.m128d_f64[1]._4_4_;
        local_188._0_8_ = local_128.Rotation.XY.m128d_f64[0];
        local_188._8_8_ = local_128.Rotation.XY.m128d_f64[1];
        local_188._16_8_ = local_128.Rotation.ZW.m128d_f64[0];
        local_188._24_8_ = local_128.Rotation.ZW.m128d_f64[1];
        local_188._32_8_ = local_128.Translation.XY.m128d_f64[0];
        local_188._40_8_ = local_128.Translation.XY.m128d_f64[1];
        uVar36 = local_128.Translation.ZW.m128d_f64[0]._0_4_;
        uVar37 = local_128.Translation.ZW.m128d_f64[0]._4_4_;
        uVar38 = local_128.Translation.ZW.m128d_f64[1]._0_4_;
        uVar39 = local_128.Translation.ZW.m128d_f64[1]._4_4_;
      }
      dVar15 = (double)CONCAT44(uVar39,uVar38);
      dVar12 = (double)CONCAT44(uVar35,uVar34);
      dVar11 = (double)CONCAT44(uVar33,uVar32);
      dVar9 = (double)CONCAT44(uVar31,uVar30);
      dVar8 = (double)CONCAT44(uVar29,uVar28);
      dVar6 = (double)CONCAT44(uVar27,uVar26);
      dVar5 = (double)CONCAT44(uVar25,uVar24);
      dVar3 = 0.0;
      local_138.m128d_f64[1] = 0.0;
      local_138.m128d_f64[0] = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Z;
      dVar14 = (double)CONCAT44(uVar37,uVar36);
      local_188._56_4_ = uVar38;
      local_188._48_8_ = dVar14;
      local_188._60_4_ = uVar39;
      local_188._72_8_ = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Y;
      local_188._64_8_ = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.X;
      uVar18 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.X;
      uVar17 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Y;
      uVar19 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Z;
      if ((EVar20 != ETAA_Finished) || (param_1->bLooping == false)) break;
      fVar40 = fVar40 - (local_1c4 - local_1c0[0]);
      fVar23 = 0.0;
      if (local_1c8[0] != '\0') {
        fVar23 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
      }
    }
  }
  auVar4._8_4_ = SUB84(dVar6,0);
  auVar4._0_8_ = dVar5;
  auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar4;
  auVar7._8_4_ = SUB84(dVar9,0);
  auVar7._0_8_ = dVar8;
  auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar7;
  auVar10._8_4_ = SUB84(dVar12,0);
  auVar10._0_8_ = dVar11;
  auVar10._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar10;
  auVar13._8_4_ = SUB84(dVar15,0);
  auVar13._0_8_ = dVar14;
  auVar13._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar13;
  auVar16._8_4_ = (int)uVar17;
  auVar16._0_8_ = uVar18;
  auVar16._12_4_ = (int)((ulonglong)uVar17 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar16;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = uVar19;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar2;
  return __return_storage_ptr__;
}

// ExtractRootMotion @ 1474d1810

TTransform<double> * __thiscall
UAnimSequence::ExtractRootMotion
          (UAnimSequence *this,TTransform<double> *__return_storage_ptr__,float param_1,
          float param_2,bool param_3)

{
  double local_58;
  undefined1 local_50;
  float local_4c;
  undefined4 local_48;
  undefined1 local_44;
  bool local_40;
  void *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  undefined1 local_17;
  
  local_40 = param_3;
  local_58 = (double)param_1;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_17 = 0;
  local_50 = 1;
  local_48 = 0;
  local_44 = 0;
  local_4c = param_2;
  (**(code **)(this->_padding_ + 0x348))(local_58,__return_storage_ptr__,&local_58);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return __return_storage_ptr__;
}

// ExtractRootMotionFromRange @ 1474d18c0

TTransform<double> * __thiscall
UAnimSequence::ExtractRootMotionFromRange
          (UAnimSequence *this,TTransform<double> *__return_storage_ptr__,float param_1,
          float param_2)

{
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined1 local_40;
  void *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  undefined1 local_17;
  
  local_40 = 0;
  local_50 = 0;
  local_44 = 0;
  local_58 = 0;
  local_4c = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_17 = 0;
  (**(code **)(this->_padding_ + 0x358))
            (0,__return_storage_ptr__,(double)param_1,(double)param_2,&local_58);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return __return_storage_ptr__;
}

// ExtractRootMotionFromRange @ 1474d1970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TTransform<double> * __thiscall
UAnimSequence::ExtractRootMotionFromRange
          (UAnimSequence *this,TTransform<double> *__return_storage_ptr__,double param_1,
          double param_2,FAnimExtractContext *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  bool bVar15;
  undefined4 uVar16;
  int iVar17;
  TTransform<double> *pTVar18;
  undefined4 uVar19;
  uint uVar20;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar37;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  __m128d _Var45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  uint uVar49;
  uint uVar50;
  uint uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined1 auStack_3d8 [32];
  undefined8 local_3b8;
  longlong local_3b0;
  FName local_3a8;
  FString local_3a0;
  FAnimExtractContext local_388 [3];
  TTransform<double> local_2a8;
  TTransform<double> local_248;
  TTransform<double> local_1e8;
  TTransform<double> local_188;
  TTransform<double> local_128;
  ulonglong local_c8;
  UAnimSequence *pUVar21;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_3d8;
  lVar22 = this->_padding_;
  uVar40 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
  uVar52 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
  uVar53 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
  uVar54 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
  uVar41 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
  uVar55 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
  uVar57 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
  uVar56 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
  uVar61 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
  uVar58 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
  uVar59 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
  uVar60 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
  uVar62 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
  uVar63 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
  uVar64 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
  uVar65 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
  uVar49 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
  uVar50 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
  uVar20 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
  uVar51 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
  if (lVar22 == 0) {
    if (1 < (byte)LogAnimation._0_1_) {
      local_3a8 = (FName)this->_padding_;
      ::FName::ToString(&local_3a8,&local_3a0);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
      }
      uVar40 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
      uVar52 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
      uVar53 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
      uVar54 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
    }
    *(undefined4 *)(__return_storage_ptr__->Rotation).XY.m128d_f64 = uVar40;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).XY.m128d_f64 + 4) = uVar52;
    *(undefined4 *)((__return_storage_ptr__->Rotation).XY.m128d_f64 + 1) = uVar53;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).XY.m128d_f64 + 0xc) = uVar54;
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
  else {
    _Var45.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    if (0 < *(int *)(lVar22 + 0x70)) {
      if (*(int *)(lVar22 + 0x80) < 1) {
        local_3b8 = 0;
        local_3b0 = (longlong)*(int *)(lVar22 + 0x80);
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar2 = (code *)swi(3);
          pTVar18 = (TTransform<double> *)(*pcVar2)();
          return pTVar18;
        }
      }
      puVar1 = *(undefined4 **)(lVar22 + 0x78);
      uVar40 = *puVar1;
      uVar52 = puVar1[1];
      uVar53 = puVar1[2];
      uVar54 = puVar1[3];
      uVar41 = puVar1[4];
      uVar55 = puVar1[5];
      uVar57 = puVar1[6];
      uVar56 = puVar1[7];
      uVar61 = puVar1[8];
      uVar58 = puVar1[9];
      uVar59 = puVar1[10];
      uVar60 = puVar1[0xb];
      uVar62 = puVar1[0xc];
      uVar63 = puVar1[0xd];
      uVar64 = puVar1[0xe];
      uVar65 = puVar1[0xf];
      _Var45.m128d_f64 = *(double (*) [2])(puVar1 + 0x10);
      uVar49 = puVar1[0x14];
      uVar50 = puVar1[0x15];
      uVar20 = puVar1[0x16];
      uVar51 = puVar1[0x17];
    }
    FAnimExtractContext::FAnimExtractContext(local_388,param_3);
    local_388[0].CurrentTime = param_1;
    ExtractRootTrackTransform_Lockless(this,&local_2a8,local_388,(FBoneContainer *)0x0);
    pUVar21 = this;
    local_388[0].CurrentTime = param_2;
    pTVar18 = ExtractRootTrackTransform_Lockless(this,&local_248,local_388,(FBoneContainer *)0x0);
    uVar16 = SUB84(pTVar18,0);
    uVar19 = SUB84(pUVar21,0);
    if (this->bUseNormalizedRootMotionScale == false) {
      uVar16 = (**(code **)(this->_padding_ + 0x2d0))();
      uVar19 = SUB84(this,0);
      if ((char)uVar16 != '\0') {
        local_2a8.Scale3D.XY.m128d_f64[0] =
             local_2a8.Scale3D.XY.m128d_f64[0] + __real_3ff0000000000000;
        local_2a8.Scale3D.XY.m128d_f64[1] =
             local_2a8.Scale3D.XY.m128d_f64[1] + __real_3ff0000000000000;
        local_2a8.Scale3D.ZW.m128d_f64[0] =
             local_2a8.Scale3D.ZW.m128d_f64[0] + __real_3ff0000000000000;
        local_2a8.Scale3D.ZW.m128d_f64[1] = 0.0;
        local_248.Scale3D.ZW.m128d_f64[0] =
             local_248.Scale3D.ZW.m128d_f64[0] + __real_3ff0000000000000;
        local_248.Scale3D.XY.m128d_f64[0] =
             local_248.Scale3D.XY.m128d_f64[0] + __real_3ff0000000000000;
        local_248.Scale3D.XY.m128d_f64[1] =
             local_248.Scale3D.XY.m128d_f64[1] + __real_3ff0000000000000;
        local_248.Scale3D.ZW.m128d_f64[1] = 0.0;
      }
    }
    else {
      local_2a8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
      local_2a8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
      local_2a8.Scale3D.ZW.m128d_f64[0] = __real_3ff0000000000000;
      local_2a8.Scale3D.ZW.m128d_f64[1] = 0.0;
      local_248.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
      local_248.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
      local_248.Scale3D.ZW.m128d_f64[0] = __real_3ff0000000000000;
      local_248.Scale3D.ZW.m128d_f64[1] = 0.0;
    }
    auVar32._0_8_ =
         (double)CONCAT44(uVar50 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          uVar49 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar32._8_4_ = uVar20 & _UNK_15061cc88;
    auVar32._12_4_ = uVar51 & _UNK_15061cc8c;
    auVar43._8_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar32._8_8_);
    auVar43._0_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar32._0_8_);
    uVar20 = movmskpd(uVar19,auVar43);
    auVar33._0_8_ =
         (double)CONCAT44(_Var45.m128d_f64[0]._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          _Var45.m128d_f64[0]._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar33._8_4_ = _Var45.m128d_f64[1]._0_4_ & _UNK_15061cc88;
    auVar33._12_4_ = _Var45.m128d_f64[1]._4_4_ & _UNK_15061cc8c;
    auVar29._8_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar33._8_8_);
    auVar29._0_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar33._0_8_);
    iVar17 = movmskpd(uVar16,auVar29);
    if ((uVar20 & 0x3fffffff) == 0 && iVar17 == 0) {
      local_1e8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_1e8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_1e8.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_1e8.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_1e8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_1e8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      dVar8 = (double)CONCAT44(uVar55,uVar41) *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar9 = (double)CONCAT44(uVar56,uVar57) *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      uVar55 = SUB84(dVar9,0);
      uVar57 = (undefined4)((ulonglong)dVar9 >> 0x20);
      dVar5 = (double)CONCAT44(uVar52,uVar40) *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar6 = (double)CONCAT44(uVar54,uVar53) *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      uVar40 = SUB84(dVar6,0);
      uVar41 = (undefined4)((ulonglong)dVar6 >> 0x20);
      local_1e8.Rotation.XY.m128d_f64[1]._0_4_ = uVar40;
      local_1e8.Rotation.XY.m128d_f64[0] = dVar5;
      local_1e8.Rotation.XY.m128d_f64[1]._4_4_ = uVar41;
      lVar22 = -(ulonglong)
                ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & uVar50,
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff & uVar49) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      (undefined1  [16])_Var45.m128d_f64);
      lVar23 = -(ulonglong)
                ((double)CONCAT44(_Var45.m128d_f64[0]._4_4_ &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  _Var45.m128d_f64[0]._0_4_ &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
      lVar24 = -(ulonglong)
                ((double)CONCAT44(_Var45.m128d_f64[1]._4_4_ & _UNK_15061cc8c,
                                  _Var45.m128d_f64[1]._0_4_ & _UNK_15061cc88) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
      local_1e8.Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar23 & auVar29._0_4_;
      local_1e8.Scale3D.XY.m128d_f64[0]._4_4_ = ~(uint)((ulonglong)lVar23 >> 0x20) & auVar29._4_4_;
      local_1e8.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar24 & auVar29._8_4_;
      local_1e8.Scale3D.XY.m128d_f64[1]._4_4_ = ~(uint)((ulonglong)lVar24 >> 0x20) & auVar29._12_4_;
      auVar3._4_4_ = uVar50;
      auVar3._0_4_ = uVar49;
      auVar3._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar3._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar3);
      dVar10 = (double)CONCAT44(uVar58,uVar61) *
               (double)CONCAT44(local_1e8.Scale3D.XY.m128d_f64[0]._4_4_,
                                local_1e8.Scale3D.XY.m128d_f64[0]._0_4_);
      dVar11 = (double)CONCAT44(uVar60,uVar59) *
               (double)CONCAT44(local_1e8.Scale3D.XY.m128d_f64[1]._4_4_,
                                local_1e8.Scale3D.XY.m128d_f64[1]._0_4_);
      uVar61 = (undefined4)((ulonglong)dVar11 >> 0x20);
      auVar34._8_4_ = uVar40;
      auVar34._0_8_ = dVar5;
      auVar34._12_4_ = uVar41;
      local_1e8.Scale3D.ZW.m128d_f64[0] =
           (double)CONCAT44(~(uint)((ulonglong)lVar22 >> 0x20) & auVar29._4_4_,
                            ~(uint)lVar22 & auVar29._0_4_);
      dVar37 = auVar34._8_8_;
      auVar25._8_4_ = SUB84(dVar8,0);
      auVar25._0_8_ = dVar37;
      auVar25._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar46._8_4_ = SUB84(dVar11,0);
      auVar46._0_8_ = dVar10;
      auVar46._12_4_ = uVar61;
      dVar13 = (double)CONCAT44(uVar63,uVar62) * local_1e8.Scale3D.ZW.m128d_f64[0];
      dVar14 = (double)CONCAT44(uVar65,uVar64) * 0.0;
      auVar42._8_4_ = uVar40;
      auVar42._0_8_ = dVar5;
      auVar42._12_4_ = uVar41;
      auVar30._8_4_ = SUB84(dVar11,0);
      auVar30._0_8_ = dVar10;
      auVar30._12_4_ = uVar61;
      auVar44._8_4_ = uVar55;
      auVar44._0_8_ = dVar8;
      auVar44._12_4_ = uVar57;
      auVar12._8_4_ = SUB84(dVar14,0);
      auVar12._0_8_ = dVar13;
      auVar12._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      auVar29 = blendpd(auVar30,auVar12,2);
      auVar47._0_8_ = auVar46._8_8_ * dVar5 - dVar37 * dVar10;
      auVar47._8_8_ = dVar13 * dVar6 - auVar25._8_8_ * dVar11;
      auVar7._8_4_ = uVar55;
      auVar7._0_8_ = dVar8;
      auVar7._12_4_ = uVar57;
      auVar43 = blendpd(auVar42,auVar7,2);
      auVar31._0_8_ = auVar29._0_8_ * dVar8 - auVar43._0_8_ * dVar13;
      auVar31._8_8_ = auVar29._8_8_ * dVar9 - auVar43._8_8_ * dVar14;
      dVar14 = auVar47._8_8_ + auVar47._8_8_;
      dVar4 = auVar31._0_8_ + auVar31._0_8_;
      uVar40 = SUB84(dVar4,0);
      uVar41 = (undefined4)((ulonglong)dVar4 >> 0x20);
      auVar29 = blendpd(auVar47,auVar31,2);
      auVar48._0_8_ = auVar29._0_8_ + auVar29._0_8_;
      auVar48._8_8_ = auVar29._8_8_ + auVar29._8_8_;
      auVar38._8_4_ = uVar40;
      auVar38._0_8_ = dVar14;
      auVar38._12_4_ = uVar41;
      auVar26._8_4_ = uVar40;
      auVar26._0_8_ = dVar14;
      auVar26._12_4_ = uVar41;
      auVar35._8_4_ = uVar40;
      auVar35._0_8_ = dVar14;
      auVar35._12_4_ = uVar41;
      auVar29 = blendpd(auVar35,auVar48,2);
      auVar39._0_8_ = auVar38._8_8_ * dVar5 - dVar14 * dVar37;
      auVar39._8_8_ = auVar48._0_8_ * dVar6 - auVar26._8_8_ * dVar8;
      auVar27._8_4_ = SUB84(auVar48._8_8_,0);
      auVar27._0_8_ = auVar48._0_8_;
      auVar27._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
      auVar36._0_8_ = auVar29._0_8_ * dVar8 - auVar48._0_8_ * auVar43._0_8_;
      auVar36._8_8_ = auVar29._8_8_ * dVar9 - auVar27._8_8_ * auVar43._8_8_;
      auVar28._8_4_ = SUB84(auVar39._8_8_,0);
      auVar28._0_8_ = auVar39._0_8_;
      auVar28._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
      auVar29 = blendpd(auVar39,auVar36,2);
      local_1e8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar55;
      local_1e8.Rotation.ZW.m128d_f64[0] = dVar8;
      local_1e8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar57;
      local_1e8.Translation.XY.m128d_f64[1] = 0.0 - (dVar4 * dVar9 + dVar11 + auVar36._0_8_);
      local_1e8.Translation.XY.m128d_f64[0] =
           0.0 - (dVar14 * auVar44._8_8_ + dVar10 + auVar28._8_8_);
      local_1e8.Translation.ZW.m128d_f64[1] = 0.0;
      local_1e8.Translation.ZW.m128d_f64[0] =
           0.0 - (auVar48._0_8_ * auVar44._8_8_ + dVar13 + auVar29._0_8_);
      local_1e8.Scale3D.ZW.m128d_f64[1] = 0.0;
    }
    local_188.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_188.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_188.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_188.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_188.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_188.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_188.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_188.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_188.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_188.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_188.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_188.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_188,&local_1e8,&local_2a8);
    local_2a8.Rotation.XY.m128d_f64[0] = local_188.Rotation.XY.m128d_f64[0];
    local_2a8.Rotation.XY.m128d_f64[1] = local_188.Rotation.XY.m128d_f64[1];
    local_2a8.Translation.XY.m128d_f64[0] = local_188.Translation.XY.m128d_f64[0];
    local_2a8.Translation.XY.m128d_f64[1] = local_188.Translation.XY.m128d_f64[1];
    local_2a8.Scale3D.XY.m128d_f64[0] = local_188.Scale3D.XY.m128d_f64[0];
    local_2a8.Scale3D.XY.m128d_f64[1] = local_188.Scale3D.XY.m128d_f64[1];
    local_128.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_128.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_2a8.Rotation.ZW.m128d_f64[0] = local_188.Rotation.ZW.m128d_f64[0];
    local_2a8.Rotation.ZW.m128d_f64[1] = local_188.Rotation.ZW.m128d_f64[1];
    local_128.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_128.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_2a8.Translation.ZW.m128d_f64[0] = local_188.Translation.ZW.m128d_f64[0];
    local_2a8.Translation.ZW.m128d_f64[1] = local_188.Translation.ZW.m128d_f64[1];
    local_2a8.Scale3D.ZW.m128d_f64[0] = local_188.Scale3D.ZW.m128d_f64[0];
    local_2a8.Scale3D.ZW.m128d_f64[1] = local_188.Scale3D.ZW.m128d_f64[1];
    local_128.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_128.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_128.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_128.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_128.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_128.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_128.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_128.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_128,&local_1e8,&local_248);
    local_248.Rotation.XY.m128d_f64[0] = local_128.Rotation.XY.m128d_f64[0];
    local_248.Rotation.XY.m128d_f64[1] = local_128.Rotation.XY.m128d_f64[1];
    local_248.Rotation.ZW.m128d_f64[0] = local_128.Rotation.ZW.m128d_f64[0];
    local_248.Rotation.ZW.m128d_f64[1] = local_128.Rotation.ZW.m128d_f64[1];
    local_248.Translation.XY.m128d_f64[0] = local_128.Translation.XY.m128d_f64[0];
    local_248.Translation.XY.m128d_f64[1] = local_128.Translation.XY.m128d_f64[1];
    local_248.Translation.ZW.m128d_f64[0] = local_128.Translation.ZW.m128d_f64[0];
    local_248.Translation.ZW.m128d_f64[1] = local_128.Translation.ZW.m128d_f64[1];
    local_248.Scale3D.XY.m128d_f64[0] = local_128.Scale3D.XY.m128d_f64[0];
    local_248.Scale3D.XY.m128d_f64[1] = local_128.Scale3D.XY.m128d_f64[1];
    local_248.Scale3D.ZW.m128d_f64[0] = local_128.Scale3D.ZW.m128d_f64[0];
    local_248.Scale3D.ZW.m128d_f64[1] = local_128.Scale3D.ZW.m128d_f64[1];
    UE::Math::TTransform<double>::GetRelativeTransform(&local_248,__return_storage_ptr__,&local_2a8)
    ;
    if (local_388[0].BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388[0].BonesRequired.AllocatorInstance.Data);
    }
    if (local_388[0].PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388[0].PoseCurves.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// ExtractRootTrackTransform @ 1474d2240

TTransform<double> * __thiscall
UAnimSequence::ExtractRootTrackTransform
          (UAnimSequence *this,TTransform<double> *__return_storage_ptr__,
          FAnimExtractContext *param_1,FBoneContainer *param_2)

{
  ExtractRootTrackTransform_Lockless(this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// ExtractRootTrackTransform @ 1474d2260

TTransform<double> * __thiscall
UAnimSequence::ExtractRootTrackTransform
          (UAnimSequence *this,TTransform<double> *__return_storage_ptr__,float param_1,
          FBoneContainer *param_2)

{
  double local_58;
  undefined1 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined1 local_40;
  void *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  undefined1 local_17;
  
  local_40 = 0;
  local_50 = 0;
  local_44 = 0;
  local_58 = (double)param_1;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_17 = 0;
  local_4c = 0;
  (**(code **)(this->_padding_ + 0x368))(local_58,0,&local_58);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return __return_storage_ptr__;
}

// ExtractRootTrackTransform_Lockless @ 1474d2300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
UAnimSequence::ExtractRootTrackTransform_Lockless
          (UAnimSequence *this,TTransform<double> *__return_storage_ptr__,
          FAnimExtractContext *param_1,FBoneContainer *param_2)

{
  FReferenceSkeleton *pFVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  TTransform<double> *pTVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStack_b8 [32];
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if ((0 < (this->CompressedData).CompressedTrackToSkeletonMapTable.ArrayNum) &&
     (*(int *)(this->CompressedData).CompressedTrackToSkeletonMapTable.AllocatorInstance.Data == 0))
  {
    local_88.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_88.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_88.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_88.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_88.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_88.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_88.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_88.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_88.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_88.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_88.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_88.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_88.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_88.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_88.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_88.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_88.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_88.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    GetBoneTransform_Lockless(this,&local_88,(FSkeletonPoseBoneIndex)0x0,param_1,false);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_88.Rotation.XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_88.Rotation.XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_88.Rotation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_88.Rotation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_88.Translation.XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_88.Translation.XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_88.Translation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_88.Translation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_88.Scale3D.XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_88.Scale3D.XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_88.Scale3D.ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_88.Scale3D.ZW.m128d_f64[1];
    return __return_storage_ptr__;
  }
  if (param_2 == (FBoneContainer *)0x0) {
    lVar2 = this->_padding_;
    if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x70))) {
      if ((*(int *)(lVar2 + 0x80) < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TTransform<double> *)(*pcVar3)();
        return pTVar6;
      }
      pFVar7 = *(FScriptContainerElement **)(lVar2 + 0x78);
      goto LAB_1474d243d;
    }
  }
  else {
    pFVar1 = param_2->RefSkeleton;
    if (0 < (pFVar1->FinalRefBoneInfo).ArrayNum) {
      if (((pFVar1->FinalRefBonePose).ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TTransform<double> *)(*pcVar3)();
        return pTVar6;
      }
      pFVar7 = (pFVar1->FinalRefBonePose).AllocatorInstance.Data;
LAB_1474d243d:
      dVar4 = *(double *)(pFVar7 + 8);
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)pFVar7;
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar4;
      dVar4 = *(double *)(pFVar7 + 0x18);
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = *(double *)(pFVar7 + 0x10);
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar4;
      dVar4 = *(double *)(pFVar7 + 0x28);
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = *(double *)(pFVar7 + 0x20);
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
      dVar4 = *(double *)(pFVar7 + 0x38);
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = *(double *)(pFVar7 + 0x30);
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar4;
      dVar4 = *(double *)(pFVar7 + 0x48);
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = *(double *)(pFVar7 + 0x40);
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar4;
      dVar4 = *(double *)(pFVar7 + 0x58);
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = *(double *)(pFVar7 + 0x50);
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar4;
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

// GetAdditiveAnimType @ 1474d5d60

EAdditiveAnimationType __thiscall UAnimSequence::GetAdditiveAnimType(UAnimSequence *this)

{
  return (EAdditiveAnimationType)(this->AdditiveAnimType).Value;
}

// GetAdditiveBasePose @ 1474d5d70

void __thiscall
UAnimSequence::GetAdditiveBasePose
          (UAnimSequence *this,FAnimationPoseData *param_1,FAnimExtractContext *param_2)

{
  uchar uVar1;
  UAnimSequence *this_00;
  double dVar2;
  bool bVar3;
  FBaseCompactPose<TMemStackAllocator<0>_> *this_01;
  float fVar4;
  FAnimExtractContext local_78;
  
  uVar1 = (this->RefPoseType).Value;
  if (uVar1 != '\x01') {
    if (uVar1 == '\x02') {
      fVar4 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
      if (fVar4 <= 0.0) {
        dVar2 = 0.0;
      }
      else {
        fVar4 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
        dVar2 = param_2->CurrentTime / (double)fVar4;
        if (__real_3ff0000000000000 <= dVar2) {
          dVar2 = __real_3ff0000000000000;
        }
        if (dVar2 <= 0.0) {
          dVar2 = 0.0;
        }
      }
      fVar4 = (float)(**(code **)(((this->RefPoseSeq).field0_0x0.DebugPtr)->_padding_ + 0x2c0))();
      FAnimExtractContext::FAnimExtractContext(&local_78,param_2);
      this_00 = (this->RefPoseSeq).field0_0x0.DebugPtr;
      local_78.CurrentTime = (double)fVar4 * dVar2;
      bVar3 = (bool)(**(code **)(this->_padding_ + 0x3e0))(this);
      GetBonePose(this_00,param_1,&local_78,bVar3);
      if (local_78.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.BonesRequired.AllocatorInstance.Data);
      }
      if (local_78.PoseCurves.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_78.PoseCurves.AllocatorInstance.Data);
      return;
    }
    if (uVar1 == '\x03') {
      bVar3 = (bool)(**(code **)(this->_padding_ + 0x3e0))(this);
      GetSequencePose(param_1,param_2,(this->RefPoseSeq).field0_0x0.DebugPtr,this->RefFrameIndex,
                      bVar3);
      return;
    }
    if (uVar1 == '\x04') {
      bVar3 = (bool)(**(code **)(this->_padding_ + 0x3e0))(this);
      GetSequencePose(param_1,param_2,this,this->RefFrameIndex,bVar3);
      return;
    }
  }
  this_01 = (FBaseCompactPose<TMemStackAllocator<0>_> *)FAnimationPoseData::GetPose(param_1);
  FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose(this_01,this_01->BoneContainer);
  return;
}

// GetAnimationPose @ 1474d6420

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAnimSequence::GetAnimationPose
          (UAnimSequence *this,FAnimationPoseData *param_1,FAnimExtractContext *param_2)

{
  int *piVar1;
  uchar uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_GetAnimationPose> FVar11;
  FCompactPose *pFVar12;
  IAnimRootMotionProvider *pIVar13;
  FStackAttributeContainer *pFVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar15;
  FNameEntryId FVar16;
  FName FVar17;
  FNameEntryId FVar18;
  LARGE_INTEGER local_res8;
  FName local_res20;
  FStatMessage local_48;
  
  FVar18.Value = 0;
  FVar11 = StatPtr_STAT_GetAnimationPose;
  if (StatPtr_STAT_GetAnimationPose == (FThreadSafeStaticStat<FStat_STAT_GetAnimationPose>)0x0) {
    pFVar10 = ::FName::FName(&local_res20,"STAT_GetAnimationPose");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_GetAnimationPose>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GetAnimationPose,*pFVar10,
                        L"Anim Decompression","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar15 = FVar17.Number;
  if ((FVar16.Value == 0) && (uVar15 == 0)) {
LAB_1474d6589:
    bVar6 = false;
    FVar17.ComparisonIndex.Value = 0;
    FVar17.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar16.Value;
        local_res8.s.HighPart = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                   ,0x67c);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1474d6589;
    local_res8.s.LowPart = FVar16.Value;
    local_res8.s.HighPart = uVar15;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar6 = true;
    FVar18.Value = FVar16.Value;
  }
  pFVar12 = FAnimationPoseData::GetPose(param_1);
  cVar8 = (**(code **)(this->_padding_ + 0x2d0))(this);
  if (cVar8 != '\0') {
    lVar3 = *(longlong *)&pFVar12->field_0x10;
    bVar9 = ShouldUseRawDataForPoseExtraction_Lockless(this,param_2);
    if ((((bVar9) || (*(char *)(lVar3 + 0x100) != '\0')) || (*(char *)(lVar3 + 0x101) != '\0')) ||
       (*(char *)(lVar3 + 0x102) != '\0')) {
      uVar2 = (this->AdditiveAnimType).Value;
      if (uVar2 == '\x01') {
        GetBonePose_Additive(this,param_1,param_2);
      }
      else if (uVar2 == '\x02') {
        GetBonePose_AdditiveMeshRotationOnly(this,param_1,param_2);
      }
      goto LAB_1474d6617;
    }
  }
  GetBonePose(this,param_1,param_2,false);
LAB_1474d6617:
  cVar8 = (**(code **)(this->_padding_ + 0x340))(this);
  if ((cVar8 != '\0') &&
     (pIVar13 = UE::Anim::IAnimRootMotionProvider::Get(), pIVar13 != (IAnimRootMotionProvider *)0x0)
     ) {
    pcVar4 = *(code **)((longlong)*pIVar13 + 8);
    pFVar14 = FAnimationPoseData::GetAttributes(param_1);
    (*pcVar4)(pIVar13,&param_2->DeltaTimeRecord,this,param_2->bLooping,pFVar14);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar17 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar18.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// GetApproxBoneCompressedSize @ 1474d6780

int __thiscall UAnimSequence::GetApproxBoneCompressedSize(UAnimSequence *this)

{
  ICompressedAnimData *pIVar1;
  int iVar2;
  
  pIVar1 = (this->CompressedData).CompressedDataStructure.Ptr;
  if (pIVar1 != (ICompressedAnimData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001474d678f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)(pIVar1->_padding_ + 0x20))();
    return iVar2;
  }
  return 0;
}

// GetApproxBoneCompressedSize_Lockless @ 1474d67a0

int __thiscall UAnimSequence::GetApproxBoneCompressedSize_Lockless(UAnimSequence *this)

{
  ICompressedAnimData *pIVar1;
  int iVar2;
  
  pIVar1 = (this->CompressedData).CompressedDataStructure.Ptr;
  if (pIVar1 != (ICompressedAnimData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001474d67af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)(pIVar1->_padding_ + 0x20))();
    return iVar2;
  }
  return 0;
}

// GetApproxCompressedSize @ 1474d67c0

int __thiscall UAnimSequence::GetApproxCompressedSize(UAnimSequence *this)

{
  ICompressedAnimData *pIVar1;
  int iVar2;
  
  pIVar1 = (this->CompressedData).CompressedDataStructure.Ptr;
  if (pIVar1 != (ICompressedAnimData *)0x0) {
    iVar2 = (**(code **)(pIVar1->_padding_ + 0x20))();
    return (this->CompressedData).CompressedCurveByteStream.ArrayNum + iVar2;
  }
  return (this->CompressedData).CompressedCurveByteStream.ArrayNum;
}

// GetApproxCompressedSize_Lockless @ 1474d6800

int __thiscall UAnimSequence::GetApproxCompressedSize_Lockless(UAnimSequence *this)

{
  ICompressedAnimData *pIVar1;
  int iVar2;
  
  pIVar1 = (this->CompressedData).CompressedDataStructure.Ptr;
  if (pIVar1 != (ICompressedAnimData *)0x0) {
    iVar2 = (**(code **)(pIVar1->_padding_ + 0x20))();
    return (this->CompressedData).CompressedCurveByteStream.ArrayNum + iVar2;
  }
  return (this->CompressedData).CompressedCurveByteStream.ArrayNum;
}

// GetAssetRegistryTags @ 1474d6840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UAnimSequence::GetAssetRegistryTags
          (UAnimSequence *this,
          TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<UObject_const_*> *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  uchar *puVar6;
  bool bVar7;
  int iVar8;
  FAssetRegistryTagsContext *pFVar9;
  byte bVar10;
  ForElementType<UObject_const_*> *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStackY_1d8 [32];
  undefined1 auStack_188 [8];
  UAnimSequence *pUStack_180;
  int iStack_178;
  int iStack_174;
  ForElementType<UObject_const_*> FStack_170;
  longlong *plStack_168;
  int iStack_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_158;
  undefined4 uStack_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *plStack_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  FAssetRegistryTagsContext FStack_108;
  FString aFStack_100 [2];
  undefined4 uStack_d4;
  undefined1 auStack_c8 [32];
  uint *puStack_a8;
  uint uStack_a0;
  int iStack_94;
  void *pvStack_88;
  undefined4 uStack_80;
  FAssetBundleData *pFStack_68;
  bool bStack_53;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar3 = (ForElementType<UObject_const_*> *)(lVar13 + 0xcb8);
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  puVar6 = pFVar11->InlineData;
  for (; pFVar11 !=
         (ForElementType<UObject_const_*> *)(puVar6 + (longlong)*(int *)(lVar13 + 0xcd0) * 8);
      pFVar11 = (ForElementType<UObject_const_*> *)(pFVar11->InlineData + 8)) {
    if (*(UAnimSequence **)pFVar11->InlineData == this) {
      return;
    }
  }
  FStack_170 = (ForElementType<UObject_const_*>)this;
  FAssetRegistryTagsContextData::FAssetRegistryTagsContextData
            ((FAssetRegistryTagsContextData *)auStack_c8,(UObject *)this,Uncategorized);
  bStack_53 = *(longlong *)(lVar13 + 0xcb0) != 0;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  pUStack_180 = this;
  if (((pFVar11 <= (ForElementType<UObject_const_*> *)&pUStack_180) &&
      (&pUStack_180 < pFVar11->InlineData + (longlong)*(int *)(lVar13 + 0xcd4) * 8)) &&
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
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 == *(int *)(lVar13 + 0xcd4)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_>
                      (0x808,pFVar3,(int *)(lVar13 + 0xcd4));
  }
  *(int *)(lVar13 + 0xcd0) = iVar8 + 1;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  *(UAnimSequence **)(pFVar11->InlineData + (longlong)iVar8 * 8) = pUStack_180;
  pcVar5 = *(code **)(this->_padding_ + 0x1b8);
  pFVar9 = FAssetRegistryTagsContext::FAssetRegistryTagsContext
                     (&FStack_108,(FAssetRegistryTagsContextData *)auStack_c8);
  (*pcVar5)(this,pFVar9);
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 != 0) {
    uVar16 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar16 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar12 = *(longlong *)(lVar13 + 0xcc8);
    if (*(longlong *)(lVar13 + 0xcc8) == 0) {
      lVar12 = lVar13 + 0xcb8;
    }
    if (*(UAnimSequence **)(lVar12 + -8 + (longlong)*(int *)(lVar13 + 0xcd0) * 8) == this)
    goto LAB_1420f919b;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("!GAssetRegistryTagsObjectsBeingForwarded.IsEmpty() && GAssetRegistryTagsObjectsBeingForwarded.Last() == this"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                     ,0x966,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1420f919b:
  TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Pop
            ((TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xcb8
             ),No);
  uVar16 = (auStack_c8._8_4_ - iStack_94) + param_1->ArrayNum;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar16,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar16 = uStack_a0;
  iStack_160 = 0;
  iStack_148 = 0;
  uStack_15c = 1;
  uStack_14c = 0;
  if (uStack_a0 != 0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar18 = *puVar17;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_160;
      iStack_148 = iStack_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      uStack_14c = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_160)
      goto LAB_1420f9291;
      uVar18 = puVar17[lVar13 + 1];
    }
    uStack_15c = -uVar18 & uVar18;
    uVar15 = (ulonglong)uStack_15c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_178 = (int)lVar13;
    uStack_14c = iStack_178 + -1 + iStack_148;
    if ((int)uStack_a0 < (int)uStack_14c) {
      uStack_14c = uStack_a0;
    }
  }
LAB_1420f9291:
  iStack_140 = auStack_c8._8_4_ - iStack_94;
  plStack_168 = (longlong *)auStack_c8;
  pTStack_158 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10);
  uStack_150 = 0xffffffff;
  TStack_130.CurrentBitIndex = uStack_14c;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  uVar18 = uStack_a0 & 0xffffffe0;
  TStack_130._padding_ = CONCAT44(uStack_15c,iStack_160);
  uStack_144 = uStack_d4;
  iVar8 = (int)uStack_a0 >> 5;
  TStack_130._28_4_ = uStack_d4;
  TStack_130.BaseBitIndex = iStack_148;
  uStack_110 = CONCAT44(uStack_13c,iStack_140);
  bVar10 = (byte)uStack_a0;
  plStack_138 = plStack_168;
  TStack_130.Array = pTStack_158;
  if (((int)uStack_a0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar16 != uStack_a0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar16 = -1 << (bVar10 & 0x1f) & puVar17[iVar8];
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar8;
      uVar18 = uVar18 + 0x20;
      iVar8 = iVar8 + 1;
      uVar16 = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_1420f9392;
      uVar16 = puVar17[lVar13 + 1];
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_174 = (int)lVar13;
    uVar16 = iStack_174 + -1 + uVar18;
    if ((int)uStack_a0 < (int)uVar16) {
      uVar16 = uStack_a0;
    }
  }
LAB_1420f9392:
  while( true ) {
    plVar4 = plStack_138;
    if ((int)plStack_138[1] - *(int *)((longlong)plStack_138 + 0x34) != (int)uStack_110) {
      auStack_188[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_188);
    }
    if (((TStack_130.CurrentBitIndex == uVar16) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10))) &&
       (plVar4 == (longlong *)auStack_c8)) break;
    pFVar14 = (param_1->AllocatorInstance).Data;
    lVar13 = (longlong)TStack_130.CurrentBitIndex * 0x30 + *plVar4;
    pFVar2 = (FScriptContainerElement *)(lVar13 + 8);
    if (((pFVar14 <= pFVar2) && (pFVar2 < pFVar14 + (longlong)*piVar1 * 0x20)) &&
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
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar8 + 1;
    pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x20;
    *(undefined8 *)pFVar14 = *(undefined8 *)pFVar2;
    *(undefined8 *)(pFVar14 + 8) = 0;
    *(undefined8 *)(pFVar14 + 8) = *(undefined8 *)(lVar13 + 0x10);
    *(undefined8 *)(lVar13 + 0x10) = 0;
    *(undefined4 *)(pFVar14 + 0x10) = *(undefined4 *)(lVar13 + 0x18);
    *(undefined4 *)(pFVar14 + 0x14) = *(undefined4 *)(lVar13 + 0x1c);
    *(undefined8 *)(lVar13 + 0x18) = 0;
    *(undefined4 *)(pFVar14 + 0x18) = *(undefined4 *)(lVar13 + 0x20);
    *(undefined4 *)(pFVar14 + 0x1c) = *(undefined4 *)(lVar13 + 0x24);
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  uVar15 = (ulonglong)_tls_index;
  plVar4 = *(longlong **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0);
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)FStack_170,aFStack_100,(UObject *)0x0);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("*TLegacyGetAssetRegistryTags_OutBundles == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x970,L"Object %s has more than one FAssetBundleData!");
      if (aFStack_100[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(aFStack_100[0].Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    **(undefined8 **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0) =
         pFStack_68;
  }
  uStack_80 = 0;
  if (pvStack_88 != (void *)0x0) {
    FMemory::Free(pvStack_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_c8);
  return;
}

// GetAssetRegistryTags @ 1474d6850

void __thiscall
UAnimSequence::GetAssetRegistryTags(UAnimSequence *this,FAssetRegistryTagsContext param_1)

{
  ICompressedAnimData *pIVar1;
  FName *pFVar2;
  FAssetRegistryTagsContext FVar3;
  FName local_res8;
  FString local_38;
  FAssetRegistryTag local_28;
  
  pIVar1 = (this->CompressedData).CompressedDataStructure.Ptr;
  if (pIVar1 != (ICompressedAnimData *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x20))();
  }
  ::FString::PrintfImpl(&local_38,L"%.02f");
  pFVar2 = ::FName::FName(&local_res8,L"Compressed Size (KB)");
  local_28.Name = *pFVar2;
  local_28.Value.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
  local_28.Value.Data.ArrayNum = local_38.Data.ArrayNum;
  local_28.Value.Data.ArrayMax = local_38.Data.ArrayMax;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Type = TT_Numerical;
  local_28.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_28);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_38,L"%.2f");
  pFVar2 = ::FName::FName(&local_res8,L"Target Frame Rate");
  local_28.Name = *pFVar2;
  local_28.Value.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
  local_28.Value.Data.ArrayNum = local_38.Data.ArrayNum;
  local_28.Value.Data.ArrayMax = local_38.Data.ArrayMax;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Type = TT_Numerical;
  local_28.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_28);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  FVar3.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext
                         ((FAssetRegistryTagsContext *)&local_res8,param_1.Data);
  UObject::GetAssetRegistryTags((UObject *)this,FVar3);
  return;
}

// GetBonePose @ 1474d6b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAnimSequence::GetBonePose
          (UAnimSequence *this,FAnimationPoseData *param_1,FAnimExtractContext *param_2,bool param_3
          )

{
  FScriptContainerElement *pFVar1;
  undefined4 *puVar2;
  EAnimInterpolationType EVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  FBoneContainer *pFVar7;
  USkeleton *pUVar8;
  FSkelMeshRefPoseOverride *pFVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
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
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  char cVar38;
  bool bVar39;
  uint uVar40;
  uint uVar41;
  FName *pFVar42;
  FThreadSafeStaticStat<FStat_STAT_AnimSeq_GetBonePose> FVar43;
  FBaseCompactPose<TMemStackAllocator<0>_> *this_00;
  USkeleton *pUVar44;
  FSkeletonRemappingRegistry *this_01;
  FSkeletonRemapping *this_02;
  FScriptContainerElement *pFVar45;
  UObject *pUVar46;
  TTransform<double> *pTVar47;
  TOptional<EAnimInterpolationType> *pTVar48;
  UPackage *pUVar49;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar50;
  FBlendedCurve *pFVar51;
  int iVar52;
  longlong lVar53;
  ulonglong uVar54;
  uint uVar55;
  FAnimExtractContext *pFVar56;
  longlong lVar57;
  FName FVar58;
  float fVar59;
  double dVar60;
  undefined1 in_XMM2 [16];
  undefined1 auVar61 [16];
  double dVar62;
  undefined1 auStackY_338 [32];
  bool local_2d8;
  longlong local_2d0;
  FColor_u_0 local_2b8;
  uint local_2b4;
  FAnimExtractContext *local_2b0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_2a8;
  UAnimSequence *local_2a0;
  FName local_298;
  undefined8 local_290;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_288;
  longlong local_280;
  FName local_278;
  undefined8 local_270;
  FName local_268;
  FName local_258;
  FAnimationPoseData *local_250;
  FName local_248 [2];
  FAnimExtractContext local_238;
  FAnimSequenceDecompressionContext local_1e8;
  TTransform<double> local_178;
  FRootMotionReset local_118;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_338;
  FVar43 = StatPtr_STAT_AnimSeq_GetBonePose;
  local_2b0 = param_2;
  local_2a0 = this;
  local_250 = param_1;
  if (StatPtr_STAT_AnimSeq_GetBonePose == (FThreadSafeStaticStat<FStat_STAT_AnimSeq_GetBonePose>)0x0
     ) {
    pFVar42 = ::FName::FName(local_248,"STAT_AnimSeq_GetBonePose");
    FVar43 = (FThreadSafeStaticStat<FStat_STAT_AnimSeq_GetBonePose>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimSeq_GetBonePose,*pFVar42,
                        L"AnimSeq GetBonePose","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true
                        ,ST_int64,true,false,MCR_Invalid);
  }
  FVar58 = *(FName *)FVar43;
  bVar35 = false;
  bVar36 = false;
  local_268.ComparisonIndex.Value = 0;
  local_268.Number = 0;
  bVar37 = false;
  bVar39 = false;
  if ((FVar58.ComparisonIndex.Value.Value == 0) && (FVar58.Number == 0)) {
LAB_1474d6ca5:
    bVar36 = bVar39;
    bVar35 = bVar37;
    bVar37 = false;
    local_278 = local_268;
    FVar58 = local_268;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2b8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2b8._s_0,(char *)*(FName *)((longlong)FVar43 + 0x10));
      bVar35 = false;
      bVar36 = true;
      bVar37 = false;
      bVar39 = true;
      if (-1 < CpuChannel->Enabled) {
        local_298.ComparisonIndex.Value = FVar58.ComparisonIndex.Value.Value;
        local_298.Number = FVar58.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_298,(wchar_t *)*(FName *)((longlong)FVar43 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                   ,0x6c5);
        bVar35 = true;
        bVar36 = true;
        bVar37 = true;
        bVar39 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1474d6ca5;
    local_278 = FVar58;
    FThreadStats::AddMessage(FVar58,CycleScopeStart);
    bVar37 = true;
  }
  if (__CsvProfilerStat1734 == false) {
    FCsvProfilerTrace::OutputInlineStat("AnimSeq_GetBonePose",_GCsvCategory_Animation.Index);
    __CsvProfilerStat1734 = true;
  }
  local_2b4 = _GCsvCategory_Animation.Index;
  FCsvProfiler::BeginStat
            ("AnimSeq_GetBonePose",_GCsvCategory_Animation.Index,"CSV_AnimSeq_GetBonePose");
  this_00 = (FBaseCompactPose<TMemStackAllocator<0>_> *)FAnimationPoseData::GetPose(param_1);
  pFVar7 = this_00->BoneContainer;
  if (((param_3) && (cVar38 = (**(code **)(this->_padding_ + 0x3e0))(this), cVar38 == '\0')) &&
     (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bForceUseRawData || CanEvaluateRawAnimationData()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                          ,0x6cb,L""), bVar39)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pUVar8 = (USkeleton *)this->_padding_;
  if ((pUVar8 == (USkeleton *)0x0) ||
     ((cVar38 = (**(code **)(this->_padding_ + 0x3e0))(this), cVar38 != '\0' && (param_3)))) {
    local_2d8 = true;
    if (pUVar8 == (USkeleton *)0x0) goto LAB_1474d6db9;
  }
  else {
    bVar39 = ShouldUseRawDataForPoseExtraction_Lockless(this,local_2b0);
    if (((bVar39) || (pFVar7->bDisableRetargeting != false)) ||
       ((pFVar7->bUseRAWData != false || (local_2d8 = false, pFVar7->bUseSourceData != false)))) {
      local_2d8 = true;
    }
    else {
LAB_1474d6db9:
      cVar38 = (**(code **)(this->_padding_ + 0x2d0))(this);
      if (cVar38 != '\0') {
        bVar39 = true;
        goto LAB_1474d6d99;
      }
    }
  }
  bVar39 = false;
LAB_1474d6d99:
  if (pUVar8 == (USkeleton *)0x0) {
    if (bVar39) {
      FCompactPose::ResetToAdditiveIdentity((FCompactPose *)this_00);
    }
    else {
      FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose(this_00,this_00->BoneContainer);
    }
  }
  else {
    if (bVar39) {
      FCompactPose::ResetToAdditiveIdentity((FCompactPose *)this_00);
    }
    else if (pFVar7->bDisableRetargeting == false) {
      FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose(this_00,this_00->BoneContainer);
    }
    else {
      local_288 = GetRetargetTransforms(this);
      pUVar44 = (USkeleton *)FWeakObjectPtr::Get(&(pFVar7->AssetSkeleton).WeakPtr);
      local_290 = 0;
      local_2a8 = USkeleton::GetRefLocalPoses(pUVar44,(FName)0x0);
      this_01 = UE::Anim::FSkeletonRemappingRegistry::Get();
      pUVar44 = (USkeleton *)FWeakObjectPtr::Get(&(pFVar7->AssetSkeleton).WeakPtr);
      this_02 = UE::Anim::FSkeletonRemappingRegistry::GetRemapping(this_01,pUVar8,pUVar44);
      uVar55 = 0;
      uVar6 = (uint)this_00->_padding_;
      if (uVar6 != 0) {
        lVar57 = 0;
        local_2d0 = 0;
        local_280 = 0;
        do {
          lVar53 = local_280;
          if (((int)uVar55 < 0) || ((pFVar7->CompactPoseToSkeletonIndex).ArrayNum <= (int)uVar55)) {
            bVar39 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<8192494858347217501>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BoneContainer.h"
                                ,0x25d,"CompactPoseToSkeletonIndex.IsValidIndex(BoneIndex.GetInt())"
                               );
            if (bVar39) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar40 = 0xffffffff;
          }
          else {
            uVar40 = 0;
            if ((int)uVar55 < (pFVar7->CompactPoseToSkeletonIndex).ArrayNum) {
              uVar40 = ~uVar55 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar39)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar40 = *(uint *)((pFVar7->CompactPoseToSkeletonIndex).AllocatorInstance.Data + lVar53)
            ;
          }
          bVar39 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_02);
          uVar41 = uVar40;
          if ((bVar39) &&
             (bVar39 = FWeakObjectPtr::IsValid(&(this_02->TargetSkeleton).WeakPtr), bVar39)) {
            uVar41 = FSkeletonRemapping::GetSourceSkeletonBoneIndex(this_02,uVar40);
          }
          if (((int)uVar41 < 0) || (local_288->ArrayNum <= (int)uVar41)) {
            pUVar46 = FWeakObjectPtr::Get(&(pFVar7->AssetSkeletalMesh).WeakPtr);
            pTVar50 = local_2a8;
            if (pUVar46 != (UObject *)0x0) {
              uVar41 = 0;
              if ((int)uVar40 < local_2a8->ArrayNum) {
                uVar41 = ~uVar40 >> 0x1f;
              }
              if ((uVar41 == 0) &&
                 (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar39)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pFVar45 = (pTVar50->AllocatorInstance).Data;
              goto LAB_1474d6fca;
            }
            pFVar9 = (pFVar7->RefPoseOverride).Object;
            if (pFVar9 == (FSkelMeshRefPoseOverride *)0x0) {
              pTVar50 = &pFVar7->RefSkeleton->FinalRefBonePose;
            }
            else {
              pTVar50 = &pFVar9->RefBonePoses;
            }
            uVar40 = 0;
            if ((int)uVar55 < (pFVar7->BoneIndicesArray).ArrayNum) {
              uVar40 = ~uVar55 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar39)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar5 = *(ushort *)((pFVar7->BoneIndicesArray).AllocatorInstance.Data + local_2d0);
            uVar54 = (ulonglong)uVar5;
            if (pTVar50->ArrayNum <= (int)(uint)uVar5) {
              bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar39) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              uVar54 = (ulonglong)(uint)uVar5;
            }
            pFVar1 = (pTVar50->AllocatorInstance).Data;
            lVar53 = uVar54 * 0x60;
            pFVar45 = pFVar1 + lVar53;
            uVar11 = *(undefined4 *)pFVar45;
            uVar12 = *(undefined4 *)(pFVar45 + 4);
            uVar13 = *(undefined4 *)(pFVar45 + 8);
            uVar14 = *(undefined4 *)(pFVar45 + 0xc);
            pFVar45 = pFVar1 + lVar53 + 0x10;
            uVar15 = *(undefined4 *)pFVar45;
            uVar16 = *(undefined4 *)(pFVar45 + 4);
            uVar17 = *(undefined4 *)(pFVar45 + 8);
            uVar18 = *(undefined4 *)(pFVar45 + 0xc);
            pFVar45 = pFVar1 + lVar53 + 0x20;
            uVar19 = *(undefined4 *)pFVar45;
            uVar20 = *(undefined4 *)(pFVar45 + 4);
            uVar21 = *(undefined4 *)(pFVar45 + 8);
            uVar22 = *(undefined4 *)(pFVar45 + 0xc);
            pFVar45 = pFVar1 + lVar53 + 0x30;
            uVar23 = *(undefined4 *)pFVar45;
            uVar24 = *(undefined4 *)(pFVar45 + 4);
            uVar25 = *(undefined4 *)(pFVar45 + 8);
            uVar26 = *(undefined4 *)(pFVar45 + 0xc);
            pFVar45 = pFVar1 + lVar53 + 0x40;
            uVar27 = *(undefined4 *)pFVar45;
            uVar28 = *(undefined4 *)(pFVar45 + 4);
            uVar29 = *(undefined4 *)(pFVar45 + 8);
            uVar30 = *(undefined4 *)(pFVar45 + 0xc);
            pFVar1 = pFVar1 + lVar53 + 0x50;
            uVar31 = *(undefined4 *)pFVar1;
            uVar32 = *(undefined4 *)(pFVar1 + 4);
            uVar33 = *(undefined4 *)(pFVar1 + 8);
            uVar34 = *(undefined4 *)(pFVar1 + 0xc);
            uVar40 = 0;
            if ((int)uVar55 < (int)this_00->_padding_) {
              uVar40 = ~uVar55 >> 0x1f;
            }
          }
          else {
            if (((int)uVar41 < 0) &&
               (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar39)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar45 = (local_288->AllocatorInstance).Data;
            uVar40 = uVar41;
LAB_1474d6fca:
            lVar53 = (longlong)(int)uVar40 * 0x60;
            pFVar1 = pFVar45 + lVar53;
            uVar11 = *(undefined4 *)pFVar1;
            uVar12 = *(undefined4 *)(pFVar1 + 4);
            uVar13 = *(undefined4 *)(pFVar1 + 8);
            uVar14 = *(undefined4 *)(pFVar1 + 0xc);
            pFVar1 = pFVar45 + lVar53 + 0x10;
            uVar15 = *(undefined4 *)pFVar1;
            uVar16 = *(undefined4 *)(pFVar1 + 4);
            uVar17 = *(undefined4 *)(pFVar1 + 8);
            uVar18 = *(undefined4 *)(pFVar1 + 0xc);
            pFVar1 = pFVar45 + lVar53 + 0x20;
            uVar19 = *(undefined4 *)pFVar1;
            uVar20 = *(undefined4 *)(pFVar1 + 4);
            uVar21 = *(undefined4 *)(pFVar1 + 8);
            uVar22 = *(undefined4 *)(pFVar1 + 0xc);
            pFVar1 = pFVar45 + lVar53 + 0x30;
            uVar23 = *(undefined4 *)pFVar1;
            uVar24 = *(undefined4 *)(pFVar1 + 4);
            uVar25 = *(undefined4 *)(pFVar1 + 8);
            uVar26 = *(undefined4 *)(pFVar1 + 0xc);
            pFVar1 = pFVar45 + lVar53 + 0x40;
            uVar27 = *(undefined4 *)pFVar1;
            uVar28 = *(undefined4 *)(pFVar1 + 4);
            uVar29 = *(undefined4 *)(pFVar1 + 8);
            uVar30 = *(undefined4 *)(pFVar1 + 0xc);
            pFVar45 = pFVar45 + lVar53 + 0x50;
            uVar31 = *(undefined4 *)pFVar45;
            uVar32 = *(undefined4 *)(pFVar45 + 4);
            uVar33 = *(undefined4 *)(pFVar45 + 8);
            uVar34 = *(undefined4 *)(pFVar45 + 0xc);
            uVar40 = 0;
            if ((int)uVar55 < (int)this_00->_padding_) {
              uVar40 = ~uVar55 >> 0x1f;
            }
          }
          if ((uVar40 == 0) &&
             (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar39)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar53 = this_00->_padding_;
          uVar55 = uVar55 + 1;
          local_2d0 = local_2d0 + 2;
          local_280 = local_280 + 4;
          puVar2 = (undefined4 *)(lVar57 + lVar53);
          *puVar2 = uVar11;
          puVar2[1] = uVar12;
          puVar2[2] = uVar13;
          puVar2[3] = uVar14;
          puVar2 = (undefined4 *)(lVar57 + 0x10 + lVar53);
          *puVar2 = uVar15;
          puVar2[1] = uVar16;
          puVar2[2] = uVar17;
          puVar2[3] = uVar18;
          puVar2 = (undefined4 *)(lVar57 + 0x20 + lVar53);
          *puVar2 = uVar19;
          puVar2[1] = uVar20;
          puVar2[2] = uVar21;
          puVar2[3] = uVar22;
          puVar2 = (undefined4 *)(lVar57 + 0x30 + lVar53);
          *puVar2 = uVar23;
          puVar2[1] = uVar24;
          puVar2[2] = uVar25;
          puVar2[3] = uVar26;
          puVar2 = (undefined4 *)(lVar57 + 0x40 + lVar53);
          *puVar2 = uVar27;
          puVar2[1] = uVar28;
          puVar2[2] = uVar29;
          puVar2[3] = uVar30;
          puVar2 = (undefined4 *)(lVar57 + 0x50 + lVar53);
          *puVar2 = uVar31;
          puVar2[1] = uVar32;
          puVar2[2] = uVar33;
          puVar2[3] = uVar34;
          lVar57 = lVar57 + 0x60;
          this = local_2a0;
          FVar58 = local_278;
        } while (uVar55 != uVar6);
      }
    }
    iVar52 = (this->CompressedData).CompressedTrackToSkeletonMapTable.ArrayNum;
    cVar38 = (**(code **)(this->_padding_ + 0x2d0))(this);
    pFVar56 = local_2b0;
    if ((cVar38 == '\0') || (local_2d8 != false)) {
      bVar39 = false;
    }
    else {
      bVar39 = true;
    }
    FAnimExtractContext::FAnimExtractContext(&local_238,local_2b0);
    local_238.CurrentTime = 0.0;
    pTVar47 = ExtractRootTrackTransform_Lockless(this,&local_178,&local_238,pFVar7);
    local_118.AnimFirstFrame.Rotation.XY.m128d_f64[0] = (pTVar47->Rotation).XY.m128d_f64[0];
    local_118.AnimFirstFrame.Rotation.XY.m128d_f64[1] = (pTVar47->Rotation).XY.m128d_f64[1];
    local_118.AnimFirstFrame.Rotation.ZW.m128d_f64[0] = (pTVar47->Rotation).ZW.m128d_f64[0];
    local_118.AnimFirstFrame.Rotation.ZW.m128d_f64[1] = (pTVar47->Rotation).ZW.m128d_f64[1];
    local_118.AnimFirstFrame.Translation.XY.m128d_f64[0] = (pTVar47->Translation).XY.m128d_f64[0];
    local_118.AnimFirstFrame.Translation.XY.m128d_f64[1] = (pTVar47->Translation).XY.m128d_f64[1];
    local_118.AnimFirstFrame.Translation.ZW.m128d_f64[0] = (pTVar47->Translation).ZW.m128d_f64[0];
    local_118.AnimFirstFrame.Translation.ZW.m128d_f64[1] = (pTVar47->Translation).ZW.m128d_f64[1];
    local_118.AnimFirstFrame.Scale3D.XY.m128d_f64[0]._0_4_ =
         *(undefined4 *)(pTVar47->Scale3D).XY.m128d_f64;
    local_118.AnimFirstFrame.Scale3D.XY.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)(pTVar47->Scale3D).XY.m128d_f64 + 4);
    local_118.AnimFirstFrame.Scale3D.XY.m128d_f64[1]._0_4_ =
         *(undefined4 *)((pTVar47->Scale3D).XY.m128d_f64 + 1);
    local_118.AnimFirstFrame.Scale3D.XY.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)(pTVar47->Scale3D).XY.m128d_f64 + 0xc);
    local_118.AnimFirstFrame.Scale3D.ZW.m128d_f64[0]._0_4_ =
         *(undefined4 *)(pTVar47->Scale3D).ZW.m128d_f64;
    local_118.AnimFirstFrame.Scale3D.ZW.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)(pTVar47->Scale3D).ZW.m128d_f64 + 4);
    local_118.AnimFirstFrame.Scale3D.ZW.m128d_f64[1]._0_4_ =
         *(undefined4 *)((pTVar47->Scale3D).ZW.m128d_f64 + 1);
    local_118.AnimFirstFrame.Scale3D.ZW.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)(pTVar47->Scale3D).ZW.m128d_f64 + 0xc);
    local_118.RootMotionRootLock = (Type)(this->RootMotionRootLock).Value;
    local_118.bEnableRootMotion = this->bEnableRootMotion;
    local_118.bForceRootLock = this->bForceRootLock;
    local_118.bIsValidAdditive = bVar39;
    if (iVar52 != 0) {
      pTVar48 = &pFVar56->InterpolationOverride;
      if ((pFVar56->InterpolationOverride).bIsSet == false) {
        pTVar48 = (TOptional<EAnimInterpolationType> *)&this->Interpolation;
      }
      EVar3 = pTVar48->TypedValue;
      bVar4 = (this->AdditiveAnimType).Value;
      bVar39 = (bool)(**(code **)(this->_padding_ + 0x2d0))(this);
      pUVar8 = (USkeleton *)this->_padding_;
      local_270 = 0;
      local_2a0 = (UAnimSequence *)USkeleton::GetRefLocalPoses(pUVar8,(FName)0x0);
      local_258 = this->RetargetSource;
      local_2a8 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                  (this->CompressedData).CompressedDataStructure.Ptr;
      if ((local_258 == (FName)0x0) && (0 < (this->RetargetSourceAssetReferencePose).ArrayNum)) {
        pUVar49 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
        local_258 = (FName)pUVar49->_padding_;
      }
      fVar59 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
      dVar62 = ((double)(this->PlatformTargetFrameRate).Default.Numerator * (double)fVar59) /
               (double)(this->PlatformTargetFrameRate).Default.Denominator;
      auVar61._8_8_ = 0;
      auVar61._0_8_ = dVar62;
      auVar61 = roundpd(in_XMM2,auVar61,1);
      dVar60 = auVar61._0_8_;
      dVar62 = dVar62 - dVar60;
      if (__real_41dfffffffc00000 <= dVar60) {
        dVar60 = __real_41dfffffffc00000;
      }
      if (dVar60 <= __real_c1e0000000000000) {
        dVar60 = __real_c1e0000000000000;
      }
      iVar52 = (int)dVar62;
      fVar59 = (float)dVar62 - (float)iVar52;
      if ((0.0 < fVar59) && (::FFrameTime::MaxSubframe <= fVar59)) {
        fVar59 = ::FFrameTime::MaxSubframe;
      }
      if (::FFrameTime::MaxSubframe <= fVar59) {
        fVar59 = ::FFrameTime::MaxSubframe;
      }
      if (fVar59 <= 0.0) {
        fVar59 = 0.0;
      }
      iVar52 = (int)dVar60 + iVar52;
      if (__real_3f000000 <= fVar59) {
        iVar52 = iVar52 + 1;
      }
      FAnimSequenceDecompressionContext::FAnimSequenceDecompressionContext
                (&local_1e8,&(this->PlatformTargetFrameRate).Default,iVar52,EVar3,&local_258,
                 (ICompressedAnimData *)local_2a8,
                 (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)local_2a0,
                 &(this->CompressedData).CompressedTrackToSkeletonMapTable,pUVar8,bVar39,(uint)bVar4
                );
      pTVar50 = GetRetargetTransforms(this);
      pFVar56 = local_2b0;
      UE::Anim::Decompression::DecompressPose
                ((FCompactPose *)this_00,&this->CompressedData,local_2b0,&local_1e8,pTVar50,
                 &local_118);
    }
    pFVar51 = FAnimationPoseData::GetCurve(local_250);
    EvaluateCurveData_Lockless(this,pFVar51,pFVar56,local_2d8);
    EvaluateAttributes(this,local_250,pFVar56,false);
    if (local_238.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.BonesRequired.AllocatorInstance.Data);
    }
    if (local_238.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.PoseCurves.AllocatorInstance.Data);
    }
  }
  FCsvProfiler::EndStat("AnimSeq_GetBonePose",local_2b4);
  if (bVar36) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar35) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar37) {
    FThreadStats::AddMessage(FVar58,CycleScopeEnd);
  }
  return;
}

// GetBonePose_Additive @ 1474d7590

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UAnimSequence::GetBonePose_Additive
          (UAnimSequence *this,FAnimationPoseData *param_1,FAnimExtractContext *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  FName FVar4;
  FName FVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  FCompactPose *this_00;
  FBlendedCurve *pFVar10;
  FStackAttributeContainer *pFVar11;
  undefined8 *puVar12;
  longlong lVar13;
  FName *pFVar14;
  ECurveElementFlags *pEVar15;
  longlong lVar16;
  FCurveElement *pFVar17;
  int iVar18;
  FName *pFVar19;
  uint uVar20;
  uint uVar21;
  FCurveElement *pFVar22;
  FIdentityFunctor local_res8;
  FBlendedCurve local_d8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_b8;
  undefined8 local_b0;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_a8;
  undefined8 local_a0;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  FBaseCompactPose<TMemStackAllocator<0>_> local_78;
  FAnimationPoseData local_60;
  
  this_00 = FAnimationPoseData::GetPose(param_1);
  pFVar10 = FAnimationPoseData::GetCurve(param_1);
  pFVar11 = FAnimationPoseData::GetAttributes(param_1);
  cVar7 = (**(code **)(this->_padding_ + 0x2d0))(this);
  if (cVar7 == '\0') {
    FCompactPose::ResetToAdditiveIdentity(this_00);
    return;
  }
  GetBonePose(this,param_1,param_2,false);
  local_78._padding_ = 0;
  local_78._padding_ = 0;
  local_78.BoneContainer = (FBoneContainer *)0x0;
  local_d8._0_8_ = (FCurveElement *)0x0;
  local_d8._8_8_ = 0;
  local_d8._16_1_ = '\0';
  local_d8._24_8_ = 0;
  local_b8 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_b0 = 0;
  local_a8 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_a0 = 0;
  local_98 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)0x0;
  local_90 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer
            (&local_78,*(FBoneContainer **)&this_00->field_0x10);
  if (pFVar10 == &local_d8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4808592878626406918>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimCurveTypes.h"
                       ,0x206,"&InCurveToInitFrom != this");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    if ((longlong)local_d8._8_8_ < 0) {
      UE::Core::Private::
      ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,0,(ForElementType<UE::Anim::FCurveElement> *)&local_d8,0,
                 (int *)((longlong)&local_d8 + 0xc));
    }
    local_d8._16_1_ = '\0';
    local_d8._24_8_ = *(undefined8 *)&pFVar10->field_0x18;
  }
  FAnimationPoseData::FAnimationPoseData
            (&local_60,(FCompactPose *)&local_78,&local_d8,(FStackAttributeContainer *)&local_b8);
  GetAdditiveBasePose(this,&local_60,param_2);
  FAnimationRuntime::ConvertPoseToAdditive(this_00,(FCompactPose *)&local_78);
  if ((pFVar10 == &local_d8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&InOutValueArray0 != (void*)&InValueArray1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                         ,0x10a,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar18 = local_d8._8_4_;
  lVar13 = (longlong)(int)local_d8._8_4_;
  puVar1 = &pFVar10->field_0x8;
  iVar9 = *(int *)puVar1;
  if (local_d8._8_4_ != 0) {
    local_res8 = SUB81(pFVar11,0);
    if (pFVar10->field_0x10 == '\0') {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                (*(FCurveElement **)pFVar10,iVar9,local_res8,(FElementSortPredicate)local_res8);
      pFVar10->field_0x10 = 1;
    }
    if (local_d8._16_1_ == '\0') {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                ((FCurveElement *)local_d8._0_8_,local_d8._8_4_,local_res8,
                 (FElementSortPredicate)local_res8);
      local_d8._16_1_ = '\x01';
    }
    if (iVar18 < iVar9) {
      iVar18 = iVar9;
    }
    uVar20 = iVar18 / 2 + iVar18;
    if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
    }
    puVar2 = &pFVar10->field_0xc;
    if (*(int *)&pFVar10->field_0xc < (int)uVar20) {
      UE::Core::Private::
      ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,uVar20,(ForElementType<UE::Anim::FCurveElement> *)pFVar10,*(int *)puVar1,
                 (int *)puVar2);
    }
    uVar20 = __xmm_80000000800000008000000080000000;
    pFVar19 = *(FName **)pFVar10;
    pFVar22 = (FCurveElement *)(local_d8._0_8_ + lVar13 * 0x10);
    pFVar14 = pFVar19 + (longlong)iVar9 * 2;
    pFVar17 = (FCurveElement *)local_d8._0_8_;
    if (pFVar19 != pFVar14) {
      if ((FCurveElement *)local_d8._0_8_ == pFVar22) goto LAB_1474d79be;
      do {
        while( true ) {
          FVar4 = pFVar17->Name;
          FVar5 = *pFVar19;
          if (FVar5 != FVar4) break;
          pFVar19[1].ComparisonIndex.Value =
               (uint)((float)pFVar19[1].ComparisonIndex.Value - pFVar17->Value);
          pEVar15 = &pFVar17->Flags;
          pFVar17 = pFVar17 + 1;
          *(ECurveElementFlags *)&pFVar19[1].Number =
               (ECurveElementFlags)pFVar19[1].Number | *pEVar15;
          pFVar19 = pFVar19 + 2;
          if ((pFVar19 == pFVar14) || (pFVar17 == pFVar22)) goto LAB_1474d7910;
        }
        iVar9 = FVar5.ComparisonIndex.Value.Value - FVar4.ComparisonIndex.Value;
        if (iVar9 == 0) {
          iVar9 = FVar5.Number - FVar4.Number;
        }
        if (iVar9 < 0) {
          pFVar19 = pFVar19 + 2;
          bVar8 = pFVar19 == pFVar14;
        }
        else {
          lVar13 = *(longlong *)pFVar10;
          iVar9 = *(int *)puVar1;
          if (iVar9 == *(int *)puVar2) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                              (0x410,(ForElementType<UE::Anim::FCurveElement> *)pFVar10,
                               (int *)puVar2);
          }
          iVar18 = (int)((longlong)pFVar19 - lVar13 >> 4);
          *(int *)puVar1 = iVar9 + 1;
          lVar16 = (longlong)iVar18 * 0x10;
          memmove((void *)(*(longlong *)pFVar10 + lVar16 + 0x10),
                  (void *)(*(longlong *)pFVar10 + lVar16),(longlong)(iVar9 - iVar18) << 4);
          lVar13 = *(longlong *)pFVar10;
          pFVar14 = (FName *)((longlong)*(int *)puVar1 * 0x10 + lVar13);
          *(undefined8 *)(lVar16 + lVar13) = 0;
          ((undefined8 *)(lVar16 + lVar13))[1] = 0;
          *(undefined4 *)(lVar16 + 8 + lVar13) = 0;
          pFVar19 = (FName *)(lVar13 + 0x10 + lVar16);
          *(FName *)(lVar16 + lVar13) = pFVar17->Name;
          *(uint *)(lVar16 + 8 + lVar13) = (uint)pFVar17->Value ^ uVar20;
          pEVar15 = &pFVar17->Flags;
          pFVar17 = pFVar17 + 1;
          bVar8 = pFVar17 == pFVar22;
          *(ECurveElementFlags *)(lVar16 + 0xc + lVar13) = *pEVar15;
        }
      } while (!bVar8);
    }
LAB_1474d7910:
    if (pFVar17 < pFVar22) {
      iVar9 = *(int *)puVar1;
      iVar18 = (int)((longlong)pFVar22 - (longlong)pFVar17 >> 4);
      uVar21 = iVar9 + iVar18;
      if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
      }
      if (*(int *)puVar2 < (int)uVar21) {
        UE::Core::Private::
        ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                  (0x10,4,uVar21,(ForElementType<UE::Anim::FCurveElement> *)pFVar10,iVar9,
                   (int *)puVar2);
      }
      UE::Core::Private::
      ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,iVar18,(ForElementType<UE::Anim::FCurveElement> *)pFVar10,(int *)puVar1,
                 (int *)puVar2);
      puVar12 = (undefined8 *)((longlong)iVar9 * 0x10 + *(longlong *)pFVar10);
      lVar13 = (longlong)pFVar17 - (longlong)puVar12;
      pEVar15 = &pFVar17->Flags;
      do {
        *puVar12 = 0;
        puVar12[1] = 0;
        *(undefined4 *)(puVar12 + 1) = 0;
        *puVar12 = *(undefined8 *)(lVar13 + (longlong)puVar12);
        puVar3 = puVar12 + 2;
        *(uint *)(puVar12 + 1) = (uint)*(float *)(pEVar15 + -4) ^ uVar20;
        *(ECurveElementFlags *)((longlong)puVar12 + 0xc) = *pEVar15;
        puVar12 = puVar3;
        pEVar15 = pEVar15 + 0x10;
      } while ((FCurveElement *)(lVar13 + (longlong)puVar3) < pFVar22);
    }
  }
LAB_1474d79be:
  UE::Anim::Attributes::ConvertToAdditive((FStackAttributeContainer *)&local_b8,pFVar11);
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (local_98,(int)local_90);
  if (local_98 !=
      (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FMemory::Free(local_98);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (local_a8,(int)local_a0);
  if (local_a8 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_a8);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_b8,(int)local_b0);
  if (local_b8 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_b8);
  }
  return;
}

// GetBonePose_AdditiveMeshRotationOnly @ 1474d7a70

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UAnimSequence::GetBonePose_AdditiveMeshRotationOnly
          (UAnimSequence *this,FAnimationPoseData *param_1,FAnimExtractContext *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  FName FVar4;
  FName FVar5;
  code *pcVar6;
  undefined8 uVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  FCompactPose *this_00;
  FBlendedCurve *pFVar11;
  FStackAttributeContainer *pFVar12;
  undefined8 *puVar13;
  longlong lVar14;
  FName *pFVar15;
  ECurveElementFlags *pEVar16;
  longlong lVar17;
  FCurveElement *pFVar18;
  int iVar19;
  FName *pFVar20;
  uint uVar21;
  uint uVar22;
  FCurveElement *pFVar23;
  FIdentityFunctor local_res8;
  FBlendedCurve local_d8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_b8;
  undefined8 local_b0;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_a8;
  undefined8 local_a0;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  FBaseCompactPose<TMemStackAllocator<0>_> local_78;
  FAnimationPoseData local_60;
  
  this_00 = FAnimationPoseData::GetPose(param_1);
  pFVar11 = FAnimationPoseData::GetCurve(param_1);
  pFVar12 = FAnimationPoseData::GetAttributes(param_1);
  cVar8 = (**(code **)(this->_padding_ + 0x2d0))(this);
  if (cVar8 == '\0') {
    FCompactPose::ResetToAdditiveIdentity(this_00);
    return;
  }
  bVar9 = (bool)(**(code **)(this->_padding_ + 0x3e0))(this);
  GetBonePose(this,param_1,param_2,bVar9);
  local_78._padding_ = 0;
  local_78._padding_ = 0;
  local_78.BoneContainer = (FBoneContainer *)0x0;
  local_d8._0_8_ = (FCurveElement *)0x0;
  local_d8._8_8_ = 0;
  local_d8._16_1_ = '\0';
  local_d8._24_8_ = 0;
  local_b8 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_b0 = 0;
  local_a8 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_a0 = 0;
  local_98 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)0x0;
  local_90 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  FAnimationPoseData::FAnimationPoseData
            (&local_60,(FCompactPose *)&local_78,&local_d8,(FStackAttributeContainer *)&local_b8);
  FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer
            (&local_78,*(FBoneContainer **)&this_00->field_0x10);
  uVar7 = local_d8._8_8_;
  if (pFVar11 == &local_d8) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4808592878626406918>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimCurveTypes.h"
                       ,0x206,"&InCurveToInitFrom != this");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
    if ((longlong)uVar7 < 0) {
      UE::Core::Private::
      ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,0,(ForElementType<UE::Anim::FCurveElement> *)&local_d8,0,
                 (int *)((longlong)&local_d8 + 0xc));
    }
    local_d8._16_1_ = '\0';
    local_d8._24_8_ = *(undefined8 *)&pFVar11->field_0x18;
  }
  GetAdditiveBasePose(this,&local_60,param_2);
  FAnimationRuntime::ConvertPoseToMeshRotation(this_00);
  FAnimationRuntime::ConvertPoseToMeshRotation((FCompactPose *)&local_78);
  FAnimationRuntime::ConvertPoseToAdditive(this_00,(FCompactPose *)&local_78);
  if ((pFVar11 == &local_d8) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&InOutValueArray0 != (void*)&InValueArray1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                         ,0x10a,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar19 = local_d8._8_4_;
  lVar14 = (longlong)(int)local_d8._8_4_;
  puVar1 = &pFVar11->field_0x8;
  iVar10 = *(int *)puVar1;
  if (local_d8._8_4_ != 0) {
    local_res8 = SUB81(pFVar12,0);
    if (pFVar11->field_0x10 == '\0') {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                (*(FCurveElement **)pFVar11,iVar10,local_res8,(FElementSortPredicate)local_res8);
      pFVar11->field_0x10 = 1;
    }
    if (local_d8._16_1_ == '\0') {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                ((FCurveElement *)local_d8._0_8_,local_d8._8_4_,local_res8,
                 (FElementSortPredicate)local_res8);
      local_d8._16_1_ = '\x01';
    }
    if (iVar19 < iVar10) {
      iVar19 = iVar10;
    }
    uVar21 = iVar19 / 2 + iVar19;
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
    puVar2 = &pFVar11->field_0xc;
    if (*(int *)&pFVar11->field_0xc < (int)uVar21) {
      UE::Core::Private::
      ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,uVar21,(ForElementType<UE::Anim::FCurveElement> *)pFVar11,*(int *)puVar1,
                 (int *)puVar2);
    }
    uVar21 = __xmm_80000000800000008000000080000000;
    pFVar20 = *(FName **)pFVar11;
    pFVar23 = (FCurveElement *)(local_d8._0_8_ + lVar14 * 0x10);
    pFVar15 = pFVar20 + (longlong)iVar10 * 2;
    pFVar18 = (FCurveElement *)local_d8._0_8_;
    if (pFVar20 != pFVar15) {
      if ((FCurveElement *)local_d8._0_8_ == pFVar23) goto LAB_1474d7ebe;
      do {
        while( true ) {
          FVar4 = pFVar18->Name;
          FVar5 = *pFVar20;
          if (FVar5 != FVar4) break;
          pFVar20[1].ComparisonIndex.Value =
               (uint)((float)pFVar20[1].ComparisonIndex.Value - pFVar18->Value);
          pEVar16 = &pFVar18->Flags;
          pFVar18 = pFVar18 + 1;
          *(ECurveElementFlags *)&pFVar20[1].Number =
               (ECurveElementFlags)pFVar20[1].Number | *pEVar16;
          pFVar20 = pFVar20 + 2;
          if ((pFVar20 == pFVar15) || (pFVar18 == pFVar23)) goto LAB_1474d7e10;
        }
        iVar10 = FVar5.ComparisonIndex.Value.Value - FVar4.ComparisonIndex.Value;
        if (iVar10 == 0) {
          iVar10 = FVar5.Number - FVar4.Number;
        }
        if (iVar10 < 0) {
          pFVar20 = pFVar20 + 2;
          bVar9 = pFVar20 == pFVar15;
        }
        else {
          lVar14 = *(longlong *)pFVar11;
          iVar10 = *(int *)puVar1;
          if (iVar10 == *(int *)puVar2) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                               (0x410,(ForElementType<UE::Anim::FCurveElement> *)pFVar11,
                                (int *)puVar2);
          }
          iVar19 = (int)((longlong)pFVar20 - lVar14 >> 4);
          *(int *)puVar1 = iVar10 + 1;
          lVar17 = (longlong)iVar19 * 0x10;
          memmove((void *)(*(longlong *)pFVar11 + lVar17 + 0x10),
                  (void *)(*(longlong *)pFVar11 + lVar17),(longlong)(iVar10 - iVar19) << 4);
          lVar14 = *(longlong *)pFVar11;
          pFVar15 = (FName *)((longlong)*(int *)puVar1 * 0x10 + lVar14);
          *(undefined8 *)(lVar17 + lVar14) = 0;
          ((undefined8 *)(lVar17 + lVar14))[1] = 0;
          *(undefined4 *)(lVar17 + 8 + lVar14) = 0;
          pFVar20 = (FName *)(lVar14 + 0x10 + lVar17);
          *(FName *)(lVar17 + lVar14) = pFVar18->Name;
          *(uint *)(lVar17 + 8 + lVar14) = (uint)pFVar18->Value ^ uVar21;
          pEVar16 = &pFVar18->Flags;
          pFVar18 = pFVar18 + 1;
          bVar9 = pFVar18 == pFVar23;
          *(ECurveElementFlags *)(lVar17 + 0xc + lVar14) = *pEVar16;
        }
      } while (!bVar9);
    }
LAB_1474d7e10:
    if (pFVar18 < pFVar23) {
      iVar10 = *(int *)puVar1;
      iVar19 = (int)((longlong)pFVar23 - (longlong)pFVar18 >> 4);
      uVar22 = iVar10 + iVar19;
      if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
      }
      if (*(int *)puVar2 < (int)uVar22) {
        UE::Core::Private::
        ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                  (0x10,4,uVar22,(ForElementType<UE::Anim::FCurveElement> *)pFVar11,iVar10,
                   (int *)puVar2);
      }
      UE::Core::Private::
      ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,iVar19,(ForElementType<UE::Anim::FCurveElement> *)pFVar11,(int *)puVar1,
                 (int *)puVar2);
      puVar13 = (undefined8 *)((longlong)iVar10 * 0x10 + *(longlong *)pFVar11);
      lVar14 = (longlong)pFVar18 - (longlong)puVar13;
      pEVar16 = &pFVar18->Flags;
      do {
        *puVar13 = 0;
        puVar13[1] = 0;
        *(undefined4 *)(puVar13 + 1) = 0;
        *puVar13 = *(undefined8 *)(lVar14 + (longlong)puVar13);
        puVar3 = puVar13 + 2;
        *(uint *)(puVar13 + 1) = (uint)*(float *)(pEVar16 + -4) ^ uVar21;
        *(ECurveElementFlags *)((longlong)puVar13 + 0xc) = *pEVar16;
        puVar13 = puVar3;
        pEVar16 = pEVar16 + 0x10;
      } while ((FCurveElement *)(lVar14 + (longlong)puVar3) < pFVar23);
    }
  }
LAB_1474d7ebe:
  UE::Anim::Attributes::ConvertToAdditive((FStackAttributeContainer *)&local_b8,pFVar12);
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (local_98,(int)local_90);
  if (local_98 !=
      (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FMemory::Free(local_98);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (local_a8,(int)local_a0);
  if (local_a8 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_a8);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_b8,(int)local_b0);
  if (local_b8 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_b8);
  }
  return;
}

// GetBoneTransform @ 1474d7f70

void __thiscall
UAnimSequence::GetBoneTransform
          (UAnimSequence *this,TTransform<double> *param_1,FSkeletonPoseBoneIndex param_2,
          FAnimSequenceDecompressionContext *param_3,bool param_4)

{
  int iVar1;
  float fStackX_24;
  FAnimExtractContext local_58;
  
  iVar1 = (param_3->SamplingRate).Denominator;
  fStackX_24 = (param_3->SamplingTime).SubFrame;
  local_58.DeltaTimeRecord.bPreviousIsValid = false;
  local_58.DeltaTimeRecord._9_3_ = 0;
  local_58.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.PoseCurves.ArrayNum = 0;
  local_58.PoseCurves.ArrayMax = 0;
  local_58.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.BonesRequired.ArrayNum = 0;
  local_58.BonesRequired.ArrayMax = 0;
  local_58.bExtractRootMotion = false;
  local_58.bLooping = false;
  local_58.DeltaTimeRecord.Delta = 0.0;
  local_58.DeltaTimeRecord.Previous = 0.0;
  local_58.CurrentTime =
       ((double)((longlong)iVar1 * (longlong)(param_3->SamplingTime).FrameNumber.Value) +
       (double)iVar1 * (double)fStackX_24) / (double)(param_3->SamplingRate).Numerator;
  local_58.InterpolationOverride.bIsSet =
       (TOptional<EAnimInterpolationType> *)&param_3->Interpolation !=
       &local_58.InterpolationOverride;
  if (local_58.InterpolationOverride.bIsSet) {
    local_58.InterpolationOverride.TypedValue = param_3->Interpolation;
  }
  GetBoneTransform_Lockless(this,param_1,param_2,&local_58,param_4);
  if (local_58.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.BonesRequired.AllocatorInstance.Data);
  }
  if (local_58.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.PoseCurves.AllocatorInstance.Data);
  }
  return;
}

// GetBoneTransform @ 1474d8080

void __thiscall
UAnimSequence::GetBoneTransform
          (UAnimSequence *this,TTransform<double> *param_1,FSkeletonPoseBoneIndex param_2,
          FAnimExtractContext *param_3,bool param_4)

{
  GetBoneTransform_Lockless(this,param_1,param_2,param_3,param_4);
  return;
}

// GetBoneTransform_Lockless @ 1474d80a0

void __thiscall
UAnimSequence::GetBoneTransform_Lockless
          (UAnimSequence *this,TTransform<double> *param_1,FSkeletonPoseBoneIndex param_2,
          FAnimExtractContext *param_3,bool param_4)

{
  FCompressedAnimSequence *this_00;
  EAnimInterpolationType EVar1;
  byte bVar2;
  USkeleton *this_01;
  ICompressedAnimData *pIVar3;
  UAnimBoneCompressionCodec *pUVar4;
  FSkeletonPoseBoneIndex *pFVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  char cVar9;
  bool bVar10;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar11;
  UPackage *pUVar12;
  int iVar13;
  TOptional<EAnimInterpolationType> *pTVar14;
  FSkeletonPoseBoneIndex *pFVar15;
  longlong lVar16;
  float fVar17;
  double dVar18;
  undefined1 in_XMM2 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  FFrameTime local_res8;
  FName local_e8 [2];
  FAnimSequenceDecompressionContext local_d8;
  
  this_00 = &this->CompressedData;
  cVar9 = (**(code **)(this->_padding_ + 0x3e0))();
  if (((cVar9 != '\0') && (param_4)) ||
     (bVar10 = ShouldUseRawDataForPoseExtraction_Lockless(this,param_3), bVar10)) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  pTVar14 = &param_3->InterpolationOverride;
  if ((param_3->InterpolationOverride).bIsSet == false) {
    pTVar14 = (TOptional<EAnimInterpolationType> *)&this->Interpolation;
  }
  EVar1 = pTVar14->TypedValue;
  if ((bVar10) || (bVar10 = FCompressedAnimSequence::IsValid(this_00,this,false), !bVar10)) {
    (**(code **)(this->_padding_ + 0x3e0))(this);
    return;
  }
  bVar2 = (this->AdditiveAnimType).Value;
  bVar10 = (bool)(**(code **)(this->_padding_ + 0x2d0))(this);
  this_01 = (USkeleton *)this->_padding_;
  pTVar11 = USkeleton::GetRefLocalPoses(this_01,(FName)0x0);
  local_e8[0] = this->RetargetSource;
  pIVar3 = (this->CompressedData).CompressedDataStructure.Ptr;
  if ((local_e8[0] == (FName)0x0) && (0 < (this->RetargetSourceAssetReferencePose).ArrayNum)) {
    pUVar12 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
    local_e8[0] = (FName)pUVar12->_padding_;
  }
  fVar17 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
  dVar8 = __real_c1e0000000000000;
  dVar7 = __real_41dfffffffc00000;
  dVar21 = ((double)(this->PlatformTargetFrameRate).Default.Numerator * (double)fVar17) /
           (double)(this->PlatformTargetFrameRate).Default.Denominator;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = dVar21;
  auVar19 = roundpd(in_XMM2,auVar19,1);
  dVar18 = auVar19._0_8_;
  dVar21 = dVar21 - dVar18;
  if (__real_41dfffffffc00000 <= dVar18) {
    dVar18 = __real_41dfffffffc00000;
  }
  if (dVar18 <= __real_c1e0000000000000) {
    dVar18 = __real_c1e0000000000000;
  }
  iVar13 = (int)dVar21;
  fVar17 = (float)dVar21 - (float)iVar13;
  if ((0.0 < fVar17) && (::FFrameTime::MaxSubframe <= fVar17)) {
    fVar17 = ::FFrameTime::MaxSubframe;
  }
  if (::FFrameTime::MaxSubframe <= fVar17) {
    fVar17 = ::FFrameTime::MaxSubframe;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  iVar13 = (int)dVar18 + iVar13;
  if (__real_3f000000 <= fVar17) {
    iVar13 = iVar13 + 1;
  }
  FAnimSequenceDecompressionContext::FAnimSequenceDecompressionContext
            (&local_d8,&(this->PlatformTargetFrameRate).Default,iVar13,EVar1,local_e8,pIVar3,pTVar11
             ,&this_00->CompressedTrackToSkeletonMapTable,this_01,bVar10,(uint)bVar2);
  dVar18 = param_3->CurrentTime;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = dVar18;
  local_d8.Time = (float)dVar18;
  if (local_d8.SequenceLength == 0.0) {
    local_d8.RelativePos = 0.0;
  }
  else {
    local_d8.RelativePos = local_d8.Time / local_d8.SequenceLength;
  }
  dVar21 = ((double)local_d8.SamplingRate.Numerator * dVar18) /
           (double)local_d8.SamplingRate.Denominator;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar21;
  auVar19 = roundpd(auVar20,auVar6,1);
  dVar18 = auVar19._0_8_;
  dVar21 = dVar21 - dVar18;
  if (dVar7 <= dVar18) {
    dVar18 = dVar7;
  }
  if (dVar18 <= dVar8) {
    dVar18 = dVar8;
  }
  iVar13 = (int)dVar21;
  local_res8.SubFrame = (float)dVar21 - (float)iVar13;
  if ((0.0 < local_res8.SubFrame) && (::FFrameTime::MaxSubframe <= local_res8.SubFrame)) {
    local_res8.SubFrame = ::FFrameTime::MaxSubframe;
  }
  pUVar4 = (this->CompressedData).BoneCompressionCodec.field0_0x0.DebugPtr;
  if (::FFrameTime::MaxSubframe <= local_res8.SubFrame) {
    local_res8.SubFrame = ::FFrameTime::MaxSubframe;
  }
  if (local_res8.SubFrame <= 0.0) {
    local_res8.SubFrame = 0.0;
  }
  local_res8.FrameNumber.Value = iVar13 + (int)dVar18;
  local_d8.SamplingTime = local_res8;
  if (pUVar4 == (UAnimBoneCompressionCodec *)0x0) {
    return;
  }
  pFVar5 = (FSkeletonPoseBoneIndex *)
           (this_00->CompressedTrackToSkeletonMapTable).AllocatorInstance.Data;
  pFVar15 = pFVar5;
  if (pFVar5 == pFVar5 + (this->CompressedData).CompressedTrackToSkeletonMapTable.ArrayNum) {
    return;
  }
  while (*pFVar15 != param_2) {
    pFVar15 = pFVar15 + 1;
    if (pFVar15 == pFVar5 + (this->CompressedData).CompressedTrackToSkeletonMapTable.ArrayNum) {
      return;
    }
  }
  lVar16 = (longlong)pFVar15 - (longlong)pFVar5 >> 2;
  if ((int)lVar16 == -1) {
    return;
  }
  (**(code **)(pUVar4->_padding_ + 0x2e8))(pUVar4,&local_d8,lVar16,param_1);
  return;
}

// GetCompressedData @ 1474d8730

FScopedCompressedAnimSequence __thiscall
UAnimSequence::GetCompressedData(UAnimSequence *this,FAnimExtractContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  FScopedCompressedAnimSequence FVar3;
  
  param_1->CurrentTime = (double)&this->CompressedData;
  if ((&this->CompressedData == (FCompressedAnimSequence *)0x0) || (this == (UAnimSequence *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompressedData && InAnimSequence",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimSequence.h"
                       ,0x395,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.CompressedData = (FCompressedAnimSequence *)(*pcVar1)();
      return (FScopedCompressedAnimSequence)FVar3.CompressedData;
    }
  }
  return (FScopedCompressedAnimSequence)(FCompressedAnimSequence *)param_1;
}

// GetCompressedData @ 1474d8790

FScopedCompressedAnimSequence __thiscall UAnimSequence::GetCompressedData(UAnimSequence *this)

{
  code *pcVar1;
  bool bVar2;
  FScopedCompressedAnimSequence FVar3;
  FCompressedAnimSequence *in_RDX;
  
  (in_RDX->CompressedTrackToSkeletonMapTable).AllocatorInstance.Data =
       (FScriptContainerElement *)&this->CompressedData;
  if ((&this->CompressedData == (FCompressedAnimSequence *)0x0) || (this == (UAnimSequence *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompressedData && InAnimSequence",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimSequence.h"
                       ,0x395,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.CompressedData = (FCompressedAnimSequence *)(*pcVar1)();
      return (FScopedCompressedAnimSequence)FVar3.CompressedData;
    }
  }
  return (FScopedCompressedAnimSequence)in_RDX;
}

// GetCompressedData_Internal @ 1474d87f0

FCompressedAnimSequence * __thiscall UAnimSequence::GetCompressedData_Internal(UAnimSequence *this)

{
  return &this->CompressedData;
}

// GetCompressedData_Internal @ 1474d8800

FCompressedAnimSequence * __thiscall UAnimSequence::GetCompressedData_Internal(UAnimSequence *this)

{
  return &this->CompressedData;
}

// GetCurrentTimeFromMarkers @ 1474d8da0

float __thiscall
UAnimSequence::GetCurrentTimeFromMarkers
          (UAnimSequence *this,FMarkerPair *param_1,FMarkerPair *param_2,float param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar1 = param_1->MarkerIndex;
  if (uVar1 == 0xffffffff) {
    fVar5 = 0.0;
  }
  else {
    uVar4 = 0;
    if ((int)uVar1 < (this->AuthoredSyncMarkers).ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar5 = (float)(*pcVar2)();
        return fVar5;
      }
    }
    fVar5 = *(float *)((this->AuthoredSyncMarkers).AllocatorInstance.Data +
                      (longlong)(int)uVar1 * 0xc + 8);
  }
  uVar1 = param_2->MarkerIndex;
  if (uVar1 == 0xffffffff) {
    fVar6 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
  }
  else {
    uVar4 = 0;
    if ((int)uVar1 < (this->AuthoredSyncMarkers).ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar5 = (float)(*pcVar2)();
        return fVar5;
      }
    }
    fVar6 = *(float *)((this->AuthoredSyncMarkers).AllocatorInstance.Data +
                      (longlong)(int)uVar1 * 0xc + 8);
  }
  if (fVar6 <= fVar5) {
    fVar7 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
    fVar5 = fVar5 - fVar7;
  }
  fVar7 = (fVar6 - fVar5) * param_3 + fVar5;
  param_1->TimeToMarker = fVar5 - fVar7;
  param_2->TimeToMarker = fVar6 - fVar7;
  if (fVar7 < 0.0) {
    fVar5 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
    fVar7 = fVar7 + fVar5;
  }
  fVar5 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
  if (fVar7 <= fVar5) {
    fVar5 = fVar7;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  return fVar5;
}

// GetEnableRootMotionSettingFromMontage @ 1474d9590

bool __thiscall UAnimSequence::GetEnableRootMotionSettingFromMontage(UAnimSequence *this)

{
  return this->bRootMotionSettingsCopiedFromMontage;
}

// GetFirstMatchingPosFromMarkerSyncPos @ 1474d9970

float __thiscall
UAnimSequence::GetFirstMatchingPosFromMarkerSyncPos
          (UAnimSequence *this,FMarkerSyncAnimPosition *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FName *pFVar6;
  longlong lVar7;
  float fVar8;
  
  if (((param_1->PreviousMarkerName != (FName)0x0) && (param_1->NextMarkerName != (FName)0x0)) &&
     (uVar5 = 0, 0 < (this->AuthoredSyncMarkers).ArrayNum + -1)) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->AuthoredSyncMarkers).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        fVar8 = (float)(*pcVar2)();
        return fVar8;
      }
      uVar5 = uVar5 + 1;
      pFVar6 = (FName *)((this->AuthoredSyncMarkers).AllocatorInstance.Data + lVar7);
      uVar4 = 0;
      if ((int)uVar5 < (this->AuthoredSyncMarkers).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        fVar8 = (float)(*pcVar2)();
        return fVar8;
      }
      pFVar1 = (this->AuthoredSyncMarkers).AllocatorInstance.Data;
      if ((*pFVar6 == param_1->PreviousMarkerName) &&
         (*(FName *)(pFVar1 + lVar7 + 0xc) == param_1->NextMarkerName)) {
        return (*(float *)(pFVar1 + lVar7 + 0x14) - (float)pFVar6[1].ComparisonIndex.Value) *
               param_1->PositionBetweenMarkers + (float)pFVar6[1].ComparisonIndex.Value;
      }
      lVar7 = lVar7 + 0xc;
    } while ((int)uVar5 < (this->AuthoredSyncMarkers).ArrayNum + -1);
  }
  return 0.0;
}

// GetMarkerIndicesForPosition @ 1474da460

void __thiscall
UAnimSequence::GetMarkerIndicesForPosition
          (UAnimSequence *this,FMarkerSyncAnimPosition *param_1,bool param_2,FMarkerPair *param_3,
          FMarkerPair *param_4,float *param_5,UMirrorDataTable *param_6)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  FName *pFVar6;
  FName *pFVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  FName FVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint local_res18;
  longlong local_178;
  FName local_170;
  FName local_168;
  FName local_160;
  FName local_158;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  float *local_110;
  UAnimSequence *local_108;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0 [9];
  
  uVar10 = 0;
  if (!param_2) {
LAB_1474db1bf:
    param_3->MarkerIndex = -1;
    param_4->MarkerIndex = -1;
    uVar17 = uVar10;
    if (0 < (this->AuthoredSyncMarkers).ArrayNum) {
      do {
        uVar9 = (uint)uVar10;
        uVar12 = 0;
        if ((int)uVar9 < (this->AuthoredSyncMarkers).ArrayNum) {
          uVar12 = ~uVar9 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (this->AuthoredSyncMarkers).AllocatorInstance.Data;
        fVar22 = *(float *)(pFVar2 + uVar17 + 8);
        if (*param_5 <= fVar22) {
LAB_1474db2bd:
          if (*param_5 <= fVar22 && fVar22 != *param_5) {
            FVar11 = *(FName *)(pFVar2 + uVar17);
            if ((param_6 != (UMirrorDataTable *)0x0) &&
               (pFVar7 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                         ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                                 *)&param_6->SyncToMirrorSyncMap,FVar11), pFVar7 != (FName *)0x0)) {
              FVar11 = *pFVar7;
            }
            if (FVar11 == param_1->NextMarkerName) {
              param_4->MarkerIndex = uVar9;
              param_4->TimeToMarker = fVar22 - *param_5;
              break;
            }
          }
        }
        else {
          FVar11 = *(FName *)(pFVar2 + uVar17);
          if ((param_6 != (UMirrorDataTable *)0x0) &&
             (pFVar7 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                       ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                               *)&param_6->SyncToMirrorSyncMap,FVar11), pFVar7 != (FName *)0x0)) {
            FVar11 = *pFVar7;
          }
          if (FVar11 != param_1->PreviousMarkerName) goto LAB_1474db2bd;
          param_3->MarkerIndex = uVar9;
          param_3->TimeToMarker = fVar22 - *param_5;
        }
        uVar10 = (ulonglong)(uVar9 + 1);
        uVar17 = uVar17 + 0xc;
      } while ((int)(uVar9 + 1) < (this->AuthoredSyncMarkers).ArrayNum);
    }
    if ((0.0 < *param_5 || *param_5 == 0.0) &&
       (fVar22 = *param_5, fVar23 = (float)(**(code **)(this->_padding_ + 0x2c0))(this),
       fVar22 <= fVar23)) {
      return;
    }
    local_110 = param_5;
    local_108 = this;
    `UAnimSequence::GetMarkerIndicesForPosition'::__l5::<lambda_2>::operator()(&local_110);
    return;
  }
  pFVar7 = &param_1->NextMarkerName;
  if (param_1->PreviousMarkerName == (FName)0x0) {
    if (*pFVar7 == (FName)0x0) goto LAB_1474db1bf;
    param_3->MarkerIndex = -1;
    if ((*pFVar7 == (FName)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("SyncPosition.NextMarkerName != NAME_None",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                           ,0x10d8,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (0 < (this->AuthoredSyncMarkers).ArrayNum) {
      lVar16 = 0;
      do {
        uVar9 = (uint)uVar10;
        uVar12 = 0;
        if ((int)uVar9 < (this->AuthoredSyncMarkers).ArrayNum) {
          uVar12 = ~uVar9 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar11 = *(FName *)((this->AuthoredSyncMarkers).AllocatorInstance.Data + lVar16);
        if ((param_6 != (UMirrorDataTable *)0x0) &&
           (pFVar6 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                     ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                             *)&param_6->SyncToMirrorSyncMap,FVar11), pFVar6 != (FName *)0x0)) {
          FVar11 = *pFVar6;
        }
        if (FVar11 == *pFVar7) {
          param_4->MarkerIndex = uVar9;
          fVar22 = GetCurrentTimeFromMarkers(this,param_3,param_4,param_1->PositionBetweenMarkers);
          *param_5 = fVar22;
          return;
        }
        uVar10 = (ulonglong)(uVar9 + 1);
        lVar16 = lVar16 + 0xc;
      } while ((int)(uVar9 + 1) < (this->AuthoredSyncMarkers).ArrayNum);
    }
    ::FName::ToString(&param_1->NextMarkerName,&local_100);
    local_170 = (FName)this->_padding_;
    ::FName::ToString(&local_170,&local_150);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                       ,0x10e7,
                       L"Next Marker not found in GetMarkerIndicesForPosition. Anim: %s Expecting marker %s (Added to help debug Jira OR-9675)"
                      );
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1->NextMarkerName == (FName)0x0) {
    param_4->MarkerIndex = -1;
    if ((param_1->PreviousMarkerName == (FName)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("SyncPosition.PreviousMarkerName != NAME_None",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                           ,0x10f1,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar12 = (this->AuthoredSyncMarkers).ArrayNum - 1;
    if (-1 < (int)uVar12) {
      lVar16 = (longlong)(int)uVar12 * 0xc;
      do {
        uVar9 = 0;
        if ((int)uVar12 < (this->AuthoredSyncMarkers).ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar11 = *(FName *)((this->AuthoredSyncMarkers).AllocatorInstance.Data + lVar16);
        if ((param_6 != (UMirrorDataTable *)0x0) &&
           (pFVar7 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                     ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                             *)&param_6->SyncToMirrorSyncMap,FVar11), pFVar7 != (FName *)0x0)) {
          FVar11 = *pFVar7;
        }
        if (FVar11 == param_1->PreviousMarkerName) {
          param_3->MarkerIndex = uVar12;
          fVar22 = param_1->PositionBetweenMarkers;
          uVar9 = 0;
          if ((int)uVar12 < (this->AuthoredSyncMarkers).ArrayNum) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar9 = param_4->MarkerIndex;
          fVar23 = *(float *)((this->AuthoredSyncMarkers).AllocatorInstance.Data +
                             (ulonglong)uVar12 * 0xc + 8);
          if (uVar9 == 0xffffffff) {
            fVar20 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
          }
          else {
            uVar12 = 0;
            if ((int)uVar9 < (this->AuthoredSyncMarkers).ArrayNum) {
              uVar12 = ~uVar9 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            fVar20 = *(float *)((this->AuthoredSyncMarkers).AllocatorInstance.Data +
                               (longlong)(int)uVar9 * 0xc + 8);
          }
          if (fVar20 <= fVar23) {
            fVar21 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
            fVar23 = fVar23 - fVar21;
          }
          fVar22 = (fVar20 - fVar23) * fVar22 + fVar23;
          param_3->TimeToMarker = fVar23 - fVar22;
          param_4->TimeToMarker = fVar20 - fVar22;
          if (fVar22 < 0.0) {
            fVar23 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
            fVar22 = fVar22 + fVar23;
          }
          fVar23 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
          if (fVar22 <= fVar23) {
            fVar23 = fVar22;
          }
          if (fVar23 <= 0.0) {
            fVar23 = 0.0;
          }
          *param_5 = fVar23;
          return;
        }
        lVar16 = lVar16 + -0xc;
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
    }
    ::FName::ToString(&param_1->PreviousMarkerName,&local_f0);
    local_168 = (FName)this->_padding_;
    ::FName::ToString(&local_168,&local_140);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                       ,0x1100,
                       L"Previous Marker not found in GetMarkerIndicesForPosition. Anim: %s Expecting marker %s (Added to help debug Jira OR-9675)"
                      );
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar12 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar22 = *param_5;
  local_res18 = 0;
  if (0 < (this->AuthoredSyncMarkers).ArrayNum) {
    local_178 = 0;
    fVar23 = __real_7f7fffff;
    do {
      uVar9 = 0;
      if ((int)local_res18 < (this->AuthoredSyncMarkers).ArrayNum) {
        uVar9 = ~local_res18 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->AuthoredSyncMarkers).AllocatorInstance.Data;
      FVar11 = *(FName *)(pFVar2 + local_178);
      if ((param_6 != (UMirrorDataTable *)0x0) &&
         (pFVar7 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                   ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                           *)&param_6->SyncToMirrorSyncMap,FVar11), pFVar7 != (FName *)0x0)) {
        FVar11 = *pFVar7;
      }
      if (FVar11 == param_1->PreviousMarkerName) {
        iVar13 = local_res18 + 1;
        iVar15 = (this->AuthoredSyncMarkers).ArrayNum + iVar13;
        for (; iVar13 < iVar15; iVar13 = iVar13 + 1) {
          iVar1 = (this->AuthoredSyncMarkers).ArrayNum;
          uVar8 = iVar13 % iVar1;
          uVar9 = 0;
          if ((int)uVar8 < iVar1) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar11 = *(FName *)((this->AuthoredSyncMarkers).AllocatorInstance.Data +
                             (longlong)(int)uVar8 * 0xc);
          if ((param_6 != (UMirrorDataTable *)0x0) &&
             (pFVar7 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                       ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                               *)&param_6->SyncToMirrorSyncMap,FVar11), pFVar7 != (FName *)0x0)) {
            FVar11 = *pFVar7;
          }
          if (FVar11 == param_1->NextMarkerName) {
            uVar14 = 0;
            uVar9 = uVar14;
            if ((int)uVar8 < (this->AuthoredSyncMarkers).ArrayNum) {
              uVar9 = ~uVar8 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            fVar20 = *(float *)((this->AuthoredSyncMarkers).AllocatorInstance.Data +
                               (longlong)(int)uVar8 * 0xc + 8);
            bVar5 = *(float *)(pFVar2 + local_178 + 8) <= fVar20;
            if (!bVar5) {
              fVar21 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
              fVar20 = fVar20 + fVar21;
            }
            fVar21 = (fVar20 - *(float *)(pFVar2 + local_178 + 8)) * param_1->PositionBetweenMarkers
                     + *(float *)(pFVar2 + local_178 + 8);
            fVar20 = (float)((uint)(fVar21 - fVar22) & uVar12);
            if (fVar23 <= fVar20) {
              if (bVar5) break;
              fVar20 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
              fVar20 = (float)((uint)((fVar21 - fVar20) - fVar22) & uVar12);
              if (fVar23 <= fVar20) break;
            }
            param_3->MarkerIndex = local_res18;
            param_4->MarkerIndex = uVar8;
            uVar9 = param_3->MarkerIndex;
            fVar23 = param_1->PositionBetweenMarkers;
            if (uVar9 == 0xffffffff) {
              fVar21 = 0.0;
            }
            else {
              uVar8 = uVar14;
              if ((int)uVar9 < (this->AuthoredSyncMarkers).ArrayNum) {
                uVar8 = ~uVar9 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              fVar21 = *(float *)((this->AuthoredSyncMarkers).AllocatorInstance.Data +
                                 (longlong)(int)uVar9 * 0xc + 8);
            }
            uVar9 = param_4->MarkerIndex;
            if (uVar9 == 0xffffffff) {
              fVar18 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
            }
            else {
              if ((int)uVar9 < (this->AuthoredSyncMarkers).ArrayNum) {
                uVar14 = ~uVar9 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              fVar18 = *(float *)((this->AuthoredSyncMarkers).AllocatorInstance.Data +
                                 (longlong)(int)uVar9 * 0xc + 8);
            }
            if (fVar18 <= fVar21) {
              fVar19 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
              fVar21 = fVar21 - fVar19;
            }
            fVar23 = (fVar18 - fVar21) * fVar23 + fVar21;
            param_3->TimeToMarker = fVar21 - fVar23;
            param_4->TimeToMarker = fVar18 - fVar23;
            if (fVar23 < 0.0) {
              fVar21 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
              fVar23 = fVar23 + fVar21;
            }
            fVar21 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
            if (fVar23 <= fVar21) {
              fVar21 = fVar23;
            }
            if (fVar21 <= 0.0) {
              fVar21 = 0.0;
            }
            *param_5 = fVar21;
            fVar23 = fVar20;
            break;
          }
        }
        if (param_3->MarkerIndex == -2) {
          iVar13 = local_res18 + 1;
          if (*param_5 - *(float *)(pFVar2 + local_178 + 8) <= 0.0) goto LAB_1474daf1e;
          lVar16 = (longlong)iVar13 * 0xc;
          goto LAB_1474daeb0;
        }
      }
      local_res18 = local_res18 + 1;
      local_178 = local_178 + 0xc;
    } while ((int)local_res18 < (this->AuthoredSyncMarkers).ArrayNum);
  }
  goto LAB_1474dabb0;
  while( true ) {
    if ((iVar13 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar13 = iVar13 + 1;
    lVar4 = lVar16 + 8;
    lVar16 = lVar16 + 0xc;
    if (*param_5 - *(float *)((this->AuthoredSyncMarkers).AllocatorInstance.Data + lVar4) <= 0.0)
    break;
LAB_1474daeb0:
    if ((this->AuthoredSyncMarkers).ArrayNum <= iVar13) break;
  }
LAB_1474daf1e:
  param_3->MarkerIndex = iVar13 + -1;
  param_4->MarkerIndex = -1;
  uVar12 = param_3->MarkerIndex;
  fVar22 = param_1->PositionBetweenMarkers;
  if (uVar12 == 0xffffffff) {
    fVar23 = 0.0;
  }
  else {
    uVar9 = 0;
    if ((int)uVar12 < (this->AuthoredSyncMarkers).ArrayNum) {
      uVar9 = ~uVar12 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    fVar23 = *(float *)((this->AuthoredSyncMarkers).AllocatorInstance.Data +
                       (longlong)(int)uVar12 * 0xc + 8);
  }
  uVar12 = param_4->MarkerIndex;
  if (uVar12 == 0xffffffff) {
    fVar20 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
  }
  else {
    uVar9 = 0;
    if ((int)uVar12 < (this->AuthoredSyncMarkers).ArrayNum) {
      uVar9 = ~uVar12 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    fVar20 = *(float *)((this->AuthoredSyncMarkers).AllocatorInstance.Data +
                       (longlong)(int)uVar12 * 0xc + 8);
  }
  if (fVar20 <= fVar23) {
    fVar21 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
    fVar23 = fVar23 - fVar21;
  }
  fVar22 = (fVar20 - fVar23) * fVar22 + fVar23;
  param_3->TimeToMarker = fVar23 - fVar22;
  param_4->TimeToMarker = fVar20 - fVar22;
  if (fVar22 < 0.0) {
    fVar23 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
    fVar22 = fVar22 + fVar23;
  }
  fVar23 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
  if (fVar22 <= fVar23) {
    fVar23 = fVar22;
  }
  if (fVar23 <= 0.0) {
    fVar23 = 0.0;
  }
  *param_5 = fVar23;
LAB_1474dabb0:
  if (param_3->MarkerIndex == -2) {
    ::FName::ToString(&param_1->PreviousMarkerName,&local_e0);
    local_160 = (FName)this->_padding_;
    ::FName::ToString(&local_160,&local_130);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutPrevMarker.MarkerIndex != MarkerIndexSpecialValues::Uninitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                       ,0x115e,
                       L"Prev Marker not found in GetMarkerIndicesForPosition. Anim: %s Expecting marker %s (Added to help debug Jira OR-9675)"
                      );
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_4->MarkerIndex == -2) {
    ::FName::ToString(&param_1->NextMarkerName,local_d0);
    local_158 = (FName)this->_padding_;
    ::FName::ToString(&local_158,&local_120);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutNextMarker.MarkerIndex != MarkerIndexSpecialValues::Uninitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                       ,0x115f,
                       L"Next Marker not found in GetMarkerIndicesForPosition. Anim: %s Expecting marker %s (Added to help debug Jira OR-9675)"
                      );
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if (local_d0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0[0].Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// GetMarkerIndicesForTime @ 1474db3e0

void __thiscall
UAnimSequence::GetMarkerIndicesForTime
          (UAnimSequence *this,float param_1,bool param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3,FMarkerPair *param_4,
          FMarkerPair *param_5)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  param_4->TimeToMarker = (float)((uint)param_1 ^ __xmm_80000000800000008000000080000000);
  param_4->MarkerIndex = -1;
  param_5->MarkerIndex = -1;
  fVar10 = (float)(**(code **)(this->_padding_ + 0x2c0))();
  iVar8 = (param_2 ^ 1) - 1;
  param_5->TimeToMarker = fVar10 - param_1;
  do {
    if ((int)(param_2 + 1) <= iVar8) {
      return;
    }
    fVar10 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
    uVar7 = 0;
    if (0 < (this->AuthoredSyncMarkers).ArrayNum) {
      lVar9 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar7 < (this->AuthoredSyncMarkers).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar6 = (param_3->AllocatorInstance).Data;
        pFVar2 = (this->AuthoredSyncMarkers).AllocatorInstance.Data;
        pFVar1 = pFVar6 + (longlong)param_3->ArrayNum * 8;
        if (pFVar6 != pFVar1) {
          do {
            if (*(longlong *)pFVar6 == *(longlong *)(pFVar2 + lVar9)) {
              fVar11 = fVar10 * (float)iVar8 + *(float *)(pFVar2 + lVar9 + 8);
              fVar12 = fVar11 - param_1;
              if (param_1 <= fVar11) {
                param_5->TimeToMarker = fVar12;
                param_5->MarkerIndex = uVar7;
                goto LAB_1474db555;
              }
              param_4->TimeToMarker = fVar12;
              param_4->MarkerIndex = uVar7;
              break;
            }
            pFVar6 = pFVar6 + 8;
          } while (pFVar6 != pFVar1);
        }
        uVar7 = uVar7 + 1;
        lVar9 = lVar9 + 0xc;
      } while ((int)uVar7 < (this->AuthoredSyncMarkers).ArrayNum);
    }
LAB_1474db555:
    if (param_5->MarkerIndex != -1) {
      return;
    }
    iVar8 = iVar8 + 1;
  } while( true );
}

// GetMarkerSyncPositionFromMarkerIndicies @ 1474db620

FMarkerSyncAnimPosition * __thiscall
UAnimSequence::GetMarkerSyncPositionFromMarkerIndicies
          (UAnimSequence *this,FMarkerSyncAnimPosition *__return_storage_ptr__,int param_1,
          int param_2,float param_3,UMirrorDataTable *param_4)

{
  code *pcVar1;
  UMirrorDataTable *pUVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FMarkerSyncAnimPosition *pFVar6;
  FName *pFVar7;
  longlong lVar8;
  FName FVar9;
  longlong lVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint local_res18 [2];
  uint local_res20 [2];
  UAnimSequence *local_88;
  uint *local_80;
  uint *local_78;
  float *local_70;
  UAnimSequence *local_68;
  uint *local_60;
  uint *local_58;
  float *local_50;
  
  pUVar2 = param_4;
  (__return_storage_ptr__->PreviousMarkerName).ComparisonIndex = 0;
  (__return_storage_ptr__->PreviousMarkerName).Number = 0;
  (__return_storage_ptr__->NextMarkerName).ComparisonIndex = 0;
  (__return_storage_ptr__->NextMarkerName).Number = 0;
  __return_storage_ptr__->PositionBetweenMarkers = 0.0;
  uVar11 = 0;
  local_res18[0] = param_1;
  local_res20[0] = param_2;
  if (param_1 == -1) {
LAB_1474db7a6:
    fVar13 = 0.0;
  }
  else {
    if ((param_1 < 0) || ((this->AuthoredSyncMarkers).ArrayNum <= param_1)) {
      local_80 = local_res18;
      local_78 = local_res20;
      local_70 = &param_3;
      local_88 = this;
      bVar3 = `UAnimSequence::GetMarkerSyncPositionFromMarkerIndicies'::__l3::<lambda_1>::operator()
                        (&local_88);
      if (!bVar3) goto LAB_1474db7a6;
    }
    lVar10 = (longlong)(int)local_res18[0];
    uVar4 = 0;
    if ((int)local_res18[0] < (this->AuthoredSyncMarkers).ArrayNum) {
      uVar4 = ~local_res18[0] >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FMarkerSyncAnimPosition *)(*pcVar1)();
      return pFVar6;
    }
    uVar4 = local_res18[0];
    fVar13 = *(float *)((this->AuthoredSyncMarkers).AllocatorInstance.Data + lVar10 * 0xc + 8);
    uVar5 = uVar11;
    if ((int)local_res18[0] < (this->AuthoredSyncMarkers).ArrayNum) {
      uVar5 = ~local_res18[0] >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FMarkerSyncAnimPosition *)(*pcVar1)();
      return pFVar6;
    }
    FVar9 = *(FName *)((this->AuthoredSyncMarkers).AllocatorInstance.Data +
                      (longlong)(int)uVar4 * 0xc);
    if ((pUVar2 != (UMirrorDataTable *)0x0) &&
       (pFVar7 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                         *)&pUVar2->SyncToMirrorSyncMap,FVar9), pFVar7 != (FName *)0x0)) {
      FVar9 = *pFVar7;
    }
    __return_storage_ptr__->PreviousMarkerName = FVar9;
  }
  if (local_res20[0] == 0xffffffff) {
LAB_1474db8cc:
    fVar14 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
  }
  else {
    if (((int)local_res20[0] < 0) || ((this->AuthoredSyncMarkers).ArrayNum <= (int)local_res20[0]))
    {
      local_60 = local_res18;
      local_58 = local_res20;
      local_50 = &param_3;
      local_68 = this;
      bVar3 = `UAnimSequence::GetMarkerSyncPositionFromMarkerIndicies'::__l8::<lambda_2>::operator()
                        (&local_68);
      if (!bVar3) goto LAB_1474db8cc;
    }
    lVar10 = (longlong)(int)local_res20[0];
    uVar4 = uVar11;
    if ((int)local_res20[0] < (this->AuthoredSyncMarkers).ArrayNum) {
      uVar4 = ~local_res20[0] >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FMarkerSyncAnimPosition *)(*pcVar1)();
      return pFVar6;
    }
    lVar8 = (longlong)(int)local_res20[0];
    fVar14 = *(float *)((this->AuthoredSyncMarkers).AllocatorInstance.Data + lVar10 * 0xc + 8);
    if ((int)local_res20[0] < (this->AuthoredSyncMarkers).ArrayNum) {
      uVar11 = ~local_res20[0] >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FMarkerSyncAnimPosition *)(*pcVar1)();
      return pFVar6;
    }
    FVar9 = *(FName *)((this->AuthoredSyncMarkers).AllocatorInstance.Data + lVar8 * 0xc);
    if ((pUVar2 != (UMirrorDataTable *)0x0) &&
       (pFVar7 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                         *)&pUVar2->SyncToMirrorSyncMap,FVar9), pFVar7 != (FName *)0x0)) {
      FVar9 = *pFVar7;
    }
    __return_storage_ptr__->NextMarkerName = FVar9;
  }
  if (fVar13 <= fVar14) {
    if (param_3 < fVar13) {
      fVar12 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
      param_3 = param_3 + fVar12;
    }
  }
  else {
    if (param_3 < fVar13) {
      fVar12 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
      fVar13 = fVar13 - fVar12;
    }
    if (fVar14 < param_3) {
      fVar12 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
      fVar14 = fVar14 + fVar12;
    }
  }
  if (fVar13 == fVar14) {
    fVar12 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
    fVar13 = fVar13 - fVar12;
  }
  if ((fVar14 <= fVar13) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextTime > PrevTime",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                         ,0x1084,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FMarkerSyncAnimPosition *)(*pcVar1)();
    return pFVar6;
  }
  __return_storage_ptr__->PositionBetweenMarkers = (param_3 - fVar13) / (fVar14 - fVar13);
  return __return_storage_ptr__;
}

// GetNextMatchingPosFromMarkerSyncPos @ 1474dbc70

float __thiscall
UAnimSequence::GetNextMatchingPosFromMarkerSyncPos
          (UAnimSequence *this,FMarkerSyncAnimPosition *param_1,float *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FName *pFVar6;
  longlong lVar7;
  float fVar8;
  
  if (((param_1->PreviousMarkerName != (FName)0x0) && (param_1->NextMarkerName != (FName)0x0)) &&
     (uVar5 = 0, 0 < (this->AuthoredSyncMarkers).ArrayNum + -1)) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->AuthoredSyncMarkers).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        fVar8 = (float)(*pcVar2)();
        return fVar8;
      }
      uVar5 = uVar5 + 1;
      pFVar6 = (FName *)((this->AuthoredSyncMarkers).AllocatorInstance.Data + lVar7);
      uVar4 = 0;
      if ((int)uVar5 < (this->AuthoredSyncMarkers).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        fVar8 = (float)(*pcVar2)();
        return fVar8;
      }
      pFVar1 = (this->AuthoredSyncMarkers).AllocatorInstance.Data;
      fVar8 = *(float *)(pFVar1 + lVar7 + 0x14);
      if ((((*param_2 <= fVar8) && (*pFVar6 == param_1->PreviousMarkerName)) &&
          (*(FName *)(pFVar1 + lVar7 + 0xc) == param_1->NextMarkerName)) &&
         (fVar8 = (fVar8 - (float)pFVar6[1].ComparisonIndex.Value) * param_1->PositionBetweenMarkers
                  + (float)pFVar6[1].ComparisonIndex.Value, *param_2 <= fVar8)) {
        return fVar8;
      }
      lVar7 = lVar7 + 0xc;
    } while ((int)uVar5 < (this->AuthoredSyncMarkers).ArrayNum + -1);
  }
  return *param_2;
}

// GetNumberOfSampledKeys @ 1474dc570

int __thiscall UAnimSequence::GetNumberOfSampledKeys(UAnimSequence *this)

{
  ICompressedAnimData *pIVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  undefined1 in_XMM2 [16];
  undefined1 auVar5 [16];
  double dVar6;
  float fVar7;
  
  pIVar1 = (this->CompressedData).CompressedDataStructure.Ptr;
  if (pIVar1 == (ICompressedAnimData *)0x0) {
    fVar3 = (float)(**(code **)(this->_padding_ + 0x2c0))();
    dVar6 = ((double)(this->PlatformTargetFrameRate).Default.Numerator * (double)fVar3) /
            (double)(this->PlatformTargetFrameRate).Default.Denominator;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar6;
    auVar5 = roundpd(in_XMM2,auVar5,1);
    dVar4 = auVar5._0_8_;
    dVar6 = dVar6 - dVar4;
    if (__real_41dfffffffc00000 <= dVar4) {
      dVar4 = __real_41dfffffffc00000;
    }
    if (dVar4 <= __real_c1e0000000000000) {
      dVar4 = __real_c1e0000000000000;
    }
    iVar2 = (int)dVar6;
    fVar7 = (float)dVar6 - (float)iVar2;
    fVar3 = fVar7;
    if ((0.0 < fVar7) && (fVar3 = ::FFrameTime::MaxSubframe, fVar7 <= ::FFrameTime::MaxSubframe)) {
      fVar3 = fVar7;
    }
    fVar7 = ::FFrameTime::MaxSubframe;
    if (fVar3 <= ::FFrameTime::MaxSubframe) {
      fVar7 = fVar3;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    iVar2 = (int)dVar4 + iVar2;
    if (__real_3f000000 <= fVar7) {
      iVar2 = iVar2 + 1;
    }
    return iVar2 + 1;
  }
  return pIVar1->CompressedNumberOfKeys;
}

// GetPlatformCompressedData @ 1474dc910

FCompressedAnimSequence * __thiscall
UAnimSequence::GetPlatformCompressedData(UAnimSequence *this,FAnimExtractContext *param_1)

{
  return &this->CompressedData;
}

// GetPlatformCompressedData @ 1474dc920

FCompressedAnimSequence * __thiscall
UAnimSequence::GetPlatformCompressedData(UAnimSequence *this,ITargetPlatform *param_1)

{
  return &this->CompressedData;
}

// GetPlatformCompressedData @ 1474dc930

FCompressedAnimSequence * __thiscall
UAnimSequence::GetPlatformCompressedData(UAnimSequence *this,FAnimExtractContext *param_1)

{
  return &this->CompressedData;
}

// GetPreloadDependencies @ 1474dc940

void __thiscall
UAnimSequence::GetPreloadDependencies
          (UAnimSequence *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TObjectPtr<UAnimCurveCompressionSettings>_u_0 TVar1;
  TObjectPtr<UAnimCurveCompressionSettings>_u_0 *pTVar2;
  TObjectPtr<UAnimBoneCompressionSettings>_u_0 TVar3;
  TObjectPtr<UAnimBoneCompressionSettings>_u_0 *pTVar4;
  TObjectPtr<UVariableFrameStrippingSettings>_u_0 *pTVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  TObjectPtr<UAnimCurveCompressionSettings>_u_0 local_28;
  TObjectPtr<UAnimBoneCompressionSettings>_u_0 local_20;
  TObjectPtr<UVariableFrameStrippingSettings>_u_0 local_18 [2];
  
  UObject::GetPreloadDependencies((UObject *)this,param_1);
  TVar1 = (TObjectPtr<UAnimCurveCompressionSettings>_u_0)
          (this->CurveCompressionSettings).field0_0x0.DebugPtr;
  if (TVar1.DebugPtr != (UAnimCurveCompressionSettings *)0x0) {
    pTVar2 = (TObjectPtr<UAnimCurveCompressionSettings>_u_0 *)(param_1->AllocatorInstance).Data;
    local_28 = TVar1;
    if (((pTVar2 <= &local_28) && (&local_28 < pTVar2 + param_1->ArrayMax)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == param_1->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar8 + 1;
    ((TObjectPtr<UAnimCurveCompressionSettings>_u_0 *)
    ((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8))->DebugPtr =
         (UAnimCurveCompressionSettings *)local_28;
  }
  piVar9 = &param_1->ArrayMax;
  TVar3 = (TObjectPtr<UAnimBoneCompressionSettings>_u_0)
          (this->BoneCompressionSettings).field0_0x0.DebugPtr;
  if (TVar3.DebugPtr != (UAnimBoneCompressionSettings *)0x0) {
    pTVar4 = (TObjectPtr<UAnimBoneCompressionSettings>_u_0 *)(param_1->AllocatorInstance).Data;
    local_20 = TVar3;
    if (((pTVar4 <= &local_20) && (&local_20 < pTVar4 + *piVar9)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    piVar10 = &param_1->ArrayNum;
    iVar8 = *piVar10;
    if (iVar8 == *piVar9) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,piVar9);
      *piVar10 = iVar8;
    }
    *piVar10 = iVar8 + 1;
    ((TObjectPtr<UAnimBoneCompressionSettings>_u_0 *)
    ((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8))->DebugPtr =
         (UAnimBoneCompressionSettings *)local_20;
  }
  piVar9 = &param_1->ArrayMax;
  local_18[0] = (TObjectPtr<UVariableFrameStrippingSettings>_u_0)
                (this->VariableFrameStrippingSettings).field0_0x0.DebugPtr;
  if (local_18[0].DebugPtr != (UVariableFrameStrippingSettings *)0x0) {
    pTVar5 = (TObjectPtr<UVariableFrameStrippingSettings>_u_0 *)(param_1->AllocatorInstance).Data;
    if (((pTVar5 <= local_18) && (local_18 < pTVar5 + *piVar9)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar9) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,piVar9);
    }
    param_1->ArrayNum = iVar8 + 1;
    ((TObjectPtr<UVariableFrameStrippingSettings>_u_0 *)
    ((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8))->DebugPtr =
         (UVariableFrameStrippingSettings *)local_18[0];
  }
  return;
}

// GetPrevMatchingPosFromMarkerSyncPos @ 1474dcbc0

float __thiscall
UAnimSequence::GetPrevMatchingPosFromMarkerSyncPos
          (UAnimSequence *this,FMarkerSyncAnimPosition *param_1,float *param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  
  if (((param_1->PreviousMarkerName != (FName)0x0) && (param_1->NextMarkerName != (FName)0x0)) &&
     (uVar1 = (this->AuthoredSyncMarkers).ArrayNum, 1 < (int)uVar1)) {
    uVar8 = uVar1 - 2;
    lVar7 = (longlong)(int)uVar8 * 0xc;
    do {
      uVar1 = uVar1 - 1;
      uVar6 = 0;
      if ((int)uVar8 < (this->AuthoredSyncMarkers).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        fVar9 = (float)(*pcVar4)();
        return fVar9;
      }
      pFVar2 = (this->AuthoredSyncMarkers).AllocatorInstance.Data;
      uVar6 = 0;
      if ((int)uVar1 < (this->AuthoredSyncMarkers).ArrayNum) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        fVar9 = (float)(*pcVar4)();
        return fVar9;
      }
      fVar9 = *(float *)(pFVar2 + lVar7 + 8);
      pFVar3 = (this->AuthoredSyncMarkers).AllocatorInstance.Data;
      if ((((fVar9 <= *param_2) && (*(FName *)(pFVar2 + lVar7) == param_1->PreviousMarkerName)) &&
          (*(FName *)(pFVar3 + lVar7 + 0xc) == param_1->NextMarkerName)) &&
         (fVar9 = (*(float *)(pFVar3 + lVar7 + 0x14) - fVar9) * param_1->PositionBetweenMarkers +
                  fVar9, fVar9 <= *param_2)) {
        return fVar9;
      }
      lVar7 = lVar7 + -0xc;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  return *param_2;
}

// GetPrivateStaticClass @ 1474dd910

UClass * __cdecl UAnimSequence::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSequence.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimSequence",
               &Z_Registration_Info_UClass_UAnimSequence.InnerSingleton,
               StaticRegisterNativesUAnimSequence,0x1f0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimSequence>,InternalVTableHelperCtorCaller<UAnimSequence>,
               local_res8,UAnimSequenceBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSequence.InnerSingleton;
}

// GetRetargetTransforms @ 1474de260

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
UAnimSequence::GetRetargetTransforms(UAnimSequence *this)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  
  if ((this->RetargetSource != (FName)0x0) ||
     (pTVar1 = &this->RetargetSourceAssetReferencePose,
     (this->RetargetSourceAssetReferencePose).ArrayNum < 1)) {
    if ((USkeleton *)this->_padding_ != (USkeleton *)0x0) {
      pTVar1 = USkeleton::GetRefLocalPoses((USkeleton *)this->_padding_,this->RetargetSource);
      return pTVar1;
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        atexit(`UAnimSequence::GetRetargetTransforms'::__l12::
               _dynamic_atexit_destructor_for__EmptyTransformArray__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    pTVar1 = &EmptyTransformArray;
  }
  return pTVar1;
}

// GetRetargetTransformsSourceName @ 1474de300

FName __thiscall UAnimSequence::GetRetargetTransformsSourceName(UAnimSequence *this)

{
  UPackage *pUVar1;
  FName in_RDX;
  
  if ((this->RetargetSource == (FName)0x0) &&
     (0 < (this->RetargetSourceAssetReferencePose).ArrayNum)) {
    pUVar1 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
    *(longlong *)in_RDX = pUVar1->_padding_;
    return in_RDX;
  }
  *(FName *)in_RDX = this->RetargetSource;
  return in_RDX;
}

// GetSamplingFrameRate @ 1474de530

FFrameRate __thiscall UAnimSequence::GetSamplingFrameRate(UAnimSequence *this)

{
  FFrameRate in_RDX;
  
  *(FFrameRate *)in_RDX = (this->PlatformTargetFrameRate).Default;
  return in_RDX;
}

// GetUniqueMarkerNames @ 1474e0480

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UAnimSequence::GetUniqueMarkerNames(UAnimSequence *this)

{
  return &this->UniqueMarkerNames;
}

// HandleAssetPlayerTickedInternal @ 1474e0610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UAnimSequence::HandleAssetPlayerTickedInternal
          (UAnimSequence *this,FAnimAssetTickContext *param_1,float param_2,float param_3,
          FAnimTickRecord *param_4,FAnimNotifyQueue *param_5)

{
  TTransform<double> *pTVar1;
  undefined1 auStackY_138 [32];
  FAnimExtractContext local_108;
  undefined2 local_af;
  undefined1 local_ad;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  UAnimSequenceBase::HandleAssetPlayerTickedInternal
            ((UAnimSequenceBase *)this,param_1,param_2,param_3,param_4,param_5);
  if (this->bEnableRootMotion != false) {
    local_108.DeltaTimeRecord._9_2_ = local_af;
    local_108.DeltaTimeRecord._11_1_ = local_ad;
    local_108.bLooping = param_4->bLooping;
    local_108.CurrentTime = (double)param_2;
    local_108.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.PoseCurves.ArrayNum = 0;
    local_108.PoseCurves.ArrayMax = 0;
    local_108.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.BonesRequired.ArrayNum = 0;
    local_108.BonesRequired.ArrayMax = 0;
    local_108.InterpolationOverride.bIsSet = false;
    local_108.bExtractRootMotion = true;
    local_108.DeltaTimeRecord.Previous = 0.0;
    local_108.DeltaTimeRecord.bPreviousIsValid = false;
    local_108.DeltaTimeRecord.Delta = param_3;
    pTVar1 = ExtractRootMotion(this,&local_a8,&local_108);
    FRootMotionMovementParams::Accumulate(&param_1->RootMotionMovementParams,pTVar1);
    if (local_108.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.BonesRequired.AllocatorInstance.Data);
    }
    if (local_108.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.PoseCurves.AllocatorInstance.Data);
    }
  }
  return;
}

// HasCurveData @ 1474e0f20

bool __thiscall UAnimSequence::HasCurveData(UAnimSequence *this,FName param_1,bool param_2)

{
  FName *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  FName *pFVar8;
  undefined1 local_res18 [16];
  
  if (param_2) {
    bVar4 = true;
    cVar7 = (**(code **)(this->_padding_ + 0x3e0))();
    if (cVar7 == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bForceUseRawData || CanEvaluateRawAnimationData()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                         ,0xccd,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
  }
  else {
    bVar4 = FCompressedAnimSequence::IsCurveDataValid(&this->CompressedData,this,false);
    bVar4 = !bVar4;
  }
  cVar7 = (**(code **)(this->_padding_ + 0x3e0))(this);
  if ((cVar7 == '\0') || (!bVar4)) {
    bVar4 = FCompressedAnimSequence::IsCurveDataValid(&this->CompressedData,this,false);
    if ((bVar4) &&
       ((this->CompressedData).CurveCompressionCodec.field0_0x0.DebugPtr !=
        (UAnimCurveCompressionCodec *)0x0)) {
      iVar2 = (this->CompressedData).IndexedCurveNames.ArrayNum;
      pFVar8 = (FName *)(this->CompressedData).IndexedCurveNames.AllocatorInstance.Data;
      pFVar1 = (FName *)((longlong)pFVar8 + (longlong)iVar2 * 0xc);
      while( true ) {
        if ((this->CompressedData).IndexedCurveNames.ArrayNum != iVar2) {
          `TCheckedPointerIterator<FAnimCompressedCurveIndexedName_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res18);
        }
        if (pFVar8 == pFVar1) goto LAB_1474e101a;
        if (*pFVar8 == param_1) break;
        pFVar8 = (FName *)&pFVar8[1].Number;
      }
      bVar4 = true;
    }
    else {
LAB_1474e101a:
      bVar4 = false;
    }
  }
  else {
    bVar4 = UAnimSequenceBase::HasCurveData((UAnimSequenceBase *)this,param_1,param_2);
  }
  return bVar4;
}

// HasRootMotion @ 1474e1100

bool __thiscall UAnimSequence::HasRootMotion(UAnimSequence *this)

{
  return this->bEnableRootMotion;
}

// IsBoneCompressedDataValid @ 1474e9cd0

bool __thiscall UAnimSequence::IsBoneCompressedDataValid(UAnimSequence *this)

{
  bool bVar1;
  
  bVar1 = FCompressedAnimSequence::IsBoneDataValid(&this->CompressedData,this,false);
  return bVar1;
}

// IsCompressedDataValid @ 1474e9cf0

bool __thiscall UAnimSequence::IsCompressedDataValid(UAnimSequence *this)

{
  bool bVar1;
  
  bVar1 = FCompressedAnimSequence::IsValid(&this->CompressedData,this,false);
  return bVar1;
}

// IsCurveCompressedDataValid @ 1474e9d10

bool __thiscall UAnimSequence::IsCurveCompressedDataValid(UAnimSequence *this)

{
  bool bVar1;
  
  bVar1 = FCompressedAnimSequence::IsCurveDataValid(&this->CompressedData,this,false);
  return bVar1;
}

// IsReadyForFinishDestroy @ 1474e9f10

bool __thiscall UAnimSequence::IsReadyForFinishDestroy(UAnimSequence *this)

{
  return true;
}

// IsValidAdditive @ 1474ea400

bool __thiscall UAnimSequence::IsValidAdditive(UAnimSequence *this)

{
  uchar uVar1;
  
  if ((this->AdditiveAnimType).Value != '\0') {
    uVar1 = (this->RefPoseType).Value;
    if (uVar1 == '\x01') {
      return true;
    }
    if (uVar1 == '\x02') {
      if (GStripAdditiveRefPose != 0) {
        return true;
      }
      if ((this->RefPoseSeq).field0_0x0.DebugPtr != (UAnimSequence *)0x0) {
        return true;
      }
    }
    else if (uVar1 == '\x03') {
      if (((GStripAdditiveRefPose != 0) ||
          ((this->RefPoseSeq).field0_0x0.DebugPtr != (UAnimSequence *)0x0)) &&
         (-1 < this->RefFrameIndex)) {
        return true;
      }
    }
    else if (uVar1 == '\x04') {
      return (bool)((byte)((uint)this->RefFrameIndex >> 0x1f) ^ 1);
    }
  }
  return false;
}

// PostInitProperties @ 1474f1140

void __thiscall UAnimSequence::PostInitProperties(UAnimSequence *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  UAnimSequence *pUStack_28;
  code *pcStack_20;
  undefined1 *puStack_18;
  
  puVar5 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_18 = auStackX_8;
  pcStack_20 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_20,puVar5);
  FVar1 = (FTlsAutoCleanup)(pFVar6 + 0xb);
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  pUStack_28 = this;
  if (((ulonglong)FVar7 <= &pUStack_28) &&
     (&pUStack_28 <
      (UAnimSequence **)((longlong)FVar7 + (longlong)*(int *)&pFVar6[0x1c].field_0x4 * 8))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(pFVar6 + 0x1c);
  if (iVar4 == *(int *)&pFVar6[0x1c].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                      (0x808,(ForElementType<UObject_*> *)FVar1,(int *)&pFVar6[0x1c].field_0x4);
  }
  *(int *)(pFVar6 + 0x1c) = iVar4 + 1;
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  *(UAnimSequence **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// PostLoad @ 1474f1810

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAnimSequence::PostLoad(UAnimSequence *this)

{
  uchar uVar1;
  int iVar2;
  UAnimSequence *pUVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  UPackage *pUVar9;
  FString *pFVar10;
  FAnimLinkableElement *this_00;
  FAnimLinkableElement *pFVar11;
  float fVar12;
  float fVar13;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38 [3];
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  UAnimSequenceBase::PostLoad((UAnimSequenceBase *)this);
  cVar7 = (**(code **)(this->_padding_ + 0x2d0))(this);
  if (((cVar7 != '\0') &&
      (pUVar3 = (this->RefPoseSeq).field0_0x0.DebugPtr, pUVar3 != (UAnimSequence *)0x0)) &&
     (pUVar3->_padding_ == 0)) {
    if (2 < (byte)LogAnimation._0_1_) {
      local_res8 = (FName)pUVar3->_padding_;
      ::FName::ToString(&local_res8,&local_48);
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_58);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    (this->RefPoseSeq).field0_0x0.DebugPtr = (UAnimSequence *)0x0;
  }
  UAnimSequenceBase::SortNotifies((UAnimSequenceBase *)this);
  pUVar9 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
  if ((((uint)pUVar9->PackageFlagsPrivate & 0x80000200) != 0) &&
     (lVar4 = this->_padding_, lVar4 != 0)) {
    lVar5 = *(longlong *)(lVar4 + 0x178);
    this->_padding_ = *(longlong *)(lVar4 + 0x170);
    this->_padding_ = lVar5;
    bVar8 = FCompressedAnimSequence::IsValid(&this->CompressedData,this,false);
    if (!bVar8) {
      if ((UObjectBaseUtility *)this->_padding_ == (UObjectBaseUtility *)0x0) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_58,(UObject *)0x0,None);
        bVar6 = false;
        bVar8 = true;
      }
      else {
        pFVar10 = UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)this->_padding_,local_38,(UObject *)0x0,None);
        if ((pFVar10->Data).ArrayNum == 0) {
          bVar6 = true;
          bVar8 = false;
        }
        else {
          bVar6 = true;
          bVar8 = false;
        }
      }
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_48);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if ((bVar8) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if ((bVar6) && (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
      }
    }
  }
  iVar2 = (int)this->_padding_;
  this_00 = (FAnimLinkableElement *)this->_padding_;
  pFVar11 = (FAnimLinkableElement *)((longlong)iVar2 * 0xb8 + (longlong)this_00);
  do {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<FAnimNotifyEvent,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (this_00 == pFVar11) {
      return;
    }
    uVar1 = (this_00->CachedLinkMethod).Value;
    if (uVar1 == '\0') {
LAB_1474f1aa2:
      fVar13 = this_00->LinkValue;
    }
    else if (uVar1 == '\x01') {
      fVar13 = this_00->SegmentBeginTime + this_00->LinkValue;
    }
    else {
      if (uVar1 != '\x02') goto LAB_1474f1aa2;
      fVar13 = this_00->SegmentLength * this_00->LinkValue + this_00->SegmentBeginTime;
    }
    FAnimLinkableElement::Link(this_00,(UAnimSequenceBase *)this,fVar13,0);
    fVar13 = *(float *)&this_00[1].LinkedSequence.field0_0x0;
    if (fVar13 != 0.0) {
      uVar1 = (this_00->CachedLinkMethod).Value;
      if (uVar1 == '\0') {
LAB_1474f1af0:
        fVar12 = this_00->LinkValue;
      }
      else if (uVar1 == '\x01') {
        fVar12 = this_00->SegmentBeginTime + this_00->LinkValue;
      }
      else {
        if (uVar1 != '\x02') goto LAB_1474f1af0;
        fVar12 = this_00->SegmentLength * this_00->LinkValue + this_00->SegmentBeginTime;
      }
      FAnimLinkableElement::Link(this_00 + 2,(UAnimSequenceBase *)this,fVar13 + fVar12,0);
    }
    this_00 = (FAnimLinkableElement *)&this_00[3].LinkedSequence;
  } while( true );
}

// PreSave @ 1474f1bd0

void __thiscall UAnimSequence::PreSave(UAnimSequence *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// RefreshCacheData @ 1474f30f0

void __thiscall UAnimSequence::RefreshCacheData(UAnimSequence *this)

{
  SortSyncMarkers(this);
  UAnimSequenceBase::RefreshCacheData((UAnimSequenceBase *)this);
  return;
}

// RefreshSyncMarkerDataFromAuthored @ 1474f3570

void __thiscall UAnimSequence::RefreshSyncMarkerDataFromAuthored(UAnimSequence *this)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  FName *pFVar2;
  uint uVar3;
  int iVar4;
  FName *pFVar5;
  undefined1 local_res8 [8];
  
  this_00 = &this->UniqueMarkerNames;
  piVar1 = &(this->UniqueMarkerNames).ArrayMax;
  (this->UniqueMarkerNames).ArrayNum = 0;
  if ((this->AuthoredSyncMarkers).ArrayNum < 1) {
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&this_00->AllocatorInstance,0,piVar1);
      return;
    }
  }
  else {
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&this_00->AllocatorInstance,0,piVar1);
    }
    uVar3 = (this->AuthoredSyncMarkers).ArrayNum;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if (*piVar1 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar3,&this_00->AllocatorInstance,(this->UniqueMarkerNames).ArrayNum,piVar1);
    }
    iVar4 = (this->AuthoredSyncMarkers).ArrayNum;
    pFVar5 = (FName *)(this->AuthoredSyncMarkers).AllocatorInstance.Data;
    pFVar2 = (FName *)((longlong)pFVar5 + (longlong)iVar4 * 0xc);
    while( true ) {
      if ((this->AuthoredSyncMarkers).ArrayNum != iVar4) {
        `TCheckedPointerIterator<FAnimSyncMarker,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar5 == pFVar2) break;
      TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(this_00,pFVar5);
      pFVar5 = (FName *)&pFVar5[1].Number;
    }
  }
  return;
}

// RetargetBoneTransform @ 1474f7010

void __thiscall
UAnimSequence::RetargetBoneTransform
          (UAnimSequence *this,TTransform<double> *param_1,int param_2,
          FCompactPoseBoneIndex *param_3,FBoneContainer *param_4,bool param_5)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  UPackage *pUVar2;
  FName local_res8;
  
  pTVar1 = GetRetargetTransforms(this);
  local_res8 = this->RetargetSource;
  if ((local_res8 == (FName)0x0) && (0 < (this->RetargetSourceAssetReferencePose).ArrayNum)) {
    pUVar2 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
    local_res8 = (FName)pUVar2->_padding_;
  }
  FAnimationRuntime::RetargetBoneTransform
            ((USkeleton *)this->_padding_,&local_res8,pTVar1,param_1,param_2,param_3,param_4,param_5
            );
  return;
}

// Serialize @ 1474f74a0

void __thiscall UAnimSequence::Serialize(UAnimSequence *this,FArchive *param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  UObject *pUVar6;
  ulonglong *puVar7;
  code *pcVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  UClass *pUVar13;
  FString *pFVar14;
  UAnimSequence *pUVar15;
  wchar_t *pwVar16;
  UAnimSequence *pUVar17;
  wchar_t *pwVar18;
  FFloatCurve *pFVar19;
  bool bVar20;
  FStripDataFlags local_res10 [4];
  FLLMScope local_res18 [2];
  FLLMScope local_res20 [2];
  uint local_138;
  uint local_134;
  int local_130;
  FFloatCurve *local_128;
  uint local_120;
  FLLMScope local_11c;
  ForAnyElementType local_118;
  int local_110 [2];
  FString local_108;
  FString local_f8;
  FMemScope local_e8;
  FMemScope local_e0;
  FMemScope local_d8;
  ForAnyElementType local_d0 [2];
  FGuid local_c0;
  FGuid local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  FLLMScope::FLLMScope(&local_11c,Animation,false,None,Default,true);
  FMemScope::FMemScope(&local_d8,Animation,true);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFrameworkObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))();
  pFVar19 = (FFloatCurve *)0x0;
  local_128 = (FFloatCurve *)0x0;
  iVar12 = 0;
  local_130 = 0;
  if ((*(longlong *)&param_1->field_0x68 != 0) &&
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)) {
    plVar4 = &this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    iVar12 = 0;
    if (local_d0 != (ForAnyElementType *)plVar4) {
      DestructItems<FFloatCurve,int>((FFloatCurve *)0x0,0);
      local_128 = (FFloatCurve *)*plVar4;
      *plVar4 = 0;
      local_130 = (int)this->_padding_;
      iVar12 = *piVar1;
      *(undefined4 *)&this->_padding_ = 0;
      *piVar1 = 0;
    }
    pFVar19 = local_128;
    iVar11 = (int)this->_padding_;
    if (*piVar1 < 0) {
      DestructItems<FFloatCurve,int>((FFloatCurve *)*plVar4,iVar11);
      iVar11 = *piVar1;
      *(undefined4 *)&this->_padding_ = 0;
      if (iVar11 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x90,8,0,(ForAnyElementType *)plVar4,0,piVar1);
      }
    }
    else {
      DestructItems<FFloatCurve,int>((FFloatCurve *)*plVar4,iVar11);
      *(undefined4 *)&this->_padding_ = 0;
    }
  }
  pUVar15 = (UAnimSequence *)0x0;
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    UAnimSequenceBase::Serialize((UAnimSequenceBase *)this,param_1);
  }
  else {
    pUVar17 = pUVar15;
    if ((((param_1->field_0x28 & 4) != 0) && (GStripAdditiveRefPose != 0)) &&
       (iVar11 = (**(code **)(this->_padding_ + 0x3b8))(this), iVar11 != 0)) {
      pUVar17 = (this->RefPoseSeq).field0_0x0.DebugPtr;
      (this->RefPoseSeq).field0_0x0.DebugPtr = (UAnimSequence *)0x0;
    }
    UAnimSequenceBase::Serialize((UAnimSequenceBase *)this,param_1);
    if (pUVar17 != (UAnimSequence *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar17);
      }
      (this->RefPoseSeq).field0_0x0.DebugPtr = pUVar17;
    }
  }
  if (((*(longlong *)&param_1->field_0x68 != 0) &&
      (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)) &&
     (plVar4 = &this->_padding_, (ForAnyElementType *)plVar4 != local_d0)) {
    DestructItems<FFloatCurve,int>((FFloatCurve *)*plVar4,(int)this->_padding_);
    if ((void *)*plVar4 != (void *)0x0) {
      FMemory::Free((void *)*plVar4);
    }
    *plVar4 = (longlong)pFVar19;
    *(int *)&this->_padding_ = local_130;
    *(int *)((longlong)&this->_padding_ + 4) = iVar12;
    local_130 = 0;
    local_128 = (FFloatCurve *)0x0;
  }
  FStripDataFlags::FStripDataFlags(local_res10,param_1,'\0',&GOldestLoadablePackageFileUEVersion);
  iVar12 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFrameworkObjectVersion::GUID);
  if (iVar12 < 5) {
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_138,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_138);
      }
    }
    else {
      local_138 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    local_118.Data = (FScriptContainerElement *)0x0;
    local_110[0] = 0;
    local_110[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_138,&local_118,local_110,local_110 + 1);
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_118.Data,(longlong)(int)local_138);
    if (local_118.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data);
    }
    goto LAB_1474f7cdb;
  }
  lVar5 = *(longlong *)&param_1->field_0x68;
  if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0x10) == 0)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  uVar3 = *(uint *)&param_1->field_0x34;
  if (bVar10) {
    if (lVar5 != 0) {
      pUVar15 = *(UAnimSequence **)(lVar5 + 8);
    }
    cVar9 = (**(code **)(pUVar15->_padding_ + 0x170))(&pUVar15->_padding_);
    if (cVar9 != '\0') goto LAB_1474f77d1;
    bVar20 = true;
  }
  else {
LAB_1474f77d1:
    bVar20 = false;
  }
  bVar2 = param_1->field_0x2b;
  if (this->StripAnimDataOnDedicatedServer == UseProjectSetting) {
    pUVar13 = Z_Construct_UClass_UAnimationSettings_NoRegister();
    if ((pUVar13->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar13);
    }
    pUVar6 = (pUVar13->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar6 == (UObject *)0x0) {
      pFVar14 = GetTypeName<UAnimationSettings>(&local_90);
      if ((pFVar14->Data).ArrayNum == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar18);
    }
    pUVar13 = Z_Construct_UClass_UAnimationSettings_NoRegister();
    iVar12 = (int)pUVar13->_padding_;
    if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar12) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar12 * 8) !=
        &pUVar13->_padding_)) {
      pFVar14 = GetTypeName<UAnimationSettings>(&local_80);
      pwVar18 = L"";
      if ((pFVar14->Data).ArrayNum == 0) {
        pwVar16 = L"";
      }
      else {
        pwVar16 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
      pFVar14 = GetFullNameForCastLogError<UObject>(&local_70,pUVar6);
      if ((pFVar14->Data).ArrayNum != 0) {
        pwVar18 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar18,pwVar16);
    }
    cVar9 = pUVar6[2].field_0x5;
  }
  else {
    cVar9 = this->StripAnimDataOnDedicatedServer == StripAnimDataOnDedicatedServer;
  }
  if ((!bVar10) || (((cVar9 != '\0' && (bVar20)) && (this->bEnableRootMotion == false)))) {
    bVar10 = false;
    if (((uVar3 & 0x401000) != 0) || ((bVar2 & 4) != 0)) goto LAB_1474f785f;
    bVar20 = false;
  }
  else {
    bVar10 = true;
LAB_1474f785f:
    bVar20 = true;
  }
  puVar7 = *(ulonglong **)&param_1->field_0x8;
  piVar1 = (int *)*puVar7 + 1;
  if ((int *)puVar7[1] < piVar1) {
    local_134 = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_134 = (uint)bVar20;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_134);
    if (1 < local_134) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((param_1->field_0x28 & 1) != 0) {
      bVar20 = local_134 != 0;
    }
  }
  else {
    bVar20 = *(int *)*puVar7 != 0;
    *puVar7 = (ulonglong)piVar1;
  }
  if (((bVar10) && (lVar5 = this->_padding_, lVar5 != 0)) && ((param_1->field_0x2b & 1) == 0)) {
    local_60 = *(uint *)(lVar5 + 0x170);
    uStack_5c = *(uint *)(lVar5 + 0x174);
    uStack_58 = *(uint *)(lVar5 + 0x178);
    uStack_54 = *(uint *)(lVar5 + 0x17c);
    local_50 = (uint)this->_padding_;
    uStack_4c = *(uint *)((longlong)&this->_padding_ + 4);
    uStack_48 = (undefined4)this->_padding_;
    uStack_44 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    if (((uStack_4c != uStack_5c ||
         (int)((ulonglong)this->_padding_ >> 0x20) !=
         (int)((ulonglong)*(undefined8 *)(lVar5 + 0x178) >> 0x20)) || local_60 != local_50) ||
        (int)this->_padding_ != (int)*(undefined8 *)(lVar5 + 0x178)) {
      local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.Data.ArrayNum = 0;
      local_f8.Data.ArrayMax = 0;
      local_c0.A = local_60;
      local_c0.B = uStack_5c;
      local_c0.C = uStack_58;
      local_c0.D = uStack_54;
      FGuid::AppendString(&local_c0,&local_f8,HexValuesInBraces);
      local_b0._0_8_ = this->_padding_;
      local_b0._8_8_ = this->_padding_;
      local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.Data.ArrayNum = 0;
      local_108.Data.ArrayMax = 0;
      FGuid::AppendString(&local_b0,&local_108,HexValuesInBraces);
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_a0,(UObject *)0x0,None);
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Ar.IsObjectReferenceCollector() || (GetSkeletonVirtualBoneGuid() == GetSkeleton()->GetVirtualBoneGuid())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                          ,0x2e2,
                          L"Attempting to cook animation \'%s\' containing invalid virtual bone guid! Animation:%s Skeleton:%s"
                         );
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
  }
  if (bVar20 != false) {
    if (((param_1->field_0x28 & 1) == 0) ||
       (iVar12 = FArchiveState::CustomVer
                           ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID),
       0xb6 < iVar12)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FName::FName(&LLMScope_Name2448,L"Animation/SequenceData");
        _Init_thread_footer(&::_TSS0);
      }
      FLLMScope::FLLMScope(local_res20,LLMScope_Name2448,false,None,Default,true);
      FMemScope::FMemScope(&local_e0,&LLMScope_Name2448,true);
      if (((uint)this->_padding_ >> 4 & 1) == 0) {
        if ((((*(longlong *)&param_1->field_0x68 != 0) &&
             (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)) &&
            (bVar10 = FCompressedAnimSequence::IsValid(&this->CompressedData,this,true), !bVar10))
           && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!Ar.IsCooking() || CompressedDataToSerialize.IsValid(this, true)"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                                   ,0x994,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FCompressedAnimSequence::SerializeCompressedData
                  (&this->CompressedData,param_1,false,(UObject *)this,(USkeleton *)this->_padding_,
                   (this->BoneCompressionSettings).field0_0x0.DebugPtr,
                   (this->CurveCompressionSettings).field0_0x0.DebugPtr,true);
      }
      FMemScope::~FMemScope(&local_e0);
      FLLMScope::~FLLMScope(local_res20);
    }
    else {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FName::FName(&LLMScope_Name2420,L"Animation/SequenceData");
        _Init_thread_footer(&::_TSS0);
      }
      FLLMScope::FLLMScope(local_res18,LLMScope_Name2420,false,None,Default,true);
      FMemScope::FMemScope(&local_e8,&LLMScope_Name2420,true);
      if (((uint)this->_padding_ >> 4 & 1) == 0) {
        if ((((param_1->field_0x28 & 1) == 0) && (*(longlong *)&param_1->field_0x68 != 0)) &&
           ((*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0 &&
            ((bVar10 = FCompressedAnimSequence::IsValid(&this->CompressedData,this,true), !bVar10 &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!Ar.IsCooking() || CompressedDataToSerialize.IsValid(this, true)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                                  ,0x988,L""), bVar10)))))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FCompressedAnimSequence::SerializeCompressedData
                  (&this->CompressedData,param_1,false,(UObject *)this,(USkeleton *)this->_padding_,
                   (this->BoneCompressionSettings).field0_0x0.DebugPtr,
                   (this->CurveCompressionSettings).field0_0x0.DebugPtr,true);
      }
      FMemScope::~FMemScope(&local_e8);
      FLLMScope::~FLLMScope(local_res18);
      puVar7 = *(ulonglong **)&param_1->field_0x8;
      if (puVar7[1] < *puVar7 + 4) {
        local_120 = 0;
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_120,4);
        if (1 < local_120) {
          FArchiveState::SetError((FArchiveState *)param_1);
        }
      }
      else {
        *puVar7 = *puVar7 + 4;
      }
    }
  }
LAB_1474f7cdb:
  pFVar19 = local_128;
  DestructItems<FFloatCurve,int>(local_128,local_130);
  if (pFVar19 != (FFloatCurve *)0x0) {
    FMemory::Free(pFVar19);
  }
  FMemScope::~FMemScope(&local_d8);
  FLLMScope::~FLLMScope(&local_11c);
  return;
}

// Serialize @ 1474f7e20

void __thiscall UAnimSequence::Serialize(UAnimSequence *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SerializeCompressedData @ 1474f7e50

void __thiscall
UAnimSequence::SerializeCompressedData
          (UAnimSequence *this,FArchive *param_1,FCompressedAnimSequence *param_2)

{
  code *pcVar1;
  bool bVar2;
  FLLMScope local_res8 [2];
  FMemScope local_res20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name2448,L"Animation/SequenceData");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name2448,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&LLMScope_Name2448,true);
  if ((this->_padding_ & 0x10) == 0) {
    if ((*(longlong *)&param_1->field_0x68 != 0) &&
       (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)) {
      bVar2 = FCompressedAnimSequence::IsValid(param_2,this,true);
      if (!bVar2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Ar.IsCooking() || CompressedDataToSerialize.IsValid(this, true)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                           ,0x994,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    FCompressedAnimSequence::SerializeCompressedData
              (param_2,param_1,false,(UObject *)this,(USkeleton *)this->_padding_,
               (this->BoneCompressionSettings).field0_0x0.DebugPtr,
               (this->CurveCompressionSettings).field0_0x0.DebugPtr,true);
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// SerializeCompressedData @ 1474f7fc0

void __thiscall
UAnimSequence::SerializeCompressedData(UAnimSequence *this,FArchive *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FLLMScope local_res8 [2];
  FMemScope local_res20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name2420,L"Animation/SequenceData");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name2420,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&LLMScope_Name2420,true);
  if ((this->_padding_ & 0x10) == 0) {
    if ((((param_1->field_0x28 & 1) == 0) && (*(longlong *)&param_1->field_0x68 != 0)) &&
       (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)) {
      bVar2 = FCompressedAnimSequence::IsValid(&this->CompressedData,this,true);
      if (!bVar2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Ar.IsCooking() || CompressedDataToSerialize.IsValid(this, true)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                           ,0x988,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    FCompressedAnimSequence::SerializeCompressedData
              (&this->CompressedData,param_1,param_2,(UObject *)this,(USkeleton *)this->_padding_,
               (this->BoneCompressionSettings).field0_0x0.DebugPtr,
               (this->CurveCompressionSettings).field0_0x0.DebugPtr,true);
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ShouldUseRawDataForPoseExtraction @ 1474f9e80

bool __thiscall
UAnimSequence::ShouldUseRawDataForPoseExtraction
          (UAnimSequence *this,FBoneContainer *param_1,FAnimExtractContext *param_2)

{
  bool bVar1;
  
  bVar1 = ShouldUseRawDataForPoseExtraction_Lockless(this,param_2);
  if ((((!bVar1) && (param_1->bDisableRetargeting == false)) && (param_1->bUseRAWData == false)) &&
     (param_1->bUseSourceData == false)) {
    return false;
  }
  return true;
}

// ShouldUseRawDataForPoseExtraction_Lockless @ 1474f9ed0

bool __thiscall
UAnimSequence::ShouldUseRawDataForPoseExtraction_Lockless
          (UAnimSequence *this,FAnimExtractContext *param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = (**(code **)(this->_padding_ + 0x3e0))();
  if ((cVar2 != '\0') &&
     ((lVar1 = this->_padding_, lVar1 == 0 ||
      ((((int)((ulonglong)this->_padding_ >> 0x20) != *(int *)(lVar1 + 0x174) ||
        *(int *)(lVar1 + 0x17c) != (int)((ulonglong)this->_padding_ >> 0x20)) ||
       *(int *)(lVar1 + 0x178) != (int)this->_padding_) ||
       *(int *)(lVar1 + 0x170) != (int)this->_padding_)))) {
    return true;
  }
  return false;
}

// ShouldUseRawDataForPoseExtraction_Lockless @ 1474f9f60

bool __thiscall
UAnimSequence::ShouldUseRawDataForPoseExtraction_Lockless
          (UAnimSequence *this,FBoneContainer *param_1,FAnimExtractContext *param_2)

{
  bool bVar1;
  
  bVar1 = ShouldUseRawDataForPoseExtraction_Lockless(this,param_2);
  if ((((!bVar1) && (param_1->bDisableRetargeting == false)) && (param_1->bUseRAWData == false)) &&
     (param_1->bUseSourceData == false)) {
    return false;
  }
  return true;
}

// SortSyncMarkers @ 1474fa4a0

void __thiscall UAnimSequence::SortSyncMarkers(UAnimSequence *this)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar2;
  FName *pFVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FName *pFVar7;
  float fVar8;
  FIdentityFunctor local_res8 [8];
  
  iVar4 = (this->AuthoredSyncMarkers).ArrayNum;
  pFVar6 = (this->AuthoredSyncMarkers).AllocatorInstance.Data;
  pFVar2 = pFVar6 + (longlong)iVar4 * 0xc;
  while( true ) {
    if ((this->AuthoredSyncMarkers).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FAnimSyncMarker,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar2) break;
    fVar8 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
    if (*(float *)(pFVar6 + 8) <= fVar8) {
      fVar8 = *(float *)(pFVar6 + 8);
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    *(float *)(pFVar6 + 8) = fVar8;
    pFVar6 = pFVar6 + 0xc;
  }
  AlgoImpl::
  IntroSortInternal<FAnimSyncMarker,int,FIdentityFunctor,TDereferenceWrapper<FAnimSyncMarker,TLess<void>_>_>
            ((FAnimSyncMarker *)(this->AuthoredSyncMarkers).AllocatorInstance.Data,
             (this->AuthoredSyncMarkers).ArrayNum,local_res8[0],(TLess<void> *)local_res8);
  this_00 = &this->UniqueMarkerNames;
  iVar4 = (this->UniqueMarkerNames).ArrayMax;
  piVar1 = &(this->UniqueMarkerNames).ArrayMax;
  (this->UniqueMarkerNames).ArrayNum = 0;
  if ((this->AuthoredSyncMarkers).ArrayNum < 1) {
    if (iVar4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&this_00->AllocatorInstance,0,piVar1);
      return;
    }
  }
  else {
    if (iVar4 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&this_00->AllocatorInstance,0,piVar1);
    }
    uVar5 = (this->AuthoredSyncMarkers).ArrayNum;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if (*piVar1 < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar5,&this_00->AllocatorInstance,(this->UniqueMarkerNames).ArrayNum,piVar1);
    }
    iVar4 = (this->AuthoredSyncMarkers).ArrayNum;
    pFVar7 = (FName *)(this->AuthoredSyncMarkers).AllocatorInstance.Data;
    pFVar3 = (FName *)((longlong)pFVar7 + (longlong)iVar4 * 0xc);
    while( true ) {
      if ((this->AuthoredSyncMarkers).ArrayNum != iVar4) {
        `TCheckedPointerIterator<FAnimSyncMarker,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar7 == pFVar3) break;
      TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(this_00,pFVar7);
      pFVar7 = (FName *)&pFVar7[1].Number;
    }
  }
  return;
}

// StaticRegisterNativesUAnimSequence @ 1474faec0

void __cdecl UAnimSequence::StaticRegisterNativesUAnimSequence(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (FClassNativeFunction *)0x0;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UseRawDataForPoseExtraction @ 1475022a0

bool __thiscall
UAnimSequence::UseRawDataForPoseExtraction(UAnimSequence *this,FBoneContainer *param_1)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  
  cVar2 = (**(code **)(this->_padding_ + 0x3e0))();
  if (cVar2 == '\0') {
    return false;
  }
  bVar3 = FCompressedAnimSequence::IsValid(&this->CompressedData,this,false);
  if ((((bVar3) &&
       (lVar1 = this->_padding_,
       (((int)((ulonglong)this->_padding_ >> 0x20) == *(int *)(lVar1 + 0x174) &&
        *(int *)(lVar1 + 0x17c) == (int)((ulonglong)this->_padding_ >> 0x20)) &&
       *(int *)(lVar1 + 0x178) == (int)this->_padding_) &&
       *(int *)(lVar1 + 0x170) == (int)this->_padding_)) && (param_1->bDisableRetargeting == false))
     && ((param_1->bUseRAWData == false && (param_1->bUseSourceData == false)))) {
    return false;
  }
  return true;
}

// ValidateCurrentPosition @ 147502370

void __thiscall
UAnimSequence::ValidateCurrentPosition
          (UAnimSequence *this,FMarkerSyncAnimPosition *param_1,bool param_2,bool param_3,
          float *param_4,FMarkerPair *param_5,FMarkerPair *param_6,UMirrorDataTable *param_7)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  
  if (param_2) {
    bVar2 = MarkerMatchesPosition(this,param_5->MarkerIndex,param_1->PreviousMarkerName,param_7);
    if (!bVar2) {
      AdvanceMarkerForwards
                (&param_5->MarkerIndex,param_1->PreviousMarkerName,param_3,
                 &this->AuthoredSyncMarkers,param_7);
      iVar3 = param_5->MarkerIndex + 1;
      param_6->MarkerIndex = iVar3;
      iVar1 = (this->AuthoredSyncMarkers).ArrayNum;
      if (iVar1 <= iVar3) {
        if (param_3) {
          iVar3 = iVar3 % iVar1;
        }
        else {
          iVar3 = -1;
        }
        param_6->MarkerIndex = iVar3;
      }
    }
    bVar2 = MarkerMatchesPosition(this,param_6->MarkerIndex,param_1->NextMarkerName,param_7);
    if (!bVar2) {
      AdvanceMarkerForwards
                (&param_6->MarkerIndex,param_1->NextMarkerName,param_3,&this->AuthoredSyncMarkers,
                 param_7);
    }
  }
  else {
    bVar2 = MarkerMatchesPosition(this,param_6->MarkerIndex,param_1->NextMarkerName,param_7);
    if (!bVar2) {
      AdvanceMarkerBackwards
                (&param_6->MarkerIndex,param_1->NextMarkerName,param_3,&this->AuthoredSyncMarkers,
                 param_7);
      iVar1 = param_6->MarkerIndex;
      if ((iVar1 == -1) || ((iVar1 == 0 && (param_3)))) {
        iVar1 = (this->AuthoredSyncMarkers).ArrayNum;
      }
      param_5->MarkerIndex = iVar1 + -1;
    }
    bVar2 = MarkerMatchesPosition(this,param_5->MarkerIndex,param_1->PreviousMarkerName,param_7);
    if (!bVar2) {
      AdvanceMarkerBackwards
                (&param_5->MarkerIndex,param_1->PreviousMarkerName,param_3,
                 &this->AuthoredSyncMarkers,param_7);
    }
  }
  if ((param_5->MarkerIndex != -1) && (param_6->MarkerIndex != -1)) {
    fVar4 = GetCurrentTimeFromMarkers(this,param_5,param_6,param_1->PositionBetweenMarkers);
    *param_4 = fVar4;
  }
  return;
}

// operator() @ 150509f00

bool __thiscall
`UAnimSequence::AdvanceMarkerPhaseAsLeader'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1878132758375559907>);
  if (bVar2) {
    UObjectBaseUtility::GetFullName
              (*(UObjectBaseUtility **)((longlong)this + 8),&local_18,(UObject *)0x0,None);
    (**(code **)(**(longlong **)((longlong)this + 8) + 0x2c0))();
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1878132758375559907>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150509fa0;
    }
  }
  bVar2 = false;
LAB_150509fa0:
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

// operator() @ 150509fe0

bool __thiscall
`UAnimSequence::GetMarkerSyncPositionFromMarkerIndicies'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_28 [2];
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_1878132758375559074>);
  if (bVar2) {
    UObjectBaseUtility::GetFullName(*(UObjectBaseUtility **)this,local_28,(UObject *)0x0,None);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1878132758375559074>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15050a0ad;
    }
  }
  bVar2 = false;
LAB_15050a0ad:
  if ((bVar4) && (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15050a510

bool __thiscall `UAnimSequence::ExtractRootMotion'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18;
  FString local_58;
  FString local_48 [3];
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1878132758375561702>);
  if (bVar4) {
    if (*(longlong *)(*(longlong *)this + 0x38) == 0) {
      ::FString::FString(&local_58,L"None");
    }
    else {
      local_res10 = *(FName *)(*(longlong *)(*(longlong *)this + 0x38) + 0x18);
      ::FName::ToString(&local_res10,&local_58);
    }
    local_res18 = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(&local_res18,local_48);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1878132758375561702>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15050a64d;
    }
  }
  bVar4 = false;
LAB_15050a64d:
  if ((bVar2) && (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 15050aa00

bool __thiscall
`UAnimSequence::GetMarkerIndicesForPosition'::__l5::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1878132758375558963>);
  if (bVar2) {
    UObjectBaseUtility::GetFullName
              (*(UObjectBaseUtility **)((longlong)this + 8),&local_18,(UObject *)0x0,None);
    (**(code **)(**(longlong **)((longlong)this + 8) + 0x2c0))();
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1878132758375558963>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15050aaa0;
    }
  }
  bVar2 = false;
LAB_15050aaa0:
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

// operator() @ 15050aae0

bool __thiscall
`UAnimSequence::GetMarkerSyncPositionFromMarkerIndicies'::__l8::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_28 [2];
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_1878132758375559062>);
  if (bVar2) {
    UObjectBaseUtility::GetFullName(*(UObjectBaseUtility **)this,local_28,(UObject *)0x0,None);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1878132758375559062>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15050abad;
    }
  }
  bVar2 = false;
LAB_15050abad:
  if ((bVar4) && (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

