// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMovieScene
// Functions: 1

// FindSectionData<FMovieSceneLiveLinkSectionTemplatePersistentData> @ 14d09a2f0

FMovieSceneLiveLinkSectionTemplatePersistentData * __thiscall
FPersistentEvaluationData::FindSectionData<FMovieSceneLiveLinkSectionTemplatePersistentData>
          (FPersistentEvaluationData *this)

{
  TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
  *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FMovieSceneLiveLinkSectionTemplatePersistentData *pFVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  this_00 = (TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
             *)this->EntityData;
  if (this_00 ==
      (TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
       *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2208776142733705528>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PersistentEvaluationData.h"
                       ,0x138,"EntityData");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMovieSceneLiveLinkSectionTemplatePersistentData *)(*pcVar1)();
      return pFVar4;
    }
  }
  else {
    iVar3 = TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FMovieSceneEvaluationKey>
                      (this_00,~(this->SectionKey).TrackIdentifier.Value ^
                               (this->SectionKey).SectionIndex ^ (this->SectionKey).SequenceID.Value
                       ,&this->SectionKey);
    if (iVar3 != -1) {
      lVar5 = (longlong)iVar3 * 0x20 + *(longlong *)&this_00->Elements;
      puVar6 = (undefined8 *)(lVar5 + 0x10);
      if (lVar5 == 0) {
        puVar6 = (undefined8 *)0x0;
      }
      if (puVar6 != (undefined8 *)0x0) {
        return (FMovieSceneLiveLinkSectionTemplatePersistentData *)*puVar6;
      }
    }
  }
  return (FMovieSceneLiveLinkSectionTemplatePersistentData *)0x0;
}

