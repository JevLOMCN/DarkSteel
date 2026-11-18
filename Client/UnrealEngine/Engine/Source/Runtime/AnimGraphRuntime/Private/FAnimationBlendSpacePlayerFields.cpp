// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 2

// FAnimationBlendSpacePlayerFields @ 146406d50

FAnimationBlendSpacePlayerFields * __thiscall
FAnimationBlendSpacePlayerFields::FAnimationBlendSpacePlayerFields
          (FAnimationBlendSpacePlayerFields *this)

{
  (this->Cycle_Field).FieldDesc.ValueOffset = 0;
  (this->Cycle_Field).FieldDesc.ValueSize = 8;
  (this->Cycle_Field).FieldDesc.NameSize = '\x05';
  (this->Cycle_Field).FieldDesc.TypeInfo = '\x03';
  (this->Cycle_Field).FieldDesc.Name = "Cycle";
  (this->AnimInstanceId_Field).FieldDesc.Name = "AnimInstanceId";
  (this->BlendSpaceId_Field).FieldDesc.Name = "BlendSpaceId";
  (this->NodeId_Field).FieldDesc.Name = "NodeId";
  (this->PositionX_Field).FieldDesc.Name = "PositionX";
  (this->PositionY_Field).FieldDesc.Name = "PositionY";
  (this->PositionZ_Field).FieldDesc.Name = "PositionZ";
  (this->FilteredPositionX_Field).FieldDesc.Name = "FilteredPositionX";
  (this->FilteredPositionY_Field).FieldDesc.Name = "FilteredPositionY";
  (this->FilteredPositionZ_Field).FieldDesc.Name = "FilteredPositionZ";
  (this->DefinitionId_Field).FieldDesc.Name = "";
  (this->Cycle_Field).FieldDesc.Reference = 0;
  (this->AnimInstanceId_Field).FieldDesc.ValueOffset = 8;
  (this->AnimInstanceId_Field).FieldDesc.ValueSize = 8;
  (this->AnimInstanceId_Field).FieldDesc.NameSize = '\x0e';
  (this->AnimInstanceId_Field).FieldDesc.TypeInfo = '\x03';
  (this->AnimInstanceId_Field).FieldDesc.Reference = 0;
  (this->BlendSpaceId_Field).FieldDesc.ValueOffset = 0x10;
  (this->BlendSpaceId_Field).FieldDesc.ValueSize = 8;
  (this->BlendSpaceId_Field).FieldDesc.NameSize = '\f';
  (this->BlendSpaceId_Field).FieldDesc.TypeInfo = '\x03';
  (this->BlendSpaceId_Field).FieldDesc.Reference = 0;
  (this->NodeId_Field).FieldDesc.ValueOffset = 0x18;
  (this->NodeId_Field).FieldDesc.ValueSize = 4;
  (this->NodeId_Field).FieldDesc.NameSize = '\x06';
  (this->NodeId_Field).FieldDesc.TypeInfo = '\x12';
  (this->NodeId_Field).FieldDesc.Reference = 0;
  (this->PositionX_Field).FieldDesc.ValueOffset = 0x1c;
  (this->PositionX_Field).FieldDesc.ValueSize = 4;
  (this->PositionX_Field).FieldDesc.NameSize = '\t';
  (this->PositionX_Field).FieldDesc.TypeInfo = 'B';
  (this->PositionX_Field).FieldDesc.Reference = 0;
  (this->PositionY_Field).FieldDesc.ValueOffset = 0x20;
  (this->PositionY_Field).FieldDesc.ValueSize = 4;
  (this->PositionY_Field).FieldDesc.NameSize = '\t';
  (this->PositionY_Field).FieldDesc.TypeInfo = 'B';
  (this->PositionY_Field).FieldDesc.Reference = 0;
  (this->PositionZ_Field).FieldDesc.ValueOffset = 0x24;
  (this->PositionZ_Field).FieldDesc.ValueSize = 4;
  (this->PositionZ_Field).FieldDesc.NameSize = '\t';
  (this->PositionZ_Field).FieldDesc.TypeInfo = 'B';
  (this->PositionZ_Field).FieldDesc.Reference = 0;
  (this->FilteredPositionX_Field).FieldDesc.ValueOffset = 0x28;
  (this->FilteredPositionX_Field).FieldDesc.ValueSize = 4;
  (this->FilteredPositionX_Field).FieldDesc.NameSize = '\x11';
  (this->FilteredPositionX_Field).FieldDesc.TypeInfo = 'B';
  (this->FilteredPositionX_Field).FieldDesc.Reference = 0;
  (this->FilteredPositionY_Field).FieldDesc.ValueOffset = 0x2c;
  (this->FilteredPositionY_Field).FieldDesc.ValueSize = 4;
  (this->FilteredPositionY_Field).FieldDesc.NameSize = '\x11';
  (this->FilteredPositionY_Field).FieldDesc.TypeInfo = 'B';
  (this->FilteredPositionY_Field).FieldDesc.Reference = 0;
  (this->FilteredPositionZ_Field).FieldDesc.ValueOffset = 0x30;
  (this->FilteredPositionZ_Field).FieldDesc.ValueSize = 4;
  (this->FilteredPositionZ_Field).FieldDesc.NameSize = '\x11';
  (this->FilteredPositionZ_Field).FieldDesc.TypeInfo = 'B';
  (this->FilteredPositionZ_Field).FieldDesc.Reference = 0;
  (this->DefinitionId_Field).FieldDesc.ValueOffset = 0x34;
  (this->DefinitionId_Field).FieldDesc.ValueSize = 0;
  (this->DefinitionId_Field).FieldDesc.NameSize = '\0';
  (this->DefinitionId_Field).FieldDesc.TypeInfo = '\0';
  (this->DefinitionId_Field).FieldDesc.Reference = 0;
  this->EventProps_Private = (TField<10,52,UE::Trace::EventProps>)0x0;
  return this;
}

// Initialize @ 146455770

uint __cdecl FAnimationBlendSpacePlayerFields::Initialize(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `public:_static_unsigned_int___cdecl_FAnimationBlendSpacePlayerFields::Initialize(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FAnimationBlendSpacePlayerFields::Initialize(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FAnimationBlendSpacePlayerFields::Initialize(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationBlendSpacePlayerFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationBlendSpacePlayerFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationBlendSpacePlayerFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          FAnimationBlendSpacePlayerFields
                    (&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationBlendSpacePlayerFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                      ::__l2::Fields);
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationBlendSpacePlayerFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationBlendSpacePlayerFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_1__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationBlendSpacePlayerFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_1__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationBlendSpacePlayerFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_1__ == -1) {
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationBlendSpacePlayerFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Length = '\t';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationBlendSpacePlayerFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Ptr = "Animation";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationBlendSpacePlayerFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Length = '\x10';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationBlendSpacePlayerFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Ptr = "BlendSpacePlayer";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationBlendSpacePlayerFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Fields =
               (FFieldDesc *)
               &`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationBlendSpacePlayerFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::Fields;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationBlendSpacePlayerFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.FieldCount = 10;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationBlendSpacePlayerFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Flags = 0;
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationBlendSpacePlayerFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_1__);
        }
      }
      `public:_static_unsigned_int___cdecl_FAnimationBlendSpacePlayerFields::Initialize(void)'::__l2
      ::Uid_ThreadSafeInit =
           UE::Trace::Private::FEventNode::Initialize
                     (AnimationBlendSpacePlayerEvent,
                      &`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationBlendSpacePlayerFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                       ::__l2::Info);
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FAnimationBlendSpacePlayerFields::Initialize(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_FAnimationBlendSpacePlayerFields::Initialize(void)'::
         __l2::Uid_ThreadSafeInit;
}

