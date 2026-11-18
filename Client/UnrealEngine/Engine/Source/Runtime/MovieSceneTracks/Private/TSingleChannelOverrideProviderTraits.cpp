// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// GetChannelOverrideEntityID @ 146794770

int __thiscall
UE::MovieScene::TSingleChannelOverrideProviderTraits<FMovieSceneFloatChannel,10>::
GetChannelOverrideEntityID
          (TSingleChannelOverrideProviderTraits<FMovieSceneFloatChannel,10> *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 != this->SingleChannelName) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8285997009345707937>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\IMovieSceneChannelOverrideProvider.h"
                       ,0x5f,"ChannelName == SingleChannelName");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return 10;
}

// GetChannelOverrideName @ 1467947c0

FName __thiscall
UE::MovieScene::TSingleChannelOverrideProviderTraits<FMovieSceneFloatChannel,10>::
GetChannelOverrideName
          (TSingleChannelOverrideProviderTraits<FMovieSceneFloatChannel,10> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  uint in_register_00000014;
  int in_R8D;
  
  FVar3.Number = in_register_00000014;
  FVar3.ComparisonIndex.Value = param_1;
  if (in_R8D != 10) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8285997009345707931>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\IMovieSceneChannelOverrideProvider.h"
                       ,0x65,"EntityID == OverrideEntityID");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  *(FName *)FVar3 = this->SingleChannelName;
  return FVar3;
}

// GetDefaultChannelTypeName @ 146794a60

FName __thiscall
UE::MovieScene::TSingleChannelOverrideProviderTraits<FMovieSceneFloatChannel,10>::
GetDefaultChannelTypeName
          (TSingleChannelOverrideProviderTraits<FMovieSceneFloatChannel,10> *this,FName param_1)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FMovieSceneFloatChannel::StaticStruct();
  *(longlong *)param_1 = pUVar1->_padding_;
  return param_1;
}

