// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// FFrameRateRetiming @ 14617ea00

FFrameRateRetiming * __thiscall
UE::MovieScene::FFrameRateRetiming::FFrameRateRetiming
          (FFrameRateRetiming *this,FFrameRate param_1,FFrameRate param_2)

{
  this->SourceRate = param_1;
  this->_padding_ = (longlong)&___7FFrameRateRetiming_MovieScene_UE__6B_;
  this->DestinationRate = param_2;
  return this;
}

// Begin @ 146194770

void __thiscall
UE::MovieScene::FFrameRateRetiming::Begin(FFrameRateRetiming *this,UMovieScene *param_1)

{
  return;
}

// End @ 1461a1450

void __thiscall
UE::MovieScene::FFrameRateRetiming::End(FFrameRateRetiming *this,UMovieScene *param_1)

{
  FFrameRate FVar1;
  UMovieSceneClock *pUVar2;
  
  FVar1 = param_1->TickResolution;
  pUVar2 = (param_1->CustomClock).field0_0x0.DebugPtr;
  param_1->TickResolution = this->DestinationRate;
  if (pUVar2 != (UMovieSceneClock *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001461a1474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x2c0))(pUVar2,FVar1);
    return;
  }
  return;
}

// GetScale @ 1461b3640

double __thiscall UE::MovieScene::FFrameRateRetiming::GetScale(FFrameRateRetiming *this)

{
  return (((double)(this->DestinationRate).Denominator / (double)(this->DestinationRate).Numerator)
         * (double)(this->SourceRate).Numerator) / (double)(this->SourceRate).Denominator;
}

// RecurseInto @ 1461c4a10

TUniquePtr<UE::MovieScene::IRetimingInterface,TDefaultDelete<UE::MovieScene::IRetimingInterface>_>
__thiscall
UE::MovieScene::FFrameRateRetiming::RecurseInto(FFrameRateRetiming *this,UMovieScene *param_1)

{
  undefined8 uVar1;
  FFrameRate FVar2;
  undefined8 *puVar3;
  longlong in_R8;
  
  uVar1 = *(undefined8 *)(in_R8 + 0x138);
  puVar3 = ::operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    FVar2 = this->DestinationRate;
    *puVar3 = &___7FFrameRateRetiming_MovieScene_UE__6B_;
    *(FFrameRate *)(puVar3 + 2) = FVar2;
    puVar3[1] = uVar1;
    param_1->_padding_ = (longlong)puVar3;
    return (TUniquePtr<UE::MovieScene::IRetimingInterface,TDefaultDelete<UE::MovieScene::IRetimingInterface>_>
            )(IRetimingInterface *)param_1;
  }
  param_1->_padding_ = 0;
  return (TUniquePtr<UE::MovieScene::IRetimingInterface,TDefaultDelete<UE::MovieScene::IRetimingInterface>_>
          )(IRetimingInterface *)param_1;
}

// RemapTime @ 1461c80a0

FFrameTime __thiscall
UE::MovieScene::FFrameRateRetiming::RemapTime(FFrameRateRetiming *this,FFrameTime param_1)

{
  FFrameRate in_R8;
  
  ConvertFrameTime(param_1,in_R8,this->SourceRate);
  return param_1;
}

