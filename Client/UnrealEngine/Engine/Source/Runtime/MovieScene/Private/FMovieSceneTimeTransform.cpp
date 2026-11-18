// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// StaticStruct @ 146056160

UScriptStruct * __cdecl FMovieSceneTimeTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTimeTransform.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneTimeTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTimeTransform,(UObject *)pUVar1,
                         L"MovieSceneTimeTransform");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneTimeTransform.OuterSingleton;
}

// Inverse @ 1461bb630

FMovieSceneTimeTransform * __thiscall
FMovieSceneTimeTransform::Inverse
          (FMovieSceneTimeTransform *this,FMovieSceneTimeTransform *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FFrameNumber FVar3;
  uint uVar4;
  FFrameTime FVar5;
  FMovieSceneTimeTransform *pFVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 in_XMM2 [16];
  undefined1 auVar10 [16];
  double dVar11;
  float fVar12;
  float fStackX_1c;
  
  FVar3 = (this->Offset).FrameNumber;
  fStackX_1c = (this->Offset).SubFrame;
  if (__real_322bcc77 < (float)((uint)this->TimeScale & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    if (fStackX_1c == 0.0) {
      uVar4 = -FVar3.Value;
      fVar7 = 0.0;
    }
    else {
      uVar4 = ~FVar3.Value;
      fVar7 = __real_3f800000 - fStackX_1c;
      if (::FFrameTime::MaxSubframe <= __real_3f800000 - fStackX_1c) {
        fVar7 = ::FFrameTime::MaxSubframe;
      }
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
    }
    fVar12 = __real_3f800000 / this->TimeScale;
    dVar11 = ((double)fVar7 + (double)(int)uVar4) / (double)this->TimeScale;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = dVar11;
    auVar10 = roundpd(in_XMM2,auVar10,1);
    uVar8 = auVar10._0_4_;
    uVar9 = auVar10._4_4_;
    if (__real_41dfffffffc00000 <= auVar10._0_8_) {
      uVar8 = SUB84(__real_41dfffffffc00000,0);
      uVar9 = (undefined4)((ulonglong)__real_41dfffffffc00000 >> 0x20);
    }
    if ((double)CONCAT44(uVar9,uVar8) <= __real_c1e0000000000000) {
      uVar8 = SUB84(__real_c1e0000000000000,0);
      uVar9 = (undefined4)((ulonglong)__real_c1e0000000000000 >> 0x20);
    }
    fVar7 = (float)(dVar11 - auVar10._0_8_);
    if (::FFrameTime::MaxSubframe <= fVar7) {
      fVar7 = ::FFrameTime::MaxSubframe;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    if (::FFrameTime::MaxSubframe <= fVar7) {
      fVar7 = ::FFrameTime::MaxSubframe;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    FVar5.SubFrame = fVar7;
    FVar5.FrameNumber.Value = (int)(double)CONCAT44(uVar9,uVar8);
  }
  else {
    fVar12 = __real_7f800000;
    if (fStackX_1c == 0.0) {
      FVar5.SubFrame = 0.0;
      FVar5.FrameNumber.Value = -FVar3.Value;
    }
    else {
      fVar7 = __real_3f800000 - fStackX_1c;
      if (::FFrameTime::MaxSubframe <= __real_3f800000 - fStackX_1c) {
        fVar7 = ::FFrameTime::MaxSubframe;
      }
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      FVar5.SubFrame = fVar7;
      FVar5.FrameNumber.Value = ~FVar3.Value;
    }
  }
  __return_storage_ptr__->TimeScale = fVar12;
  fVar7 = __real_322bcc77;
  fVar12 = (float)((uint)fVar12 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->Offset = FVar5;
  if (fVar12 <= fVar7) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!FMath::IsNearlyZero(TimeScale)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneTimeTransform.h"
                       ,0x2c,
                       L"It is invalid to create a linear transformation with a zero timescale. This case should be handled externally by FMovieSceneTimeWarpVariant and FLAG_Zero."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FMovieSceneTimeTransform *)(*pcVar1)();
      return pFVar6;
    }
  }
  return __return_storage_ptr__;
}

