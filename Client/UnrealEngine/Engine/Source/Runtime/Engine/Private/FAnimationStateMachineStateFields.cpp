// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// operator() @ 14753c390

uint __thiscall
`FAnimationStateMachineStateFields::Initialize'::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.ValueOffset = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.ValueSize = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.Name = "Cycle";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.NameSize = '\x05';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.TypeInfo = '\x03';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.AnimInstanceId_Field.FieldDesc.Name = "AnimInstanceId";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NodeId_Field.FieldDesc.Name = "NodeId";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.StateMachineIndex_Field.FieldDesc.Name = "StateMachineIndex";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.StateIndex_Field.FieldDesc.Name = "StateIndex";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.StateWeight_Field.FieldDesc.Name = "StateWeight";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.ElapsedTime_Field.FieldDesc.Name = "ElapsedTime";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.Name = "";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.EventProps_Private = (TField<7,36,UE::Trace::EventProps>)0x0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.AnimInstanceId_Field.FieldDesc.ValueOffset = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.AnimInstanceId_Field.FieldDesc.ValueSize = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.AnimInstanceId_Field.FieldDesc.NameSize = '\x0e';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.AnimInstanceId_Field.FieldDesc.TypeInfo = '\x03';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.AnimInstanceId_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NodeId_Field.FieldDesc.ValueOffset = 0x10;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NodeId_Field.FieldDesc.ValueSize = 4;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NodeId_Field.FieldDesc.NameSize = '\x06';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NodeId_Field.FieldDesc.TypeInfo = '\x12';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NodeId_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.StateMachineIndex_Field.FieldDesc.ValueOffset = 0x14;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.StateMachineIndex_Field.FieldDesc.ValueSize = 4;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.StateMachineIndex_Field.FieldDesc.NameSize = '\x11';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.StateMachineIndex_Field.FieldDesc.TypeInfo = '\x12';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.StateMachineIndex_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.StateIndex_Field.FieldDesc.ValueOffset = 0x18;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.StateIndex_Field.FieldDesc.ValueSize = 4;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.StateIndex_Field.FieldDesc.NameSize = '\n';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.StateIndex_Field.FieldDesc.TypeInfo = '\x12';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.StateIndex_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.StateWeight_Field.FieldDesc.ValueOffset = 0x1c;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.StateWeight_Field.FieldDesc.ValueSize = 4;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.StateWeight_Field.FieldDesc.NameSize = '\v';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.StateWeight_Field.FieldDesc.TypeInfo = 'B';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.StateWeight_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.ElapsedTime_Field.FieldDesc.ValueOffset = 0x20;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.ElapsedTime_Field.FieldDesc.ValueSize = 4;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.ElapsedTime_Field.FieldDesc.NameSize = '\v';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.ElapsedTime_Field.FieldDesc.TypeInfo = 'B';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.ElapsedTime_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueOffset = 0x24;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueSize = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.NameSize = '\0';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.TypeInfo = '\0';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.Reference = 0;
      _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar2 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.LoggerName.Length = '\t';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.LoggerName.Ptr = "Animation";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.EventName.Length = '\x11';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.EventName.Ptr = "StateMachineState";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.Fields =
           (FFieldDesc *)
           &`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::Fields;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.FieldCount = 7;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.Flags = 0;
      _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  uVar1 = UE::Trace::Private::FEventNode::Initialize
                    (AnimationStateMachineStateEvent,
                     &`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                      ::__l2::Info);
  return uVar1;
}

// Initialize @ 147565260

uint __cdecl FAnimationStateMachineStateFields::Initialize(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::
      __l2::Uid_ThreadSafeInit =
           `FAnimationStateMachineStateFields::Initialize'::__l2::<lambda_1>::operator()(local_res8)
      ;
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_FAnimationStateMachineStateFields::Initialize(void)'::
         __l2::Uid_ThreadSafeInit;
}

