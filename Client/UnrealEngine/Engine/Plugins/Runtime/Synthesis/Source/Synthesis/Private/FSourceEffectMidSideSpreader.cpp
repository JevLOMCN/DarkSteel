// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 4

// FSourceEffectMidSideSpreader @ 14f0b8070

FSourceEffectMidSideSpreader * __thiscall
FSourceEffectMidSideSpreader::FSourceEffectMidSideSpreader(FSourceEffectMidSideSpreader *this)

{
  FSoundEffectBase::FSoundEffectBase((FSoundEffectBase *)this);
  this->_padding_ = -1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSourceEffectMidSideSpreader__6B_;
  this->_padding_ = 0;
  this->MidScale = 1.0;
  this->SideScale = 1.0;
  this->NumChannels = 0;
  (this->SpreaderSettings).SpreadAmount = 0.5;
  (this->SpreaderSettings).InputMode = LeftRight;
  (this->SpreaderSettings).OutputMode = LeftRight;
  (this->SpreaderSettings).bEqualPower = false;
  return this;
}

// Init @ 14f0e4250

void __thiscall
FSourceEffectMidSideSpreader::Init
          (FSourceEffectMidSideSpreader *this,FSoundEffectSourceInitData *param_1)

{
  LOCK();
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  UNLOCK();
  this->NumChannels = param_1->NumSourceChannels;
  return;
}

// OnPresetChanged @ 14f0ed6f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FSourceEffectMidSideSpreader::OnPresetChanged(FSourceEffectMidSideSpreader *this)

{
  undefined1 *lpCriticalSection;
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  float fVar5;
  float fVar6;
  FSourceEffectMidSideSpreaderSettings local_res8;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = USourceEffectMidSideSpreaderPreset::StaticClass();
    iVar2 = (int)pUVar4->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar4->_padding_)) {
      lpCriticalSection = &pUVar3[2].field_0x18;
      if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      local_res8.SpreadAmount = *(float *)&pUVar3[3].field_0x18;
      local_res8.InputMode = pUVar3[3].field_0x1c;
      local_res8.OutputMode = pUVar3[3].field_0x1d;
      local_res8.bEqualPower = (bool)pUVar3[3].field_0x1e;
      local_res8._7_1_ = pUVar3[3].field_0x1f;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      goto LAB_14f0ed780;
    }
  }
  local_res8.SpreadAmount = 0.5;
  local_res8.InputMode = LeftRight;
  local_res8.OutputMode = LeftRight;
  local_res8.bEqualPower = false;
  local_res8._7_1_ = 0;
LAB_14f0ed780:
  fVar5 = local_res8.SpreadAmount * __real_3f000000;
  this->SpreaderSettings = local_res8;
  FMath::SinCos<float>(&this->SideScale,&this->MidScale,fVar5 * __real_40490fdb);
  bVar1 = (this->SpreaderSettings).bEqualPower;
  fVar5 = (float)((double)this->MidScale * ___real_3ff69fbe76c8b439);
  this->MidScale = fVar5;
  fVar6 = (float)((double)this->SideScale * ___real_3ff69fbe76c8b439);
  this->SideScale = fVar6;
  if (bVar1 == false) {
    if (__real_3f800000 <= fVar5) {
      fVar5 = __real_3f800000;
    }
    if (__real_3f800000 <= fVar6) {
      fVar6 = __real_3f800000;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    this->MidScale = fVar5;
    this->SideScale = fVar6;
  }
  return;
}

// ProcessAudio @ 14f0f3260

void __thiscall
FSourceEffectMidSideSpreader::ProcessAudio
          (FSourceEffectMidSideSpreader *this,FSoundEffectSourceInputData *param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  memcpy(param_2,param_1->InputSourceEffectBufferPtr,(longlong)param_1->NumSamples << 2);
  if (this->NumChannels == 2) {
    iVar2 = param_1->NumSamples;
    iVar3 = 0;
    iVar4 = 0;
    if ((this->SpreaderSettings).InputMode == LeftRight) {
      if (0 < iVar2) {
        do {
          fVar1 = param_2[iVar4];
          fVar5 = fVar1 + param_2[(longlong)iVar4 + 1];
          param_2[iVar4] = fVar5;
          param_2[(longlong)iVar4 + 1] = fVar1 - param_2[(longlong)iVar4 + 1];
          param_2[iVar4] = fVar5 * this->MidScale;
          param_2[(longlong)iVar4 + 1] = this->SideScale * param_2[(longlong)iVar4 + 1];
          iVar4 = iVar4 + this->NumChannels;
          iVar2 = param_1->NumSamples;
        } while (iVar4 < iVar2);
      }
    }
    else if (0 < iVar2) {
      do {
        param_2[iVar4] = param_2[iVar4] * this->MidScale;
        param_2[(longlong)iVar4 + 1] = this->SideScale * param_2[(longlong)iVar4 + 1];
        iVar4 = iVar4 + this->NumChannels;
        iVar2 = param_1->NumSamples;
      } while (iVar4 < iVar2);
    }
    fVar1 = __real_3f000000;
    if (((this->SpreaderSettings).OutputMode == LeftRight) && (0 < iVar2)) {
      do {
        fVar5 = param_2[iVar3];
        param_2[iVar3] = (fVar5 + param_2[(longlong)iVar3 + 1]) * fVar1;
        param_2[(longlong)iVar3 + 1] = (fVar5 - param_2[(longlong)iVar3 + 1]) * fVar1;
        iVar3 = iVar3 + this->NumChannels;
      } while (iVar3 < param_1->NumSamples);
    }
  }
  return;
}

