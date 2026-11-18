// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// StartupModule @ 14658ea70

void __thiscall FMovieSceneTracksModule::StartupModule(FMovieSceneTracksModule *this)

{
  FName FVar1;
  code *pcVar2;
  FName *pFVar3;
  FModuleManager *this_00;
  IModuleInterface *pIVar4;
  int *piVar5;
  undefined2 local_res10 [4];
  FName local_res18;
  
  pFVar3 = ::FName::FName(&local_res18,"MovieScene");
  FVar1 = *pFVar3;
  this_00 = FModuleManager::Get();
  pIVar4 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  local_res10[0] = 0x8fff;
  pcVar2 = *(code **)((longlong)*pIVar4 + 0x40);
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(Names,"PreEvaluation");
      ::FName::FName(Names + 1,"SpawnObjects");
      ::FName::FName(Names + 2,"PostEvaluation");
      _Init_thread_footer(&::_TSS0);
    }
  }
  (*pcVar2)(pIVar4,Names[0],local_res10);
  pcVar2 = *(code **)((longlong)*pIVar4 + 0x40);
  local_res10[0] = 0xfff;
  if (*piVar5 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(Names,"PreEvaluation");
      ::FName::FName(Names + 1,"SpawnObjects");
      ::FName::FName(Names + 2,"PostEvaluation");
      _Init_thread_footer(&::_TSS0);
    }
  }
  (*pcVar2)(pIVar4,Names[1],local_res10);
  pcVar2 = *(code **)((longlong)*pIVar4 + 0x40);
  local_res10[0] = 8;
  if (*piVar5 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(Names,"PreEvaluation");
      ::FName::FName(Names + 1,"SpawnObjects");
      ::FName::FName(Names + 2,"PostEvaluation");
      _Init_thread_footer(&::_TSS0);
    }
  }
  (*pcVar2)(pIVar4,Names[2],local_res10);
  UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  return;
}

// ShutdownModule @ 14658eca0

void __thiscall FMovieSceneTracksModule::ShutdownModule(FMovieSceneTracksModule *this)

{
  return;
}

