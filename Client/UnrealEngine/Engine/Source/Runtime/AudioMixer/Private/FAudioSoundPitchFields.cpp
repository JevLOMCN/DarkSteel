// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// Initialize @ 14650c050

uint __cdecl FAudioSoundPitchFields::Initialize(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::__l2
                ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DeviceId_Field.FieldDesc.ValueOffset = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DeviceId_Field.FieldDesc.ValueSize = 4;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DeviceId_Field.FieldDesc.Name = "DeviceId";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DeviceId_Field.FieldDesc.NameSize = '\b';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DeviceId_Field.FieldDesc.TypeInfo = '\x02';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Timestamp_Field.FieldDesc.Name = "Timestamp";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.PlayOrder_Field.FieldDesc.Name = "PlayOrder";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.ActiveSoundPlayOrder_Field.FieldDesc.Name = "ActiveSoundPlayOrder";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Pitch_Field.FieldDesc.Name = "Pitch";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.Name = "";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.EventProps_Private = (TField<5,24,UE::Trace::EventProps>)0x0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DeviceId_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Timestamp_Field.FieldDesc.ValueOffset = 4;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Timestamp_Field.FieldDesc.ValueSize = 8;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Timestamp_Field.FieldDesc.NameSize = '\t';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Timestamp_Field.FieldDesc.TypeInfo = '\x03';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Timestamp_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.PlayOrder_Field.FieldDesc.ValueOffset = 0xc;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.PlayOrder_Field.FieldDesc.ValueSize = 4;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.PlayOrder_Field.FieldDesc.NameSize = '\t';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.PlayOrder_Field.FieldDesc.TypeInfo = '\x02';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.PlayOrder_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.ActiveSoundPlayOrder_Field.FieldDesc.ValueOffset = 0x10;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.ActiveSoundPlayOrder_Field.FieldDesc.ValueSize = 4;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.ActiveSoundPlayOrder_Field.FieldDesc.NameSize = '\x14';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.ActiveSoundPlayOrder_Field.FieldDesc.TypeInfo = '\x02';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.ActiveSoundPlayOrder_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Pitch_Field.FieldDesc.ValueOffset = 0x14;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Pitch_Field.FieldDesc.ValueSize = 4;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Pitch_Field.FieldDesc.NameSize = '\x05';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Pitch_Field.FieldDesc.TypeInfo = 'B';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Pitch_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueOffset = 0x18;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueSize = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.NameSize = '\0';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.TypeInfo = '\0';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.Reference = 0;
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_1__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_1__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_1__ == -1) {
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Length = '\x05';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Ptr = "Audio";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Length = '\n';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Ptr = "SoundPitch";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Fields =
               (FFieldDesc *)
               &`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::Fields;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.FieldCount = 5;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Flags = 0;
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_1__);
        }
      }
      `public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::__l2::
      Uid_ThreadSafeInit =
           UE::Trace::Private::FEventNode::Initialize
                     (AudioSoundPitchEvent,
                      &`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                       ::__l2::Info);
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_FAudioSoundPitchFields::Initialize(void)'::__l2::
         Uid_ThreadSafeInit;
}

