// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 86

// Span<absl::lts_20240722::str_format_internal::FormatArgImpl_const_><absl::lts_20240722::InlinedVector<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>,void,absl::lts_20240722::InlinedVector<class_absl::lts_20240722::str_format_internal::FormatArgImpl,4,class_std::allocator<class_absl::lts_20240722::str_format_internal::FormatArgImpl>_>,int> @ 1501e1760

/* WARNING: Type propagation algorithm not settling */
/* public: __cdecl absl::lts_20240722::Span<class
   absl::lts_20240722::str_format_internal::FormatArgImpl const >::Span<class
   absl::lts_20240722::str_format_internal::FormatArgImpl const ><class
   absl::lts_20240722::InlinedVector<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >,void,class
   absl::lts_20240722::InlinedVector<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >,int>(class
   absl::lts_20240722::InlinedVector<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> > const & __ptr64) __ptr64 */

Span<absl::lts_20240722::str_format_internal::FormatArgImpl_const_> * __thiscall
absl::lts_20240722::Span<absl::lts_20240722::str_format_internal::FormatArgImpl_const_>::
Span<absl::lts_20240722::str_format_internal::FormatArgImpl_const_><absl::lts_20240722::InlinedVector<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>,void,absl::lts_20240722::InlinedVector<class_absl::lts_20240722::str_format_internal::FormatArgImpl,4,class_std::allocator<class_absl::lts_20240722::str_format_internal::FormatArgImpl>_>,int>
          (Span<absl::lts_20240722::str_format_internal::FormatArgImpl_const_> *this,
          InlinedVector<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
          *param_1)

{
  ulonglong uVar1;
  Data DVar2;
  
  uVar1 = *(ulonglong *)param_1;
  DVar2.ptr = param_1 + 8;
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Load size is inaccurate */
    DVar2.ptr = *DVar2.ptr;
  }
  this->ptr_ = (FormatArgImpl *)DVar2;
  this->len_ = uVar1 >> 1;
  return this;
}

// FormatRawSinkImpl<std::basic_ostream<char,std::char_traits<char>_>,0> @ 1501e1790

/* public: __cdecl
   absl::lts_20240722::str_format_internal::FormatRawSinkImpl::FormatRawSinkImpl<class
   std::basic_ostream<char,struct std::char_traits<char> >,0>(class std::basic_ostream<char,struct
   std::char_traits<char> > * __ptr64) __ptr64 */

FormatRawSinkImpl * __thiscall
absl::lts_20240722::str_format_internal::FormatRawSinkImpl::
FormatRawSinkImpl<std::basic_ostream<char,std::char_traits<char>_>,0>
          (FormatRawSinkImpl *this,basic_ostream<char,std::char_traits<char>_> *param_1)

{
  *(basic_ostream<char,std::char_traits<char>_> **)this = param_1;
  *(code **)(this + 8) = Flush<std::basic_ostream<char,std::char_traits<char>_>_>;
  return this;
}

// FormatRawSinkImpl<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,0> @ 1501e17b0

/* public: __cdecl
   absl::lts_20240722::str_format_internal::FormatRawSinkImpl::FormatRawSinkImpl<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,0>(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64)
   __ptr64 */

FormatRawSinkImpl * __thiscall
absl::lts_20240722::str_format_internal::FormatRawSinkImpl::
FormatRawSinkImpl<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,0>
          (FormatRawSinkImpl *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)this = param_1;
  *(code **)(this + 8) =
       Flush<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>;
  return this;
}

// FormatRawSinkImpl<absl::lts_20240722::str_format_internal::BufferRawSink,0> @ 1501e17d0

/* public: __cdecl
   absl::lts_20240722::str_format_internal::FormatRawSinkImpl::FormatRawSinkImpl<class
   absl::lts_20240722::str_format_internal::BufferRawSink,0>(class
   absl::lts_20240722::str_format_internal::BufferRawSink * __ptr64) __ptr64 */

FormatRawSinkImpl * __thiscall
absl::lts_20240722::str_format_internal::FormatRawSinkImpl::
FormatRawSinkImpl<absl::lts_20240722::str_format_internal::BufferRawSink,0>
          (FormatRawSinkImpl *this,BufferRawSink *param_1)

{
  *(BufferRawSink **)this = param_1;
  *(code **)(this + 8) = Flush<absl::lts_20240722::str_format_internal::BufferRawSink>;
  return this;
}

// FormatRawSinkImpl<absl::lts_20240722::str_format_internal::FILERawSink,0> @ 1501e17f0

/* public: __cdecl
   absl::lts_20240722::str_format_internal::FormatRawSinkImpl::FormatRawSinkImpl<class
   absl::lts_20240722::str_format_internal::FILERawSink,0>(class
   absl::lts_20240722::str_format_internal::FILERawSink * __ptr64) __ptr64 */

FormatRawSinkImpl * __thiscall
absl::lts_20240722::str_format_internal::FormatRawSinkImpl::
FormatRawSinkImpl<absl::lts_20240722::str_format_internal::FILERawSink,0>
          (FormatRawSinkImpl *this,FILERawSink *param_1)

{
  *(FILERawSink **)this = param_1;
  *(code **)(this + 8) = Flush<absl::lts_20240722::str_format_internal::FILERawSink>;
  return this;
}

// Convert<absl::lts_20240722::str_format_internal::FormatArgImpl> @ 1501e1810

/* public: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImplFriend::Convert<class
   absl::lts_20240722::str_format_internal::FormatArgImpl>(class
   absl::lts_20240722::str_format_internal::FormatArgImpl,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImplFriend::
Convert<absl::lts_20240722::str_format_internal::FormatArgImpl>
          (FormatArgImpl *param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  bool bVar1;
  FormatConversionSpecImpl local_18 [2];
  
  local_18[0].conv_ = param_2->conv_;
  local_18[0].flags_ = param_2->flags_;
  local_18[0].length_mod_ = param_2->length_mod_;
  local_18[0]._3_1_ = param_2->field_0x3;
  local_18[0].width_ = param_2->width_;
  local_18[0].precision_ = param_2->precision_;
  bVar1 = (*param_1->dispatcher_)(param_1->data_,local_18,param_3);
  return bVar1;
}

// FUN_1501e1840 @ 1501e1840

ulonglong FUN_1501e1840(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  void *_Dst;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  char *_Size;
  char *pcVar7;
  char *_Src;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  longlong local_90;
  char *local_88;
  char *local_80;
  undefined8 local_78;
  code *pcStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  
  pcVar1 = (char *)*param_1;
  uStack_60 = *param_2;
  puStack_58 = (undefined8 *)param_2[1];
  local_48 = param_3;
  uStack_40 = uStack_60;
  local_38 = puStack_58;
  if (param_1[1] != -1) {
    local_88 = pcVar1;
    local_80 = (char *)param_1[1];
    local_68 = param_3;
    uVar6 = FUN_1501e1d70(&local_88,&local_68);
    return uVar6;
  }
  pcVar2 = *(char **)(pcVar1 + 8);
  _Size = (char *)0x0;
  pcVar3 = *(char **)(pcVar1 + 0x18);
  pcVar7 = *(char **)(pcVar1 + 0x10);
  _Src = pcVar2;
  puVar4 = param_3;
  do {
    if (pcVar7 == pcVar3) {
      return CONCAT71((int7)((ulonglong)pcVar2 >> 8),*pcVar1 == '\0');
    }
    _Src = _Src + (longlong)_Size;
    _Size = pcVar2 + (*(longlong *)(pcVar7 + 8) - (longlong)_Src);
    if (*pcVar7 == '\0') {
      local_68 = puVar4;
      if (_Size != (char *)0x0) {
        _Dst = (void *)param_3[3];
        param_3[2] = _Size + param_3[2];
        if (_Size < (char *)((longlong)param_3 + (0x420 - (longlong)_Dst))) {
          memcpy(_Dst,_Src,(size_t)_Size);
          param_3[3] = _Size + param_3[3];
        }
        else {
          local_90 = (longlong)_Dst + (-0x20 - (longlong)param_3);
          local_98 = param_3 + 4;
          (*(code *)param_3[1])(*param_3,&local_98);
          param_3[3] = param_3 + 4;
          local_88 = _Src;
          local_80 = _Size;
          (*(code *)param_3[1])(*param_3,&local_88);
        }
      }
    }
    else {
      local_68 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar4 >> 8),0x13);
      uVar5 = local_68;
      local_68._3_5_ = (undefined5)((ulonglong)puVar4 >> 0x18);
      local_68._0_3_ = CONCAT12(9,(short)uVar5);
      uVar6 = FUN_1501e2f60(&uStack_40,pcVar7 + 0x10,&local_68);
      param_3 = local_48;
      if ((char)uVar6 == '\0') {
LAB_1501e192a:
        return uVar6 & 0xffffffffffffff00;
      }
      local_a8 = local_68;
      local_78 = *puStack_58;
      pcStack_70 = (code *)puStack_58[1];
      local_a0 = (undefined4)uStack_60;
      uVar6 = (*pcStack_70)(local_78,&local_a8,local_48);
      if ((char)uVar6 == '\0') goto LAB_1501e192a;
    }
    pcVar7 = pcVar7 + 0x20;
    puVar4 = local_68;
  } while( true );
}

// FUN_1501e1a30 @ 1501e1a30

ulonglong FUN_1501e1a30(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  void *_Dst;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  char *_Size;
  char *pcVar7;
  char *_Src;
  char *local_98;
  char *local_90;
  undefined8 *local_88;
  longlong local_80;
  char *local_78;
  char *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_60 = *param_2;
  uStack_5c = param_2[1];
  local_58 = param_2[2];
  uStack_54 = param_2[3];
  pcVar1 = (char *)*param_1;
  local_48._0_4_ = SUB84(param_3,0);
  local_48._4_4_ = (undefined4)((ulonglong)param_3 >> 0x20);
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_40 = uStack_60;
  uStack_3c = uStack_5c;
  uStack_38 = local_58;
  uStack_34 = uStack_54;
  if (param_1[1] != -1) {
    local_78 = pcVar1;
    local_70 = (char *)param_1[1];
    local_48 = param_3;
    uVar6 = FUN_1501e2180(&local_78,&local_68);
    return uVar6;
  }
  pcVar2 = *(char **)(pcVar1 + 8);
  _Size = (char *)0x0;
  pcVar3 = *(char **)(pcVar1 + 0x18);
  pcVar7 = *(char **)(pcVar1 + 0x10);
  _Src = pcVar2;
  puVar4 = param_3;
  do {
    if (pcVar7 == pcVar3) {
      return CONCAT71((int7)((ulonglong)pcVar2 >> 8),*pcVar1 == '\0');
    }
    _Src = _Src + (longlong)_Size;
    _Size = pcVar2 + (*(longlong *)(pcVar7 + 8) - (longlong)_Src);
    if (*pcVar7 == '\0') {
      local_48 = puVar4;
      if (_Size != (char *)0x0) {
        _Dst = (void *)param_3[3];
        param_3[2] = _Size + param_3[2];
        if (_Size < (char *)((longlong)param_3 + (0x420 - (longlong)_Dst))) {
          memcpy(_Dst,_Src,(size_t)_Size);
          param_3[3] = _Size + param_3[3];
        }
        else {
          local_80 = (longlong)_Dst + (-0x20 - (longlong)param_3);
          local_88 = param_3 + 4;
          (*(code *)param_3[1])(*param_3,&local_88);
          param_3[3] = param_3 + 4;
          local_78 = _Src;
          local_70 = _Size;
          (*(code *)param_3[1])(*param_3,&local_78);
        }
      }
    }
    else {
      local_48 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar4 >> 8),0x13);
      uVar5 = local_48;
      local_48._3_5_ = (undefined5)((ulonglong)puVar4 >> 0x18);
      local_48._0_3_ = CONCAT12(9,(short)uVar5);
      uVar6 = FUN_1501e2f60(&uStack_60,pcVar7 + 0x10,&local_48);
      if (((char)uVar6 == '\0') ||
         (local_98 = _Src, local_90 = _Size, uVar6 = FUN_1501e32e0(&local_68,&local_48,&local_98),
         (char)uVar6 == '\0')) {
        return uVar6 & 0xffffffffffffff00;
      }
      param_3 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    pcVar7 = pcVar7 + 0x20;
    puVar4 = local_48;
  } while( true );
}

// Flush<std::basic_ostream<char,std::char_traits<char>_>_> @ 1501e1bf0

/* private: static void __cdecl
   absl::lts_20240722::str_format_internal::FormatRawSinkImpl::Flush<class
   std::basic_ostream<char,struct std::char_traits<char> > >(void * __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> >) */

void __cdecl
absl::lts_20240722::str_format_internal::FormatRawSinkImpl::
Flush<std::basic_ostream<char,std::char_traits<char>_>_>
          (void *param_1,basic_string_view<char,std::char_traits<char>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001501e1bf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::write(param_1,param_2->_Mydata,param_2->_Mysize)
  ;
  return;
}

// Flush<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 1501e1c10

/* private: static void __cdecl
   absl::lts_20240722::str_format_internal::FormatRawSinkImpl::Flush<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >(void *
   __ptr64,class std::basic_string_view<char,struct std::char_traits<char> >) */

void __cdecl
absl::lts_20240722::str_format_internal::FormatRawSinkImpl::
Flush<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (void *param_1,basic_string_view<char,std::char_traits<char>_> *param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (param_1,param_2->_Mydata,param_2->_Mysize);
  return;
}

// Flush<absl::lts_20240722::str_format_internal::BufferRawSink> @ 1501e1c30

/* private: static void __cdecl
   absl::lts_20240722::str_format_internal::FormatRawSinkImpl::Flush<class
   absl::lts_20240722::str_format_internal::BufferRawSink>(void * __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> >) */

void __cdecl
absl::lts_20240722::str_format_internal::FormatRawSinkImpl::
Flush<absl::lts_20240722::str_format_internal::BufferRawSink>
          (void *param_1,basic_string_view<char,std::char_traits<char>_> *param_2)

{
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mydata = param_2->_Mydata;
  local_18._Mysize = param_2->_Mysize;
  BufferRawSink::Write(param_1,&local_18);
  return;
}

// Flush<absl::lts_20240722::str_format_internal::FILERawSink> @ 1501e1c60

/* private: static void __cdecl
   absl::lts_20240722::str_format_internal::FormatRawSinkImpl::Flush<class
   absl::lts_20240722::str_format_internal::FILERawSink>(void * __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> >) */

void __cdecl
absl::lts_20240722::str_format_internal::FormatRawSinkImpl::
Flush<absl::lts_20240722::str_format_internal::FILERawSink>
          (void *param_1,basic_string_view<char,std::char_traits<char>_> *param_2)

{
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mydata = param_2->_Mydata;
  local_18._Mysize = param_2->_Mysize;
  FILERawSink::Write(param_1,&local_18);
  return;
}

// GetData<absl::lts_20240722::InlinedVector<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>_const_> @ 1501e1c90

/* class absl::lts_20240722::str_format_internal::FormatArgImpl const * __ptr64 __cdecl
   absl::lts_20240722::span_internal::GetData<class absl::lts_20240722::InlinedVector<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> > const >(class
   absl::lts_20240722::InlinedVector<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> > const & __ptr64) */

FormatArgImpl * __cdecl
absl::lts_20240722::span_internal::
GetData<absl::lts_20240722::InlinedVector<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>_const_>
          (InlinedVector<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
           *param_1)

{
  FormatArgImpl *pFVar1;
  
  pFVar1 = (FormatArgImpl *)(param_1 + 8);
  if (((byte)*param_1 & 1) != 0) {
    pFVar1 = (pFVar1->data_).ptr;
  }
  return pFVar1;
}

// GetDataImpl<absl::lts_20240722::InlinedVector<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>_const_> @ 1501e1cb0

/* class absl::lts_20240722::str_format_internal::FormatArgImpl const * __ptr64 __cdecl
   absl::lts_20240722::span_internal::GetDataImpl<class absl::lts_20240722::InlinedVector<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> > const >(class
   absl::lts_20240722::InlinedVector<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> > const & __ptr64,char) */

FormatArgImpl * __cdecl
absl::lts_20240722::span_internal::
GetDataImpl<absl::lts_20240722::InlinedVector<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>_const_>
          (InlinedVector<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
           *param_1,char param_2)

{
  FormatArgImpl *pFVar1;
  
  pFVar1 = (FormatArgImpl *)(param_1 + 8);
  if (((byte)*param_1 & 1) != 0) {
    pFVar1 = (pFVar1->data_).ptr;
  }
  return pFVar1;
}

// InvokeFlush<std::basic_ostream<char,std::char_traits<char>_>_> @ 1501e1cd0

/* void __cdecl absl::lts_20240722::str_format_internal::InvokeFlush<class
   std::basic_ostream<char,struct std::char_traits<char> > >(class std::basic_ostream<char,struct
   std::char_traits<char> > * __ptr64,class std::basic_string_view<char,struct
   std::char_traits<char> >) */

void __cdecl
absl::lts_20240722::str_format_internal::
InvokeFlush<std::basic_ostream<char,std::char_traits<char>_>_>
          (basic_ostream<char,std::char_traits<char>_> *param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001501e1cd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::write(param_1,param_2->_Mydata,param_2->_Mysize)
  ;
  return;
}

// InvokeFlush<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 1501e1cf0

/* void __cdecl absl::lts_20240722::str_format_internal::InvokeFlush<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> >) */

void __cdecl
absl::lts_20240722::str_format_internal::
InvokeFlush<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (param_1,param_2->_Mydata,param_2->_Mysize);
  return;
}

// InvokeFlush<absl::lts_20240722::str_format_internal::BufferRawSink> @ 1501e1d10

/* void __cdecl absl::lts_20240722::str_format_internal::InvokeFlush<class
   absl::lts_20240722::str_format_internal::BufferRawSink>(class
   absl::lts_20240722::str_format_internal::BufferRawSink * __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> >) */

void __cdecl
absl::lts_20240722::str_format_internal::
InvokeFlush<absl::lts_20240722::str_format_internal::BufferRawSink>
          (BufferRawSink *param_1,basic_string_view<char,std::char_traits<char>_> *param_2)

{
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mydata = param_2->_Mydata;
  local_18._Mysize = param_2->_Mysize;
  BufferRawSink::Write(param_1,&local_18);
  return;
}

// InvokeFlush<absl::lts_20240722::str_format_internal::FILERawSink> @ 1501e1d40

/* void __cdecl absl::lts_20240722::str_format_internal::InvokeFlush<class
   absl::lts_20240722::str_format_internal::FILERawSink>(class
   absl::lts_20240722::str_format_internal::FILERawSink * __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> >) */

void __cdecl
absl::lts_20240722::str_format_internal::
InvokeFlush<absl::lts_20240722::str_format_internal::FILERawSink>
          (FILERawSink *param_1,basic_string_view<char,std::char_traits<char>_> *param_2)

{
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mydata = param_2->_Mydata;
  local_18._Mysize = param_2->_Mysize;
  FILERawSink::Write(param_1,&local_18);
  return;
}

// FUN_1501e1d70 @ 1501e1d70

undefined8 FUN_1501e1d70(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  FormatConversionChar FVar2;
  undefined8 *puVar3;
  void *_Dst;
  char *pcVar4;
  bool bVar5;
  char cVar6;
  void *pvVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  byte *pbVar12;
  ulonglong _Size;
  int local_res8 [2];
  int local_res18 [2];
  int local_res20 [2];
  UnboundConversion local_118;
  byte *local_108;
  code *pcStack_100;
  FormatConversionChar local_f8;
  Flags FStack_f7;
  LengthMod LStack_f6;
  undefined1 uStack_f5;
  int iStack_f4;
  byte *local_d8;
  code *pcStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  int local_70;
  undefined8 *local_68;
  longlong local_60;
  byte *local_58;
  ulonglong local_50;
  undefined8 *local_48;
  char *local_40;
  
  pbVar8 = (byte *)*param_1;
  pbVar12 = pbVar8 + param_1[1];
  local_res8[0] = 0;
  iVar11 = local_res8[0];
joined_r0x0001501e1da1:
  do {
    if (pbVar8 == pbVar12) {
      s__[0] = s__[0];
      s__[1] = s__[1];
      return 1;
    }
    local_res8[0] = iVar11;
    pvVar7 = memchr(pbVar8,0x25,(longlong)pbVar12 - (longlong)pbVar8);
    if (pvVar7 == (void *)0x0) {
      local_d8 = pbVar8;
      pcStack_d0 = (code *)((longlong)pbVar12 - (longlong)pbVar8);
      uVar9 = FUN_1501e2c10(param_2,&local_d8);
      return uVar9;
    }
    puVar3 = (undefined8 *)*param_2;
    _Size = (longlong)pvVar7 - (longlong)pbVar8;
    if (_Size != 0) {
      _Dst = (void *)puVar3[3];
      puVar3[2] = puVar3[2] + _Size;
      if (_Size < (ulonglong)((longlong)puVar3 + (0x420 - (longlong)_Dst))) {
        memcpy(_Dst,pbVar8,_Size);
        puVar3[3] = puVar3[3] + _Size;
        iVar11 = local_res8[0];
      }
      else {
        local_60 = (longlong)_Dst + (-0x20 - (longlong)puVar3);
        local_68 = puVar3 + 4;
        (*(code *)puVar3[1])(*puVar3,&local_68);
        puVar3[3] = puVar3 + 4;
        local_58 = pbVar8;
        local_50 = _Size;
        (*(code *)puVar3[1])(*puVar3,&local_58);
        iVar11 = local_res8[0];
      }
    }
    pbVar8 = (byte *)((longlong)pvVar7 + 1);
    if (pbVar12 <= pbVar8) {
      return 0;
    }
    FVar2 = *(FormatConversionChar *)
             ((longlong)&absl::lts_20240722::str_format_internal::ConvTagHolder::value +
             (ulonglong)*pbVar8);
    if ((~(FVar2 >> 7) & 1) == 0) {
      if (*pbVar8 == 0x25) {
        pcVar4 = (char *)puVar3[3];
        puVar3[2] = puVar3[2] + 1;
        local_d8 = (byte *)0x150a3f2d0;
        pcStack_d0 = (code *)&DAT_00000001;
        if ((ulonglong)((longlong)puVar3 + (0x420 - (longlong)pcVar4)) < 2) {
          local_40 = pcVar4 + (-0x20 - (longlong)puVar3);
          local_48 = puVar3 + 4;
          (*(code *)puVar3[1])(*puVar3,&local_48);
          puVar3[3] = puVar3 + 4;
          local_108 = local_d8;
          pcStack_100 = pcStack_d0;
          (*(code *)puVar3[1])(*puVar3,&local_108);
        }
        else {
          *pcVar4 = s__[0];
          puVar3[3] = puVar3[3] + 1;
        }
        pbVar8 = (byte *)((longlong)pvVar7 + 2);
        iVar11 = local_res8[0];
        goto joined_r0x0001501e1da1;
      }
      local_118.width.value_ = -1;
      local_118.precision.value_ = -1;
      local_118.flags = kBasic;
      local_118.length_mod = none;
      local_118.conv = v|s;
      pbVar8 = (byte *)absl::lts_20240722::str_format_internal::ConsumeUnboundConversionNoInline
                                 ((char *)pbVar8,(char *)pbVar12,&local_118,local_res8);
      if (pbVar8 == (byte *)0x0) {
        return 0;
      }
      LStack_f6 = none;
      if ((ulonglong)param_2[2] <= (ulonglong)(longlong)(local_118.arg_position + -1)) {
        return 0;
      }
      puVar10 = (undefined8 *)((longlong)(local_118.arg_position + -1) * 0x10 + param_2[1]);
      if (local_118.flags == kBasic) {
        FStack_f7 = kBasic;
        local_70 = -1;
        iStack_f4 = -1;
      }
      else {
        bVar5 = false;
        local_res18[0] = local_118.width.value_;
        if (local_118.width.value_ < -1) {
          if ((ulonglong)param_2[2] < (longlong)-local_118.width.value_ - 1U) {
            return 0;
          }
          puVar1 = (undefined8 *)
                   (param_2[1] + -0x10 + ((longlong)-local_118.width.value_ - 1U) * 0x10);
          local_108 = (byte *)*puVar1;
          pcStack_100 = (code *)puVar1[1];
          local_90 = 0;
          local_c8 = 0x90013;
          local_98 = 0x90013;
          cVar6 = (*pcStack_100)(local_108,&local_98,local_res18);
          if (cVar6 == '\0') {
            return 0;
          }
          if (local_res18[0] < 0) {
            bVar5 = true;
            if (local_res18[0] < -0x7fffffff) {
              local_res18[0] = -0x7fffffff;
            }
            local_res18[0] = -local_res18[0];
          }
        }
        local_res20[0] = local_118.precision.value_;
        if (local_118.precision.value_ < -1) {
          if ((ulonglong)param_2[2] < (longlong)-local_118.precision.value_ - 1U) {
            return 0;
          }
          puVar1 = (undefined8 *)
                   (param_2[1] + -0x10 + ((longlong)-local_118.precision.value_ - 1U) * 0x10);
          local_108 = (byte *)*puVar1;
          pcStack_100 = (code *)puVar1[1];
          local_80 = 0;
          local_b8 = 0x90013;
          local_88 = 0x90013;
          cVar6 = (*pcStack_100)(local_108,&local_88,local_res20);
          if (cVar6 == '\0') {
            return 0;
          }
        }
        FStack_f7 = local_118.flags;
        if (bVar5) {
          FStack_f7 = local_118.flags | kLeft;
        }
        LStack_f6 = local_118.length_mod;
        local_70 = local_res20[0];
        iStack_f4 = local_res18[0];
      }
      local_108 = (byte *)*puVar10;
      pcStack_100 = (code *)puVar10[1];
      local_f8 = local_118.conv;
      local_78 = CONCAT44(iStack_f4,
                          CONCAT13(uStack_f5,CONCAT12(LStack_f6,CONCAT11(FStack_f7,local_118.conv)))
                         );
      cVar6 = (*(code *)puVar10[1])(local_108,&local_78,puVar3);
    }
    else {
      if (iVar11 < 0) {
        return 0;
      }
      local_res8[0] = iVar11 + 1;
      LStack_f6 = none;
      pbVar8 = (byte *)((longlong)pvVar7 + 2);
      if ((ulonglong)param_2[2] <= (longlong)local_res8[0] - 1U) {
        return 0;
      }
      puVar10 = (undefined8 *)(((longlong)local_res8[0] - 1U) * 0x10 + param_2[1]);
      FStack_f7 = kBasic;
      iStack_f4 = -1;
      local_108 = (byte *)*puVar10;
      pcStack_100 = (code *)puVar10[1];
      local_a0 = 0xffffffff;
      local_a8 = CONCAT44(0xffffffff,CONCAT13(uStack_f5,CONCAT12(9,(ushort)FVar2)));
      local_f8 = FVar2;
      cVar6 = (*pcStack_100)(local_108,&local_a8,puVar3);
    }
    iVar11 = local_res8[0];
    if (cVar6 == '\0') {
      s__[0] = s__[0];
      s__[1] = s__[1];
      return 0;
    }
  } while( true );
}

// FUN_1501e2180 @ 1501e2180

undefined8 FUN_1501e2180(undefined8 *param_1,longlong *param_2)

{
  byte *pbVar1;
  FormatConversionChar FVar2;
  undefined8 *puVar3;
  void *_Dst;
  longlong lVar4;
  char *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  void *pvVar9;
  byte *_Buf;
  undefined8 uVar10;
  byte *pbVar11;
  ulonglong _Size;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_res8 [2];
  int local_res18 [2];
  int local_res20 [2];
  UnboundConversion local_118;
  FormatConversionChar local_108;
  Flags local_107;
  LengthMod local_106;
  undefined8 local_104;
  longlong local_f8;
  byte *local_e8;
  undefined8 uStack_e0;
  byte *local_d8;
  size_t sStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 *local_88;
  longlong local_80;
  byte *local_78;
  ulonglong local_70;
  byte *local_68;
  undefined8 uStack_60;
  byte *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  char *local_40;
  
  _Buf = (byte *)*param_1;
  pbVar11 = _Buf + param_1[1];
  local_res8[0] = 0;
  iVar8 = local_res8[0];
joined_r0x0001501e21b1:
  do {
    if (_Buf == pbVar11) {
      s__[0] = s__[0];
      s__[1] = s__[1];
      return 1;
    }
    local_res8[0] = iVar8;
    pvVar9 = memchr(_Buf,0x25,(longlong)pbVar11 - (longlong)_Buf);
    if (pvVar9 == (void *)0x0) {
      local_d8 = _Buf;
      sStack_d0 = (longlong)pbVar11 - (longlong)_Buf;
      uVar10 = FUN_1501e2cc0(param_2,&local_d8);
      return uVar10;
    }
    puVar3 = (undefined8 *)*param_2;
    _Size = (longlong)pvVar9 - (longlong)_Buf;
    if (_Size != 0) {
      _Dst = (void *)puVar3[3];
      puVar3[2] = puVar3[2] + _Size;
      if (_Size < (ulonglong)((longlong)puVar3 + (0x420 - (longlong)_Dst))) {
        memcpy(_Dst,_Buf,_Size);
        puVar3[3] = puVar3[3] + _Size;
        iVar8 = local_res8[0];
      }
      else {
        local_80 = (longlong)_Dst + (-0x20 - (longlong)puVar3);
        local_88 = puVar3 + 4;
        (*(code *)puVar3[1])(*puVar3,&local_88);
        puVar3[3] = puVar3 + 4;
        local_78 = _Buf;
        local_70 = _Size;
        (*(code *)puVar3[1])(*puVar3,&local_78);
        iVar8 = local_res8[0];
      }
    }
    pbVar1 = (byte *)((longlong)pvVar9 + 1);
    if (pbVar11 <= pbVar1) {
      return 0;
    }
    FVar2 = *(FormatConversionChar *)
             ((longlong)&absl::lts_20240722::str_format_internal::ConvTagHolder::value +
             (ulonglong)*pbVar1);
    if ((~(FVar2 >> 7) & 1) == 0) {
      if (*pbVar1 == 0x25) {
        pcVar5 = (char *)puVar3[3];
        puVar3[2] = puVar3[2] + 1;
        local_d8 = (byte *)0x150a3f2d0;
        sStack_d0 = 1;
        if ((ulonglong)((longlong)puVar3 + (0x420 - (longlong)pcVar5)) < 2) {
          local_40 = pcVar5 + (-0x20 - (longlong)puVar3);
          local_48 = puVar3 + 4;
          (*(code *)puVar3[1])(*puVar3,&local_48);
          puVar3[3] = puVar3 + 4;
          local_e8 = local_d8;
          uStack_e0 = (code *)sStack_d0;
          (*(code *)puVar3[1])(*puVar3,&local_e8);
        }
        else {
          *pcVar5 = s__[0];
          puVar3[3] = puVar3[3] + 1;
        }
        _Buf = (byte *)((longlong)pvVar9 + 2);
        iVar8 = local_res8[0];
        goto joined_r0x0001501e21b1;
      }
      local_118.width.value_ = -1;
      local_118.precision.value_ = -1;
      local_118.flags = kBasic;
      local_118.length_mod = none;
      local_118.conv = v|s;
      _Buf = (byte *)absl::lts_20240722::str_format_internal::ConsumeUnboundConversionNoInline
                               ((char *)pbVar1,(char *)pbVar11,&local_118,local_res8);
      if (_Buf == (byte *)0x0) {
        return 0;
      }
      uStack_50 = _Buf + (-1 - (longlong)pvVar9);
      local_106 = none;
      iVar8 = local_118.arg_position + -1;
      if ((ulonglong)param_2[2] <= (ulonglong)(longlong)iVar8) {
        return 0;
      }
      lVar4 = param_2[1];
      local_58 = pbVar1;
      if (local_118.flags == kBasic) {
        local_107 = kBasic;
        local_104 = 0xffffffffffffffff;
      }
      else {
        bVar6 = false;
        local_res18[0] = local_118.width.value_;
        if (local_118.width.value_ < -1) {
          if ((ulonglong)param_2[2] < (longlong)-local_118.width.value_ - 1U) {
            return 0;
          }
          puVar3 = (undefined8 *)
                   (param_2[1] + -0x10 + ((longlong)-local_118.width.value_ - 1U) * 0x10);
          local_e8 = (byte *)*puVar3;
          uStack_e0 = (code *)puVar3[1];
          local_a0 = 0;
          local_c8 = 0x90013;
          local_a8 = 0x90013;
          cVar7 = (*uStack_e0)(local_e8,&local_a8,local_res18);
          if (cVar7 == '\0') {
            return 0;
          }
          if (local_res18[0] < 0) {
            bVar6 = true;
            if (local_res18[0] < -0x7fffffff) {
              local_res18[0] = -0x7fffffff;
            }
            local_res18[0] = -local_res18[0];
          }
        }
        local_res20[0] = local_118.precision.value_;
        if (local_118.precision.value_ < -1) {
          if ((ulonglong)param_2[2] < (longlong)-local_118.precision.value_ - 1U) {
            return 0;
          }
          puVar3 = (undefined8 *)
                   (param_2[1] + -0x10 + ((longlong)-local_118.precision.value_ - 1U) * 0x10);
          local_e8 = (byte *)*puVar3;
          uStack_e0 = (code *)puVar3[1];
          local_90 = 0;
          local_b8 = 0x90013;
          local_98 = 0x90013;
          cVar7 = (*uStack_e0)(local_e8,&local_98,local_res20);
          if (cVar7 == '\0') {
            return 0;
          }
        }
        local_104 = CONCAT44(local_res20[0],local_res18[0]);
        local_107 = local_118.flags;
        if (bVar6) {
          local_107 = local_118.flags | kLeft;
        }
        local_106 = local_118.length_mod;
      }
      uVar12 = (undefined4)uStack_50;
      uVar13 = uStack_50._4_4_;
      local_108 = local_118.conv;
      local_f8 = (longlong)iVar8 * 0x10 + lVar4;
      local_e8 = local_58;
    }
    else {
      if (iVar8 < 0) {
        return 0;
      }
      local_res8[0] = iVar8 + 1;
      _Buf = (byte *)((longlong)pvVar9 + 2);
      uStack_60 = 1;
      local_106 = none;
      if ((ulonglong)param_2[2] <= (ulonglong)(longlong)iVar8) {
        return 0;
      }
      uStack_60._0_4_ = 1;
      uStack_60._4_4_ = 0;
      local_107 = kBasic;
      local_104 = 0xffffffffffffffff;
      uVar12 = (undefined4)uStack_60;
      uVar13 = uStack_60._4_4_;
      local_108 = FVar2;
      local_f8 = (longlong)iVar8 * 0x10 + param_2[1];
      local_68 = pbVar1;
      local_e8 = pbVar1;
    }
    uStack_e0 = (code *)CONCAT44(uVar13,uVar12);
    cVar7 = FUN_1501e32e0(param_2,&local_108,&local_e8);
    iVar8 = local_res8[0];
    if (cVar7 == '\0') {
      return 0;
    }
  } while( true );
}

// FUN_1501e2580 @ 1501e2580

ulonglong FUN_1501e2580(char *param_1,longlong *param_2)

{
  void *pvVar1;
  char *pcVar2;
  undefined8 *puVar3;
  void *_Dst;
  ulonglong uVar4;
  ulonglong _Size;
  char *pcVar5;
  void *_Src;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 *local_78;
  longlong local_70;
  void *local_68;
  ulonglong local_60;
  undefined8 local_58;
  code *pcStack_50;
  undefined1 local_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined5 uStack_45;
  undefined4 local_40;
  undefined8 *local_38;
  
  pvVar1 = *(void **)(param_1 + 8);
  _Size = 0;
  pcVar5 = *(char **)(param_1 + 0x10);
  pcVar2 = *(char **)(param_1 + 0x18);
  _Src = pvVar1;
  do {
    if (pcVar5 == pcVar2) {
      return CONCAT71((int7)((ulonglong)pvVar1 >> 8),*param_1 == '\0');
    }
    _Src = (void *)((longlong)_Src + _Size);
    _Size = (*(longlong *)(pcVar5 + 8) - (longlong)_Src) + (longlong)pvVar1;
    if (*pcVar5 == '\0') {
      puVar3 = (undefined8 *)*param_2;
      if (_Size != 0) {
        _Dst = (void *)puVar3[3];
        puVar3[2] = puVar3[2] + _Size;
        if (_Size < (ulonglong)((longlong)puVar3 + (0x420 - (longlong)_Dst))) {
          memcpy(_Dst,_Src,_Size);
          puVar3[3] = puVar3[3] + _Size;
        }
        else {
          local_70 = (longlong)_Dst + (-0x20 - (longlong)puVar3);
          local_78 = puVar3 + 4;
          (*(code *)puVar3[1])(*puVar3,&local_78);
          puVar3[3] = puVar3 + 4;
          local_68 = _Src;
          local_60 = _Size;
          (*(code *)puVar3[1])(*puVar3,&local_68);
        }
      }
    }
    else {
      local_48 = 0x13;
      uStack_46 = 9;
      uVar4 = FUN_1501e2f60(param_2 + 1,pcVar5 + 0x10,&local_48);
      if ((char)uVar4 == '\0') {
LAB_1501e2641:
        return uVar4 & 0xffffffffffffff00;
      }
      local_88 = CONCAT53(uStack_45,CONCAT12(uStack_46,CONCAT11(uStack_47,local_48)));
      local_58 = *local_38;
      pcStack_50 = (code *)local_38[1];
      local_80 = local_40;
      uVar4 = (*pcStack_50)(local_58,&local_88,*param_2);
      if ((char)uVar4 == '\0') goto LAB_1501e2641;
    }
    pcVar5 = pcVar5 + 0x20;
  } while( true );
}

// FUN_1501e2700 @ 1501e2700

ulonglong FUN_1501e2700(char *param_1,longlong *param_2)

{
  void *pvVar1;
  char *pcVar2;
  undefined8 *puVar3;
  void *_Dst;
  ulonglong uVar4;
  ulonglong _Size;
  char *pcVar5;
  void *_Src;
  void *local_78;
  ulonglong local_70;
  undefined8 *local_68;
  longlong local_60;
  void *local_58;
  ulonglong local_50;
  undefined1 local_48 [2];
  undefined1 local_46;
  
  pvVar1 = *(void **)(param_1 + 8);
  _Size = 0;
  pcVar5 = *(char **)(param_1 + 0x10);
  pcVar2 = *(char **)(param_1 + 0x18);
  _Src = pvVar1;
  do {
    if (pcVar5 == pcVar2) {
      return CONCAT71((int7)((ulonglong)pvVar1 >> 8),*param_1 == '\0');
    }
    _Src = (void *)((longlong)_Src + _Size);
    _Size = (*(longlong *)(pcVar5 + 8) - (longlong)_Src) + (longlong)pvVar1;
    if (*pcVar5 == '\0') {
      puVar3 = (undefined8 *)*param_2;
      if (_Size != 0) {
        _Dst = (void *)puVar3[3];
        puVar3[2] = puVar3[2] + _Size;
        if (_Size < (ulonglong)((longlong)puVar3 + (0x420 - (longlong)_Dst))) {
          memcpy(_Dst,_Src,_Size);
          puVar3[3] = puVar3[3] + _Size;
        }
        else {
          local_60 = (longlong)_Dst + (-0x20 - (longlong)puVar3);
          local_68 = puVar3 + 4;
          (*(code *)puVar3[1])(*puVar3,&local_68);
          puVar3[3] = puVar3 + 4;
          local_58 = _Src;
          local_50 = _Size;
          (*(code *)puVar3[1])(*puVar3,&local_58);
        }
      }
    }
    else {
      local_48[0] = 0x13;
      local_46 = 9;
      uVar4 = FUN_1501e2f60(param_2 + 1,pcVar5 + 0x10,local_48);
      if (((char)uVar4 == '\0') ||
         (local_78 = _Src, local_70 = _Size, uVar4 = FUN_1501e32e0(param_2,local_48,&local_78),
         (char)uVar4 == '\0')) {
        return uVar4 & 0xffffffffffffff00;
      }
    }
    pcVar5 = pcVar5 + 0x20;
  } while( true );
}

// ToInt<absl::lts_20240722::str_format_internal::FormatArgImpl> @ 1501e2860

/* public: static bool __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImplFriend::ToInt<class
   absl::lts_20240722::str_format_internal::FormatArgImpl>(class
   absl::lts_20240722::str_format_internal::FormatArgImpl,int * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatArgImplFriend::
ToInt<absl::lts_20240722::str_format_internal::FormatArgImpl>(FormatArgImpl *param_1,int *param_2)

{
  bool bVar1;
  FormatConversionSpecImpl local_18 [2];
  
  local_18[0].conv_ = v|s;
  local_18[0].flags_ = kBasic;
  local_18[0].length_mod_ = none;
  local_18[0]._3_1_ = 0;
  local_18[0].width_ = 0;
  local_18[0].precision_ = 0;
  bVar1 = (*param_1->dispatcher_)(param_1->data_,local_18,param_2);
  return bVar1;
}

// BoundConversion @ 1501e2900

/* public: __cdecl absl::lts_20240722::str_format_internal::BoundConversion::BoundConversion(void)
   __ptr64 */

BoundConversion * __thiscall
absl::lts_20240722::str_format_internal::BoundConversion::BoundConversion(BoundConversion *this)

{
  *this = (BoundConversion)0x13;
  this[2] = (BoundConversion)0x9;
  return this;
}

// BufferRawSink @ 1501e2920

/* public: __cdecl absl::lts_20240722::str_format_internal::BufferRawSink::BufferRawSink(char *
   __ptr64,unsigned __int64) __ptr64 */

BufferRawSink * __thiscall
absl::lts_20240722::str_format_internal::BufferRawSink::BufferRawSink
          (BufferRawSink *this,char *param_1,__uint64 param_2)

{
  *(char **)this = param_1;
  *(__uint64 *)(this + 8) = param_2;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// FILERawSink @ 1501e2950

/* public: __cdecl absl::lts_20240722::str_format_internal::FILERawSink::FILERawSink(struct _iobuf *
   __ptr64) __ptr64 */

FILERawSink * __thiscall
absl::lts_20240722::str_format_internal::FILERawSink::FILERawSink(FILERawSink *this,_iobuf *param_1)

{
  *(_iobuf **)this = param_1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// FormatConversionSpecImpl @ 1501e2970

/* public: __cdecl
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl::FormatConversionSpecImpl(void)
   __ptr64 */

FormatConversionSpecImpl * __thiscall
absl::lts_20240722::str_format_internal::FormatConversionSpecImpl::FormatConversionSpecImpl
          (FormatConversionSpecImpl *this)

{
  this->conv_ = v|s;
  this->length_mod_ = none;
  return this;
}

// FormatSinkImpl @ 1501e2990

/* public: __cdecl absl::lts_20240722::str_format_internal::FormatSinkImpl::FormatSinkImpl(class
   absl::lts_20240722::str_format_internal::FormatRawSinkImpl) __ptr64 */

FormatSinkImpl * __thiscall
absl::lts_20240722::str_format_internal::FormatSinkImpl::FormatSinkImpl
          (FormatSinkImpl *this,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(undefined8 *)(this + 0x10) = 0;
  *(FormatSinkImpl **)(this + 0x18) = this + 0x20;
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = uVar2;
  return this;
}

// InputValue @ 1501e29b0

/* public: __cdecl
   absl::lts_20240722::str_format_internal::UnboundConversion::InputValue::InputValue(void) __ptr64
    */

InputValue * __thiscall
absl::lts_20240722::str_format_internal::UnboundConversion::InputValue::InputValue(InputValue *this)

{
  this->value_ = -1;
  return this;
}

// UnboundConversion @ 1501e29d0

/* public: __cdecl
   absl::lts_20240722::str_format_internal::UnboundConversion::UnboundConversion(void) __ptr64 */

UnboundConversion * __thiscall
absl::lts_20240722::str_format_internal::UnboundConversion::UnboundConversion
          (UnboundConversion *this)

{
  this->width = -1;
  this->precision = -1;
  this->flags = kBasic;
  this->length_mod = none;
  this->conv = v|s;
  return this;
}

// ~FormatSinkImpl @ 1501e29f0

/* public: __cdecl absl::lts_20240722::str_format_internal::FormatSinkImpl::~FormatSinkImpl(void)
   __ptr64 */

void __thiscall
absl::lts_20240722::str_format_internal::FormatSinkImpl::~FormatSinkImpl(FormatSinkImpl *this)

{
  FormatSinkImpl *local_18;
  longlong local_10;
  
  local_10 = (*(longlong *)(this + 0x18) - (longlong)this) + -0x20;
  local_18 = this + 0x20;
  (**(code **)(this + 8))(*(undefined8 *)this,&local_18);
  *(FormatSinkImpl **)(this + 0x18) = this + 0x20;
  return;
}

// operator<< @ 1501e2a40

/* class std::basic_ostream<char,struct std::char_traits<char> > & __ptr64 __cdecl
   absl::lts_20240722::str_format_internal::operator<<(class std::basic_ostream<char,struct
   std::char_traits<char> > & __ptr64,enum absl::lts_20240722::FormatConversionChar) */

basic_ostream<char,std::char_traits<char>_> * __cdecl
absl::lts_20240722::str_format_internal::operator<<
          (basic_ostream<char,struct_std::char_traits<char>_> *param_1,FormatConversionChar param_2)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  char cVar2;
  
  if (param_2 != (v|s)) {
    if (param_2 == c) {
      pbVar1 = std::operator<<<std::char_traits<char>_>
                         ((basic_ostream<char,std::char_traits<char>_> *)param_1,'c');
      return pbVar1;
    }
    if (param_2 == s) {
      pbVar1 = std::operator<<<std::char_traits<char>_>
                         ((basic_ostream<char,std::char_traits<char>_> *)param_1,'s');
      return pbVar1;
    }
    if (param_2 == d) {
      pbVar1 = std::operator<<<std::char_traits<char>_>
                         ((basic_ostream<char,std::char_traits<char>_> *)param_1,'d');
      return pbVar1;
    }
    if (param_2 == i) {
      pbVar1 = std::operator<<<std::char_traits<char>_>
                         ((basic_ostream<char,std::char_traits<char>_> *)param_1,'i');
      return pbVar1;
    }
    if (param_2 == o) {
      pbVar1 = std::operator<<<std::char_traits<char>_>
                         ((basic_ostream<char,std::char_traits<char>_> *)param_1,'o');
      return pbVar1;
    }
    if (param_2 == u) {
      pbVar1 = std::operator<<<std::char_traits<char>_>
                         ((basic_ostream<char,std::char_traits<char>_> *)param_1,'u');
      return pbVar1;
    }
    if (param_2 == x) {
      pbVar1 = std::operator<<<std::char_traits<char>_>
                         ((basic_ostream<char,std::char_traits<char>_> *)param_1,'x');
      return pbVar1;
    }
    if (param_2 == X) {
      pbVar1 = std::operator<<<std::char_traits<char>_>
                         ((basic_ostream<char,std::char_traits<char>_> *)param_1,'X');
      return pbVar1;
    }
    if (param_2 == f) {
      pbVar1 = std::operator<<<std::char_traits<char>_>
                         ((basic_ostream<char,std::char_traits<char>_> *)param_1,'f');
      return pbVar1;
    }
    if (param_2 == F) {
      pbVar1 = std::operator<<<std::char_traits<char>_>
                         ((basic_ostream<char,std::char_traits<char>_> *)param_1,'F');
      return pbVar1;
    }
    if (param_2 == e) {
      pbVar1 = std::operator<<<std::char_traits<char>_>
                         ((basic_ostream<char,std::char_traits<char>_> *)param_1,'e');
      return pbVar1;
    }
    if (param_2 == E) {
      pbVar1 = std::operator<<<std::char_traits<char>_>
                         ((basic_ostream<char,std::char_traits<char>_> *)param_1,'E');
      return pbVar1;
    }
    if (param_2 == g) {
      pbVar1 = std::operator<<<std::char_traits<char>_>
                         ((basic_ostream<char,std::char_traits<char>_> *)param_1,'g');
      return pbVar1;
    }
    if (param_2 == G) {
      pbVar1 = std::operator<<<std::char_traits<char>_>
                         ((basic_ostream<char,std::char_traits<char>_> *)param_1,'G');
      return pbVar1;
    }
    if (param_2 == a) {
      pbVar1 = std::operator<<<std::char_traits<char>_>
                         ((basic_ostream<char,std::char_traits<char>_> *)param_1,'a');
      return pbVar1;
    }
    if (param_2 == A) {
      pbVar1 = std::operator<<<std::char_traits<char>_>
                         ((basic_ostream<char,std::char_traits<char>_> *)param_1,'A');
      return pbVar1;
    }
    if (param_2 == n) {
      pbVar1 = std::operator<<<std::char_traits<char>_>
                         ((basic_ostream<char,std::char_traits<char>_> *)param_1,'n');
      return pbVar1;
    }
    if (param_2 == p) {
      pbVar1 = std::operator<<<std::char_traits<char>_>
                         ((basic_ostream<char,std::char_traits<char>_> *)param_1,'p');
      return pbVar1;
    }
    cVar2 = 'v';
    if (param_2 == v) goto LAB_1501e2b29;
  }
  cVar2 = '?';
LAB_1501e2b29:
  pbVar1 = std::operator<<<std::char_traits<char>_>
                     ((basic_ostream<char,std::char_traits<char>_> *)param_1,cVar2);
  return pbVar1;
}

// operator[] @ 1501e2b40

/* public: class absl::lts_20240722::str_format_internal::FormatArgImpl const & __ptr64 __cdecl
   absl::lts_20240722::Span<class absl::lts_20240722::str_format_internal::FormatArgImpl const
   >::operator[](unsigned __int64)const __ptr64 */

FormatArgImpl * __thiscall
absl::lts_20240722::Span<absl::lts_20240722::str_format_internal::FormatArgImpl_const_>::operator[]
          (Span<absl::lts_20240722::str_format_internal::FormatArgImpl_const_> *this,
          __uint64 param_1)

{
  return this->ptr_ + param_1;
}

// operator| @ 1501e2b60

/* enum absl::lts_20240722::str_format_internal::Flags __cdecl
   absl::lts_20240722::str_format_internal::operator|(enum
   absl::lts_20240722::str_format_internal::Flags,enum
   absl::lts_20240722::str_format_internal::Flags) */

Flags __cdecl absl::lts_20240722::str_format_internal::operator|(Flags param_1,Flags param_2)

{
  return param_1 | param_2;
}

// AbslFormatFlush @ 1501e2b70

/* void __cdecl absl::lts_20240722::str_format_internal::AbslFormatFlush(class
   std::basic_ostream<char,struct std::char_traits<char> > * __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> >) */

void __cdecl
absl::lts_20240722::str_format_internal::AbslFormatFlush
          (basic_ostream<char,std::char_traits<char>_> *param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001501e2b77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::write(param_1,param_2->_Mydata,param_2->_Mysize)
  ;
  return;
}

// AbslFormatFlush @ 1501e2b90

/* void __cdecl absl::lts_20240722::str_format_internal::AbslFormatFlush(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> >) */

void __cdecl
absl::lts_20240722::str_format_internal::AbslFormatFlush
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (param_1,param_2->_Mydata,param_2->_Mysize);
  return;
}

// AbslFormatFlush @ 1501e2bb0

/* void __cdecl absl::lts_20240722::str_format_internal::AbslFormatFlush(class
   absl::lts_20240722::str_format_internal::BufferRawSink * __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> >) */

void __cdecl
absl::lts_20240722::str_format_internal::AbslFormatFlush
          (BufferRawSink *param_1,basic_string_view<char,std::char_traits<char>_> *param_2)

{
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mydata = param_2->_Mydata;
  local_18._Mysize = param_2->_Mysize;
  BufferRawSink::Write(param_1,&local_18);
  return;
}

// AbslFormatFlush @ 1501e2be0

/* void __cdecl absl::lts_20240722::str_format_internal::AbslFormatFlush(class
   absl::lts_20240722::str_format_internal::FILERawSink * __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> >) */

void __cdecl
absl::lts_20240722::str_format_internal::AbslFormatFlush
          (FILERawSink *param_1,basic_string_view<char,std::char_traits<char>_> *param_2)

{
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mydata = param_2->_Mydata;
  local_18._Mysize = param_2->_Mysize;
  FILERawSink::Write(param_1,&local_18);
  return;
}

// FUN_1501e2c10 @ 1501e2c10

undefined8 FUN_1501e2c10(longlong *param_1,undefined8 *param_2)

{
  ulonglong _Size;
  undefined8 *puVar1;
  void *_Dst;
  undefined8 *local_18;
  longlong lStack_10;
  
  _Size = param_2[1];
  puVar1 = (undefined8 *)*param_1;
  if (_Size != 0) {
    _Dst = (void *)puVar1[3];
    puVar1[2] = puVar1[2] + _Size;
    if ((ulonglong)((longlong)puVar1 + (0x420 - (longlong)_Dst)) <= _Size) {
      lStack_10 = (longlong)_Dst + (-0x20 - (longlong)puVar1);
      local_18 = puVar1 + 4;
      (*(code *)puVar1[1])(*puVar1,&local_18);
      local_18 = (undefined8 *)*param_2;
      lStack_10 = param_2[1];
      puVar1[3] = puVar1 + 4;
      (*(code *)puVar1[1])(*puVar1,&local_18);
      return 1;
    }
    memcpy(_Dst,(void *)*param_2,_Size);
    puVar1[3] = puVar1[3] + _Size;
  }
  return 1;
}

// FUN_1501e2cc0 @ 1501e2cc0

undefined8 FUN_1501e2cc0(longlong *param_1,undefined8 *param_2)

{
  ulonglong _Size;
  undefined8 *puVar1;
  void *_Dst;
  undefined8 *local_18;
  longlong lStack_10;
  
  _Size = param_2[1];
  puVar1 = (undefined8 *)*param_1;
  if (_Size != 0) {
    _Dst = (void *)puVar1[3];
    puVar1[2] = puVar1[2] + _Size;
    if ((ulonglong)((longlong)puVar1 + (0x420 - (longlong)_Dst)) <= _Size) {
      lStack_10 = (longlong)_Dst + (-0x20 - (longlong)puVar1);
      local_18 = puVar1 + 4;
      (*(code *)puVar1[1])(*puVar1,&local_18);
      local_18 = (undefined8 *)*param_2;
      lStack_10 = param_2[1];
      puVar1[3] = puVar1 + 4;
      (*(code *)puVar1[1])(*puVar1,&local_18);
      return 1;
    }
    memcpy(_Dst,(void *)*param_2,_Size);
    puVar1[3] = puVar1[3] + _Size;
  }
  return 1;
}

// FUN_1501e2d70 @ 1501e2d70

void FUN_1501e2d70(longlong *param_1,undefined8 *param_2)

{
  ulonglong _Size;
  undefined8 *puVar1;
  void *_Dst;
  undefined8 *local_18;
  longlong lStack_10;
  
  _Size = param_2[1];
  puVar1 = (undefined8 *)*param_1;
  if (_Size != 0) {
    _Dst = (void *)puVar1[3];
    puVar1[2] = puVar1[2] + _Size;
    if ((ulonglong)((longlong)puVar1 + (0x420 - (longlong)_Dst)) <= _Size) {
      lStack_10 = (longlong)_Dst + (-0x20 - (longlong)puVar1);
      local_18 = puVar1 + 4;
      (*(code *)puVar1[1])(*puVar1,&local_18);
      local_18 = (undefined8 *)*param_2;
      lStack_10 = param_2[1];
      puVar1[3] = puVar1 + 4;
      (*(code *)puVar1[1])(*puVar1,&local_18);
      return;
    }
    memcpy(_Dst,(void *)*param_2,_Size);
    puVar1[3] = puVar1[3] + _Size;
  }
  return;
}

// FUN_1501e2e20 @ 1501e2e20

void FUN_1501e2e20(longlong *param_1,undefined8 *param_2)

{
  ulonglong _Size;
  undefined8 *puVar1;
  void *_Dst;
  undefined8 *local_18;
  longlong lStack_10;
  
  _Size = param_2[1];
  puVar1 = (undefined8 *)*param_1;
  if (_Size != 0) {
    _Dst = (void *)puVar1[3];
    puVar1[2] = puVar1[2] + _Size;
    if ((ulonglong)((longlong)puVar1 + (0x420 - (longlong)_Dst)) <= _Size) {
      lStack_10 = (longlong)_Dst + (-0x20 - (longlong)puVar1);
      local_18 = puVar1 + 4;
      (*(code *)puVar1[1])(*puVar1,&local_18);
      local_18 = (undefined8 *)*param_2;
      lStack_10 = param_2[1];
      puVar1[3] = puVar1 + 4;
      (*(code *)puVar1[1])(*puVar1,&local_18);
      return;
    }
    memcpy(_Dst,(void *)*param_2,_Size);
    puVar1[3] = puVar1[3] + _Size;
  }
  return;
}

// AppendPack @ 1501e2ed0

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > & __ptr64
   __cdecl absl::lts_20240722::str_format_internal::AppendPack(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64,class
   absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl,class
   absl::lts_20240722::Span<class absl::lts_20240722::str_format_internal::FormatArgImpl const >) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::str_format_internal::AppendPack
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          undefined4 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  bool bVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_38;
  code *pcStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = *param_3;
  uStack_20 = param_3[1];
  uVar1 = (param_1->_Mypair)._Myval2._Mysize;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  pcStack_30 = FormatRawSinkImpl::
               Flush<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>;
  local_38 = param_1;
  bVar2 = FormatUntyped(&local_38,&local_18,&local_28);
  if (!bVar2) {
    if ((param_1->_Mypair)._Myval2._Mysize < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::_String_val<std::_Simple_types<char>_>::_Xran();
    }
    pbVar3 = param_1;
    if (0xf < (param_1->_Mypair)._Myval2._Myres) {
      pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_1->_Mypair)._Myval2._Bx._Ptr;
    }
    (param_1->_Mypair)._Myval2._Mysize = uVar1;
    (pbVar3->_Mypair)._Myval2._Bx._Buf[uVar1] = '\0';
  }
  return param_1;
}

// FUN_1501e2f60 @ 1501e2f60

ulonglong FUN_1501e2f60(longlong *param_1,int *param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  byte bVar5;
  longlong lVar6;
  uint local_res8 [2];
  uint local_res10 [2];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  code *pcStack_30;
  
  uVar3 = *param_2 - 1;
  uVar4 = (ulonglong)uVar3;
  if ((ulonglong)param_1[1] <= (ulonglong)(longlong)(int)uVar3) goto LAB_1501e30da;
  lVar6 = (longlong)(int)uVar3 * 0x10 + *param_1;
  if ((char)param_2[3] == '\0') {
    param_3[1] = 0;
    *(undefined8 *)(param_3 + 4) = 0xffffffffffffffff;
    *param_3 = *(undefined1 *)((longlong)param_2 + 0xe);
    *(longlong *)(param_3 + 0x10) = lVar6;
    return 1;
  }
  local_res8[0] = param_2[1];
  uVar4 = (ulonglong)local_res8[0];
  bVar2 = false;
  if ((int)local_res8[0] < -1) {
    uVar3 = ~local_res8[0];
    uVar4 = (ulonglong)uVar3;
    if ((ulonglong)param_1[1] < (ulonglong)(longlong)(int)uVar3) goto LAB_1501e30da;
    puVar1 = (undefined8 *)(*param_1 + -0x10 + (longlong)(int)uVar3 * 0x10);
    local_38 = *puVar1;
    pcStack_30 = (code *)puVar1[1];
    local_48 = 0x90013;
    local_40 = 0;
    uVar4 = (*pcStack_30)(local_38,&local_48,local_res8);
    if ((char)uVar4 == '\0') goto LAB_1501e30da;
    uVar4 = (ulonglong)local_res8[0];
    if ((int)local_res8[0] < 0) {
      bVar2 = true;
      if ((int)local_res8[0] < -0x7fffffff) {
        local_res8[0] = 0x80000001;
      }
      local_res8[0] = -local_res8[0];
      uVar4 = (ulonglong)local_res8[0];
    }
  }
  local_res10[0] = param_2[2];
  if ((int)local_res10[0] < -1) {
    if ((ulonglong)(longlong)(int)~local_res10[0] <= (ulonglong)param_1[1]) {
      puVar1 = (undefined8 *)(*param_1 + -0x10 + (longlong)(int)~local_res10[0] * 0x10);
      local_38 = *puVar1;
      pcStack_30 = (code *)puVar1[1];
      local_48 = 0x90013;
      local_40 = 0;
      uVar4 = (*pcStack_30)(local_38,&local_48,local_res10);
      if ((char)uVar4 != '\0') {
        uVar4 = (ulonglong)local_res8[0];
        goto LAB_1501e308f;
      }
    }
LAB_1501e30da:
    return uVar4 & 0xffffffffffffff00;
  }
LAB_1501e308f:
  *(int *)(param_3 + 4) = (int)uVar4;
  *(uint *)(param_3 + 8) = local_res10[0];
  bVar5 = *(byte *)(param_2 + 3) | 1;
  if (!bVar2) {
    bVar5 = *(byte *)(param_2 + 3);
  }
  param_3[1] = bVar5;
  param_3[2] = *(undefined1 *)((longlong)param_2 + 0xd);
  *param_3 = *(undefined1 *)((longlong)param_2 + 0xe);
  *(longlong *)(param_3 + 0x10) = lVar6;
  return 1;
}

// FUN_1501e3100 @ 1501e3100

ulonglong FUN_1501e3100(int param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  code *pcStack_10;
  
  if ((ulonglong)param_3[1] < (ulonglong)(longlong)param_1) {
    return in_RAX & 0xffffffffffffff00;
  }
  puVar1 = (undefined8 *)(*param_3 + -0x10 + (longlong)param_1 * 0x10);
  local_18 = *puVar1;
  pcStack_10 = (code *)puVar1[1];
  local_28 = 0x90013;
  local_20 = 0;
  uVar2 = (*pcStack_10)(local_18,&local_28,param_2);
  return uVar2;
}

// BindWithPack @ 1501e3170

/* bool __cdecl absl::lts_20240722::str_format_internal::BindWithPack(struct
   absl::lts_20240722::str_format_internal::UnboundConversion const * __ptr64,class
   absl::lts_20240722::Span<class absl::lts_20240722::str_format_internal::FormatArgImpl const
   >,class absl::lts_20240722::str_format_internal::BoundConversion * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::BindWithPack
          (UnboundConversion *param_1,
          Span<absl::lts_20240722::str_format_internal::FormatArgImpl_const_> *param_2,
          BoundConversion *param_3)

{
  bool bVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_2->ptr_;
  uStack_14 = *(undefined4 *)((longlong)&param_2->ptr_ + 4);
  uStack_10 = (undefined4)param_2->len_;
  uStack_c = *(undefined4 *)((longlong)&param_2->len_ + 4);
  bVar1 = (bool)FUN_1501e2f60(&local_18,param_1);
  return bVar1;
}

// FUN_1501e31a0 @ 1501e31a0

void FUN_1501e31a0(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  code *pcStack_30;
  undefined1 local_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined5 uStack_25;
  undefined4 local_20;
  undefined8 *local_18;
  
  local_28 = 0x13;
  uStack_26 = 9;
  cVar1 = FUN_1501e2f60(param_1 + 1,param_2,&local_28);
  if (cVar1 == '\0') {
    return;
  }
  local_48 = CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28)));
  local_38 = *local_18;
  pcStack_30 = (code *)local_18[1];
  local_40 = local_20;
  (*pcStack_30)(local_38,&local_48,*param_1);
  return;
}

// FUN_1501e3220 @ 1501e3220

void FUN_1501e3220(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [2];
  undefined1 local_26;
  
  local_28[0] = 0x13;
  local_26 = 9;
  cVar1 = FUN_1501e2f60(param_1 + 8,param_2,local_28);
  if (cVar1 == '\0') {
    return;
  }
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1501e32e0(param_1,local_28,&local_38);
  return;
}

// FUN_1501e3290 @ 1501e3290

void FUN_1501e3290(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  code *pcStack_10;
  
  local_28 = *param_2;
  local_18 = *(undefined8 *)param_2[2];
  pcStack_10 = (code *)((undefined8 *)param_2[2])[1];
  local_20 = *(undefined4 *)(param_2 + 1);
  (*pcStack_10)(local_18,&local_28,*param_1);
  return;
}

// FUN_1501e32e0 @ 1501e32e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1501e32e0(longlong *param_1,char *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  void *_Dst;
  bool bVar3;
  _Bxty *p_Var4;
  basic_ostream<char,std::char_traits<char>_> *pbVar5;
  char *pcVar6;
  char *pcVar7;
  Data DVar8;
  undefined8 uVar9;
  char cVar10;
  ulong64 uVar11;
  ulonglong uVar12;
  undefined1 auStack_218 [32];
  _Bxty *local_1f8;
  code *pcStack_1f0;
  Data local_1e8;
  ulonglong uStack_1e0;
  _Bxty *local_1d8;
  char *pcStack_1d0;
  undefined8 local_1c8;
  char *local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [104];
  char *local_138;
  uint local_130;
  basic_ios<char,std::char_traits<char>_> local_120;
  _Bxty local_b8;
  ulonglong local_a8;
  ulonglong uStack_a0;
  _Bxty local_98;
  ulong64 local_88;
  ulonglong local_80;
  char **local_78;
  ulonglong local_70;
  Data local_68;
  longlong local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_218;
  local_1f8 = (_Bxty *)((ulonglong)local_1f8 & 0xffffffff00000000);
  local_1b8 = "%d";
  uStack_1b0 = 2;
  local_1a8 = (undefined1  [8])
              &std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::
               _vbtable_;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(&local_120);
  local_1f8 = (_Bxty *)CONCAT44(local_1f8._4_4_,1);
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_1a8,
             (basic_streambuf<char,std::char_traits<char>_> *)local_1a0,false);
  *(undefined ***)(local_1a8 + *(int *)((longlong)local_1a8 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&uStack_1b0 + (longlong)*(int *)((longlong)local_1a8 + 4) + 4) =
       *(int *)((longlong)local_1a8 + 4) + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_1a0);
  local_1a0._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  local_138 = (char *)0x0;
  local_130 = 4;
  absl::lts_20240722::str_format_internal::FlagsToString
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_98,param_2[1]
            );
  local_b8._Ptr = (char *)**(undefined8 **)(param_2 + 0x10);
  local_b8._8_8_ = (*(undefined8 **)(param_2 + 0x10))[1];
  local_1f8 = &local_b8;
  local_78 = &local_1b8;
  local_1e8.ptr = &local_70;
  local_70 = 0;
  absl::lts_20240722::inlined_vector_internal::
  ConstructElements<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::str_format_internal::FormatArgImpl_const*___ptr64>_>
            ((allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *)&local_70,
             (FormatArgImpl *)&local_68,
             (IteratorValueAdapter<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::str_format_internal::FormatArgImpl_const*___ptr64>
              *)&local_1f8,1);
  local_70 = local_70 + 2;
  p_Var4 = (_Bxty *)std::operator<<<std::char_traits<char>_>
                              ((basic_ostream<char,std::char_traits<char>_> *)local_1a8,"{");
  uStack_1e0 = local_70 >> 1;
  local_1e8.ptr = &local_68;
  if ((local_70 & 1) != 0) {
    local_1e8 = local_68;
  }
  local_1d8 = (_Bxty *)*local_78;
  pcStack_1d0 = local_78[1];
  pcStack_1f0 = absl::lts_20240722::str_format_internal::FormatRawSinkImpl::
                Flush<std::basic_ostream<char,std::char_traits<char>_>_>;
  local_1f8 = p_Var4;
  bVar3 = absl::lts_20240722::str_format_internal::FormatUntyped(&local_1f8,&local_1d8);
  if (!bVar3) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               (p_Var4->_Buf + *(int *)(p_Var4->_Ptr + 4)),2,false);
  }
  pbVar5 = std::operator<<<std::char_traits<char>_>
                     ((basic_ostream<char,std::char_traits<char>_> *)p_Var4,":");
  uVar9 = &local_98;
  if (0xf < local_80) {
    uVar9 = local_98._Ptr;
  }
  std::_Insert_string<char,std::char_traits<char>,unsigned___int64>(pbVar5,(char *)uVar9,local_88);
  if ((local_70 != 0) && ((local_70 & 1) != 0)) {
    uVar11 = local_60 * 0x10;
    DVar8 = local_68;
    if (0xfff < uVar11) {
      uVar11 = uVar11 + 0x27;
      DVar8 = (Data)((Data *)((longlong)local_68.ptr + -8))->ptr;
      if ((char *)0x1f < (char *)((longlong)local_68.ptr + (-8 - (longlong)DVar8))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(DVar8.ptr,uVar11);
  }
  if (0xf < local_80) {
    uVar11 = local_80 + 1;
    uVar9 = local_98._Ptr;
    if (0xfff < uVar11) {
      uVar11 = local_80 + 0x28;
      uVar9 = *(undefined8 *)(local_98._Ptr + -8);
      if ((char *)0x1f < local_98._Ptr + (-8 - uVar9)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete((void *)uVar9,uVar11);
  }
  if (-1 < *(int *)(param_2 + 4)) {
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)local_1a8,*(int *)(param_2 + 4));
  }
  if (-1 < *(int *)(param_2 + 8)) {
    pbVar5 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)local_1a8,".");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,*(int *)(param_2 + 8));
  }
  cVar1 = *param_2;
  if (cVar1 != '\x13') {
    if (cVar1 == '\0') {
      cVar10 = 'c';
      goto LAB_1501e3664;
    }
    if (cVar1 == '\x01') {
      cVar10 = 's';
      goto LAB_1501e3664;
    }
    if (cVar1 == '\x02') {
      cVar10 = 'd';
      goto LAB_1501e3664;
    }
    if (cVar1 == '\x03') {
      cVar10 = 'i';
      goto LAB_1501e3664;
    }
    if (cVar1 == '\x04') {
      cVar10 = 'o';
      goto LAB_1501e3664;
    }
    if (cVar1 == '\x05') {
      cVar10 = 'u';
      goto LAB_1501e3664;
    }
    if (cVar1 == '\x06') {
      cVar10 = 'x';
      goto LAB_1501e3664;
    }
    if (cVar1 == '\a') {
      cVar10 = 'X';
      goto LAB_1501e3664;
    }
    if (cVar1 == '\b') {
      cVar10 = 'f';
      goto LAB_1501e3664;
    }
    if (cVar1 == '\t') {
      cVar10 = 'F';
      goto LAB_1501e3664;
    }
    if (cVar1 == '\n') {
      cVar10 = 'e';
      goto LAB_1501e3664;
    }
    if (cVar1 == '\v') {
      cVar10 = 'E';
      goto LAB_1501e3664;
    }
    if (cVar1 == '\f') {
      cVar10 = 'g';
      goto LAB_1501e3664;
    }
    if (cVar1 == '\r') {
      cVar10 = 'G';
      goto LAB_1501e3664;
    }
    if (cVar1 == '\x0e') {
      cVar10 = 'a';
      goto LAB_1501e3664;
    }
    if (cVar1 == '\x0f') {
      cVar10 = 'A';
      goto LAB_1501e3664;
    }
    if (cVar1 == '\x10') {
      cVar10 = 'n';
      goto LAB_1501e3664;
    }
    if (cVar1 == '\x11') {
      cVar10 = 'p';
      goto LAB_1501e3664;
    }
    cVar10 = 'v';
    if (cVar1 == '\x12') goto LAB_1501e3664;
  }
  cVar10 = '?';
LAB_1501e3664:
  pbVar5 = std::operator<<<std::char_traits<char>_>
                     ((basic_ostream<char,std::char_traits<char>_> *)local_1a8,cVar10);
  std::operator<<<std::char_traits<char>_>(pbVar5,"}");
  local_b8._8_8_ = 0;
  local_a8 = ___xmm_000000000000000f0000000000000000;
  uStack_a0 = _UNK_15076add8;
  local_b8._Ptr = (char *)0x0;
  local_1f8 = (_Bxty *)CONCAT44(local_1f8._4_4_,0xb);
  local_1d8 = (_Bxty *)0x0;
  pcStack_1d0 = (char *)0x0;
  local_1c8 = 0;
  if ((((byte)local_130 & 0x22) == 2) ||
     (pcVar6 = std::basic_streambuf<char,std::char_traits<char>_>::pptr
                         ((basic_streambuf<char,std::char_traits<char>_> *)local_1a0),
     pcVar6 == (char *)0x0)) {
    pcVar6 = pcStack_1d0;
    p_Var4 = local_1d8;
    if (((local_130 & 4) == 0) &&
       (pcVar7 = std::basic_streambuf<char,std::char_traits<char>_>::gptr
                           ((basic_streambuf<char,std::char_traits<char>_> *)local_1a0),
       pcVar6 = pcStack_1d0, p_Var4 = local_1d8, pcVar7 != (char *)0x0)) {
      p_Var4 = (_Bxty *)std::basic_streambuf<char,std::char_traits<char>_>::eback
                                  ((basic_streambuf<char,std::char_traits<char>_> *)local_1a0);
      pcVar6 = std::basic_streambuf<char,std::char_traits<char>_>::egptr
                         ((basic_streambuf<char,std::char_traits<char>_> *)local_1a0);
      pcVar6 = (char *)((longlong)pcVar6 - (longlong)p_Var4);
    }
  }
  else {
    p_Var4 = (_Bxty *)std::basic_streambuf<char,std::char_traits<char>_>::pbase
                                ((basic_streambuf<char,std::char_traits<char>_> *)local_1a0);
    pcVar6 = std::basic_streambuf<char,std::char_traits<char>_>::pptr
                       ((basic_streambuf<char,std::char_traits<char>_> *)local_1a0);
    if (pcVar6 < local_138) {
      pcVar6 = local_138;
    }
    std::basic_streambuf<char,std::char_traits<char>_>::epptr
              ((basic_streambuf<char,std::char_traits<char>_> *)local_1a0);
    pcVar6 = (char *)((longlong)pcVar6 - (longlong)p_Var4);
  }
  if (p_Var4 != (_Bxty *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_b8,
               p_Var4->_Buf,(ulong64)pcVar6);
  }
  uVar12 = local_a8;
  local_1f8 = &local_b8;
  if (0xf < uStack_a0) {
    local_1f8 = (_Bxty *)local_b8._Ptr;
  }
  pcStack_1f0 = (code *)local_a8;
  puVar2 = (undefined8 *)*param_1;
  if (local_a8 != 0) {
    puVar2[2] = puVar2[2] + local_a8;
    _Dst = (void *)puVar2[3];
    if (local_a8 < (ulonglong)((longlong)puVar2 + (0x420 - (longlong)_Dst))) {
      memcpy(_Dst,local_1f8,local_a8);
      puVar2[3] = puVar2[3] + uVar12;
    }
    else {
      uStack_1e0 = (longlong)_Dst + (-0x20 - (longlong)puVar2);
      local_1e8.ptr = puVar2 + 4;
      (*(code *)puVar2[1])(*puVar2,&local_1e8);
      ((Data *)(puVar2 + 3))->ptr = puVar2 + 4;
      local_1d8 = local_1f8;
      pcStack_1d0 = (char *)pcStack_1f0;
      (*(code *)puVar2[1])(*puVar2,&local_1d8);
    }
  }
  if (0xf < uStack_a0) {
    uVar12 = uStack_a0 + 1;
    uVar9 = local_b8._Ptr;
    if (0xfff < uVar12) {
      uVar12 = uStack_a0 + 0x28;
      uVar9 = *(undefined8 *)(local_b8._Ptr + -8);
      if ((char *)0x1f < local_b8._Ptr + (-8 - uVar9)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete((void *)uVar9,uVar12);
  }
  *(undefined ***)(local_1a8 + *(int *)((longlong)local_1a8 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&uStack_1b0 + (longlong)*(int *)((longlong)local_1a8 + 4) + 4) =
       *(int *)((longlong)local_1a8 + 4) + -0x88;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)local_1a0);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_1a0 + 8));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_120)
  ;
  return 1;
}

// FlagsToString @ 1501e3890

/* public: static class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > __cdecl
   absl::lts_20240722::str_format_internal::FormatConversionSpecImplFriend::FlagsToString(class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl const & __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::str_format_internal::FormatConversionSpecImplFriend::FlagsToString
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          FormatConversionSpecImpl *param_1)

{
  str_format_internal::FlagsToString(__return_storage_ptr__,param_1->flags_);
  return __return_storage_ptr__;
}

// FormatConversionCharToChar @ 1501e38c0

/* char __cdecl absl::lts_20240722::str_format_internal::FormatConversionCharToChar(enum
   absl::lts_20240722::FormatConversionChar) */

char __cdecl
absl::lts_20240722::str_format_internal::FormatConversionCharToChar(FormatConversionChar param_1)

{
  char cVar1;
  
  if (param_1 == (v|s)) {
    return '\0';
  }
  if (param_1 == c) {
    return 'c';
  }
  if (param_1 == s) {
    return 's';
  }
  if (param_1 == d) {
    return 'd';
  }
  if (param_1 == i) {
    return 'i';
  }
  if (param_1 == o) {
    return 'o';
  }
  if (param_1 == u) {
    return 'u';
  }
  if (param_1 == x) {
    return 'x';
  }
  if (param_1 == X) {
    return 'X';
  }
  if (param_1 == f) {
    return 'f';
  }
  if (param_1 == F) {
    return 'F';
  }
  if (param_1 == e) {
    return 'e';
  }
  if (param_1 == E) {
    return 'E';
  }
  if (param_1 == g) {
    return 'g';
  }
  if (param_1 == G) {
    return 'G';
  }
  if (param_1 == a) {
    return 'a';
  }
  if (param_1 == A) {
    return 'A';
  }
  if (param_1 == n) {
    return 'n';
  }
  if (param_1 == p) {
    return 'p';
  }
  cVar1 = '\0';
  if (param_1 == v) {
    cVar1 = 'v';
  }
  return cVar1;
}

// FormatPack @ 1501e3970

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::str_format_internal::FormatPack(class
   absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl,class
   absl::lts_20240722::Span<class absl::lts_20240722::str_format_internal::FormatArgImpl const >) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::str_format_internal::FormatPack
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  bool bVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_38;
  code *pcStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  local_28 = *param_3;
  uStack_20 = param_3[1];
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  pcStack_30 = FormatRawSinkImpl::
               Flush<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>;
  local_38 = __return_storage_ptr__;
  bVar1 = FormatUntyped(&local_38,&local_18,&local_28,param_4,1);
  if (!bVar1) {
    pbVar2 = __return_storage_ptr__;
    if (0xf < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
      pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
    (pbVar2->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  }
  return __return_storage_ptr__;
}

// FormatUntyped @ 1501e3a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* bool __cdecl absl::lts_20240722::str_format_internal::FormatUntyped(class
   absl::lts_20240722::str_format_internal::FormatRawSinkImpl,class
   absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl,class
   absl::lts_20240722::Span<class absl::lts_20240722::str_format_internal::FormatArgImpl const >) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatUntyped
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  void *_Dst;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char cVar6;
  char *_Size;
  undefined8 *puVar7;
  char *pcVar8;
  char *_Src;
  undefined1 uVar9;
  undefined1 auStack_508 [32];
  char *local_4e8;
  char *local_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 *local_4b8;
  undefined8 uStack_4b0;
  undefined8 *local_4a8;
  char *local_498;
  undefined8 *local_488;
  undefined4 local_480;
  undefined8 *local_478;
  longlong local_470;
  undefined8 local_468;
  code *pcStack_460;
  undefined8 local_458;
  code *pcStack_450;
  undefined8 local_448;
  char *local_440;
  char local_438 [1024];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_508;
  local_458 = *param_1;
  pcStack_450 = (code *)param_1[1];
  _Size = (char *)0x0;
  local_448 = 0;
  local_440 = local_438;
  pcVar3 = (char *)*param_2;
  uStack_4d0 = *param_3;
  puStack_4c8 = (undefined8 *)param_3[1];
  uStack_4b0 = uStack_4d0;
  local_4a8 = puStack_4c8;
  if (param_2[1] == -1) {
    puVar7 = &local_458;
    pcVar1 = *(char **)(pcVar3 + 8);
    pcVar2 = *(char **)(pcVar3 + 0x18);
    puVar4 = puVar7;
    local_4b8 = puVar7;
    _Src = pcVar1;
    local_498 = pcVar3;
    for (pcVar8 = *(char **)(pcVar3 + 0x10); local_4d8 = puVar4, pcVar8 != pcVar2;
        pcVar8 = pcVar8 + 0x20) {
      _Src = _Src + (longlong)_Size;
      _Size = pcVar1 + (*(longlong *)(pcVar8 + 8) - (longlong)_Src);
      if (*pcVar8 != '\0') {
        local_4d8 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar4 >> 8),0x13);
        uVar5 = local_4d8;
        local_4d8._3_5_ = (undefined5)((ulonglong)puVar4 >> 0x18);
        local_4d8._0_3_ = CONCAT12(9,(short)uVar5);
        cVar6 = FUN_1501e2f60(&uStack_4b0,pcVar8 + 0x10,&local_4d8);
        puVar7 = local_4b8;
        if (cVar6 != '\0') {
          local_468 = *puStack_4c8;
          pcStack_460 = (code *)puStack_4c8[1];
          local_488 = local_4d8;
          local_480 = (undefined4)uStack_4d0;
          cVar6 = (*pcStack_460)(local_468,&local_488,local_4b8);
          if (cVar6 != '\0') goto LAB_1501e3bb4;
        }
        uVar9 = 0;
        goto LAB_1501e3c0d;
      }
      if (_Size != (char *)0x0) {
        puVar7[2] = _Size + puVar7[2];
        _Dst = (void *)puVar7[3];
        if (_Size < (char *)((longlong)puVar7 + (0x420 - (longlong)_Dst))) {
          memcpy(_Dst,_Src,(size_t)_Size);
          puVar7[3] = _Size + puVar7[3];
        }
        else {
          local_470 = (longlong)_Dst + (-0x20 - (longlong)puVar7);
          local_478 = puVar7 + 4;
          (*(code *)puVar7[1])(*puVar7,&local_478);
          puVar7[3] = puVar7 + 4;
          local_4e8 = _Src;
          local_4e0 = _Size;
          (*(code *)puVar7[1])(*puVar7,&local_4e8);
        }
      }
LAB_1501e3bb4:
      puVar4 = local_4d8;
    }
    uVar9 = *local_498 == '\0';
  }
  else {
    local_4d8 = &local_458;
    local_4e8 = pcVar3;
    local_4e0 = (char *)param_2[1];
    local_4b8 = local_4d8;
    uVar9 = FUN_1501e1d70(&local_4e8,&local_4d8);
  }
LAB_1501e3c0d:
  local_4e0 = local_440 + (-0x20 - (longlong)&local_458);
  local_4e8 = local_438;
  (*pcStack_450)(local_458,&local_4e8);
  return (bool)uVar9;
}

// FprintF @ 1501e3c70

/* int __cdecl absl::lts_20240722::str_format_internal::FprintF(struct _iobuf * __ptr64,class
   absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl,class
   absl::lts_20240722::Span<class absl::lts_20240722::str_format_internal::FormatArgImpl const >) */

int __cdecl
absl::lts_20240722::str_format_internal::FprintF
          (undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  undefined8 *local_58;
  code *pcStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_48 = *param_3;
  uStack_40 = param_3[1];
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_20 = 0;
  local_18 = 0;
  local_58 = &local_28;
  pcStack_50 = FormatRawSinkImpl::Flush<absl::lts_20240722::str_format_internal::FILERawSink>;
  local_28 = param_1;
  bVar2 = FormatUntyped(&local_58,&local_38,&local_48);
  iVar1 = local_20;
  if (!bVar2) {
    piVar3 = _errno();
    *piVar3 = 0x16;
    return -1;
  }
  if (local_20 != 0) {
    piVar3 = _errno();
    *piVar3 = iVar1;
    return -1;
  }
  if (0x7fffffff < local_18) {
    piVar3 = _errno();
    *piVar3 = 0x1b;
    local_18 = 0xffffffff;
  }
  return (int)local_18;
}

// GetAllocatedData @ 1501e3d40

/* public: class absl::lts_20240722::str_format_internal::FormatArgImpl const * __ptr64 __cdecl
   absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >::GetAllocatedData(void)const __ptr64 */

FormatArgImpl * __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
::GetAllocatedData(Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
                   *this)

{
  return (this->data_).allocated.allocated_data;
}

// GetInlinedData @ 1501e3d50

/* public: class absl::lts_20240722::str_format_internal::FormatArgImpl const * __ptr64 __cdecl
   absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >::GetInlinedData(void)const __ptr64 */

FormatArgImpl * __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
::GetInlinedData(Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
                 *this)

{
  return (FormatArgImpl *)&this->data_;
}

// GetTagForChar @ 1501e3d60

/* class absl::lts_20240722::str_format_internal::ConvTag __cdecl
   absl::lts_20240722::str_format_internal::GetTagForChar(char) */

ConvTag __cdecl absl::lts_20240722::str_format_internal::GetTagForChar(char param_1)

{
  undefined7 in_register_00000009;
  byte in_DL;
  
  *(undefined1 *)CONCAT71(in_register_00000009,param_1) =
       *(undefined1 *)((longlong)&ConvTagHolder::value + (ulonglong)in_DL);
  return (ConvTag)param_1;
}

// Print @ 1501e3d80

/* public: class std::basic_ostream<char,struct std::char_traits<char> > & __ptr64 __cdecl
   absl::lts_20240722::str_format_internal::Streamable::Print(class std::basic_ostream<char,struct
   std::char_traits<char> > & __ptr64)const __ptr64 */

basic_ostream<char,std::char_traits<char>_> * __thiscall
absl::lts_20240722::str_format_internal::Streamable::Print
          (Streamable *this,basic_ostream<char,struct_std::char_traits<char>_> *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  basic_ostream<char,struct_std::char_traits<char>_> *local_28;
  code *pcStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puVar1 = *(undefined4 **)this;
  local_18 = *puVar1;
  uStack_14 = puVar1[1];
  uStack_10 = puVar1[2];
  uStack_c = puVar1[3];
  pcStack_20 = FormatRawSinkImpl::Flush<std::basic_ostream<char,std::char_traits<char>_>_>;
  local_28 = param_1;
  bVar2 = FormatUntyped(&local_28,&local_18);
  if (!bVar2) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               (param_1 + *(int *)(*(longlong *)param_1 + 4)),2,false);
  }
  return (basic_ostream<char,std::char_traits<char>_> *)param_1;
}

// SetConversionChar @ 1501e3e20

/* public: static void __cdecl
   absl::lts_20240722::str_format_internal::FormatConversionSpecImplFriend::SetConversionChar(enum
   absl::lts_20240722::FormatConversionChar,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl * __ptr64) */

void __cdecl
absl::lts_20240722::str_format_internal::FormatConversionSpecImplFriend::SetConversionChar
          (FormatConversionChar param_1,FormatConversionSpecImpl *param_2)

{
  param_2->conv_ = param_1;
  return;
}

// SetFlags @ 1501e3e30

/* public: static void __cdecl
   absl::lts_20240722::str_format_internal::FormatConversionSpecImplFriend::SetFlags(enum
   absl::lts_20240722::str_format_internal::Flags,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl * __ptr64) */

void __cdecl
absl::lts_20240722::str_format_internal::FormatConversionSpecImplFriend::SetFlags
          (Flags param_1,FormatConversionSpecImpl *param_2)

{
  param_2->flags_ = param_1;
  return;
}

// SetLengthMod @ 1501e3e40

/* public: static void __cdecl
   absl::lts_20240722::str_format_internal::FormatConversionSpecImplFriend::SetLengthMod(enum
   absl::lts_20240722::LengthMod,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl * __ptr64) */

void __cdecl
absl::lts_20240722::str_format_internal::FormatConversionSpecImplFriend::SetLengthMod
          (LengthMod param_1,FormatConversionSpecImpl *param_2)

{
  param_2->length_mod_ = param_1;
  return;
}

// SetPrecision @ 1501e3e50

/* public: static void __cdecl
   absl::lts_20240722::str_format_internal::FormatConversionSpecImplFriend::SetPrecision(int,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl * __ptr64) */

void __cdecl
absl::lts_20240722::str_format_internal::FormatConversionSpecImplFriend::SetPrecision
          (int param_1,FormatConversionSpecImpl *param_2)

{
  param_2->precision_ = param_1;
  return;
}

// SetWidth @ 1501e3e60

/* public: static void __cdecl
   absl::lts_20240722::str_format_internal::FormatConversionSpecImplFriend::SetWidth(int,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl * __ptr64) */

void __cdecl
absl::lts_20240722::str_format_internal::FormatConversionSpecImplFriend::SetWidth
          (int param_1,FormatConversionSpecImpl *param_2)

{
  param_2->width_ = param_1;
  return;
}

// SnprintF @ 1501e3e70

/* int __cdecl absl::lts_20240722::str_format_internal::SnprintF(char * __ptr64,unsigned
   __int64,class absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl,class
   absl::lts_20240722::Span<class absl::lts_20240722::str_format_internal::FormatArgImpl const >) */

int __cdecl
absl::lts_20240722::str_format_internal::SnprintF
          (longlong param_1,longlong param_2,undefined4 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  bool bVar2;
  int *piVar3;
  ulonglong uVar4;
  longlong *local_58;
  code *pcStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_48 = *param_4;
  uStack_40 = param_4[1];
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  uVar1 = param_2 - 1;
  local_18 = 0;
  local_20 = uVar1;
  if (param_2 == 0) {
    local_20 = 0;
  }
  local_58 = &local_28;
  pcStack_50 = FormatRawSinkImpl::Flush<absl::lts_20240722::str_format_internal::BufferRawSink>;
  local_28 = param_1;
  bVar2 = FormatUntyped(&local_58,&local_38,&local_48);
  if (!bVar2) {
    piVar3 = _errno();
    *piVar3 = 0x16;
    return -1;
  }
  if (param_2 != 0) {
    uVar4 = local_18;
    if (uVar1 < local_18) {
      uVar4 = uVar1;
    }
    *(undefined1 *)(uVar4 + param_1) = 0;
  }
  return (int)local_18;
}

// Summarize @ 1501e3f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::str_format_internal::Summarize(class
   absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl,class
   absl::lts_20240722::Span<class absl::lts_20240722::str_format_internal::FormatArgImpl const >) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::str_format_internal::Summarize
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          undefined8 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  char **ppcVar2;
  undefined8 uVar3;
  char ***pppcVar4;
  char cVar5;
  char **ppcVar6;
  ulong64 uVar7;
  char ***pppcVar8;
  char *pcVar9;
  char *pcVar10;
  char **_Src;
  undefined1 auStack_538 [32];
  char **local_518;
  char *local_510;
  void **local_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  char **local_4e8;
  code *pcStack_4e0;
  void ***local_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined8 local_4c8;
  void **local_4a8;
  char *local_4a0;
  void ***local_498;
  longlong local_490;
  char *local_488;
  undefined8 uStack_480;
  ulong64 local_478;
  ulong64 uStack_470;
  char **local_468;
  code *pcStack_460;
  undefined8 local_458;
  void **local_450;
  void *local_448 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_538;
  pcVar9 = (char *)0x0;
  uStack_480 = 0;
  local_478 = ___xmm_000000000000000f0000000000000000;
  uStack_470 = _UNK_15076add8;
  local_488 = (char *)0x0;
  local_4e8 = &local_488;
  pcStack_4e0 = FormatRawSinkImpl::
                Flush<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>;
  pcStack_460 = FormatRawSinkImpl::
                Flush<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>;
  local_458 = 0;
  local_450 = local_448;
  ppcVar2 = (char **)*param_2;
  uVar3 = *param_3;
  uStack_4f0 = param_3[1];
  uStack_4f8._0_4_ = (undefined4)uVar3;
  uStack_4f8._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_4c8 = uStack_4f0;
  local_468 = local_4e8;
  if (param_2[1] == -1) {
    pppcVar8 = &local_468;
    _Src = (char **)ppcVar2[1];
    pcVar1 = ppcVar2[3];
    pppcVar4 = pppcVar8;
    local_4d8 = pppcVar8;
    ppcVar6 = _Src;
    local_508 = _Src;
    local_4e8 = ppcVar2;
    uStack_4d0 = (undefined4)uStack_4f8;
    uStack_4cc = uStack_4f8._4_4_;
    for (pcVar10 = ppcVar2[2]; uStack_4f8 = uVar3, local_500 = pppcVar4, pcVar10 != pcVar1;
        pcVar10 = pcVar10 + 0x20) {
      _Src = (char **)((longlong)_Src + (longlong)pcVar9);
      pcVar9 = (char *)((longlong)ppcVar6 + (*(longlong *)(pcVar10 + 8) - (longlong)_Src));
      if (*pcVar10 != '\0') {
        local_500 = (char ***)CONCAT71((int7)((ulonglong)pppcVar4 >> 8),0x13);
        uVar3 = local_500;
        local_500._3_5_ = (undefined5)((ulonglong)pppcVar4 >> 0x18);
        local_500._0_3_ = CONCAT12(9,(short)uVar3);
        cVar5 = FUN_1501e2f60(&uStack_4d0,pcVar10 + 0x10,&local_500);
        if (cVar5 != '\0') {
          local_4a8 = _Src;
          local_4a0 = pcVar9;
          cVar5 = FUN_1501e32e0(&local_4d8,&local_500,&local_4a8);
          ppcVar6 = local_508;
          pppcVar8 = local_4d8;
          if (cVar5 != '\0') goto LAB_1501e40f2;
        }
        cVar5 = '\0';
        goto LAB_1501e4141;
      }
      if (pcVar9 != (char *)0x0) {
        pppcVar8[2] = (char **)((longlong)pppcVar8[2] + (longlong)pcVar9);
        ppcVar2 = pppcVar8[3];
        if (pcVar9 < (char *)((longlong)pppcVar8 + (0x420 - (longlong)ppcVar2))) {
          memcpy(ppcVar2,_Src,(size_t)pcVar9);
          pppcVar8[3] = (char **)((longlong)pppcVar8[3] + (longlong)pcVar9);
          ppcVar6 = local_508;
        }
        else {
          local_490 = (longlong)ppcVar2 + (-0x20 - (longlong)pppcVar8);
          local_498 = pppcVar8 + 4;
          (*(code *)pppcVar8[1])(*pppcVar8,&local_498);
          pppcVar8[3] = (char **)(pppcVar8 + 4);
          local_518 = _Src;
          local_510 = pcVar9;
          (*(code *)pppcVar8[1])(*pppcVar8,&local_518);
          ppcVar6 = local_508;
        }
      }
LAB_1501e40f2:
      pppcVar4 = local_500;
      uVar3 = uStack_4f8;
    }
    cVar5 = *(char *)local_4e8 == '\0';
  }
  else {
    local_500 = &local_468;
    uStack_4d0 = (undefined4)uStack_4f8;
    uStack_4cc = uStack_4f8._4_4_;
    local_518 = ppcVar2;
    local_510 = (char *)param_2[1];
    uStack_4f8 = uVar3;
    local_4d8 = local_500;
    cVar5 = FUN_1501e2180(&local_518,&local_4d8);
  }
LAB_1501e4141:
  if (cVar5 == '\0') {
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
    local_510 = (char *)((longlong)local_450 + (-0x20 - (longlong)&local_468));
    local_518 = local_448;
    (*pcStack_460)(local_468,&local_518);
    local_450 = local_448;
    if (0xf < uStack_470) {
      uVar7 = uStack_470 + 1;
      pcVar9 = local_488;
      if (0xfff < uVar7) {
        uVar7 = uStack_470 + 0x28;
        pcVar9 = *(char **)(local_488 + -8);
        if ((char *)0x1f < local_488 + (-8 - (longlong)pcVar9)) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      ::operator_delete(pcVar9,uVar7);
    }
  }
  else {
    local_510 = (char *)((longlong)local_450 + (-0x20 - (longlong)&local_468));
    local_518 = local_448;
    (*pcStack_460)(local_468,&local_518);
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = local_488;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = uStack_480;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = local_478;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = uStack_470;
  }
  return __return_storage_ptr__;
}

// _Unchecked_begin @ 1501e4250

/* public: struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem const *
   __ptr64 __cdecl std::vector<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,class
   std::allocator<struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   >::_Unchecked_begin(void)const __ptr64 */

ConversionItem * __thiscall
std::
vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
::_Unchecked_begin(vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
                   *this)

{
  return *(ConversionItem **)this;
}

// _Unchecked_end @ 1501e4260

/* public: struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem const *
   __ptr64 __cdecl std::vector<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,class
   std::allocator<struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   >::_Unchecked_end(void)const __ptr64 */

ConversionItem * __thiscall
std::
vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
::_Unchecked_end(vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
                 *this)

{
  return *(ConversionItem **)(this + 8);
}

// arg @ 1501e4270

/* public: class absl::lts_20240722::str_format_internal::FormatArgImpl const * __ptr64 __cdecl
   absl::lts_20240722::str_format_internal::BoundConversion::arg(void)const __ptr64 */

FormatArgImpl * __thiscall
absl::lts_20240722::str_format_internal::BoundConversion::arg(BoundConversion *this)

{
  return *(FormatArgImpl **)(this + 0x10);
}

// as_conv @ 1501e4280

/* public: enum absl::lts_20240722::FormatConversionChar __cdecl
   absl::lts_20240722::str_format_internal::ConvTag::as_conv(void)const __ptr64 */

FormatConversionChar __thiscall
absl::lts_20240722::str_format_internal::ConvTag::as_conv(ConvTag *this)

{
  return this->tag_;
}

// count @ 1501e4290

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::str_format_internal::FILERawSink::count(void)const __ptr64 */

__uint64 __thiscall absl::lts_20240722::str_format_internal::FILERawSink::count(FILERawSink *this)

{
  return *(__uint64 *)(this + 0x10);
}

// data @ 1501e42a0

/* public: class absl::lts_20240722::str_format_internal::FormatArgImpl const * __ptr64 __cdecl
   absl::lts_20240722::InlinedVector<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >::data(void)const __ptr64 */

FormatArgImpl * __thiscall
absl::lts_20240722::
InlinedVector<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
::data(InlinedVector<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
       *this)

{
  FormatArgImpl *pFVar1;
  
  pFVar1 = (FormatArgImpl *)(this + 8);
  if (((byte)*this & 1) != 0) {
    pFVar1 = (pFVar1->data_).ptr;
  }
  return pFVar1;
}

// error @ 1501e42c0

/* public: int __cdecl absl::lts_20240722::str_format_internal::FILERawSink::error(void)const
   __ptr64 */

int __thiscall absl::lts_20240722::str_format_internal::FILERawSink::error(FILERawSink *this)

{
  return *(int *)(this + 8);
}

// get_from_arg @ 1501e42d0

/* public: int __cdecl
   absl::lts_20240722::str_format_internal::UnboundConversion::InputValue::get_from_arg(void)const
   __ptr64 */

int __thiscall
absl::lts_20240722::str_format_internal::UnboundConversion::InputValue::get_from_arg
          (InputValue *this)

{
  return ~this->value_;
}

// has_parsed_conversion @ 1501e42e0

/* public: bool __cdecl
   absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl::has_parsed_conversion(void)const
   __ptr64 */

bool __thiscall
absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl::has_parsed_conversion
          (UntypedFormatSpecImpl *this)

{
  return *(longlong *)(this + 8) == -1;
}

// is_conv @ 1501e42f0

/* public: bool __cdecl absl::lts_20240722::str_format_internal::ConvTag::is_conv(void)const __ptr64
    */

bool __thiscall absl::lts_20240722::str_format_internal::ConvTag::is_conv(ConvTag *this)

{
  return (bool)(~(this->tag_ >> 7) & 1);
}

// is_from_arg @ 1501e4310

/* public: bool __cdecl
   absl::lts_20240722::str_format_internal::UnboundConversion::InputValue::is_from_arg(void)const
   __ptr64 */

bool __thiscall
absl::lts_20240722::str_format_internal::UnboundConversion::InputValue::is_from_arg
          (InputValue *this)

{
  return this->value_ < -1;
}

// parsed_conversion @ 1501e4320

/* public: class absl::lts_20240722::str_format_internal::ParsedFormatBase const * __ptr64 __cdecl
   absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl::parsed_conversion(void)const
   __ptr64 */

ParsedFormatBase * __thiscall
absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl::parsed_conversion
          (UntypedFormatSpecImpl *this)

{
  return *(ParsedFormatBase **)this;
}

// set_arg @ 1501e4330

/* public: void __cdecl absl::lts_20240722::str_format_internal::BoundConversion::set_arg(class
   absl::lts_20240722::str_format_internal::FormatArgImpl const * __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::str_format_internal::BoundConversion::set_arg
          (BoundConversion *this,FormatArgImpl *param_1)

{
  *(FormatArgImpl **)(this + 0x10) = param_1;
  return;
}

// size @ 1501e4340

/* public: unsigned __int64 __cdecl absl::lts_20240722::InlinedVector<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >::size(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::
InlinedVector<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
::size(InlinedVector<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
       *this)

{
  return *(ulonglong *)this >> 1;
}

// str @ 1501e4350

/* public: class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl::str(void)const __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl::str
          (UntypedFormatSpecImpl *this,
          basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__)

{
  __return_storage_ptr__->_Mydata = *(char **)this;
  __return_storage_ptr__->_Mysize = *(ulong64 *)(this + 8);
  return __return_storage_ptr__;
}

// total_written @ 1501e4370

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::str_format_internal::BufferRawSink::total_written(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::str_format_internal::BufferRawSink::total_written(BufferRawSink *this)

{
  return *(__uint64 *)(this + 0x10);
}

// value @ 1501e4380

/* public: int __cdecl
   absl::lts_20240722::str_format_internal::UnboundConversion::InputValue::value(void)const __ptr64
    */

int __thiscall
absl::lts_20240722::str_format_internal::UnboundConversion::InputValue::value(InputValue *this)

{
  return this->value_;
}

// FUN_150330720 @ 150330720

void FUN_150330720(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(param_2 + 0xf8));
  }
  return;
}

// FUN_1503307a0 @ 1503307a0

void FUN_1503307a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x160))
    ;
  }
  return;
}

// FUN_1503307d0 @ 1503307d0

void FUN_1503307d0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x70)
              );
  }
  return;
}

