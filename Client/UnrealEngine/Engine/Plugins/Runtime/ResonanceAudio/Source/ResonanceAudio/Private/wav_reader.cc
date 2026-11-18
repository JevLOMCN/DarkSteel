// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 9

// WavReader @ 14f09baa0

WavReader * __thiscall vraudio::WavReader::WavReader(WavReader *this,uchar *param_1,ulong64 param_2)

{
  bool bVar1;
  
  (this->source).byte_array = param_1;
  (this->source).current_byte_index = 0;
  this->num_channels_ = 0;
  this->num_total_samples_ = 0;
  this->num_remaining_samples_ = 0;
  this->pcm_offset_bytes_ = 0;
  (this->source).num_bytes = param_2;
  this->sample_rate_hz_ = -1;
  bVar1 = ParseHeader(this);
  this->init_ = bVar1;
  return this;
}

// GetNumChannels @ 14f09baf0

ulong64 __thiscall vraudio::WavReader::GetNumChannels(WavReader *this)

{
  return this->num_channels_;
}

// GetNumTotalSamples @ 14f09bb00

ulong64 __thiscall vraudio::WavReader::GetNumTotalSamples(WavReader *this)

{
  return this->num_total_samples_;
}

// GetSampleRateHz @ 14f09bb10

int __thiscall vraudio::WavReader::GetSampleRateHz(WavReader *this)

{
  return this->sample_rate_hz_;
}

// IsHeaderValid @ 14f09bb20

bool __thiscall vraudio::WavReader::IsHeaderValid(WavReader *this)

{
  return this->init_;
}

// ParseHeader @ 14f09bb30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall vraudio::WavReader::ParseHeader(WavReader *this)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  short sVar3;
  ulonglong uVar4;
  uchar *puVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined8 uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  void *pvVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulong64 uVar25;
  ulonglong uVar26;
  void *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulonglong uStack_d8;
  void *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulonglong uStack_b8;
  void *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulonglong uStack_98;
  void *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulonglong uStack_78;
  ulonglong local_70 [3];
  ulonglong uStack_58;
  undefined4 local_30;
  
  uVar4 = (this->source).num_bytes;
  bVar15 = false;
  bVar13 = false;
  bVar11 = false;
  bVar9 = false;
  uVar25 = (this->source).current_byte_index;
  uVar23 = uVar25 + 0x24;
  if (uVar4 < uVar23) {
    return false;
  }
  puVar5 = (this->source).byte_array;
  auVar2 = *(undefined1 (*) [16])(puVar5 + uVar25 + 0x10);
  puVar1 = (uint *)(puVar5 + uVar25);
  uVar18 = *puVar1;
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  local_30 = *(undefined4 *)(puVar5 + uVar25 + 0x20);
  (this->source).current_byte_index = uVar23;
  if (auVar2._0_4_ < 0x10) {
    return false;
  }
  uVar26 = uVar23;
  if (auVar2._0_4_ != 0x10) {
    uVar26 = uVar25 + 0x26;
    if (uVar4 < uVar26) {
      return false;
    }
    sVar3 = *(short *)(puVar5 + uVar23);
    uVar23 = 0;
    (this->source).current_byte_index = uVar26;
    if ((longlong)sVar3 != 0) {
      do {
        uVar26 = uVar26 + 1;
        if (uVar4 < uVar26) {
          return false;
        }
        uVar23 = uVar23 + 1;
        (this->source).current_byte_index = uVar26;
      } while (uVar23 < (ulonglong)(longlong)sVar3);
    }
  }
  uVar23 = _UNK_152874538;
  uVar16 = ___xmm_000000000000000f0000000000000004;
  sVar3 = auVar2._4_2_;
  uVar20 = uVar26;
  if (sVar3 == -2) {
    uVar20 = uVar26 + 8;
    if (uVar4 < uVar20) {
      return false;
    }
    local_70[0] = *(ulonglong *)(puVar5 + uVar26);
    uVar26 = local_70[0] >> 0x20;
    local_70[1] = 0;
    (this->source).current_byte_index = uVar20;
    local_70[2] = uVar16;
    uStack_58 = uVar23;
    local_70[0] = local_70[0] & 0xffffffff;
    lVar21 = 0;
    do {
      lVar24 = lVar21 + 1;
      if (*(byte *)((longlong)local_70 + lVar21) != (&s_fact)[lVar21]) {
        uVar17 = -(uint)(*(byte *)((longlong)local_70 + lVar21) < (byte)(&s_fact)[lVar21]) | 1;
        goto LAB_14f09bc5d;
      }
      lVar21 = lVar24;
    } while (lVar24 != 4);
    uVar17 = 0;
LAB_14f09bc5d:
    if (uVar17 != 0) {
      return false;
    }
    uVar19 = 0;
    if (uVar26 != 0) {
      do {
        uVar20 = uVar20 + 1;
        if (uVar4 < uVar20) {
          return false;
        }
        uVar19 = uVar19 + 1;
        (this->source).current_byte_index = uVar20;
      } while (uVar19 < uVar26);
    }
  }
  if (uVar4 < uVar20 + 8) {
    return false;
  }
  uVar4 = *(ulonglong *)(puVar5 + uVar20);
  (this->source).current_byte_index = uVar20 + 8;
  this->sample_rate_hz_ = auVar2._8_4_;
  this->num_channels_ = (ulonglong)auVar2._6_2_;
  uVar26 = (ulonglong)(ushort)((uint)local_30 >> 0x13);
  this->bytes_per_sample_ = uVar26;
  if (uVar26 != 2) {
    return false;
  }
  uVar26 = uVar4 >> 0x21;
  this->num_total_samples_ = uVar26;
  this->num_remaining_samples_ = uVar26;
  bVar8 = false;
  bVar10 = false;
  bVar12 = false;
  bVar14 = false;
  if ((((auVar2._6_2_ == 0) ||
       (bVar8 = bVar9, bVar10 = bVar11, bVar12 = bVar13, bVar14 = bVar15, uVar26 == 0)) ||
      ((uVar4 >> 0x20 & 1) != 0)) || ((sVar3 != 1 && (sVar3 != -2)))) {
LAB_14f09be6b:
    bVar9 = true;
  }
  else {
    uStack_88 = 0;
    local_90 = (void *)(ulonglong)uVar18;
    local_80 = uVar16;
    uStack_78 = uVar23;
    lVar21 = 0;
    do {
      lVar24 = lVar21 + 1;
      if (*(byte *)((longlong)&local_90 + lVar21) != (&s_RIFF)[lVar21]) {
        uVar18 = -(uint)(*(byte *)((longlong)&local_90 + lVar21) < (byte)(&s_RIFF)[lVar21]) | 1;
        goto LAB_14f09bd4d;
      }
      lVar21 = lVar24;
    } while (lVar24 != 4);
    uVar18 = 0;
LAB_14f09bd4d:
    bVar14 = true;
    bVar12 = false;
    bVar10 = false;
    bVar8 = false;
    if (uVar18 != 0) goto LAB_14f09be6b;
    uStack_a8 = 0;
    local_b0 = (void *)(ulonglong)uVar6;
    local_a0 = uVar16;
    uStack_98 = uVar23;
    lVar21 = 0;
    do {
      lVar24 = lVar21 + 1;
      if (*(byte *)((longlong)&local_b0 + lVar21) != (&s_WAVE)[lVar21]) {
        uVar18 = -(uint)(*(byte *)((longlong)&local_b0 + lVar21) < (byte)(&s_WAVE)[lVar21]) | 1;
        goto LAB_14f09bdac;
      }
      lVar21 = lVar24;
    } while (lVar24 != 4);
    uVar18 = 0;
LAB_14f09bdac:
    bVar14 = true;
    bVar12 = true;
    bVar10 = false;
    bVar8 = false;
    if (uVar18 != 0) goto LAB_14f09be6b;
    uStack_c8 = 0;
    local_d0 = (void *)(ulonglong)uVar7;
    local_c0 = uVar16;
    uStack_b8 = uVar23;
    lVar21 = 0;
    do {
      lVar24 = lVar21 + 1;
      if (*(byte *)((longlong)&local_d0 + lVar21) != (&s_fmt_)[lVar21]) {
        uVar18 = -(uint)(*(byte *)((longlong)&local_d0 + lVar21) < (byte)(&s_fmt_)[lVar21]) | 1;
        goto LAB_14f09be0d;
      }
      lVar21 = lVar24;
    } while (lVar24 != 4);
    uVar18 = 0;
LAB_14f09be0d:
    bVar14 = true;
    bVar12 = true;
    bVar10 = true;
    bVar8 = false;
    if (uVar18 != 0) goto LAB_14f09be6b;
    uStack_e8 = 0;
    local_f0 = (void *)(uVar4 & 0xffffffff);
    local_e0 = uVar16;
    uStack_d8 = uVar23;
    lVar21 = 0;
    do {
      lVar24 = lVar21 + 1;
      if (*(byte *)((longlong)&local_f0 + lVar21) != (&s_data)[lVar21]) {
        uVar18 = -(uint)(*(byte *)((longlong)&local_f0 + lVar21) < (byte)(&s_data)[lVar21]) | 1;
        goto LAB_14f09be5d;
      }
      lVar21 = lVar24;
    } while (lVar24 != 4);
    uVar18 = 0;
LAB_14f09be5d:
    bVar14 = true;
    bVar12 = true;
    bVar10 = true;
    bVar8 = true;
    if (uVar18 != 0) goto LAB_14f09be6b;
    bVar9 = false;
  }
  if ((bVar8) && (0xf < uStack_d8)) {
    uVar25 = uStack_d8 + 1;
    pvVar22 = local_f0;
    if (0xfff < uVar25) {
      pvVar22 = *(void **)((longlong)local_f0 + -8);
      uVar25 = uStack_d8 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_f0 + (-8 - (longlong)pvVar22))) goto LAB_14f09bf6b;
    }
    ::operator_delete(pvVar22,uVar25);
  }
  if ((bVar10) && (0xf < uStack_b8)) {
    uVar25 = uStack_b8 + 1;
    pvVar22 = local_d0;
    if (0xfff < uVar25) {
      pvVar22 = *(void **)((longlong)local_d0 + -8);
      uVar25 = uStack_b8 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_d0 + (-8 - (longlong)pvVar22))) goto LAB_14f09bf6b;
    }
    ::operator_delete(pvVar22,uVar25);
  }
  if ((bVar12) && (0xf < uStack_98)) {
    uVar25 = uStack_98 + 1;
    pvVar22 = local_b0;
    if (0xfff < uVar25) {
      pvVar22 = *(void **)((longlong)local_b0 + -8);
      uVar25 = uStack_98 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_b0 + (-8 - (longlong)pvVar22))) goto LAB_14f09bf6b;
    }
    ::operator_delete(pvVar22,uVar25);
  }
  if ((bVar14) && (0xf < uStack_78)) {
    uVar25 = uStack_78 + 1;
    pvVar22 = local_90;
    if (0xfff < uVar25) {
      pvVar22 = *(void **)((longlong)local_90 + -8);
      uVar25 = uStack_78 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_90 + (-8 - (longlong)pvVar22))) {
LAB_14f09bf6b:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar22,uVar25);
  }
  if (bVar9) {
    return false;
  }
  this->pcm_offset_bytes_ = (this->source).current_byte_index;
  return true;
}

// ReadBinaryDataFromStream @ 14f09bfc0

ulong64 __thiscall
vraudio::WavReader::ReadBinaryDataFromStream(WavReader *this,void *param_1,ulong64 param_2)

{
  ulong64 *puVar1;
  ulong64 uVar2;
  
  uVar2 = (this->source).current_byte_index;
  if ((this->source).num_bytes < uVar2 + param_2) {
    return 0;
  }
  memcpy(param_1,(this->source).byte_array + uVar2,param_2);
  puVar1 = &(this->source).current_byte_index;
  *puVar1 = *puVar1 + param_2;
  return param_2;
}

// ReadSamples @ 14f09c020

ulong64 __thiscall vraudio::WavReader::ReadSamples(WavReader *this,ulong64 param_1,short *param_2)

{
  ulong64 *puVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  size_t _Size;
  
  uVar3 = this->num_remaining_samples_;
  if (param_1 < this->num_remaining_samples_) {
    uVar3 = param_1;
  }
  if (uVar3 == 0) {
    return 0;
  }
  _Size = param_1 * 2;
  uVar2 = (this->source).current_byte_index;
  if ((this->source).num_bytes < uVar2 + _Size) {
    _Size = 0;
  }
  else {
    memcpy(param_2,(this->source).byte_array + uVar2,_Size);
    puVar1 = &(this->source).current_byte_index;
    *puVar1 = *puVar1 + _Size;
  }
  uVar3 = _Size / this->bytes_per_sample_;
  this->num_remaining_samples_ = this->num_remaining_samples_ - uVar3;
  return uVar3;
}

// SeekToFrame @ 14f09c090

long64 __thiscall vraudio::WavReader::SeekToFrame(WavReader *this,ulong64 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = this->num_channels_;
  if (param_1 <= this->num_total_samples_ / uVar1) {
    (this->source).current_byte_index =
         uVar1 * this->bytes_per_sample_ * param_1 + this->pcm_offset_bytes_;
  }
  uVar2 = (this->source).current_byte_index;
  if (-1 < (longlong)uVar2) {
    if (this->pcm_offset_bytes_ < uVar2) {
      return (uVar2 - this->pcm_offset_bytes_) / (uVar1 * this->bytes_per_sample_);
    }
    uVar2 = 0;
  }
  return uVar2;
}

