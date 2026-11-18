// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FAnimUpdateRateParameters @ 147928f90

FAnimUpdateRateParameters * __thiscall
FAnimUpdateRateParameters::FAnimUpdateRateParameters(FAnimUpdateRateParameters *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FAnimUpdateRateParameters *pFVar6;
  undefined4 local_18;
  undefined4 local_14 [3];
  
  this->bInterpolateSkippedFrames = '\0';
  this->bSkipEvaluation = '\0';
  this->bSkipUpdate = '\0';
  this->bShouldUseMinLod = '\0';
  this->bShouldUseLodMap = '\0';
  (this->BaseVisibleDistanceFactorThesholds).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->BaseVisibleDistanceFactorThesholds).ArrayNum = 0;
  (this->BaseVisibleDistanceFactorThesholds).ArrayMax = 0;
  *(undefined8 *)&this->LODToFrameSkipMap = 0;
  *(undefined8 *)&(this->LODToFrameSkipMap).field_0x8 = 0;
  *(undefined8 *)&(this->LODToFrameSkipMap).field_0x20 = 0;
  this->AdditionalTime = 0.0;
  this->ThisTickDelta = 0.0;
  this->OptimizeMode = TrailMode;
  this->ShiftBucket = ShiftBucket0;
  this->UpdateRate = 1;
  this->EvaluationRate = 1;
  this->TickedPoseOffestTime = 0.0;
  this->BaseNonRenderedUpdateRate = 4;
  this->MaxEvalRateForInterpolation = 4;
  *(undefined4 *)&(this->LODToFrameSkipMap).field_0x28 = 0;
  *(undefined4 *)&(this->LODToFrameSkipMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->LODToFrameSkipMap).field_0x34 = 0;
  *(undefined4 *)&(this->LODToFrameSkipMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LODToFrameSkipMap).field_0x40 = 0;
  *(undefined4 *)&(this->LODToFrameSkipMap).field_0x48 = 0;
  this->SkippedUpdateFrames = 0;
  this->SkippedEvalFrames = 0;
  pFVar2 = (this->BaseVisibleDistanceFactorThesholds).AllocatorInstance.Data;
  local_18 = 0x3e75c28f;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar2 + (longlong)(this->BaseVisibleDistanceFactorThesholds).ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FAnimUpdateRateParameters *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->BaseVisibleDistanceFactorThesholds).ArrayNum;
  if (iVar5 == (this->BaseVisibleDistanceFactorThesholds).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->BaseVisibleDistanceFactorThesholds).AllocatorInstance,
                       &(this->BaseVisibleDistanceFactorThesholds).ArrayMax);
  }
  (this->BaseVisibleDistanceFactorThesholds).ArrayNum = iVar5 + 1;
  local_14[0] = 0x3df5c28f;
  *(undefined4 *)
   ((this->BaseVisibleDistanceFactorThesholds).AllocatorInstance.Data + (longlong)iVar5 * 4) =
       local_18;
  pFVar2 = (this->BaseVisibleDistanceFactorThesholds).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_14) &&
     ((FScriptContainerElement *)local_14 <
      pFVar2 + (longlong)(this->BaseVisibleDistanceFactorThesholds).ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FAnimUpdateRateParameters *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->BaseVisibleDistanceFactorThesholds).ArrayNum;
  if (iVar5 == (this->BaseVisibleDistanceFactorThesholds).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->BaseVisibleDistanceFactorThesholds).AllocatorInstance,
                       &(this->BaseVisibleDistanceFactorThesholds).ArrayMax);
  }
  (this->BaseVisibleDistanceFactorThesholds).ArrayNum = iVar5 + 1;
  *(undefined4 *)
   ((this->BaseVisibleDistanceFactorThesholds).AllocatorInstance.Data + (longlong)iVar5 * 4) =
       local_14[0];
  return this;
}

// GetInterpolationAlpha @ 1479495c0

float __thiscall FAnimUpdateRateParameters::GetInterpolationAlpha(FAnimUpdateRateParameters *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (this->OptimizeMode == TrailMode) {
    fVar3 = __real_3f800000;
    if (__real_3f800000 < (float)this->EvaluationRate) {
      fVar3 = __real_3f800000 / (float)(this->EvaluationRate - this->SkippedEvalFrames);
      if (__real_3f800000 <= fVar3) {
        fVar3 = __real_3f800000;
      }
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
    }
    return fVar3;
  }
  if (this->OptimizeMode == LookAheadMode) {
    fVar3 = this->ThisTickDelta / (this->ThisTickDelta + this->TickedPoseOffestTime);
    if (__real_3f800000 <= fVar3) {
      fVar3 = __real_3f800000;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    return fVar3;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SkinnedMeshComponent.cpp"
                     ,0x1685,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return 0.0;
}

// GetRootMotionInterp @ 14794d4c0

float __thiscall FAnimUpdateRateParameters::GetRootMotionInterp(FAnimUpdateRateParameters *this)

{
  float fVar1;
  
  if (this->OptimizeMode == LookAheadMode) {
    fVar1 = this->ThisTickDelta / (this->ThisTickDelta + this->TickedPoseOffestTime);
    if (__real_3f800000 <= fVar1) {
      fVar1 = __real_3f800000;
    }
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    return fVar1;
  }
  return __real_3f800000;
}

// SetLookAheadMode @ 1479685f0

void __thiscall
FAnimUpdateRateParameters::SetLookAheadMode
          (FAnimUpdateRateParameters *this,float param_1,uchar param_2,float param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = this->TickedPoseOffestTime;
  if (this->OptimizeMode == TrailMode) {
    fVar5 = 0.0;
  }
  bVar2 = this->field_0x2;
  fVar5 = fVar5 - param_1;
  this->ThisTickDelta = param_1;
  this->OptimizeMode = LookAheadMode;
  this->bInterpolateSkippedFrames = '\x01';
  this->TickedPoseOffestTime = fVar5;
  if (fVar5 < 0.0) {
    fVar6 = (float)((uint)fVar5 ^ __xmm_80000000800000008000000080000000);
    if ((float)((uint)fVar5 ^ __xmm_80000000800000008000000080000000) <= param_3) {
      fVar6 = param_3;
    }
    this->AdditionalTime = fVar6;
    this->TickedPoseOffestTime = fVar6 + fVar5;
    if (fVar6 + fVar5 < 0.0) {
      FGenericPlatformMisc::LowLevelOutputDebugStringf
                (L"TPO Time: %.3f | Orig TPO Time: %.3f | DT: %.3f | LookAheadAmount: %.3f\n");
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SkinnedMeshComponent.cpp"
                         ,0x166f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this->bSkipUpdate = '\0';
    this->bSkipEvaluation = '\0';
    return;
  }
  this->AdditionalTime = 0.0;
  this->field_0x2 = bVar2 | 0x19;
  return;
}

// SetTrailMode @ 14796c540

void __thiscall
FAnimUpdateRateParameters::SetTrailMode
          (FAnimUpdateRateParameters *this,float param_1,uchar param_2,int param_3,int param_4,
          bool param_5)

{
  float fVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  byte bVar12;
  int iVar13;
  
  iVar13 = 1;
  if (1 < param_3) {
    iVar13 = param_3;
  }
  this->OptimizeMode = TrailMode;
  this->UpdateRate = iVar13;
  this->ThisTickDelta = param_1;
  iVar11 = param_4 - param_4 % iVar13;
  iVar13 = 1;
  if (1 < iVar11) {
    iVar13 = iVar11;
  }
  this->EvaluationRate = iVar13;
  pTVar4 = FAnimUpdateRateManager::CVarURODisableInterpolation.Ref;
  bVar5 = IsInParallelGameThread();
  if (bVar5) {
LAB_14796c5c2:
    lVar8 = 0;
  }
  else {
    bVar5 = IsInGameThread();
    lVar8 = 4;
    if (bVar5) goto LAB_14796c5c2;
  }
  pTVar3 = FAnimUpdateRateManager::CVarForceInterpolation.Ref;
  iVar13 = 0;
  bVar7 = 0;
  if (*(int *)((longlong)pTVar4->ShadowedValue + lVar8) == 0) {
    if ((!param_5) || (this->MaxEvalRateForInterpolation <= this->EvaluationRate)) {
      bVar5 = IsInParallelGameThread();
      if ((bVar5) || (bVar5 = IsInGameThread(), lVar8 = 4, bVar5)) {
        lVar8 = 0;
      }
      if (*(int *)((longlong)pTVar3->ShadowedValue + lVar8) != 1) goto LAB_14796c600;
    }
    bVar6 = 1;
  }
  else {
LAB_14796c600:
    bVar6 = 0;
  }
  this->bInterpolateSkippedFrames = '\0';
  this->field_0x2 = this->field_0x2 | bVar6;
  bVar6 = this->field_0x2;
  uVar10 = (param_2 + GFrameCounter) % 0xffffffff;
  iVar11 = (int)(uVar10 % (ulonglong)(uint)this->UpdateRate);
  bVar12 = bVar7;
  if (iVar11 != 0) {
    bVar12 = 8;
  }
  if ((int)(uVar10 % (ulonglong)(uint)this->EvaluationRate) != 0) {
    bVar7 = 0x10;
  }
  bVar12 = bVar12 | bVar6 & 0xe7 | bVar7;
  this->field_0x2 = bVar12;
  iVar9 = iVar13;
  if (iVar11 != 0) {
    this->SkippedUpdateFrames = this->SkippedUpdateFrames + 1;
    iVar9 = this->SkippedUpdateFrames;
  }
  this->SkippedUpdateFrames = iVar9;
  if (bVar7 != 0) {
    this->SkippedEvalFrames = this->SkippedEvalFrames + 1;
    iVar13 = this->SkippedEvalFrames;
  }
  this->SkippedEvalFrames = iVar13;
  if ((this->UpdateRate <= iVar9) || (this->EvaluationRate <= iVar13)) {
    bVar12 = bVar6 & 0xe7;
    this->SkippedUpdateFrames = 0;
    this->SkippedEvalFrames = 0;
    this->field_0x2 = bVar12;
  }
  if ((((bVar12 & 0x10) == 0) && ((bVar12 >> 3 & 1) != 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(bSkipEvaluation && bSkipUpdate) || (bSkipEvaluation && !bSkipUpdate) || (!bSkipEvaluation && !bSkipUpdate)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SkinnedMeshComponent.cpp"
                         ,0x1644,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar1 = this->TickedPoseOffestTime;
  this->AdditionalTime = 0.0;
  if (this->bSkipUpdate == '\0') {
    if (fVar1 < 0.0) {
      this->AdditionalTime = (float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000);
      this->TickedPoseOffestTime = 0.0;
    }
  }
  else {
    this->TickedPoseOffestTime = fVar1 - param_1;
  }
  return;
}

// StaticStruct @ 147b98340

UScriptStruct * __cdecl FAnimUpdateRateParameters::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimUpdateRateParameters.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimUpdateRateParameters.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimUpdateRateParameters,(UObject *)pUVar1,
                         L"AnimUpdateRateParameters");
  }
  return Z_Registration_Info_UScriptStruct_FAnimUpdateRateParameters.OuterSingleton;
}

