// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 2

// EnvelopeValues<float_*,int> @ 1465394d0

bool __thiscall
FAudioSubmixEnvelopeValuesFields::EnvelopeValues<float_*,int>
          (FAudioSubmixEnvelopeValuesFields *this,float *param_1,int param_2)

{
  UE::Trace::Private::Field_WriteAuxData(3,(uchar *)param_1,param_2 * 4 & 0x7fffc);
  return true;
}

// Initialize @ 14655fe90

uint __cdecl FAudioSubmixEnvelopeValuesFields::Initialize(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DeviceId_Field.FieldDesc.ValueOffset = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DeviceId_Field.FieldDesc.ValueSize = 4;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DeviceId_Field.FieldDesc.NameSize = '\b';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DeviceId_Field.FieldDesc.TypeInfo = '\x02';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DeviceId_Field.FieldDesc.Name = "DeviceId";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DeviceId_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.SubmixId_Field.FieldDesc.Name = "SubmixId";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Timestamp_Field.FieldDesc.Name = "Timestamp";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.EnvelopeValues_Field.FieldDesc.Name = "EnvelopeValues";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.Name = "";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.EventProps_Private = (TField<260,16,UE::Trace::EventProps>)0x0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.SubmixId_Field.FieldDesc.ValueOffset = 4;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.SubmixId_Field.FieldDesc.ValueSize = 4;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.SubmixId_Field.FieldDesc.NameSize = '\b';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.SubmixId_Field.FieldDesc.TypeInfo = '\x02';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.SubmixId_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Timestamp_Field.FieldDesc.ValueOffset = 8;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Timestamp_Field.FieldDesc.ValueSize = 8;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Timestamp_Field.FieldDesc.NameSize = '\t';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Timestamp_Field.FieldDesc.TypeInfo = '\x03';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Timestamp_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.EnvelopeValues_Field.FieldDesc.ValueOffset = 0x10;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.EnvelopeValues_Field.FieldDesc.ValueSize = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.EnvelopeValues_Field.FieldDesc.NameSize = '\x0e';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.EnvelopeValues_Field.FieldDesc.TypeInfo = 0xc2;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.EnvelopeValues_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueOffset = 0x10;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueSize = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.NameSize = '\0';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.TypeInfo = '\0';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.Reference = 0;
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_1__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_1__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_1__ == -1) {
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Length = '\x05';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Ptr = "Audio";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Length = '\x14';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Ptr = "SubmixEnvelopeValues";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Fields =
               (FFieldDesc *)
               &`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::Fields;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.FieldCount = 4;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Flags = 2;
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_1__);
        }
      }
      `public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::__l2
      ::Uid_ThreadSafeInit =
           UE::Trace::Private::FEventNode::Initialize
                     (AudioSubmixEnvelopeValuesEvent,
                      &`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                       ::__l2::Info);
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_FAudioSubmixEnvelopeValuesFields::Initialize(void)'::
         __l2::Uid_ThreadSafeInit;
}

