// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 13

// AllignedMalloc<float,unsigned___int64,float_*> @ 14f06e7c0

float * __cdecl
vraudio::AllignedMalloc<float,unsigned___int64,float_*>(ulong64 param_1,ulong64 param_2)

{
  void *pvVar1;
  float *pfVar2;
  
  pvVar1 = malloc(param_1 * 4 + 7 + param_2);
  if (pvVar1 == (void *)0x0) {
    return (float *)0x0;
  }
  pfVar2 = (float *)(param_2 + 7 + (longlong)pvVar1 & -param_2);
  *(void **)(pfVar2 + -2) = pvVar1;
  return pfVar2;
}

// StaticAlignmentCheck<4,64> @ 14f06e810

void __cdecl vraudio::StaticAlignmentCheck<4,64>(void)

{
  return;
}

// _Copy_memmove<vraudio::ChannelView_*,vraudio::ChannelView_*> @ 14f06e820

ChannelView * __cdecl
std::_Copy_memmove<vraudio::ChannelView_*,vraudio::ChannelView_*>
          (ChannelView *param_1,ChannelView *param_2,ChannelView *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (ChannelView *)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove_tail<vraudio::ChannelView_*> @ 14f06e860

ChannelView * __cdecl
std::_Copy_memmove_tail<vraudio::ChannelView_*>
          (char *param_1,ChannelView *param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return (ChannelView *)((longlong)&param_2->begin_itr_ + param_3);
}

// _Emplace_reallocate<vraudio::ChannelView_const_&> @ 14f06e890

ChannelView * __thiscall
std::vector<vraudio::ChannelView,std::allocator<vraudio::ChannelView>_>::
_Emplace_reallocate<vraudio::ChannelView_const_&>
          (vector<vraudio::ChannelView,std::allocator<vraudio::ChannelView>_> *this,
          ChannelView *param_1,ChannelView *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ChannelView *pCVar3;
  ChannelView *_Src;
  longlong lVar4;
  undefined7 uVar5;
  void *pvVar6;
  ulong64 uVar7;
  ChannelView *pCVar8;
  longlong lVar9;
  ChannelView *pCVar10;
  ulonglong uVar11;
  size_t _Size;
  
  pCVar10 = (this->_Mypair)._Myval2._Myfirst;
  lVar9 = ((longlong)param_1 - (longlong)pCVar10) / 6 +
          ((longlong)param_1 - (longlong)pCVar10 >> 0x3f);
  lVar4 = ((longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pCVar10) / 0x18;
  if (lVar4 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar1 = lVar4 + 1;
  uVar2 = ((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pCVar10) / 0x18;
  if (uVar2 <= 0xaaaaaaaaaaaaaaa - (uVar2 >> 1)) {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar11 = uVar1;
    if (uVar1 <= uVar2) {
      uVar11 = uVar2;
    }
    if (uVar11 < 0xaaaaaaaaaaaaaab) {
      uVar7 = uVar11 * 0x18;
      if (uVar7 == 0) {
        pCVar10 = (ChannelView *)0x0;
      }
      else if (uVar7 < 0x1000) {
        pCVar10 = ::operator_new(uVar7);
      }
      else {
        if (uVar7 + 0x27 <= uVar7) goto LAB_14f06ea41;
        pvVar6 = ::operator_new(uVar7 + 0x27);
        if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        pCVar10 = (ChannelView *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
        *(void **)&pCVar10[-1].enabled_ = pvVar6;
      }
      uVar7 = param_2->size_;
      pCVar3 = pCVar10 + ((lVar9 >> 2) - (lVar9 >> 0x3f));
      pCVar3->begin_itr_ = param_2->begin_itr_;
      pCVar3->size_ = uVar7;
      uVar5 = *(undefined7 *)&param_2->field_0x11;
      pCVar3->enabled_ = param_2->enabled_;
      *(undefined7 *)&pCVar3->field_0x11 = uVar5;
      pCVar8 = (this->_Mypair)._Myval2._Mylast;
      _Src = (this->_Mypair)._Myval2._Myfirst;
      if (param_1 == pCVar8) {
        _Size = (longlong)pCVar8 - (longlong)_Src;
        pCVar8 = pCVar10;
        param_1 = _Src;
      }
      else {
        memmove(pCVar10,_Src,(longlong)param_1 - (longlong)_Src);
        pCVar8 = pCVar3 + 1;
        _Size = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)param_1;
      }
      memmove(pCVar8,param_1,_Size);
      _Change_array(this,pCVar10,uVar1,uVar11);
      return pCVar3;
    }
  }
LAB_14f06ea41:
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// AudioBuffer @ 14f06ea50

AudioBuffer * __thiscall vraudio::AudioBuffer::AudioBuffer(AudioBuffer *this,AudioBuffer *param_1)

{
  vector<float,vraudio::AlignedAllocator<float,64>_> *pvVar1;
  vector<vraudio::ChannelView,std::allocator<vraudio::ChannelView>_> *pvVar2;
  vector<float,vraudio::AlignedAllocator<float,64>_> *pvVar3;
  vector<vraudio::ChannelView,std::allocator<vraudio::ChannelView>_> *pvVar4;
  float *pfVar5;
  ChannelView *pCVar6;
  ulong64 uVar7;
  ChannelView *pCVar8;
  
  pvVar1 = &this->data_;
  pvVar2 = &this->channel_views_;
  (pvVar1->_Mypair)._Myval2._Myfirst = (float *)0x0;
  (this->data_)._Mypair._Myval2._Mylast = (float *)0x0;
  pvVar3 = &param_1->data_;
  (this->data_)._Mypair._Myval2._Myend = (float *)0x0;
  (pvVar2->_Mypair)._Myval2._Myfirst = (ChannelView *)0x0;
  (this->channel_views_)._Mypair._Myval2._Mylast = (ChannelView *)0x0;
  (this->channel_views_)._Mypair._Myval2._Myend = (ChannelView *)0x0;
  this->num_frames_ = param_1->num_frames_;
  param_1->num_frames_ = 0;
  if (pvVar1 != pvVar3) {
    pfVar5 = (pvVar1->_Mypair)._Myval2._Myfirst;
    if (pfVar5 != (float *)0x0) {
      free(*(void **)(pfVar5 + -2));
      (pvVar1->_Mypair)._Myval2._Myfirst = (float *)0x0;
      (this->data_)._Mypair._Myval2._Mylast = (float *)0x0;
      (this->data_)._Mypair._Myval2._Myend = (float *)0x0;
    }
    (pvVar1->_Mypair)._Myval2._Myfirst = (pvVar3->_Mypair)._Myval2._Myfirst;
    (this->data_)._Mypair._Myval2._Mylast = (param_1->data_)._Mypair._Myval2._Mylast;
    (this->data_)._Mypair._Myval2._Myend = (param_1->data_)._Mypair._Myval2._Myend;
    (pvVar3->_Mypair)._Myval2._Myfirst = (float *)0x0;
    (param_1->data_)._Mypair._Myval2._Mylast = (float *)0x0;
    (param_1->data_)._Mypair._Myval2._Myend = (float *)0x0;
  }
  pvVar4 = &param_1->channel_views_;
  this->data_size_ = param_1->data_size_;
  param_1->data_size_ = 0;
  if (pvVar2 != pvVar4) {
    pCVar6 = (pvVar2->_Mypair)._Myval2._Myfirst;
    if (pCVar6 != (ChannelView *)0x0) {
      uVar7 = (((longlong)(this->channel_views_)._Mypair._Myval2._Myend - (longlong)pCVar6) / 0x18)
              * 0x18;
      pCVar8 = pCVar6;
      if (0xfff < uVar7) {
        pCVar8 = *(ChannelView **)&pCVar6[-1].enabled_;
        uVar7 = uVar7 + 0x27;
        if (0x1f < (ulonglong)((longlong)pCVar6 + (-8 - (longlong)pCVar8))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pCVar8,uVar7);
      (pvVar2->_Mypair)._Myval2._Myfirst = (ChannelView *)0x0;
      (this->channel_views_)._Mypair._Myval2._Mylast = (ChannelView *)0x0;
      (this->channel_views_)._Mypair._Myval2._Myend = (ChannelView *)0x0;
    }
    (pvVar2->_Mypair)._Myval2._Myfirst = (pvVar4->_Mypair)._Myval2._Myfirst;
    (this->channel_views_)._Mypair._Myval2._Mylast =
         (param_1->channel_views_)._Mypair._Myval2._Mylast;
    (this->channel_views_)._Mypair._Myval2._Myend = (param_1->channel_views_)._Mypair._Myval2._Myend
    ;
    (pvVar4->_Mypair)._Myval2._Myfirst = (ChannelView *)0x0;
    (param_1->channel_views_)._Mypair._Myval2._Mylast = (ChannelView *)0x0;
    (param_1->channel_views_)._Mypair._Myval2._Myend = (ChannelView *)0x0;
  }
  this->source_id_ = param_1->source_id_;
  param_1->source_id_ = -1;
  return this;
}

// AudioBuffer @ 14f06ebd0

AudioBuffer * __thiscall vraudio::AudioBuffer::AudioBuffer(AudioBuffer *this)

{
  this->source_id_ = -1;
  this->num_frames_ = 0;
  (this->data_)._Mypair._Myval2._Myfirst = (float *)0x0;
  (this->data_)._Mypair._Myval2._Mylast = (float *)0x0;
  (this->data_)._Mypair._Myval2._Myend = (float *)0x0;
  this->data_size_ = 0;
  (this->channel_views_)._Mypair._Myval2._Myfirst = (ChannelView *)0x0;
  (this->channel_views_)._Mypair._Myval2._Mylast = (ChannelView *)0x0;
  (this->channel_views_)._Mypair._Myval2._Myend = (ChannelView *)0x0;
  return this;
}

// AudioBuffer @ 14f06ec10

AudioBuffer * __thiscall
vraudio::AudioBuffer::AudioBuffer(AudioBuffer *this,ulong64 param_1,ulong64 param_2)

{
  this->num_frames_ = param_2;
  (this->data_)._Mypair._Myval2._Myfirst = (float *)0x0;
  (this->data_)._Mypair._Myval2._Mylast = (float *)0x0;
  (this->data_)._Mypair._Myval2._Myend = (float *)0x0;
  this->data_size_ = 0;
  (this->channel_views_)._Mypair._Myval2._Myfirst = (ChannelView *)0x0;
  (this->channel_views_)._Mypair._Myval2._Mylast = (ChannelView *)0x0;
  (this->channel_views_)._Mypair._Myval2._Myend = (ChannelView *)0x0;
  this->source_id_ = -1;
  InitChannelViews(this,param_1);
  return this;
}

// operator= @ 14f06ec60

AudioBuffer * __thiscall vraudio::AudioBuffer::operator=(AudioBuffer *this,AudioBuffer *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ChannelView *pCVar7;
  
  if (this == param_1) {
    return this;
  }
  this->num_frames_ = param_1->num_frames_;
  this->source_id_ = param_1->source_id_;
  InitChannelViews(this,((longlong)(param_1->channel_views_)._Mypair._Myval2._Mylast -
                        (longlong)(param_1->channel_views_)._Mypair._Myval2._Myfirst) / 0x18);
  pCVar7 = (this->channel_views_)._Mypair._Myval2._Myfirst;
  uVar5 = 0;
  lVar3 = (longlong)(this->channel_views_)._Mypair._Myval2._Mylast - (longlong)pCVar7;
  lVar2 = lVar3 >> 0x3f;
  uVar6 = uVar5;
  if (lVar3 / 0x18 + lVar2 != lVar2) {
    do {
      puVar1 = (undefined8 *)((longlong)&pCVar7->begin_itr_ + uVar5);
      puVar4 = (undefined8 *)
               ((longlong)&((param_1->channel_views_)._Mypair._Myval2._Myfirst)->begin_itr_ + uVar5)
      ;
      if (puVar1 != puVar4) {
        memcpy((void *)*puVar1,(void *)*puVar4,puVar1[1] << 2);
      }
      pCVar7 = (this->channel_views_)._Mypair._Myval2._Myfirst;
      uVar6 = uVar6 + 1;
      uVar5 = uVar5 + 0x18;
    } while (uVar6 < (ulonglong)
                     (((longlong)(this->channel_views_)._Mypair._Myval2._Mylast - (longlong)pCVar7)
                     / 0x18));
  }
  return this;
}

// InitChannelViews @ 14f06ed80

void __thiscall vraudio::AudioBuffer::InitChannelViews(AudioBuffer *this,ulong64 param_1)

{
  ChannelView **ppCVar1;
  float *pfVar2;
  ChannelView *pCVar3;
  ulong64 uVar4;
  float *pfVar5;
  void *pvVar6;
  ulonglong uVar7;
  ulong64 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ChannelView *pCVar11;
  ChannelView *pCVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ChannelView local_48;
  
  uVar4 = FindNextAlignedArrayIndex(this->num_frames_,4,0x40);
  uVar10 = uVar4 * param_1;
  pCVar11 = (ChannelView *)0x0;
  this->data_size_ = uVar10;
  pfVar5 = (this->data_)._Mypair._Myval2._Mylast;
  pfVar2 = (this->data_)._Mypair._Myval2._Myfirst;
  uVar13 = (longlong)pfVar5 - (longlong)pfVar2 >> 2;
  if (uVar10 < uVar13) {
    pfVar5 = pfVar2 + uVar10;
  }
  else {
    if (uVar10 < uVar13 || uVar10 - uVar13 == 0) goto LAB_14f06eedc;
    uVar7 = (longlong)(this->data_)._Mypair._Myval2._Myend - (longlong)pfVar2 >> 2;
    if (uVar7 <= uVar10 && uVar10 - uVar7 != 0) {
      if (0x3fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
        std::vector<float,vraudio::AlignedAllocator<float,64>_>::_Xlength();
      }
      uVar14 = 0x3fffffffffffffff;
      if ((uVar7 <= 0x3fffffffffffffff - (uVar7 >> 1)) &&
         (uVar14 = (uVar7 >> 1) + uVar7, uVar14 < uVar10)) {
        uVar14 = uVar10;
      }
      pvVar6 = malloc(uVar14 * 4 + 0x47);
      pCVar12 = pCVar11;
      if (pvVar6 != (void *)0x0) {
        pCVar12 = (ChannelView *)((longlong)pvVar6 + 0x47U & 0xffffffffffffffc0);
        *(void **)&pCVar12[-1].enabled_ = pvVar6;
      }
      memset((float *)((longlong)&pCVar12->begin_itr_ + uVar13 * 4),0,(uVar10 - uVar13) * 4);
      pfVar5 = (this->data_)._Mypair._Myval2._Myfirst;
      memmove(pCVar12,pfVar5,(longlong)(this->data_)._Mypair._Myval2._Mylast - (longlong)pfVar5);
      if (pfVar5 != (float *)0x0) {
        free(*(void **)(pfVar5 + -2));
      }
      (this->data_)._Mypair._Myval2._Myfirst = (float *)pCVar12;
      (this->data_)._Mypair._Myval2._Mylast = (float *)((longlong)&pCVar12->begin_itr_ + uVar10 * 4)
      ;
      (this->data_)._Mypair._Myval2._Myend = (float *)((longlong)&pCVar12->begin_itr_ + uVar14 * 4);
      goto LAB_14f06eedc;
    }
    memset(pfVar5,0,(uVar10 - uVar13) * 4);
    pfVar5 = pfVar5 + (uVar10 - uVar13);
  }
  (this->data_)._Mypair._Myval2._Mylast = pfVar5;
LAB_14f06eedc:
  pCVar12 = (this->channel_views_)._Mypair._Myval2._Mylast;
  pCVar3 = (this->channel_views_)._Mypair._Myval2._Myfirst;
  if (pCVar3 != pCVar12) {
    (this->channel_views_)._Mypair._Myval2._Mylast = pCVar3;
    pCVar12 = pCVar3;
  }
  if ((ulonglong)
      (((longlong)(this->channel_views_)._Mypair._Myval2._Myend - (longlong)pCVar3) / 0x18) <
      param_1) {
    if (0xaaaaaaaaaaaaaaa < param_1) {
                    /* WARNING: Subroutine does not return */
      std::vector<vraudio::ChannelView,std::allocator<vraudio::ChannelView>_>::_Xlength();
    }
    uVar8 = param_1 * 0x18;
    lVar9 = ((longlong)pCVar12 - (longlong)pCVar3) / 6 +
            ((longlong)pCVar12 - (longlong)pCVar3 >> 0x3f);
    if (uVar8 != 0) {
      if (uVar8 < 0x1000) {
        pCVar11 = ::operator_new(uVar8);
      }
      else {
        if (uVar8 + 0x27 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          std::_Throw_bad_array_new_length();
        }
        pvVar6 = ::operator_new(uVar8 + 0x27);
        if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        pCVar11 = (ChannelView *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
        *(void **)&pCVar11[-1].enabled_ = pvVar6;
      }
    }
    pCVar12 = (this->channel_views_)._Mypair._Myval2._Myfirst;
    memmove(pCVar11,pCVar12,
            (longlong)(this->channel_views_)._Mypair._Myval2._Mylast - (longlong)pCVar12);
    std::vector<vraudio::ChannelView,std::allocator<vraudio::ChannelView>_>::_Change_array
              (&this->channel_views_,pCVar11,(lVar9 >> 2) - (lVar9 >> 0x3f),param_1);
  }
  pfVar5 = (this->data_)._Mypair._Myval2._Myfirst;
  for (; param_1 != 0; param_1 = param_1 - 1) {
    pCVar11 = (this->channel_views_)._Mypair._Myval2._Mylast;
    local_48.size_ = this->num_frames_;
    local_48.enabled_ = true;
    if (pCVar11 == (this->channel_views_)._Mypair._Myval2._Myend) {
      local_48.begin_itr_ = pfVar5;
      std::vector<vraudio::ChannelView,std::allocator<vraudio::ChannelView>_>::
      _Emplace_reallocate<vraudio::ChannelView_const_&>(&this->channel_views_,pCVar11,&local_48);
    }
    else {
      pCVar11->begin_itr_ = pfVar5;
      pCVar11->size_ = local_48.size_;
      *(ulonglong *)&pCVar11->enabled_ = CONCAT71(local_48._17_7_,1);
      ppCVar1 = &(this->channel_views_)._Mypair._Myval2._Mylast;
      *ppCVar1 = *ppCVar1 + 1;
    }
    pfVar5 = pfVar5 + uVar4;
  }
  return;
}

// _Change_array @ 14f06f060

void __thiscall
std::vector<vraudio::ChannelView,std::allocator<vraudio::ChannelView>_>::_Change_array
          (vector<vraudio::ChannelView,std::allocator<vraudio::ChannelView>_> *this,
          ChannelView *param_1,ulong64 param_2,ulong64 param_3)

{
  ChannelView *pCVar1;
  ChannelView *pCVar2;
  ulong64 uVar3;
  
  pCVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pCVar1 != (ChannelView *)0x0) {
    uVar3 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pCVar1) / 0x18) * 0x18;
    pCVar2 = pCVar1;
    if (0xfff < uVar3) {
      pCVar2 = *(ChannelView **)&pCVar1[-1].enabled_;
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pCVar1 + (-8 - (longlong)pCVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pCVar2,uVar3);
  }
  (this->_Mypair)._Myval2._Myfirst = param_1;
  (this->_Mypair)._Myval2._Mylast = param_1 + param_2;
  (this->_Mypair)._Myval2._Myend = param_1 + param_3;
  return;
}

// _Xlength @ 14f06f130

void __cdecl std::vector<float,vraudio::AlignedAllocator<float,64>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _Xlength @ 14f06f150

void __cdecl std::vector<vraudio::ChannelView,std::allocator<vraudio::ChannelView>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

