// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// operator() @ 14753ae90

uint __thiscall
`FAnimationAnimNodeValueClassFields::Initialize'::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.ValueOffset = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.ValueSize = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.NameSize = '\x05';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.TypeInfo = '\x03';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.Name = "Cycle";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Cycle_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RecordingTime_Field.FieldDesc.Name = "RecordingTime";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.AnimInstanceId_Field.FieldDesc.Name = "AnimInstanceId";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Value_Field.FieldDesc.Name = "Value";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NodeId_Field.FieldDesc.Name = "NodeId";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.FrameCounter_Field.FieldDesc.Name = "FrameCounter";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Key_Field.FieldDesc.Name = "Key";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.Name = "";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.EventProps_Private = (TField<263,38,UE::Trace::EventProps>)0x0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RecordingTime_Field.FieldDesc.ValueOffset = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RecordingTime_Field.FieldDesc.ValueSize = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RecordingTime_Field.FieldDesc.NameSize = '\r';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RecordingTime_Field.FieldDesc.TypeInfo = 'C';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.RecordingTime_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.AnimInstanceId_Field.FieldDesc.ValueOffset = 0x10;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.AnimInstanceId_Field.FieldDesc.ValueSize = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.AnimInstanceId_Field.FieldDesc.NameSize = '\x0e';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.AnimInstanceId_Field.FieldDesc.TypeInfo = '\x03';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.AnimInstanceId_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Value_Field.FieldDesc.ValueOffset = 0x18;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Value_Field.FieldDesc.ValueSize = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Value_Field.FieldDesc.NameSize = '\x05';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Value_Field.FieldDesc.TypeInfo = '\x03';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Value_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NodeId_Field.FieldDesc.ValueOffset = 0x20;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NodeId_Field.FieldDesc.ValueSize = 4;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NodeId_Field.FieldDesc.NameSize = '\x06';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NodeId_Field.FieldDesc.TypeInfo = '\x12';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.NodeId_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.FrameCounter_Field.FieldDesc.ValueOffset = 0x24;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.FrameCounter_Field.FieldDesc.ValueSize = 2;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.FrameCounter_Field.FieldDesc.NameSize = '\f';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.FrameCounter_Field.FieldDesc.TypeInfo = '\x01';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.FrameCounter_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Key_Field.FieldDesc.ValueOffset = 0x26;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Key_Field.FieldDesc.ValueSize = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Key_Field.FieldDesc.NameSize = '\x03';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Key_Field.FieldDesc.TypeInfo = 0x89;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Key_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueOffset = 0x26;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueSize = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.NameSize = '\0';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.TypeInfo = '\0';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.Reference = 0;
      _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar2 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.LoggerName.Length = '\t';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.LoggerName.Ptr = "Animation";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.EventName.Length = '\x12';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.EventName.Ptr = "AnimNodeValueClass";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.Fields =
           (FFieldDesc *)
           &`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::Fields;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.FieldCount = 7;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.Flags = 2;
      _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  uVar1 = UE::Trace::Private::FEventNode::Initialize
                    (AnimationAnimNodeValueClassEvent,
                     &`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                      ::__l2::Info);
  return uVar1;
}

// Initialize @ 147564370

uint __cdecl FAnimationAnimNodeValueClassFields::Initialize(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'::
      __l2::Uid_ThreadSafeInit =
           `FAnimationAnimNodeValueClassFields::Initialize'::__l2::<lambda_1>::operator()
                     (local_res8);
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_FAnimationAnimNodeValueClassFields::Initialize(void)'
         ::__l2::Uid_ThreadSafeInit;
}

