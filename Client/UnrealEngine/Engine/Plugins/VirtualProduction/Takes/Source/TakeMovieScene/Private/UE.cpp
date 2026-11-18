// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TakeMovieScene
// Functions: 4

// Construct<FTakeMovieSceneHitchTimecodeCurves> @ 14d0b8970

void __cdecl UE::CoreUObject::Private::Construct<FTakeMovieSceneHitchTimecodeCurves>(void *param_1)

{
  memset(param_1,0,0x480);
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(param_1);
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel
            ((FMovieSceneIntegerChannel *)((longlong)param_1 + 0x120));
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel
            ((FMovieSceneIntegerChannel *)((longlong)param_1 + 0x240));
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel
            ((FMovieSceneIntegerChannel *)((longlong)param_1 + 0x360));
  return;
}

// ConstructForTests<FTakeMovieSceneHitchTimecodeCurves> @ 14d0b89c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTakeMovieSceneHitchTimecodeCurves>(void *param_1)

{
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(param_1);
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel
            ((FMovieSceneIntegerChannel *)((longlong)param_1 + 0x120));
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel
            ((FMovieSceneIntegerChannel *)((longlong)param_1 + 0x240));
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel
            ((FMovieSceneIntegerChannel *)((longlong)param_1 + 0x360));
  return;
}

// Destruct<FTakeMovieSceneHitchTimecodeCurves> @ 14d0b8a00

void __cdecl UE::CoreUObject::Private::Destruct<FTakeMovieSceneHitchTimecodeCurves>(void *param_1)

{
  FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel
            ((FMovieSceneIntegerChannel *)((longlong)param_1 + 0x360));
  FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel
            ((FMovieSceneIntegerChannel *)((longlong)param_1 + 0x240));
  FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel
            ((FMovieSceneIntegerChannel *)((longlong)param_1 + 0x120));
  FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel(param_1);
  return;
}

// Copy<FTakeMovieSceneHitchTimecodeCurves> @ 14d0b8a40

bool __cdecl
UE::CoreUObject::Private::Copy<FTakeMovieSceneHitchTimecodeCurves>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FMovieSceneIntegerChannel::operator=(param_1,param_2);
    FMovieSceneIntegerChannel::operator=
              ((FMovieSceneIntegerChannel *)((longlong)param_1 + 0x120),
               (FMovieSceneIntegerChannel *)((longlong)param_2 + 0x120));
    FMovieSceneIntegerChannel::operator=
              ((FMovieSceneIntegerChannel *)((longlong)param_1 + 0x240),
               (FMovieSceneIntegerChannel *)((longlong)param_2 + 0x240));
    FMovieSceneIntegerChannel::operator=
              ((FMovieSceneIntegerChannel *)((longlong)param_1 + 0x360),
               (FMovieSceneIntegerChannel *)((longlong)param_2 + 0x360));
    param_2 = (void *)((longlong)param_2 + 0x480);
    param_1 = (FMovieSceneIntegerChannel *)((longlong)param_1 + 0x480);
  }
  return true;
}

