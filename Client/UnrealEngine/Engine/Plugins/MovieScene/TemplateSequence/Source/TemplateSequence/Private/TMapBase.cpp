// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 2

// FindOrAddImpl<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>_const_&> @ 14ac67a90

FMultiPropertyScaleValue * __thiscall
TMapBase<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>_>
::
FindOrAddImpl<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>_const_&>
          (TMapBase<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>_>
           *this,uint param_1,
          TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName> *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName> *local_res20;
  
  iVar1 = TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>,FDefaultSetAllocator>
          ::
          FindIndexByHash<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>_>
                    (&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x48, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>,FDefaultSetAllocator>
    ::
    EmplaceByHash<TKeyInitializer<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>_const_&>_>
              (&this->Pairs,(uint)local_res8,
               (TKeyInitializer<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>_const_&>
                *)(ulonglong)param_1,(bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x48;
  }
  return (FMultiPropertyScaleValue *)(lVar2 + 0x20);
}

// Find @ 14ac75740

FMultiPropertyScaleValue * __thiscall
TMapBase<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>_>
::Find(TMapBase<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>_>
       *this,TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName> *param_1)

{
  longlong lVar1;
  ushort uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  ulong64 uVar6;
  FMultiPropertyScaleValue *pFVar7;
  uint uVar8;
  
  uVar2 = *(ushort *)param_1;
  uVar8 = *(int *)&param_1->field_0x4 + -0x61c88647 + (uint)uVar2 * 0x40 + (uint)(uVar2 >> 2) ^
          (uint)uVar2;
  uVar6 = CityHash64(&param_1->field_0x8,0x10);
  uVar8 = uVar8 * 0x40 + (uVar8 >> 2) + (int)uVar6 + -0x61c88647 ^ uVar8;
  uVar3 = *(undefined8 *)&param_1->field_0x18;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  iVar5 = TSet<TTuple<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue>,TDefaultMapHashableKeyFuncs<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>,UTemplateSequencePropertyScalingEvaluatorSystem::FMultiPropertyScaleValue,0>,FDefaultSetAllocator>
          ::
          FindIndexByHash<TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName>_>
                    (&this->Pairs,
                     uVar8 * 0x40 + (int)((ulonglong)uVar3 >> 0x20) + (uVar8 >> 2) +
                     uVar4 + 0x9e3779b9 ^ uVar8,param_1);
  if (iVar5 == -1) {
    pFVar7 = (FMultiPropertyScaleValue *)0x0;
  }
  else {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar5 * 0x48;
    pFVar7 = (FMultiPropertyScaleValue *)0x0;
    if (lVar1 != 0) {
      pFVar7 = (FMultiPropertyScaleValue *)(lVar1 + 0x20);
    }
  }
  return pFVar7;
}

