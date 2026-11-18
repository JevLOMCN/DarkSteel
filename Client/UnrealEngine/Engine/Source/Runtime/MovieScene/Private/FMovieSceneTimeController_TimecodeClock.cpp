// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// OnRequestCurrentTime @ 1462266a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FFrameTime __thiscall
FMovieSceneTimeController_TimecodeClock::OnRequestCurrentTime
          (FMovieSceneTimeController_TimecodeClock *this,FQualifiedFrameTime *param_1,float param_2)

{
  UTimecodeProvider *pUVar1;
  FFrameRate FVar2;
  int iVar3;
  FFrameRate local_38;
  FFrameRate local_30;
  FTimecode local_28;
  
  if ((GEngine != (UEngine *)0x0) &&
     (pUVar1 = (GEngine->TimecodeProvider).field0_0x0.DebugPtr, pUVar1 != (UTimecodeProvider *)0x0))
  {
    iVar3 = (**(code **)(pUVar1->_padding_ + 0x2c8))();
    if (iVar3 == 2) {
      FApp::GetTimecode(&local_28);
      FApp::GetTimecodeFrameRate();
      FTimecode::ToFrameNumber(&local_28,&local_38);
      local_38.Denominator = 0;
      FVar2.Denominator = 0;
      FVar2.Numerator = local_38.Numerator;
      ConvertFrameTime((FFrameTime)param_1,FVar2,local_30);
      return (FFrameTime)param_1;
    }
  }
  (param_1->Time).FrameNumber = 0;
  (param_1->Time).SubFrame = 0.0;
  return (FFrameTime)param_1;
}

