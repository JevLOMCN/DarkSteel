// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// FSlateTraceApplicationTickAndDrawWidgetsFields @ 1425bdbe0

FSlateTraceApplicationTickAndDrawWidgetsFields * __thiscall
FSlateTraceApplicationTickAndDrawWidgetsFields::FSlateTraceApplicationTickAndDrawWidgetsFields
          (FSlateTraceApplicationTickAndDrawWidgetsFields *this)

{
  (this->Cycle_Field).FieldDesc.ValueOffset = 0;
  (this->Cycle_Field).FieldDesc.ValueSize = 8;
  (this->Cycle_Field).FieldDesc.NameSize = '\x05';
  (this->Cycle_Field).FieldDesc.TypeInfo = '\x03';
  (this->Cycle_Field).FieldDesc.Name = "Cycle";
  (this->DeltaTime_Field).FieldDesc.Name = "DeltaTime";
  (this->WidgetCount_Field).FieldDesc.Name = "WidgetCount";
  (this->TickCount_Field).FieldDesc.Name = "TickCount";
  (this->TimerCount_Field).FieldDesc.Name = "TimerCount";
  (this->RepaintCount_Field).FieldDesc.Name = "RepaintCount";
  (this->PaintCount_Field).FieldDesc.Name = "PaintCount";
  (this->InvalidateCount_Field).FieldDesc.Name = "InvalidateCount";
  (this->RootInvalidatedCount_Field).FieldDesc.Name = "RootInvalidatedCount";
  (this->SlateFlags_Field).FieldDesc.Name = "SlateFlags";
  (this->DefinitionId_Field).FieldDesc.Name = "";
  (this->Cycle_Field).FieldDesc.Reference = 0;
  (this->DeltaTime_Field).FieldDesc.ValueOffset = 8;
  (this->DeltaTime_Field).FieldDesc.ValueSize = 8;
  (this->DeltaTime_Field).FieldDesc.NameSize = '\t';
  (this->DeltaTime_Field).FieldDesc.TypeInfo = 'C';
  (this->DeltaTime_Field).FieldDesc.Reference = 0;
  (this->WidgetCount_Field).FieldDesc.ValueOffset = 0x10;
  (this->WidgetCount_Field).FieldDesc.ValueSize = 4;
  (this->WidgetCount_Field).FieldDesc.NameSize = '\v';
  (this->WidgetCount_Field).FieldDesc.TypeInfo = '\x02';
  (this->WidgetCount_Field).FieldDesc.Reference = 0;
  (this->TickCount_Field).FieldDesc.ValueOffset = 0x14;
  (this->TickCount_Field).FieldDesc.ValueSize = 4;
  (this->TickCount_Field).FieldDesc.NameSize = '\t';
  (this->TickCount_Field).FieldDesc.TypeInfo = '\x02';
  (this->TickCount_Field).FieldDesc.Reference = 0;
  (this->TimerCount_Field).FieldDesc.ValueOffset = 0x18;
  (this->TimerCount_Field).FieldDesc.ValueSize = 4;
  (this->TimerCount_Field).FieldDesc.NameSize = '\n';
  (this->TimerCount_Field).FieldDesc.TypeInfo = '\x02';
  (this->TimerCount_Field).FieldDesc.Reference = 0;
  (this->RepaintCount_Field).FieldDesc.ValueOffset = 0x1c;
  (this->RepaintCount_Field).FieldDesc.ValueSize = 4;
  (this->RepaintCount_Field).FieldDesc.NameSize = '\f';
  (this->RepaintCount_Field).FieldDesc.TypeInfo = '\x02';
  (this->RepaintCount_Field).FieldDesc.Reference = 0;
  (this->PaintCount_Field).FieldDesc.ValueOffset = 0x20;
  (this->PaintCount_Field).FieldDesc.ValueSize = 4;
  (this->PaintCount_Field).FieldDesc.NameSize = '\n';
  (this->PaintCount_Field).FieldDesc.TypeInfo = '\x02';
  (this->PaintCount_Field).FieldDesc.Reference = 0;
  (this->InvalidateCount_Field).FieldDesc.ValueOffset = 0x24;
  (this->InvalidateCount_Field).FieldDesc.ValueSize = 4;
  (this->InvalidateCount_Field).FieldDesc.NameSize = '\x0f';
  (this->InvalidateCount_Field).FieldDesc.TypeInfo = '\x02';
  (this->InvalidateCount_Field).FieldDesc.Reference = 0;
  (this->RootInvalidatedCount_Field).FieldDesc.ValueOffset = 0x28;
  (this->RootInvalidatedCount_Field).FieldDesc.ValueSize = 4;
  (this->RootInvalidatedCount_Field).FieldDesc.NameSize = '\x14';
  (this->RootInvalidatedCount_Field).FieldDesc.TypeInfo = '\x02';
  (this->RootInvalidatedCount_Field).FieldDesc.Reference = 0;
  (this->SlateFlags_Field).FieldDesc.ValueOffset = 0x2c;
  (this->SlateFlags_Field).FieldDesc.ValueSize = 1;
  (this->SlateFlags_Field).FieldDesc.NameSize = '\n';
  (this->SlateFlags_Field).FieldDesc.TypeInfo = '\0';
  (this->SlateFlags_Field).FieldDesc.Reference = 0;
  (this->DefinitionId_Field).FieldDesc.ValueOffset = 0x2d;
  (this->DefinitionId_Field).FieldDesc.ValueSize = 0;
  (this->DefinitionId_Field).FieldDesc.NameSize = '\0';
  (this->DefinitionId_Field).FieldDesc.TypeInfo = '\0';
  (this->DefinitionId_Field).FieldDesc.Reference = 0;
  this->EventProps_Private = (TField<10,45,UE::Trace::EventProps>)0x0;
  return this;
}

// Initialize @ 1425e6f80

uint __cdecl FSlateTraceApplicationTickAndDrawWidgetsFields::Initialize(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `public:_static_unsigned_int___cdecl_FSlateTraceApplicationTickAndDrawWidgetsFields::Initialize(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FSlateTraceApplicationTickAndDrawWidgetsFields::Initialize(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FSlateTraceApplicationTickAndDrawWidgetsFields::Initialize(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceApplicationTickAndDrawWidgetsFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceApplicationTickAndDrawWidgetsFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceApplicationTickAndDrawWidgetsFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          FSlateTraceApplicationTickAndDrawWidgetsFields
                    (&`public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceApplicationTickAndDrawWidgetsFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                      ::__l2::Fields);
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceApplicationTickAndDrawWidgetsFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceApplicationTickAndDrawWidgetsFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_1__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceApplicationTickAndDrawWidgetsFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_1__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceApplicationTickAndDrawWidgetsFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_1__ == -1) {
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceApplicationTickAndDrawWidgetsFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Length = '\n';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceApplicationTickAndDrawWidgetsFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Ptr = "SlateTrace";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceApplicationTickAndDrawWidgetsFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Length = '\x1d';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceApplicationTickAndDrawWidgetsFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Ptr = "ApplicationTickAndDrawWidgets";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceApplicationTickAndDrawWidgetsFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Fields =
               (FFieldDesc *)
               &`public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceApplicationTickAndDrawWidgetsFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::Fields;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceApplicationTickAndDrawWidgetsFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.FieldCount = 10;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceApplicationTickAndDrawWidgetsFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Flags = 0;
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceApplicationTickAndDrawWidgetsFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_1__);
        }
      }
      `public:_static_unsigned_int___cdecl_FSlateTraceApplicationTickAndDrawWidgetsFields::Initialize(void)'
      ::__l2::Uid_ThreadSafeInit =
           UE::Trace::Private::FEventNode::Initialize
                     (SlateTraceApplicationTickAndDrawWidgetsEvent,
                      &`public:___cdecl_`public:_static_unsigned_int___cdecl_FSlateTraceApplicationTickAndDrawWidgetsFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                       ::__l2::Info);
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FSlateTraceApplicationTickAndDrawWidgetsFields::Initialize(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_FSlateTraceApplicationTickAndDrawWidgetsFields::Initialize(void)'
         ::__l2::Uid_ThreadSafeInit;
}

