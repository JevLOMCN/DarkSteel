// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// operator() @ 14374a5b0

uint __thiscall
`FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize'::__l2::<lambda_1>::operator()
          (void *this)

{
  uint uVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.SolverID_Field.FieldDesc.ValueOffset = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.SolverID_Field.FieldDesc.ValueSize = 4;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.SolverID_Field.FieldDesc.Name = "SolverID";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.SolverID_Field.FieldDesc.NameSize = '\b';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.SolverID_Field.FieldDesc.TypeInfo = '\x12';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.Name = "Cycle";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.PositionX_Field.FieldDesc.Name = "PositionX";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.PositionY_Field.FieldDesc.Name = "PositionY";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.PositionZ_Field.FieldDesc.Name = "PositionZ";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RotationX_Field.FieldDesc.Name = "RotationX";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RotationY_Field.FieldDesc.Name = "RotationY";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RotationZ_Field.FieldDesc.Name = "RotationZ";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RotationW_Field.FieldDesc.Name = "RotationW";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.Name = "";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.EventProps_Private = (TField<9,68,UE::Trace::EventProps>)0x0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.SolverID_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.ValueOffset = 4;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.ValueSize = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.NameSize = '\x05';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.TypeInfo = '\x03';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.PositionX_Field.FieldDesc.ValueOffset = 0xc;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.PositionX_Field.FieldDesc.ValueSize = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.PositionX_Field.FieldDesc.NameSize = '\t';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.PositionX_Field.FieldDesc.TypeInfo = 'C';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.PositionX_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.PositionY_Field.FieldDesc.ValueOffset = 0x14;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.PositionY_Field.FieldDesc.ValueSize = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.PositionY_Field.FieldDesc.NameSize = '\t';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.PositionY_Field.FieldDesc.TypeInfo = 'C';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.PositionY_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.PositionZ_Field.FieldDesc.ValueOffset = 0x1c;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.PositionZ_Field.FieldDesc.ValueSize = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.PositionZ_Field.FieldDesc.NameSize = '\t';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.PositionZ_Field.FieldDesc.TypeInfo = 'C';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.PositionZ_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RotationX_Field.FieldDesc.ValueOffset = 0x24;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RotationX_Field.FieldDesc.ValueSize = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RotationX_Field.FieldDesc.NameSize = '\t';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RotationX_Field.FieldDesc.TypeInfo = 'C';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RotationX_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RotationY_Field.FieldDesc.ValueOffset = 0x2c;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RotationY_Field.FieldDesc.ValueSize = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RotationY_Field.FieldDesc.NameSize = '\t';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RotationY_Field.FieldDesc.TypeInfo = 'C';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RotationY_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RotationZ_Field.FieldDesc.ValueOffset = 0x34;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RotationZ_Field.FieldDesc.ValueSize = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RotationZ_Field.FieldDesc.NameSize = '\t';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RotationZ_Field.FieldDesc.TypeInfo = 'C';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RotationZ_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RotationW_Field.FieldDesc.ValueOffset = 0x3c;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RotationW_Field.FieldDesc.ValueSize = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RotationW_Field.FieldDesc.NameSize = '\t';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RotationW_Field.FieldDesc.TypeInfo = 'C';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RotationW_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueOffset = 0x44;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueSize = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.NameSize = '\0';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.TypeInfo = '\0';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.Reference = 0;
      _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar2 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.LoggerName.Length = '\r';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.LoggerName.Ptr = "ChaosVDLogger";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.EventName.Length = '\x1c';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.EventName.Ptr = "ChaosVDSolverSimulationSpace";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.Fields =
           (FFieldDesc *)
           &`public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::Fields;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.FieldCount = 9;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.Flags = 0;
      _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  uVar1 = UE::Trace::Private::FEventNode::Initialize
                    (ChaosVDLoggerChaosVDSolverSimulationSpaceEvent,
                     &`public:___cdecl_`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                      ::__l2::Info);
  return uVar1;
}

// Initialize @ 1437964e0

uint __cdecl FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'
      ::__l2::Uid_ThreadSafeInit =
           `FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize'::__l2::<lambda_1>::
           operator()(local_res8);
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize(void)'
         ::__l2::Uid_ThreadSafeInit;
}

