// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// GetEvaluationGroupName @ 146689e60

FName __cdecl IMovieSceneTracksModule::GetEvaluationGroupName(Type param_1)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  uint in_register_0000000c;
  uint in_EDX;
  
  FVar3.Number = in_register_0000000c;
  FVar3.ComparisonIndex.Value = param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(Names,"PreEvaluation");
      ::FName::FName(Names + 1,"SpawnObjects");
      ::FName::FName(Names + 2,"PostEvaluation");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (((int)in_EDX < 0) || (2 < in_EDX)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InEvalGroup >= 0 && InEvalGroup < (sizeof(UEArrayCountHelper(Names)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\MovieSceneTracksModule.cpp"
                       ,0x37,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  *(FName *)FVar3 = Names[(int)in_EDX];
  return FVar3;
}

