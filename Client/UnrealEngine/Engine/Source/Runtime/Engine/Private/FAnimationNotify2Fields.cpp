// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// operator() @ 14753c110

uint __thiscall `FAnimationNotify2Fields::Initialize'::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.ValueOffset = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.ValueSize = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.Name = "Cycle";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.NameSize = '\x05';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.TypeInfo = '\x03';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RecordingTime_Field.FieldDesc.Name = "RecordingTime";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.AnimInstanceId_Field.FieldDesc.Name = "AnimInstanceId";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.AssetId_Field.FieldDesc.Name = "AssetId";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NotifyId_Field.FieldDesc.Name = "NotifyId";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NameId_Field.FieldDesc.Name = "NameId";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Time_Field.FieldDesc.Name = "Time";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Duration_Field.FieldDesc.Name = "Duration";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NotifyEventType_Field.FieldDesc.Name = "NotifyEventType";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.Name = "";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.EventProps_Private = (TField<9,53,UE::Trace::EventProps>)0x0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RecordingTime_Field.FieldDesc.ValueOffset = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RecordingTime_Field.FieldDesc.ValueSize = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RecordingTime_Field.FieldDesc.NameSize = '\r';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RecordingTime_Field.FieldDesc.TypeInfo = 'C';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RecordingTime_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.AnimInstanceId_Field.FieldDesc.ValueOffset = 0x10;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.AnimInstanceId_Field.FieldDesc.ValueSize = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.AnimInstanceId_Field.FieldDesc.NameSize = '\x0e';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.AnimInstanceId_Field.FieldDesc.TypeInfo = '\x03';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.AnimInstanceId_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.AssetId_Field.FieldDesc.ValueOffset = 0x18;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.AssetId_Field.FieldDesc.ValueSize = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.AssetId_Field.FieldDesc.NameSize = '\a';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.AssetId_Field.FieldDesc.TypeInfo = '\x03';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.AssetId_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NotifyId_Field.FieldDesc.ValueOffset = 0x20;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NotifyId_Field.FieldDesc.ValueSize = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NotifyId_Field.FieldDesc.NameSize = '\b';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NotifyId_Field.FieldDesc.TypeInfo = '\x03';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NotifyId_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NameId_Field.FieldDesc.ValueOffset = 0x28;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NameId_Field.FieldDesc.ValueSize = 4;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NameId_Field.FieldDesc.NameSize = '\x06';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NameId_Field.FieldDesc.TypeInfo = '\x02';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NameId_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Time_Field.FieldDesc.ValueOffset = 0x2c;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Time_Field.FieldDesc.ValueSize = 4;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Time_Field.FieldDesc.NameSize = '\x04';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Time_Field.FieldDesc.TypeInfo = 'B';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Time_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Duration_Field.FieldDesc.ValueOffset = 0x30;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Duration_Field.FieldDesc.ValueSize = 4;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Duration_Field.FieldDesc.NameSize = '\b';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Duration_Field.FieldDesc.TypeInfo = 'B';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Duration_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NotifyEventType_Field.FieldDesc.ValueOffset = 0x34;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NotifyEventType_Field.FieldDesc.ValueSize = 1;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NotifyEventType_Field.FieldDesc.NameSize = '\x0f';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NotifyEventType_Field.FieldDesc.TypeInfo = '\0';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NotifyEventType_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueOffset = 0x35;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueSize = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.NameSize = '\0';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.TypeInfo = '\0';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.Reference = 0;
      _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar2 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.LoggerName.Length = '\t';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.LoggerName.Ptr = "Animation";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.EventName.Length = '\a';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.EventName.Ptr = "Notify2";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.Fields =
           (FFieldDesc *)
           &`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::Fields;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.FieldCount = 9;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.Flags = 0;
      _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  uVar1 = UE::Trace::Private::FEventNode::Initialize
                    (AnimationNotify2Event,
                     &`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                      ::__l2::Info);
  return uVar1;
}

// Initialize @ 147564c00

uint __cdecl FAnimationNotify2Fields::Initialize(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::__l2::
      Uid_ThreadSafeInit =
           `FAnimationNotify2Fields::Initialize'::__l2::<lambda_1>::operator()(local_res8);
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_FAnimationNotify2Fields::Initialize(void)'::__l2::
         Uid_ThreadSafeInit;
}

