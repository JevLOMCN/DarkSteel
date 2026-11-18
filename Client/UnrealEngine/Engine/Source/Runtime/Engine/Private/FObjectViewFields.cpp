// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FObjectViewFields @ 14808a2e0

FObjectViewFields * __thiscall FObjectViewFields::FObjectViewFields(FObjectViewFields *this)

{
  (this->PlayerId_Field).FieldDesc.ValueOffset = 0;
  (this->PlayerId_Field).FieldDesc.ValueSize = 8;
  (this->PlayerId_Field).FieldDesc.NameSize = '\b';
  (this->PlayerId_Field).FieldDesc.TypeInfo = '\x03';
  (this->PlayerId_Field).FieldDesc.Name = "PlayerId";
  (this->Cycle_Field).FieldDesc.Name = "Cycle";
  (this->PosX_Field).FieldDesc.Name = "PosX";
  (this->PosY_Field).FieldDesc.Name = "PosY";
  (this->PosZ_Field).FieldDesc.Name = "PosZ";
  (this->Pitch_Field).FieldDesc.Name = "Pitch";
  (this->Yaw_Field).FieldDesc.Name = "Yaw";
  (this->Roll_Field).FieldDesc.Name = "Roll";
  (this->Fov_Field).FieldDesc.Name = "Fov";
  (this->AspectRatio_Field).FieldDesc.Name = "AspectRatio";
  (this->DefinitionId_Field).FieldDesc.Name = "";
  (this->PlayerId_Field).FieldDesc.Reference = 0;
  (this->Cycle_Field).FieldDesc.ValueOffset = 8;
  (this->Cycle_Field).FieldDesc.ValueSize = 8;
  (this->Cycle_Field).FieldDesc.NameSize = '\x05';
  (this->Cycle_Field).FieldDesc.TypeInfo = '\x03';
  (this->Cycle_Field).FieldDesc.Reference = 0;
  (this->PosX_Field).FieldDesc.ValueOffset = 0x10;
  (this->PosX_Field).FieldDesc.ValueSize = 8;
  (this->PosX_Field).FieldDesc.NameSize = '\x04';
  (this->PosX_Field).FieldDesc.TypeInfo = 'C';
  (this->PosX_Field).FieldDesc.Reference = 0;
  (this->PosY_Field).FieldDesc.ValueOffset = 0x18;
  (this->PosY_Field).FieldDesc.ValueSize = 8;
  (this->PosY_Field).FieldDesc.NameSize = '\x04';
  (this->PosY_Field).FieldDesc.TypeInfo = 'C';
  (this->PosY_Field).FieldDesc.Reference = 0;
  (this->PosZ_Field).FieldDesc.ValueOffset = 0x20;
  (this->PosZ_Field).FieldDesc.ValueSize = 8;
  (this->PosZ_Field).FieldDesc.NameSize = '\x04';
  (this->PosZ_Field).FieldDesc.TypeInfo = 'C';
  (this->PosZ_Field).FieldDesc.Reference = 0;
  (this->Pitch_Field).FieldDesc.ValueOffset = 0x28;
  (this->Pitch_Field).FieldDesc.ValueSize = 4;
  (this->Pitch_Field).FieldDesc.NameSize = '\x05';
  (this->Pitch_Field).FieldDesc.TypeInfo = 'B';
  (this->Pitch_Field).FieldDesc.Reference = 0;
  (this->Yaw_Field).FieldDesc.ValueOffset = 0x2c;
  (this->Yaw_Field).FieldDesc.ValueSize = 4;
  (this->Yaw_Field).FieldDesc.NameSize = '\x03';
  (this->Yaw_Field).FieldDesc.TypeInfo = 'B';
  (this->Yaw_Field).FieldDesc.Reference = 0;
  (this->Roll_Field).FieldDesc.ValueOffset = 0x30;
  (this->Roll_Field).FieldDesc.ValueSize = 4;
  (this->Roll_Field).FieldDesc.NameSize = '\x04';
  (this->Roll_Field).FieldDesc.TypeInfo = 'B';
  (this->Roll_Field).FieldDesc.Reference = 0;
  (this->Fov_Field).FieldDesc.ValueOffset = 0x34;
  (this->Fov_Field).FieldDesc.ValueSize = 4;
  (this->Fov_Field).FieldDesc.NameSize = '\x03';
  (this->Fov_Field).FieldDesc.TypeInfo = 'B';
  (this->Fov_Field).FieldDesc.Reference = 0;
  (this->AspectRatio_Field).FieldDesc.ValueOffset = 0x38;
  (this->AspectRatio_Field).FieldDesc.ValueSize = 4;
  (this->AspectRatio_Field).FieldDesc.NameSize = '\v';
  (this->AspectRatio_Field).FieldDesc.TypeInfo = 'B';
  (this->AspectRatio_Field).FieldDesc.Reference = 0;
  (this->DefinitionId_Field).FieldDesc.ValueOffset = 0x3c;
  (this->DefinitionId_Field).FieldDesc.ValueSize = 0;
  (this->DefinitionId_Field).FieldDesc.NameSize = '\0';
  (this->DefinitionId_Field).FieldDesc.TypeInfo = '\0';
  (this->DefinitionId_Field).FieldDesc.Reference = 0;
  this->EventProps_Private = (TField<10,60,UE::Trace::EventProps>)0x0;
  return this;
}

// Initialize @ 1480b1060

uint __cdecl FObjectViewFields::Initialize(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `public:_static_unsigned_int___cdecl_FObjectViewFields::Initialize(void)'::__l2::
                _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FObjectViewFields::Initialize(void)'::
                         __l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FObjectViewFields::Initialize(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FObjectViewFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FObjectViewFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FObjectViewFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          FObjectViewFields(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FObjectViewFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::Fields);
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FObjectViewFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FObjectViewFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_1__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FObjectViewFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_1__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FObjectViewFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_1__ == -1) {
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FObjectViewFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Length = '\x06';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FObjectViewFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Ptr = "Object";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FObjectViewFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Length = '\x04';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FObjectViewFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Ptr = "View";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FObjectViewFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Fields =
               (FFieldDesc *)
               &`public:___cdecl_`public:_static_unsigned_int___cdecl_FObjectViewFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::Fields;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FObjectViewFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.FieldCount = 10;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FObjectViewFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Flags = 0;
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FObjectViewFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_1__);
        }
      }
      `public:_static_unsigned_int___cdecl_FObjectViewFields::Initialize(void)'::__l2::
      Uid_ThreadSafeInit =
           UE::Trace::Private::FEventNode::Initialize
                     (ObjectViewEvent,
                      &`public:___cdecl_`public:_static_unsigned_int___cdecl_FObjectViewFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                       ::__l2::Info);
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FObjectViewFields::Initialize(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_FObjectViewFields::Initialize(void)'::__l2::
         Uid_ThreadSafeInit;
}

