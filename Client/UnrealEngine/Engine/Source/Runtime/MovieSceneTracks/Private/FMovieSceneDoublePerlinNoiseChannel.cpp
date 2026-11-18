// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 5

// StaticStruct @ 14658d7f0

UScriptStruct * __cdecl FMovieSceneDoublePerlinNoiseChannel::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel,
                         (UObject *)pUVar1,L"MovieSceneDoublePerlinNoiseChannel");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel.OuterSingleton;
}

// FMovieSceneDoublePerlinNoiseChannel @ 146610420

FMovieSceneDoublePerlinNoiseChannel * __thiscall
FMovieSceneDoublePerlinNoiseChannel::FMovieSceneDoublePerlinNoiseChannel
          (FMovieSceneDoublePerlinNoiseChannel *this)

{
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieSceneDoublePerlinNoiseChannel__6B_;
  (this->PerlinNoiseParams).Amplitude = 1.0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 2;
  (this->PerlinNoiseParams).Frequency = 4.0;
  (this->PerlinNoiseParams).Offset = 0.0;
  return this;
}

// Evaluate @ 146668840

double __thiscall
FMovieSceneDoublePerlinNoiseChannel::Evaluate
          (FMovieSceneDoublePerlinNoiseChannel *this,double param_1)

{
  float fVar1;
  
  fVar1 = FMath::PerlinNoise1D
                    ((float)(((double)(this->PerlinNoiseParams).Offset + param_1) *
                            (double)(this->PerlinNoiseParams).Frequency));
  return (double)fVar1 * (this->PerlinNoiseParams).Amplitude;
}

// Evaluate @ 146668880

bool __thiscall
FMovieSceneDoublePerlinNoiseChannel::Evaluate
          (FMovieSceneDoublePerlinNoiseChannel *this,UMovieSceneSection *param_1,FFrameTime param_2,
          double *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  int iVar6;
  float fVar7;
  float fStackX_14;
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_254329902931640300>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Channels\\MovieSceneDoublePerlinNoiseChannel.cpp"
                       ,0x14,"InSection");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    pUVar4 = Z_Construct_UClass_UMovieScene_NoRegister();
    pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar4);
    if (pUVar5 != (UObject *)0x0) {
      fStackX_14 = param_2.SubFrame;
      iVar6 = (int)((ulonglong)*(undefined8 *)&pUVar5[7].field_0x20 >> 0x20);
      fVar7 = FMath::PerlinNoise1D
                        ((((float)((longlong)iVar6 * (longlong)param_2.FrameNumber.Value.Value) +
                          (float)iVar6 * fStackX_14) /
                          (float)(int)*(undefined8 *)&pUVar5[7].field_0x20 +
                         (this->PerlinNoiseParams).Offset) * (this->PerlinNoiseParams).Frequency);
      *param_3 = (double)fVar7 * (this->PerlinNoiseParams).Amplitude;
      return true;
    }
  }
  return false;
}

// Evaluate @ 146668990

double __cdecl
FMovieSceneDoublePerlinNoiseChannel::Evaluate(FPerlinNoiseParams *param_1,double param_2)

{
  float fVar1;
  
  fVar1 = FMath::PerlinNoise1D
                    ((float)(((double)param_1->Offset + param_2) * (double)param_1->Frequency));
  return (double)fVar1 * param_1->Amplitude;
}

