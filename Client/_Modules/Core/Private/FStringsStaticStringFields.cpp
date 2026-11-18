// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// DisplayAnsi<char_const_*,int> @ 14197eba0

bool __thiscall
FStringsStaticStringFields::DisplayAnsi<char_const_*,int>
          (FStringsStaticStringFields *this,char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 < 0) {
    sVar1 = strlen(param_1);
    param_2 = (int)sVar1;
  }
  UE::Trace::Private::Field_WriteStringAnsi(1,param_1,param_2);
  return true;
}

// DisplayWide<wchar_t_const_*,int> @ 14197ebe0

bool __thiscall
FStringsStaticStringFields::DisplayWide<wchar_t_const_*,int>
          (FStringsStaticStringFields *this,wchar_t *param_1,int param_2)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  
  if (param_2 < 0) {
    param_2 = 0;
    wVar2 = *param_1;
    pwVar1 = param_1;
    while (wVar2 != L'\0') {
      pwVar1 = pwVar1 + 1;
      param_2 = param_2 + 1;
      wVar2 = *pwVar1;
    }
  }
  UE::Trace::Private::Field_WriteStringWide(0,param_1,param_2);
  return true;
}

// GetUid @ 141995d60

uint __cdecl FStringsStaticStringFields::GetUid(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FStringsStaticStringFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FStringsStaticStringFields::GetUid(void)'::__l2::Uid =
           Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_FStringsStaticStringFields::GetUid(void)'::__l2::Uid;
}

// Initialize @ 14199f9d0

uint __cdecl FStringsStaticStringFields::Initialize(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::
                __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DisplayWide_Field.FieldDesc.NameSize = '\v';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DisplayWide_Field.FieldDesc.TypeInfo = 0x89;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DisplayWide_Field.FieldDesc.ValueOffset = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DisplayWide_Field.FieldDesc.ValueSize = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DisplayWide_Field.FieldDesc.Name = "DisplayWide";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DisplayAnsi_Field.FieldDesc.Name = "DisplayAnsi";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.Name = "";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DisplayWide_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DisplayAnsi_Field.FieldDesc.ValueOffset = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DisplayAnsi_Field.FieldDesc.ValueSize = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DisplayAnsi_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.EventProps_Private = (TField<515,8,UE::Trace::EventProps>)0x0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DisplayAnsi_Field.FieldDesc.NameSize = '\v';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DisplayAnsi_Field.FieldDesc.TypeInfo = 0x88;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueOffset = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueSize = 8;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.NameSize = '\0';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.TypeInfo = '\x03';
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_1__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_1__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_1__ == -1) {
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Length = '\a';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Ptr = "Strings";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Length = '\f';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Ptr = "StaticString";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Fields =
               (FFieldDesc *)
               &`public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::Fields;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.FieldCount = 3;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Flags = 0x46;
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_1__);
        }
      }
      `public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::__l2::
      Uid_ThreadSafeInit =
           UE::Trace::Private::FEventNode::Initialize
                     (StringsStaticStringEvent,
                      &`public:___cdecl_`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                       ::__l2::Info);
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_FStringsStaticStringFields::Initialize(void)'::__l2::
         Uid_ThreadSafeInit;
}

