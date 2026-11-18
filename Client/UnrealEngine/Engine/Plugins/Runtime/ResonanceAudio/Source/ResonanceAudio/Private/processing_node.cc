// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 48

// _Copy_memmove<vraudio::AudioBuffer_const_*_*,vraudio::AudioBuffer_const_*_*> @ 14f091ff0

AudioBuffer ** __cdecl
std::_Copy_memmove<vraudio::AudioBuffer_const_*_*,vraudio::AudioBuffer_const_*_*>
          (AudioBuffer **param_1,AudioBuffer **param_2,AudioBuffer **param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (AudioBuffer **)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove_tail<vraudio::AudioBuffer_const_*_*> @ 14f092030

AudioBuffer ** __cdecl
std::_Copy_memmove_tail<vraudio::AudioBuffer_const_*_*>
          (char *param_1,AudioBuffer **param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return (AudioBuffer **)((longlong)param_2 + param_3);
}

// _Erase<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*> @ 14f092060

ulong64 __thiscall
std::
_Hash<std::_Umap_traits<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::shared_ptr<vraudio::Node>,std::_Uhash_compare<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::hash<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>,std::equal_to<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>_>,std::allocator<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>,0>_>
::_Erase<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>
          (_Hash<std::_Umap_traits<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::shared_ptr<vraudio::Node>,std::_Uhash_compare<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::hash<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>,std::equal_to<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>_>,std::allocator<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>,0>_>
           *this,Output<vraudio::AudioBuffer_const_*> **param_1)

{
  ulong64 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  _Var5;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  _Var6;
  Output<vraudio::AudioBuffer_const_*> *pOVar7;
  _List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>
  *p_Var8;
  longlong *plVar9;
  longlong lVar10;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  *p_Var11;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  _Var12;
  
  _Var5 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
           )(this->_List)._Mypair._Myval2._Myhead;
  p_Var11 = (this->_Vec)._Mypair._Myval2._Myfirst +
            ((((((((((ulonglong)*(byte *)param_1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)param_1 + 1)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)param_1 + 2)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)param_1 + 3)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)param_1 + 4)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)param_1 + 5)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_1 + 6)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_1 + 7)) * 0x100000001b3 & this->_Mask) * 2;
  _Var6 = p_Var11[1];
  if (_Var6 == _Var5) {
LAB_14f092111:
    _Var12 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
              )0x0;
  }
  else {
    pOVar7 = ((pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>
               *)((longlong)_Var6 + 0x10))->first;
    _Var12 = _Var6;
    while (*param_1 != pOVar7) {
      if (_Var12 == *p_Var11) goto LAB_14f092111;
      _Var12 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                 *)((longlong)_Var12 + 8);
      pOVar7 = ((pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>
                 *)((longlong)_Var12 + 0x10))->first;
    }
  }
  if (_Var12 != (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                 )0x0) {
    if (_Var6 == _Var12) {
      if (*p_Var11 == _Var12) {
        *p_Var11 = _Var5;
        p_Var11[1] = _Var5;
      }
      else {
        p_Var11[1] = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                       *)((longlong)_Var12 + 8);
      }
    }
    else if (*p_Var11 == _Var12) {
      *p_Var11 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                   *)_Var12;
    }
    p_Var8 = *(_List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>
               **)_Var12;
    puVar1 = &(this->_List)._Mypair._Myval2._Mysize;
    *puVar1 = *puVar1 - 1;
    (*(_List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>
       **)((longlong)_Var12 + 8))->_Next = p_Var8;
    p_Var8->_Prev =
         *(_List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>
           **)((longlong)_Var12 + 8);
    plVar9 = *(longlong **)((longlong)_Var12 + 0x20);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar9 + 1;
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar3 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    ::operator_delete((void *)_Var12,0x28);
    return 1;
  }
  return 0;
}

// _Fnv1a_append_value<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*> @ 14f0921d0

ulong64 __cdecl
std::_Fnv1a_append_value<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>
          (ulong64 param_1,Output<vraudio::AudioBuffer_const_*> **param_2)

{
  return ((((ulonglong)*(byte *)((longlong)param_2 + 5) ^
           (((((*(byte *)param_2 ^ param_1) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_2 + 1)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_2 + 2)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_2 + 3)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_2 + 4)) * 0x100000001b3) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_2 + 6)) * 0x100000001b3 ^
         (ulonglong)*(byte *)((longlong)param_2 + 7)) * 0x100000001b3;
}

// _Free_non_head<std::allocator<std::_List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>_>_> @ 14f092240

void __cdecl
std::
_List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>
::
_Free_non_head<std::allocator<std::_List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>_>_>
          (allocator<std::_List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>_>
           *param_1,
          _List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>
          *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  _List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>
  *p_Var5;
  _List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>
  *p_Var6;
  longlong lVar7;
  
  param_2->_Prev->_Next =
       (_List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>
        *)0x0;
  p_Var6 = param_2->_Next;
  while (p_Var6 != (_List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>
                    *)0x0) {
    plVar4 = *(longlong **)&(p_Var6->_Myval).second.field_0x8;
    p_Var5 = p_Var6->_Next;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
    }
    ::operator_delete(p_Var6,0x28);
    p_Var6 = p_Var5;
  }
  return;
}

// _Hash_representation<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*> @ 14f0922d0

ulong64 __cdecl
std::_Hash_representation<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>
          (Output<vraudio::AudioBuffer_const_*> **param_1)

{
  return ((((ulonglong)*(byte *)((longlong)param_1 + 5) ^
           ((((((ulonglong)*(byte *)param_1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_1 + 1)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_1 + 2)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_1 + 3)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_1 + 4)) * 0x100000001b3) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_1 + 6)) * 0x100000001b3 ^
         (ulonglong)*(byte *)((longlong)param_1 + 7)) * 0x100000001b3;
}

// _Insert_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>,std::_Iterator_base0>_> @ 14f092350

void __thiscall
std::
_Hash<std::_Umap_traits<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::shared_ptr<vraudio::Node>,std::_Uhash_compare<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::hash<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>,std::equal_to<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>_>,std::allocator<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>,0>_>
::
_Insert_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>,std::_Iterator_base0>_>
          (_Hash<std::_Umap_traits<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::shared_ptr<vraudio::Node>,std::_Uhash_compare<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::hash<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>,std::equal_to<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>_>,std::allocator<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>,0>_>
           *this,_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>,std::_Iterator_base0>
                 param_1,
          _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>,std::_Iterator_base0>
          param_2)

{
  int *piVar1;
  ulong64 *puVar2;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  *p_Var3;
  Output<vraudio::AudioBuffer_const_*> *pOVar4;
  longlong lVar5;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  _Var6;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  _Var7;
  ulonglong uVar8;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  _Var9;
  ulonglong uVar10;
  float fVar11;
  
  do {
    if (param_1._Ptr == param_2._Ptr) {
      return;
    }
    _Var9 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
             )(this->_List)._Mypair._Myval2._Myhead;
    uVar10 = (((((((((ulonglong)*(byte *)&((param_1._Ptr)->_Myval).first ^ 0xcbf29ce484222325) *
                    0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)&((param_1._Ptr)->_Myval).first + 1)) *
                   0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)&((param_1._Ptr)->_Myval).first + 2)) *
                  0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)&((param_1._Ptr)->_Myval).first + 3)) *
                 0x100000001b3 ^ (ulonglong)*(byte *)((longlong)&((param_1._Ptr)->_Myval).first + 4)
                ) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)&((param_1._Ptr)->_Myval).first + 5)) * 0x100000001b3
              ^ (ulonglong)*(byte *)((longlong)&((param_1._Ptr)->_Myval).first + 6)) * 0x100000001b3
             ^ (ulonglong)*(byte *)((longlong)&((param_1._Ptr)->_Myval).first + 7)) * 0x100000001b3;
    p_Var3 = (this->_Vec)._Mypair._Myval2._Myfirst;
    uVar8 = uVar10 & this->_Mask;
    _Var7 = p_Var3[uVar8 * 2 + 1];
    if (_Var7 == _Var9) {
LAB_14f092447:
      if ((this->_List)._Mypair._Myval2._Mysize == 0x666666666666666) {
        _Xlength_error("unordered_map/set too long");
        return;
      }
      _Var7 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
               )::operator_new(0x28);
      ((pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>
        *)((longlong)_Var7 + 0x10))->first = ((param_1._Ptr)->_Myval).first;
      *(undefined8 *)((longlong)_Var7 + 0x18) = 0;
      *(undefined8 *)((longlong)_Var7 + 0x20) = 0;
      lVar5 = *(longlong *)&((param_1._Ptr)->_Myval).second.field_0x8;
      if (lVar5 != 0) {
        LOCK();
        piVar1 = (int *)(lVar5 + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      *(undefined8 *)((longlong)_Var7 + 0x18) = *(undefined8 *)&((param_1._Ptr)->_Myval).second;
      *(undefined8 *)((longlong)_Var7 + 0x20) =
           *(undefined8 *)&((param_1._Ptr)->_Myval).second.field_0x8;
      fVar11 = (float)((this->_List)._Mypair._Myval2._Mysize + 1) / (float)this->_Maxidx;
      if ((float)this->_Traitsobj <= fVar11 && fVar11 != (float)this->_Traitsobj) {
        _Rehash_for_1(this);
        p_Var3 = (this->_Vec)._Mypair._Myval2._Myfirst;
        uVar8 = this->_Mask & uVar10;
        _Var9 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                 )(this->_List)._Mypair._Myval2._Myhead;
        _Var6 = p_Var3[uVar8 * 2 + 1];
        if (_Var6 != _Var9) {
          pOVar4 = ((pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>
                     *)((longlong)_Var6 + 0x10))->first;
          _Var9 = _Var6;
          while (((pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>
                   *)((longlong)_Var7 + 0x10))->first != pOVar4) {
            if (_Var9 == p_Var3[uVar8 * 2]) goto LAB_14f09252a;
            _Var9 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                      *)((longlong)_Var9 + 8);
            pOVar4 = ((pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>
                       *)((longlong)_Var9 + 0x10))->first;
          }
          _Var9 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                    *)_Var9;
        }
      }
LAB_14f09252a:
      _Var6 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                *)((longlong)_Var9 + 8);
      puVar2 = &(this->_List)._Mypair._Myval2._Mysize;
      *puVar2 = *puVar2 + 1;
      *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
        *)_Var7 = _Var9;
      *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
        *)((longlong)_Var7 + 8) = _Var6;
      *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
        *)_Var6 = _Var7;
      *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
        *)((longlong)_Var9 + 8) = _Var7;
      p_Var3 = (this->_Vec)._Mypair._Myval2._Myfirst;
      uVar10 = this->_Mask & uVar10;
      if (p_Var3[uVar10 * 2] ==
          (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
           )(this->_List)._Mypair._Myval2._Myhead) {
        p_Var3[uVar10 * 2] = _Var7;
LAB_14f092575:
        p_Var3[uVar10 * 2 + 1] = _Var7;
      }
      else if (p_Var3[uVar10 * 2] == _Var9) {
        p_Var3[uVar10 * 2] = _Var7;
      }
      else if (p_Var3[uVar10 * 2 + 1] == _Var6) goto LAB_14f092575;
    }
    else {
      pOVar4 = ((pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>
                 *)((longlong)_Var7 + 0x10))->first;
      _Var9 = _Var7;
      while (((param_1._Ptr)->_Myval).first != pOVar4) {
        if (_Var9 == p_Var3[uVar8 * 2]) goto LAB_14f092447;
        _Var9 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                  *)((longlong)_Var9 + 8);
        pOVar4 = ((pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>
                   *)((longlong)_Var9 + 0x10))->first;
      }
    }
    param_1._Ptr = (param_1._Ptr)->_Next;
  } while( true );
}

// _Try_emplace<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const_&> @ 14f0925c0

pair<std::_List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>_*,bool>
* __thiscall
std::
_Hash<std::_Umap_traits<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::shared_ptr<vraudio::Node>,std::_Uhash_compare<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::hash<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>,std::equal_to<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>_>,std::allocator<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>,0>_>
::_Try_emplace<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const_&>
          (_Hash<std::_Umap_traits<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::shared_ptr<vraudio::Node>,std::_Uhash_compare<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::hash<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>,std::equal_to<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>_>,std::allocator<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>,0>_>
           *this,pair<std::_List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>_*,bool>
                 *__return_storage_ptr__,Output<vraudio::AudioBuffer_const_*> **param_1)

{
  ulong64 *puVar1;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  *p_Var2;
  Output<vraudio::AudioBuffer_const_*> *pOVar3;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  _Var4;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  _Var5;
  pair<std::_List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>_*,bool>
  *extraout_RAX;
  ulonglong uVar6;
  ulonglong uVar7;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  _Var8;
  float fVar9;
  
  _Var8 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
           )(this->_List)._Mypair._Myval2._Myhead;
  uVar7 = (((((((((ulonglong)*(byte *)param_1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)param_1 + 1)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)param_1 + 2)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_1 + 3)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_1 + 4)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_1 + 5)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_1 + 6)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_1 + 7)) * 0x100000001b3;
  p_Var2 = (this->_Vec)._Mypair._Myval2._Myfirst;
  uVar6 = uVar7 & this->_Mask;
  _Var5 = p_Var2[uVar6 * 2 + 1];
  if (_Var5 != _Var8) {
    pOVar3 = ((pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>
               *)((longlong)_Var5 + 0x10))->first;
    _Var8 = _Var5;
    while( true ) {
      if (*param_1 == pOVar3) {
        __return_storage_ptr__->first =
             (_List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>
              *)_Var8;
        __return_storage_ptr__->second = false;
        return __return_storage_ptr__;
      }
      if (_Var8 == p_Var2[uVar6 * 2]) break;
      _Var8 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                *)((longlong)_Var8 + 8);
      pOVar3 = ((pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>
                 *)((longlong)_Var8 + 0x10))->first;
    }
  }
  if ((this->_List)._Mypair._Myval2._Mysize == 0x666666666666666) {
    _Xlength_error("unordered_map/set too long");
    return extraout_RAX;
  }
  _Var5 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
           )::operator_new(0x28);
  ((pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>
    *)((longlong)_Var5 + 0x10))->first = *param_1;
  *(undefined8 *)&((shared_ptr<vraudio::Node> *)((longlong)_Var5 + 0x18))->field_0x0 = 0;
  *(undefined8 *)((longlong)_Var5 + 0x20) = 0;
  fVar9 = (float)((this->_List)._Mypair._Myval2._Mysize + 1) / (float)this->_Maxidx;
  if ((float)this->_Traitsobj <= fVar9 && fVar9 != (float)this->_Traitsobj) {
    _Rehash_for_1(this);
    p_Var2 = (this->_Vec)._Mypair._Myval2._Myfirst;
    uVar6 = this->_Mask & uVar7;
    _Var8 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
             )(this->_List)._Mypair._Myval2._Myhead;
    _Var4 = p_Var2[uVar6 * 2 + 1];
    if (_Var4 != _Var8) {
      pOVar3 = ((pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>
                 *)((longlong)_Var4 + 0x10))->first;
      _Var8 = _Var4;
      while (((pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>
               *)((longlong)_Var5 + 0x10))->first != pOVar3) {
        if (_Var8 == p_Var2[uVar6 * 2]) goto LAB_14f092782;
        _Var8 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                  *)((longlong)_Var8 + 8);
        pOVar3 = ((pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>
                   *)((longlong)_Var8 + 0x10))->first;
      }
      _Var8 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                *)_Var8;
    }
  }
LAB_14f092782:
  _Var4 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
            *)((longlong)_Var8 + 8);
  puVar1 = &(this->_List)._Mypair._Myval2._Mysize;
  *puVar1 = *puVar1 + 1;
  *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
    *)_Var5 = _Var8;
  *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
    *)((longlong)_Var5 + 8) = _Var4;
  *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
    *)_Var4 = _Var5;
  *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
    *)((longlong)_Var8 + 8) = _Var5;
  p_Var2 = (this->_Vec)._Mypair._Myval2._Myfirst;
  uVar7 = this->_Mask & uVar7;
  if (p_Var2[uVar7 * 2] ==
      (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
       )(this->_List)._Mypair._Myval2._Myhead) {
    p_Var2[uVar7 * 2] = _Var5;
  }
  else {
    if (p_Var2[uVar7 * 2] == _Var8) {
      p_Var2[uVar7 * 2] = _Var5;
      __return_storage_ptr__->first =
           (_List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>
            *)_Var5;
      __return_storage_ptr__->second = true;
      return __return_storage_ptr__;
    }
    if (p_Var2[uVar7 * 2 + 1] != _Var4) goto LAB_14f0927e2;
  }
  p_Var2[uVar7 * 2 + 1] = _Var5;
LAB_14f0927e2:
  __return_storage_ptr__->first =
       (_List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>
        *)_Var5;
  __return_storage_ptr__->second = true;
  return __return_storage_ptr__;
}

// emplace_back<vraudio::AudioBuffer_const_*> @ 14f092810

AudioBuffer ** __thiscall
std::vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_>::
emplace_back<vraudio::AudioBuffer_const_*>
          (vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_> *this,
          AudioBuffer **param_1)

{
  ulonglong uVar1;
  AudioBuffer **_Src;
  AudioBuffer **_Dst;
  ulonglong uVar2;
  AudioBuffer **ppAVar3;
  AudioBuffer **_Src_00;
  ulonglong uVar4;
  longlong lVar5;
  AudioBuffer **ppAVar6;
  size_t _Size;
  
  ppAVar6 = (this->_Mypair)._Myval2._Myend;
  _Src_00 = (this->_Mypair)._Myval2._Mylast;
  if (_Src_00 == ppAVar6) {
    ppAVar3 = (this->_Mypair)._Myval2._Myfirst;
    lVar5 = (longlong)_Src_00 - (longlong)ppAVar3 >> 3;
    if (lVar5 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    uVar1 = lVar5 + 1;
    uVar2 = (longlong)ppAVar6 - (longlong)ppAVar3 >> 3;
    if (0x1fffffffffffffff - (uVar2 >> 1) < uVar2) {
      uVar4 = 0x1fffffffffffffff;
    }
    else {
      uVar2 = (uVar2 >> 1) + uVar2;
      uVar4 = uVar1;
      if (uVar1 <= uVar2) {
        uVar4 = uVar2;
      }
      if (0x1fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
        _Throw_bad_array_new_length();
      }
    }
    _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar4 * 8);
    ppAVar6 = _Dst + lVar5;
    *ppAVar6 = *param_1;
    ppAVar3 = (this->_Mypair)._Myval2._Mylast;
    _Src = (this->_Mypair)._Myval2._Myfirst;
    if (_Src_00 == ppAVar3) {
      _Size = (longlong)ppAVar3 - (longlong)_Src;
      ppAVar3 = _Dst;
      _Src_00 = _Src;
    }
    else {
      memmove(_Dst,_Src,(longlong)_Src_00 - (longlong)_Src);
      ppAVar3 = ppAVar6 + 1;
      _Size = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)_Src_00;
    }
    memmove(ppAVar3,_Src_00,_Size);
    _Change_array(this,_Dst,uVar1,uVar4);
  }
  else {
    *_Src_00 = *param_1;
    ppAVar6 = (this->_Mypair)._Myval2._Mylast;
    (this->_Mypair)._Myval2._Mylast = ppAVar6 + 1;
  }
  return ppAVar6;
}

// fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>_> @ 14f092940

void __cdecl
std::
fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>_>
          (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
           *param_1,
          _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
          *param_2,_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                   *param_3)

{
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  _Var1;
  ulonglong uVar2;
  ulonglong uVar3;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
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

// uninitialized_fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>_> @ 14f0929d0

void __cdecl
std::
uninitialized_fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>_>
          (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
           *param_1,
          _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
          *param_2,_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                   *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// NodeInput @ 14f092a00

NodeInput * __thiscall
vraudio::ProcessingNode::NodeInput::NodeInput
          (NodeInput *this,
          vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_>
          *param_1)

{
  this->input_vector_ = param_1;
  return this;
}

// ProcessingNode @ 14f092a10

ProcessingNode * __thiscall vraudio::ProcessingNode::ProcessingNode(ProcessingNode *this)

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
  this->_padding_ =
       (longlong)&_vftable__for__vraudio__PublisherNode<vraudio::AudioBuffer_const*___ptr64>__;
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
  *(undefined8 *)&(this->output_stream_).inputs_ = 0;
  *(undefined8 *)&(this->output_stream_).inputs_.field_0x8 = 0;
  pvVar4 = ::operator_new(0x28);
  *(void **)pvVar4 = pvVar4;
  *(void **)((longlong)pvVar4 + 8) = pvVar4;
  *(void **)((longlong)pvVar4 + 0x10) = pvVar4;
  *(undefined2 *)((longlong)pvVar4 + 0x18) = 0x101;
  *(void **)&(this->output_stream_).inputs_ = pvVar4;
  (this->output_stream_).written_data_._Mypair._Myval2._Myfirst = (AudioBuffer **)0x0;
  (this->output_stream_).written_data_._Mypair._Myval2._Mylast = (AudioBuffer **)0x0;
  (this->output_stream_).written_data_._Mypair._Myval2._Myend = (AudioBuffer **)0x0;
  (this->output_stream_).parent_ = (Node *)this;
  this->process_on_no_input_ = false;
  return this;
}

// bad_weak_ptr @ 14f092b70

bad_weak_ptr * __thiscall std::bad_weak_ptr::bad_weak_ptr(bad_weak_ptr *this)

{
  *(char **)&this->field_0x8 = "unknown";
  *(undefined ***)this = &___7bad_weak_ptr_std__6B_;
  return this;
}

// ~Output<vraudio::AudioBuffer_const_*> @ 14f092b90

void __thiscall
vraudio::Node::Output<vraudio::AudioBuffer_const_*>::~Output<vraudio::AudioBuffer_const_*>
          (Output<vraudio::AudioBuffer_const_*> *this)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  std::vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_>::
  ~vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_>
            (&this->written_data_);
  plVar2 = *(longlong **)(*(longlong *)&this->inputs_ + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x19);
  while (cVar1 == '\0') {
    std::_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>::
    _Erase_tree<std::allocator<std::_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*>_>_>
              ((_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>
                *)this,(allocator<std::_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*>_>
                        *)this,
               (_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *)plVar2[2])
    ;
    plVar3 = (longlong *)*plVar2;
    ::operator_delete(plVar2,0x28);
    plVar2 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
  }
  ::operator_delete(*(void **)&this->inputs_,0x28);
  return;
}

// ~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>_>_> @ 14f092c10

void __thiscall
std::
_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>_>_>
::
~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>_>_>
          (_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>_>_>
           *this)

{
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  _Var1;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  _Var2;
  ulong64 uVar3;
  
  _Var1 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
           )(this->_Mypair)._Myval2._Myfirst;
  if (_Var1 != (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                )0x0) {
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)_Var1 & 0xfffffffffffffff8;
    _Var2 = _Var1;
    if (0xfff < uVar3) {
      _Var2 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                *)((longlong)_Var1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)_Var1 + (-8 - (longlong)_Var2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)_Var2,uVar3);
    (this->_Mypair)._Myval2._Myfirst =
         (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
          *)0x0;
    (this->_Mypair)._Myval2._Mylast =
         (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
          *)0x0;
    (this->_Mypair)._Myval2._Myend =
         (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
          *)0x0;
  }
  return;
}

// `vector_deleting_destructor'`adjustor{24}' @ 14f092c84

/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::ProcessingNode::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::ProcessingNode::_vector_deleting_destructor__adjustor_24__
          (ProcessingNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((ProcessingNode *)
                      &this[-1].output_stream_.written_data_._Mypair._Myval2._Myend,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 14f092c94

/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::ProcessingNode::`vector deleting
   destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::ProcessingNode::_vector_deleting_destructor__adjustor_32__
          (ProcessingNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((ProcessingNode *)
                      &this[-1].output_stream_.written_data_._Mypair._Myval2._Mylast,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14f092cb0

void * __thiscall
vraudio::ProcessingNode::_scalar_deleting_destructor_(ProcessingNode *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  vraudio::Node::Output<vraudio::AudioBuffer_const_*>::~Output<vraudio::AudioBuffer_const_*>
            (&this->output_stream_);
  vraudio::Node::Input<vraudio::AudioBuffer_const_*>::~Input<vraudio::AudioBuffer_const_*>
            (&this->input_stream_);
  this->_padding_ = (longlong)&___7__PublisherNode_PEBVAudioBuffer_vraudio___vraudio__6B_;
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
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f092d40

void * __thiscall std::bad_weak_ptr::_scalar_deleting_destructor_(bad_weak_ptr *this,uint param_1)

{
  *(undefined ***)this = &___7exception_stdext__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// AddInput @ 14f092d80

void __thiscall
vraudio::Node::Output<vraudio::AudioBuffer_const_*>::AddInput
          (Output<vraudio::AudioBuffer_const_*> *this,Input<vraudio::AudioBuffer_const_*> *param_1)

{
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var1;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var2;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var3;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var4;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var5;
  _Tree_child _Var6;
  _Tree_id<std::_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*>_*>
  local_28 [2];
  
  p_Var1 = *(_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> **)
            &this->inputs_;
  _Var6 = _Right;
  local_28[0]._Parent = p_Var1->_Parent;
  p_Var3 = local_28[0]._Parent;
  p_Var4 = p_Var1;
  p_Var5 = p_Var1;
  if ((local_28[0]._Parent)->_Isnil == '\0') {
    do {
      local_28[0]._Parent = p_Var3;
      p_Var2 = local_28[0]._Parent;
      p_Var5 = local_28[0]._Parent;
      if ((local_28[0]._Parent)->_Myval < param_1) {
        p_Var2 = (_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *)
                 &(local_28[0]._Parent)->_Right;
        p_Var5 = p_Var4;
      }
      p_Var3 = p_Var2->_Left;
      p_Var4 = p_Var5;
    } while (p_Var2->_Left->_Isnil == '\0');
    _Var6 = (_Tree_child)(param_1 <= (local_28[0]._Parent)->_Myval);
  }
  local_28[0]._12_4_ = SUB84(local_28[0]._8_8_,4);
  local_28[0]._Child = _Var6;
  if ((p_Var5->_Isnil != '\0') || (param_1 < p_Var5->_Myval)) {
    if (*(longlong *)&(this->inputs_).field_0x8 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
      std::_Throw_tree_length_error();
    }
    p_Var3 = ::operator_new(0x28);
    p_Var3->_Myval = param_1;
    p_Var3->_Left = p_Var1;
    p_Var3->_Parent = p_Var1;
    p_Var3->_Right = p_Var1;
    p_Var3->_Color = '\0';
    p_Var3->_Isnil = '\0';
    std::_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>::
    _Insert_node((_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>
                  *)this,local_28,p_Var3);
  }
  return;
}

// AddOutput @ 14f092e60

void __thiscall
vraudio::Node::Input<vraudio::AudioBuffer_const_*>::AddOutput
          (Input<vraudio::AudioBuffer_const_*> *this,shared_ptr<vraudio::Node> *param_1,
          Output<vraudio::AudioBuffer_const_*> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  _List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>
  *p_Var4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  pair<std::_List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>_*,bool>
  *ppVar8;
  Output<vraudio::AudioBuffer_const_*> *local_res18 [2];
  pair<std::_List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>_*,bool>
  local_18;
  
  local_res18[0] = param_2;
  ppVar8 = std::
           _Hash<std::_Umap_traits<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::shared_ptr<vraudio::Node>,std::_Uhash_compare<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::hash<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>,std::equal_to<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>_>,std::allocator<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>,0>_>
           ::_Try_emplace<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const_&>
                     ((_Hash<std::_Umap_traits<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::shared_ptr<vraudio::Node>,std::_Uhash_compare<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::hash<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>,std::equal_to<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>_>,std::allocator<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>,0>_>
                       *)this,&local_18,local_res18);
  p_Var4 = ppVar8->first;
  if (*(longlong *)&param_1->field_0x8 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&param_1->field_0x8 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar5 = *(undefined8 *)&param_1->field_0x8;
  plVar6 = *(longlong **)&(p_Var4->_Myval).second.field_0x8;
  *(undefined8 *)&(p_Var4->_Myval).second = *(undefined8 *)param_1;
  *(undefined8 *)&(p_Var4->_Myval).second.field_0x8 = uVar5;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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

// CallCleanUpOnInputNodes @ 14f092ef0

void __thiscall vraudio::ProcessingNode::CallCleanUpOnInputNodes(ProcessingNode *this)

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
  return;
}

// CleanUp @ 14f093160

bool __thiscall vraudio::ProcessingNode::CleanUp(ProcessingNode *this)

{
  CallCleanUpOnInputNodes(this);
  return *(longlong *)&(this->input_stream_).outputs_.field_0x10 == 0;
}

// Connect @ 14f093190

void __thiscall
vraudio::Node::Input<vraudio::AudioBuffer_const_*>::Connect
          (Input<vraudio::AudioBuffer_const_*> *this,shared_ptr<vraudio::Node> *param_1,
          Output<vraudio::AudioBuffer_const_*> *param_2)

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
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var9;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var10;
  pair<std::_List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>_*,bool>
  *ppVar11;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var12;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var13;
  _Tree_child _Var14;
  Output<vraudio::AudioBuffer_const_*> *local_res8;
  _Tree_id<std::_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*>_*>
  local_28 [2];
  
  p_Var4 = *(_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> **)
            &param_2->inputs_;
  _Var14 = _Right;
  local_28[0]._Parent = p_Var4->_Parent;
  p_Var10 = local_28[0]._Parent;
  p_Var12 = p_Var4;
  p_Var13 = p_Var4;
  if ((local_28[0]._Parent)->_Isnil == '\0') {
    do {
      local_28[0]._Parent = p_Var10;
      p_Var9 = local_28[0]._Parent;
      p_Var13 = local_28[0]._Parent;
      if ((local_28[0]._Parent)->_Myval < this) {
        p_Var9 = (_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *)
                 &(local_28[0]._Parent)->_Right;
        p_Var13 = p_Var12;
      }
      p_Var10 = p_Var9->_Left;
      p_Var12 = p_Var13;
    } while (p_Var9->_Left->_Isnil == '\0');
    _Var14 = (_Tree_child)(this <= (local_28[0]._Parent)->_Myval);
  }
  local_28[0]._12_4_ = SUB84(local_28[0]._8_8_,4);
  local_28[0]._Child = _Var14;
  if ((p_Var13->_Isnil != '\0') || (this < p_Var13->_Myval)) {
    if (*(longlong *)&(param_2->inputs_).field_0x8 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
      std::_Throw_tree_length_error();
    }
    p_Var10 = ::operator_new(0x28);
    p_Var10->_Myval = this;
    p_Var10->_Left = p_Var4;
    p_Var10->_Parent = p_Var4;
    p_Var10->_Right = p_Var4;
    p_Var10->_Color = '\0';
    p_Var10->_Isnil = '\0';
    std::_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>::
    _Insert_node((_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>
                  *)param_2,local_28,p_Var10);
  }
  local_res8 = param_2;
  ppVar11 = std::
            _Hash<std::_Umap_traits<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::shared_ptr<vraudio::Node>,std::_Uhash_compare<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::hash<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>,std::equal_to<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>_>,std::allocator<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>,0>_>
            ::_Try_emplace<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const_&>
                      ((_Hash<std::_Umap_traits<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::shared_ptr<vraudio::Node>,std::_Uhash_compare<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::hash<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>,std::equal_to<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>_>,std::allocator<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>,0>_>
                        *)this,(pair<std::_List_node<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>,void_*>_*,bool>
                                *)local_28,&local_res8);
  p_Var5 = ppVar11->first;
  if (*(longlong *)&param_1->field_0x8 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&param_1->field_0x8 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)&(p_Var5->_Myval).second.field_0x8;
  uVar7 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&(p_Var5->_Myval).second = *(undefined8 *)param_1;
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
  return;
}

// Connect @ 14f0932f0

void __thiscall
vraudio::ProcessingNode::Connect
          (ProcessingNode *this,
          shared_ptr<vraudio::PublisherNode<vraudio::AudioBuffer_const_*>_> *param_1)

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

// Disconnect @ 14f0934a0

void __thiscall
vraudio::Node::Input<vraudio::AudioBuffer_const_*>::Disconnect
          (Input<vraudio::AudioBuffer_const_*> *this,Output<vraudio::AudioBuffer_const_*> *param_1)

{
  char cVar1;
  _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>,std::_Iterator_base0>
  _Var2;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var3;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var4;
  _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>,std::_Iterator_base0>
  _Var5;
  Output<vraudio::AudioBuffer_const_*> *local_res8;
  
  p_Var4 = *(_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> **)
            &param_1->inputs_;
  p_Var3 = p_Var4->_Parent;
  cVar1 = p_Var3->_Isnil;
  _Var2._Ptr = p_Var4;
  while (cVar1 == '\0') {
    _Var5._Ptr = p_Var3;
    if (p_Var3->_Myval < this) {
      p_Var3 = (_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *)
               &p_Var3->_Right;
      _Var5._Ptr = _Var2._Ptr;
    }
    p_Var3 = p_Var3->_Left;
    _Var2._Ptr = _Var5._Ptr;
    cVar1 = p_Var3->_Isnil;
  }
  if ((((_Var2._Ptr)->_Isnil == '\0') && ((_Var2._Ptr)->_Myval <= this)) && (_Var2._Ptr != p_Var4))
  {
    p_Var4 = std::
             _Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>
             ::_Extract((_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>
                         *)param_1,_Var2);
    ::operator_delete(p_Var4,0x28);
  }
  local_res8 = param_1;
  std::
  _Hash<std::_Umap_traits<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::shared_ptr<vraudio::Node>,std::_Uhash_compare<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::hash<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>,std::equal_to<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>_>,std::allocator<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>,0>_>
  ::_Erase<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>
            ((_Hash<std::_Umap_traits<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::shared_ptr<vraudio::Node>,std::_Uhash_compare<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::hash<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>,std::equal_to<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>_>,std::allocator<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>,0>_>
              *)this,&local_res8);
  return;
}

// EnableProcessOnEmptyInput @ 14f093530

void __thiscall
vraudio::ProcessingNode::EnableProcessOnEmptyInput(ProcessingNode *this,bool param_1)

{
  this->process_on_no_input_ = param_1;
  return;
}

// GetConnectedNodeOutputPairs @ 14f093540

unordered_map<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::shared_ptr<vraudio::Node>,std::hash<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>,std::equal_to<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>,std::allocator<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>
* __thiscall
vraudio::Node::Input<vraudio::AudioBuffer_const_*>::GetConnectedNodeOutputPairs
          (Input<vraudio::AudioBuffer_const_*> *this)

{
  return &this->outputs_;
}

// GetInputBuffers @ 14f093550

vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_> * __thiscall
vraudio::ProcessingNode::NodeInput::GetInputBuffers(NodeInput *this)

{
  return this->input_vector_;
}

// GetNumConnections @ 14f093560

ulong64 __thiscall
vraudio::Node::Input<vraudio::AudioBuffer_const_*>::GetNumConnections
          (Input<vraudio::AudioBuffer_const_*> *this)

{
  return *(ulong64 *)&(this->outputs_).field_0x10;
}

// GetOutput @ 14f093570

Output<vraudio::AudioBuffer_const_*> * __thiscall
vraudio::ProcessingNode::GetOutput(ProcessingNode *this)

{
  return (Output<vraudio::AudioBuffer_const_*> *)&(this->input_stream_).outputs_.field_0x38;
}

// GetSharedNodePtr @ 14f093580

shared_ptr<vraudio::Node> * __thiscall
vraudio::ProcessingNode::GetSharedNodePtr
          (ProcessingNode *this,shared_ptr<vraudio::Node> *__return_storage_ptr__)

{
  Node *pNVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  pNVar1 = this[-1].output_stream_.parent_;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  if (pNVar1 != (Node *)0x0) {
    iVar2 = *(int *)&pNVar1->field_0x8;
    while (iVar2 != 0) {
      LOCK();
      iVar3 = *(int *)&pNVar1->field_0x8;
      bVar4 = iVar2 == iVar3;
      if (bVar4) {
        *(int *)&pNVar1->field_0x8 = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
      if (bVar4) {
        *(AudioBuffer ***)__return_storage_ptr__ =
             this[-1].output_stream_.written_data_._Mypair._Myval2._Myend;
        *(Node **)&__return_storage_ptr__->field_0x8 = this[-1].output_stream_.parent_;
        return __return_storage_ptr__;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::_Throw_bad_weak_ptr();
}

// GetSingleInput @ 14f0935e0

AudioBuffer * __thiscall vraudio::ProcessingNode::NodeInput::GetSingleInput(NodeInput *this)

{
  AudioBuffer **ppAVar1;
  ulonglong uVar2;
  
  ppAVar1 = (this->input_vector_->_Mypair)._Myval2._Myfirst;
  uVar2 = (longlong)(this->input_vector_->_Mypair)._Myval2._Mylast - (longlong)ppAVar1 >> 3;
  if (uVar2 == 1) {
    return *ppAVar1;
  }
  if (1 < uVar2) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        std::basic_ostream<char,std::char_traits<char>_>::
        basic_ostream<char,std::char_traits<char>_>
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
                ::__l2::kNullStream,"GetSingleInput() called on multi buffer input");
  }
  return (AudioBuffer *)0x0;
}

// Process @ 14f093690

void __thiscall vraudio::ProcessingNode::Process(ProcessingNode *this)

{
  AudioBuffer *pAVar1;
  vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_> *local_res8 [4]
  ;
  
  local_res8[0] = vraudio::Node::Input<vraudio::AudioBuffer_const_*>::Read(&this->input_stream_);
  pAVar1 = (AudioBuffer *)0x0;
  if ((this->process_on_no_input_ != false) ||
     ((local_res8[0]->_Mypair)._Myval2._Myfirst != (local_res8[0]->_Mypair)._Myval2._Mylast)) {
    pAVar1 = (AudioBuffer *)(**(code **)(this->_padding_ + 0x18))(this,local_res8);
  }
  vraudio::Node::Output<vraudio::AudioBuffer_const_*>::Write(&this->output_stream_,pAVar1);
  return;
}

// PullData @ 14f0936f0

AudioBuffer * __thiscall
vraudio::Node::Output<vraudio::AudioBuffer_const_*>::PullData
          (Output<vraudio::AudioBuffer_const_*> *this)

{
  AudioBuffer *pAVar1;
  AudioBuffer **ppAVar2;
  
  if ((this->written_data_)._Mypair._Myval2._Myfirst ==
      (this->written_data_)._Mypair._Myval2._Mylast) {
    (**(code **)(*(longlong *)this->parent_ + 8))();
  }
  ppAVar2 = (this->written_data_)._Mypair._Myval2._Mylast + -1;
  pAVar1 = *ppAVar2;
  (this->written_data_)._Mypair._Myval2._Mylast = ppAVar2;
  return pAVar1;
}

// Read @ 14f093730

vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_> * __thiscall
vraudio::Node::Input<vraudio::AudioBuffer_const_*>::Read(Input<vraudio::AudioBuffer_const_*> *this)

{
  vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_> *this_00;
  AudioBuffer ***pppAVar1;
  undefined8 *puVar2;
  AudioBuffer *pAVar3;
  AudioBuffer **ppAVar4;
  longlong *plVar5;
  AudioBuffer **_Dst;
  ulonglong uVar6;
  AudioBuffer **ppAVar7;
  AudioBuffer **_Src;
  undefined8 *puVar8;
  longlong lVar9;
  size_t _Size;
  ulonglong uVar10;
  
  ppAVar7 = (this->read_data_)._Mypair._Myval2._Myfirst;
  this_00 = &this->read_data_;
  if (ppAVar7 != (this->read_data_)._Mypair._Myval2._Mylast) {
    (this->read_data_)._Mypair._Myval2._Mylast = ppAVar7;
  }
  puVar2 = *(undefined8 **)&(this->outputs_).field_0x8;
  puVar8 = (undefined8 *)*puVar2;
LAB_14f09376a:
  do {
    if (puVar8 == puVar2) {
      return this_00;
    }
    lVar9 = puVar8[2];
    if (*(longlong *)(lVar9 + 0x10) == *(longlong *)(lVar9 + 0x18)) {
      (**(code **)(**(longlong **)(lVar9 + 0x28) + 8))();
    }
    plVar5 = (longlong *)(*(longlong *)(lVar9 + 0x18) + -8);
    pAVar3 = (AudioBuffer *)*plVar5;
    *(longlong **)(lVar9 + 0x18) = plVar5;
    if (pAVar3 != (AudioBuffer *)0x0) {
      ppAVar7 = (this->read_data_)._Mypair._Myval2._Myend;
      _Src = (this->read_data_)._Mypair._Myval2._Mylast;
      if (_Src != ppAVar7) {
        *_Src = pAVar3;
        pppAVar1 = &(this->read_data_)._Mypair._Myval2._Mylast;
        *pppAVar1 = *pppAVar1 + 1;
        puVar8 = (undefined8 *)*puVar8;
        goto LAB_14f09376a;
      }
      ppAVar4 = (this_00->_Mypair)._Myval2._Myfirst;
      lVar9 = (longlong)_Src - (longlong)ppAVar4 >> 3;
      if (lVar9 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        std::vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_>::
        _Xlength();
      }
      uVar6 = (longlong)ppAVar7 - (longlong)ppAVar4 >> 3;
      if (0x1fffffffffffffff - (uVar6 >> 1) < uVar6) {
        uVar10 = 0x1fffffffffffffff;
      }
      else {
        uVar6 = (uVar6 >> 1) + uVar6;
        uVar10 = lVar9 + 1U;
        if (lVar9 + 1U <= uVar6) {
          uVar10 = uVar6;
        }
        if (0x1fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
          std::_Throw_bad_array_new_length();
        }
      }
      _Dst = std::_Allocate<16,std::_Default_allocate_traits>(uVar10 * 8);
      _Dst[lVar9] = pAVar3;
      ppAVar7 = (this->read_data_)._Mypair._Myval2._Mylast;
      ppAVar4 = (this_00->_Mypair)._Myval2._Myfirst;
      if (_Src == ppAVar7) {
        _Size = (longlong)ppAVar7 - (longlong)ppAVar4;
        ppAVar7 = _Dst;
        _Src = ppAVar4;
      }
      else {
        memmove(_Dst,ppAVar4,(longlong)_Src - (longlong)ppAVar4);
        _Size = (longlong)(this->read_data_)._Mypair._Myval2._Mylast - (longlong)_Src;
        ppAVar7 = _Dst + lVar9 + 1;
      }
      memmove(ppAVar7,_Src,_Size);
      std::vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_>::
      _Change_array(this_00,_Dst,lVar9 + 1,uVar10);
    }
    puVar8 = (undefined8 *)*puVar8;
  } while( true );
}

// RemoveOutput @ 14f0938c0

void __thiscall
vraudio::Node::Input<vraudio::AudioBuffer_const_*>::RemoveOutput
          (Input<vraudio::AudioBuffer_const_*> *this,Output<vraudio::AudioBuffer_const_*> *param_1)

{
  Output<vraudio::AudioBuffer_const_*> *local_res10 [3];
  
  local_res10[0] = param_1;
  std::
  _Hash<std::_Umap_traits<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::shared_ptr<vraudio::Node>,std::_Uhash_compare<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::hash<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>,std::equal_to<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>_>,std::allocator<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>,0>_>
  ::_Erase<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>
            ((_Hash<std::_Umap_traits<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::shared_ptr<vraudio::Node>,std::_Uhash_compare<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::hash<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>,std::equal_to<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>_>,std::allocator<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>,0>_>
              *)this,local_res10);
  return;
}

// Write @ 14f0938e0

void __thiscall
vraudio::Node::Output<vraudio::AudioBuffer_const_*>::Write
          (Output<vraudio::AudioBuffer_const_*> *this,AudioBuffer *param_1)

{
  vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_> *this_00;
  AudioBuffer ***pppAVar1;
  ulonglong uVar2;
  AudioBuffer **ppAVar3;
  AudioBuffer **_Dst;
  ulonglong uVar4;
  AudioBuffer **ppAVar5;
  AudioBuffer **_Src;
  ulonglong uVar6;
  longlong lVar7;
  size_t _Size;
  ulonglong uVar8;
  AudioBuffer *local_res10;
  
  ppAVar5 = (this->written_data_)._Mypair._Myval2._Myfirst;
  this_00 = &this->written_data_;
  if (ppAVar5 != (this->written_data_)._Mypair._Myval2._Mylast) {
    (this->written_data_)._Mypair._Myval2._Mylast = ppAVar5;
  }
  local_res10 = param_1;
  std::vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_>::
  emplace_back<vraudio::AudioBuffer_const_*>(this_00,&local_res10);
  uVar8 = 1;
  if (1 < *(ulonglong *)&(this->inputs_).field_0x8) {
    do {
      ppAVar5 = (this->written_data_)._Mypair._Myval2._Myend;
      _Src = (this->written_data_)._Mypair._Myval2._Mylast;
      ppAVar3 = (this_00->_Mypair)._Myval2._Myfirst;
      if (_Src == ppAVar5) {
        lVar7 = (longlong)_Src - (longlong)ppAVar3 >> 3;
        if (lVar7 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_>::
          _Xlength();
        }
        uVar2 = lVar7 + 1;
        uVar4 = (longlong)ppAVar5 - (longlong)ppAVar3 >> 3;
        if (0x1fffffffffffffff - (uVar4 >> 1) < uVar4) {
          uVar6 = 0x1fffffffffffffff;
        }
        else {
          uVar4 = (uVar4 >> 1) + uVar4;
          uVar6 = uVar2;
          if (uVar2 <= uVar4) {
            uVar6 = uVar4;
          }
          if (0x1fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
            std::_Throw_bad_array_new_length();
          }
        }
        _Dst = std::_Allocate<16,std::_Default_allocate_traits>(uVar6 * 8);
        _Dst[lVar7] = *ppAVar3;
        ppAVar5 = (this->written_data_)._Mypair._Myval2._Mylast;
        ppAVar3 = (this_00->_Mypair)._Myval2._Myfirst;
        if (_Src == ppAVar5) {
          _Size = (longlong)ppAVar5 - (longlong)ppAVar3;
          ppAVar5 = _Dst;
          _Src = ppAVar3;
        }
        else {
          memmove(_Dst,ppAVar3,(longlong)_Src - (longlong)ppAVar3);
          _Size = (longlong)(this->written_data_)._Mypair._Myval2._Mylast - (longlong)_Src;
          ppAVar5 = _Dst + lVar7 + 1;
        }
        memmove(ppAVar5,_Src,_Size);
        std::vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_>::
        _Change_array(this_00,_Dst,uVar2,uVar6);
      }
      else {
        *_Src = *ppAVar3;
        pppAVar1 = &(this->written_data_)._Mypair._Myval2._Mylast;
        *pppAVar1 = *pppAVar1 + 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ulonglong *)&(this->inputs_).field_0x8);
  }
  return;
}

// _Assign_grow @ 14f093a70

void __thiscall
std::
_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>_>_>
::_Assign_grow(_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>_>_>
               *this,ulong64 param_1,
              _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
              param_2)

{
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  *p_Var1;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  *p_Var2;
  ulong64 uVar3;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  local_res18;
  
  p_Var1 = (this->_Mypair)._Myval2._Myfirst;
  p_Var2 = (this->_Mypair)._Myval2._Mylast;
  local_res18 = param_2;
  if (param_1 <= (ulonglong)((longlong)p_Var2 - (longlong)p_Var1 >> 3)) {
    fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>_>
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
    allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>_>
    ::deallocate((allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>_>
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

// _Change_array @ 14f093b50

/* WARNING: Type propagation algorithm not settling */

void __thiscall
std::vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_>::
_Change_array(vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_>
              *this,AudioBuffer **param_1,ulong64 param_2,ulong64 param_3)

{
  AudioBuffer **ppAVar1;
  AudioBuffer **ppAVar2;
  ulong64 uVar3;
  
  ppAVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (ppAVar1 != (AudioBuffer **)0x0) {
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)ppAVar1 & 0xfffffffffffffff8;
    ppAVar2 = ppAVar1;
    if (0xfff < uVar3) {
      ppAVar2 = (AudioBuffer **)ppAVar1[0xffffffffffffffff];
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)ppAVar1 + (-8 - (longlong)ppAVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(ppAVar2,uVar3);
  }
  (this->_Mypair)._Myval2._Myfirst = param_1;
  (this->_Mypair)._Myval2._Mylast = param_1 + param_2;
  (this->_Mypair)._Myval2._Myend = param_1 + param_3;
  return;
}

// _Forced_rehash @ 14f093c00

void __thiscall
std::
_Hash<std::_Umap_traits<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::shared_ptr<vraudio::Node>,std::_Uhash_compare<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::hash<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>,std::equal_to<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>_>,std::allocator<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>,0>_>
::_Forced_rehash(_Hash<std::_Umap_traits<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::shared_ptr<vraudio::Node>,std::_Uhash_compare<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::hash<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>,std::equal_to<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>_>,std::allocator<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>,0>_>
                 *this,ulong64 param_1)

{
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  _Var1;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  _Var2;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  _Var3;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  *p_Var4;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  *p_Var5;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  *p_Var6;
  longlong *plVar7;
  longlong lVar8;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  _Var9;
  ulonglong uVar10;
  ulong64 uVar11;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  *p_Var12;
  
  for (lVar8 = 0x3f; 0xfffffffffffffffU >> lVar8 == 0; lVar8 = lVar8 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar8 & 0x3f)) < param_1) {
    _Xlength_error("invalid hash bucket count");
    return;
  }
  _Var1 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
           )(this->_List)._Mypair._Myval2._Myhead;
  uVar10 = param_1 - 1 | 1;
  lVar8 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar8 == 0; lVar8 = lVar8 + -1) {
    }
  }
  uVar11 = 1L << ((char)lVar8 + 1U & 0x3f);
  _Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>_>_>
  ::_Assign_grow(&this->_Vec,uVar11 * 2,_Var1);
  this->_Maxidx = uVar11;
  this->_Mask = uVar11 - 1;
  _Var9 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
           )((this->_List)._Mypair._Myval2._Myhead)->_Next;
joined_r0x00014f093c75:
  do {
    while( true ) {
      while( true ) {
        if (_Var9 == _Var1) {
          return;
        }
        _Var2 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                  *)_Var9;
        p_Var12 = (this->_Vec)._Mypair._Myval2._Myfirst +
                  ((((((((((ulonglong)*(byte *)((longlong)_Var9 + 0x10) ^ 0xcbf29ce484222325) *
                          0x100000001b3 ^ (ulonglong)*(byte *)((longlong)_Var9 + 0x11)) *
                         0x100000001b3 ^ (ulonglong)*(byte *)((longlong)_Var9 + 0x12)) *
                        0x100000001b3 ^ (ulonglong)*(byte *)((longlong)_Var9 + 0x13)) *
                       0x100000001b3 ^ (ulonglong)*(byte *)((longlong)_Var9 + 0x14)) * 0x100000001b3
                     ^ (ulonglong)*(byte *)((longlong)_Var9 + 0x15)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)_Var9 + 0x16)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)_Var9 + 0x17)) * 0x100000001b3 & this->_Mask) * 2;
        if (*p_Var12 != _Var1) break;
        *p_Var12 = _Var9;
        p_Var12[1] = _Var9;
        _Var9 = _Var2;
      }
      _Var3 = p_Var12[1];
      if (*(longlong *)((longlong)_Var9 + 0x10) != *(longlong *)((longlong)_Var3 + 0x10)) break;
      _Var3 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                *)_Var3;
      if (_Var3 != _Var9) {
        p_Var4 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                   **)((longlong)_Var9 + 8);
        *p_Var4 = _Var2;
        p_Var5 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                   **)((longlong)_Var2 + 8);
        *p_Var5 = _Var3;
        p_Var6 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                   **)((longlong)_Var3 + 8);
        *p_Var6 = _Var9;
        *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
          **)((longlong)_Var3 + 8) = p_Var5;
        *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
          **)((longlong)_Var2 + 8) = p_Var4;
        *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
          **)((longlong)_Var9 + 8) = p_Var6;
      }
      p_Var12[1] = _Var9;
      _Var9 = _Var2;
    }
    do {
      if (*p_Var12 == _Var3) {
        p_Var4 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                   **)((longlong)_Var9 + 8);
        *p_Var4 = _Var2;
        p_Var5 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                   **)((longlong)_Var2 + 8);
        *p_Var5 = _Var3;
        p_Var6 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                   **)((longlong)_Var3 + 8);
        *p_Var6 = _Var9;
        *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
          **)((longlong)_Var3 + 8) = p_Var5;
        *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
          **)((longlong)_Var2 + 8) = p_Var4;
        *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
          **)((longlong)_Var9 + 8) = p_Var6;
        *p_Var12 = _Var9;
        _Var9 = _Var2;
        goto joined_r0x00014f093c75;
      }
      _Var3 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                *)((longlong)_Var3 + 8);
    } while (*(longlong *)((longlong)_Var9 + 0x10) != *(longlong *)((longlong)_Var3 + 0x10));
    lVar8 = *(longlong *)_Var3;
    p_Var12 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                **)((longlong)_Var9 + 8);
    *p_Var12 = _Var2;
    plVar7 = *(longlong **)((longlong)_Var2 + 8);
    *plVar7 = lVar8;
    p_Var4 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
               **)(lVar8 + 8);
    *p_Var4 = _Var9;
    *(longlong **)(lVar8 + 8) = plVar7;
    *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
      **)((longlong)_Var2 + 8) = p_Var12;
    *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
      **)((longlong)_Var9 + 8) = p_Var4;
    _Var9 = _Var2;
  } while( true );
}

// _Insert_node @ 14f093e00

_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> * __thiscall
std::_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>::
_Insert_node(_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>
             *this,_Tree_id<std::_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*>_*>
                   *param_1,
            _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *param_2)

{
  char cVar1;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var2;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var3;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var4;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var5;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var6;
  
  this->_Mysize = this->_Mysize + 1;
  p_Var2 = this->_Myhead;
  p_Var5 = param_1->_Parent;
  param_2->_Parent = p_Var5;
  if (p_Var5 == p_Var2) {
    p_Var2->_Left = param_2;
    p_Var2->_Parent = param_2;
    p_Var2->_Right = param_2;
    param_2->_Color = '\x01';
    return param_2;
  }
  if (param_1->_Child == _Right) {
    p_Var5->_Right = param_2;
    if (p_Var5 == p_Var2->_Right) {
      p_Var2->_Right = param_2;
    }
  }
  else {
    p_Var5->_Left = param_2;
    if (p_Var5 == p_Var2->_Left) {
      p_Var2->_Left = param_2;
    }
  }
  cVar1 = param_2->_Parent->_Color;
  p_Var5 = param_2;
  do {
    if (cVar1 != '\0') {
      p_Var2->_Parent->_Color = '\x01';
      return param_2;
    }
    p_Var4 = p_Var5->_Parent;
    p_Var6 = p_Var4->_Parent->_Left;
    if (p_Var4 == p_Var6) {
      p_Var6 = p_Var4->_Parent->_Right;
      if (p_Var6->_Color == '\0') {
        p_Var4->_Color = '\x01';
        p_Var6->_Color = '\x01';
        p_Var5->_Parent->_Parent->_Color = '\0';
        p_Var5 = p_Var5->_Parent->_Parent;
      }
      else {
        p_Var6 = p_Var4->_Right;
        if (p_Var5 == p_Var6) {
          p_Var4->_Right = p_Var6->_Left;
          if (p_Var6->_Left->_Isnil == '\0') {
            p_Var6->_Left->_Parent = p_Var4;
          }
          p_Var6->_Parent = p_Var4->_Parent;
          if (p_Var4 == this->_Myhead->_Parent) {
            this->_Myhead->_Parent = p_Var6;
          }
          else {
            p_Var5 = p_Var4->_Parent;
            if (p_Var4 == p_Var5->_Left) {
              p_Var5->_Left = p_Var6;
            }
            else {
              p_Var5->_Right = p_Var6;
            }
          }
          p_Var6->_Left = p_Var4;
          p_Var4->_Parent = p_Var6;
          p_Var5 = p_Var4;
        }
        p_Var5->_Parent->_Color = '\x01';
        p_Var5->_Parent->_Parent->_Color = '\0';
        p_Var4 = p_Var5->_Parent->_Parent;
        p_Var6 = p_Var4->_Left;
        p_Var4->_Left = p_Var6->_Right;
        if (p_Var6->_Right->_Isnil == '\0') {
          p_Var6->_Right->_Parent = p_Var4;
        }
        p_Var6->_Parent = p_Var4->_Parent;
        if (p_Var4 == this->_Myhead->_Parent) {
          this->_Myhead->_Parent = p_Var6;
          p_Var6->_Right = p_Var4;
        }
        else {
          p_Var3 = p_Var4->_Parent;
          if (p_Var4 == p_Var3->_Right) {
            p_Var3->_Right = p_Var6;
            p_Var6->_Right = p_Var4;
          }
          else {
            p_Var3->_Left = p_Var6;
            p_Var6->_Right = p_Var4;
          }
        }
LAB_14f09403d:
        p_Var4->_Parent = p_Var6;
      }
    }
    else {
      if (p_Var6->_Color != '\0') {
        p_Var6 = p_Var4->_Left;
        if (p_Var5 == p_Var6) {
          p_Var4->_Left = p_Var6->_Right;
          if (p_Var6->_Right->_Isnil == '\0') {
            p_Var6->_Right->_Parent = p_Var4;
          }
          p_Var6->_Parent = p_Var4->_Parent;
          if (p_Var4 == this->_Myhead->_Parent) {
            this->_Myhead->_Parent = p_Var6;
          }
          else {
            p_Var5 = p_Var4->_Parent;
            if (p_Var4 == p_Var5->_Right) {
              p_Var5->_Right = p_Var6;
            }
            else {
              p_Var5->_Left = p_Var6;
            }
          }
          p_Var6->_Right = p_Var4;
          p_Var4->_Parent = p_Var6;
          p_Var5 = p_Var4;
        }
        p_Var5->_Parent->_Color = '\x01';
        p_Var5->_Parent->_Parent->_Color = '\0';
        p_Var4 = p_Var5->_Parent->_Parent;
        p_Var6 = p_Var4->_Right;
        p_Var4->_Right = p_Var6->_Left;
        if (p_Var6->_Left->_Isnil == '\0') {
          p_Var6->_Left->_Parent = p_Var4;
        }
        p_Var6->_Parent = p_Var4->_Parent;
        if (p_Var4 == this->_Myhead->_Parent) {
          this->_Myhead->_Parent = p_Var6;
        }
        else {
          p_Var3 = p_Var4->_Parent;
          if (p_Var4 == p_Var3->_Left) {
            p_Var3->_Left = p_Var6;
          }
          else {
            p_Var3->_Right = p_Var6;
          }
        }
        p_Var6->_Left = p_Var4;
        goto LAB_14f09403d;
      }
      p_Var4->_Color = '\x01';
      p_Var6->_Color = '\x01';
      p_Var5->_Parent->_Parent->_Color = '\0';
      p_Var5 = p_Var5->_Parent->_Parent;
    }
    cVar1 = p_Var5->_Parent->_Color;
  } while( true );
}

// _Rehash_for_1 @ 14f094070

void __thiscall
std::
_Hash<std::_Umap_traits<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::shared_ptr<vraudio::Node>,std::_Uhash_compare<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::hash<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>,std::equal_to<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>_>,std::allocator<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>,0>_>
::_Rehash_for_1(_Hash<std::_Umap_traits<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::shared_ptr<vraudio::Node>,std::_Uhash_compare<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*,std::hash<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>,std::equal_to<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*>_>,std::allocator<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>,0>_>
                *this)

{
  ulonglong uVar1;
  uint in_EAX;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  
  uVar5 = (this->_List)._Mypair._Myval2._Mysize + 1;
  uVar1 = this->_Maxidx;
  if ((longlong)uVar5 < 0) {
    in_EAX = (uint)(uVar5 >> 1) | (uint)uVar5 & 1;
  }
  auVar7._0_4_ = (float)uVar5 / (float)this->_Traitsobj;
  iVar3 = (int)auVar7._0_4_;
  if ((iVar3 != -0x80000000) && ((float)iVar3 != auVar7._0_4_)) {
    auVar7._4_4_ = auVar7._0_4_;
    auVar7._8_8_ = 0;
    uVar2 = movmskps(in_EAX,auVar7);
    auVar7._0_4_ = (float)(int)(iVar3 + (uVar2 & 1 ^ 1));
  }
  lVar4 = 0;
  if ((__real_5f000000 <= auVar7._0_4_) &&
     (auVar7._0_4_ = auVar7._0_4_ - __real_5f000000, auVar7._0_4_ < __real_5f000000)) {
    lVar4 = -0x8000000000000000;
  }
  uVar5 = 8;
  if (8 < (ulonglong)((longlong)auVar7._0_4_ + lVar4)) {
    uVar5 = (longlong)auVar7._0_4_ + lVar4;
  }
  uVar6 = uVar1;
  if ((uVar1 < uVar5) && ((0x1ff < uVar1 || (uVar6 = uVar1 * 8, uVar1 * 8 < uVar5)))) {
    uVar6 = uVar5;
  }
  _Forced_rehash(this,uVar6);
  return;
}

// _Throw_bad_weak_ptr @ 14f094140

void __cdecl std::_Throw_bad_weak_ptr(void)

{
  bad_weak_ptr *this;
  bad_weak_ptr local_18;
  
  this = bad_weak_ptr::bad_weak_ptr(&local_18);
                    /* WARNING: Subroutine does not return */
  stdext::exception::_Raise((exception *)this);
}

// _Xlength @ 14f094160

void __cdecl
std::vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_>::_Xlength
          (void)

{
  _Xlength_error("vector too long");
  return;
}

// deallocate @ 14f094180

void __thiscall
std::
allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>_>
::deallocate(allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>_>
             *this,_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
                   *param_1,ulong64 param_2)

{
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
  _Var1;
  ulonglong uVar2;
  
  uVar2 = param_2 * 8;
  _Var1 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<vraudio::Node::Output<vraudio::AudioBuffer_const_*>_*_const,std::shared_ptr<vraudio::Node>_>_>_>_>
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

// what @ 14f0941e0

char * __thiscall std::bad_weak_ptr::what(bad_weak_ptr *this)

{
  return "bad_weak_ptr";
}

