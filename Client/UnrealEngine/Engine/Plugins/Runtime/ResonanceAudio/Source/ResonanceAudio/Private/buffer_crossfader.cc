// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 2

// BufferCrossfader @ 14f094c50

BufferCrossfader * __thiscall
vraudio::BufferCrossfader::BufferCrossfader(BufferCrossfader *this,ulong64 param_1)

{
  ChannelView *pCVar1;
  float fVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  
  uVar3 = 2;
  AudioBuffer::AudioBuffer(&this->crossfade_buffer_,2,param_1);
  fVar2 = __real_3f800000;
  pCVar1 = (this->crossfade_buffer_).channel_views_._Mypair._Myval2._Myfirst;
  uVar4 = 0;
  if (3 < param_1) {
    fVar6 = __real_3f800000 / (float)param_1;
    do {
      pCVar1->begin_itr_[uVar4] = (float)uVar4 * fVar6;
      pCVar1[1].begin_itr_[uVar4] = fVar2 - (float)uVar4 * fVar6;
      fVar5 = (float)(uVar3 - 1) * fVar6;
      pCVar1->begin_itr_[uVar4 + 1] = fVar5;
      pCVar1[1].begin_itr_[uVar4 + 1] = fVar2 - fVar5;
      if ((longlong)uVar3 < 0) {
        fVar5 = (float)(uVar3 >> 1) + (float)(uVar3 >> 1);
      }
      else {
        fVar5 = (float)(longlong)uVar3;
      }
      pCVar1->begin_itr_[uVar4 + 2] = fVar5 * fVar6;
      pCVar1[1].begin_itr_[uVar4 + 2] = fVar2 - fVar5 * fVar6;
      fVar5 = (float)(uVar3 + 1) * fVar6;
      uVar3 = uVar3 + 4;
      pCVar1->begin_itr_[uVar4 + 3] = fVar5;
      pCVar1[1].begin_itr_[uVar4 + 3] = fVar2 - fVar5;
      uVar4 = uVar4 + 4;
    } while (uVar4 < param_1 - 3);
  }
  if (uVar4 < param_1) {
    do {
      fVar6 = (float)uVar4 * (fVar2 / (float)param_1);
      pCVar1->begin_itr_[uVar4] = fVar6;
      pCVar1[1].begin_itr_[uVar4] = fVar2 - fVar6;
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_1);
  }
  return this;
}

// ApplyLinearCrossfade @ 14f094e60

void __thiscall
vraudio::BufferCrossfader::ApplyLinearCrossfade
          (BufferCrossfader *this,AudioBuffer *param_1,AudioBuffer *param_2,AudioBuffer *param_3)

{
  ulong64 uVar1;
  ChannelView *pCVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = (longlong)(param_1->channel_views_)._Mypair._Myval2._Mylast -
          (longlong)(param_1->channel_views_)._Mypair._Myval2._Myfirst;
  lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
  uVar1 = param_1->num_frames_;
  lVar8 = (lVar8 >> 2) - (lVar8 >> 0x3f);
  pCVar2 = (this->crossfade_buffer_).channel_views_._Mypair._Myval2._Myfirst;
  pfVar3 = pCVar2->begin_itr_;
  pfVar4 = pCVar2[1].begin_itr_;
  if (lVar8 != 0) {
    lVar7 = 0;
    do {
      pfVar5 = *(float **)
                ((longlong)&((param_2->channel_views_)._Mypair._Myval2._Myfirst)->begin_itr_ + lVar7
                );
      pfVar6 = *(float **)
                ((longlong)&((param_3->channel_views_)._Mypair._Myval2._Myfirst)->begin_itr_ + lVar7
                );
      MultiplyPointwise(uVar1,pfVar3,
                        *(float **)
                         ((longlong)
                          &((param_1->channel_views_)._Mypair._Myval2._Myfirst)->begin_itr_ + lVar7)
                        ,pfVar6);
      MultiplyAndAccumulatePointwise(uVar1,pfVar4,pfVar5,pfVar6);
      lVar7 = lVar7 + 0x18;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}

