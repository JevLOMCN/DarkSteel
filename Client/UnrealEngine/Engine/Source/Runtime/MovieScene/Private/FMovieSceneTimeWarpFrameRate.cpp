// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticStruct @ 146244b90

UScriptStruct * __cdecl FMovieSceneTimeWarpFrameRate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpFrameRate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpFrameRate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTimeWarpFrameRate,(UObject *)pUVar1,
                         L"MovieSceneTimeWarpFrameRate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpFrameRate.OuterSingleton;
}

// FMovieSceneTimeWarpFrameRate @ 146299500

FMovieSceneTimeWarpFrameRate * __thiscall
FMovieSceneTimeWarpFrameRate::FMovieSceneTimeWarpFrameRate
          (FMovieSceneTimeWarpFrameRate *this,FFrameRate param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 local_res8;
  FFrameRate local_res10;
  undefined4 local_res18;
  undefined4 *local_18;
  FFrameRate *local_10;
  
  local_res8 = param_1.Numerator;
  uVar3 = (ulonglong)param_1 >> 0x20;
  local_res18 = param_1.Denominator;
  local_res10 = param_1;
  if (((ulonglong)param_1 & 0x7f800000) != 0) {
    local_18 = &local_res8;
    local_10 = &local_res10;
    `FMovieSceneTimeWarpFrameRate::FMovieSceneTimeWarpFrameRate'::__l2::<lambda_1>::operator()
              (&local_18);
    param_1.Denominator = 0;
    param_1.Numerator = local_res8;
    uVar3 = (ulonglong)local_res18;
  }
  uVar1 = param_1.Numerator;
  uVar2 = (uint)uVar3;
  if ((uVar3 & 0x7f800000) != 0) {
    local_18 = &local_res18;
    local_10 = &local_res10;
    `FMovieSceneTimeWarpFrameRate::FMovieSceneTimeWarpFrameRate'::__l2::<lambda_2>::operator()
              (&local_18);
    uVar1 = local_res8;
    uVar2 = local_res18;
  }
  local_res8._2_1_ = (byte)(uVar1 >> 0x10) | (byte)(uVar1 >> 0x18) & 0x80;
  *(short *)this->FrameRateNumerator = (short)uVar1;
  local_res18._2_1_ = (byte)(uVar2 >> 0x10) | (byte)(uVar2 >> 0x18) & 0x80;
  this->FrameRateNumerator[2] = local_res8._2_1_;
  *(short *)this->FrameRateDenominator = (short)uVar2;
  this->FrameRateDenominator[2] = local_res18._2_1_;
  return this;
}

// FMovieSceneTimeWarpFrameRate @ 1462995d0

FMovieSceneTimeWarpFrameRate * __thiscall
FMovieSceneTimeWarpFrameRate::FMovieSceneTimeWarpFrameRate(FMovieSceneTimeWarpFrameRate *this)

{
  FMovieSceneTimeWarpFrameRate(this,(FFrameRate)0x10000ea60);
  return this;
}

// GetFrameRate @ 1462af0f0

FFrameRate __thiscall FMovieSceneTimeWarpFrameRate::GetFrameRate(FMovieSceneTimeWarpFrameRate *this)

{
  uint3 uVar1;
  FFrameRate in_RDX;
  
  uVar1 = *(uint3 *)this->FrameRateDenominator;
  *(uint *)in_RDX =
       (*(uint3 *)this->FrameRateNumerator & 0xff800000) << 8 |
       *(uint3 *)this->FrameRateNumerator & 0xff7fffff;
  *(uint *)((longlong)in_RDX + 4) = (uVar1 & 0xff800000) << 8 | uVar1 & 0xff7fffff;
  return in_RDX;
}

// operator() @ 1504e76e0

bool __thiscall
`FMovieSceneTimeWarpFrameRate::FMovieSceneTimeWarpFrameRate'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FText *this_00;
  bool bVar4;
  FText local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6351983814461357678>);
  if (bVar2) {
    this_00 = FFrameRate::ToPrettyText(*(FFrameRate **)((longlong)this + 8),&local_18);
    FText::ToString(this_00);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6351983814461357678>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504e7756;
    }
  }
  bVar2 = false;
LAB_1504e7756:
  if ((bVar4) && (local_18.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504e87d0

bool __thiscall
`FMovieSceneTimeWarpFrameRate::FMovieSceneTimeWarpFrameRate'::__l2::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FText *this_00;
  bool bVar4;
  FText local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6351983814461357677>);
  if (bVar2) {
    this_00 = FFrameRate::ToPrettyText(*(FFrameRate **)((longlong)this + 8),&local_18);
    FText::ToString(this_00);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6351983814461357677>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504e8846;
    }
  }
  bVar2 = false;
LAB_1504e8846:
  if ((bVar4) && (local_18.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

