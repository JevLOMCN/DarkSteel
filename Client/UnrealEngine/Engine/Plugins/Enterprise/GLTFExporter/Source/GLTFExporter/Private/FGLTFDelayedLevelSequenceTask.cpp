// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 2

// GetName @ 14e5f7b40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
FGLTFDelayedLevelSequenceTask::GetName
          (FGLTFDelayedLevelSequenceTask *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  local_res8[0] = (FName)this->LevelSequence->_padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Process @ 14e6048d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FGLTFDelayedLevelSequenceTask::Process(FGLTFDelayedLevelSequenceTask *this)

{
  int *piVar1;
  TQuat<float> TVar2;
  undefined2 uVar3;
  int iVar4;
  ULevelSequence *pUVar5;
  undefined8 uVar6;
  FGLTFJsonAnimation *pFVar7;
  longlong *plVar8;
  UMovieScene3DTransformSection *this_00;
  code *pcVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  FFrameRate FVar15;
  FFrameRate FVar16;
  bool bVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ForAnyElementType FVar22;
  bool bVar23;
  bool bVar24;
  undefined4 uVar25;
  FMovieSceneTransformMask FVar26;
  int iVar27;
  longlong lVar28;
  FFrameTime FVar29;
  FGLTFJsonAccessor *pFVar30;
  FGLTFJsonBufferView *pFVar31;
  ulonglong uVar32;
  AActor *pAVar33;
  UClass *pUVar34;
  FGLTFJsonNode *pFVar35;
  USceneComponent *this_01;
  TTransform<double> *pTVar36;
  TRotator<double> *pTVar37;
  FMovieSceneChannelProxy *this_02;
  UScriptStruct *pUVar38;
  FMovieSceneChannelEntry *pFVar39;
  undefined4 extraout_var;
  undefined8 *puVar40;
  TQuat<float> *pTVar41;
  undefined8 *puVar42;
  int iVar43;
  longlong lVar44;
  char cVar45;
  FString *pFVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  FGLTFDelayedLevelSequenceTask *pFVar50;
  FScriptContainerElement *pFVar51;
  FFrameRate FVar52;
  char cVar53;
  float fVar54;
  ulonglong uVar55;
  longlong *plVar56;
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 in_XMM2 [16];
  float fVar64;
  float fVar65;
  double dVar66;
  undefined1 auStackY_5b8 [32];
  undefined1 local_560;
  undefined1 local_55f;
  undefined1 local_55e [2];
  float local_55c;
  undefined8 local_558;
  float local_550;
  FGLTFJsonNode *local_548;
  ForAnyElementType local_540;
  int local_538 [2];
  FGLTFDelayedLevelSequenceTask *local_530;
  undefined8 *local_528;
  ForAnyElementType local_520;
  int local_518 [2];
  undefined8 *local_510;
  ulonglong local_508;
  undefined8 *local_500;
  undefined8 *local_4f8;
  ForAnyElementType local_4f0;
  int local_4e8 [2];
  ForAnyElementType local_4e0;
  int local_4d8 [2];
  ForAnyElementType local_4d0;
  int local_4c8 [2];
  undefined8 local_4c0;
  float local_4b8 [2];
  undefined8 local_4b0;
  float local_4a8 [2];
  FFrameRate local_4a0;
  undefined8 local_498;
  FString local_490;
  float local_480;
  uint local_47c;
  uint local_478;
  float local_474;
  FGLTFJsonAccessor *local_470;
  longlong local_468;
  TRotator<float> local_460 [2];
  TQuat<float> local_448;
  uint local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined2 local_428;
  undefined2 uStack_426;
  undefined4 uStack_424;
  undefined4 uStack_420;
  uint uStack_41c;
  uint local_418;
  uint uStack_414;
  float local_410;
  float fStack_40c;
  float local_408;
  float local_400;
  float fStack_3fc;
  float local_3f8;
  float local_3f0;
  float fStack_3ec;
  float local_3e8;
  uint local_3e0;
  undefined4 uStack_3dc;
  uint local_3d8;
  float fStack_3d4;
  FWeakObjectPtr local_3d0;
  undefined8 *local_3c8;
  longlong local_3c0;
  FString local_3b8;
  longlong *local_3a8;
  uint local_3a0;
  undefined4 uStack_39c;
  uint local_398;
  uint uStack_394;
  uint uStack_390;
  uint uStack_38c;
  undefined **local_388;
  undefined8 *local_380;
  undefined **local_378;
  FGLTFJsonNode *local_370;
  undefined4 local_368;
  undefined **local_360;
  undefined8 *local_358;
  undefined **local_350;
  FGLTFJsonNode *local_348;
  undefined4 local_340;
  undefined **local_338;
  undefined8 *local_330;
  undefined **local_328;
  FGLTFJsonNode *local_320;
  undefined4 local_318;
  FName local_310 [2];
  longlong *local_300;
  ALevelSequenceActor *local_2f8;
  UWorld *local_2f0;
  longlong *local_2e8;
  ULevelSequencePlayer *local_2e0;
  undefined8 local_2d8;
  FFrameRate local_2d0;
  FString local_2c8;
  FString local_2b8;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_2a8;
  undefined1 local_298 [8];
  undefined1 local_290 [8];
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  double local_238;
  double dStack_230;
  FMovieSceneSequencePlaybackSettings local_228;
  TQuat<double> local_1f8;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined1 local_1c0 [16];
  double local_1b0;
  TQuat<float> local_1a8;
  TRotator<double> local_198;
  TTransform<double> local_178;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_5b8;
  pUVar5 = this->LevelSequence;
  local_530 = this;
  lVar28 = (**(code **)(pUVar5->_padding_ + 0x2f8))(pUVar5);
  local_3c0 = lVar28;
  local_2f0 = ULevel::GetWorld(this->Level);
  uVar49 = local_418;
  uStack_434 = 0;
  uStack_430 = 0;
  uStack_42c = 0;
  local_228._0_8_ = (ulonglong)local_438 & 0xfffffffffffffffe;
  local_228.TickInterval.TickIntervalSeconds = 0.0;
  local_228.TickInterval.EvaluationBudgetMicroseconds = 0.0;
  local_428 = 0x100;
  uStack_424 = 0x3f800000;
  uStack_420 = 0;
  local_228.TickInterval._10_2_ = uStack_426;
  local_228.TickInterval.bTickWhenPaused = false;
  local_228.TickInterval.bAllowRounding = true;
  local_228.PlayRate = 1.0;
  local_228._24_8_ = ((ulonglong)uStack_41c & 0xffffffc0) << 0x20;
  local_418 = local_418 & 0xffffff00;
  local_228._32_8_ = CONCAT44(uStack_414,uVar49) & 0xfffffffaffffff00 | 0x200000000;
  local_438 = local_438 & 0xfffffffe;
  uStack_41c = uStack_41c & 0xffffffc0;
  uStack_414 = uStack_414 & 0xfffffffa | 2;
  local_2e0 = ULevelSequencePlayer::CreateLevelSequencePlayer
                        ((UObject *)local_2f0,pUVar5,&local_228,&local_2f8);
  TVar2 = *(TQuat<float> *)(lVar28 + 0x128);
  FVar52 = *(FFrameRate *)(lVar28 + 0x138);
  uVar6 = *(undefined8 *)(lVar28 + 0x140);
  cVar53 = TVar2.X._0_1_;
  local_4a0 = FVar52;
  local_498 = uVar6;
  local_448 = TVar2;
  if ((cVar53 == '\x02') &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("!InLowerBound.IsOpen()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                          ,0x2c,L""), bVar23)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lVar28 = 0;
  if (cVar53 == '\0') {
    lVar28 = 4;
  }
  iVar4 = *(int *)((longlong)
                   &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                    ::__l2::Offsets + lVar28);
  if ((cVar53 == '\x02') &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("Type != ERangeBoundTypes::Open",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                          ,99,L""), bVar23)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uStack_39c = 0;
  local_55c = TVar2.Y;
  local_3a0 = (int)local_55c + iVar4;
  FVar16.Denominator = 0;
  FVar16.Numerator = local_3a0;
  FVar29 = FFrameRate::TransformTime((FFrameTime)local_298,FVar16,FVar52);
  fVar57 = __real_3f000000;
  local_550 = *(float *)FVar29;
  if (__real_3f000000 < *(float *)((longlong)FVar29 + 4) ||
      __real_3f000000 == *(float *)((longlong)FVar29 + 4)) {
    local_550 = (float)((int)local_550 + 1);
  }
  cVar45 = local_448.Z._0_1_;
  if ((cVar45 == '\x02') &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("!InUpperBound.IsOpen()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                          ,0x44,L""), bVar23)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lVar44 = 0;
  if (cVar45 == '\x01') {
    lVar44 = 4;
  }
  iVar4 = *(int *)((longlong)
                   &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                    ::__l2::Offsets + lVar44);
  if ((cVar45 == '\x02') &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("Type != ERangeBoundTypes::Open",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                          ,99,L""), bVar23)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((cVar53 == '\x02') &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("!InLowerBound.IsOpen()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                          ,0x2c,L""), bVar23)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar27 = *(int *)((longlong)
                    &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                     ::__l2::Offsets + lVar28);
  if ((cVar53 == '\x02') &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("Type != ERangeBoundTypes::Open",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                          ,99,L""), bVar23)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_3e0 = (((int)TVar2.W + iVar4) - (int)local_55c) - iVar27;
  uStack_3dc = 0;
  FVar15.Denominator = 0;
  FVar15.Numerator = local_3e0;
  FVar29 = FFrameRate::TransformTime((FFrameTime)local_290,FVar15,FVar52);
  pFVar50 = local_530;
  fVar54 = *(float *)FVar29;
  if (fVar57 < *(float *)((longlong)FVar29 + 4) || fVar57 == *(float *)((longlong)FVar29 + 4)) {
    fVar54 = (float)((int)fVar54 + 1);
  }
  iVar4 = (int)fVar54 + 1;
  local_3b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3b8.Data.ArrayNum = 0;
  local_3b8.Data.ArrayMax = 0;
  local_55c = fVar54;
  ::FString::AppendInt(&local_3b8,(int)local_530->JsonAnimation->_padding_);
  local_310[0] = (FName)pUVar5->_padding_;
  ::FName::ToString(local_310,&local_2b8);
  ::FString::ConcatFC(&local_2c8,&local_2b8,L"_");
  ::FString::ConcatFF(&local_490,&local_2c8,&local_3b8);
  pFVar7 = pFVar50->JsonAnimation;
  pFVar46 = &pFVar7->Name;
  if (pFVar46 != &local_490) {
    pFVar51 = (pFVar46->Data).AllocatorInstance.Data;
    if (pFVar51 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar51);
    }
    (pFVar46->Data).AllocatorInstance.Data = local_490.Data.AllocatorInstance.Data;
    local_490.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Name).Data.ArrayNum = local_490.Data.ArrayNum;
    (pFVar7->Name).Data.ArrayMax = local_490.Data.ArrayMax;
    local_490.Data.ArrayNum = 0;
    local_490.Data.ArrayMax = 0;
  }
  uVar32 = 0;
  if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_490.Data.AllocatorInstance.Data);
  }
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
  }
  local_520.Data = (FScriptContainerElement *)0x0;
  local_518[0] = 0;
  local_518[1] = 0;
  local_540.Data = (FScriptContainerElement *)0x0;
  local_538[0] = 0;
  local_538[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar4,&local_520,local_518,local_518 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar4,&local_540,local_538,local_538 + 1);
  if (0 < iVar4) {
    local_528 = (undefined8 *)(longlong)local_498._4_4_;
    iVar27 = (int)uVar6;
    fStack_3d4 = 0.0;
    dVar11 = __real_3ff0000000000000 / (double)iVar27;
    dVar66 = (double)local_498._4_4_;
    uVar55 = uVar32;
    do {
      uVar47 = (uint)uVar32;
      lVar28 = (longlong)local_528 * (longlong)(int)uVar47;
      local_2d8 = CONCAT44(fStack_3d4,uVar47);
      dVar10 = (double)fStack_3d4;
      uVar49 = 0;
      if ((int)uVar47 < local_518[0]) {
        uVar49 = ~uVar47 >> 0x1f;
      }
      local_3d8 = uVar47;
      if ((uVar49 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar49 = (int)local_550 + uVar47;
      *(float *)(local_520.Data + uVar55 * 4) = (float)((dVar10 * dVar66 + (double)lVar28) * dVar11)
      ;
      if ((iVar27 == FVar52.Numerator) && ((int)((ulonglong)uVar6 >> 0x20) == FVar52.Denominator)) {
        local_558 = (FScriptContainerElement *)(ulonglong)uVar49;
      }
      else {
        if ((iVar27 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("SourceRate.Numerator != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\FrameRate.h"
                                ,0x113,L""), bVar23)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_548 = (FGLTFJsonNode *)((longlong)FVar52.Numerator * (longlong)local_528);
        local_508 = (longlong)local_4a0.Denominator * (longlong)iVar27;
        lVar28 = ((longlong)(int)uVar49 * (longlong)local_548) / (longlong)local_508;
        dVar10 = ((double)(longlong)local_548 * (double)(int)uVar49) / (double)(longlong)local_508 -
                 (double)lVar28;
        auVar59._8_8_ = 0;
        auVar59._0_8_ = dVar10;
        in_XMM2 = roundpd(in_XMM2,auVar59,1);
        fVar57 = (float)(dVar10 - in_XMM2._0_8_);
        lVar28 = (longlong)in_XMM2._0_8_ + lVar28;
        if ((0.0 < fVar57) && (::FFrameTime::MaxSubframe <= fVar57)) {
          fVar57 = ::FFrameTime::MaxSubframe;
        }
        if (::FFrameTime::MaxSubframe <= fVar57) {
          fVar57 = ::FFrameTime::MaxSubframe;
        }
        lVar44 = 0x7fffffff;
        if (lVar28 < 0x7fffffff) {
          lVar44 = lVar28;
        }
        if (fVar57 <= 0.0) {
          fVar57 = 0.0;
        }
        uVar25 = 0x80000000;
        if (-0x80000000 < lVar44) {
          uVar25 = (undefined4)lVar44;
        }
        local_558 = (FScriptContainerElement *)CONCAT44(fVar57,uVar25);
      }
      uVar49 = 0;
      if ((int)uVar47 < local_538[0]) {
        uVar49 = ~uVar47 >> 0x1f;
      }
      if ((uVar49 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar32 = (ulonglong)(uVar47 + 1);
      *(FScriptContainerElement **)(local_540.Data + uVar55 * 8) = local_558;
      uVar55 = uVar55 + 1;
      pFVar50 = local_530;
      fVar54 = local_55c;
    } while ((longlong)uVar55 < (longlong)iVar4);
  }
  pFVar30 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)pFVar50->Builder);
  local_470 = pFVar30;
  pFVar31 = FGLTFBufferBuilder::AddBufferView
                      ((FGLTFBufferBuilder *)pFVar50->Builder,local_520.Data,
                       (longlong)local_518[0] << 2,None,'\x04');
  pFVar30->BufferView = pFVar31;
  iVar27 = (int)fVar54 + 1;
  pFVar30->ComponentType = Float;
  pFVar30->Type = Scalar;
  pFVar30->Count = iVar27;
  pFVar30->MinMaxLength = 1;
  pFVar30->Min[0] = 0.0;
  uVar49 = 0;
  if ((int)fVar54 < local_518[0]) {
    uVar49 = ~(uint)fVar54 >> 0x1f;
  }
  if ((uVar49 == 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar23)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  fVar21 = _UNK_1506895dc;
  fVar20 = _UNK_1506895d8;
  fVar19 = _UNK_1506895d4;
  fVar57 = ___xmm_322bcc77322bcc77322bcc77322bcc77;
  uVar49 = __xmm_80000000800000008000000080000000;
  pFVar30->Max[0] = *(float *)(local_520.Data + (longlong)(int)fVar54 * 4);
  uVar32 = (ulonglong)*(int *)(local_3c0 + 0xa0);
  lVar28 = *(longlong *)(local_3c0 + 0x98);
  lVar44 = uVar32 * 0x40 + lVar28;
  local_508 = CONCAT44(local_508._4_4_,*(int *)(local_3c0 + 0xa0));
  local_468 = lVar44;
  do {
    local_498 = lVar28;
    if (*(int *)(local_3c0 + 0xa0) != (int)uVar32) {
      local_560 = 0;
      `TCheckedPointerIterator<FMovieSceneBinding_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_560);
    }
    if (lVar28 == lVar44) {
      UWorld::DestroyActor(local_2f0,(AActor *)local_2f8,false,true);
      if (local_540.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_540.Data);
      }
      if (local_520.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_520.Data);
      }
      return;
    }
    IMovieScenePlayer::FindBoundObjects
              ((IMovieScenePlayer *)&local_2e0->_padding_,&local_2a8,(FGuid *)(lVar28 + 0x10),
               &MovieSceneSequenceID::Root);
    local_4a0 = (FFrameRate)local_2a8.DataPtr;
    local_2d0 = (FFrameRate)((longlong)local_2a8.ArrayNum * 8 + (longlong)local_2a8.DataPtr);
    FVar52 = (FFrameRate)local_2a8.DataPtr;
    if ((FFrameRate)local_2a8.DataPtr != local_2d0) {
      do {
        local_3d0 = *(FWeakObjectPtr *)FVar52;
        local_4a0 = FVar52;
        pAVar33 = (AActor *)FWeakObjectPtr::Get(&local_3d0);
        if (pAVar33 == (AActor *)0x0) {
LAB_14e6051cf:
          this_01 = (USceneComponent *)FWeakObjectPtr::Get(&local_3d0);
          if (this_01 != (USceneComponent *)0x0) {
            pUVar34 = Z_Construct_UClass_USceneComponent_NoRegister();
            iVar43 = (int)pUVar34->_padding_;
            if ((iVar43 <= *(int *)(this_01->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar43 * 8) ==
                &pUVar34->_padding_)) {
              pFVar35 = FGLTFConvertBuilder::AddUniqueNode(pFVar50->Builder,this_01);
              pTVar36 = &local_118;
              goto LAB_14e605229;
            }
          }
        }
        else {
          pUVar34 = Z_Construct_UClass_AActor_NoRegister();
          iVar43 = (int)pUVar34->_padding_;
          if ((*(int *)(pAVar33->_padding_ + 0x38) < iVar43) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pAVar33->_padding_ + 0x30) + (longlong)iVar43 * 8) !=
              &pUVar34->_padding_)) goto LAB_14e6051cf;
          pFVar35 = FGLTFConvertBuilder::AddUniqueNode(pFVar50->Builder,pAVar33);
          this_01 = (pAVar33->RootComponent).field0_0x0.DebugPtr;
          pTVar36 = &local_178;
LAB_14e605229:
          local_548 = pFVar35;
          pTVar36 = USceneComponent::GetRelativeTransform(this_01,pTVar36);
          dVar11 = (pTVar36->Scale3D).ZW.m128d_f64[0];
          dStack_230 = (pTVar36->Scale3D).ZW.m128d_f64[1];
          auVar59 = *(undefined1 (*) [16])(pTVar36->Scale3D).XY.m128d_f64;
          local_258 = *(undefined1 (*) [16])(pTVar36->Translation).ZW.m128d_f64;
          local_268 = (pTVar36->Translation).XY.m128d_f64[0];
          dStack_260 = (pTVar36->Translation).XY.m128d_f64[1];
          local_278 = (pTVar36->Rotation).ZW.m128d_f64[0];
          dStack_270 = (pTVar36->Rotation).ZW.m128d_f64[1];
          local_288 = (pTVar36->Rotation).XY.m128d_f64[0];
          dStack_280 = (pTVar36->Rotation).XY.m128d_f64[1];
          local_248 = auVar59;
          local_238 = dVar11;
          if (pFVar35 != (FGLTFJsonNode *)0x0) {
            local_1c8 = local_258._0_8_;
            local_3f0 = (float)local_268;
            fStack_3ec = (float)dStack_260;
            local_3e8 = (float)local_1c8;
            local_1f8.X = local_288;
            local_1f8.Y = dStack_280;
            local_1f8.Z = local_278;
            local_1f8.W = dStack_270;
            local_1d8 = local_268;
            dStack_1d0 = dStack_260;
            pTVar37 = UE::Math::TQuat<double>::Rotator(&local_1f8,&local_198);
            local_478 = *(uint *)(lVar28 + 0x38);
            uVar32 = (ulonglong)(int)local_478;
            plVar56 = *(longlong **)(lVar28 + 0x30);
            uVar14 = CONCAT44(fStack_3ec,local_3f0);
            local_400 = (float)pTVar37->Pitch;
            local_300 = plVar56 + uVar32;
            local_480 = (float)pTVar37->Roll;
            local_550 = local_3e8;
            fStack_3fc = (float)pTVar37->Yaw;
            local_410 = (float)auVar59._0_8_;
            fStack_40c = (float)auVar59._8_8_;
            uVar13._4_4_ = fStack_3fc;
            uVar13._0_4_ = local_400;
            uVar6 = CONCAT44(fStack_40c,local_410);
            local_474 = (float)dVar11;
            local_408 = local_474;
            local_3f8 = local_480;
            local_1c0 = auVar59;
            local_1b0 = dVar11;
            while( true ) {
              plVar8 = local_300;
              local_3a8 = plVar56;
              if (*(int *)(lVar28 + 0x38) != (int)uVar32) {
                local_55f = 0;
                `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_55f);
              }
              FVar52 = local_4a0;
              if (plVar56 == plVar8) break;
              plVar8 = (longlong *)*plVar56;
              if (plVar8 != (longlong *)0x0) {
                pUVar34 = Z_Construct_UClass_UMovieScene3DTransformTrack_NoRegister();
                iVar43 = (int)pUVar34->_padding_;
                if ((iVar43 <= *(int *)(plVar8[2] + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(plVar8[2] + 0x30) + (longlong)iVar43 * 8) ==
                    &pUVar34->_padding_)) {
                  local_2e8 = (longlong *)(**(code **)(*plVar8 + 0x360))(plVar8);
                  local_47c = *(uint *)(local_2e8 + 1);
                  uVar32 = (ulonglong)(int)local_47c;
                  puVar42 = (undefined8 *)*local_2e8;
                  puVar40 = puVar42 + uVar32;
                  local_528 = puVar40;
                  while( true ) {
                    local_3c8 = puVar42;
                    if ((int)local_2e8[1] != (int)uVar32) {
                      local_55e[0] = 0;
                      `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::operator!='::__l2
                      ::<lambda_1>::operator()(local_55e);
                    }
                    lVar28 = local_498;
                    plVar56 = local_3a8;
                    if (puVar42 == puVar40) break;
                    this_00 = (UMovieScene3DTransformSection *)*puVar42;
                    if (this_00 != (UMovieScene3DTransformSection *)0x0) {
                      pUVar34 = Z_Construct_UClass_UMovieScene3DTransformSection_NoRegister();
                      iVar43 = (int)pUVar34->_padding_;
                      if (((iVar43 <= *(int *)(this_00->_padding_ + 0x38)) &&
                          ((longlong *)
                           *(undefined1 **)
                            (*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar43 * 8) ==
                           &pUVar34->_padding_)) &&
                         ((uVar3 = *(undefined2 *)((longlong)&this_00->_padding_ + 1),
                          (char)((ushort)uVar3 >> 8) == '\0' || ((char)uVar3 == '\x01')))) {
                        this_02 = UMovieSceneSection::GetChannelProxy((UMovieSceneSection *)this_00)
                        ;
                        pUVar38 = FMovieSceneDoubleChannel::StaticStruct();
                        pFVar39 = FMovieSceneChannelProxy::FindEntry
                                            (this_02,(FName)pUVar38->_padding_);
                        if (pFVar39 == (FMovieSceneChannelEntry *)0x0) {
                          local_558 = (FScriptContainerElement *)0x0;
                          iVar43 = 0;
                        }
                        else {
                          local_558 = (pFVar39->Channels).AllocatorInstance.Data;
                          iVar43 = (pFVar39->Channels).ArrayNum;
                          iVar27 = iVar4;
                          if ((iVar43 < 0) &&
                             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("ArrayNum >= 0",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                  ,0xfe,L""), bVar23)) {
                            pcVar9 = (code *)swi(3);
                            (*pcVar9)();
                            return;
                          }
                        }
                        FVar26 = UMovieScene3DTransformSection::GetMask(this_00);
                        fVar54 = *(float *)CONCAT44(extraout_var,FVar26.Mask);
                        local_55c = fVar54;
                        if (((uint)fVar54 & 7) != 0) {
                          if ((((uint)fVar54 & 1) == 0) || (bVar23 = true, iVar43 < 1)) {
                            bVar23 = false;
                          }
                          if ((((uint)fVar54 >> 1 & 1) == 0) || (iVar43 < 2)) {
                            bVar17 = false;
                          }
                          else {
                            bVar17 = true;
                          }
                          if ((((uint)fVar54 >> 2 & 1) == 0) || (iVar43 < 3)) {
                            bVar18 = false;
                          }
                          else {
                            bVar18 = true;
                          }
                          local_4f0.Data = (FScriptContainerElement *)0x0;
                          local_4e8[0] = 0;
                          local_4e8[1] = 0;
                          UE::Core::Private::
                          ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0xc,1,iVar27,&local_4f0,local_4e8,local_4e8 + 1);
                          uVar47 = 0;
                          lVar28 = 0;
                          if (0 < iVar4) {
                            lVar44 = 0;
                            do {
                              uVar48 = 0;
                              if ((int)uVar47 < local_538[0]) {
                                uVar48 = ~uVar47 >> 0x1f;
                              }
                              if ((uVar48 == 0) &&
                                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar24)) {
                                pcVar9 = (code *)swi(3);
                                (*pcVar9)();
                                return;
                              }
                              FVar22.Data = local_540.Data;
                              local_4a8[0] = local_550;
                              local_4b0 = uVar14;
                              if (bVar23) {
                                if ((iVar43 < 1) &&
                                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                  ,0x14f,
                                                  L"Array index out of bounds: %lld from an array of size %lld"
                                                  ), bVar24)) {
                                  pcVar9 = (code *)swi(3);
                                  (*pcVar9)();
                                  return;
                                }
                                FMovieSceneDoubleChannel::Evaluate
                                          (*(FMovieSceneDoubleChannel **)local_558,
                                           *(FFrameTime *)(FVar22.Data + lVar28 * 8),
                                           (float *)&local_4b0);
                              }
                              if (bVar17) {
                                if ((iVar43 < 2) &&
                                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                  ,0x14f,
                                                  L"Array index out of bounds: %lld from an array of size %lld"
                                                  ), bVar24)) {
                                  pcVar9 = (code *)swi(3);
                                  (*pcVar9)();
                                  return;
                                }
                                FMovieSceneDoubleChannel::Evaluate
                                          (*(FMovieSceneDoubleChannel **)(local_558 + 8),
                                           *(FFrameTime *)(FVar22.Data + lVar28 * 8),
                                           (float *)((longlong)&local_4b0 + 4));
                              }
                              if (bVar18) {
                                if ((iVar43 < 3) &&
                                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                  ,0x14f,
                                                  L"Array index out of bounds: %lld from an array of size %lld"
                                                  ), bVar24)) {
                                  pcVar9 = (code *)swi(3);
                                  (*pcVar9)();
                                  return;
                                }
                                FMovieSceneDoubleChannel::Evaluate
                                          (*(FMovieSceneDoubleChannel **)(local_558 + 0x10),
                                           *(FFrameTime *)(FVar22.Data + lVar28 * 8),local_4a8);
                              }
                              fVar54 = *(float *)(local_530->Builder->_padding_ + 0x28);
                              fVar64 = (float)local_4b0 * fVar54;
                              fVar65 = local_4a8[0] * fVar54;
                              uVar48 = 0;
                              if ((int)uVar47 < local_4e8[0]) {
                                uVar48 = ~uVar47 >> 0x1f;
                              }
                              fVar54 = local_4b0._4_4_ * fVar54;
                              if ((uVar48 == 0) &&
                                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar24)) {
                                pcVar9 = (code *)swi(3);
                                (*pcVar9)();
                                return;
                              }
                              uVar47 = uVar47 + 1;
                              lVar28 = lVar28 + 1;
                              *(ulonglong *)(local_4f0.Data + lVar44) = CONCAT44(fVar65,fVar64);
                              *(float *)(local_4f0.Data + lVar44 + 8) = fVar54;
                              lVar44 = lVar44 + 0xc;
                              fVar54 = local_55c;
                            } while (lVar28 < iVar4);
                          }
                          pFVar50 = local_530;
                          pFVar30 = FGLTFJsonBuilder::AddAccessor
                                              ((FGLTFJsonBuilder *)local_530->Builder);
                          pFVar31 = FGLTFBufferBuilder::AddBufferView
                                              ((FGLTFBufferBuilder *)pFVar50->Builder,local_4f0.Data
                                               ,(longlong)local_4e8[0] * 0xc,None,'\x04');
                          pFVar30->BufferView = pFVar31;
                          pFVar30->ComponentType = Float;
                          pFVar30->Count = local_4e8[0];
                          pFVar30->Type = Vec3;
                          pFVar7 = pFVar50->JsonAnimation;
                          puVar40 = ::operator_new(0x28);
                          if (puVar40 == (undefined8 *)0x0) {
                            puVar40 = (undefined8 *)0x0;
                          }
                          else {
                            *(int *)(puVar40 + 1) = (pFVar7->Samplers).Array.ArrayNum;
                            *puVar40 = &___7FGLTFJsonAnimationSampler__6B_;
                            puVar40[2] = 0;
                            puVar40[3] = 0;
                            *(undefined4 *)(puVar40 + 4) = 0;
                          }
                          pFVar51 = (pFVar7->Samplers).Array.AllocatorInstance.Data;
                          local_500 = puVar40;
                          if (((pFVar51 <= (FScriptContainerElement *)&local_500) &&
                              ((FScriptContainerElement *)&local_500 <
                               pFVar51 + (longlong)(pFVar7->Samplers).Array.ArrayMax * 8)) &&
                             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar23)) {
                            pcVar9 = (code *)swi(3);
                            (*pcVar9)();
                            return;
                          }
                          iVar27 = (pFVar7->Samplers).Array.ArrayNum;
                          piVar1 = &(pFVar7->Samplers).Array.ArrayMax;
                          if (iVar27 == *piVar1) {
                            iVar27 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x808,&(pFVar7->Samplers).Array.AllocatorInstance,
                                                piVar1);
                          }
                          pFVar35 = local_548;
                          (pFVar7->Samplers).Array.ArrayNum = iVar27 + 1;
                          *(undefined8 **)
                           ((pFVar7->Samplers).Array.AllocatorInstance.Data + (longlong)iVar27 * 8)
                               = local_500;
                          puVar40[2] = local_470;
                          puVar40[3] = pFVar30;
                          *(undefined4 *)(puVar40 + 4) = 0;
                          pFVar7 = pFVar50->JsonAnimation;
                          local_378 = &___7FGLTFJsonAnimationChannelTarget__6B_;
                          local_388 = &___7FGLTFJsonAnimationChannel__6B_;
                          local_368 = 0;
                          local_370 = local_548;
                          pFVar51 = (pFVar7->Channels).AllocatorInstance.Data;
                          local_500 = (undefined8 *)0x0;
                          local_380 = puVar40;
                          if (((pFVar51 <= (FScriptContainerElement *)&local_388) &&
                              ((FScriptContainerElement *)&local_388 <
                               pFVar51 + (longlong)(pFVar7->Channels).ArrayMax * 0x28)) &&
                             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar23)) {
                            pcVar9 = (code *)swi(3);
                            (*pcVar9)();
                            return;
                          }
                          iVar27 = (pFVar7->Channels).ArrayNum;
                          piVar1 = &(pFVar7->Channels).ArrayMax;
                          if (iVar27 == *piVar1) {
                            iVar27 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x828,&(pFVar7->Channels).AllocatorInstance,piVar1);
                          }
                          lVar28 = (longlong)iVar27;
                          (pFVar7->Channels).ArrayNum = iVar27 + 1;
                          pFVar51 = (pFVar7->Channels).AllocatorInstance.Data;
                          *(undefined ***)(pFVar51 + lVar28 * 0x28) =
                               &___7FGLTFJsonAnimationChannel__6B_;
                          *(undefined8 **)(pFVar51 + lVar28 * 0x28 + 8) = local_380;
                          *(undefined ***)(pFVar51 + lVar28 * 0x28 + 0x10) =
                               &___7FGLTFJsonAnimationChannelTarget__6B_;
                          *(FGLTFJsonNode **)(pFVar51 + lVar28 * 0x28 + 0x18) = local_370;
                          *(undefined4 *)(pFVar51 + lVar28 * 0x28 + 0x20) = local_368;
                          if (local_4f0.Data != (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_4f0.Data);
                          }
                        }
                        uVar32 = 0;
                        if (((uint)fVar54 & 0x38) != 0) {
                          if ((((uint)fVar54 >> 3 & 1) == 0) || (iVar43 < 4)) {
                            bVar23 = false;
                          }
                          else {
                            bVar23 = true;
                          }
                          if ((((uint)fVar54 >> 4 & 1) == 0) || (bVar17 = true, iVar43 < 5)) {
                            bVar17 = false;
                          }
                          if ((((uint)fVar54 >> 5 & 1) == 0) || (iVar43 < 6)) {
                            bVar18 = false;
                          }
                          else {
                            bVar18 = true;
                          }
                          local_4e0.Data = (FScriptContainerElement *)0x0;
                          local_4d8[0] = 0;
                          local_4d8[1] = 0;
                          UE::Core::Private::
                          ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x10,1,iVar4,&local_4e0,local_4d8,local_4d8 + 1);
                          if (0 < iVar4) {
                            lVar28 = 0;
                            uVar55 = uVar32;
                            do {
                              uVar48 = (uint)uVar55;
                              uVar47 = 0;
                              if ((int)uVar48 < local_538[0]) {
                                uVar47 = ~uVar48 >> 0x1f;
                              }
                              if ((uVar47 == 0) &&
                                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar24)) {
                                pcVar9 = (code *)swi(3);
                                (*pcVar9)();
                                return;
                              }
                              FVar22.Data = local_540.Data;
                              local_460[0].Roll = local_480;
                              pFVar51 = local_558;
                              local_460[0]._0_8_ = uVar13;
                              if (bVar23) {
                                if ((iVar43 < 4) &&
                                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                  ,0x14f,
                                                  L"Array index out of bounds: %lld from an array of size %lld"
                                                  ), bVar24)) {
                                  pcVar9 = (code *)swi(3);
                                  (*pcVar9)();
                                  return;
                                }
                                pFVar51 = local_558;
                                FMovieSceneDoubleChannel::Evaluate
                                          (*(FMovieSceneDoubleChannel **)(local_558 + 0x18),
                                           *(FFrameTime *)(FVar22.Data + uVar32 * 8),
                                           &local_460[0].Roll);
                              }
                              if (bVar17) {
                                if ((iVar43 < 5) &&
                                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                  ,0x14f,
                                                  L"Array index out of bounds: %lld from an array of size %lld"
                                                  ), bVar24)) {
                                  pcVar9 = (code *)swi(3);
                                  (*pcVar9)();
                                  return;
                                }
                                FMovieSceneDoubleChannel::Evaluate
                                          (*(FMovieSceneDoubleChannel **)(pFVar51 + 0x20),
                                           *(FFrameTime *)(FVar22.Data + uVar32 * 8),
                                           &local_460[0].Pitch);
                              }
                              if (bVar18) {
                                if ((iVar43 < 6) &&
                                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                  ,0x14f,
                                                  L"Array index out of bounds: %lld from an array of size %lld"
                                                  ), bVar24)) {
                                  pcVar9 = (code *)swi(3);
                                  (*pcVar9)();
                                  return;
                                }
                                FMovieSceneDoubleChannel::Evaluate
                                          (*(FMovieSceneDoubleChannel **)(pFVar51 + 0x28),
                                           *(FFrameTime *)(FVar22.Data + uVar32 * 8),
                                           &local_460[0].Yaw);
                              }
                              pTVar41 = UE::Math::TRotator<float>::Quaternion(local_460,&local_1a8);
                              fVar54 = pTVar41->X;
                              fVar64 = pTVar41->Y;
                              fVar65 = pTVar41->Z;
                              fVar12 = pTVar41->W;
                              local_448 = *pTVar41;
                              uVar47 = 0;
                              if ((int)uVar48 < local_4d8[0]) {
                                uVar47 = ~uVar48 >> 0x1f;
                              }
                              fVar60 = fVar64 * fVar64 + fVar54 * fVar54;
                              fVar61 = fVar54 * fVar54 + fVar64 * fVar64;
                              fVar62 = fVar12 * fVar12 + fVar65 * fVar65;
                              fVar63 = fVar65 * fVar65 + fVar12 * fVar12;
                              auVar58._0_4_ = fVar62 + fVar60;
                              auVar58._4_4_ = fVar63 + fVar61;
                              auVar58._8_4_ = fVar60 + fVar62;
                              auVar58._12_4_ = fVar61 + fVar63;
                              auVar59 = sqrtps(auVar58,auVar58);
                              auVar59 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,
                                              auVar59);
                              uStack_38c = (uint)(auVar59._12_4_ * fVar12) &
                                           -(uint)(fVar21 <= auVar58._12_4_) |
                                           ~-(uint)(fVar21 <= auVar58._12_4_) &
                                           GlobalVectorConstants::Float0001.m128_u32[3];
                              local_398 = ((uint)(auVar59._0_4_ * fVar54) &
                                           -(uint)(fVar57 <= auVar58._0_4_) |
                                          ~-(uint)(fVar57 <= auVar58._0_4_) &
                                          GlobalVectorConstants::Float0001.m128_u32[0]) ^ uVar49;
                              uStack_394 = ((uint)(auVar59._8_4_ * fVar65) &
                                            -(uint)(fVar20 <= auVar58._8_4_) |
                                           ~-(uint)(fVar20 <= auVar58._8_4_) &
                                           GlobalVectorConstants::Float0001.m128_u32[2]) ^ uVar49;
                              uStack_390 = ((uint)(auVar59._4_4_ * fVar64) &
                                            -(uint)(fVar19 <= auVar58._4_4_) |
                                           ~-(uint)(fVar19 <= auVar58._4_4_) &
                                           GlobalVectorConstants::Float0001.m128_u32[1]) ^ uVar49;
                              if ((uVar47 == 0) &&
                                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar24)) {
                                pcVar9 = (code *)swi(3);
                                (*pcVar9)();
                                return;
                              }
                              uVar55 = (ulonglong)(uVar48 + 1);
                              uVar32 = uVar32 + 1;
                              *(ulonglong *)(local_4e0.Data + lVar28) =
                                   CONCAT44(uStack_394,local_398);
                              *(ulonglong *)(local_4e0.Data + lVar28 + 8) =
                                   CONCAT44(uStack_38c,uStack_390);
                              lVar28 = lVar28 + 0x10;
                              fVar54 = local_55c;
                            } while ((longlong)uVar32 < (longlong)iVar4);
                          }
                          pFVar50 = local_530;
                          pFVar30 = FGLTFJsonBuilder::AddAccessor
                                              ((FGLTFJsonBuilder *)local_530->Builder);
                          pFVar31 = FGLTFBufferBuilder::AddBufferView
                                              ((FGLTFBufferBuilder *)pFVar50->Builder,local_4e0.Data
                                               ,(longlong)local_4d8[0] << 4,None,'\x04');
                          pFVar30->BufferView = pFVar31;
                          pFVar30->ComponentType = Float;
                          pFVar30->Count = local_4d8[0];
                          pFVar30->Type = Vec4;
                          pFVar7 = pFVar50->JsonAnimation;
                          puVar40 = ::operator_new(0x28);
                          if (puVar40 == (undefined8 *)0x0) {
                            puVar40 = (undefined8 *)0x0;
                          }
                          else {
                            *(int *)(puVar40 + 1) = (pFVar7->Samplers).Array.ArrayNum;
                            *puVar40 = &___7FGLTFJsonAnimationSampler__6B_;
                            puVar40[2] = 0;
                            puVar40[3] = 0;
                            *(undefined4 *)(puVar40 + 4) = 0;
                          }
                          pFVar51 = (pFVar7->Samplers).Array.AllocatorInstance.Data;
                          local_4f8 = puVar40;
                          if (((pFVar51 <= (FScriptContainerElement *)&local_4f8) &&
                              ((FScriptContainerElement *)&local_4f8 <
                               pFVar51 + (longlong)(pFVar7->Samplers).Array.ArrayMax * 8)) &&
                             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar23)) {
                            pcVar9 = (code *)swi(3);
                            (*pcVar9)();
                            return;
                          }
                          iVar27 = (pFVar7->Samplers).Array.ArrayNum;
                          piVar1 = &(pFVar7->Samplers).Array.ArrayMax;
                          if (iVar27 == *piVar1) {
                            iVar27 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x808,&(pFVar7->Samplers).Array.AllocatorInstance,
                                                piVar1);
                          }
                          pFVar35 = local_548;
                          (pFVar7->Samplers).Array.ArrayNum = iVar27 + 1;
                          *(undefined8 **)
                           ((pFVar7->Samplers).Array.AllocatorInstance.Data + (longlong)iVar27 * 8)
                               = local_4f8;
                          puVar40[2] = local_470;
                          puVar40[3] = pFVar30;
                          *(undefined4 *)(puVar40 + 4) = 0;
                          pFVar7 = pFVar50->JsonAnimation;
                          local_350 = &___7FGLTFJsonAnimationChannelTarget__6B_;
                          local_360 = &___7FGLTFJsonAnimationChannel__6B_;
                          local_340 = 1;
                          local_348 = local_548;
                          pFVar51 = (pFVar7->Channels).AllocatorInstance.Data;
                          local_4f8 = (undefined8 *)0x0;
                          local_358 = puVar40;
                          if (((pFVar51 <= (FScriptContainerElement *)&local_360) &&
                              ((FScriptContainerElement *)&local_360 <
                               pFVar51 + (longlong)(pFVar7->Channels).ArrayMax * 0x28)) &&
                             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar23)) {
                            pcVar9 = (code *)swi(3);
                            (*pcVar9)();
                            return;
                          }
                          iVar27 = (pFVar7->Channels).ArrayNum;
                          piVar1 = &(pFVar7->Channels).ArrayMax;
                          if (iVar27 == *piVar1) {
                            iVar27 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x828,&(pFVar7->Channels).AllocatorInstance,piVar1);
                          }
                          lVar28 = (longlong)iVar27;
                          (pFVar7->Channels).ArrayNum = iVar27 + 1;
                          pFVar51 = (pFVar7->Channels).AllocatorInstance.Data;
                          *(undefined ***)(pFVar51 + lVar28 * 0x28) =
                               &___7FGLTFJsonAnimationChannel__6B_;
                          *(undefined8 **)(pFVar51 + lVar28 * 0x28 + 8) = local_358;
                          *(undefined ***)(pFVar51 + lVar28 * 0x28 + 0x10) =
                               &___7FGLTFJsonAnimationChannelTarget__6B_;
                          *(FGLTFJsonNode **)(pFVar51 + lVar28 * 0x28 + 0x18) = local_348;
                          *(undefined4 *)(pFVar51 + lVar28 * 0x28 + 0x20) = local_340;
                          if (local_4e0.Data != (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_4e0.Data);
                          }
                        }
                        uVar32 = 0;
                        puVar40 = local_528;
                        iVar27 = iVar4;
                        if (((uint)fVar54 & 0x1c0) != 0) {
                          if ((((uint)fVar54 >> 6 & 1) == 0) || (bVar23 = true, iVar43 < 7)) {
                            bVar23 = false;
                          }
                          if ((((uint)fVar54 >> 7 & 1) == 0) || (iVar43 < 8)) {
                            bVar17 = false;
                          }
                          else {
                            bVar17 = true;
                          }
                          if ((((uint)fVar54 >> 8 & 1) == 0) || (iVar43 < 9)) {
                            bVar18 = false;
                          }
                          else {
                            bVar18 = true;
                          }
                          local_4d0.Data = (FScriptContainerElement *)0x0;
                          local_4c8[0] = 0;
                          local_4c8[1] = 0;
                          UE::Core::Private::
                          ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0xc,1,iVar4,&local_4d0,local_4c8,local_4c8 + 1);
                          if (0 < iVar4) {
                            lVar28 = 0;
                            uVar55 = uVar32;
                            do {
                              uVar48 = (uint)uVar55;
                              uVar47 = 0;
                              if ((int)uVar48 < local_538[0]) {
                                uVar47 = ~uVar48 >> 0x1f;
                              }
                              if ((uVar47 == 0) &&
                                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar24)) {
                                pcVar9 = (code *)swi(3);
                                (*pcVar9)();
                                return;
                              }
                              FVar22.Data = local_540.Data;
                              local_4b8[0] = local_474;
                              local_4c0 = uVar6;
                              if (bVar23) {
                                if ((iVar43 < 7) &&
                                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                  ,0x14f,
                                                  L"Array index out of bounds: %lld from an array of size %lld"
                                                  ), bVar24)) {
                                  pcVar9 = (code *)swi(3);
                                  (*pcVar9)();
                                  return;
                                }
                                FMovieSceneDoubleChannel::Evaluate
                                          (*(FMovieSceneDoubleChannel **)(local_558 + 0x30),
                                           *(FFrameTime *)(FVar22.Data + uVar32 * 8),
                                           (float *)&local_4c0);
                              }
                              if (bVar17) {
                                if ((iVar43 < 8) &&
                                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                  ,0x14f,
                                                  L"Array index out of bounds: %lld from an array of size %lld"
                                                  ), bVar24)) {
                                  pcVar9 = (code *)swi(3);
                                  (*pcVar9)();
                                  return;
                                }
                                FMovieSceneDoubleChannel::Evaluate
                                          (*(FMovieSceneDoubleChannel **)(local_558 + 0x38),
                                           *(FFrameTime *)(FVar22.Data + uVar32 * 8),
                                           (float *)((longlong)&local_4c0 + 4));
                              }
                              if (bVar18) {
                                if ((iVar43 < 9) &&
                                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                  ,0x14f,
                                                  L"Array index out of bounds: %lld from an array of size %lld"
                                                  ), bVar24)) {
                                  pcVar9 = (code *)swi(3);
                                  (*pcVar9)();
                                  return;
                                }
                                FMovieSceneDoubleChannel::Evaluate
                                          (*(FMovieSceneDoubleChannel **)(local_558 + 0x40),
                                           *(FFrameTime *)(FVar22.Data + uVar32 * 8),local_4b8);
                              }
                              fVar64 = local_4b8[0];
                              fVar54 = (float)local_4c0;
                              uVar25 = local_4c0._4_4_;
                              uVar47 = 0;
                              if ((int)uVar48 < local_4c8[0]) {
                                uVar47 = ~uVar48 >> 0x1f;
                              }
                              if ((uVar47 == 0) &&
                                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar24)) {
                                pcVar9 = (code *)swi(3);
                                (*pcVar9)();
                                return;
                              }
                              uVar55 = (ulonglong)(uVar48 + 1);
                              uVar32 = uVar32 + 1;
                              *(ulonglong *)(local_4d0.Data + lVar28) = CONCAT44(fVar64,fVar54);
                              *(undefined4 *)(local_4d0.Data + lVar28 + 8) = uVar25;
                              lVar28 = lVar28 + 0xc;
                              pFVar35 = local_548;
                            } while ((longlong)uVar32 < (longlong)iVar4);
                          }
                          pFVar50 = local_530;
                          pFVar30 = FGLTFJsonBuilder::AddAccessor
                                              ((FGLTFJsonBuilder *)local_530->Builder);
                          pFVar31 = FGLTFBufferBuilder::AddBufferView
                                              ((FGLTFBufferBuilder *)pFVar50->Builder,local_4d0.Data
                                               ,(longlong)local_4c8[0] * 0xc,None,'\x04');
                          pFVar30->BufferView = pFVar31;
                          pFVar30->ComponentType = Float;
                          pFVar30->Count = local_4c8[0];
                          pFVar30->Type = Vec3;
                          pFVar7 = pFVar50->JsonAnimation;
                          puVar42 = ::operator_new(0x28);
                          puVar40 = (undefined8 *)0x0;
                          if (puVar42 != (undefined8 *)0x0) {
                            *(int *)(puVar42 + 1) = (pFVar7->Samplers).Array.ArrayNum;
                            *puVar42 = &___7FGLTFJsonAnimationSampler__6B_;
                            puVar42[2] = 0;
                            puVar42[3] = 0;
                            *(undefined4 *)(puVar42 + 4) = 0;
                            puVar40 = puVar42;
                          }
                          pFVar51 = (pFVar7->Samplers).Array.AllocatorInstance.Data;
                          local_510 = puVar40;
                          if (((pFVar51 <= (FScriptContainerElement *)&local_510) &&
                              ((FScriptContainerElement *)&local_510 <
                               pFVar51 + (longlong)(pFVar7->Samplers).Array.ArrayMax * 8)) &&
                             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar23)) {
                            pcVar9 = (code *)swi(3);
                            (*pcVar9)();
                            return;
                          }
                          iVar27 = (pFVar7->Samplers).Array.ArrayNum;
                          piVar1 = &(pFVar7->Samplers).Array.ArrayMax;
                          if (iVar27 == *piVar1) {
                            iVar27 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x808,&(pFVar7->Samplers).Array.AllocatorInstance,
                                                piVar1);
                          }
                          (pFVar7->Samplers).Array.ArrayNum = iVar27 + 1;
                          *(undefined8 **)
                           ((pFVar7->Samplers).Array.AllocatorInstance.Data + (longlong)iVar27 * 8)
                               = local_510;
                          puVar40[2] = local_470;
                          puVar40[3] = pFVar30;
                          *(undefined4 *)(puVar40 + 4) = 0;
                          pFVar7 = pFVar50->JsonAnimation;
                          local_338 = &___7FGLTFJsonAnimationChannel__6B_;
                          local_328 = &___7FGLTFJsonAnimationChannelTarget__6B_;
                          local_318 = 2;
                          pFVar51 = (pFVar7->Channels).AllocatorInstance.Data;
                          local_510 = (undefined8 *)0x0;
                          local_330 = puVar40;
                          local_320 = pFVar35;
                          if (((pFVar51 <= (FScriptContainerElement *)&local_338) &&
                              ((FScriptContainerElement *)&local_338 <
                               pFVar51 + (longlong)(pFVar7->Channels).ArrayMax * 0x28)) &&
                             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar23)) {
                            pcVar9 = (code *)swi(3);
                            (*pcVar9)();
                            return;
                          }
                          iVar27 = (pFVar7->Channels).ArrayNum;
                          piVar1 = &(pFVar7->Channels).ArrayMax;
                          if (iVar27 == *piVar1) {
                            iVar27 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x828,&(pFVar7->Channels).AllocatorInstance,piVar1);
                          }
                          lVar28 = (longlong)iVar27;
                          (pFVar7->Channels).ArrayNum = iVar27 + 1;
                          pFVar51 = (pFVar7->Channels).AllocatorInstance.Data;
                          *(undefined ***)(pFVar51 + lVar28 * 0x28) =
                               &___7FGLTFJsonAnimationChannel__6B_;
                          *(undefined8 **)(pFVar51 + lVar28 * 0x28 + 8) = local_330;
                          *(undefined ***)(pFVar51 + lVar28 * 0x28 + 0x10) =
                               &___7FGLTFJsonAnimationChannelTarget__6B_;
                          *(FGLTFJsonNode **)(pFVar51 + lVar28 * 0x28 + 0x18) = local_320;
                          *(undefined4 *)(pFVar51 + lVar28 * 0x28 + 0x20) = local_318;
                          puVar40 = local_528;
                          iVar27 = iVar4;
                          if (local_4d0.Data != (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_4d0.Data);
                            puVar40 = local_528;
                          }
                        }
                      }
                    }
                    puVar42 = local_3c8 + 1;
                    uVar32 = (ulonglong)local_47c;
                  }
                }
              }
              uVar32 = (ulonglong)local_478;
              plVar56 = plVar56 + 1;
            }
          }
        }
        FVar52 = (FFrameRate)((longlong)FVar52 + 8);
        lVar44 = local_468;
        local_4a0 = FVar52;
      } while (FVar52 != local_2d0);
    }
    uVar32 = local_508 & 0xffffffff;
    lVar28 = lVar28 + 0x40;
  } while( true );
}

