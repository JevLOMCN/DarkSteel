// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 37

// Check_NEImpl<google::protobuf::Message_const*___ptr64,google::protobuf::Message*___ptr64> @ 14fb855d0

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::Check_NEImpl<class google::protobuf::Message const *
   __ptr64,class google::protobuf::Message * __ptr64>(class google::protobuf::Message const *
   __ptr64 const & __ptr64,class google::protobuf::Message * __ptr64 const & __ptr64,char const *
   __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::
Check_NEImpl<google::protobuf::Message_const*___ptr64,google::protobuf::Message*___ptr64>
          (Message **param_1,Message **param_2,char *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  if (*param_1 != *param_2) {
    return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  pbVar1 = MakeCheckOpString<void_const*___ptr64,void_const*___ptr64>(*param_1,*param_2,param_3);
  return pbVar1;
}

// GetReferenceableValue<google::protobuf::Message*___ptr64> @ 14fb855f0

/* class google::protobuf::Message * __ptr64 const & __ptr64 __cdecl
   absl::lts_20240722::log_internal::GetReferenceableValue<class google::protobuf::Message *
   __ptr64>(class google::protobuf::Message * __ptr64 const & __ptr64) */

Message ** __cdecl
absl::lts_20240722::log_internal::GetReferenceableValue<google::protobuf::Message*___ptr64>
          (Message **param_1)

{
  return param_1;
}

// GetReferenceableValue<google::protobuf::Message_const*___ptr64> @ 14fb85600

/* class google::protobuf::Message const * __ptr64 const & __ptr64 __cdecl
   absl::lts_20240722::log_internal::GetReferenceableValue<class google::protobuf::Message const *
   __ptr64>(class google::protobuf::Message const * __ptr64 const & __ptr64) */

Message ** __cdecl
absl::lts_20240722::log_internal::GetReferenceableValue<google::protobuf::Message_const*___ptr64>
          (Message **param_1)

{
  return param_1;
}

// _Assign_counted_range<google::protobuf::FieldDescriptor_const*___ptr64_const*___ptr64> @ 14fb85610

/* private: void __cdecl std::vector<class google::protobuf::FieldDescriptor const * __ptr64,class
   std::allocator<class google::protobuf::FieldDescriptor const * __ptr64>
   >::_Assign_counted_range<class google::protobuf::FieldDescriptor const * __ptr64 const *
   __ptr64>(class google::protobuf::FieldDescriptor const * __ptr64 const * __ptr64,unsigned
   __int64) __ptr64 */

void __thiscall
std::
vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
::_Assign_counted_range<google::protobuf::FieldDescriptor_const*___ptr64_const*___ptr64>
          (vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
           *this,FieldDescriptor **param_1,__uint64 param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulonglong uVar3;
  void *_Dst;
  ulonglong uVar4;
  
  pvVar1 = *(void **)this;
  uVar4 = *(longlong *)(this + 0x10) - (longlong)pvVar1 >> 3;
  if (uVar4 < param_2) {
    if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    if (0x1fffffffffffffff - (uVar4 >> 1) < uVar4) {
      uVar3 = 0x1fffffffffffffff;
    }
    else {
      uVar3 = (uVar4 >> 1) + uVar4;
      if (uVar3 < param_2) {
        uVar3 = param_2;
      }
    }
    _Dst = (void *)0x0;
    if (pvVar1 != (void *)0x0) {
      uVar4 = uVar4 * 8;
      pvVar2 = pvVar1;
      if (0xfff < uVar4) {
        pvVar2 = *(void **)((longlong)pvVar1 + -8);
        uVar4 = uVar4 + 0x27;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14fb856fb;
      }
      ::operator_delete(pvVar2,uVar4);
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (0x1fffffffffffffff < uVar3) {
LAB_14fb8579c:
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
    uVar3 = uVar3 * 8;
    if (uVar3 < 0x1000) {
      if (uVar3 != 0) {
        _Dst = ::operator_new(uVar3);
      }
    }
    else {
      if (uVar3 + 0x27 <= uVar3) goto LAB_14fb8579c;
      pvVar1 = ::operator_new(uVar3 + 0x27);
      if (pvVar1 == (void *)0x0) {
LAB_14fb856fb:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      _Dst = (void *)((longlong)pvVar1 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)_Dst + -8) = pvVar1;
    }
    *(void **)this = _Dst;
    *(void **)(this + 8) = _Dst;
    *(void **)(this + 0x10) = (void *)(uVar3 + (longlong)_Dst);
  }
  else {
    uVar4 = *(longlong *)(this + 8) - (longlong)pvVar1 >> 3;
    if (param_2 <= uVar4) {
      memmove(pvVar1,param_1,param_2 * 8);
      *(void **)(this + 8) = (void *)((longlong)pvVar1 + param_2 * 8);
      return;
    }
    memmove(pvVar1,param_1,uVar4 * 8);
    _Dst = *(void **)(this + 8);
    param_1 = param_1 + uVar4;
    param_2 = param_2 - uVar4;
  }
  memmove(_Dst,param_1,param_2 * 8);
  *(void **)(this + 8) = (void *)(param_2 * 8 + (longlong)_Dst);
  return;
}

// _Copy_memmove<google::protobuf::FieldDescriptor_const*___ptr64_const*___ptr64,google::protobuf::FieldDescriptor_const*___ptr64*___ptr64> @ 14fb857b0

/* class google::protobuf::FieldDescriptor const * __ptr64 * __ptr64 __cdecl
   std::_Copy_memmove<class google::protobuf::FieldDescriptor const * __ptr64 const * __ptr64,class
   google::protobuf::FieldDescriptor const * __ptr64 * __ptr64>(class
   google::protobuf::FieldDescriptor const * __ptr64 const * __ptr64,class
   google::protobuf::FieldDescriptor const * __ptr64 const * __ptr64,class
   google::protobuf::FieldDescriptor const * __ptr64 * __ptr64) */

FieldDescriptor ** __cdecl
std::
_Copy_memmove<google::protobuf::FieldDescriptor_const*___ptr64_const*___ptr64,google::protobuf::FieldDescriptor_const*___ptr64*___ptr64>
          (FieldDescriptor **param_1,FieldDescriptor **param_2,FieldDescriptor **param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (FieldDescriptor **)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove_n<google::protobuf::FieldDescriptor_const*___ptr64_const*___ptr64,google::protobuf::FieldDescriptor_const*___ptr64*___ptr64> @ 14fb857f0

/* class google::protobuf::FieldDescriptor const * __ptr64 * __ptr64 __cdecl
   std::_Copy_memmove_n<class google::protobuf::FieldDescriptor const * __ptr64 const *
   __ptr64,class google::protobuf::FieldDescriptor const * __ptr64 * __ptr64>(class
   google::protobuf::FieldDescriptor const * __ptr64 const * __ptr64,unsigned __int64,class
   google::protobuf::FieldDescriptor const * __ptr64 * __ptr64) */

FieldDescriptor ** __cdecl
std::
_Copy_memmove_n<google::protobuf::FieldDescriptor_const*___ptr64_const*___ptr64,google::protobuf::FieldDescriptor_const*___ptr64*___ptr64>
          (FieldDescriptor **param_1,__uint64 param_2,FieldDescriptor **param_3)

{
  memmove(param_3,param_1,param_2 * 8);
  return param_3 + param_2;
}

// _Copy_n_unchecked4<google::protobuf::FieldDescriptor_const*___ptr64_const*___ptr64,unsigned___int64,google::protobuf::FieldDescriptor_const*___ptr64*___ptr64> @ 14fb85830

/* class google::protobuf::FieldDescriptor const * __ptr64 * __ptr64 __cdecl
   std::_Copy_n_unchecked4<class google::protobuf::FieldDescriptor const * __ptr64 const *
   __ptr64,unsigned __int64,class google::protobuf::FieldDescriptor const * __ptr64 * __ptr64>(class
   google::protobuf::FieldDescriptor const * __ptr64 const * __ptr64,unsigned __int64,class
   google::protobuf::FieldDescriptor const * __ptr64 * __ptr64) */

FieldDescriptor ** __cdecl
std::
_Copy_n_unchecked4<google::protobuf::FieldDescriptor_const*___ptr64_const*___ptr64,unsigned___int64,google::protobuf::FieldDescriptor_const*___ptr64*___ptr64>
          (FieldDescriptor **param_1,__uint64 param_2,FieldDescriptor **param_3)

{
  memmove(param_3,param_1,param_2 * 8);
  return param_3 + param_2;
}

// _Emplace_back<google::protobuf::FieldDescriptor_const*___ptr64_const&___ptr64> @ 14fb85870

/* public: void __cdecl std::_Uninitialized_backout_al<class std::allocator<class
   google::protobuf::FieldDescriptor const * __ptr64> >::_Emplace_back<class
   google::protobuf::FieldDescriptor const * __ptr64 const & __ptr64>(class
   google::protobuf::FieldDescriptor const * __ptr64 const & __ptr64) __ptr64 */

void __thiscall
std::_Uninitialized_backout_al<std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>::
_Emplace_back<google::protobuf::FieldDescriptor_const*___ptr64_const&___ptr64>
          (_Uninitialized_backout_al<std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
           *this,FieldDescriptor **param_1)

{
  **(undefined8 **)(this + 8) = *param_1;
  *(longlong *)(this + 8) = *(longlong *)(this + 8) + 8;
  return;
}

// _Get_unwrapped<google::protobuf::FieldDescriptor_const*___ptr64_const*___ptr64> @ 14fb85890

/* UNKNOWN __cdecl std::_Get_unwrapped<class google::protobuf::FieldDescriptor const * __ptr64 const
   * __ptr64>(class google::protobuf::FieldDescriptor const * __ptr64 const * __ptr64 && __ptr64) */

FieldDescriptor ** __cdecl
std::_Get_unwrapped<google::protobuf::FieldDescriptor_const*___ptr64_const*___ptr64>
          (FieldDescriptor ***param_1)

{
  return *param_1;
}

// _To_address<google::protobuf::FieldDescriptor_const*___ptr64_const*___ptr64> @ 14fb858a0

/* UNKNOWN __cdecl std::_To_address<class google::protobuf::FieldDescriptor const * __ptr64 const *
   __ptr64>(class google::protobuf::FieldDescriptor const * __ptr64 const * __ptr64 const & __ptr64)
    */

FieldDescriptor ** __cdecl
std::_To_address<google::protobuf::FieldDescriptor_const*___ptr64_const*___ptr64>
          (FieldDescriptor ***param_1)

{
  return *param_1;
}

// _Uninitialized_copy_n<google::protobuf::FieldDescriptor_const*___ptr64_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_> @ 14fb858b0

/* class google::protobuf::FieldDescriptor const * __ptr64 * __ptr64 __cdecl
   std::_Uninitialized_copy_n<class google::protobuf::FieldDescriptor const * __ptr64 const *
   __ptr64,class std::allocator<class google::protobuf::FieldDescriptor const * __ptr64> >(class
   google::protobuf::FieldDescriptor const * __ptr64 const * __ptr64,unsigned __int64,class
   google::protobuf::FieldDescriptor const * __ptr64 * __ptr64,class std::allocator<class
   google::protobuf::FieldDescriptor const * __ptr64> & __ptr64) */

FieldDescriptor ** __cdecl
std::
_Uninitialized_copy_n<google::protobuf::FieldDescriptor_const*___ptr64_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
          (FieldDescriptor **param_1,__uint64 param_2,FieldDescriptor **param_3,
          allocator<google::protobuf::FieldDescriptor_const*___ptr64> *param_4)

{
  memmove(param_3,param_1,param_2 * 8);
  return param_3 + param_2;
}

// move<google::protobuf::FieldDescriptor_const*___ptr64_const*___ptr64&___ptr64> @ 14fb858f0

/* class google::protobuf::FieldDescriptor const * __ptr64 const * __ptr64 && __ptr64 __cdecl
   std::move<class google::protobuf::FieldDescriptor const * __ptr64 const * __ptr64 &
   __ptr64>(class google::protobuf::FieldDescriptor const * __ptr64 const * __ptr64 & __ptr64) */

FieldDescriptor *** __cdecl
std::move<google::protobuf::FieldDescriptor_const*___ptr64_const*___ptr64&___ptr64>
          (FieldDescriptor ***param_1)

{
  return param_1;
}

// to_address<google::protobuf::FieldDescriptor_const*___ptr64_const> @ 14fb85900

/* class google::protobuf::FieldDescriptor const * __ptr64 const * __ptr64 __cdecl
   std::to_address<class google::protobuf::FieldDescriptor const * __ptr64 const>(class
   google::protobuf::FieldDescriptor const * __ptr64 const * __ptr64 const) */

FieldDescriptor ** __cdecl
std::to_address<google::protobuf::FieldDescriptor_const*___ptr64_const>(FieldDescriptor **param_1)

{
  return param_1;
}

// initializer_list<google::protobuf::FieldDescriptor_const*___ptr64> @ 14fb85910

/* public: __cdecl std::initializer_list<class google::protobuf::FieldDescriptor const *
   __ptr64>::initializer_list<class google::protobuf::FieldDescriptor const * __ptr64>(class
   google::protobuf::FieldDescriptor const * __ptr64 const * __ptr64,class
   google::protobuf::FieldDescriptor const * __ptr64 const * __ptr64) __ptr64 */

initializer_list<google::protobuf::FieldDescriptor_const*___ptr64> * __thiscall
std::initializer_list<google::protobuf::FieldDescriptor_const*___ptr64>::
initializer_list<google::protobuf::FieldDescriptor_const*___ptr64>
          (initializer_list<google::protobuf::FieldDescriptor_const*___ptr64> *this,
          FieldDescriptor **param_1,FieldDescriptor **param_2)

{
  *(FieldDescriptor ***)this = param_1;
  *(FieldDescriptor ***)(this + 8) = param_2;
  return this;
}

// operator= @ 14fb85930

/* public: class std::vector<class google::protobuf::FieldDescriptor const * __ptr64,class
   std::allocator<class google::protobuf::FieldDescriptor const * __ptr64> > & __ptr64 __cdecl
   std::vector<class google::protobuf::FieldDescriptor const * __ptr64,class std::allocator<class
   google::protobuf::FieldDescriptor const * __ptr64> >::operator=(class std::initializer_list<class
   google::protobuf::FieldDescriptor const * __ptr64>) __ptr64 */

vector<class_google::protobuf::FieldDescriptor_const*___ptr64,class_std::allocator<class_google::protobuf::FieldDescriptor_const*___ptr64>_>
* __thiscall
std::
vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
::operator=(vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
            *this,longlong *param_2)

{
  _Assign_counted_range<google::protobuf::FieldDescriptor_const*___ptr64_const*___ptr64>
            (this,(FieldDescriptor **)*param_2,param_2[1] - *param_2 >> 3);
  return (vector<class_google::protobuf::FieldDescriptor_const*___ptr64,class_std::allocator<class_google::protobuf::FieldDescriptor_const*___ptr64>_>
          *)this;
}

// Clear @ 14fb85960

/* public: static void __cdecl google::protobuf::internal::ReflectionOps::Clear(class
   google::protobuf::Message * __ptr64) */

void __cdecl google::protobuf::internal::ReflectionOps::Clear(Message *param_1)

{
  undefined8 *puVar1;
  Reflection *this;
  InternalMetadata *pIVar2;
  UnknownFieldSet *this_00;
  undefined8 *puVar3;
  uint uVar4;
  ulong64 uVar5;
  undefined8 *local_28;
  undefined8 *puStack_20;
  longlong local_18;
  
  this = (Reflection *)FUN_14fb865a0();
  local_28 = (undefined8 *)0x0;
  puStack_20 = (undefined8 *)0x0;
  local_18 = 0;
  Reflection::ListFields
            (this,param_1,
             (vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
              *)&local_28);
  puVar1 = puStack_20;
  for (puVar3 = local_28; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    Reflection::ClearField(this,param_1,(FieldDescriptor *)*puVar3);
  }
  pIVar2 = Reflection::GetInternalMetadata(this,param_1);
  if ((pIVar2->ptr_ & 1) != 0) {
    this_00 = Reflection::MutableUnknownFields(this,param_1);
    uVar5 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
    if ((~((byte)uVar5 >> 2) & 1) == 0) {
      uVar4 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.size;
    }
    else {
      uVar4 = (uint)uVar5 & 3;
    }
    if (uVar4 != 0) {
      UnknownFieldSet::ClearFallback(this_00);
    }
  }
  if (local_28 != (undefined8 *)0x0) {
    uVar5 = local_18 - (longlong)local_28 & 0xfffffffffffffff8;
    puVar3 = local_28;
    if (0xfff < uVar5) {
      uVar5 = uVar5 + 0x27;
      puVar3 = (undefined8 *)local_28[-1];
      if (0x1f < (ulonglong)((longlong)local_28 + (-8 - (longlong)puVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(puVar3,uVar5);
  }
  return;
}

// Copy @ 14fb85a70

/* public: static void __cdecl google::protobuf::internal::ReflectionOps::Copy(class
   google::protobuf::Message const & __ptr64,class google::protobuf::Message * __ptr64) */

void __cdecl google::protobuf::internal::ReflectionOps::Copy(Message *param_1,Message *param_2)

{
  undefined8 *puVar1;
  Reflection *this;
  InternalMetadata *pIVar2;
  UnknownFieldSet *this_00;
  undefined8 *puVar3;
  uint uVar4;
  ulong64 uVar5;
  undefined8 *local_28;
  undefined8 *puStack_20;
  longlong local_18;
  
  if (param_1 != param_2) {
    this = (Reflection *)FUN_14fb865a0(param_2);
    local_28 = (undefined8 *)0x0;
    puStack_20 = (undefined8 *)0x0;
    local_18 = 0;
    Reflection::ListFields
              (this,param_2,
               (vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
                *)&local_28);
    puVar1 = puStack_20;
    for (puVar3 = local_28; puVar3 != puVar1; puVar3 = puVar3 + 1) {
      Reflection::ClearField(this,param_2,(FieldDescriptor *)*puVar3);
    }
    pIVar2 = Reflection::GetInternalMetadata(this,param_2);
    if ((pIVar2->ptr_ & 1) != 0) {
      this_00 = Reflection::MutableUnknownFields(this,param_2);
      uVar5 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
      if ((~((byte)uVar5 >> 2) & 1) == 0) {
        uVar4 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.size;
      }
      else {
        uVar4 = (uint)uVar5 & 3;
      }
      if (uVar4 != 0) {
        UnknownFieldSet::ClearFallback(this_00);
      }
    }
    if (local_28 != (undefined8 *)0x0) {
      uVar5 = local_18 - (longlong)local_28 & 0xfffffffffffffff8;
      puVar3 = local_28;
      if (0xfff < uVar5) {
        uVar5 = uVar5 + 0x27;
        puVar3 = (undefined8 *)local_28[-1];
        if (0x1f < (ulonglong)((longlong)local_28 + (-8 - (longlong)puVar3))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      ::operator_delete(puVar3,uVar5);
    }
    Merge(param_1,param_2);
  }
  return;
}

// DiscardUnknownFields @ 14fb85bb0

/* WARNING: Removing unreachable block (ram,0x00014fb86118) */
/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: static void __cdecl google::protobuf::internal::ReflectionOps::DiscardUnknownFields(class
   google::protobuf::Message * __ptr64) */

void __cdecl google::protobuf::internal::ReflectionOps::DiscardUnknownFields(Message *param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  bool bVar3;
  CppType CVar4;
  int iVar5;
  Reflection *this;
  UnknownFieldSet *pUVar6;
  MapFieldBase *this_00;
  Descriptor *pDVar7;
  Metadata *pMVar8;
  FieldDescriptor *pFVar9;
  FieldDescriptor *pFVar10;
  LogMessage *pLVar11;
  Message *pMVar12;
  uint uVar13;
  ulong64 uVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *local_208;
  undefined8 *puStack_200;
  longlong local_1f8;
  undefined1 local_1e8 [56];
  MapValueConstRef local_1b0;
  char *local_198;
  undefined8 uStack_190;
  char *local_188;
  undefined8 uStack_180;
  char *local_178;
  undefined8 uStack_170;
  char *local_168;
  undefined8 uStack_160;
  basic_string_view<char,std::char_traits<char>_> local_158;
  char *local_148;
  undefined8 uStack_140;
  char *local_138;
  undefined8 uStack_130;
  basic_string_view<char,std::char_traits<char>_> local_128;
  basic_string_view<char,std::char_traits<char>_> local_118;
  basic_string_view<char,std::char_traits<char>_> local_108;
  basic_string_view<char,std::char_traits<char>_> local_f8;
  basic_string_view<char,std::char_traits<char>_> local_e8;
  basic_string_view<char,std::char_traits<char>_> local_d8;
  basic_string_view<char,std::char_traits<char>_> local_c8;
  LogMessageFatal local_b8;
  MapIterator local_a8;
  Metadata local_58;
  Metadata local_48 [2];
  
  this = (Reflection *)FUN_14fb865a0();
  pUVar6 = Reflection::GetUnknownFields(this,param_1);
  uVar14 = (pUVar6->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar14 >> 2) & 1) == 0) {
    uVar13 = (pUVar6->fields_).soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar13 = (uint)uVar14 & 3;
  }
  if (uVar13 != 0) {
    pUVar6 = Reflection::MutableUnknownFields(this,param_1);
    uVar14 = (pUVar6->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
    if ((~((byte)uVar14 >> 2) & 1) == 0) {
      uVar13 = (pUVar6->fields_).soo_rep_.field0_0x0.long_rep.size;
    }
    else {
      uVar13 = (uint)uVar14 & 3;
    }
    if (uVar13 != 0) {
      UnknownFieldSet::ClearFallback(pUVar6);
    }
  }
  local_208 = (undefined8 *)0x0;
  puStack_200 = (undefined8 *)0x0;
  local_1f8 = 0;
  Reflection::ListFields
            (this,param_1,
             (vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
              *)&local_208);
  puVar2 = puStack_200;
  puVar16 = local_208;
  do {
    if (puVar16 == puVar2) {
      if (local_208 != (undefined8 *)0x0) {
        uVar14 = local_1f8 - (longlong)local_208 & 0xfffffffffffffff8;
        puVar16 = local_208;
        if (0xfff < uVar14) {
          uVar14 = uVar14 + 0x27;
          puVar16 = (undefined8 *)local_208[-1];
          if (0x1f < (ulonglong)((longlong)local_208 + (-8 - (longlong)puVar16))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        ::operator_delete(puVar16,uVar14);
      }
      return;
    }
    pFVar10 = (FieldDescriptor *)*puVar16;
    if (*(int *)((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar10->type_ * 4) ==
        10) {
      if ((((pFVar10->type_ == 0xb) &&
           (bVar3 = FieldDescriptor::is_map_message_type(pFVar10), bVar3)) &&
          (this_00 = Reflection::MutableMapData(this,param_1,pFVar10),
          this_00 != (MapFieldBase *)0x0)) && (bVar3 = MapFieldBase::IsMapValid(this_00), bVar3)) {
        pDVar7 = FieldDescriptor::message_type(pFVar10);
        if (*(int *)((longlong)&FieldDescriptor::kTypeToCppTypeMap +
                    (ulonglong)pDVar7->fields_[1].type_ * 4) == 10) {
          local_1e8._48_4_ = 0;
          local_1b0.data_ = (Message *)0x0;
          local_1b0.type_ = 0;
          pMVar8 = protobuf::Message::GetMetadata(param_1,&local_58);
          local_1e8._24_8_ = Reflection::MutableMapData(pMVar8->reflection,param_1,pFVar10);
          pDVar7 = FieldDescriptor::message_type(pFVar10);
          pFVar9 = Descriptor::map_key(pDVar7);
          local_1e8._48_4_ =
               *(CppType *)
                ((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar9->type_ * 4);
          pDVar7 = FieldDescriptor::message_type(pFVar10);
          pFVar9 = Descriptor::map_value(pDVar7);
          local_1b0.type_ =
               *(CppType *)
                ((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar9->type_ * 4);
          local_a8.key_.type_ = 0;
          local_a8.value_._0_8_ = 0;
          local_a8.value_._8_4_ = 0;
          pMVar8 = protobuf::Message::GetMetadata(param_1,local_48);
          local_a8.map_ = Reflection::MutableMapData(pMVar8->reflection,param_1,pFVar10);
          pDVar7 = FieldDescriptor::message_type(pFVar10);
          pFVar9 = Descriptor::map_key(pDVar7);
          local_a8.key_.type_ =
               *(CppType *)
                ((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar9->type_ * 4);
          pDVar7 = FieldDescriptor::message_type(pFVar10);
          pFVar10 = Descriptor::map_value(pDVar7);
          local_a8.value_._8_4_ =
               *(undefined4 *)
                ((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar10->type_ * 4);
          MapFieldBase::MapBegin(this_00,(MapIterator *)local_1e8);
          MapFieldBase::MapEnd(this_00,&local_a8);
          bVar3 = MapFieldBase::EqualIterator
                            ((MapFieldBase *)local_1e8._24_8_,(MapIterator *)local_1e8,&local_a8);
          while (!bVar3) {
            uVar1 = *(ulonglong *)local_1e8._24_8_;
            if (((uVar1 & 1) != 0) && (uVar1 != 1)) {
              *(undefined4 *)(uVar1 + 0x1f) = 0;
            }
            CVar4 = MapValueConstRef::type(&local_1b0);
            if (CVar4 != CPPTYPE_MESSAGE) {
              pLVar11 = (LogMessage *)
                        absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                                  (&local_b8,
                                   "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                                   ,0x305);
              local_198 = "Protocol Buffer map usage error:\n";
              uStack_190 = 0x21;
              local_118._Mydata = "Protocol Buffer map usage error:\n";
              local_118._Mysize = 0x21;
              absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                        (pLVar11,&local_118);
              local_188 = "MapValueRef::MutableMessageValue";
              uStack_180 = 0x20;
              local_108._Mydata = "MapValueRef::MutableMessageValue";
              local_108._Mysize = 0x20;
              absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                        (pLVar11,&local_108);
              local_178 = " type does not match\n";
              uStack_170 = 0x15;
              local_f8._Mydata = " type does not match\n";
              local_f8._Mysize = 0x15;
              absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                        (pLVar11,&local_f8);
              local_168 = "  Expected : ";
              uStack_160 = 0xd;
              local_e8._Mydata = "  Expected : ";
              local_e8._Mysize = 0xd;
              absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                        (pLVar11,&local_e8);
              local_158._Mydata = PTR_s_message_1535d0170;
              local_158._Mysize = 0xffffffffffffffff;
              do {
                local_158._Mysize = local_158._Mysize + 1;
              } while (PTR_s_message_1535d0170[local_158._Mysize] != '\0');
              pLVar11 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar11,&local_158)
              ;
              local_148 = "\n";
              uStack_140 = 1;
              local_d8._Mydata = "\n";
              local_d8._Mysize = 1;
              absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                        (pLVar11,&local_d8);
              local_138 = "  Actual   : ";
              uStack_130 = 0xd;
              local_c8._Mydata = "  Actual   : ";
              local_c8._Mysize = 0xd;
              absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                        (pLVar11,&local_c8);
              CVar4 = MapValueConstRef::type(&local_1b0);
              local_128._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar4];
              local_128._Mysize = 0xffffffffffffffff;
              do {
                local_128._Mysize = local_128._Mysize + 1;
              } while (local_128._Mydata[local_128._Mysize] != '\0');
              absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar11,&local_128);
                    /* WARNING: Subroutine does not return */
              absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_b8);
            }
            protobuf::Message::DiscardUnknownFields(local_1b0.data_);
            MapFieldBase::IncreaseIterator
                      ((MapFieldBase *)local_1e8._24_8_,(MapIterator *)local_1e8);
            bVar3 = MapFieldBase::EqualIterator
                              ((MapFieldBase *)local_1e8._24_8_,(MapIterator *)local_1e8,&local_a8);
          }
        }
      }
      else if (pFVar10->is_repeated_) {
        iVar5 = Reflection::FieldSize(this,param_1,pFVar10);
        iVar15 = 0;
        if (0 < iVar5) {
          do {
            pMVar12 = Reflection::MutableRepeatedMessage(this,param_1,pFVar10,iVar15);
            protobuf::Message::DiscardUnknownFields(pMVar12);
            iVar15 = iVar15 + 1;
          } while (iVar15 < iVar5);
        }
      }
      else {
        pMVar12 = Reflection::MutableMessage(this,param_1,pFVar10,(MessageFactory *)0x0);
        protobuf::Message::DiscardUnknownFields(pMVar12);
      }
    }
    puVar16 = puVar16 + 1;
  } while( true );
}

// FindInitializationErrors @ 14fb86130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: static void __cdecl
   google::protobuf::internal::ReflectionOps::FindInitializationErrors(class
   google::protobuf::Message const & __ptr64,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64,class std::vector<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
   std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > > > * __ptr64) */

void __cdecl
google::protobuf::internal::ReflectionOps::FindInitializationErrors
          (Message *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2
          ,vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
           *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> **ppbVar1;
  Descriptor *pDVar2;
  longlong *plVar3;
  FieldDescriptor *pFVar4;
  Reflection *this;
  bool bVar5;
  int iVar6;
  Metadata *pMVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  Message *pMVar9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  undefined8 uVar11;
  ulong64 uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined1 auStack_118 [32];
  Message *local_f8;
  Reflection *local_f0;
  undefined8 *local_e8;
  undefined8 *puStack_e0;
  longlong local_d8;
  Metadata local_d0;
  _Bxty local_c0;
  ulonglong local_a8;
  AlphaNum local_a0;
  AlphaNum local_70;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_f8 = param_1;
  pMVar7 = protobuf::Message::GetMetadata(param_1,&local_d0);
  pDVar2 = pMVar7->descriptor;
  local_f0 = (Reflection *)FUN_14fb865a0(param_1);
  iVar6 = pDVar2->field_count_;
  iVar13 = 0;
  if (0 < iVar6) {
    lVar15 = 0;
    lVar14 = 0;
    do {
      bVar5 = FieldDescriptor::is_required(pDVar2->fields_ + iVar13);
      param_1 = local_f8;
      if ((bVar5) &&
         (bVar5 = Reflection::HasField(local_f0,local_f8,pDVar2->fields_ + iVar13), !bVar5)) {
        plVar3 = *(longlong **)((longlong)&pDVar2->fields_->all_names_ + lVar14);
        local_a0.piece_._Mydata = (char *)plVar3;
        if (0xf < (ulonglong)plVar3[3]) {
          local_a0.piece_._Mydata = (char *)*plVar3;
        }
        local_a0.piece_._Mysize = plVar3[2];
        local_70.piece_._Mydata = (char *)param_2;
        if (0xf < (param_2->_Mypair)._Myval2._Myres) {
          local_70.piece_._Mydata = (param_2->_Mypair)._Myval2._Bx._Ptr;
        }
        local_70.piece_._Mysize = (param_2->_Mypair)._Myval2._Mysize;
        pbVar8 = absl::lts_20240722::StrCat
                           ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            &local_c0,&local_70,&local_a0);
        pbVar10 = (param_3->_Mypair)._Myval2._Mylast;
        if (pbVar10 == (param_3->_Mypair)._Myval2._Myend) {
          std::
          vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          ::
          _Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                    (param_3,pbVar10,pbVar8);
        }
        else {
          (pbVar10->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
          *(undefined8 *)((longlong)&(pbVar10->_Mypair)._Myval2._Bx + 8) = 0;
          (pbVar10->_Mypair)._Myval2._Mysize = 0;
          (pbVar10->_Mypair)._Myval2._Myres = 0;
          uVar11 = *(undefined8 *)((longlong)&(pbVar8->_Mypair)._Myval2._Bx + 8);
          (pbVar10->_Mypair)._Myval2._Bx._Ptr = (pbVar8->_Mypair)._Myval2._Bx._Ptr;
          *(undefined8 *)((longlong)&(pbVar10->_Mypair)._Myval2._Bx + 8) = uVar11;
          uVar12 = (pbVar8->_Mypair)._Myval2._Myres;
          (pbVar10->_Mypair)._Myval2._Mysize = (pbVar8->_Mypair)._Myval2._Mysize;
          (pbVar10->_Mypair)._Myval2._Myres = uVar12;
          (pbVar8->_Mypair)._Myval2._Mysize = 0;
          (pbVar8->_Mypair)._Myval2._Myres = 0xf;
          (pbVar8->_Mypair)._Myval2._Bx._Buf[0] = '\0';
          ppbVar1 = &(param_3->_Mypair)._Myval2._Mylast;
          *ppbVar1 = *ppbVar1 + 1;
        }
        if (0xf < local_a8) {
          uVar12 = local_a8 + 1;
          uVar11 = local_c0._Ptr;
          if (0xfff < uVar12) {
            uVar12 = local_a8 + 0x28;
            uVar11 = *(undefined8 *)(local_c0._Ptr + -8);
            if ((char *)0x1f < local_c0._Ptr + (-8 - uVar11)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          ::operator_delete((void *)uVar11,uVar12);
        }
      }
      iVar13 = iVar13 + 1;
      lVar15 = lVar15 + 1;
      lVar14 = lVar14 + 0x60;
    } while (lVar15 < iVar6);
  }
  this = local_f0;
  local_e8 = (undefined8 *)0x0;
  puStack_e0 = (undefined8 *)0x0;
  local_d8 = 0;
  Reflection::ListFields
            (local_f0,param_1,
             (vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
              *)&local_e8);
  local_f0 = (Reflection *)puStack_e0;
  puVar16 = local_e8;
  if (local_e8 != puStack_e0) {
    do {
      pFVar4 = (FieldDescriptor *)*puVar16;
      if (*(int *)((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar4->type_ * 4) ==
          10) {
        if (pFVar4->is_repeated_) {
          iVar6 = Reflection::FieldSize(this,param_1,pFVar4);
          iVar13 = 0;
          if (0 < iVar6) {
            do {
              pMVar9 = Reflection::GetRepeatedMessage(this,param_1,pFVar4,iVar13);
              pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        FUN_14fb87a80(&local_c0,param_2,pFVar4);
              FindInitializationErrors(pMVar9,pbVar10,param_3);
              if (0xf < local_a8) {
                uVar12 = local_a8 + 1;
                uVar11 = local_c0._Ptr;
                if (0xfff < uVar12) {
                  uVar12 = local_a8 + 0x28;
                  uVar11 = *(undefined8 *)(local_c0._Ptr + -8);
                  if ((char *)0x1f < local_c0._Ptr + (-8 - uVar11)) {
                    /* WARNING: Subroutine does not return */
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                ::operator_delete((void *)uVar11,uVar12);
              }
              iVar13 = iVar13 + 1;
              param_1 = local_f8;
            } while (iVar13 < iVar6);
          }
        }
        else {
          pMVar9 = Reflection::GetMessage(this,param_1,pFVar4,(MessageFactory *)0x0);
          pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                    FUN_14fb87a80(&local_c0,param_2,pFVar4);
          FindInitializationErrors(pMVar9,pbVar10,param_3);
          param_1 = local_f8;
          if (0xf < local_a8) {
            uVar12 = local_a8 + 1;
            uVar11 = local_c0._Ptr;
            if (0xfff < uVar12) {
              uVar12 = local_a8 + 0x28;
              uVar11 = *(undefined8 *)(local_c0._Ptr + -8);
              if ((char *)0x1f < local_c0._Ptr + (-8 - uVar11)) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            ::operator_delete((void *)uVar11,uVar12);
            param_1 = local_f8;
          }
        }
      }
      puVar16 = puVar16 + 1;
    } while ((Reflection *)puVar16 != local_f0);
  }
  if (local_e8 != (undefined8 *)0x0) {
    uVar12 = local_d8 - (longlong)local_e8 & 0xfffffffffffffff8;
    puVar16 = local_e8;
    if (0xfff < uVar12) {
      uVar12 = uVar12 + 0x27;
      puVar16 = (undefined8 *)local_e8[-1];
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)puVar16))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(puVar16,uVar12);
  }
  return;
}

// GenericSwap @ 14fb86500

/* void __cdecl google::protobuf::internal::GenericSwap(class google::protobuf::Message *
   __ptr64,class google::protobuf::Message * __ptr64) */

void __cdecl google::protobuf::internal::GenericSwap(Message *param_1,Message *param_2)

{
  MessageLite *this;
  Metadata *pMVar1;
  Arena *pAVar2;
  MessageLite *this_00;
  MessageLite *this_01;
  Metadata local_18;
  
  pAVar2 = (Arena *)(*(ulonglong *)&param_2->field_0x8 & 0xfffffffffffffffe);
  if ((param_2->field_0x8 & 1) != 0) {
    pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
  }
  this_00 = (MessageLite *)param_1;
  this_01 = (MessageLite *)param_2;
  if ((pAVar2 == (Arena *)0x0) &&
     (pAVar2 = (Arena *)(*(ulonglong *)&param_1->field_0x8 & 0xfffffffffffffffe),
     this_00 = (MessageLite *)param_2, this_01 = (MessageLite *)param_1,
     (param_1->field_0x8 & 1) != 0)) {
    pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
  }
  this = MessageLite::New(this_01,pAVar2);
  MessageLite::CheckTypeAndMergeFrom(this,this_00);
  (**(code **)(this_00->_padding_ + 8))(this_00);
  MessageLite::CheckTypeAndMergeFrom(this_00,this_01);
  pMVar1 = protobuf::Message::GetMetadata((Message *)this_01,&local_18);
  Reflection::Swap(pMVar1->reflection,(Message *)this,(Message *)this_01);
  return;
}

// FUN_14fb865a0 @ 14fb865a0

void FUN_14fb865a0(Message *param_1)

{
  Descriptor *pDVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  Metadata *pMVar3;
  LogMessage *pLVar4;
  basic_string_view<char,std::char_traits<char>_> local_38;
  Metadata local_28;
  Metadata local_18;
  
  pMVar3 = google::protobuf::Message::GetMetadata(param_1,&local_28);
  if (pMVar3->reflection != (Reflection *)0x0) {
    return;
  }
  pMVar3 = google::protobuf::Message::GetMetadata(param_1,&local_18);
  pDVar1 = pMVar3->descriptor;
  pLVar4 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     ((LogMessageFatal *)&local_28,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\reflection_ops.cc"
                      ,0x27);
  local_38._Mydata = "Message does not support reflection (type ";
  local_38._Mysize = 0x2a;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar4,&local_38);
  if (pDVar1 == (Descriptor *)0x0) {
    local_38._Mydata = "unknown";
    local_38._Mysize = 7;
  }
  else {
    pbVar2 = pDVar1->all_names_;
    local_38._Mydata = (char *)pbVar2;
    if (0xf < (pbVar2->_Mypair)._Myval2._Myres) {
      local_38._Mydata = (pbVar2->_Mypair)._Myval2._Bx._Ptr;
    }
    local_38._Mysize = (pbVar2->_Mypair)._Myval2._Mysize;
  }
  pLVar4 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar4,&local_38);
  local_38._Mydata = ").";
  local_38._Mysize = 2;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar4,&local_38);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal((LogMessageFatal *)&local_28);
}

// HasExtensionSet @ 14fb866d0

/* private: bool __cdecl google::protobuf::Reflection::HasExtensionSet(class
   google::protobuf::Message const & __ptr64)const __ptr64 */

bool __thiscall google::protobuf::Reflection::HasExtensionSet(Reflection *this,Message *param_1)

{
  return (this->schema_).extensions_offset_ != -1;
}

// IsInitialized @ 14fb866e0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: static bool __cdecl google::protobuf::internal::ReflectionOps::IsInitialized(class
   google::protobuf::Message const & __ptr64) */

bool __cdecl google::protobuf::internal::ReflectionOps::IsInitialized(Message *param_1)

{
  bool bVar1;
  CppType CVar2;
  int iVar3;
  Metadata *pMVar4;
  Reflection *this;
  Descriptor *pDVar5;
  MapFieldBase *this_00;
  FieldDescriptor *pFVar6;
  FieldDescriptor *pFVar7;
  LogMessage *pLVar8;
  MessageLite *pMVar9;
  ulong64 uVar10;
  int iVar11;
  undefined8 *puVar12;
  FieldDescriptor *local_res10;
  undefined8 *local_res18;
  basic_string_view<char,std::char_traits<char>_> local_1b8;
  undefined8 *local_1a8;
  undefined8 *puStack_1a0;
  longlong local_198;
  undefined1 local_188 [56];
  MapValueConstRef local_150;
  char *local_138;
  undefined8 uStack_130;
  char *local_128;
  undefined8 uStack_120;
  char *local_118;
  undefined8 uStack_110;
  char *local_108;
  undefined8 uStack_100;
  basic_string_view<char,std::char_traits<char>_> local_f8;
  char *local_e8;
  undefined8 uStack_e0;
  char *local_d8;
  undefined8 uStack_d0;
  basic_string_view<char,std::char_traits<char>_> local_c8;
  Metadata local_b8;
  MapIterator local_a8;
  Metadata local_58;
  Metadata local_48;
  
  local_res10 = (FieldDescriptor *)((ulonglong)local_res10 & 0xffffffff00000000);
  pMVar4 = protobuf::Message::GetMetadata(param_1,&local_b8);
  pDVar5 = pMVar4->descriptor;
  this = (Reflection *)FUN_14fb865a0(param_1);
  iVar3 = pDVar5->field_count_;
  iVar11 = 0;
  if (0 < iVar3) {
    do {
      bVar1 = FieldDescriptor::is_required(pDVar5->fields_ + iVar11);
      if ((bVar1) && (bVar1 = Reflection::HasField(this,param_1,pDVar5->fields_ + iVar11), !bVar1))
      {
        return false;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar3);
  }
  local_1a8 = (undefined8 *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  local_198 = 0;
  if ((pDVar5->options_->_impl_).map_entry_ == false) {
    Reflection::ListFields
              (this,param_1,
               (vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
                *)&local_1a8);
  }
  else {
    local_res10 = Descriptor::map_value(pDVar5);
    std::
    vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
    ::_Assign_counted_range<google::protobuf::FieldDescriptor_const*___ptr64_const*___ptr64>
              ((vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
                *)&local_1a8,&local_res10,1);
  }
  local_res18 = puStack_1a0;
  puVar12 = local_1a8;
  if (local_1a8 != puStack_1a0) {
    do {
      pFVar7 = (FieldDescriptor *)*puVar12;
      if (*(int *)((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar7->type_ * 4) ==
          10) {
        if ((pFVar7->type_ == 0xb) && (bVar1 = FieldDescriptor::is_map_message_type(pFVar7), bVar1))
        {
          pDVar5 = FieldDescriptor::message_type(pFVar7);
          if (*(int *)((longlong)&FieldDescriptor::kTypeToCppTypeMap +
                      (ulonglong)pDVar5->fields_[1].type_ * 4) == 10) {
            this_00 = Reflection::GetMapData(this,param_1,pFVar7);
            bVar1 = MapFieldBase::IsMapValid(this_00);
            if (!bVar1) goto LAB_14fb86b41;
            local_188._48_4_ = 0;
            local_150.data_ = (MessageLite *)0x0;
            local_150.type_ = 0;
            pMVar4 = protobuf::Message::GetMetadata(param_1,&local_58);
            local_188._24_8_ = Reflection::MutableMapData(pMVar4->reflection,param_1,pFVar7);
            pDVar5 = FieldDescriptor::message_type(pFVar7);
            pFVar6 = Descriptor::map_key(pDVar5);
            local_188._48_4_ =
                 *(CppType *)
                  ((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar6->type_ * 4);
            pDVar5 = FieldDescriptor::message_type(pFVar7);
            pFVar6 = Descriptor::map_value(pDVar5);
            local_150.type_ =
                 *(CppType *)
                  ((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar6->type_ * 4);
            local_a8.key_.type_ = 0;
            local_a8.value_._0_8_ = 0;
            local_a8.value_._8_4_ = 0;
            pMVar4 = protobuf::Message::GetMetadata(param_1,&local_48);
            local_a8.map_ = Reflection::MutableMapData(pMVar4->reflection,param_1,pFVar7);
            pDVar5 = FieldDescriptor::message_type(pFVar7);
            pFVar6 = Descriptor::map_key(pDVar5);
            local_a8.key_.type_ =
                 *(CppType *)
                  ((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar6->type_ * 4);
            pDVar5 = FieldDescriptor::message_type(pFVar7);
            pFVar7 = Descriptor::map_value(pDVar5);
            local_a8.value_._8_4_ =
                 *(undefined4 *)
                  ((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar7->type_ * 4);
            MapFieldBase::MapBegin(this_00,(MapIterator *)local_188);
            MapFieldBase::MapEnd(this_00,&local_a8);
            bVar1 = MapFieldBase::EqualIterator
                              ((MapFieldBase *)local_188._24_8_,(MapIterator *)local_188,&local_a8);
            while (!bVar1) {
              CVar2 = MapValueConstRef::type(&local_150);
              if (CVar2 != CPPTYPE_MESSAGE) {
                pLVar8 = (LogMessage *)
                         absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                                   ((LogMessageFatal *)&local_b8,
                                    "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                                    ,0x2ac);
                local_res10 = (FieldDescriptor *)CONCAT44(local_res10._4_4_,1);
                local_138 = "Protocol Buffer map usage error:\n";
                uStack_130 = 0x21;
                local_1b8._Mydata = "Protocol Buffer map usage error:\n";
                local_1b8._Mysize = 0x21;
                absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                          (pLVar8,&local_1b8);
                local_128 = "MapValueConstRef::GetMessageValue";
                uStack_120 = 0x21;
                local_1b8._Mydata = "MapValueConstRef::GetMessageValue";
                local_1b8._Mysize = 0x21;
                absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                          (pLVar8,&local_1b8);
                local_118 = " type does not match\n";
                uStack_110 = 0x15;
                local_1b8._Mydata = " type does not match\n";
                local_1b8._Mysize = 0x15;
                absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                          (pLVar8,&local_1b8);
                local_108 = "  Expected : ";
                uStack_100 = 0xd;
                local_1b8._Mydata = "  Expected : ";
                local_1b8._Mysize = 0xd;
                absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                          (pLVar8,&local_1b8);
                local_f8._Mydata = PTR_s_message_1535d0170;
                local_f8._Mysize = 0xffffffffffffffff;
                do {
                  local_f8._Mysize = local_f8._Mysize + 1;
                } while (PTR_s_message_1535d0170[local_f8._Mysize] != '\0');
                pLVar8 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar8,&local_f8);
                local_e8 = "\n";
                uStack_e0 = 1;
                local_1b8._Mydata = "\n";
                local_1b8._Mysize = 1;
                absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                          (pLVar8,&local_1b8);
                local_d8 = "  Actual   : ";
                uStack_d0 = 0xd;
                local_1b8._Mydata = "  Actual   : ";
                local_1b8._Mysize = 0xd;
                absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                          (pLVar8,&local_1b8);
                CVar2 = MapValueConstRef::type(&local_150);
                local_c8._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar2];
                local_c8._Mysize = 0xffffffffffffffff;
                do {
                  local_c8._Mysize = local_c8._Mysize + 1;
                } while (local_c8._Mydata[local_c8._Mysize] != '\0');
                absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar8,&local_c8);
                    /* WARNING: Subroutine does not return */
                absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
                          ((LogMessageFatal *)&local_b8);
              }
              bVar1 = MessageLite::IsInitialized(local_150.data_);
              if (!bVar1) goto LAB_14fb86bf2;
              MapFieldBase::IncreaseIterator
                        ((MapFieldBase *)local_188._24_8_,(MapIterator *)local_188);
              bVar1 = MapFieldBase::EqualIterator
                                ((MapFieldBase *)local_188._24_8_,(MapIterator *)local_188,&local_a8
                                );
            }
          }
        }
        else {
LAB_14fb86b41:
          if (pFVar7->is_repeated_) {
            iVar3 = Reflection::FieldSize(this,param_1,pFVar7);
            iVar11 = 0;
            if (0 < iVar3) {
              do {
                pMVar9 = (MessageLite *)Reflection::GetRepeatedMessage(this,param_1,pFVar7,iVar11);
                bVar1 = MessageLite::IsInitialized(pMVar9);
                if (!bVar1) goto LAB_14fb86bf2;
                iVar11 = iVar11 + 1;
              } while (iVar11 < iVar3);
            }
          }
          else {
            pMVar9 = (MessageLite *)
                     Reflection::GetMessage(this,param_1,pFVar7,(MessageFactory *)0x0);
            bVar1 = MessageLite::IsInitialized(pMVar9);
            if (!bVar1) {
LAB_14fb86bf2:
              bVar1 = false;
              goto LAB_14fb86ba5;
            }
          }
        }
      }
      puVar12 = puVar12 + 1;
    } while (puVar12 != local_res18);
  }
  bVar1 = true;
LAB_14fb86ba5:
  if (local_1a8 != (undefined8 *)0x0) {
    uVar10 = local_198 - (longlong)local_1a8 & 0xfffffffffffffff8;
    puVar12 = local_1a8;
    if (0xfff < uVar10) {
      uVar10 = uVar10 + 0x27;
      puVar12 = (undefined8 *)local_1a8[-1];
      if (0x1f < (ulonglong)((longlong)local_1a8 + (-8 - (longlong)puVar12))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(puVar12,uVar10);
  }
  return bVar1;
}

// IsInitialized @ 14fb86c40

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: static bool __cdecl google::protobuf::internal::ReflectionOps::IsInitialized(class
   google::protobuf::Message const & __ptr64,bool,bool) */

bool __cdecl
google::protobuf::internal::ReflectionOps::IsInitialized(Message *param_1,bool param_2,bool param_3)

{
  bool bVar1;
  CppType CVar2;
  int iVar3;
  Metadata *pMVar4;
  Reflection *this;
  Descriptor *pDVar5;
  MapFieldBase *this_00;
  FieldDescriptor *pFVar6;
  LogMessage *pLVar7;
  MessageFactory *pMVar8;
  MessageLite *pMVar9;
  ExtensionSet *this_01;
  int iVar10;
  FieldDescriptor *this_02;
  FieldDescriptor *pFVar11;
  basic_string_view<char,std::char_traits<char>_> local_1a8;
  Descriptor *local_198;
  undefined1 local_188 [56];
  MapValueConstRef local_150;
  char *local_138;
  undefined8 uStack_130;
  char *local_128;
  undefined8 uStack_120;
  char *local_118;
  undefined8 uStack_110;
  char *local_108;
  undefined8 uStack_100;
  basic_string_view<char,std::char_traits<char>_> local_f8;
  char *local_e8;
  undefined8 uStack_e0;
  char *local_d8;
  undefined8 uStack_d0;
  basic_string_view<char,std::char_traits<char>_> local_c8;
  LogMessageFatal local_b8;
  MapIterator local_a8;
  Metadata local_58;
  Metadata local_48;
  Metadata local_38;
  
  pMVar4 = protobuf::Message::GetMetadata(param_1,&local_58);
  pDVar5 = pMVar4->descriptor;
  local_198 = pDVar5;
  this = (Reflection *)FUN_14fb865a0(param_1);
  if (pDVar5->field_count_ == 0) {
    if (!param_3) {
      return true;
    }
  }
  else {
    this_02 = pDVar5->fields_;
    pFVar11 = this_02 + pDVar5->field_count_;
    pFVar6 = this_02;
    if (param_2) {
      for (; pFVar6 != pFVar11; pFVar6 = pFVar6 + 1) {
        bVar1 = FieldDescriptor::is_required(pFVar6);
        if ((bVar1) && (bVar1 = Reflection::HasField(this,param_1,pFVar6), !bVar1)) {
          return false;
        }
      }
    }
    pDVar5 = local_198;
    if (!param_3) {
      return true;
    }
    for (; local_198 = pDVar5, this_02 != pFVar11; this_02 = this_02 + 1) {
      if (*(int *)((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)this_02->type_ * 4) ==
          10) {
        pDVar5 = FieldDescriptor::message_type(this_02);
        if ((pDVar5->options_->_impl_).map_entry_ == false) {
          if (this_02->is_repeated_) {
            iVar3 = Reflection::FieldSize(this,param_1,this_02);
            iVar10 = 0;
            if (0 < iVar3) {
              do {
                pMVar9 = (MessageLite *)Reflection::GetRepeatedMessage(this,param_1,this_02,iVar10);
                bVar1 = MessageLite::IsInitialized(pMVar9);
                if (!bVar1) {
                  return false;
                }
                iVar10 = iVar10 + 1;
              } while (iVar10 < iVar3);
            }
          }
          else {
            bVar1 = Reflection::HasField(this,param_1,this_02);
            if (bVar1) {
              pMVar9 = (MessageLite *)
                       Reflection::GetMessage(this,param_1,this_02,(MessageFactory *)0x0);
              bVar1 = MessageLite::IsInitialized(pMVar9);
              if (!bVar1) {
                return false;
              }
            }
          }
        }
        else if (*(int *)((longlong)&FieldDescriptor::kTypeToCppTypeMap +
                         (ulonglong)pDVar5->fields_[1].type_ * 4) == 10) {
          this_00 = Reflection::GetMapData(this,param_1,this_02);
          bVar1 = MapFieldBase::IsMapValid(this_00);
          if (bVar1) {
            local_188._48_4_ = 0;
            local_150.data_ = (MessageLite *)0x0;
            local_150.type_ = 0;
            pMVar4 = protobuf::Message::GetMetadata(param_1,&local_48);
            local_188._24_8_ = Reflection::MutableMapData(pMVar4->reflection,param_1,this_02);
            pDVar5 = FieldDescriptor::message_type(this_02);
            pFVar6 = Descriptor::map_key(pDVar5);
            local_188._48_4_ =
                 *(CppType *)
                  ((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar6->type_ * 4);
            pDVar5 = FieldDescriptor::message_type(this_02);
            pFVar6 = Descriptor::map_value(pDVar5);
            local_150.type_ =
                 *(CppType *)
                  ((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar6->type_ * 4);
            local_a8.key_.type_ = 0;
            local_a8.value_._0_8_ = 0;
            local_a8.value_._8_4_ = 0;
            pMVar4 = protobuf::Message::GetMetadata(param_1,&local_38);
            local_a8.map_ = Reflection::MutableMapData(pMVar4->reflection,param_1,this_02);
            pDVar5 = FieldDescriptor::message_type(this_02);
            pFVar6 = Descriptor::map_key(pDVar5);
            local_a8.key_.type_ =
                 *(CppType *)
                  ((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar6->type_ * 4);
            pDVar5 = FieldDescriptor::message_type(this_02);
            pFVar6 = Descriptor::map_value(pDVar5);
            local_a8.value_._8_4_ =
                 *(undefined4 *)
                  ((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar6->type_ * 4);
            MapFieldBase::MapBegin(this_00,(MapIterator *)local_188);
            MapFieldBase::MapEnd(this_00,&local_a8);
            bVar1 = MapFieldBase::EqualIterator
                              ((MapFieldBase *)local_188._24_8_,(MapIterator *)local_188,&local_a8);
            while (!bVar1) {
              CVar2 = MapValueConstRef::type(&local_150);
              if (CVar2 != CPPTYPE_MESSAGE) {
                pLVar7 = (LogMessage *)
                         absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                                   (&local_b8,
                                    "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                                    ,0x2ac);
                local_138 = "Protocol Buffer map usage error:\n";
                uStack_130 = 0x21;
                local_1a8._Mydata = "Protocol Buffer map usage error:\n";
                local_1a8._Mysize = 0x21;
                absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                          (pLVar7,&local_1a8);
                local_128 = "MapValueConstRef::GetMessageValue";
                uStack_120 = 0x21;
                local_1a8._Mydata = "MapValueConstRef::GetMessageValue";
                local_1a8._Mysize = 0x21;
                absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                          (pLVar7,&local_1a8);
                local_118 = " type does not match\n";
                uStack_110 = 0x15;
                local_1a8._Mydata = " type does not match\n";
                local_1a8._Mysize = 0x15;
                absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                          (pLVar7,&local_1a8);
                local_108 = "  Expected : ";
                uStack_100 = 0xd;
                local_1a8._Mydata = "  Expected : ";
                local_1a8._Mysize = 0xd;
                absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                          (pLVar7,&local_1a8);
                local_f8._Mydata = PTR_s_message_1535d0170;
                local_f8._Mysize = 0xffffffffffffffff;
                do {
                  local_f8._Mysize = local_f8._Mysize + 1;
                } while (PTR_s_message_1535d0170[local_f8._Mysize] != '\0');
                pLVar7 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar7,&local_f8);
                local_e8 = "\n";
                uStack_e0 = 1;
                local_1a8._Mydata = "\n";
                local_1a8._Mysize = 1;
                absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                          (pLVar7,&local_1a8);
                local_d8 = "  Actual   : ";
                uStack_d0 = 0xd;
                local_1a8._Mydata = "  Actual   : ";
                local_1a8._Mysize = 0xd;
                absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                          (pLVar7,&local_1a8);
                CVar2 = MapValueConstRef::type(&local_150);
                local_c8._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar2];
                local_c8._Mysize = 0xffffffffffffffff;
                do {
                  local_c8._Mysize = local_c8._Mysize + 1;
                } while (local_c8._Mydata[local_c8._Mysize] != '\0');
                absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar7,&local_c8);
                    /* WARNING: Subroutine does not return */
                absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_b8);
              }
              bVar1 = MessageLite::IsInitialized(local_150.data_);
              if (!bVar1) {
                return false;
              }
              MapFieldBase::IncreaseIterator
                        ((MapFieldBase *)local_188._24_8_,(MapIterator *)local_188);
              bVar1 = MapFieldBase::EqualIterator
                                ((MapFieldBase *)local_188._24_8_,(MapIterator *)local_188,&local_a8
                                );
            }
          }
        }
      }
      pDVar5 = local_198;
    }
  }
  if ((this->schema_).extensions_offset_ == -1) {
    return true;
  }
  pMVar8 = MessageFactory::generated_factory();
  pMVar9 = (MessageLite *)(**(code **)((longlong)*pMVar8 + 8))(pMVar8,pDVar5);
  this_01 = Reflection::GetExtensionSet(this,param_1);
  bVar1 = ExtensionSet::IsInitialized(this_01,pMVar9);
  return bVar1;
}

// FUN_14fb87170 @ 14fb87170

/* WARNING: Enum "CppType": Some values do not have unique names */

bool FUN_14fb87170(FieldDescriptor *param_1)

{
  Descriptor *pDVar1;
  
  pDVar1 = google::protobuf::FieldDescriptor::message_type(param_1);
  return *(int *)((longlong)&google::protobuf::FieldDescriptor::kTypeToCppTypeMap +
                 (ulonglong)pDVar1->fields_[1].type_ * 4) == 10;
}

// Merge @ 14fb871a0

/* WARNING: Removing unreachable block (ram,0x00014fb873dc) */
/* WARNING: Removing unreachable block (ram,0x00014fb8722e) */
/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: static void __cdecl google::protobuf::internal::ReflectionOps::Merge(class
   google::protobuf::Message const & __ptr64,class google::protobuf::Message * __ptr64) */

void __cdecl google::protobuf::internal::ReflectionOps::Merge(Message *param_1,Message *param_2)

{
  Descriptor *pDVar1;
  FieldDescriptor *this;
  double dVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  Metadata *pMVar7;
  LogMessage *pLVar8;
  Reflection *this_00;
  Reflection *this_01;
  MessageFactory *pMVar9;
  MessageFactory *pMVar10;
  MessageFactory *pMVar11;
  MessageFactory *pMVar12;
  MapFieldBase *this_02;
  MapFieldBase *this_03;
  UnknownFieldSet *pUVar13;
  __int64 _Var14;
  __uint64 _Var15;
  EnumValueDescriptor *pEVar16;
  Message *pMVar17;
  MessageFactory *pMVar18;
  Message *pMVar19;
  UnknownFieldSet *pUVar20;
  undefined8 *puVar21;
  uint uVar22;
  ulong64 uVar23;
  int iVar24;
  float fVar25;
  basic_string_view<char,std::char_traits<char>_> local_128;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_118;
  ulong64 uStack_110;
  basic_string_view<char,std::char_traits<char>_> local_108;
  basic_string_view<char,std::char_traits<char>_> local_f8;
  undefined8 *local_e8;
  undefined8 *puStack_e0;
  longlong local_d8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_d0;
  char *local_a8;
  undefined8 uStack_a0;
  char *local_98;
  undefined8 uStack_90;
  basic_string_view<char,std::char_traits<char>_> local_88;
  char *local_78;
  undefined8 uStack_70;
  Metadata local_68;
  Metadata local_58;
  
  if ((param_1 == param_2) &&
     (pbVar6 = absl::lts_20240722::log_internal::
               MakeCheckOpString<void_const*___ptr64,void_const*___ptr64>
                         (param_1,param_2,"&from != to"),
     pbVar6 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
    local_118 = pbVar6;
    if (0xf < (pbVar6->_Mypair)._Myval2._Myres) {
      local_118 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                  (pbVar6->_Mypair)._Myval2._Bx._Ptr;
    }
    uStack_110 = (pbVar6->_Mypair)._Myval2._Mysize;
    local_f8._Mydata = (char *)local_118;
    local_f8._Mysize = uStack_110;
    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
              ((LogMessageFatal *)&local_108,
               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\reflection_ops.cc"
               ,0x34,&local_f8);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)&local_108);
  }
  pMVar7 = protobuf::Message::GetMetadata(param_1,(Metadata *)&local_d0);
  pDVar1 = pMVar7->descriptor;
  pMVar7 = protobuf::Message::GetMetadata(param_2,&local_68);
  if ((pMVar7->descriptor != pDVar1) &&
     (pbVar6 = absl::lts_20240722::log_internal::
               MakeCheckOpString<void_const*___ptr64,void_const*___ptr64>
                         (pMVar7->descriptor,pDVar1,"to->GetDescriptor() == descriptor"),
     pbVar6 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
    local_128._Mydata = (char *)pbVar6;
    if (0xf < (pbVar6->_Mypair)._Myval2._Myres) {
      local_128._Mydata = (pbVar6->_Mypair)._Myval2._Bx._Ptr;
    }
    local_128._Mysize = (pbVar6->_Mypair)._Myval2._Mysize;
    local_118 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_128._Mydata
    ;
    uStack_110 = local_128._Mysize;
    pLVar8 = (LogMessage *)
             absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                       ((LogMessageFatal *)&local_d0,
                        "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\reflection_ops.cc"
                        ,0x37,&local_128);
    local_a8 = "Tried to merge messages of different types ";
    uStack_a0 = 0x2b;
    local_128._Mydata = "Tried to merge messages of different types ";
    local_128._Mysize = 0x2b;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar8,&local_128);
    local_98 = "(merge ";
    uStack_90 = 7;
    local_128._Mydata = "(merge ";
    local_128._Mysize = 7;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar8,&local_128);
    pbVar6 = pDVar1->all_names_;
    local_88._Mydata = (char *)(pbVar6 + 1);
    if (0xf < pbVar6[1]._Mypair._Myval2._Myres) {
      local_88._Mydata = pbVar6[1]._Mypair._Myval2._Bx._Ptr;
    }
    local_88._Mysize = pbVar6[1]._Mypair._Myval2._Mysize;
    pLVar8 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar8,&local_88);
    local_78 = " to ";
    uStack_70 = 4;
    local_128._Mydata = " to ";
    local_128._Mysize = 4;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar8,&local_128);
    pMVar7 = protobuf::Message::GetMetadata(param_2,&local_58);
    pbVar6 = pMVar7->descriptor->all_names_;
    local_108._Mydata = (char *)(pbVar6 + 1);
    if (0xf < pbVar6[1]._Mypair._Myval2._Myres) {
      local_108._Mydata = pbVar6[1]._Mypair._Myval2._Bx._Ptr;
    }
    local_108._Mysize = pbVar6[1]._Mypair._Myval2._Mysize;
    pLVar8 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar8,&local_108);
    local_f8._Mydata = ")";
    local_f8._Mysize = 1;
    local_128._Mydata = ")";
    local_128._Mysize = 1;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar8,&local_128);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)&local_d0);
  }
  this_00 = (Reflection *)FUN_14fb865a0(param_1);
  this_01 = (Reflection *)FUN_14fb865a0(param_2);
  pMVar9 = Reflection::GetMessageFactory(this_00);
  pMVar10 = MessageFactory::generated_factory();
  pMVar11 = Reflection::GetMessageFactory(this_01);
  pMVar12 = MessageFactory::generated_factory();
  local_e8 = (undefined8 *)0x0;
  puStack_e0 = (undefined8 *)0x0;
  local_d8 = 0;
  Reflection::ListFields
            (this_00,param_1,
             (vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
              *)&local_e8);
  puVar21 = puStack_e0;
  local_118 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_e8;
  do {
    if (local_118 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)puVar21) {
      pUVar13 = Reflection::GetUnknownFields(this_00,param_1);
      uVar23 = (pUVar13->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
      if ((~((byte)uVar23 >> 2) & 1) == 0) {
        uVar22 = (pUVar13->fields_).soo_rep_.field0_0x0.long_rep.size;
      }
      else {
        uVar22 = (uint)uVar23 & 3;
      }
      if (uVar22 != 0) {
        pUVar13 = Reflection::MutableUnknownFields(this_01,param_2);
        pUVar20 = Reflection::GetUnknownFields(this_00,param_1);
        UnknownFieldSet::MergeFrom(pUVar13,pUVar20);
      }
      if (local_e8 != (undefined8 *)0x0) {
        uVar23 = local_d8 - (longlong)local_e8 & 0xfffffffffffffff8;
        puVar21 = local_e8;
        if (0xfff < uVar23) {
          uVar23 = uVar23 + 0x27;
          puVar21 = (undefined8 *)local_e8[-1];
          if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)puVar21))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        ::operator_delete(puVar21,uVar23);
      }
      return;
    }
    this = *(FieldDescriptor **)local_118;
    if (this->is_repeated_) {
      if ((((pMVar9 == pMVar10) == (pMVar11 == pMVar12)) && (this->type_ == '\v')) &&
         (bVar3 = FieldDescriptor::is_map_message_type(this), bVar3)) {
        this_02 = Reflection::GetMapData(this_00,param_1,this);
        this_03 = Reflection::MutableMapData(this_01,param_2,this);
        bVar3 = MapFieldBase::IsMapValid(this_03);
        if ((bVar3) && (bVar3 = MapFieldBase::IsMapValid(this_02), bVar3)) {
          MapFieldBase::MergeFrom(this_03,this_02);
          goto switchD_14fb8777e_default;
        }
      }
      iVar4 = Reflection::FieldSize(this_00,param_1,this);
      iVar24 = 0;
      if (0 < iVar4) {
        do {
          switch(*(undefined4 *)
                  ((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)this->type_ * 4)) {
          case 1:
            iVar5 = Reflection::GetRepeatedInt32(this_00,param_1,this,iVar24);
            Reflection::AddInt32(this_01,param_2,this,iVar5);
            break;
          case 2:
            _Var14 = Reflection::GetRepeatedInt64(this_00,param_1,this,iVar24);
            Reflection::AddInt64(this_01,param_2,this,_Var14);
            break;
          case 3:
            uVar22 = Reflection::GetRepeatedUInt32(this_00,param_1,this,iVar24);
            Reflection::AddUInt32(this_01,param_2,this,uVar22);
            break;
          case 4:
            _Var15 = Reflection::GetRepeatedUInt64(this_00,param_1,this,iVar24);
            Reflection::AddUInt64(this_01,param_2,this,_Var15);
            break;
          case 5:
            dVar2 = Reflection::GetRepeatedDouble(this_00,param_1,this,iVar24);
            Reflection::AddDouble(this_01,param_2,this,dVar2);
            break;
          case 6:
            fVar25 = Reflection::GetRepeatedFloat(this_00,param_1,this,iVar24);
            Reflection::AddFloat(this_01,param_2,this,fVar25);
            break;
          case 7:
            bVar3 = Reflection::GetRepeatedBool(this_00,param_1,this,iVar24);
            Reflection::AddBool(this_01,param_2,this,bVar3);
            break;
          case 8:
            pEVar16 = Reflection::GetRepeatedEnum(this_00,param_1,this,iVar24);
            Reflection::AddEnum(this_01,param_2,this,pEVar16);
            break;
          case 9:
            pbVar6 = Reflection::GetRepeatedString(this_00,&local_d0,param_1,this,iVar24);
            Reflection::AddString(this_01,param_2,this,pbVar6);
            break;
          case 10:
            pMVar17 = Reflection::GetRepeatedMessage(this_00,param_1,this,iVar24);
            if (this_00 == this_01) {
              pMVar7 = protobuf::Message::GetMetadata(pMVar17,&local_58);
              pMVar18 = Reflection::GetMessageFactory(pMVar7->reflection);
            }
            else {
              pMVar18 = (MessageFactory *)0x0;
            }
            pMVar19 = Reflection::AddMessage(this_01,param_2,this,pMVar18);
            protobuf::Message::MergeFrom(pMVar19,pMVar17);
          }
          iVar24 = iVar24 + 1;
        } while (iVar24 < iVar4);
      }
    }
    else {
      switch(*(undefined4 *)
              ((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)this->type_ * 4)) {
      case 1:
        iVar4 = Reflection::GetInt32(this_00,param_1,this);
        Reflection::SetInt32(this_01,param_2,this,iVar4);
        break;
      case 2:
        _Var14 = Reflection::GetInt64(this_00,param_1,this);
        Reflection::SetInt64(this_01,param_2,this,_Var14);
        break;
      case 3:
        uVar22 = Reflection::GetUInt32(this_00,param_1,this);
        Reflection::SetUInt32(this_01,param_2,this,uVar22);
        break;
      case 4:
        _Var15 = Reflection::GetUInt64(this_00,param_1,this);
        Reflection::SetUInt64(this_01,param_2,this,_Var15);
        break;
      case 5:
        dVar2 = Reflection::GetDouble(this_00,param_1,this);
        Reflection::SetDouble(this_01,param_2,this,dVar2);
        break;
      case 6:
        fVar25 = Reflection::GetFloat(this_00,param_1,this);
        Reflection::SetFloat(this_01,param_2,this,fVar25);
        break;
      case 7:
        bVar3 = Reflection::GetBool(this_00,param_1,this);
        Reflection::SetBool(this_01,param_2,this,bVar3);
        break;
      case 8:
        pEVar16 = Reflection::GetEnum(this_00,param_1,this);
        Reflection::SetEnum(this_01,param_2,this,pEVar16);
        break;
      case 9:
        pbVar6 = Reflection::GetString(this_00,&local_d0,param_1,this);
        Reflection::SetString(this_01,param_2,this,pbVar6);
        break;
      case 10:
        pMVar17 = Reflection::GetMessage(this_00,param_1,this,(MessageFactory *)0x0);
        if (this_00 == this_01) {
          pMVar7 = protobuf::Message::GetMetadata(pMVar17,&local_68);
          pMVar18 = Reflection::GetMessageFactory(pMVar7->reflection);
          pMVar19 = Reflection::MutableMessage(this_01,param_2,this,pMVar18);
          protobuf::Message::MergeFrom(pMVar19,pMVar17);
        }
        else {
          pMVar19 = Reflection::MutableMessage(this_01,param_2,this,(MessageFactory *)0x0);
          protobuf::Message::MergeFrom(pMVar19,pMVar17);
        }
      }
    }
switchD_14fb8777e_default:
    local_118 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                ((longlong)local_118 + 8);
  } while( true );
}

// FUN_14fb87a80 @ 14fb87a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string<char,std::char_traits<char>,std::allocator<char>_> *
FUN_14fb87a80(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
             basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,
             longlong param_3,int param_4)

{
  longlong lVar1;
  char *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_108 [32];
  <lambda_1> local_d8;
  AlphaNum local_b0;
  AlphaNum local_80;
  AlphaNum local_50;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_108;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1,param_2);
  if ((*(byte *)(param_3 + 1) & 8) == 0) {
    pcVar2 = *(char **)(param_3 + 0x10);
    local_b0.piece_._Mydata = pcVar2;
    if (0xf < *(ulonglong *)(pcVar2 + 0x18)) {
      local_b0.piece_._Mydata = *(char **)pcVar2;
    }
    local_b0.piece_._Mysize = *(ulong64 *)(pcVar2 + 0x10);
    absl::lts_20240722::StrAppend(param_1,&local_b0);
  }
  else {
    local_80.piece_._Mydata = ")";
    local_80.piece_._Mysize = 1;
    lVar1 = *(longlong *)(param_3 + 0x10);
    local_b0.piece_._Mydata = (char *)(lVar1 + 0x20);
    if (0xf < *(ulonglong *)(lVar1 + 0x38)) {
      local_b0.piece_._Mydata = *(char **)(lVar1 + 0x20);
    }
    local_b0.piece_._Mysize = *(longlong *)(lVar1 + 0x30);
    local_50.piece_._Mydata = "(";
    local_50.piece_._Mysize = 1;
    absl::lts_20240722::StrAppend(param_1,&local_50,&local_b0,&local_80);
  }
  if (param_4 != -1) {
    local_50.piece_._Mydata = "]";
    local_50.piece_._Mysize = 1;
    local_b0.piece_._Mysize =
         (ulong64)absl::lts_20240722::numbers_internal::FastIntToBuffer(param_4,local_b0.digits_);
    local_b0.piece_._Mysize = local_b0.piece_._Mysize + (-0x10 - (longlong)&local_b0);
    local_b0.piece_._Mydata = local_b0.digits_;
    local_80.piece_._Mydata = "[";
    local_80.piece_._Mysize = 1;
    absl::lts_20240722::StrAppend(param_1,&local_80,&local_b0,&local_50);
  }
  uVar3 = (param_1->_Mypair)._Myval2._Mysize;
  uVar4 = (param_1->_Mypair)._Myval2._Myres;
  if (uVar4 == uVar3) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
              (param_1,1,local_d8,".",1);
  }
  else {
    (param_1->_Mypair)._Myval2._Mysize = uVar3 + 1;
    pbVar5 = param_1;
    if (0xf < uVar4) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_1->_Mypair)._Myval2._Bx._Ptr;
    }
    *(undefined2 *)((longlong)&(pbVar5->_Mypair)._Myval2._Bx + uVar3) = 0x2e;
  }
  return param_1;
}

// _Buy_raw @ 14fb87c60

/* private: void __cdecl std::vector<class google::protobuf::FieldDescriptor const * __ptr64,class
   std::allocator<class google::protobuf::FieldDescriptor const * __ptr64> >::_Buy_raw(unsigned
   __int64) __ptr64 */

void __thiscall
std::
vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
::_Buy_raw(vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
           *this,__uint64 param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  
  if (param_1 < 0x2000000000000000) {
    uVar1 = param_1 * 8;
    if (uVar1 < 0x1000) {
      if (uVar1 == 0) {
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = ::operator_new(uVar1);
      }
    }
    else {
      if (uVar1 + 0x27 <= uVar1) goto LAB_14fb87ce2;
      pvVar2 = ::operator_new(uVar1 + 0x27);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      pvVar3 = (void *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)pvVar3 - 8) = pvVar2;
    }
    *(void **)this = pvVar3;
    *(void **)(this + 8) = pvVar3;
    *(void **)(this + 0x10) = (void *)((longlong)pvVar3 + uVar1);
    return;
  }
LAB_14fb87ce2:
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// _Clear_and_reserve_geometric @ 14fb87cf0

/* private: void __cdecl std::vector<class google::protobuf::FieldDescriptor const * __ptr64,class
   std::allocator<class google::protobuf::FieldDescriptor const * __ptr64>
   >::_Clear_and_reserve_geometric(unsigned __int64) __ptr64 */

void __thiscall
std::
vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
::_Clear_and_reserve_geometric
          (vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
           *this,__uint64 param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulonglong uVar3;
  void *pvVar4;
  ulonglong uVar5;
  
  if (0x1fffffffffffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  pvVar1 = *(void **)this;
  uVar3 = *(longlong *)(this + 0x10) - (longlong)pvVar1 >> 3;
  if (0x1fffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar5 = 0x1fffffffffffffff;
  }
  else {
    uVar5 = (uVar3 >> 1) + uVar3;
    if (uVar5 < param_1) {
      uVar5 = param_1;
    }
  }
  pvVar4 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    uVar3 = uVar3 * 8;
    pvVar2 = pvVar1;
    if (0xfff < uVar3) {
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14fb87dc3;
    }
    ::operator_delete(pvVar2,uVar3);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  if (0x1fffffffffffffff < uVar5) {
LAB_14fb87e04:
                    /* WARNING: Subroutine does not return */
    _Throw_bad_array_new_length();
  }
  uVar5 = uVar5 * 8;
  if (uVar5 < 0x1000) {
    if (uVar5 != 0) {
      pvVar4 = ::operator_new(uVar5);
    }
  }
  else {
    if (uVar5 + 0x27 <= uVar5) goto LAB_14fb87e04;
    pvVar1 = ::operator_new(uVar5 + 0x27);
    if (pvVar1 == (void *)0x0) {
LAB_14fb87dc3:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    pvVar4 = (void *)((longlong)pvVar1 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)pvVar4 + -8) = pvVar1;
  }
  *(void **)this = pvVar4;
  *(void **)(this + 8) = pvVar4;
  *(void **)(this + 0x10) = (void *)(uVar5 + (longlong)pvVar4);
  return;
}

// begin @ 14fb87e10

/* public: class google::protobuf::FieldDescriptor const * __ptr64 const * __ptr64 __cdecl
   std::initializer_list<class google::protobuf::FieldDescriptor const * __ptr64>::begin(void)const
   __ptr64 */

FieldDescriptor ** __thiscall
std::initializer_list<google::protobuf::FieldDescriptor_const*___ptr64>::begin
          (initializer_list<google::protobuf::FieldDescriptor_const*___ptr64> *this)

{
  return *(FieldDescriptor ***)this;
}

// size @ 14fb87e20

/* public: unsigned __int64 __cdecl std::initializer_list<class google::protobuf::FieldDescriptor
   const * __ptr64>::size(void)const __ptr64 */

__uint64 __thiscall
std::initializer_list<google::protobuf::FieldDescriptor_const*___ptr64>::size
          (initializer_list<google::protobuf::FieldDescriptor_const*___ptr64> *this)

{
  return *(longlong *)(this + 8) - *(longlong *)this >> 3;
}

// FUN_1502aca10 @ 1502aca10

void FUN_1502aca10(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x238) & 2) != 0) {
    *(uint *)(param_2 + 0x238) = *(uint *)(param_2 + 0x238) & 0xfffffffd;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x170));
  }
  return;
}

// FUN_1502acad0 @ 1502acad0

void FUN_1502acad0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x68) & 1) != 0) {
    *(uint *)(param_2 + 0x68) = *(uint *)(param_2 + 0x68) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_1502acb20 @ 1502acb20

void FUN_1502acb20(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x1e8) & 1) != 0) {
    *(uint *)(param_2 + 0x1e8) = *(uint *)(param_2 + 0x1e8) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x120));
  }
  return;
}

// FUN_1502acb60 @ 1502acb60

void FUN_1502acb60(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x1e8) & 1) != 0) {
    *(uint *)(param_2 + 0x1e8) = *(uint *)(param_2 + 0x1e8) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x110));
  }
  return;
}

// FUN_1502acba0 @ 1502acba0

void FUN_1502acba0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x160) & 2) != 0) {
    *(uint *)(param_2 + 0x160) = *(uint *)(param_2 + 0x160) & 0xfffffffd;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x88));
  }
  return;
}

// FUN_1502acc00 @ 1502acc00

void FUN_1502acc00(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 1) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x50)
              );
  }
  return;
}

