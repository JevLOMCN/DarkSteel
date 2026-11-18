// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 8

// _Try_emplace<int_const_&> @ 14f091010

/* WARNING: Type propagation algorithm not settling */

pair<std::_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*>_*,bool> * __thiscall
std::
_Hash<std::_Umap_traits<int,vraudio::SourceParameters,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,vraudio::SourceParameters>_>,0>_>
::_Try_emplace<int_const_&>
          (_Hash<std::_Umap_traits<int,vraudio::SourceParameters,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,vraudio::SourceParameters>_>,0>_>
           *this,pair<std::_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*>_*,bool>
                 *__return_storage_ptr__,int *param_1)

{
  ulong64 *puVar1;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
  *p_Var2;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
  _Var3;
  uint uVar4;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
  _Var5;
  pair<std::_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*>_*,bool> *extraout_RAX
  ;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
  _Var11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  
  _Var11 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
            )(this->_List)._Mypair._Myval2._Myhead;
  uVar12 = (((((ulonglong)(byte)*param_1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_1 + 1)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_1 + 2)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_1 + 3)) * 0x100000001b3;
  p_Var2 = (this->_Vec)._Mypair._Myval2._Myfirst;
  uVar9 = uVar12 & this->_Mask;
  _Var5 = p_Var2[uVar9 * 2 + 1];
  if (_Var5 != _Var11) {
    iVar6 = ((pair<int_const_,vraudio::SourceParameters> *)((longlong)_Var5 + 0x10))->first;
    _Var11 = _Var5;
    while( true ) {
      if (*param_1 == iVar6) {
        __return_storage_ptr__->first =
             (_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> *)_Var11;
        __return_storage_ptr__->second = false;
        return __return_storage_ptr__;
      }
      if (_Var11 == p_Var2[uVar9 * 2]) break;
      _Var11 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
                 *)((longlong)_Var11 + 8);
      iVar6 = ((pair<int_const_,vraudio::SourceParameters> *)((longlong)_Var11 + 0x10))->first;
    }
  }
  if ((this->_List)._Mypair._Myval2._Mysize == 0x222222222222222) {
    _Xlength_error("unordered_map/set too long");
    return extraout_RAX;
  }
  _Var5 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
           )::operator_new(0x78);
  ((pair<int_const_,vraudio::SourceParameters> *)((longlong)_Var5 + 0x10))->first = *param_1;
  *(undefined8 *)&(((SourceParameters *)((longlong)_Var5 + 0x14))->object_transform).position = 0;
  *(undefined8 *)((longlong)_Var5 + 0x1c) = 0;
  *(undefined8 *)((longlong)_Var5 + 0x24) = 0;
  *(undefined8 *)((longlong)_Var5 + 0x2c) = 0;
  *(undefined8 *)((longlong)_Var5 + 0x34) = 0;
  ((float *)((longlong)_Var5 + 0x3c))[0] = 0.0;
  ((float *)((longlong)_Var5 + 0x3c))[1] = 0.0;
  *(undefined8 *)((longlong)_Var5 + 0x44) = 0;
  *(undefined8 *)((longlong)_Var5 + 0x4c) = 0;
  *(undefined8 *)((longlong)_Var5 + 0x54) = 0;
  *(undefined8 *)((longlong)_Var5 + 0x5c) = 0;
  *(undefined8 *)((longlong)_Var5 + 100) = 0;
  *(undefined8 *)((longlong)_Var5 + 0x6c) = 0;
  *(undefined4 *)((longlong)_Var5 + 0x74) = 0;
  vraudio::WorldPosition::WorldPosition((WorldPosition *)((longlong)_Var5 + 0x14));
  vraudio::WorldRotation::WorldRotation((WorldRotation *)((longlong)_Var5 + 0x20));
  uVar4 = 0;
  *(float *)((longlong)_Var5 + 0x34) = 1.0;
  *(float *)((longlong)_Var5 + 0x30) = 0.0;
  *(float *)((longlong)_Var5 + 0x50) = 0.0;
  *(float *)((longlong)_Var5 + 0x6c) = 0.0;
  *(undefined8 *)((longlong)_Var5 + 0x48) = 0x3f800000;
  *(undefined8 *)((longlong)_Var5 + 0x54) = 0x43fa0000;
  *(undefined8 *)((longlong)_Var5 + 0x5c) = 0x3f800000;
  *(undefined8 *)((longlong)_Var5 + 100) = 0x3f800000;
  *(float *)((longlong)_Var5 + 0x70) = 1.0;
  *(bool *)((longlong)_Var5 + 0x74) = true;
  uVar7 = (this->_List)._Mypair._Myval2._Mysize + 1;
  uVar9 = this->_Maxidx;
  if ((longlong)uVar7 < 0) {
    uVar4 = (uint)(uVar7 >> 1) | (uint)uVar7 & 1;
  }
  if ((longlong)uVar9 < 0) {
    uVar4 = (uint)uVar9 & 1;
  }
  if ((float)this->_Traitsobj < (float)uVar7 / (float)uVar9) {
    auVar13._0_4_ = (float)uVar7 / (float)this->_Traitsobj;
    iVar6 = (int)auVar13._0_4_;
    if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar13._0_4_)) {
      auVar13._4_4_ = auVar13._0_4_;
      auVar13._8_8_ = 0;
      uVar4 = movmskps(uVar4,auVar13);
      auVar13._0_4_ = (float)(int)(iVar6 + (uVar4 & 1 ^ 1));
    }
    lVar8 = 0;
    if ((__real_5f000000 <= auVar13._0_4_) &&
       (auVar13._0_4_ = auVar13._0_4_ - __real_5f000000, auVar13._0_4_ < __real_5f000000)) {
      lVar8 = -0x8000000000000000;
    }
    uVar7 = 8;
    if (8 < (ulonglong)((longlong)auVar13._0_4_ + lVar8)) {
      uVar7 = (longlong)auVar13._0_4_ + lVar8;
    }
    uVar10 = uVar9;
    if ((uVar9 < uVar7) && ((0x1ff < uVar9 || (uVar10 = uVar9 * 8, uVar9 * 8 < uVar7)))) {
      uVar10 = uVar7;
    }
    _Forced_rehash(this,uVar10);
    p_Var2 = (this->_Vec)._Mypair._Myval2._Myfirst;
    uVar9 = this->_Mask & uVar12;
    _Var11 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
              )(this->_List)._Mypair._Myval2._Myhead;
    _Var3 = p_Var2[uVar9 * 2 + 1];
    if (_Var3 != _Var11) {
      iVar6 = ((pair<int_const_,vraudio::SourceParameters> *)((longlong)_Var3 + 0x10))->first;
      _Var11 = _Var3;
      while (((pair<int_const_,vraudio::SourceParameters> *)((longlong)_Var5 + 0x10))->first !=
             iVar6) {
        if (_Var11 == p_Var2[uVar9 * 2]) goto LAB_14f091295;
        _Var11 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
                   *)((longlong)_Var11 + 8);
        iVar6 = ((pair<int_const_,vraudio::SourceParameters> *)((longlong)_Var11 + 0x10))->first;
      }
      _Var11 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
                 *)_Var11;
    }
  }
LAB_14f091295:
  _Var3 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
            *)((longlong)_Var11 + 8);
  puVar1 = &(this->_List)._Mypair._Myval2._Mysize;
  *puVar1 = *puVar1 + 1;
  *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
    *)_Var5 = _Var11;
  *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
    *)((longlong)_Var5 + 8) = _Var3;
  *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
    *)_Var3 = _Var5;
  *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
    *)((longlong)_Var11 + 8) = _Var5;
  p_Var2 = (this->_Vec)._Mypair._Myval2._Myfirst;
  uVar12 = this->_Mask & uVar12;
  if (p_Var2[uVar12 * 2] ==
      (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
       )(this->_List)._Mypair._Myval2._Myhead) {
    p_Var2[uVar12 * 2] = _Var5;
  }
  else {
    if (p_Var2[uVar12 * 2] == _Var11) {
      p_Var2[uVar12 * 2] = _Var5;
      __return_storage_ptr__->first =
           (_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> *)_Var5;
      __return_storage_ptr__->second = true;
      return __return_storage_ptr__;
    }
    if (p_Var2[uVar12 * 2 + 1] != _Var3) goto LAB_14f0912f5;
  }
  p_Var2[uVar12 * 2 + 1] = _Var5;
LAB_14f0912f5:
  __return_storage_ptr__->first =
       (_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> *)_Var5;
  __return_storage_ptr__->second = true;
  return __return_storage_ptr__;
}

// fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>_> @ 14f091320

void __cdecl
std::
fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>_>
          (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
           *param_1,
          _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
          *param_2,_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
                   *param_3)

{
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
  _Var1;
  ulonglong uVar2;
  ulonglong uVar3;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
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

// GetMutableParameters @ 14f0913b0

SourceParameters * __thiscall
vraudio::SourceParametersManager::GetMutableParameters(SourceParametersManager *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  longlong *plVar5;
  
  lVar2 = *(longlong *)&(this->parameters_).field_0x8;
  plVar5 = (longlong *)
           ((((ulonglong)(param_1 >> 0x18 & 0xff) ^
             ((((ulonglong)(byte)param_1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
              (ulonglong)(param_1 >> 8 & 0xff)) * 0x100000001b3 ^
             (ulonglong)(param_1 >> 0x10 & 0xff)) * 0x100000001b3) * 0x100000001b3 &
            *(ulonglong *)&(this->parameters_).field_0x30) * 0x10 +
           *(longlong *)&(this->parameters_).field_0x18);
  lVar3 = plVar5[1];
  if (lVar3 == lVar2) {
LAB_14f091440:
    lVar3 = 0;
  }
  else {
    iVar1 = *(int *)(lVar3 + 0x10);
    while (param_1 != iVar1) {
      if (lVar3 == *plVar5) goto LAB_14f091440;
      lVar3 = *(longlong *)(lVar3 + 8);
      iVar1 = *(int *)(lVar3 + 0x10);
    }
  }
  if (lVar3 == 0) {
    lVar3 = lVar2;
  }
  if (lVar3 == lVar2) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)
                 &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                  ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,false);
      atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
      _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    pbVar4 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)
                        &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                         ::__l2::kNullStream,"Source ");
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
             std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,param_1);
    std::operator<<<std::char_traits<char>_>(pbVar4," not found");
    return (SourceParameters *)0x0;
  }
  return (SourceParameters *)(lVar3 + 0x14);
}

// GetParameters @ 14f091500

SourceParameters * __thiscall
vraudio::SourceParametersManager::GetParameters(SourceParametersManager *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  longlong *plVar5;
  
  lVar2 = *(longlong *)&(this->parameters_).field_0x8;
  plVar5 = (longlong *)
           ((((ulonglong)(param_1 >> 0x18 & 0xff) ^
             ((((ulonglong)(byte)param_1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
              (ulonglong)(param_1 >> 8 & 0xff)) * 0x100000001b3 ^
             (ulonglong)(param_1 >> 0x10 & 0xff)) * 0x100000001b3) * 0x100000001b3 &
            *(ulonglong *)&(this->parameters_).field_0x30) * 0x10 +
           *(longlong *)&(this->parameters_).field_0x18);
  lVar3 = plVar5[1];
  if (lVar3 == lVar2) {
LAB_14f091590:
    lVar3 = 0;
  }
  else {
    iVar1 = *(int *)(lVar3 + 0x10);
    while (param_1 != iVar1) {
      if (lVar3 == *plVar5) goto LAB_14f091590;
      lVar3 = *(longlong *)(lVar3 + 8);
      iVar1 = *(int *)(lVar3 + 0x10);
    }
  }
  if (lVar3 == 0) {
    lVar3 = lVar2;
  }
  if (lVar3 == lVar2) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)
                 &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                  ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,false);
      atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
      _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    pbVar4 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)
                        &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                         ::__l2::kNullStream,"Source ");
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
             std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,param_1);
    std::operator<<<std::char_traits<char>_>(pbVar4," not found");
    return (SourceParameters *)0x0;
  }
  return (SourceParameters *)(lVar3 + 0x14);
}

// ProcessAllParameters @ 14f091650

void __thiscall
vraudio::SourceParametersManager::ProcessAllParameters
          (SourceParametersManager *this,
          function<void___cdecl(vraudio::SourceParameters_*)> *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong local_res8;
  
  puVar1 = *(undefined8 **)&(this->parameters_).field_0x8;
  puVar2 = (undefined8 *)*puVar1;
  while( true ) {
    if (puVar2 == puVar1) {
      return;
    }
    plVar3 = *(longlong **)&param_1->field_0x38;
    local_res8 = (longlong)puVar2 + 0x14;
    if (plVar3 == (longlong *)0x0) break;
    (**(code **)(*plVar3 + 0x10))(plVar3,&local_res8);
    puVar2 = (undefined8 *)*puVar2;
  }
  std::_Xbad_function_call();
  return;
}

// Register @ 14f0916c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
vraudio::SourceParametersManager::Register(SourceParametersManager *this,int param_1)

{
  _List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> *p_Var1;
  pair<std::_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*>_*,bool> *ppVar2;
  undefined1 auStack_c8 [32];
  int local_a8 [2];
  pair<std::_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*>_*,bool> local_a0;
  WorldPosition local_88;
  WorldRotation WStack_7c;
  float fStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58;
  float fStack_54;
  DistanceRolloffModel DStack_50;
  float fStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_28 = 0;
  local_88._0_8_ = 0;
  local_88._8_4_ = 0;
  WStack_7c._0_4_ = 0;
  WStack_7c._4_4_ = 0;
  WStack_7c._8_4_ = 0;
  WStack_7c._12_4_ = 0;
  fStack_6c = 0.0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0.0;
  fStack_54 = 0.0;
  DStack_50 = 0;
  fStack_4c = 0.0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_a8[0] = param_1;
  WorldPosition::WorldPosition(&local_88);
  WorldRotation::WorldRotation(&WStack_7c);
  local_48 = ___xmm_000000003f8000000000000043fa0000;
  uStack_40 = _UNK_153104cf8;
  local_38 = ___xmm_3f80000000000000000000003f800000;
  uStack_30 = _UNK_15076b188;
  fStack_6c = 0.0;
  local_68._0_4_ = 1.0;
  fStack_54 = 1.0;
  DStack_50 = kLogarithmic;
  fStack_4c = 0.0;
  local_28 = CONCAT31(local_28._1_3_,1);
  ppVar2 = std::
           _Hash<std::_Umap_traits<int,vraudio::SourceParameters,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,vraudio::SourceParameters>_>,0>_>
           ::_Try_emplace<int_const_&>
                     ((_Hash<std::_Umap_traits<int,vraudio::SourceParameters,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,vraudio::SourceParameters>_>,0>_>
                       *)this,&local_a0,local_a8);
  p_Var1 = ppVar2->first;
  *(undefined8 *)&(p_Var1->_Myval).second.object_transform.position = local_88._0_8_;
  *(undefined4 *)&(p_Var1->_Myval).second.object_transform.position.field_0x8 = local_88._8_4_;
  *(ulonglong *)&(p_Var1->_Myval).second.object_transform.rotation =
       CONCAT44(WStack_7c._4_4_,WStack_7c._0_4_);
  *(ulonglong *)&(p_Var1->_Myval).second.object_transform.rotation.field_0x8 =
       CONCAT44(WStack_7c._12_4_,WStack_7c._8_4_);
  (p_Var1->_Myval).second.spread_deg = fStack_6c;
  (p_Var1->_Myval).second.gain = (float)local_68;
  (p_Var1->_Myval).second.attenuations[0] = local_68._4_4_;
  (p_Var1->_Myval).second.attenuations[1] = (float)uStack_60;
  (p_Var1->_Myval).second.attenuations[2] = uStack_60._4_4_;
  (p_Var1->_Myval).second.attenuations[3] = local_58;
  (p_Var1->_Myval).second.distance_attenuation = fStack_54;
  (p_Var1->_Myval).second.distance_rolloff_model = DStack_50;
  (p_Var1->_Myval).second.minimum_distance = fStack_4c;
  (p_Var1->_Myval).second.maximum_distance = (float)local_48;
  (p_Var1->_Myval).second.directivity_alpha = local_48._4_4_;
  (p_Var1->_Myval).second.directivity_order = (float)uStack_40;
  (p_Var1->_Myval).second.listener_directivity_alpha = uStack_40._4_4_;
  (p_Var1->_Myval).second.listener_directivity_order = (float)local_38;
  (p_Var1->_Myval).second.occlusion_intensity = local_38._4_4_;
  (p_Var1->_Myval).second.near_field_gain = (float)uStack_30;
  (p_Var1->_Myval).second.room_effects_gain = uStack_30._4_4_;
  (p_Var1->_Myval).second.enable_hrtf = local_28._0_1_;
  return;
}

// Unregister @ 14f091850

void __thiscall
vraudio::SourceParametersManager::Unregister(SourceParametersManager *this,int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar3 = *(longlong **)&(this->parameters_).field_0x8;
  plVar7 = (longlong *)
           ((((((ulonglong)(param_1 >> 8 & 0xff) ^
               ((ulonglong)(byte)param_1 ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3 ^
              (ulonglong)(param_1 >> 0x10 & 0xff)) * 0x100000001b3 ^
             (ulonglong)(param_1 >> 0x18 & 0xff)) * 0x100000001b3 &
            *(ulonglong *)&(this->parameters_).field_0x30) * 0x10 +
           *(longlong *)&(this->parameters_).field_0x18);
  plVar4 = (longlong *)plVar7[1];
  if (plVar4 == plVar3) {
LAB_14f0918d5:
    plVar6 = (longlong *)0x0;
  }
  else {
    iVar2 = (int)plVar4[2];
    plVar6 = plVar4;
    while (param_1 != iVar2) {
      if (plVar6 == (longlong *)*plVar7) goto LAB_14f0918d5;
      plVar6 = (longlong *)plVar6[1];
      iVar2 = (int)plVar6[2];
    }
  }
  if (plVar6 != (longlong *)0x0) {
    if (plVar4 == plVar6) {
      if ((longlong *)*plVar7 == plVar6) {
        *plVar7 = (longlong)plVar3;
        plVar7[1] = (longlong)plVar3;
      }
      else {
        plVar7[1] = plVar6[1];
      }
    }
    else if ((longlong *)*plVar7 == plVar6) {
      *plVar7 = *plVar6;
    }
    lVar5 = *plVar6;
    puVar1 = &(this->parameters_).field_0x10;
    *(longlong *)puVar1 = *(longlong *)puVar1 + -1;
    *(longlong *)plVar6[1] = lVar5;
    *(longlong *)(lVar5 + 8) = plVar6[1];
    ::operator_delete(plVar6,0x78);
    return;
  }
  return;
}

// _Forced_rehash @ 14f091930

/* WARNING: Type propagation algorithm not settling */

void __thiscall
std::
_Hash<std::_Umap_traits<int,vraudio::SourceParameters,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,vraudio::SourceParameters>_>,0>_>
::_Forced_rehash(_Hash<std::_Umap_traits<int,vraudio::SourceParameters,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<std::pair<int_const_,vraudio::SourceParameters>_>,0>_>
                 *this,ulong64 param_1)

{
  int iVar1;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
  *p_Var2;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
  _Var3;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
  _Var4;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
  _Var5;
  _List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> *p_Var6;
  _List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> *p_Var7;
  _List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> *p_Var8;
  _List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> *p_Var9;
  ulonglong uVar10;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
  *p_Var11;
  longlong lVar12;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
  _Var13;
  ulong64 uVar14;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
  local_res10;
  
  for (lVar12 = 0x3f; 0xfffffffffffffffU >> lVar12 == 0; lVar12 = lVar12 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar12 & 0x3f)) < param_1) {
    _Xlength_error("invalid hash bucket count");
    return;
  }
  p_Var11 = (this->_Vec)._Mypair._Myval2._Myfirst;
  p_Var2 = (this->_Vec)._Mypair._Myval2._Mylast;
  uVar10 = param_1 - 1 | 1;
  lVar12 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  _Var3 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
           )(this->_List)._Mypair._Myval2._Myhead;
  uVar14 = 1L << ((char)lVar12 + 1U & 0x3f);
  local_res10 = _Var3;
  if ((ulonglong)((longlong)p_Var2 - (longlong)p_Var11 >> 3) < uVar14 * 2) {
    if (0x1fffffffffffffff < uVar14 * 2) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
    p_Var11 = _Allocate<16,std::_Default_allocate_traits>(uVar14 * 0x10);
    _Var4 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
             )(this->_Vec)._Mypair._Myval2._Myfirst;
    lVar12 = (longlong)(this->_Vec)._Mypair._Myval2._Myend - (longlong)_Var4 >> 3;
    if (lVar12 != 0) {
      uVar10 = lVar12 * 8;
      _Var13 = _Var4;
      if (0xfff < uVar10) {
        _Var13 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
                   *)((longlong)_Var4 + -8);
        uVar10 = uVar10 + 0x27;
        if (0x1f < (ulonglong)((longlong)_Var4 + (-8 - (longlong)_Var13))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)_Var13,uVar10);
    }
    p_Var2 = p_Var11 + uVar14 * 2;
    (this->_Vec)._Mypair._Myval2._Myfirst = p_Var11;
    (this->_Vec)._Mypair._Myval2._Mylast = p_Var2;
    (this->_Vec)._Mypair._Myval2._Myend = p_Var2;
    for (; p_Var11 != p_Var2; p_Var11 = p_Var11 + 1) {
      *p_Var11 = _Var3;
    }
  }
  else {
    fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>_>
              (p_Var11,p_Var2,&local_res10);
  }
  this->_Maxidx = uVar14;
  this->_Mask = uVar14 - 1;
  _Var4 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
           )((this->_List)._Mypair._Myval2._Myhead)->_Next;
joined_r0x00014f091a70:
  do {
    while( true ) {
      while( true ) {
        if (_Var4 == _Var3) {
          return;
        }
        _Var13 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
                   *)_Var4;
        p_Var11 = (this->_Vec)._Mypair._Myval2._Myfirst +
                  ((((((ulonglong)
                       (byte)((pair<int_const_,vraudio::SourceParameters> *)((longlong)_Var4 + 0x10)
                             )->first ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)_Var4 + 0x11)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)_Var4 + 0x12)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)_Var4 + 0x13)) * 0x100000001b3 & this->_Mask) * 2;
        if (*p_Var11 != _Var3) break;
        *p_Var11 = _Var4;
        p_Var11[1] = _Var4;
        _Var4 = _Var13;
      }
      _Var5 = p_Var11[1];
      iVar1 = ((pair<int_const_,vraudio::SourceParameters> *)((longlong)_Var4 + 0x10))->first;
      if (iVar1 != ((pair<int_const_,vraudio::SourceParameters> *)((longlong)_Var5 + 0x10))->first)
      break;
      _Var5 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
                *)_Var5;
      if (_Var5 != _Var4) {
        p_Var6 = *(_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> **)
                  ((longlong)_Var4 + 8);
        p_Var6->_Next = (_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> *)_Var13
        ;
        p_Var7 = *(_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> **)
                  ((longlong)_Var13 + 8);
        p_Var7->_Next = (_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> *)_Var5;
        p_Var8 = *(_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> **)
                  ((longlong)_Var5 + 8);
        p_Var8->_Next = (_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> *)_Var4;
        *(_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> **)
         ((longlong)_Var5 + 8) = p_Var7;
        *(_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> **)
         ((longlong)_Var13 + 8) = p_Var6;
        *(_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> **)
         ((longlong)_Var4 + 8) = p_Var8;
      }
      p_Var11[1] = _Var4;
      _Var4 = _Var13;
    }
    do {
      if (*p_Var11 == _Var5) {
        p_Var6 = *(_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> **)
                  ((longlong)_Var4 + 8);
        p_Var6->_Next = (_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> *)_Var13
        ;
        p_Var7 = *(_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> **)
                  ((longlong)_Var13 + 8);
        p_Var7->_Next = (_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> *)_Var5;
        p_Var8 = *(_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> **)
                  ((longlong)_Var5 + 8);
        p_Var8->_Next = (_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> *)_Var4;
        *(_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> **)
         ((longlong)_Var5 + 8) = p_Var7;
        *(_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> **)
         ((longlong)_Var13 + 8) = p_Var6;
        *(_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> **)
         ((longlong)_Var4 + 8) = p_Var8;
        *p_Var11 = _Var4;
        _Var4 = _Var13;
        goto joined_r0x00014f091a70;
      }
      _Var5 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
                *)((longlong)_Var5 + 8);
    } while (iVar1 != ((pair<int_const_,vraudio::SourceParameters> *)((longlong)_Var5 + 0x10))->
                      first);
    p_Var6 = *(_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> **)_Var5;
    p_Var7 = *(_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> **)
              ((longlong)_Var4 + 8);
    p_Var7->_Next = (_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> *)_Var13;
    p_Var8 = *(_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> **)
              ((longlong)_Var13 + 8);
    p_Var8->_Next = p_Var6;
    p_Var9 = p_Var6->_Prev;
    p_Var9->_Next = (_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> *)_Var4;
    p_Var6->_Prev = p_Var8;
    *(_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> **)((longlong)_Var13 + 8) =
         p_Var7;
    *(_List_node<std::pair<int_const_,vraudio::SourceParameters>,void_*> **)((longlong)_Var4 + 8) =
         p_Var9;
    _Var4 = _Var13;
  } while( true );
}

