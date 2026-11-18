// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// Initialize @ 14650ba40

uint __cdecl FAudioAudioBusStartFields::Initialize(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::
                __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DeviceId_Field.FieldDesc.ValueOffset = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DeviceId_Field.FieldDesc.ValueSize = 4;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DeviceId_Field.FieldDesc.NameSize = '\b';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DeviceId_Field.FieldDesc.TypeInfo = '\x02';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DeviceId_Field.FieldDesc.Name = "DeviceId";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DeviceId_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.AudioBusId_Field.FieldDesc.Name = "AudioBusId";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Timestamp_Field.FieldDesc.Name = "Timestamp";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Name_Field.FieldDesc.Name = "Name";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.NumChannels_Field.FieldDesc.Name = "NumChannels";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.Name = "";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.EventProps_Private = (TField<261,20,UE::Trace::EventProps>)0x0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.AudioBusId_Field.FieldDesc.ValueOffset = 4;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.AudioBusId_Field.FieldDesc.ValueSize = 4;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.AudioBusId_Field.FieldDesc.NameSize = '\n';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.AudioBusId_Field.FieldDesc.TypeInfo = '\x02';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.AudioBusId_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Timestamp_Field.FieldDesc.ValueOffset = 8;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Timestamp_Field.FieldDesc.ValueSize = 8;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Timestamp_Field.FieldDesc.NameSize = '\t';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Timestamp_Field.FieldDesc.TypeInfo = '\x03';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Timestamp_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Name_Field.FieldDesc.ValueOffset = 0x10;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Name_Field.FieldDesc.ValueSize = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Name_Field.FieldDesc.NameSize = '\x04';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Name_Field.FieldDesc.TypeInfo = 0x89;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Name_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.NumChannels_Field.FieldDesc.ValueOffset = 0x10;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.NumChannels_Field.FieldDesc.ValueSize = 4;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.NumChannels_Field.FieldDesc.NameSize = '\v';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.NumChannels_Field.FieldDesc.TypeInfo = '\x12';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.NumChannels_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueOffset = 0x14;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueSize = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.NameSize = '\0';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.TypeInfo = '\0';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.Reference = 0;
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_1__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_1__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_1__ == -1) {
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Length = '\x05';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Ptr = "Audio";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Length = '\r';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Ptr = "AudioBusStart";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Fields =
               (FFieldDesc *)
               &`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::Fields;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.FieldCount = 5;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Flags = 2;
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_1__);
        }
      }
      `public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::__l2::
      Uid_ThreadSafeInit =
           UE::Trace::Private::FEventNode::Initialize
                     (AudioAudioBusStartEvent,
                      &`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                       ::__l2::Info);
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_FAudioAudioBusStartFields::Initialize(void)'::__l2::
         Uid_ThreadSafeInit;
}

