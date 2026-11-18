// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 16

// emplace<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_> @ 14f0744a0

/* WARNING: Type propagation algorithm not settling */

pair<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>,bool>
* __thiscall
std::
_Hash<std::_Umap_traits<int,vraudio::GainMixer::GainProcessors,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>,0>_>
::emplace<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>
          (_Hash<std::_Umap_traits<int,vraudio::GainMixer::GainProcessors,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>,0>_>
           *this,pair<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>,bool>
                 *__return_storage_ptr__,
          pair<int_const_,vraudio::GainMixer::GainProcessors> *param_1)

{
  ulong64 *puVar1;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
  *p_Var2;
  GainProcessor *pGVar3;
  GainProcessor *pGVar4;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
  _Var5;
  uint uVar6;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
  _Var7;
  GainProcessor *pGVar8;
  pair<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>,bool>
  *extraout_RAX;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
  _Var15;
  undefined1 auVar16 [16];
  
  _Var15 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
            )(this->_List)._Mypair._Myval2._Myhead;
  uVar14 = (((((ulonglong)(byte)param_1->first ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)&param_1->first + 1)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)&param_1->first + 2)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)&param_1->first + 3)) * 0x100000001b3;
  p_Var2 = (this->_Vec)._Mypair._Myval2._Myfirst;
  uVar12 = uVar14 & this->_Mask;
  _Var7 = p_Var2[uVar12 * 2 + 1];
  if (_Var7 != _Var15) {
    iVar9 = ((pair<int_const_,vraudio::GainMixer::GainProcessors> *)((longlong)_Var7 + 0x10))->first
    ;
    _Var15 = _Var7;
    while( true ) {
      if (param_1->first == iVar9) {
        __return_storage_ptr__->first =
             (_List_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
              )_Var15;
        __return_storage_ptr__->second = false;
        return __return_storage_ptr__;
      }
      if (_Var15 == p_Var2[uVar12 * 2]) break;
      _Var15 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
                 *)((longlong)_Var15 + 8);
      iVar9 = ((pair<int_const_,vraudio::GainMixer::GainProcessors> *)((longlong)_Var15 + 0x10))->
              first;
    }
  }
  if ((this->_List)._Mypair._Myval2._Mysize == 0x492492492492492) {
    _Xlength_error("unordered_map/set too long");
    return extraout_RAX;
  }
  _Var7 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
           )::operator_new(0x38);
  ((pair<int_const_,vraudio::GainMixer::GainProcessors> *)((longlong)_Var7 + 0x10))->first =
       param_1->first;
  ((GainProcessors *)((longlong)_Var7 + 0x18))->processors_active =
       (param_1->second).processors_active;
  pGVar3 = (param_1->second).processors._Mypair._Myval2._Myend;
  pGVar4 = (param_1->second).processors._Mypair._Myval2._Mylast;
  pGVar8 = (param_1->second).processors._Mypair._Myval2._Myfirst;
  (param_1->second).processors._Mypair._Myval2._Myend = (GainProcessor *)0x0;
  (param_1->second).processors._Mypair._Myval2._Mylast = (GainProcessor *)0x0;
  (param_1->second).processors._Mypair._Myval2._Myfirst = (GainProcessor *)0x0;
  *(GainProcessor **)((longlong)_Var7 + 0x28) = pGVar4;
  (((vector<vraudio::GainProcessor,std::allocator<vraudio::GainProcessor>_> *)
   ((longlong)_Var7 + 0x20))->_Mypair)._Myval2._Myfirst = pGVar8;
  *(GainProcessor **)((longlong)_Var7 + 0x30) = pGVar3;
  uVar10 = (this->_List)._Mypair._Myval2._Mysize + 1;
  uVar12 = this->_Maxidx;
  if ((longlong)uVar10 < 0) {
    pGVar8 = (GainProcessor *)(uVar10 >> 1 | (ulonglong)((uint)uVar10 & 1));
  }
  uVar6 = (uint)pGVar8;
  if ((longlong)uVar12 < 0) {
    uVar6 = (uint)uVar12 & 1;
  }
  if ((float)this->_Traitsobj < (float)uVar10 / (float)uVar12) {
    auVar16._0_4_ = (float)uVar10 / (float)this->_Traitsobj;
    iVar9 = (int)auVar16._0_4_;
    if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar16._0_4_)) {
      auVar16._4_4_ = auVar16._0_4_;
      auVar16._8_8_ = 0;
      uVar6 = movmskps(uVar6,auVar16);
      auVar16._0_4_ = (float)(int)(iVar9 + (uVar6 & 1 ^ 1));
    }
    lVar11 = 0;
    if ((__real_5f000000 <= auVar16._0_4_) &&
       (auVar16._0_4_ = auVar16._0_4_ - __real_5f000000, auVar16._0_4_ < __real_5f000000)) {
      lVar11 = -0x8000000000000000;
    }
    uVar10 = 8;
    if (8 < (ulonglong)((longlong)auVar16._0_4_ + lVar11)) {
      uVar10 = (longlong)auVar16._0_4_ + lVar11;
    }
    uVar13 = uVar12;
    if ((uVar12 < uVar10) && ((0x1ff < uVar12 || (uVar13 = uVar12 * 8, uVar12 * 8 < uVar10)))) {
      uVar13 = uVar10;
    }
    _Forced_rehash(this,uVar13);
    p_Var2 = (this->_Vec)._Mypair._Myval2._Myfirst;
    uVar12 = this->_Mask & uVar14;
    _Var15 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
              )(this->_List)._Mypair._Myval2._Myhead;
    _Var5 = p_Var2[uVar12 * 2 + 1];
    if (_Var5 != _Var15) {
      iVar9 = ((pair<int_const_,vraudio::GainMixer::GainProcessors> *)((longlong)_Var5 + 0x10))->
              first;
      _Var15 = _Var5;
      while (((pair<int_const_,vraudio::GainMixer::GainProcessors> *)((longlong)_Var7 + 0x10))->
             first != iVar9) {
        if (_Var15 == p_Var2[uVar12 * 2]) goto LAB_14f0746e6;
        _Var15 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
                   *)((longlong)_Var15 + 8);
        iVar9 = ((pair<int_const_,vraudio::GainMixer::GainProcessors> *)((longlong)_Var15 + 0x10))->
                first;
      }
      _Var15 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
                 *)_Var15;
    }
  }
LAB_14f0746e6:
  _Var5 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
            *)((longlong)_Var15 + 8);
  puVar1 = &(this->_List)._Mypair._Myval2._Mysize;
  *puVar1 = *puVar1 + 1;
  *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
    *)_Var7 = _Var15;
  *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
    *)((longlong)_Var7 + 8) = _Var5;
  *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
    *)_Var5 = _Var7;
  *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
    *)((longlong)_Var15 + 8) = _Var7;
  p_Var2 = (this->_Vec)._Mypair._Myval2._Myfirst;
  uVar14 = this->_Mask & uVar14;
  if (p_Var2[uVar14 * 2] ==
      (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
       )(this->_List)._Mypair._Myval2._Myhead) {
    p_Var2[uVar14 * 2] = _Var7;
  }
  else {
    if (p_Var2[uVar14 * 2] == _Var15) {
      p_Var2[uVar14 * 2] = _Var7;
      __return_storage_ptr__->first =
           (_List_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
            )_Var7;
      __return_storage_ptr__->second = true;
      return __return_storage_ptr__;
    }
    if (p_Var2[uVar14 * 2 + 1] != _Var5) goto LAB_14f074746;
  }
  p_Var2[uVar14 * 2 + 1] = _Var7;
LAB_14f074746:
  __return_storage_ptr__->first =
       (_List_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
        )_Var7;
  __return_storage_ptr__->second = true;
  return __return_storage_ptr__;
}

// fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>_> @ 14f074770

void __cdecl
std::
fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>_>
          (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
           *param_1,
          _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
          *param_2,_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
                   *param_3)

{
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
  _Var1;
  ulonglong uVar2;
  ulonglong uVar3;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
  *p_Var4;
  
  uVar3 = (ulonglong)((longlong)param_2 + (7 - (longlong)param_1)) >> 3;
  if (param_2 < param_1) {
    uVar3 = 0;
  }
  if ((uVar3 != 0) && (1 < uVar3)) {
    _Var1 = *param_3;
    if ((param_3 < param_1) || (param_1 + (uVar3 - 1) < param_3)) {
      p_Var4 = param_1;
      for (uVar2 = uVar3 & 0x1ffffffffffffffe; uVar2 != 0; uVar2 = uVar2 - 1) {
        *p_Var4 = _Var1;
        p_Var4 = p_Var4 + 1;
      }
      param_1 = param_1 + (uVar3 & 0xfffffffffffffffe);
    }
  }
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// uninitialized_fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>_> @ 14f074800

void __cdecl
std::
uninitialized_fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>_>
          (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
           *param_1,
          _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
          *param_2,_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
                   *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// GainMixer @ 14f074830

GainMixer * __thiscall
vraudio::GainMixer::GainMixer(GainMixer *this,ulong64 param_1,ulong64 param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
  *p_Var4;
  longlong lVar5;
  longlong *plVar6;
  ChannelView *pCVar7;
  void *pvVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ChannelView *pCVar14;
  ulong64 uVar15;
  
  this->num_channels_ = param_1;
  AudioBuffer::AudioBuffer(&this->output_,param_1,param_2);
  this->is_empty_ = false;
  *(undefined4 *)&this->source_gain_processors_ = 0;
  *(undefined8 *)&(this->source_gain_processors_).field_0x8 = 0;
  *(undefined8 *)&(this->source_gain_processors_).field_0x10 = 0;
  pvVar8 = ::operator_new(0x38);
  *(void **)pvVar8 = pvVar8;
  *(void **)((longlong)pvVar8 + 8) = pvVar8;
  *(void **)&(this->source_gain_processors_).field_0x8 = pvVar8;
  *(undefined8 *)&(this->source_gain_processors_).field_0x18 = 0;
  *(undefined8 *)&(this->source_gain_processors_).field_0x20 = 0;
  *(undefined8 *)&(this->source_gain_processors_).field_0x28 = 0;
  *(undefined8 *)&(this->source_gain_processors_).field_0x30 = 7;
  *(undefined8 *)&(this->source_gain_processors_).field_0x38 = 8;
  *(undefined4 *)&this->source_gain_processors_ = 0x3f800000;
  uVar3 = *(undefined8 *)&(this->source_gain_processors_).field_0x8;
  puVar9 = ::operator_new(0x80);
  p_Var4 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
             **)&(this->source_gain_processors_).field_0x18;
  uVar15 = *(longlong *)&(this->source_gain_processors_).field_0x28 - (longlong)p_Var4 >> 3;
  if (uVar15 != 0) {
    std::
    allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>_>
    ::deallocate((allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>_>
                  *)&(this->source_gain_processors_).field_0x18,p_Var4,uVar15);
  }
  puVar2 = puVar9 + 0x10;
  *(undefined8 **)&(this->source_gain_processors_).field_0x18 = puVar9;
  *(undefined8 **)&(this->source_gain_processors_).field_0x20 = puVar2;
  *(undefined8 **)&(this->source_gain_processors_).field_0x28 = puVar2;
  for (; puVar9 != puVar2; puVar9 = puVar9 + 1) {
    *puVar9 = uVar3;
  }
  if (this->is_empty_ == false) {
    plVar10 = *(longlong **)&(this->source_gain_processors_).field_0x8;
    plVar12 = (longlong *)*plVar10;
    if (plVar12 != plVar10) {
      do {
        if ((char)plVar12[3] == '\0') {
          plVar13 = (longlong *)*plVar12;
          lVar5 = *(longlong *)&(this->source_gain_processors_).field_0x18;
          uVar11 = (((((ulonglong)*(byte *)(plVar12 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar12 + 0x11)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar12 + 0x12)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar12 + 0x13)) * 0x100000001b3 &
                   *(ulonglong *)&(this->source_gain_processors_).field_0x30;
          plVar6 = *(longlong **)(lVar5 + uVar11 * 0x10);
          if (*(longlong **)(lVar5 + 8 + uVar11 * 0x10) == plVar12) {
            if (plVar6 == plVar12) {
              *(longlong **)(lVar5 + uVar11 * 0x10) = plVar10;
              *(longlong **)(lVar5 + 8 + uVar11 * 0x10) = plVar10;
            }
            else {
              *(longlong *)(lVar5 + 8 + uVar11 * 0x10) = plVar12[1];
            }
          }
          else if (plVar6 == plVar12) {
            *(longlong **)(lVar5 + uVar11 * 0x10) = plVar13;
          }
          lVar5 = *plVar12;
          puVar1 = &(this->source_gain_processors_).field_0x10;
          *(longlong *)puVar1 = *(longlong *)puVar1 + -1;
          *(longlong *)plVar12[1] = lVar5;
          *(longlong *)(lVar5 + 8) = plVar12[1];
          std::vector<vraudio::GainProcessor,std::allocator<vraudio::GainProcessor>_>::_Tidy
                    ((vector<vraudio::GainProcessor,std::allocator<vraudio::GainProcessor>_> *)
                     (plVar12 + 4));
          ::operator_delete(plVar12,0x38);
        }
        else {
          *(undefined1 *)(plVar12 + 3) = 0;
          plVar13 = (longlong *)*plVar12;
        }
        plVar10 = *(longlong **)&(this->source_gain_processors_).field_0x8;
        plVar12 = plVar13;
      } while (plVar13 != plVar10);
    }
    pCVar7 = (this->output_).channel_views_._Mypair._Myval2._Mylast;
    for (pCVar14 = (this->output_).channel_views_._Mypair._Myval2._Myfirst; pCVar14 != pCVar7;
        pCVar14 = pCVar14 + 1) {
      pCVar14->enabled_ = true;
      memset(pCVar14->begin_itr_,0,pCVar14->size_ << 2);
    }
  }
  this->is_empty_ = true;
  return this;
}

// GainProcessors @ 14f074a60

GainProcessors * __thiscall
vraudio::GainMixer::GainProcessors::GainProcessors(GainProcessors *this,ulong64 param_1)

{
  GainProcessor *pGVar1;
  
  this->processors_active = true;
  (this->processors)._Mypair._Myval2._Myfirst = (GainProcessor *)0x0;
  (this->processors)._Mypair._Myval2._Mylast = (GainProcessor *)0x0;
  (this->processors)._Mypair._Myval2._Myend = (GainProcessor *)0x0;
  if (param_1 != 0) {
    if (0x1fffffffffffffff < param_1) {
                    /* WARNING: Subroutine does not return */
      std::vector<vraudio::GainProcessor,std::allocator<vraudio::GainProcessor>_>::_Xlength();
    }
    pGVar1 = std::_Allocate<16,std::_Default_allocate_traits>(param_1 * 8);
    (this->processors)._Mypair._Myval2._Myfirst = pGVar1;
    (this->processors)._Mypair._Myval2._Mylast = pGVar1;
    (this->processors)._Mypair._Myval2._Myend = pGVar1 + param_1;
    pGVar1 = (this->processors)._Mypair._Myval2._Myfirst;
    do {
      GainProcessor::GainProcessor(pGVar1);
      pGVar1 = pGVar1 + 1;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
    (this->processors)._Mypair._Myval2._Mylast = pGVar1;
  }
  return this;
}

// AddInput @ 14f074b00

void __thiscall
vraudio::GainMixer::AddInput
          (GainMixer *this,AudioBuffer *param_1,vector<float,std::allocator<float>_> *param_2)

{
  GainProcessor *this_00;
  float fVar1;
  vector<vraudio::GainProcessor,std::allocator<vraudio::GainProcessor>_> *pvVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ChannelView *pCVar5;
  
  pvVar2 = GetOrCreateProcessors(this,param_1->source_id_);
  uVar3 = 0;
  uVar4 = uVar3;
  if (this->num_channels_ == 0) {
    this->is_empty_ = false;
  }
  else {
    do {
      pCVar5 = (ChannelView *)
               ((longlong)&((param_1->channel_views_)._Mypair._Myval2._Myfirst)->begin_itr_ + uVar4)
      ;
      fVar1 = (param_2->_Mypair)._Myval2._Myfirst[uVar3];
      this_00 = (pvVar2->_Mypair)._Myval2._Myfirst + uVar3;
      if (pCVar5->enabled_ == false) {
        GainProcessor::Reset(this_00,fVar1);
      }
      else {
        GainProcessor::ApplyGain
                  (this_00,fVar1,pCVar5,
                   (ChannelView *)
                   ((longlong)&((this->output_).channel_views_._Mypair._Myval2._Myfirst)->begin_itr_
                   + uVar4),true);
      }
      uVar3 = uVar3 + 1;
      uVar4 = uVar4 + 0x18;
    } while (uVar3 < this->num_channels_);
    this->is_empty_ = false;
  }
  return;
}

// AddInputChannel @ 14f074bb0

void __thiscall
vraudio::GainMixer::AddInputChannel
          (GainMixer *this,ChannelView *param_1,int param_2,
          vector<float,std::allocator<float>_> *param_3)

{
  GainProcessor *this_00;
  float fVar1;
  vector<vraudio::GainProcessor,std::allocator<vraudio::GainProcessor>_> *pvVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  pvVar2 = GetOrCreateProcessors(this,param_2);
  uVar3 = 0;
  uVar4 = uVar3;
  if (this->num_channels_ == 0) {
    this->is_empty_ = false;
  }
  else {
    do {
      fVar1 = (param_3->_Mypair)._Myval2._Myfirst[uVar3];
      this_00 = (pvVar2->_Mypair)._Myval2._Myfirst + uVar3;
      if (param_1->enabled_ == false) {
        GainProcessor::Reset(this_00,fVar1);
      }
      else {
        GainProcessor::ApplyGain
                  (this_00,fVar1,param_1,
                   (ChannelView *)
                   ((longlong)&((this->output_).channel_views_._Mypair._Myval2._Myfirst)->begin_itr_
                   + uVar4),true);
      }
      uVar3 = uVar3 + 1;
      uVar4 = uVar4 + 0x18;
    } while (uVar3 < this->num_channels_);
    this->is_empty_ = false;
  }
  return;
}

// GetOrCreateProcessors @ 14f074c60

vector<vraudio::GainProcessor,std::allocator<vraudio::GainProcessor>_> * __thiscall
vraudio::GainMixer::GetOrCreateProcessors(GainMixer *this,int param_1)

{
  unordered_map<int,vraudio::GainMixer::GainProcessors,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>
  *this_00;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  GainProcessors *pGVar4;
  longlong *plVar5;
  GainProcessor GVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  int local_res10 [2];
  pair<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>,bool>
  local_58;
  pair<int_const_,vraudio::GainMixer::GainProcessors> local_48;
  
  this_00 = &this->source_gain_processors_;
  lVar2 = *(longlong *)&(this->source_gain_processors_).field_0x8;
  plVar5 = (longlong *)
           ((((ulonglong)(param_1 >> 0x18 & 0xff) ^
             ((((ulonglong)(byte)param_1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
              (ulonglong)(param_1 >> 8 & 0xff)) * 0x100000001b3 ^
             (ulonglong)(param_1 >> 0x10 & 0xff)) * 0x100000001b3) * 0x100000001b3 &
            *(ulonglong *)&(this->source_gain_processors_).field_0x30) * 0x10 +
           *(longlong *)&(this->source_gain_processors_).field_0x18);
  lVar3 = plVar5[1];
  if (lVar3 == lVar2) {
LAB_14f074cf5:
    lVar3 = 0;
  }
  else {
    iVar1 = *(int *)(lVar3 + 0x10);
    while (param_1 != iVar1) {
      if (lVar3 == *plVar5) goto LAB_14f074cf5;
      lVar3 = *(longlong *)(lVar3 + 8);
      iVar1 = *(int *)(lVar3 + 0x10);
    }
  }
  if (lVar3 == 0) {
    lVar3 = lVar2;
  }
  local_res10[0] = param_1;
  if (lVar3 == lVar2) {
    uVar8 = this->num_channels_;
    local_48.second.processors._Mypair._Myval2._Myfirst._0_4_ = 0.0;
    local_48.second.processors._Mypair._Myval2._Myfirst._4_1_ = false;
    local_48.second.processors._Mypair._Myval2._Myfirst._5_3_ = 0;
    local_48.second.processors._Mypair._Myval2._Myend = (GainProcessor *)0x0;
    local_48.second.processors._Mypair._Myval2._Mylast = (GainProcessor *)0x0;
    if (uVar8 != 0) {
      if (0x1fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
        std::vector<vraudio::GainProcessor,std::allocator<vraudio::GainProcessor>_>::_Xlength();
      }
      local_48.second.processors._Mypair._Myval2._Myfirst =
           std::_Allocate<16,std::_Default_allocate_traits>(uVar8 * 8);
      local_48.second.processors._Mypair._Myval2._Myend =
           (GainProcessor *)
           (uVar8 * 8 + (longlong)local_48.second.processors._Mypair._Myval2._Myfirst);
      local_48.second.processors._Mypair._Myval2._Mylast =
           local_48.second.processors._Mypair._Myval2._Myfirst;
      do {
        GainProcessor::GainProcessor(local_48.second.processors._Mypair._Myval2._Mylast);
        local_48.second.processors._Mypair._Myval2._Mylast =
             local_48.second.processors._Mypair._Myval2._Mylast + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    local_48.second.processors_active = true;
    local_48.first = param_1;
    std::
    _Hash<std::_Umap_traits<int,vraudio::GainMixer::GainProcessors,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>,0>_>
    ::emplace<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>
              ((_Hash<std::_Umap_traits<int,vraudio::GainMixer::GainProcessors,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>,0>_>
                *)this_00,&local_58,&local_48);
    if ((GainProcessor)local_48.second.processors._Mypair._Myval2._Myfirst != (GainProcessor)0x0) {
      uVar7 = (longlong)local_48.second.processors._Mypair._Myval2._Myend -
              (longlong)local_48.second.processors._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
      GVar6 = (GainProcessor)local_48.second.processors._Mypair._Myval2._Myfirst;
      if (0xfff < uVar7) {
        GVar6 = *(GainProcessor *)
                 ((longlong)local_48.second.processors._Mypair._Myval2._Myfirst + -8);
        uVar7 = uVar7 + 0x27;
        if (0x1f < ((longlong)local_48.second.processors._Mypair._Myval2._Myfirst - (longlong)GVar6)
                   - 8U) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)GVar6,uVar7);
    }
  }
  pGVar4 = std::
           unordered_map<int,vraudio::GainMixer::GainProcessors,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>
           ::at(this_00,local_res10);
  pGVar4->processors_active = true;
  pGVar4 = std::
           unordered_map<int,vraudio::GainMixer::GainProcessors,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>
           ::at(this_00,local_res10);
  return &pGVar4->processors;
}

// GetOutput @ 14f074e50

AudioBuffer * __thiscall vraudio::GainMixer::GetOutput(GainMixer *this)

{
  AudioBuffer *pAVar1;
  
  pAVar1 = &this->output_;
  if (this->is_empty_ != false) {
    pAVar1 = (AudioBuffer *)0x0;
  }
  return pAVar1;
}

// Reset @ 14f074e70

void __thiscall vraudio::GainMixer::Reset(GainMixer *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  ChannelView *pCVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  ChannelView *pCVar9;
  
  if (this->is_empty_ == false) {
    plVar6 = *(longlong **)&(this->source_gain_processors_).field_0x8;
    plVar7 = (longlong *)*plVar6;
    if (plVar7 != plVar6) {
      do {
        if ((char)plVar7[3] == '\0') {
          plVar8 = (longlong *)*plVar7;
          lVar2 = *(longlong *)&(this->source_gain_processors_).field_0x18;
          uVar5 = (((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3 &
                  *(ulonglong *)&(this->source_gain_processors_).field_0x30;
          plVar3 = *(longlong **)(lVar2 + uVar5 * 0x10);
          if (*(longlong **)(lVar2 + 8 + uVar5 * 0x10) == plVar7) {
            if (plVar3 == plVar7) {
              *(longlong **)(lVar2 + uVar5 * 0x10) = plVar6;
              *(longlong **)(lVar2 + 8 + uVar5 * 0x10) = plVar6;
            }
            else {
              *(longlong *)(lVar2 + 8 + uVar5 * 0x10) = plVar7[1];
            }
          }
          else if (plVar3 == plVar7) {
            *(longlong **)(lVar2 + uVar5 * 0x10) = plVar8;
          }
          lVar2 = *plVar7;
          puVar1 = &(this->source_gain_processors_).field_0x10;
          *(longlong *)puVar1 = *(longlong *)puVar1 + -1;
          *(longlong *)plVar7[1] = lVar2;
          *(longlong *)(lVar2 + 8) = plVar7[1];
          std::vector<vraudio::GainProcessor,std::allocator<vraudio::GainProcessor>_>::_Tidy
                    ((vector<vraudio::GainProcessor,std::allocator<vraudio::GainProcessor>_> *)
                     (plVar7 + 4));
          ::operator_delete(plVar7,0x38);
        }
        else {
          *(undefined1 *)(plVar7 + 3) = 0;
          plVar8 = (longlong *)*plVar7;
        }
        plVar6 = *(longlong **)&(this->source_gain_processors_).field_0x8;
        plVar7 = plVar8;
      } while (plVar8 != plVar6);
    }
    pCVar4 = (this->output_).channel_views_._Mypair._Myval2._Mylast;
    for (pCVar9 = (this->output_).channel_views_._Mypair._Myval2._Myfirst; pCVar9 != pCVar4;
        pCVar9 = pCVar9 + 1) {
      pCVar9->enabled_ = true;
      memset(pCVar9->begin_itr_,0,pCVar9->size_ << 2);
    }
    this->is_empty_ = true;
    return;
  }
  this->is_empty_ = true;
  return;
}

// _Assign_grow @ 14f074ff0

void __thiscall
std::
_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>_>_>
::_Assign_grow(_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>_>_>
               *this,ulong64 param_1,
              _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
              param_2)

{
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
  *p_Var1;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
  *p_Var2;
  ulong64 uVar3;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
  local_res18;
  
  p_Var1 = (this->_Mypair)._Myval2._Myfirst;
  p_Var2 = (this->_Mypair)._Myval2._Mylast;
  local_res18 = param_2;
  if (param_1 <= (ulonglong)((longlong)p_Var2 - (longlong)p_Var1 >> 3)) {
    fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>_>
              (p_Var1,p_Var2,&local_res18);
    return;
  }
  if (0x1fffffffffffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    _Throw_bad_array_new_length();
  }
  p_Var2 = _Allocate<16,std::_Default_allocate_traits>(param_1 * 8);
  p_Var1 = (this->_Mypair)._Myval2._Myfirst;
  uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)p_Var1 >> 3;
  if (uVar3 != 0) {
    allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>_>
    ::deallocate((allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>_>
                  *)this,p_Var1,uVar3);
  }
  p_Var1 = p_Var2 + param_1;
  (this->_Mypair)._Myval2._Myfirst = p_Var2;
  (this->_Mypair)._Myval2._Mylast = p_Var1;
  (this->_Mypair)._Myval2._Myend = p_Var1;
  for (; p_Var2 != p_Var1; p_Var2 = p_Var2 + 1) {
    *p_Var2 = param_2;
  }
  return;
}

// _Forced_rehash @ 14f0750d0

void __thiscall
std::
_Hash<std::_Umap_traits<int,vraudio::GainMixer::GainProcessors,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>,0>_>
::_Forced_rehash(_Hash<std::_Umap_traits<int,vraudio::GainMixer::GainProcessors,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>,0>_>
                 *this,ulong64 param_1)

{
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
  _Var1;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
  _Var2;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
  _Var3;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
  *p_Var4;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
  *p_Var5;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
  *p_Var6;
  longlong *plVar7;
  longlong lVar8;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
  _Var9;
  ulonglong uVar10;
  ulong64 uVar11;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
  *p_Var12;
  
  for (lVar8 = 0x3f; 0xfffffffffffffffU >> lVar8 == 0; lVar8 = lVar8 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar8 & 0x3f)) < param_1) {
    _Xlength_error("invalid hash bucket count");
    return;
  }
  _Var1 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
           )(this->_List)._Mypair._Myval2._Myhead;
  uVar10 = param_1 - 1 | 1;
  lVar8 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar8 == 0; lVar8 = lVar8 + -1) {
    }
  }
  uVar11 = 1L << ((char)lVar8 + 1U & 0x3f);
  _Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>_>_>
  ::_Assign_grow(&this->_Vec,uVar11 * 2,_Var1);
  this->_Maxidx = uVar11;
  this->_Mask = uVar11 - 1;
  _Var9 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
           )((this->_List)._Mypair._Myval2._Myhead)->_Next;
joined_r0x00014f075145:
  do {
    while( true ) {
      while( true ) {
        if (_Var9 == _Var1) {
          return;
        }
        _Var2 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
                  *)_Var9;
        p_Var12 = (this->_Vec)._Mypair._Myval2._Myfirst +
                  ((((((ulonglong)*(byte *)((longlong)_Var9 + 0x10) ^ 0xcbf29ce484222325) *
                      0x100000001b3 ^ (ulonglong)*(byte *)((longlong)_Var9 + 0x11)) * 0x100000001b3
                    ^ (ulonglong)*(byte *)((longlong)_Var9 + 0x12)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)_Var9 + 0x13)) * 0x100000001b3 & this->_Mask) * 2;
        if (*p_Var12 != _Var1) break;
        *p_Var12 = _Var9;
        p_Var12[1] = _Var9;
        _Var9 = _Var2;
      }
      _Var3 = p_Var12[1];
      if (*(int *)((longlong)_Var9 + 0x10) != *(int *)((longlong)_Var3 + 0x10)) break;
      _Var3 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
                *)_Var3;
      if (_Var3 != _Var9) {
        p_Var4 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
                   **)((longlong)_Var9 + 8);
        *p_Var4 = _Var2;
        p_Var5 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
                   **)((longlong)_Var2 + 8);
        *p_Var5 = _Var3;
        p_Var6 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
                   **)((longlong)_Var3 + 8);
        *p_Var6 = _Var9;
        *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
          **)((longlong)_Var3 + 8) = p_Var5;
        *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
          **)((longlong)_Var2 + 8) = p_Var4;
        *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
          **)((longlong)_Var9 + 8) = p_Var6;
      }
      p_Var12[1] = _Var9;
      _Var9 = _Var2;
    }
    do {
      if (*p_Var12 == _Var3) {
        p_Var4 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
                   **)((longlong)_Var9 + 8);
        *p_Var4 = _Var2;
        p_Var5 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
                   **)((longlong)_Var2 + 8);
        *p_Var5 = _Var3;
        p_Var6 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
                   **)((longlong)_Var3 + 8);
        *p_Var6 = _Var9;
        *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
          **)((longlong)_Var3 + 8) = p_Var5;
        *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
          **)((longlong)_Var2 + 8) = p_Var4;
        *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
          **)((longlong)_Var9 + 8) = p_Var6;
        *p_Var12 = _Var9;
        _Var9 = _Var2;
        goto joined_r0x00014f075145;
      }
      _Var3 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
                *)((longlong)_Var3 + 8);
    } while (*(int *)((longlong)_Var9 + 0x10) != *(int *)((longlong)_Var3 + 0x10));
    lVar8 = *(longlong *)_Var3;
    p_Var12 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
                **)((longlong)_Var9 + 8);
    *p_Var12 = _Var2;
    plVar7 = *(longlong **)((longlong)_Var2 + 8);
    *plVar7 = lVar8;
    p_Var4 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
               **)(lVar8 + 8);
    *p_Var4 = _Var9;
    *(longlong **)(lVar8 + 8) = plVar7;
    *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
      **)((longlong)_Var2 + 8) = p_Var12;
    *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
      **)((longlong)_Var9 + 8) = p_Var4;
    _Var9 = _Var2;
  } while( true );
}

// _Tidy @ 14f0752a0

void __thiscall
std::vector<vraudio::GainProcessor,std::allocator<vraudio::GainProcessor>_>::_Tidy
          (vector<vraudio::GainProcessor,std::allocator<vraudio::GainProcessor>_> *this)

{
  GainProcessor GVar1;
  GainProcessor GVar2;
  ulong64 uVar3;
  
  GVar1 = (GainProcessor)(this->_Mypair)._Myval2._Myfirst;
  if (GVar1 != (GainProcessor)0x0) {
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)GVar1 & 0xfffffffffffffff8;
    GVar2 = GVar1;
    if (0xfff < uVar3) {
      GVar2 = *(GainProcessor *)((longlong)GVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)GVar1 + (-8 - (longlong)GVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)GVar2,uVar3);
    (this->_Mypair)._Myval2._Myfirst = (GainProcessor *)0x0;
    (this->_Mypair)._Myval2._Mylast = (GainProcessor *)0x0;
    (this->_Mypair)._Myval2._Myend = (GainProcessor *)0x0;
  }
  return;
}

// _Xlength @ 14f075320

void __cdecl
std::vector<vraudio::GainProcessor,std::allocator<vraudio::GainProcessor>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// at @ 14f075340

GainProcessors * __thiscall
std::
unordered_map<int,vraudio::GainMixer::GainProcessors,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>
::at(unordered_map<int,vraudio::GainMixer::GainProcessors,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>
     *this,int *param_1)

{
  int iVar1;
  longlong lVar2;
  GainProcessors *extraout_RAX;
  longlong *plVar3;
  
  plVar3 = (longlong *)
           (((((((ulonglong)(byte)*param_1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)param_1 + 1)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_1 + 2)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_1 + 3)) * 0x100000001b3 &
            *(ulonglong *)&this->field_0x30) * 0x10 + *(longlong *)&this->field_0x18);
  lVar2 = plVar3[1];
  if (lVar2 != *(longlong *)&this->field_0x8) {
    iVar1 = *(int *)(lVar2 + 0x10);
    while (*param_1 != iVar1) {
      if (lVar2 == *plVar3) goto LAB_14f0753cc;
      lVar2 = *(longlong *)(lVar2 + 8);
      iVar1 = *(int *)(lVar2 + 0x10);
    }
    if (lVar2 != 0) {
      return (GainProcessors *)(lVar2 + 0x18);
    }
  }
LAB_14f0753cc:
  _Xout_of_range("invalid unordered_map<K, T> key");
  return extraout_RAX;
}

// deallocate @ 14f0753e0

void __thiscall
std::
allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>_>
::deallocate(allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>_>
             *this,_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
                   *param_1,ulong64 param_2)

{
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
  _Var1;
  ulonglong uVar2;
  
  uVar2 = param_2 * 8;
  _Var1 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::GainMixer::GainProcessors>_>_>_>
           )param_1;
  if (0xfff < uVar2) {
    _Var1 = param_1[-1];
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_1 + (-8 - (longlong)_Var1))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  ::operator_delete((void *)_Var1,uVar2);
  return;
}

