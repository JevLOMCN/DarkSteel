// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// SetNewMipCount @ 145e24f50

void __thiscall
FMipBiasFade::SetNewMipCount
          (FMipBiasFade *this,float param_1,float param_2,double param_3,EMipFadeSettings param_4)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((param_1 < 0.0) || (param_1 < param_2)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActualMipCount >=0 && TargetMipCount <= ActualMipCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderResource.cpp"
                       ,0x283,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar3 = __real_3f800000;
  fVar2 = __real_322bcc77;
  fVar8 = this->TotalMipCount;
  if (((fVar8 == 0.0) ||
      (GMipLevelFadingAgeThreshold <= (float)((double)FApp::CurrentTime - param_3))) ||
     (GEnableMipLevelFading < 0.0)) {
    this->TotalMipCount = param_1;
    this->MipCountDelta = 0.0;
    this->MipCountFadingRate = 0.0;
    this->StartTime = GRenderingRealtimeClock.CurrentTime;
    this->BiasOffset = 0.0;
  }
  else if ((__real_322bcc77 <
            (float)((uint)(fVar8 - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
          (__real_322bcc77 <
           (float)((uint)(param_2 - ((fVar8 - this->BiasOffset) + this->MipCountDelta)) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    if (GEnableMipLevelFading < 0.0) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = (GRenderingRealtimeClock.CurrentTime - this->StartTime) * this->MipCountFadingRate;
      if (__real_3f800000 <= fVar6) {
        fVar6 = __real_3f800000;
      }
      fVar6 = this->BiasOffset - fVar6 * this->MipCountDelta;
    }
    this->StartTime = GRenderingRealtimeClock.CurrentTime;
    this->TotalMipCount = param_1;
    fVar7 = fVar8 - fVar6;
    if (param_1 <= fVar8 - fVar6) {
      fVar7 = param_1;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    fVar8 = param_2 - fVar7;
    this->MipCountDelta = fVar8;
    if (fVar2 < (float)((uint)fVar8 & uVar4)) {
      this->BiasOffset = param_1 - fVar7;
      if (fVar8 <= 0.0) {
        this->MipCountFadingRate =
             __real_bf800000 / (fVar8 * GMipFadeSettings[(int)param_4].FadeOutSpeed);
      }
      else {
        this->MipCountFadingRate = fVar3 / (fVar8 * GMipFadeSettings[(int)param_4].FadeInSpeed);
      }
    }
    else {
      this->MipCountDelta = 0.0;
      this->MipCountFadingRate = 0.0;
      this->BiasOffset = 0.0;
    }
  }
  return;
}

