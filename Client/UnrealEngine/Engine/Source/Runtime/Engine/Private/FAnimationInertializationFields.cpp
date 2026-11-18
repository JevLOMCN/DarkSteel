// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// operator() @ 14753bed0

uint __thiscall
`FAnimationInertializationFields::Initialize'::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.ValueOffset = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.ValueSize = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.Name = "Cycle";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.NameSize = '\x05';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.TypeInfo = '\x03';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RecordingTime_Field.FieldDesc.Name = "RecordingTime";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.ComponentId_Field.FieldDesc.Name = "ComponentId";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.AnimInstanceId_Field.FieldDesc.Name = "AnimInstanceId";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NodeId_Field.FieldDesc.Name = "NodeId";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Weight_Field.FieldDesc.Name = "Weight";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Type_Field.FieldDesc.Name = "Type";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.Name = "";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.EventProps_Private = (TField<7,41,UE::Trace::EventProps>)0x0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RecordingTime_Field.FieldDesc.ValueOffset = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RecordingTime_Field.FieldDesc.ValueSize = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RecordingTime_Field.FieldDesc.NameSize = '\r';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RecordingTime_Field.FieldDesc.TypeInfo = 'C';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RecordingTime_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.ComponentId_Field.FieldDesc.ValueOffset = 0x10;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.ComponentId_Field.FieldDesc.ValueSize = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.ComponentId_Field.FieldDesc.NameSize = '\v';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.ComponentId_Field.FieldDesc.TypeInfo = '\x03';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.ComponentId_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.AnimInstanceId_Field.FieldDesc.ValueOffset = 0x18;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.AnimInstanceId_Field.FieldDesc.ValueSize = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.AnimInstanceId_Field.FieldDesc.NameSize = '\x0e';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.AnimInstanceId_Field.FieldDesc.TypeInfo = '\x03';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.AnimInstanceId_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NodeId_Field.FieldDesc.ValueOffset = 0x20;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NodeId_Field.FieldDesc.ValueSize = 4;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NodeId_Field.FieldDesc.NameSize = '\x06';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NodeId_Field.FieldDesc.TypeInfo = '\x02';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NodeId_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Weight_Field.FieldDesc.ValueOffset = 0x24;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Weight_Field.FieldDesc.ValueSize = 4;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Weight_Field.FieldDesc.NameSize = '\x06';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Weight_Field.FieldDesc.TypeInfo = 'B';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Weight_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Type_Field.FieldDesc.ValueOffset = 0x28;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Type_Field.FieldDesc.ValueSize = 1;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Type_Field.FieldDesc.NameSize = '\x04';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Type_Field.FieldDesc.TypeInfo = '\0';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Type_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueOffset = 0x29;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueSize = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.NameSize = '\0';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.TypeInfo = '\0';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.Reference = 0;
      _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar2 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.LoggerName.Length = '\t';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.LoggerName.Ptr = "Animation";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.EventName.Length = '\x0f';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.EventName.Ptr = "Inertialization";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.Fields =
           (FFieldDesc *)
           &`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::Fields;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.FieldCount = 7;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.Flags = 0;
      _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  uVar1 = UE::Trace::Private::FEventNode::Initialize
                    (AnimationInertializationEvent,
                     &`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                      ::__l2::Info);
  return uVar1;
}

// Initialize @ 1475648c0

uint __cdecl FAnimationInertializationFields::Initialize(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::__l2
      ::Uid_ThreadSafeInit =
           `FAnimationInertializationFields::Initialize'::__l2::<lambda_1>::operator()(local_res8);
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_FAnimationInertializationFields::Initialize(void)'::
         __l2::Uid_ThreadSafeInit;
}

