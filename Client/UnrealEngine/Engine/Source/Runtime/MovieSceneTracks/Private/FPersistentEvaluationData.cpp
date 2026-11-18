// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// GetSectionData<PropertyTemplate::FSectionData> @ 1465d8010

FSectionData * __thiscall
FPersistentEvaluationData::GetSectionData<PropertyTemplate::FSectionData>
          (FPersistentEvaluationData *this)

{
  TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
  *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FSectionData *pFVar4;
  longlong lVar5;
  longlong *plVar6;
  
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
      pFVar4 = (FSectionData *)(*pcVar1)();
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
      plVar6 = (longlong *)(lVar5 + 0x10);
      if (lVar5 == 0) {
        plVar6 = (longlong *)0x0;
      }
      if ((plVar6 != (longlong *)0x0) && ((FSectionData *)*plVar6 != (FSectionData *)0x0)) {
        return (FSectionData *)*plVar6;
      }
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Ptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PersistentEvaluationData.h"
                     ,0x146,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FSectionData *)(*pcVar1)();
    return pFVar4;
  }
  return (FSectionData *)0x0;
}

