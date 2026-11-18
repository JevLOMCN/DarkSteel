// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// FChaosVDLoggerChaosVDNonSolverTransformFields @ 14373cbd0

FChaosVDLoggerChaosVDNonSolverTransformFields * __thiscall
FChaosVDLoggerChaosVDNonSolverTransformFields::FChaosVDLoggerChaosVDNonSolverTransformFields
          (FChaosVDLoggerChaosVDNonSolverTransformFields *this)

{
  (this->Cycle_Field).FieldDesc.ValueOffset = 0;
  (this->Cycle_Field).FieldDesc.ValueSize = 8;
  (this->Cycle_Field).FieldDesc.NameSize = '\x05';
  (this->Cycle_Field).FieldDesc.TypeInfo = '\x03';
  (this->Cycle_Field).FieldDesc.Name = "Cycle";
  (this->PositionX_Field).FieldDesc.Name = "PositionX";
  (this->PositionY_Field).FieldDesc.Name = "PositionY";
  (this->PositionZ_Field).FieldDesc.Name = "PositionZ";
  (this->ScaleX_Field).FieldDesc.Name = "ScaleX";
  (this->ScaleY_Field).FieldDesc.Name = "ScaleY";
  (this->ScaleZ_Field).FieldDesc.Name = "ScaleZ";
  (this->RotationX_Field).FieldDesc.Name = "RotationX";
  (this->RotationY_Field).FieldDesc.Name = "RotationY";
  (this->RotationZ_Field).FieldDesc.Name = "RotationZ";
  (this->RotationW_Field).FieldDesc.Name = "RotationW";
  (this->DebugName_Field).FieldDesc.Name = "DebugName";
  (this->DefinitionId_Field).FieldDesc.Name = "";
  (this->Cycle_Field).FieldDesc.Reference = 0;
  (this->PositionX_Field).FieldDesc.ValueOffset = 8;
  (this->PositionX_Field).FieldDesc.ValueSize = 8;
  (this->PositionX_Field).FieldDesc.NameSize = '\t';
  (this->PositionX_Field).FieldDesc.TypeInfo = 'C';
  (this->PositionX_Field).FieldDesc.Reference = 0;
  (this->PositionY_Field).FieldDesc.ValueOffset = 0x10;
  (this->PositionY_Field).FieldDesc.ValueSize = 8;
  (this->PositionY_Field).FieldDesc.NameSize = '\t';
  (this->PositionY_Field).FieldDesc.TypeInfo = 'C';
  (this->PositionY_Field).FieldDesc.Reference = 0;
  (this->PositionZ_Field).FieldDesc.ValueOffset = 0x18;
  (this->PositionZ_Field).FieldDesc.ValueSize = 8;
  (this->PositionZ_Field).FieldDesc.NameSize = '\t';
  (this->PositionZ_Field).FieldDesc.TypeInfo = 'C';
  (this->PositionZ_Field).FieldDesc.Reference = 0;
  (this->ScaleX_Field).FieldDesc.ValueOffset = 0x20;
  (this->ScaleX_Field).FieldDesc.ValueSize = 8;
  (this->ScaleX_Field).FieldDesc.NameSize = '\x06';
  (this->ScaleX_Field).FieldDesc.TypeInfo = 'C';
  (this->ScaleX_Field).FieldDesc.Reference = 0;
  (this->ScaleY_Field).FieldDesc.ValueOffset = 0x28;
  (this->ScaleY_Field).FieldDesc.ValueSize = 8;
  (this->ScaleY_Field).FieldDesc.NameSize = '\x06';
  (this->ScaleY_Field).FieldDesc.TypeInfo = 'C';
  (this->ScaleY_Field).FieldDesc.Reference = 0;
  (this->ScaleZ_Field).FieldDesc.ValueOffset = 0x30;
  (this->ScaleZ_Field).FieldDesc.ValueSize = 8;
  (this->ScaleZ_Field).FieldDesc.NameSize = '\x06';
  (this->ScaleZ_Field).FieldDesc.TypeInfo = 'C';
  (this->ScaleZ_Field).FieldDesc.Reference = 0;
  (this->RotationX_Field).FieldDesc.ValueOffset = 0x38;
  (this->RotationX_Field).FieldDesc.ValueSize = 8;
  (this->RotationX_Field).FieldDesc.NameSize = '\t';
  (this->RotationX_Field).FieldDesc.TypeInfo = 'C';
  (this->RotationX_Field).FieldDesc.Reference = 0;
  (this->RotationY_Field).FieldDesc.ValueOffset = 0x40;
  (this->RotationY_Field).FieldDesc.ValueSize = 8;
  (this->RotationY_Field).FieldDesc.NameSize = '\t';
  (this->RotationY_Field).FieldDesc.TypeInfo = 'C';
  (this->RotationY_Field).FieldDesc.Reference = 0;
  (this->RotationZ_Field).FieldDesc.ValueOffset = 0x48;
  (this->RotationZ_Field).FieldDesc.ValueSize = 8;
  (this->RotationZ_Field).FieldDesc.NameSize = '\t';
  (this->RotationZ_Field).FieldDesc.TypeInfo = 'C';
  (this->RotationZ_Field).FieldDesc.Reference = 0;
  (this->RotationW_Field).FieldDesc.ValueOffset = 0x50;
  (this->RotationW_Field).FieldDesc.ValueSize = 8;
  (this->RotationW_Field).FieldDesc.NameSize = '\t';
  (this->RotationW_Field).FieldDesc.TypeInfo = 'C';
  (this->RotationW_Field).FieldDesc.Reference = 0;
  (this->DebugName_Field).FieldDesc.ValueOffset = 0x58;
  (this->DebugName_Field).FieldDesc.ValueSize = 0;
  (this->DebugName_Field).FieldDesc.NameSize = '\t';
  (this->DebugName_Field).FieldDesc.TypeInfo = 0x89;
  (this->DebugName_Field).FieldDesc.Reference = 0;
  (this->DefinitionId_Field).FieldDesc.ValueOffset = 0x58;
  (this->DefinitionId_Field).FieldDesc.ValueSize = 0;
  (this->DefinitionId_Field).FieldDesc.NameSize = '\0';
  (this->DefinitionId_Field).FieldDesc.TypeInfo = '\0';
  (this->DefinitionId_Field).FieldDesc.Reference = 0;
  this->EventProps_Private = (TField<268,88,UE::Trace::EventProps>)0x0;
  return this;
}

// Initialize @ 143795c70

uint __cdecl FChaosVDLoggerChaosVDNonSolverTransformFields::Initialize(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverTransformFields::Initialize(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverTransformFields::Initialize(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverTransformFields::Initialize(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverTransformFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverTransformFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverTransformFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          FChaosVDLoggerChaosVDNonSolverTransformFields
                    (&`public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverTransformFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                      ::__l2::Fields);
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverTransformFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverTransformFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_1__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverTransformFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_1__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverTransformFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_1__ == -1) {
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverTransformFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Length = '\r';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverTransformFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Ptr = "ChaosVDLogger";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverTransformFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Length = '\x19';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverTransformFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Ptr = "ChaosVDNonSolverTransform";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverTransformFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Fields =
               (FFieldDesc *)
               &`public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverTransformFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::Fields;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverTransformFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.FieldCount = 0xc;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverTransformFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Flags = 2;
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverTransformFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_1__);
        }
      }
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverTransformFields::Initialize(void)'
      ::__l2::Uid_ThreadSafeInit =
           UE::Trace::Private::FEventNode::Initialize
                     (ChaosVDLoggerChaosVDNonSolverTransformEvent,
                      &`public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverTransformFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                       ::__l2::Info);
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverTransformFields::Initialize(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverTransformFields::Initialize(void)'
         ::__l2::Uid_ThreadSafeInit;
}

