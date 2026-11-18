// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 8

// _Emplace_reallocate<vraudio::AudioBuffer_const_*> @ 14f0941f0

/* WARNING: Type propagation algorithm not settling */

AudioBuffer ** __thiscall
std::vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_>::
_Emplace_reallocate<vraudio::AudioBuffer_const_*>
          (vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_> *this,
          AudioBuffer **param_1,AudioBuffer **param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  AudioBuffer **_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  AudioBuffer **ppAVar5;
  AudioBuffer **ppAVar6;
  ulong64 uVar7;
  longlong lVar8;
  size_t _Size;
  
  ppAVar5 = (this->_Mypair)._Myval2._Myfirst;
  lVar8 = (longlong)param_1 - (longlong)ppAVar5 >> 3;
  lVar2 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)ppAVar5 >> 3;
  if (lVar2 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)ppAVar5 >> 3;
  uVar1 = lVar2 + 1;
  if (0x1fffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar4 = 0x1fffffffffffffff;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar4 = uVar1;
    if (uVar1 <= uVar3) {
      uVar4 = uVar3;
    }
    if (0x1fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar4 * 8);
  _Dst[lVar8] = *param_2;
  ppAVar5 = (this->_Mypair)._Myval2._Mylast;
  ppAVar6 = (this->_Mypair)._Myval2._Myfirst;
  if (param_1 == ppAVar5) {
    _Size = (longlong)ppAVar5 - (longlong)ppAVar6;
    ppAVar5 = _Dst;
    param_1 = ppAVar6;
  }
  else {
    memmove(_Dst,ppAVar6,(longlong)param_1 - (longlong)ppAVar6);
    ppAVar5 = _Dst + lVar8 + 1;
    _Size = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)param_1;
  }
  memmove(ppAVar5,param_1,_Size);
  ppAVar5 = (this->_Mypair)._Myval2._Myfirst;
  if (ppAVar5 != (AudioBuffer **)0x0) {
    uVar7 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)ppAVar5 & 0xfffffffffffffff8;
    ppAVar6 = ppAVar5;
    if (0xfff < uVar7) {
      ppAVar6 = (AudioBuffer **)ppAVar5[0xffffffffffffffff];
      uVar7 = uVar7 + 0x27;
      if (0x1f < (ulonglong)((longlong)ppAVar5 + (-8 - (longlong)ppAVar6))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(ppAVar6,uVar7);
  }
  (this->_Mypair)._Myval2._Myfirst = _Dst;
  (this->_Mypair)._Myval2._Mylast = _Dst + uVar1;
  (this->_Mypair)._Myval2._Myend = _Dst + uVar4;
  return _Dst + lVar8;
}

// SinkNode @ 14f094370

SinkNode * __thiscall vraudio::SinkNode::SinkNode(SinkNode *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  *p_Var3;
  void *pvVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  
  this->_padding_ = (longlong)&_vftable__for__vraudio__Node__;
  this->_padding_ = 0;
  this->_padding_ =
       (longlong)&_vftable__for__vraudio__SubscriberNode<vraudio::AudioBuffer_const*___ptr64>__;
  this->_padding_ = 0;
  *(undefined4 *)&(this->input_stream_).outputs_ = 0;
  *(undefined8 *)&(this->input_stream_).outputs_.field_0x8 = 0;
  *(undefined8 *)&(this->input_stream_).outputs_.field_0x10 = 0;
  pvVar4 = ::operator_new(0x28);
  *(void **)pvVar4 = pvVar4;
  *(void **)((longlong)pvVar4 + 8) = pvVar4;
  *(void **)&(this->input_stream_).outputs_.field_0x8 = pvVar4;
  *(undefined8 *)&(this->input_stream_).outputs_.field_0x18 = 0;
  *(undefined8 *)&(this->input_stream_).outputs_.field_0x20 = 0;
  *(undefined8 *)&(this->input_stream_).outputs_.field_0x28 = 0;
  *(undefined8 *)&(this->input_stream_).outputs_.field_0x30 = 7;
  *(undefined8 *)&(this->input_stream_).outputs_.field_0x38 = 8;
  *(undefined4 *)&(this->input_stream_).outputs_ = 0x3f800000;
  uVar2 = *(undefined8 *)&(this->input_stream_).outputs_.field_0x8;
  puVar5 = ::operator_new(0x80);
  p_Var3 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
             **)&(this->input_stream_).outputs_.field_0x18;
  uVar6 = *(longlong *)&(this->input_stream_).outputs_.field_0x28 - (longlong)p_Var3 >> 3;
  if (uVar6 != 0) {
    std::
    allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>_>
    ::deallocate((allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>_>
                  *)&(this->input_stream_).outputs_.field_0x18,p_Var3,uVar6);
  }
  puVar1 = puVar5 + 0x10;
  *(undefined8 **)&(this->input_stream_).outputs_.field_0x18 = puVar5;
  *(undefined8 **)&(this->input_stream_).outputs_.field_0x20 = puVar1;
  *(undefined8 **)&(this->input_stream_).outputs_.field_0x28 = puVar1;
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    *puVar5 = uVar2;
  }
  (this->input_stream_).read_data_._Mypair._Myval2._Myfirst = (AudioBuffer **)0x0;
  (this->input_stream_).read_data_._Mypair._Myval2._Mylast = (AudioBuffer **)0x0;
  (this->input_stream_).read_data_._Mypair._Myval2._Myend = (AudioBuffer **)0x0;
  return this;
}

// `vector_deleting_destructor'`adjustor{24}' @ 14f09447c

/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::SinkNode::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::SinkNode::_vector_deleting_destructor__adjustor_24__(SinkNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((SinkNode *)&this[-1].input_stream_.read_data_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14f094490

void * __thiscall vraudio::SinkNode::_scalar_deleting_destructor_(SinkNode *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  vraudio::Node::Input<vraudio::AudioBuffer_const_*>::~Input<vraudio::AudioBuffer_const_*>
            (&this->input_stream_);
  this->_padding_ = (longlong)&___7__SubscriberNode_PEBVAudioBuffer_vraudio___vraudio__6B_;
  this->_padding_ = (longlong)&___7Node_vraudio__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// CleanUp @ 14f094510

bool __thiscall vraudio::SinkNode::CleanUp(SinkNode *this)

{
  Input<vraudio::AudioBuffer_const_*> *this_00;
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>,std::_Iterator_base0>
  _Var4;
  longlong lVar5;
  Output<vraudio::AudioBuffer_const_*> *this_01;
  longlong *plVar6;
  _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>,std::_Iterator_base0>
  _Var7;
  _List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>
  *p_Var8;
  char cVar9;
  _List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>
  *p_Var10;
  ulonglong uVar11;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  _Var12;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var13;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var14;
  _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>,std::_Iterator_base0>
  _Var15;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  _Var16;
  ulong64 uVar17;
  Output<vraudio::AudioBuffer_const_*> *local_res8;
  undefined1 local_68 [8];
  _List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>
  *local_60;
  ulong64 local_58;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  local_50;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  local_48;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  _Stack_40;
  ulong64 local_38;
  ulong64 local_30;
  
  local_68._0_4_ = *(undefined4 *)&(this->input_stream_).outputs_;
  this_00 = &this->input_stream_;
  local_58 = 0;
  p_Var10 = ::operator_new(0x28);
  p_Var10->_Next = p_Var10;
  p_Var10->_Prev = p_Var10;
  local_38 = *(ulong64 *)&(this->input_stream_).outputs_.field_0x30;
  uVar11 = *(longlong *)&(this->input_stream_).outputs_.field_0x20 -
           *(longlong *)&(this->input_stream_).outputs_.field_0x18 >> 3;
  local_30 = *(ulong64 *)&(this->input_stream_).outputs_.field_0x38;
  local_50 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
              )0x0;
  local_48 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
              )0x0;
  _Stack_40 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
               )0x0;
  local_60 = p_Var10;
  if (uVar11 != 0) {
    if (0x1fffffffffffffff < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::_Throw_bad_array_new_length();
    }
    _Var12 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
              )std::_Allocate<16,std::_Default_allocate_traits>(uVar11 * 8);
    uVar17 = (longlong)_Stack_40 - (longlong)local_50 >> 3;
    if (uVar17 != 0) {
      std::
      allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>_>
      ::deallocate((allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>_>
                    *)&local_50,
                   (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                    *)local_50,uVar17);
    }
    _Stack_40 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                 )(uVar11 * 8 + (longlong)_Var12);
    for (_Var16 = _Var12; local_50 = _Var12, _Var16 != _Stack_40;
        _Var16 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                  )((longlong)_Var16 + 8)) {
      *(_List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>
        **)_Var16 = p_Var10;
    }
  }
  _Var4._Ptr = *(_List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>
                 **)&(this->input_stream_).outputs_.field_0x8;
  local_48 = _Stack_40;
  std::
  _Hash<std::_Umap_traits<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::shared_ptr<vraudio::Node>,std::_Uhash_compare<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::hash<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>,std::equal_to<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>_>,std::allocator<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>,0>_>
  ::
  _Insert_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>,std::_Iterator_base0>_>
            ((_Hash<std::_Umap_traits<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::shared_ptr<vraudio::Node>,std::_Uhash_compare<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::hash<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>,std::equal_to<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>_>,std::allocator<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>,0>_>
              *)local_68,(_Var4._Ptr)->_Next,_Var4);
  p_Var8 = local_60;
  for (p_Var10 = local_60->_Next; p_Var10 != p_Var8; p_Var10 = p_Var10->_Next) {
    lVar5 = *(longlong *)&(p_Var10->_Myval).second.field_0x8;
    this_01 = (p_Var10->_Myval).first;
    if (lVar5 != 0) {
      LOCK();
      piVar1 = (int *)(lVar5 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    plVar6 = *(longlong **)&(p_Var10->_Myval).second.field_0x8;
    cVar9 = (**(code **)(**(longlong **)&(p_Var10->_Myval).second + 0x10))();
    if (cVar9 != '\0') {
      p_Var14 = *(_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> **)
                 &this_01->inputs_;
      p_Var13 = p_Var14->_Parent;
      cVar9 = p_Var13->_Isnil;
      _Var7._Ptr = p_Var14;
      while (cVar9 == '\0') {
        _Var15._Ptr = p_Var13;
        if (p_Var13->_Myval < this_00) {
          p_Var13 = (_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *)
                    &p_Var13->_Right;
          _Var15._Ptr = _Var7._Ptr;
        }
        p_Var13 = p_Var13->_Left;
        _Var7._Ptr = _Var15._Ptr;
        cVar9 = p_Var13->_Isnil;
      }
      if ((((_Var7._Ptr)->_Isnil == '\0') && ((_Var7._Ptr)->_Myval <= this_00)) &&
         (_Var7._Ptr != p_Var14)) {
        p_Var14 = std::
                  _Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>
                  ::_Extract((_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>
                              *)this_01,_Var7);
        ::operator_delete(p_Var14,0x28);
      }
      local_res8 = this_01;
      std::
      _Hash<std::_Umap_traits<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::shared_ptr<vraudio::Node>,std::_Uhash_compare<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::hash<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>,std::equal_to<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>_>,std::allocator<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>,0>_>
      ::_Erase<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>
                ((_Hash<std::_Umap_traits<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::shared_ptr<vraudio::Node>,std::_Uhash_compare<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::hash<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>,std::equal_to<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>_>,std::allocator<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>,0>_>
                  *)this_00,&local_res8);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
  }
  if (local_50 !=
      (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
       )0x0) {
    uVar17 = (longlong)_Stack_40 - (longlong)local_50 & 0xfffffffffffffff8;
    _Var12 = local_50;
    if (0xfff < uVar17) {
      _Var12 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                 *)((longlong)local_50 + -8);
      uVar17 = uVar17 + 0x27;
      if (0x1f < ((longlong)local_50 - (longlong)_Var12) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)_Var12,uVar17);
    local_48 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                )0x0;
    _Stack_40 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                 )0x0;
    local_50 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                )0x0;
  }
  std::
  _List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>
  ::
  _Free_non_head<std::allocator<std::_List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>_>_>
            ((allocator<std::_List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>_>
              *)&local_60,local_60);
  ::operator_delete(local_60,0x28);
  return false;
}

// Connect @ 14f094780

void __thiscall
vraudio::SinkNode::Connect
          (SinkNode *this,shared_ptr<vraudio::PublisherNode<vraudio::AudioBuffer_const_*>_> *param_1
          )

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var4;
  _List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>
  *p_Var5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  Output<vraudio::AudioBuffer_const_*> *this_00;
  undefined8 *puVar9;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var10;
  pair<std::_List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>_*,bool>
  *ppVar11;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var12;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var13;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var14;
  Output<vraudio::AudioBuffer_const_*> *local_res8;
  _Tree_id<std::_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*>_*>
  local_48 [2];
  undefined1 local_28 [8];
  undefined4 local_20;
  undefined4 uStack_1c;
  
  plVar6 = &this->_padding_;
  this_00 = (Output<vraudio::AudioBuffer_const_*> *)(**(code **)(**(longlong **)param_1 + 0x10))();
  puVar9 = (undefined8 *)(**(code **)(**(longlong **)param_1 + 8))(*(longlong **)param_1,local_28);
  p_Var4 = *(_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> **)
            &this_00->inputs_;
  local_48[0]._Child = _Right;
  local_48[0]._Parent = p_Var4->_Parent;
  p_Var10 = local_48[0]._Parent;
  p_Var13 = p_Var4;
  p_Var14 = p_Var4;
  if ((local_48[0]._Parent)->_Isnil == '\0') {
    do {
      local_48[0]._Parent = p_Var10;
      p_Var12 = local_48[0]._Parent;
      p_Var14 = local_48[0]._Parent;
      if ((local_48[0]._Parent)->_Myval < plVar6) {
        p_Var12 = (_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *)
                  &(local_48[0]._Parent)->_Right;
        p_Var14 = p_Var13;
      }
      p_Var10 = p_Var12->_Left;
      p_Var13 = p_Var14;
    } while (p_Var12->_Left->_Isnil == '\0');
    local_48[0]._Child = (_Tree_child)(plVar6 <= (local_48[0]._Parent)->_Myval);
  }
  local_48[0]._12_4_ = uStack_1c;
  if ((p_Var14->_Isnil != '\0') || (plVar6 < p_Var14->_Myval)) {
    if (*(ulong64 *)&(this_00->inputs_).field_0x8 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
      std::_Throw_tree_length_error();
    }
    p_Var10 = ::operator_new(0x28);
    p_Var10->_Myval = (Input<vraudio::AudioBuffer_const_*> *)plVar6;
    p_Var10->_Left = p_Var4;
    p_Var10->_Parent = p_Var4;
    p_Var10->_Right = p_Var4;
    p_Var10->_Color = '\0';
    p_Var10->_Isnil = '\0';
    std::_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>::
    _Insert_node((_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>
                  *)this_00,local_48,p_Var10);
  }
  local_res8 = this_00;
  ppVar11 = std::
            _Hash<std::_Umap_traits<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::shared_ptr<vraudio::Node>,std::_Uhash_compare<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::hash<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>,std::equal_to<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>_>,std::allocator<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>,0>_>
            ::_Try_emplace<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const_&>
                      ((_Hash<std::_Umap_traits<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::shared_ptr<vraudio::Node>,std::_Uhash_compare<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::hash<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>,std::equal_to<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>_>,std::allocator<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>,0>_>
                        *)plVar6,
                       (pair<std::_List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>_*,bool>
                        *)local_48,&local_res8);
  p_Var5 = ppVar11->first;
  if (puVar9[1] != 0) {
    LOCK();
    piVar1 = (int *)(puVar9[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)&(p_Var5->_Myval).second.field_0x8;
  uVar7 = puVar9[1];
  *(undefined8 *)&(p_Var5->_Myval).second = *puVar9;
  *(undefined8 *)&(p_Var5->_Myval).second.field_0x8 = uVar7;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  plVar6 = (longlong *)CONCAT44(uStack_1c,local_20);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  return;
}

// Process @ 14f094930

void __thiscall vraudio::SinkNode::Process(SinkNode *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)
                 &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                  ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,false);
      atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
      _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
              ::__l2::kNullStream,"Process should not be called on audio sink node.");
  return;
}

// ReadInputs @ 14f0949c0

vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_> * __thiscall
vraudio::SinkNode::ReadInputs(SinkNode *this)

{
  AudioBuffer ***pppAVar1;
  AudioBuffer **ppAVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  AudioBuffer *local_res8;
  
  ppAVar2 = (this->input_stream_).read_data_._Mypair._Myval2._Myfirst;
  if (ppAVar2 != (this->input_stream_).read_data_._Mypair._Myval2._Mylast) {
    (this->input_stream_).read_data_._Mypair._Myval2._Mylast = ppAVar2;
  }
  plVar3 = *(longlong **)&(this->input_stream_).outputs_.field_0x8;
  plVar6 = (longlong *)*plVar3;
  if (plVar6 == plVar3) {
    return &(this->input_stream_).read_data_;
  }
  do {
    lVar4 = plVar6[2];
    if (*(longlong *)(lVar4 + 0x10) == *(longlong *)(lVar4 + 0x18)) {
      (**(code **)(**(longlong **)(lVar4 + 0x28) + 8))();
    }
    plVar5 = (longlong *)(*(longlong *)(lVar4 + 0x18) + -8);
    local_res8 = (AudioBuffer *)*plVar5;
    *(longlong **)(lVar4 + 0x18) = plVar5;
    if (local_res8 != (AudioBuffer *)0x0) {
      ppAVar2 = (this->input_stream_).read_data_._Mypair._Myval2._Mylast;
      if (ppAVar2 == (this->input_stream_).read_data_._Mypair._Myval2._Myend) {
        std::vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_>::
        _Emplace_reallocate<vraudio::AudioBuffer_const_*>
                  (&(this->input_stream_).read_data_,ppAVar2,&local_res8);
      }
      else {
        *ppAVar2 = local_res8;
        pppAVar1 = &(this->input_stream_).read_data_._Mypair._Myval2._Mylast;
        *pppAVar1 = *pppAVar1 + 1;
      }
    }
    plVar6 = (longlong *)*plVar6;
  } while (plVar6 != plVar3);
  return &(this->input_stream_).read_data_;
}

