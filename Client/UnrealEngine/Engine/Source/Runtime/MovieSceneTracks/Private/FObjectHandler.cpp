// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// DispatchInitializePropertyMetaDataTasks @ 14665d5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FObjectHandler::DispatchInitializePropertyMetaDataTasks
          (FObjectHandler *this,FPropertyDefinition *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3,UMovieSceneEntitySystemLinker *param_4)

{
  FBuiltInComponentTypes *pFVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  undefined1 auStack_1d8 [32];
  ushort local_1b8;
  ushort local_1b6 [7];
  FMovieSceneTracksComponentTypes *local_1a8;
  ushort *local_1a0;
  undefined8 local_190;
  TStatIdData *pTStack_188;
  byte local_180;
  undefined7 uStack_17f;
  undefined4 uStack_178;
  uint uStack_174;
  TComponentTypeID<UObject_*> local_170;
  TComponentTypeID<FMovieScenePropertyBinding> TStack_16e;
  uint uStack_16c;
  TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
  TStack_168;
  undefined6 uStack_166;
  undefined1 local_138 [8];
  FComponentAccess aFStack_130 [4];
  wchar_t *local_128;
  TStatIdData *pTStack_120;
  ulonglong local_118;
  undefined8 uStack_110;
  FEntityComponentFilter local_108;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  pFVar1 = FBuiltInComponentTypes::Get();
  pFVar2 = FMovieSceneTracksComponentTypes::Get();
  local_170 = pFVar1->BoundObject;
  TStack_16e = pFVar1->PropertyBinding;
  pTStack_188 = &TStatId::TStatId_NAME_None;
  uStack_16c = (ushort)pFVar1->CustomPropertyIndex | 0x7fff0000;
  TStack_168 = (pFVar2->Object).MetaDataComponents;
  local_190 = 0;
  uStack_174 = uStack_174 & 0xffffff00;
  local_138 = (undefined1  [8])
              ((ulonglong)CONCAT24(pFVar1->CustomPropertyIndex,CONCAT22(TStack_16e,local_170)) |
              0x7fff000000000000);
  aFStack_130._2_6_ = uStack_166;
  aFStack_130[0].ComponentType.Value = TStack_168;
  local_1b8 = (pFVar1->Tags).NeedsLink.Value;
  local_108.AllMask.Bits.NumBits = 0;
  local_108.NoneMask.Bits.NumBits = 0;
  local_108.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ComplexMasks.ArrayNum = 0;
  local_108.ComplexMasks.ArrayMax = 0;
  local_58 = 0;
  local_20 = 0;
  uStack_178 = 0x6ff;
  local_118 = CONCAT71(uStack_17f,local_180) & 0xffffffffffffffe0;
  uStack_110._4_4_ = uStack_174;
  uStack_110._0_4_ = AnyHiPriThreadHiPriTask;
  local_128 = (wchar_t *)0x0;
  pTStack_120 = &TStatId::TStatId_NAME_None;
  local_108.AllMask.Bits.MaxBits = 0x180;
  local_108.NoneMask.Bits.MaxBits = 0x180;
  local_54 = 0x180;
  local_1c = 0x180;
  local_180 = local_180 & 0xe0;
  AddAccessorToFilter((FComponentAccess *)local_138,&local_108);
  AddAccessorToFilter((FComponentAccess *)(local_138 + 2),&local_108);
  AddAccessorToFilter(aFStack_130,&local_108);
  local_1a8 = (FMovieSceneTracksComponentTypes *)&local_1b8;
  local_1a0 = local_1b6;
  FComponentMask::SetAll
            (&local_108.AllMask,(initializer_list<UE::MovieScene::FComponentTypeID> *)&local_1a8);
  local_1a8 = pFVar2;
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
  ::
  Iterate_PerEntityImpl<_UE::MovieScene::FObjectHandler::DispatchInitializePropertyMetaDataTasks_::__l2::<lambda_1>_>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
              *)local_138,&param_4->EntityManager,&local_108,(<lambda_1> *)&local_1a8);
  if (local_108.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

