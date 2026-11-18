// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FAudioVirtualLoopUpdateFields @ 147686670

FAudioVirtualLoopUpdateFields * __thiscall
FAudioVirtualLoopUpdateFields::FAudioVirtualLoopUpdateFields(FAudioVirtualLoopUpdateFields *this)

{
  (this->DeviceId_Field).FieldDesc.ValueOffset = 0;
  (this->DeviceId_Field).FieldDesc.ValueSize = 4;
  (this->DeviceId_Field).FieldDesc.NameSize = '\b';
  (this->DeviceId_Field).FieldDesc.TypeInfo = '\x02';
  (this->DeviceId_Field).FieldDesc.Name = "DeviceId";
  (this->Timestamp_Field).FieldDesc.Name = "Timestamp";
  (this->PlayOrder_Field).FieldDesc.Name = "PlayOrder";
  (this->TimeVirtualized_Field).FieldDesc.Name = "TimeVirtualized";
  (this->PlaybackTime_Field).FieldDesc.Name = "PlaybackTime";
  (this->UpdateInterval_Field).FieldDesc.Name = "UpdateInterval";
  (this->LocationX_Field).FieldDesc.Name = "LocationX";
  (this->LocationY_Field).FieldDesc.Name = "LocationY";
  (this->LocationZ_Field).FieldDesc.Name = "LocationZ";
  (this->RotatorPitch_Field).FieldDesc.Name = "RotatorPitch";
  (this->RotatorYaw_Field).FieldDesc.Name = "RotatorYaw";
  (this->RotatorRoll_Field).FieldDesc.Name = "RotatorRoll";
  (this->DefinitionId_Field).FieldDesc.Name = "";
  (this->DeviceId_Field).FieldDesc.Reference = 0;
  (this->Timestamp_Field).FieldDesc.ValueOffset = 4;
  (this->Timestamp_Field).FieldDesc.ValueSize = 8;
  (this->Timestamp_Field).FieldDesc.NameSize = '\t';
  (this->Timestamp_Field).FieldDesc.TypeInfo = '\x03';
  (this->Timestamp_Field).FieldDesc.Reference = 0;
  (this->PlayOrder_Field).FieldDesc.ValueOffset = 0xc;
  (this->PlayOrder_Field).FieldDesc.ValueSize = 4;
  (this->PlayOrder_Field).FieldDesc.NameSize = '\t';
  (this->PlayOrder_Field).FieldDesc.TypeInfo = '\x02';
  (this->PlayOrder_Field).FieldDesc.Reference = 0;
  (this->TimeVirtualized_Field).FieldDesc.ValueOffset = 0x10;
  (this->TimeVirtualized_Field).FieldDesc.ValueSize = 4;
  (this->TimeVirtualized_Field).FieldDesc.NameSize = '\x0f';
  (this->TimeVirtualized_Field).FieldDesc.TypeInfo = 'B';
  (this->TimeVirtualized_Field).FieldDesc.Reference = 0;
  (this->PlaybackTime_Field).FieldDesc.ValueOffset = 0x14;
  (this->PlaybackTime_Field).FieldDesc.ValueSize = 4;
  (this->PlaybackTime_Field).FieldDesc.NameSize = '\f';
  (this->PlaybackTime_Field).FieldDesc.TypeInfo = 'B';
  (this->PlaybackTime_Field).FieldDesc.Reference = 0;
  (this->UpdateInterval_Field).FieldDesc.ValueOffset = 0x18;
  (this->UpdateInterval_Field).FieldDesc.ValueSize = 4;
  (this->UpdateInterval_Field).FieldDesc.NameSize = '\x0e';
  (this->UpdateInterval_Field).FieldDesc.TypeInfo = 'B';
  (this->UpdateInterval_Field).FieldDesc.Reference = 0;
  (this->LocationX_Field).FieldDesc.ValueOffset = 0x1c;
  (this->LocationX_Field).FieldDesc.ValueSize = 8;
  (this->LocationX_Field).FieldDesc.NameSize = '\t';
  (this->LocationX_Field).FieldDesc.TypeInfo = 'C';
  (this->LocationX_Field).FieldDesc.Reference = 0;
  (this->LocationY_Field).FieldDesc.ValueOffset = 0x24;
  (this->LocationY_Field).FieldDesc.ValueSize = 8;
  (this->LocationY_Field).FieldDesc.NameSize = '\t';
  (this->LocationY_Field).FieldDesc.TypeInfo = 'C';
  (this->LocationY_Field).FieldDesc.Reference = 0;
  (this->LocationZ_Field).FieldDesc.ValueOffset = 0x2c;
  (this->LocationZ_Field).FieldDesc.ValueSize = 8;
  (this->LocationZ_Field).FieldDesc.NameSize = '\t';
  (this->LocationZ_Field).FieldDesc.TypeInfo = 'C';
  (this->LocationZ_Field).FieldDesc.Reference = 0;
  (this->RotatorPitch_Field).FieldDesc.ValueOffset = 0x34;
  (this->RotatorPitch_Field).FieldDesc.ValueSize = 8;
  (this->RotatorPitch_Field).FieldDesc.NameSize = '\f';
  (this->RotatorPitch_Field).FieldDesc.TypeInfo = 'C';
  (this->RotatorPitch_Field).FieldDesc.Reference = 0;
  (this->RotatorYaw_Field).FieldDesc.ValueOffset = 0x3c;
  (this->RotatorYaw_Field).FieldDesc.ValueSize = 8;
  (this->RotatorYaw_Field).FieldDesc.NameSize = '\n';
  (this->RotatorYaw_Field).FieldDesc.TypeInfo = 'C';
  (this->RotatorYaw_Field).FieldDesc.Reference = 0;
  (this->RotatorRoll_Field).FieldDesc.ValueOffset = 0x44;
  (this->RotatorRoll_Field).FieldDesc.ValueSize = 8;
  (this->RotatorRoll_Field).FieldDesc.NameSize = '\v';
  (this->RotatorRoll_Field).FieldDesc.TypeInfo = 'C';
  (this->RotatorRoll_Field).FieldDesc.Reference = 0;
  (this->DefinitionId_Field).FieldDesc.ValueOffset = 0x4c;
  (this->DefinitionId_Field).FieldDesc.ValueSize = 0;
  (this->DefinitionId_Field).FieldDesc.NameSize = '\0';
  (this->DefinitionId_Field).FieldDesc.TypeInfo = '\0';
  (this->DefinitionId_Field).FieldDesc.Reference = 0;
  this->EventProps_Private = (TField<12,76,UE::Trace::EventProps>)0x0;
  return this;
}

// Initialize @ 1476b8410

uint __cdecl FAudioVirtualLoopUpdateFields::Initialize(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `public:_static_unsigned_int___cdecl_FAudioVirtualLoopUpdateFields::Initialize(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FAudioVirtualLoopUpdateFields::Initialize(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FAudioVirtualLoopUpdateFields::Initialize(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioVirtualLoopUpdateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioVirtualLoopUpdateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioVirtualLoopUpdateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          FAudioVirtualLoopUpdateFields
                    (&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioVirtualLoopUpdateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                      ::__l2::Fields);
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioVirtualLoopUpdateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioVirtualLoopUpdateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_1__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioVirtualLoopUpdateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_1__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioVirtualLoopUpdateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_1__ == -1) {
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioVirtualLoopUpdateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Length = '\x05';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioVirtualLoopUpdateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Ptr = "Audio";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioVirtualLoopUpdateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Length = '\x11';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioVirtualLoopUpdateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Ptr = "VirtualLoopUpdate";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioVirtualLoopUpdateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Fields =
               (FFieldDesc *)
               &`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioVirtualLoopUpdateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::Fields;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioVirtualLoopUpdateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.FieldCount = 0xc;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioVirtualLoopUpdateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Flags = 0;
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioVirtualLoopUpdateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_1__);
        }
      }
      `public:_static_unsigned_int___cdecl_FAudioVirtualLoopUpdateFields::Initialize(void)'::__l2::
      Uid_ThreadSafeInit =
           UE::Trace::Private::FEventNode::Initialize
                     (AudioVirtualLoopUpdateEvent,
                      &`public:___cdecl_`public:_static_unsigned_int___cdecl_FAudioVirtualLoopUpdateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                       ::__l2::Info);
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FAudioVirtualLoopUpdateFields::Initialize(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_FAudioVirtualLoopUpdateFields::Initialize(void)'::__l2
         ::Uid_ThreadSafeInit;
}

