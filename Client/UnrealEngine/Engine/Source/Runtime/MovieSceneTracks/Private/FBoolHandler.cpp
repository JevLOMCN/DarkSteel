// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// DispatchInitializePropertyMetaDataTasks @ 14665d420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FBoolHandler::DispatchInitializePropertyMetaDataTasks
          (FBoolHandler *this,FPropertyDefinition *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3,UMovieSceneEntitySystemLinker *param_4)

{
  FBuiltInComponentTypes *pFVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  undefined1 auStack_1c8 [32];
  FComponentTypeID local_1a8;
  FComponentTypeID local_1a6;
  <lambda_1> local_1a4 [12];
  undefined8 local_198;
  TStatIdData *pTStack_190;
  byte local_188;
  undefined7 uStack_187;
  undefined4 uStack_180;
  uint uStack_17c;
  initializer_list<UE::MovieScene::FComponentTypeID> local_178;
  TComponentTypeID<UObject_*> local_168;
  TComponentTypeID<FMovieScenePropertyBinding> TStack_166;
  TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
  TStack_164;
  undefined2 uStack_162;
  undefined8 uStack_160;
  TStatIdData *pTStack_158;
  ulonglong uStack_150;
  undefined8 uStack_148;
  undefined1 local_138 [4];
  FComponentAccess aFStack_134 [2];
  wchar_t *pwStack_130;
  TStatIdData *local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  FEntityComponentFilter local_110;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  pFVar1 = FBuiltInComponentTypes::Get();
  pFVar2 = FMovieSceneTracksComponentTypes::Get();
  pTStack_190 = &TStatId::TStatId_NAME_None;
  local_168 = pFVar1->BoundObject;
  TStack_164 = (pFVar2->Bool).MetaDataComponents;
  TStack_166 = pFVar1->PropertyBinding;
  local_198 = 0;
  uStack_17c = uStack_17c & 0xffffff00;
  local_1a8.Value = (pFVar1->Tags).NeedsLink.Value;
  uStack_160 = 0;
  pTStack_158 = &TStatId::TStatId_NAME_None;
  local_110.AllMask.Bits.NumBits = 0;
  local_138._2_2_ = TStack_166;
  local_138._0_2_ = local_168;
  unique0x100001f4 = TStack_164;
  unique0x100001f6 = uStack_162;
  local_110.NoneMask.Bits.NumBits = 0;
  local_110.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ComplexMasks.ArrayNum = 0;
  local_110.ComplexMasks.ArrayMax = 0;
  local_60 = 0;
  local_28 = 0;
  uStack_180 = 0x6ff;
  uStack_150 = CONCAT71(uStack_187,local_188) & 0xffffffffffffffe0;
  uStack_148._4_4_ = uStack_17c;
  uStack_148._0_4_ = AnyHiPriThreadHiPriTask;
  pwStack_130 = (wchar_t *)0x0;
  local_110.AllMask.Bits.MaxBits = 0x180;
  local_110.NoneMask.Bits.MaxBits = 0x180;
  local_128 = &TStatId::TStatId_NAME_None;
  local_5c = 0x180;
  local_24 = 0x180;
  local_188 = local_188 & 0xe0;
  uStack_120 = uStack_150;
  local_118 = uStack_148;
  AddAccessorToFilter((FComponentAccess *)local_138,&local_110);
  AddAccessorToFilter((FComponentAccess *)(local_138 + 2),&local_110);
  AddAccessorToFilter((FComponentAccess *)(local_138 + 4),&local_110);
  local_178._First = &local_1a8;
  local_178._Last = &local_1a6;
  FComponentMask::SetAll(&local_110.AllMask,&local_178);
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
  ::
  Iterate_PerEntityImpl<_UE::MovieScene::FBoolHandler::DispatchInitializePropertyMetaDataTasks_::__l2::<lambda_1>_>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
              *)local_138,&param_4->EntityManager,&local_110,local_1a4);
  if (local_110.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

