// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 33

// ConvertInterleavedToPlanarTemplated<short_const_*,vraudio::AudioBuffer_&> @ 14f097fe0

void __cdecl
vraudio::`anonymous_namespace'::
ConvertInterleavedToPlanarTemplated<short_const_*,vraudio::AudioBuffer_&>
          (short *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4,
          vector<unsigned___int64,std::allocator<unsigned___int64>_> *param_5,AudioBuffer *param_6,
          ulong64 param_7,ulong64 param_8,ulong64 param_9,ulong64 param_10)

{
  short sVar1;
  ulong64 *puVar2;
  ChannelView *pCVar3;
  float fVar4;
  float *pfVar5;
  ChannelView *pCVar6;
  ulonglong uVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  fVar4 = __real_38000100;
  if ((param_3 == 2) && (param_8 == 2)) {
    if (param_5 == (vector<unsigned___int64,std::allocator<unsigned___int64>_> *)0x0) {
      pCVar6 = (param_6->channel_views_)._Mypair._Myval2._Myfirst;
      pfVar5 = pCVar6[1].begin_itr_;
    }
    else {
      puVar2 = (param_5->_Mypair)._Myval2._Myfirst;
      pCVar3 = (param_6->channel_views_)._Mypair._Myval2._Myfirst;
      pCVar6 = pCVar3 + *puVar2;
      pfVar5 = pCVar3[puVar2[1]].begin_itr_;
      param_10 = param_2;
    }
    DeinterleaveStereo(param_10,param_1 + param_3 * param_4,pCVar6->begin_itr_ + param_9,
                       pfVar5 + param_9);
    return;
  }
  uVar12 = 0;
  if (param_8 != 0) {
    pCVar6 = (param_6->channel_views_)._Mypair._Myval2._Myfirst;
    do {
      uVar7 = uVar12;
      if (param_5 != (vector<unsigned___int64,std::allocator<unsigned___int64>_> *)0x0) {
        uVar7 = (param_5->_Mypair)._Myval2._Myfirst[uVar12];
      }
      psVar10 = param_1 + param_3 * param_4 + uVar7;
      uVar7 = 0;
      pfVar5 = pCVar6->begin_itr_ + param_9;
      if (3 < param_10) {
        lVar11 = (param_10 - 4 >> 2) + 1;
        uVar7 = lVar11 * 4;
        do {
          psVar8 = psVar10 + param_3;
          *pfVar5 = (float)(int)*psVar10 * fVar4;
          psVar9 = psVar8 + param_3;
          pfVar5[1] = (float)(int)*psVar8 * fVar4;
          pfVar5[2] = (float)(int)*psVar9 * fVar4;
          psVar10 = psVar9 + param_3 + param_3;
          pfVar5[3] = (float)(int)psVar9[param_3] * fVar4;
          pfVar5 = pfVar5 + 4;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      if (uVar7 < param_10) {
        lVar11 = param_10 - uVar7;
        do {
          sVar1 = *psVar10;
          psVar10 = psVar10 + param_3;
          *pfVar5 = (float)(int)sVar1 * fVar4;
          lVar11 = lVar11 + -1;
          pfVar5 = pfVar5 + 1;
        } while (lVar11 != 0);
      }
      uVar12 = uVar12 + 1;
      pCVar6 = pCVar6 + 1;
    } while (uVar12 < param_8);
  }
  return;
}

// ConvertInterleavedToPlanarTemplated<short_const_*,float_*_const_*> @ 14f0981c0

void __cdecl
vraudio::`anonymous_namespace'::ConvertInterleavedToPlanarTemplated<short_const_*,float_*_const_*>
          (short *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4,
          vector<unsigned___int64,std::allocator<unsigned___int64>_> *param_5,float **param_6,
          ulong64 param_7,ulong64 param_8,ulong64 param_9,ulong64 param_10)

{
  short sVar1;
  ulong64 *puVar2;
  float fVar3;
  longlong lVar4;
  float **ppfVar5;
  ulonglong uVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  float *pfVar10;
  ulonglong uVar11;
  
  fVar3 = __real_38000100;
  if ((param_3 == 2) && (param_8 == 2)) {
    if (param_5 == (vector<unsigned___int64,std::allocator<unsigned___int64>_> *)0x0) {
      lVar4 = 8;
      ppfVar5 = param_6;
    }
    else {
      puVar2 = (param_5->_Mypair)._Myval2._Myfirst;
      ppfVar5 = param_6 + *puVar2;
      lVar4 = puVar2[1] << 3;
      param_10 = param_2;
    }
    DeinterleaveStereo(param_10,param_1 + param_3 * param_4,*ppfVar5 + param_9,
                       (float *)(*(longlong *)(lVar4 + (longlong)param_6) + param_9 * 4));
  }
  else {
    uVar11 = 0;
    if (param_8 != 0) {
      do {
        uVar6 = uVar11;
        if (param_5 != (vector<unsigned___int64,std::allocator<unsigned___int64>_> *)0x0) {
          uVar6 = (param_5->_Mypair)._Myval2._Myfirst[uVar11];
        }
        psVar9 = param_1 + param_3 * param_4 + uVar6;
        uVar6 = 0;
        pfVar10 = param_6[uVar11] + param_9;
        if (3 < param_10) {
          lVar4 = (param_10 - 4 >> 2) + 1;
          uVar6 = lVar4 * 4;
          do {
            psVar7 = psVar9 + param_3;
            *pfVar10 = (float)(int)*psVar9 * fVar3;
            psVar8 = psVar7 + param_3;
            pfVar10[1] = (float)(int)*psVar7 * fVar3;
            pfVar10[2] = (float)(int)*psVar8 * fVar3;
            psVar9 = psVar8 + param_3 + param_3;
            pfVar10[3] = (float)(int)psVar8[param_3] * fVar3;
            pfVar10 = pfVar10 + 4;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        if (uVar6 < param_10) {
          lVar4 = param_10 - uVar6;
          do {
            sVar1 = *psVar9;
            psVar9 = psVar9 + param_3;
            *pfVar10 = (float)(int)sVar1 * fVar3;
            lVar4 = lVar4 + -1;
            pfVar10 = pfVar10 + 1;
          } while (lVar4 != 0);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < param_8);
    }
  }
  return;
}

// ConvertInterleavedToPlanarTemplated<float_const_*,vraudio::AudioBuffer_&> @ 14f098390

void __cdecl
vraudio::`anonymous_namespace'::
ConvertInterleavedToPlanarTemplated<float_const_*,vraudio::AudioBuffer_&>
          (float *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4,
          vector<unsigned___int64,std::allocator<unsigned___int64>_> *param_5,AudioBuffer *param_6,
          ulong64 param_7,ulong64 param_8,ulong64 param_9,ulong64 param_10)

{
  float fVar1;
  ulong64 *puVar2;
  ChannelView *pCVar3;
  float *pfVar4;
  ChannelView *pCVar5;
  ulonglong uVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((param_3 == 2) && (param_8 == 2)) {
    if (param_5 == (vector<unsigned___int64,std::allocator<unsigned___int64>_> *)0x0) {
      pCVar5 = (param_6->channel_views_)._Mypair._Myval2._Myfirst;
      pfVar4 = pCVar5[1].begin_itr_;
    }
    else {
      puVar2 = (param_5->_Mypair)._Myval2._Myfirst;
      pCVar3 = (param_6->channel_views_)._Mypair._Myval2._Myfirst;
      pCVar5 = pCVar3 + *puVar2;
      pfVar4 = pCVar3[puVar2[1]].begin_itr_;
      param_10 = param_2;
    }
    DeinterleaveStereo(param_10,param_1 + param_3 * param_4,pCVar5->begin_itr_ + param_9,
                       pfVar4 + param_9);
    return;
  }
  uVar11 = 0;
  if (param_8 != 0) {
    pCVar5 = (param_6->channel_views_)._Mypair._Myval2._Myfirst;
    do {
      uVar6 = uVar11;
      if (param_5 != (vector<unsigned___int64,std::allocator<unsigned___int64>_> *)0x0) {
        uVar6 = (param_5->_Mypair)._Myval2._Myfirst[uVar11];
      }
      pfVar9 = param_1 + param_3 * param_4 + uVar6;
      uVar6 = 0;
      pfVar4 = pCVar5->begin_itr_ + param_9;
      if (3 < param_10) {
        lVar10 = (param_10 - 4 >> 2) + 1;
        uVar6 = lVar10 * 4;
        do {
          pfVar7 = pfVar9 + param_3;
          *pfVar4 = *pfVar9;
          pfVar8 = pfVar7 + param_3;
          pfVar4[1] = *pfVar7;
          pfVar4[2] = *pfVar8;
          pfVar9 = pfVar8 + param_3 + param_3;
          pfVar4[3] = pfVar8[param_3];
          pfVar4 = pfVar4 + 4;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      if (uVar6 < param_10) {
        lVar10 = param_10 - uVar6;
        do {
          fVar1 = *pfVar9;
          pfVar9 = pfVar9 + param_3;
          *pfVar4 = fVar1;
          pfVar4 = pfVar4 + 1;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      uVar11 = uVar11 + 1;
      pCVar5 = pCVar5 + 1;
    } while (uVar11 < param_8);
  }
  return;
}

// ConvertPlanarToInterleavedTemplated<vraudio::AudioBuffer_const_&,short_*> @ 14f098530

void __cdecl
vraudio::`anonymous_namespace'::
ConvertPlanarToInterleavedTemplated<vraudio::AudioBuffer_const_&,short_*>
          (AudioBuffer *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4,short *param_5,
          ulong64 param_6,ulong64 param_7,ulong64 param_8,ulong64 param_9)

{
  short *psVar1;
  longlong lVar2;
  ChannelView *pCVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  short *psVar9;
  ulonglong uVar10;
  longlong lVar11;
  float *pfVar12;
  longlong lVar13;
  float fVar14;
  
  fVar5 = __real_c6fffe00;
  fVar4 = __real_46fffe00;
  psVar1 = param_5 + param_7 * param_8;
  if ((param_3 == 2) && (param_7 == 2)) {
    pCVar3 = (param_1->channel_views_)._Mypair._Myval2._Myfirst;
    InterleaveStereo(param_9,pCVar3->begin_itr_ + param_4,pCVar3[1].begin_itr_ + param_4,psVar1);
    return;
  }
  uVar10 = 0;
  if (param_7 != 0) {
    lVar13 = 0;
    do {
      lVar2 = *(longlong *)
               ((longlong)&((param_1->channel_views_)._Mypair._Myval2._Myfirst)->begin_itr_ + lVar13
               ) + param_4 * 4;
      uVar6 = 0;
      uVar8 = uVar10;
      if (3 < param_9) {
        lVar11 = (param_9 - 4 >> 2) + 1;
        uVar6 = lVar11 * 4;
        pfVar12 = (float *)(lVar2 + 8);
        do {
          fVar14 = pfVar12[-2] * fVar4;
          if (pfVar12[-2] * fVar4 <= fVar5) {
            fVar14 = fVar5;
          }
          if (fVar4 <= fVar14) {
            fVar14 = fVar4;
          }
          psVar1[uVar8] = (short)(int)fVar14;
          fVar14 = pfVar12[-1] * fVar4;
          if (pfVar12[-1] * fVar4 <= fVar5) {
            fVar14 = fVar5;
          }
          if (fVar4 <= fVar14) {
            fVar14 = fVar4;
          }
          psVar1[uVar8 + param_7] = (short)(int)fVar14;
          lVar7 = uVar8 + param_7 + param_7;
          fVar14 = *pfVar12 * fVar4;
          if (*pfVar12 * fVar4 <= fVar5) {
            fVar14 = fVar5;
          }
          if (fVar4 <= fVar14) {
            fVar14 = fVar4;
          }
          psVar1[lVar7] = (short)(int)fVar14;
          lVar7 = lVar7 + param_7;
          fVar14 = pfVar12[1] * fVar4;
          if (pfVar12[1] * fVar4 <= fVar5) {
            fVar14 = fVar5;
          }
          if (fVar4 <= fVar14) {
            fVar14 = fVar4;
          }
          psVar1[lVar7] = (short)(int)fVar14;
          uVar8 = lVar7 + param_7;
          lVar11 = lVar11 + -1;
          pfVar12 = pfVar12 + 4;
        } while (lVar11 != 0);
      }
      if (uVar6 < param_9) {
        psVar9 = psVar1 + uVar8;
        do {
          lVar11 = uVar6 * 4;
          uVar6 = uVar6 + 1;
          fVar14 = *(float *)(lVar2 + lVar11) * fVar4;
          if (fVar14 <= fVar5) {
            fVar14 = fVar5;
          }
          if (fVar4 <= fVar14) {
            fVar14 = fVar4;
          }
          *psVar9 = (short)(int)fVar14;
          psVar9 = psVar9 + param_7;
        } while (uVar6 < param_9);
      }
      uVar10 = uVar10 + 1;
      lVar13 = lVar13 + 0x18;
    } while (uVar10 < param_7);
  }
  return;
}

// ConvertPlanarToInterleavedTemplated<vraudio::AudioBuffer_const_&,float_*> @ 14f0986d0

void __cdecl
vraudio::`anonymous_namespace'::
ConvertPlanarToInterleavedTemplated<vraudio::AudioBuffer_const_&,float_*>
          (AudioBuffer *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4,float *param_5,
          ulong64 param_6,ulong64 param_7,ulong64 param_8,ulong64 param_9)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float *pfVar7;
  longlong lVar8;
  ChannelView *pCVar9;
  
  pfVar1 = param_5 + param_7 * param_8;
  if ((param_3 == 2) && (param_7 == 2)) {
    pCVar9 = (param_1->channel_views_)._Mypair._Myval2._Myfirst;
    InterleaveStereo(param_9,pCVar9->begin_itr_ + param_4,pCVar9[1].begin_itr_ + param_4,pfVar1);
    return;
  }
  uVar6 = 0;
  if (param_7 != 0) {
    pCVar9 = (param_1->channel_views_)._Mypair._Myval2._Myfirst;
    do {
      pfVar2 = pCVar9->begin_itr_;
      uVar5 = 0;
      uVar4 = uVar6;
      if (3 < param_9) {
        lVar8 = (param_9 - 4 >> 2) + 1;
        uVar5 = lVar8 * 4;
        pfVar7 = pfVar2 + param_4 + 2;
        do {
          pfVar1[uVar4] = pfVar7[-2];
          pfVar1[uVar4 + param_7] = pfVar7[-1];
          lVar3 = uVar4 + param_7 + param_7;
          pfVar1[lVar3] = *pfVar7;
          lVar3 = lVar3 + param_7;
          pfVar1[lVar3] = pfVar7[1];
          uVar4 = lVar3 + param_7;
          lVar8 = lVar8 + -1;
          pfVar7 = pfVar7 + 4;
        } while (lVar8 != 0);
      }
      if (uVar5 < param_9) {
        pfVar7 = pfVar1 + uVar4;
        do {
          lVar8 = param_4 + uVar5;
          uVar5 = uVar5 + 1;
          *pfVar7 = pfVar2[lVar8];
          pfVar7 = pfVar7 + param_7;
        } while (uVar5 < param_9);
      }
      uVar6 = uVar6 + 1;
      pCVar9 = pCVar9 + 1;
    } while (uVar6 < param_7);
  }
  return;
}

// FillAudioBuffer @ 14f098810

void __cdecl
vraudio::FillAudioBuffer
          (vector<short,std::allocator<short>_> *param_1,ulong64 param_2,AudioBuffer *param_3)

{
  short *psVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  psVar1 = (param_1->_Mypair)._Myval2._Myfirst;
  uVar2 = param_3->num_frames_;
  uVar3 = (ulonglong)((longlong)(param_1->_Mypair)._Myval2._Mylast - (longlong)psVar1 >> 1) /
          param_2;
  if (uVar2 < uVar3) {
    uVar3 = uVar2;
  }
  uVar4 = uVar3;
  if (uVar2 < uVar3) {
    uVar4 = uVar2;
  }
  `anonymous_namespace'::ConvertInterleavedToPlanarTemplated<short_const_*,vraudio::AudioBuffer_&>
            (psVar1,uVar3,param_2,0,
             (vector<unsigned___int64,std::allocator<unsigned___int64>_> *)0x0,param_3,uVar2,
             ((longlong)(param_3->channel_views_)._Mypair._Myval2._Mylast -
             (longlong)(param_3->channel_views_)._Mypair._Myval2._Myfirst) / 0x18,0,uVar4);
  return;
}

// FillAudioBuffer @ 14f0988b0

void __cdecl
vraudio::FillAudioBuffer
          (vector<float,std::allocator<float>_> *param_1,ulong64 param_2,AudioBuffer *param_3)

{
  float *pfVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  pfVar1 = (param_1->_Mypair)._Myval2._Myfirst;
  uVar2 = param_3->num_frames_;
  uVar3 = (ulonglong)((longlong)(param_1->_Mypair)._Myval2._Mylast - (longlong)pfVar1 >> 2) /
          param_2;
  if (uVar2 < uVar3) {
    uVar3 = uVar2;
  }
  uVar4 = uVar3;
  if (uVar2 < uVar3) {
    uVar4 = uVar2;
  }
  `anonymous_namespace'::ConvertInterleavedToPlanarTemplated<float_const_*,vraudio::AudioBuffer_&>
            (pfVar1,uVar3,param_2,0,
             (vector<unsigned___int64,std::allocator<unsigned___int64>_> *)0x0,param_3,uVar2,
             ((longlong)(param_3->channel_views_)._Mypair._Myval2._Mylast -
             (longlong)(param_3->channel_views_)._Mypair._Myval2._Myfirst) / 0x18,0,uVar4);
  return;
}

// FillAudioBuffer @ 14f098950

void __cdecl
vraudio::FillAudioBuffer(short *param_1,ulong64 param_2,ulong64 param_3,AudioBuffer *param_4)

{
  ulonglong uVar1;
  ulong64 uVar2;
  
  uVar1 = param_4->num_frames_;
  uVar2 = param_2;
  if (uVar1 < param_2) {
    uVar2 = uVar1;
  }
  `anonymous_namespace'::ConvertInterleavedToPlanarTemplated<short_const_*,vraudio::AudioBuffer_&>
            (param_1,param_2,param_3,0,
             (vector<unsigned___int64,std::allocator<unsigned___int64>_> *)0x0,param_4,uVar1,
             ((longlong)(param_4->channel_views_)._Mypair._Myval2._Mylast -
             (longlong)(param_4->channel_views_)._Mypair._Myval2._Myfirst) / 0x18,0,uVar2);
  return;
}

// FillAudioBuffer @ 14f0989d0

void __cdecl
vraudio::FillAudioBuffer(float *param_1,ulong64 param_2,ulong64 param_3,AudioBuffer *param_4)

{
  ulonglong uVar1;
  ulong64 uVar2;
  
  uVar1 = param_4->num_frames_;
  uVar2 = param_2;
  if (uVar1 < param_2) {
    uVar2 = uVar1;
  }
  `anonymous_namespace'::ConvertInterleavedToPlanarTemplated<float_const_*,vraudio::AudioBuffer_&>
            (param_1,param_2,param_3,0,
             (vector<unsigned___int64,std::allocator<unsigned___int64>_> *)0x0,param_4,uVar1,
             ((longlong)(param_4->channel_views_)._Mypair._Myval2._Mylast -
             (longlong)(param_4->channel_views_)._Mypair._Myval2._Myfirst) / 0x18,0,uVar2);
  return;
}

// FillAudioBuffer @ 14f098a50

void __cdecl
vraudio::FillAudioBuffer(short **param_1,ulong64 param_2,ulong64 param_3,AudioBuffer *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_4->num_frames_ < param_2) {
    param_2 = param_4->num_frames_;
  }
  lVar4 = (longlong)(param_4->channel_views_)._Mypair._Myval2._Mylast -
          (longlong)(param_4->channel_views_)._Mypair._Myval2._Myfirst;
  lVar4 = lVar4 / 6 + (lVar4 >> 0x3f);
  uVar1 = 0;
  lVar2 = lVar4 >> 2;
  lVar4 = lVar4 >> 0x3f;
  if (lVar2 != lVar4) {
    lVar3 = 0;
    do {
      ConvertPlanarSamples
                (param_2,param_1[uVar1],
                 *(float **)
                  ((longlong)&((param_4->channel_views_)._Mypair._Myval2._Myfirst)->begin_itr_ +
                  lVar3));
      uVar1 = uVar1 + 1;
      lVar3 = lVar3 + 0x18;
    } while (uVar1 < (ulonglong)(lVar2 - lVar4));
  }
  return;
}

// FillAudioBuffer @ 14f098af0

void __cdecl
vraudio::FillAudioBuffer(float **param_1,ulong64 param_2,ulong64 param_3,AudioBuffer *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_4->num_frames_ < param_2) {
    param_2 = param_4->num_frames_;
  }
  lVar4 = (longlong)(param_4->channel_views_)._Mypair._Myval2._Mylast -
          (longlong)(param_4->channel_views_)._Mypair._Myval2._Myfirst;
  lVar4 = lVar4 / 6 + (lVar4 >> 0x3f);
  uVar1 = 0;
  lVar2 = lVar4 >> 2;
  lVar4 = lVar4 >> 0x3f;
  if (lVar2 != lVar4) {
    lVar3 = 0;
    do {
      ConvertPlanarSamples
                (param_2,param_1[uVar1],
                 *(float **)
                  ((longlong)&((param_4->channel_views_)._Mypair._Myval2._Myfirst)->begin_itr_ +
                  lVar3));
      uVar1 = uVar1 + 1;
      lVar3 = lVar3 + 0x18;
    } while (uVar1 < (ulonglong)(lVar2 - lVar4));
  }
  return;
}

// FillAudioBufferWithChannelRemapping @ 14f098b90

void __cdecl
vraudio::FillAudioBufferWithChannelRemapping
          (short *param_1,ulong64 param_2,ulong64 param_3,
          vector<unsigned___int64,std::allocator<unsigned___int64>_> *param_4,AudioBuffer *param_5)

{
  ulonglong uVar1;
  ulong64 uVar2;
  
  uVar1 = param_5->num_frames_;
  uVar2 = param_2;
  if (uVar1 < param_2) {
    uVar2 = uVar1;
  }
  `anonymous_namespace'::ConvertInterleavedToPlanarTemplated<short_const_*,vraudio::AudioBuffer_&>
            (param_1,param_2,param_3,0,param_4,param_5,uVar1,
             ((longlong)(param_5->channel_views_)._Mypair._Myval2._Mylast -
             (longlong)(param_5->channel_views_)._Mypair._Myval2._Myfirst) / 0x18,0,uVar2);
  return;
}

// FillAudioBufferWithChannelRemapping @ 14f098c20

void __cdecl
vraudio::FillAudioBufferWithChannelRemapping
          (float *param_1,ulong64 param_2,ulong64 param_3,
          vector<unsigned___int64,std::allocator<unsigned___int64>_> *param_4,AudioBuffer *param_5)

{
  ulonglong uVar1;
  ulong64 uVar2;
  
  uVar1 = param_5->num_frames_;
  uVar2 = param_2;
  if (uVar1 < param_2) {
    uVar2 = uVar1;
  }
  `anonymous_namespace'::ConvertInterleavedToPlanarTemplated<float_const_*,vraudio::AudioBuffer_&>
            (param_1,param_2,param_3,0,param_4,param_5,uVar1,
             ((longlong)(param_5->channel_views_)._Mypair._Myval2._Mylast -
             (longlong)(param_5->channel_views_)._Mypair._Myval2._Myfirst) / 0x18,0,uVar2);
  return;
}

// FillAudioBufferWithChannelRemapping @ 14f098cb0

void __cdecl
vraudio::FillAudioBufferWithChannelRemapping
          (short **param_1,ulong64 param_2,ulong64 param_3,
          vector<unsigned___int64,std::allocator<unsigned___int64>_> *param_4,AudioBuffer *param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = 0;
  if (param_5->num_frames_ < param_2) {
    param_2 = param_5->num_frames_;
  }
  lVar4 = (longlong)(param_5->channel_views_)._Mypair._Myval2._Mylast -
          (longlong)(param_5->channel_views_)._Mypair._Myval2._Myfirst;
  lVar4 = lVar4 / 6 + (lVar4 >> 0x3f);
  lVar2 = lVar4 >> 2;
  lVar4 = lVar4 >> 0x3f;
  uVar3 = lVar2 - lVar4;
  if (lVar2 != lVar4) {
    lVar4 = 0;
    if (param_4 == (vector<unsigned___int64,std::allocator<unsigned___int64>_> *)0x0) {
      do {
        ConvertPlanarSamples
                  (param_2,param_1[uVar1],
                   *(float **)
                    ((longlong)&((param_5->channel_views_)._Mypair._Myval2._Myfirst)->begin_itr_ +
                    lVar4));
        uVar1 = uVar1 + 1;
        lVar4 = lVar4 + 0x18;
      } while (uVar1 < uVar3);
    }
    else {
      do {
        ConvertPlanarSamples
                  (param_2,param_1[(param_4->_Mypair)._Myval2._Myfirst[uVar1]],
                   *(float **)
                    ((longlong)&((param_5->channel_views_)._Mypair._Myval2._Myfirst)->begin_itr_ +
                    lVar4));
        uVar1 = uVar1 + 1;
        lVar4 = lVar4 + 0x18;
      } while (uVar1 < uVar3);
    }
  }
  return;
}

// FillAudioBufferWithChannelRemapping @ 14f098da0

void __cdecl
vraudio::FillAudioBufferWithChannelRemapping
          (float **param_1,ulong64 param_2,ulong64 param_3,
          vector<unsigned___int64,std::allocator<unsigned___int64>_> *param_4,AudioBuffer *param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = 0;
  if (param_5->num_frames_ < param_2) {
    param_2 = param_5->num_frames_;
  }
  lVar4 = (longlong)(param_5->channel_views_)._Mypair._Myval2._Mylast -
          (longlong)(param_5->channel_views_)._Mypair._Myval2._Myfirst;
  lVar4 = lVar4 / 6 + (lVar4 >> 0x3f);
  lVar2 = lVar4 >> 2;
  lVar4 = lVar4 >> 0x3f;
  uVar3 = lVar2 - lVar4;
  if (lVar2 != lVar4) {
    lVar4 = 0;
    if (param_4 == (vector<unsigned___int64,std::allocator<unsigned___int64>_> *)0x0) {
      do {
        ConvertPlanarSamples
                  (param_2,param_1[uVar1],
                   *(float **)
                    ((longlong)&((param_5->channel_views_)._Mypair._Myval2._Myfirst)->begin_itr_ +
                    lVar4));
        uVar1 = uVar1 + 1;
        lVar4 = lVar4 + 0x18;
      } while (uVar1 < uVar3);
    }
    else {
      do {
        ConvertPlanarSamples
                  (param_2,param_1[(param_4->_Mypair)._Myval2._Myfirst[uVar1]],
                   *(float **)
                    ((longlong)&((param_5->channel_views_)._Mypair._Myval2._Myfirst)->begin_itr_ +
                    lVar4));
        uVar1 = uVar1 + 1;
        lVar4 = lVar4 + 0x18;
      } while (uVar1 < uVar3);
    }
  }
  return;
}

// FillAudioBufferWithOffset @ 14f098e90

void __cdecl
vraudio::FillAudioBufferWithOffset
          (short *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5,
          ulong64 param_6,AudioBuffer *param_7)

{
  `anonymous_namespace'::ConvertInterleavedToPlanarTemplated<short_const_*,vraudio::AudioBuffer_&>
            (param_1,param_2,param_3,param_4,
             (vector<unsigned___int64,std::allocator<unsigned___int64>_> *)0x0,param_7,
             param_7->num_frames_,
             ((longlong)(param_7->channel_views_)._Mypair._Myval2._Mylast -
             (longlong)(param_7->channel_views_)._Mypair._Myval2._Myfirst) / 0x18,param_5,param_6);
  return;
}

// FillAudioBufferWithOffset @ 14f098f10

void __cdecl
vraudio::FillAudioBufferWithOffset
          (float *param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5,
          ulong64 param_6,AudioBuffer *param_7)

{
  `anonymous_namespace'::ConvertInterleavedToPlanarTemplated<float_const_*,vraudio::AudioBuffer_&>
            (param_1,param_2,param_3,param_4,
             (vector<unsigned___int64,std::allocator<unsigned___int64>_> *)0x0,param_7,
             param_7->num_frames_,
             ((longlong)(param_7->channel_views_)._Mypair._Myval2._Mylast -
             (longlong)(param_7->channel_views_)._Mypair._Myval2._Myfirst) / 0x18,param_5,param_6);
  return;
}

// FillAudioBufferWithOffset @ 14f098f90

void __cdecl
vraudio::FillAudioBufferWithOffset
          (short **param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5,
          ulong64 param_6,AudioBuffer *param_7)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = 0;
  lVar1 = (longlong)(param_7->channel_views_)._Mypair._Myval2._Mylast -
          (longlong)(param_7->channel_views_)._Mypair._Myval2._Myfirst;
  lVar1 = lVar1 / 6 + (lVar1 >> 0x3f);
  lVar3 = lVar1 >> 2;
  lVar1 = lVar1 >> 0x3f;
  if (lVar3 != lVar1) {
    lVar4 = 0;
    do {
      ConvertPlanarSamples
                (param_6,param_1[uVar2] + param_4,
                 (float *)(*(longlong *)
                            ((longlong)
                             &((param_7->channel_views_)._Mypair._Myval2._Myfirst)->begin_itr_ +
                            lVar4) + param_5 * 4));
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 0x18;
    } while (uVar2 < (ulonglong)(lVar3 - lVar1));
  }
  return;
}

// FillAudioBufferWithOffset @ 14f099050

void __cdecl
vraudio::FillAudioBufferWithOffset
          (float **param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5,
          ulong64 param_6,AudioBuffer *param_7)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = 0;
  lVar1 = (longlong)(param_7->channel_views_)._Mypair._Myval2._Mylast -
          (longlong)(param_7->channel_views_)._Mypair._Myval2._Myfirst;
  lVar1 = lVar1 / 6 + (lVar1 >> 0x3f);
  lVar3 = lVar1 >> 2;
  lVar1 = lVar1 >> 0x3f;
  if (lVar3 != lVar1) {
    lVar4 = 0;
    do {
      ConvertPlanarSamples
                (param_6,param_1[uVar2] + param_4,
                 (float *)(*(longlong *)
                            ((longlong)
                             &((param_7->channel_views_)._Mypair._Myval2._Myfirst)->begin_itr_ +
                            lVar4) + param_5 * 4));
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 0x18;
    } while (uVar2 < (ulonglong)(lVar3 - lVar1));
  }
  return;
}

// FillExternalBuffer @ 14f099110

void __cdecl
vraudio::FillExternalBuffer(AudioBuffer *param_1,short *param_2,ulong64 param_3,ulong64 param_4)

{
  `anonymous_namespace'::ConvertPlanarToInterleavedTemplated<vraudio::AudioBuffer_const_&,short_*>
            (param_1,param_1->num_frames_,
             ((longlong)(param_1->channel_views_)._Mypair._Myval2._Mylast -
             (longlong)(param_1->channel_views_)._Mypair._Myval2._Myfirst) / 0x18,0,param_2,param_3,
             param_4,0,param_3);
  return;
}

// FillExternalBuffer @ 14f099170

void __cdecl
vraudio::FillExternalBuffer(AudioBuffer *param_1,float *param_2,ulong64 param_3,ulong64 param_4)

{
  `anonymous_namespace'::ConvertPlanarToInterleavedTemplated<vraudio::AudioBuffer_const_&,float_*>
            (param_1,param_1->num_frames_,
             ((longlong)(param_1->channel_views_)._Mypair._Myval2._Mylast -
             (longlong)(param_1->channel_views_)._Mypair._Myval2._Myfirst) / 0x18,0,param_2,param_3,
             param_4,0,param_3);
  return;
}

// FillExternalBuffer @ 14f0991d0

void __cdecl
vraudio::FillExternalBuffer(AudioBuffer *param_1,vector<short,std::allocator<short>_> *param_2)

{
  ulong64 uVar1;
  ulong64 uVar2;
  _Value_init_tag local_res8 [8];
  
  std::vector<short,std::allocator<short>_>::_Resize<std::_Value_init_tag>
            (param_2,(((longlong)(param_1->channel_views_)._Mypair._Myval2._Mylast -
                      (longlong)(param_1->channel_views_)._Mypair._Myval2._Myfirst) / 0x18) *
                     param_1->num_frames_,local_res8);
  uVar1 = param_1->num_frames_;
  uVar2 = ((longlong)(param_1->channel_views_)._Mypair._Myval2._Mylast -
          (longlong)(param_1->channel_views_)._Mypair._Myval2._Myfirst) / 0x18;
  `anonymous_namespace'::ConvertPlanarToInterleavedTemplated<vraudio::AudioBuffer_const_&,short_*>
            (param_1,uVar1,uVar2,0,(param_2->_Mypair)._Myval2._Myfirst,uVar1,uVar2,0,uVar1);
  return;
}

// FillExternalBuffer @ 14f099290

void __cdecl
vraudio::FillExternalBuffer(AudioBuffer *param_1,vector<float,std::allocator<float>_> *param_2)

{
  ulong64 uVar1;
  ulong64 uVar2;
  _Value_init_tag local_res8 [8];
  
  std::vector<float,std::allocator<float>_>::_Resize<std::_Value_init_tag>
            (param_2,(((longlong)(param_1->channel_views_)._Mypair._Myval2._Mylast -
                      (longlong)(param_1->channel_views_)._Mypair._Myval2._Myfirst) / 0x18) *
                     param_1->num_frames_,local_res8);
  uVar1 = param_1->num_frames_;
  uVar2 = ((longlong)(param_1->channel_views_)._Mypair._Myval2._Mylast -
          (longlong)(param_1->channel_views_)._Mypair._Myval2._Myfirst) / 0x18;
  `anonymous_namespace'::ConvertPlanarToInterleavedTemplated<vraudio::AudioBuffer_const_&,float_*>
            (param_1,uVar1,uVar2,0,(param_2->_Mypair)._Myval2._Myfirst,uVar1,uVar2,0,uVar1);
  return;
}

// FillExternalBuffer @ 14f099350

void __cdecl
vraudio::FillExternalBuffer(AudioBuffer *param_1,short **param_2,ulong64 param_3,ulong64 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_4 != 0) {
    uVar1 = 0;
    uVar2 = uVar1;
    do {
      ConvertPlanarSamples
                (param_3,*(float **)
                          ((longlong)
                           &((param_1->channel_views_)._Mypair._Myval2._Myfirst)->begin_itr_ + uVar2
                          ),param_2[uVar1]);
      uVar1 = uVar1 + 1;
      uVar2 = uVar2 + 0x18;
    } while (uVar1 < param_4);
  }
  return;
}

// FillExternalBuffer @ 14f0993c0

void __cdecl
vraudio::FillExternalBuffer(AudioBuffer *param_1,float **param_2,ulong64 param_3,ulong64 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_4 != 0) {
    uVar1 = 0;
    uVar2 = uVar1;
    do {
      ConvertPlanarSamples
                (param_3,*(float **)
                          ((longlong)
                           &((param_1->channel_views_)._Mypair._Myval2._Myfirst)->begin_itr_ + uVar2
                          ),param_2[uVar1]);
      uVar1 = uVar1 + 1;
      uVar2 = uVar2 + 0x18;
    } while (uVar1 < param_4);
  }
  return;
}

// FillExternalBufferWithOffset @ 14f099430

void __cdecl
vraudio::FillExternalBufferWithOffset
          (AudioBuffer *param_1,ulong64 param_2,short *param_3,ulong64 param_4,ulong64 param_5,
          ulong64 param_6,ulong64 param_7)

{
  `anonymous_namespace'::ConvertPlanarToInterleavedTemplated<vraudio::AudioBuffer_const_&,short_*>
            (param_1,param_1->num_frames_,
             ((longlong)(param_1->channel_views_)._Mypair._Myval2._Mylast -
             (longlong)(param_1->channel_views_)._Mypair._Myval2._Myfirst) / 0x18,param_2,param_3,
             param_4,param_5,param_6,param_7);
  return;
}

// FillExternalBufferWithOffset @ 14f0994b0

void __cdecl
vraudio::FillExternalBufferWithOffset
          (AudioBuffer *param_1,ulong64 param_2,float *param_3,ulong64 param_4,ulong64 param_5,
          ulong64 param_6,ulong64 param_7)

{
  `anonymous_namespace'::ConvertPlanarToInterleavedTemplated<vraudio::AudioBuffer_const_&,float_*>
            (param_1,param_1->num_frames_,
             ((longlong)(param_1->channel_views_)._Mypair._Myval2._Mylast -
             (longlong)(param_1->channel_views_)._Mypair._Myval2._Myfirst) / 0x18,param_2,param_3,
             param_4,param_5,param_6,param_7);
  return;
}

// FillExternalBufferWithOffset @ 14f099530

void __cdecl
vraudio::FillExternalBufferWithOffset
          (AudioBuffer *param_1,ulong64 param_2,short **param_3,ulong64 param_4,ulong64 param_5,
          ulong64 param_6,ulong64 param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  uVar2 = uVar1;
  if (param_5 != 0) {
    do {
      ConvertPlanarSamples
                (param_7,(float *)(*(longlong *)
                                    ((longlong)
                                     &((param_1->channel_views_)._Mypair._Myval2._Myfirst)->
                                      begin_itr_ + uVar2) + param_2 * 4),param_3[uVar1] + param_6);
      uVar1 = uVar1 + 1;
      uVar2 = uVar2 + 0x18;
    } while (uVar1 < param_5);
  }
  return;
}

// FillExternalBufferWithOffset @ 14f0995d0

void __cdecl
vraudio::FillExternalBufferWithOffset
          (AudioBuffer *param_1,ulong64 param_2,float **param_3,ulong64 param_4,ulong64 param_5,
          ulong64 param_6,ulong64 param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  uVar2 = uVar1;
  if (param_5 != 0) {
    do {
      ConvertPlanarSamples
                (param_7,(float *)(*(longlong *)
                                    ((longlong)
                                     &((param_1->channel_views_)._Mypair._Myval2._Myfirst)->
                                      begin_itr_ + uVar2) + param_2 * 4),param_3[uVar1] + param_6);
      uVar1 = uVar1 + 1;
      uVar2 = uVar2 + 0x18;
    } while (uVar1 < param_5);
  }
  return;
}

// GetRawChannelDataPointersFromAudioBuffer @ 14f099670

void __cdecl
vraudio::GetRawChannelDataPointersFromAudioBuffer
          (AudioBuffer *param_1,vector<float_const_*,std::allocator<float_const_*>_> *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ChannelView *pCVar6;
  
  pCVar6 = (param_1->channel_views_)._Mypair._Myval2._Myfirst;
  lVar3 = (longlong)(param_1->channel_views_)._Mypair._Myval2._Mylast - (longlong)pCVar6;
  uVar4 = 0;
  lVar2 = lVar3 >> 0x3f;
  uVar5 = uVar4;
  if (lVar3 / 0x18 + lVar2 != lVar2) {
    do {
      puVar1 = (undefined8 *)((longlong)&pCVar6->begin_itr_ + uVar4);
      uVar4 = uVar4 + 0x18;
      (param_2->_Mypair)._Myval2._Myfirst[uVar5] = (float *)*puVar1;
      pCVar6 = (param_1->channel_views_)._Mypair._Myval2._Myfirst;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)
                     (((longlong)(param_1->channel_views_)._Mypair._Myval2._Mylast -
                      (longlong)pCVar6) / 0x18));
  }
  return;
}

// GetRawChannelDataPointersFromAudioBuffer @ 14f099700

void __cdecl
vraudio::GetRawChannelDataPointersFromAudioBuffer
          (AudioBuffer *param_1,vector<float_*,std::allocator<float_*>_> *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ChannelView *pCVar6;
  
  pCVar6 = (param_1->channel_views_)._Mypair._Myval2._Myfirst;
  lVar3 = (longlong)(param_1->channel_views_)._Mypair._Myval2._Mylast - (longlong)pCVar6;
  uVar4 = 0;
  lVar2 = lVar3 >> 0x3f;
  uVar5 = uVar4;
  if (lVar3 / 0x18 + lVar2 != lVar2) {
    do {
      puVar1 = (undefined8 *)((longlong)&pCVar6->begin_itr_ + uVar4);
      uVar4 = uVar4 + 0x18;
      (param_2->_Mypair)._Myval2._Myfirst[uVar5] = (float *)*puVar1;
      pCVar6 = (param_1->channel_views_)._Mypair._Myval2._Myfirst;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)
                     (((longlong)(param_1->channel_views_)._Mypair._Myval2._Mylast -
                      (longlong)pCVar6) / 0x18));
  }
  return;
}

// PlanarFromInterleaved @ 14f099790

void __cdecl
vraudio::PlanarFromInterleaved
          (short *param_1,ulong64 param_2,ulong64 param_3,
          vector<float_*,std::allocator<float_*>_> *param_4,ulong64 param_5)

{
  float **ppfVar1;
  ulong64 uVar2;
  
  ppfVar1 = (param_4->_Mypair)._Myval2._Myfirst;
  uVar2 = param_2;
  if (param_5 < param_2) {
    uVar2 = param_5;
  }
  `anonymous_namespace'::ConvertInterleavedToPlanarTemplated<short_const_*,float_*_const_*>
            (param_1,param_2,param_3,0,
             (vector<unsigned___int64,std::allocator<unsigned___int64>_> *)0x0,ppfVar1,param_5,
             (longlong)(param_4->_Mypair)._Myval2._Mylast - (longlong)ppfVar1 >> 3,0,uVar2);
  return;
}

// PlanarFromInterleaved @ 14f0997f0

void __cdecl
vraudio::PlanarFromInterleaved
          (float *param_1,ulong64 param_2,ulong64 param_3,
          vector<float_*,std::allocator<float_*>_> *param_4,ulong64 param_5)

{
  float fVar1;
  float **ppfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  ppfVar2 = (param_4->_Mypair)._Myval2._Myfirst;
  if (param_5 < param_2) {
    param_2 = param_5;
  }
  uVar10 = (longlong)(param_4->_Mypair)._Myval2._Mylast - (longlong)ppfVar2 >> 3;
  if ((param_3 == 2) && (uVar10 == 2)) {
    DeinterleaveStereo(param_2,param_1,*ppfVar2,ppfVar2[1]);
  }
  else {
    uVar7 = 0;
    if (uVar10 != 0) {
      do {
        pfVar6 = ppfVar2[uVar7];
        uVar9 = 0;
        pfVar5 = param_1;
        if (3 < param_2) {
          lVar8 = (param_2 - 4 >> 2) + 1;
          uVar9 = lVar8 * 4;
          do {
            pfVar3 = pfVar5 + param_3;
            *pfVar6 = *pfVar5;
            pfVar4 = pfVar3 + param_3;
            pfVar6[1] = *pfVar3;
            pfVar6[2] = *pfVar4;
            pfVar5 = pfVar4 + param_3 + param_3;
            pfVar6[3] = pfVar4[param_3];
            pfVar6 = pfVar6 + 4;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        if (uVar9 < param_2) {
          lVar8 = param_2 - uVar9;
          do {
            fVar1 = *pfVar5;
            pfVar5 = pfVar5 + param_3;
            *pfVar6 = fVar1;
            pfVar6 = pfVar6 + 1;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        uVar7 = uVar7 + 1;
        param_1 = param_1 + 1;
      } while (uVar7 < uVar10);
    }
  }
  return;
}

