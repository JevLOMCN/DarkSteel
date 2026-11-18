// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 2

// FirFilter @ 14f073c20

FirFilter * __thiscall
vraudio::FirFilter::FirFilter(FirFilter *this,ChannelView *param_1,ulong64 param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  ChannelView *pCVar4;
  AudioBuffer *pAVar5;
  ulonglong uVar6;
  uint uVar7;
  float *pfVar8;
  ChannelView *pCVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 local_78;
  undefined4 local_74;
  AudioBuffer local_70;
  
  AudioBuffer::AudioBuffer(&this->coefficients_);
  AudioBuffer::AudioBuffer(&this->state_);
  uVar6 = param_1->size_;
  uVar12 = 0;
  uVar11 = (ulonglong)((uint)uVar6 & 3);
  uVar10 = uVar12;
  if (uVar11 != 0) {
    uVar10 = 4 - uVar11;
  }
  uVar10 = uVar10 + uVar6;
  this->filter_length_ = uVar10;
  this->num_filter_chunks_ = uVar10 >> 2;
  pAVar5 = AudioBuffer::AudioBuffer(&local_70,1,uVar10 * 4);
  AudioBuffer::operator=(&this->coefficients_,pAVar5);
  AudioBuffer::~AudioBuffer(&local_70);
  pCVar4 = (this->coefficients_).channel_views_._Mypair._Myval2._Myfirst;
  uVar10 = uVar12;
  uVar11 = uVar12;
  if (uVar6 != 0) {
    do {
      pfVar2 = param_1->begin_itr_ + uVar10;
      pfVar8 = (float *)((longlong)pCVar4->begin_itr_ + uVar11);
      pfVar1 = pfVar8 + 4;
      if (*pfVar2 == 0.0) {
        pfVar8[0] = 0.0;
        pfVar8[1] = 0.0;
        pfVar8[2] = 0.0;
        pfVar8[3] = 0.0;
      }
      else {
        if (pfVar1 < pfVar8) goto LAB_14f073d12;
        fVar3 = *pfVar2;
        if ((pfVar2 < pfVar8) || (pfVar8 + 3 < pfVar2)) {
          *pfVar8 = fVar3;
          pfVar8[1] = fVar3;
          pfVar8[2] = fVar3;
          pfVar8[3] = fVar3;
        }
        else {
          for (; pfVar8 != pfVar1; pfVar8 = pfVar8 + 1) {
LAB_14f073d12:
            *pfVar8 = *pfVar2;
          }
        }
      }
      uVar10 = uVar10 + 1;
      uVar11 = uVar11 + 0x10;
    } while (uVar10 < uVar6);
  }
  local_78 = 0;
  local_74 = 0;
  pfVar1 = pCVar4->begin_itr_ + pCVar4->size_;
  pfVar2 = pCVar4->begin_itr_ + uVar6 * 4;
  uVar6 = uVar12;
  do {
    uVar10 = uVar6 + 1;
    if (*(byte *)((longlong)&local_78 + uVar6) != *(byte *)((longlong)&local_74 + uVar6)) {
      uVar7 = -(uint)(*(byte *)((longlong)&local_78 + uVar6) <
                     *(byte *)((longlong)&local_74 + uVar6)) | 1;
      goto LAB_14f073d7f;
    }
    uVar6 = uVar10;
  } while (uVar10 != 4);
  uVar7 = 0;
LAB_14f073d7f:
  uVar6 = (longlong)pfVar1 - (longlong)pfVar2;
  if (uVar7 == 0) {
    uVar6 = uVar6 & 0xfffffffffffffffc;
  }
  else {
    uVar6 = uVar6 + 3 >> 2;
    if (pfVar1 < pfVar2) {
      uVar6 = uVar12;
    }
    if (uVar6 == 0) goto LAB_14f073db4;
    uVar6 = uVar6 << 2;
  }
  memset(pfVar2,0,uVar6);
LAB_14f073db4:
  pAVar5 = AudioBuffer::AudioBuffer(&local_70,1,this->filter_length_ + param_2);
  AudioBuffer::operator=(&this->state_,pAVar5);
  AudioBuffer::~AudioBuffer(&local_70);
  pCVar4 = (this->state_).channel_views_._Mypair._Myval2._Mylast;
  for (pCVar9 = (this->state_).channel_views_._Mypair._Myval2._Myfirst; pCVar9 != pCVar4;
      pCVar9 = pCVar9 + 1) {
    pCVar9->enabled_ = true;
    memset(pCVar9->begin_itr_,0,pCVar9->size_ << 2);
  }
  return this;
}

// Process @ 14f073e40

void __thiscall
vraudio::FirFilter::Process(FirFilter *this,ChannelView *param_1,ChannelView *param_2)

{
  float *pfVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  ChannelView *pCVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  ulonglong uVar16;
  float *pfVar17;
  ulonglong uVar18;
  float *pfVar19;
  float *pfVar20;
  ulonglong uVar21;
  float *pfVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  uVar2 = this->filter_length_;
  uVar3 = param_1->size_;
  if (uVar2 != 0) {
    pCVar4 = (this->state_).channel_views_._Mypair._Myval2._Myfirst;
    pfVar5 = pCVar4->begin_itr_;
    memmove(pfVar5,pfVar5 + (pCVar4->size_ - uVar2),uVar2 * 4);
  }
  if (uVar3 != 0) {
    memmove(((this->state_).channel_views_._Mypair._Myval2._Myfirst)->begin_itr_ +
            this->filter_length_,param_1->begin_itr_,uVar3 * 4);
  }
  uVar18 = this->num_filter_chunks_;
  pfVar5 = param_2->begin_itr_;
  pfVar6 = ((this->coefficients_).channel_views_._Mypair._Myval2._Myfirst)->begin_itr_;
  if (uVar18 < uVar18 + (uVar3 >> 2)) {
    pfVar20 = ((this->state_).channel_views_._Mypair._Myval2._Myfirst)->begin_itr_ + uVar18 * 4;
    uVar16 = uVar18;
    do {
      uVar21 = 0;
      pfVar17 = pfVar5 + (uVar18 - uVar16) * 4;
      if (uVar16 != 0) {
        fVar23 = *pfVar17;
        fVar24 = pfVar17[1];
        fVar25 = pfVar17[2];
        fVar26 = pfVar17[3];
        pfVar19 = pfVar6 + 8;
        pfVar22 = pfVar20;
        do {
          fVar7 = *pfVar22;
          fVar8 = pfVar22[1];
          uVar21 = uVar21 + 1;
          fVar9 = pfVar22[-2];
          fVar10 = pfVar22[-1];
          fVar23 = fVar7 * pfVar19[-8] + fVar23;
          fVar24 = fVar8 * pfVar19[-7] + fVar24;
          fVar25 = pfVar22[2] * pfVar19[-6] + fVar25;
          fVar26 = pfVar22[3] * pfVar19[-5] + fVar26;
          *pfVar17 = fVar23;
          pfVar17[1] = fVar24;
          pfVar17[2] = fVar25;
          pfVar17[3] = fVar26;
          fVar23 = fVar10 * pfVar19[-4] + fVar23;
          fVar24 = fVar7 * pfVar19[-3] + fVar24;
          fVar25 = pfVar22[1] * pfVar19[-2] + fVar25;
          fVar26 = pfVar22[2] * pfVar19[-1] + fVar26;
          *pfVar17 = fVar23;
          pfVar17[1] = fVar24;
          pfVar17[2] = fVar25;
          pfVar17[3] = fVar26;
          fVar23 = fVar9 * *pfVar19 + fVar23;
          fVar24 = fVar10 * pfVar19[1] + fVar24;
          fVar25 = fVar7 * pfVar19[2] + fVar25;
          fVar26 = fVar8 * pfVar19[3] + fVar26;
          *pfVar17 = fVar23;
          pfVar17[1] = fVar24;
          pfVar17[2] = fVar25;
          pfVar17[3] = fVar26;
          pfVar11 = pfVar22 + -3;
          pfVar12 = pfVar22 + -2;
          pfVar22 = pfVar22 + -4;
          pfVar1 = pfVar19 + 4;
          pfVar13 = pfVar19 + 5;
          pfVar14 = pfVar19 + 6;
          pfVar15 = pfVar19 + 7;
          pfVar19 = pfVar19 + 0x10;
          fVar23 = *pfVar11 * *pfVar1 + fVar23;
          fVar24 = *pfVar12 * *pfVar13 + fVar24;
          fVar25 = fVar10 * *pfVar14 + fVar25;
          fVar26 = fVar7 * *pfVar15 + fVar26;
          *pfVar17 = fVar23;
          pfVar17[1] = fVar24;
          pfVar17[2] = fVar25;
          pfVar17[3] = fVar26;
          uVar16 = this->num_filter_chunks_;
        } while (uVar21 < uVar16);
      }
      uVar18 = uVar18 + 1;
      pfVar20 = pfVar20 + 4;
    } while (uVar18 < uVar16 + (uVar3 >> 2));
  }
  return;
}

