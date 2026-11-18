// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdpcmAudioDecoder
// Functions: 5

// Decode @ 146bcc5b0

FDecodeResult * __thiscall
AdpcmAudioInfoPrivate::FPcmImpl::Decode
          (FPcmImpl *this,FDecodeResult *__return_storage_ptr__,uchar *param_1,int param_2,
          uchar *param_3,int param_4)

{
  int iVar1;
  
  if (param_4 < param_2) {
    param_2 = param_4;
  }
  memcpy(param_3,param_1,(longlong)param_2);
  iVar1 = *(int *)&this->field_0x10;
  __return_storage_ptr__->NumCompressedBytesConsumed = param_2;
  __return_storage_ptr__->NumPcmBytesProduced = param_2;
  __return_storage_ptr__->NumAudioFramesProduced =
       (int)(((ulonglong)(longlong)param_2 >> 1) / (ulonglong)(longlong)iVar1);
  return __return_storage_ptr__;
}

// GetFrameSize @ 146bcd3f0

int __thiscall AdpcmAudioInfoPrivate::FPcmImpl::GetFrameSize(FPcmImpl *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(longlong *)&this->field_0x8 + 0x30) -
          *(int *)(*(longlong *)&this->field_0x8 + 0x34);
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  iVar1 = 0x2580;
  if (iVar2 < 0x2580) {
    iVar1 = iVar2;
  }
  return iVar1;
}

// GetMaxFrameSizeSamples @ 146bcd650

uint __thiscall AdpcmAudioInfoPrivate::FPcmImpl::GetMaxFrameSizeSamples(FPcmImpl *this)

{
  return 0x12c0;
}

// ParseWaveHeader @ 146bcd920

bool __thiscall
AdpcmAudioInfoPrivate::FPcmImpl::ParseWaveHeader
          (FPcmImpl *this,FWaveModInfo *param_1,WaveFormatHeader *param_2,uint param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  
  if (param_2->wFormatTag == 1) {
    uVar1 = param_1->SampleDataSize;
    *(uint *)&this->field_0x14 = uVar1;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (longlong)*(int *)&this->field_0x10;
    *(int *)&this->field_0x1c = SUB164((ZEXT816(0) << 0x40 | ZEXT416(uVar1 >> 1)) / auVar2,0);
    return true;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5351384063741526304>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\PcmAudioInfoHybrid.cpp"
                     ,0x120,"FormatHeader->wFormatTag == 1");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  return false;
}

// SeekToFrame @ 146bce7a0

void __thiscall AdpcmAudioInfoPrivate::FPcmImpl::SeekToFrame(FPcmImpl *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(int *)&this->field_0x1c - 1;
  if (param_1 < uVar2) {
    uVar2 = param_1;
  }
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = uVar2;
  }
  FPcmAudioInfoHybrid::SeekToAbs
            (*(FPcmAudioInfoHybrid **)&this->field_0x8,
             (ulonglong)(uVar1 * *(int *)&this->field_0x10 * 2),(ulonglong)uVar1);
  return;
}

