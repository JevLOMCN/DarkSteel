// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 3

// Init @ 14f0e4e60

void __thiscall
FSourceEffectPanner::Init(FSourceEffectPanner *this,FSoundEffectSourceInitData *param_1)

{
  LOCK();
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  UNLOCK();
  this->NumChannels = param_1->NumSourceChannels;
  return;
}

// OnPresetChanged @ 14f0ee370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FSourceEffectPanner::OnPresetChanged(FSourceEffectPanner *this)

{
  undefined1 *lpCriticalSection;
  undefined1 auVar1 [16];
  int iVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  undefined1 auVar6 [16];
  undefined8 local_res8;
  
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  auVar6 = ___xmm_3f8000003f8000003f8000003f800000;
  fVar3 = (float)__xmm_3f8000003f8000003f8000003f800000;
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = USourceEffectPannerPreset::StaticClass();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar5->_padding_)) {
      lpCriticalSection = &pUVar4[2].field_0x18;
      if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      local_res8 = *(ulonglong *)&pUVar4[3].field_0x18;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      goto LAB_14f0ee425;
    }
  }
  local_res8 = auVar6._0_8_ & 0xffffffff;
LAB_14f0ee425:
  FMath::SinCos<float>
            (this->SpreadGains,this->SpreadGains + 1,
             (float)local_res8 * __real_3f000000 * __real_3fc90fdb + __real_3f490fdb);
  FMath::SinCos<float>
            (this->PanGains,this->PanGains + 1,(fVar3 - local_res8._4_4_) * __real_3f490fdb);
  auVar1._0_4_ = this->SpreadGains[0];
  auVar1._4_4_ = this->SpreadGains[1];
  auVar1._8_4_ = this->PanGains[0];
  auVar1._12_4_ = this->PanGains[1];
  auVar6 = minps(auVar1,auVar6);
  auVar6 = maxps(auVar6,ZEXT816(0));
  this->SpreadGains[0] = (float)auVar6._0_4_;
  this->SpreadGains[1] = (float)auVar6._4_4_;
  this->PanGains[0] = (float)auVar6._8_4_;
  this->PanGains[1] = (float)auVar6._12_4_;
  return;
}

// ProcessAudio @ 14f0f3900

void __thiscall
FSourceEffectPanner::ProcessAudio
          (FSourceEffectPanner *this,FSoundEffectSourceInputData *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  if (this->NumChannels != 2) {
    memcpy(param_2,param_1->InputSourceEffectBufferPtr,(longlong)param_1->NumSamples << 2);
    return;
  }
  iVar3 = 0;
  if (0 < param_1->NumSamples) {
    do {
      fVar1 = param_1->InputSourceEffectBufferPtr[iVar3];
      fVar2 = param_1->InputSourceEffectBufferPtr[(longlong)iVar3 + 1];
      param_2[iVar3] =
           (fVar2 * this->SpreadGains[1] + fVar1 * this->SpreadGains[0]) * this->PanGains[0];
      param_2[(longlong)iVar3 + 1] =
           (fVar2 * this->SpreadGains[0] + fVar1 * this->SpreadGains[1]) * this->PanGains[1];
      iVar3 = iVar3 + this->NumChannels;
    } while (iVar3 < param_1->NumSamples);
  }
  return;
}

