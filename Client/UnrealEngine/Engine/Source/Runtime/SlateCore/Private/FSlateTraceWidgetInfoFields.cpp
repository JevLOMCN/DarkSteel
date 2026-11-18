// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 3

// DebugInfo<wchar_t_const_*> @ 1425b3200

bool __thiscall
FSlateTraceWidgetInfoFields::DebugInfo<wchar_t_const_*>
          (FSlateTraceWidgetInfoFields *this,wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  iVar3 = 0;
  wVar1 = *param_1;
  pwVar2 = param_1;
  while (wVar1 != L'\0') {
    pwVar2 = pwVar2 + 1;
    iVar3 = iVar3 + 1;
    wVar1 = *pwVar2;
  }
  UE::Trace::Private::Field_WriteStringWide(3,param_1,iVar3);
  return true;
}

// Path<wchar_t_const_*> @ 1425b87a0

bool __thiscall
FSlateTraceWidgetInfoFields::Path<wchar_t_const_*>
          (FSlateTraceWidgetInfoFields *this,wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  iVar3 = 0;
  wVar1 = *param_1;
  pwVar2 = param_1;
  while (wVar1 != L'\0') {
    pwVar2 = pwVar2 + 1;
    iVar3 = iVar3 + 1;
    wVar1 = *pwVar2;
  }
  UE::Trace::Private::Field_WriteStringWide(2,param_1,iVar3);
  return true;
}

// Initialize @ 1425e77a0

uint __cdecl FSlateTraceWidgetInfoFields::Initialize(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Cycle_Field.FieldDesc.ValueOffset = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Cycle_Field.FieldDesc.ValueSize = 8;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Cycle_Field.FieldDesc.NameSize = '\x05';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Cycle_Field.FieldDesc.TypeInfo = '\x03';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Cycle_Field.FieldDesc.Name = "Cycle";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Cycle_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.WidgetId_Field.FieldDesc.Name = "WidgetId";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Path_Field.FieldDesc.Name = "Path";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DebugInfo_Field.FieldDesc.Name = "DebugInfo";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.Name = "";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.EventProps_Private = (TField<516,16,UE::Trace::EventProps>)0x0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.WidgetId_Field.FieldDesc.ValueOffset = 8;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.WidgetId_Field.FieldDesc.ValueSize = 8;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.WidgetId_Field.FieldDesc.NameSize = '\b';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.WidgetId_Field.FieldDesc.TypeInfo = '\x03';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.WidgetId_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Path_Field.FieldDesc.ValueOffset = 0x10;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Path_Field.FieldDesc.ValueSize = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Path_Field.FieldDesc.NameSize = '\x04';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Path_Field.FieldDesc.TypeInfo = 0x89;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Path_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DebugInfo_Field.FieldDesc.ValueOffset = 0x10;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DebugInfo_Field.FieldDesc.ValueSize = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DebugInfo_Field.FieldDesc.NameSize = '\t';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DebugInfo_Field.FieldDesc.TypeInfo = 0x89;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DebugInfo_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueOffset = 0x10;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueSize = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.NameSize = '\0';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.TypeInfo = '\0';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.Reference = 0;
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_1__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_1__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_1__ == -1) {
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Length = '\n';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Ptr = "SlateTrace";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Length = '\n';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Ptr = "WidgetInfo";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Fields =
               (FFieldDesc *)
               &`public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::Fields;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.FieldCount = 4;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Flags = 2;
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_1__);
        }
      }
      `public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::__l2::
      Uid_ThreadSafeInit =
           UE::Trace::Private::FEventNode::Initialize
                     (SlateTraceWidgetInfoEvent,
                      &`public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                       ::__l2::Info);
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::Initialize(void)'::__l2::
         Uid_ThreadSafeInit;
}

