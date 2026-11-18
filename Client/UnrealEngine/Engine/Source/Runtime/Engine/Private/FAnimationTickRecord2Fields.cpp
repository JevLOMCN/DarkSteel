// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FAnimationTickRecord2Fields @ 14752faf0

FAnimationTickRecord2Fields * __thiscall
FAnimationTickRecord2Fields::FAnimationTickRecord2Fields(FAnimationTickRecord2Fields *this)

{
  (this->Cycle_Field).FieldDesc.ValueOffset = 0;
  (this->Cycle_Field).FieldDesc.ValueSize = 8;
  (this->Cycle_Field).FieldDesc.NameSize = '\x05';
  (this->Cycle_Field).FieldDesc.TypeInfo = '\x03';
  (this->Cycle_Field).FieldDesc.Name = "Cycle";
  (this->RecordingTime_Field).FieldDesc.Name = "RecordingTime";
  (this->AnimInstanceId_Field).FieldDesc.Name = "AnimInstanceId";
  (this->AssetId_Field).FieldDesc.Name = "AssetId";
  (this->NodeId_Field).FieldDesc.Name = "NodeId";
  (this->BlendWeight_Field).FieldDesc.Name = "BlendWeight";
  (this->PlaybackTime_Field).FieldDesc.Name = "PlaybackTime";
  (this->RootMotionWeight_Field).FieldDesc.Name = "RootMotionWeight";
  (this->PlayRate_Field).FieldDesc.Name = "PlayRate";
  (this->BlendSpacePositionX_Field).FieldDesc.Name = "BlendSpacePositionX";
  (this->BlendSpacePositionY_Field).FieldDesc.Name = "BlendSpacePositionY";
  (this->BlendSpaceFilteredPositionX_Field).FieldDesc.Name = "BlendSpaceFilteredPositionX";
  (this->BlendSpaceFilteredPositionY_Field).FieldDesc.Name = "BlendSpaceFilteredPositionY";
  (this->FrameCounter_Field).FieldDesc.Name = "FrameCounter";
  (this->Looping_Field).FieldDesc.Name = "Looping";
  (this->IsBlendSpace_Field).FieldDesc.Name = "IsBlendSpace";
  (this->Cycle_Field).FieldDesc.Reference = 0;
  (this->RecordingTime_Field).FieldDesc.ValueOffset = 8;
  (this->RecordingTime_Field).FieldDesc.ValueSize = 8;
  (this->RecordingTime_Field).FieldDesc.NameSize = '\r';
  (this->RecordingTime_Field).FieldDesc.TypeInfo = 'C';
  (this->RecordingTime_Field).FieldDesc.Reference = 0;
  (this->AnimInstanceId_Field).FieldDesc.ValueOffset = 0x10;
  (this->AnimInstanceId_Field).FieldDesc.ValueSize = 8;
  (this->AnimInstanceId_Field).FieldDesc.NameSize = '\x0e';
  (this->AnimInstanceId_Field).FieldDesc.TypeInfo = '\x03';
  (this->AnimInstanceId_Field).FieldDesc.Reference = 0;
  (this->AssetId_Field).FieldDesc.ValueOffset = 0x18;
  (this->AssetId_Field).FieldDesc.ValueSize = 8;
  (this->AssetId_Field).FieldDesc.NameSize = '\a';
  (this->AssetId_Field).FieldDesc.TypeInfo = '\x03';
  (this->AssetId_Field).FieldDesc.Reference = 0;
  (this->NodeId_Field).FieldDesc.ValueOffset = 0x20;
  (this->NodeId_Field).FieldDesc.ValueSize = 4;
  (this->NodeId_Field).FieldDesc.NameSize = '\x06';
  (this->NodeId_Field).FieldDesc.TypeInfo = '\x12';
  (this->NodeId_Field).FieldDesc.Reference = 0;
  (this->BlendWeight_Field).FieldDesc.ValueOffset = 0x24;
  (this->BlendWeight_Field).FieldDesc.ValueSize = 4;
  (this->BlendWeight_Field).FieldDesc.NameSize = '\v';
  (this->BlendWeight_Field).FieldDesc.TypeInfo = 'B';
  (this->BlendWeight_Field).FieldDesc.Reference = 0;
  (this->PlaybackTime_Field).FieldDesc.ValueOffset = 0x28;
  (this->PlaybackTime_Field).FieldDesc.ValueSize = 4;
  (this->PlaybackTime_Field).FieldDesc.NameSize = '\f';
  (this->PlaybackTime_Field).FieldDesc.TypeInfo = 'B';
  (this->PlaybackTime_Field).FieldDesc.Reference = 0;
  (this->RootMotionWeight_Field).FieldDesc.ValueOffset = 0x2c;
  (this->RootMotionWeight_Field).FieldDesc.ValueSize = 4;
  (this->RootMotionWeight_Field).FieldDesc.NameSize = '\x10';
  (this->RootMotionWeight_Field).FieldDesc.TypeInfo = 'B';
  (this->RootMotionWeight_Field).FieldDesc.Reference = 0;
  (this->PlayRate_Field).FieldDesc.ValueOffset = 0x30;
  (this->PlayRate_Field).FieldDesc.ValueSize = 4;
  (this->PlayRate_Field).FieldDesc.NameSize = '\b';
  (this->PlayRate_Field).FieldDesc.TypeInfo = 'B';
  (this->PlayRate_Field).FieldDesc.Reference = 0;
  (this->BlendSpacePositionX_Field).FieldDesc.ValueOffset = 0x34;
  (this->BlendSpacePositionX_Field).FieldDesc.ValueSize = 4;
  (this->BlendSpacePositionX_Field).FieldDesc.NameSize = '\x13';
  (this->BlendSpacePositionX_Field).FieldDesc.TypeInfo = 'B';
  (this->BlendSpacePositionX_Field).FieldDesc.Reference = 0;
  (this->BlendSpacePositionY_Field).FieldDesc.ValueOffset = 0x38;
  (this->BlendSpacePositionY_Field).FieldDesc.ValueSize = 4;
  (this->BlendSpacePositionY_Field).FieldDesc.NameSize = '\x13';
  (this->BlendSpacePositionY_Field).FieldDesc.TypeInfo = 'B';
  (this->BlendSpacePositionY_Field).FieldDesc.Reference = 0;
  (this->BlendSpaceFilteredPositionX_Field).FieldDesc.ValueOffset = 0x3c;
  (this->BlendSpaceFilteredPositionX_Field).FieldDesc.ValueSize = 4;
  (this->BlendSpaceFilteredPositionX_Field).FieldDesc.NameSize = '\x1b';
  (this->BlendSpaceFilteredPositionX_Field).FieldDesc.TypeInfo = 'B';
  (this->BlendSpaceFilteredPositionX_Field).FieldDesc.Reference = 0;
  (this->BlendSpaceFilteredPositionY_Field).FieldDesc.ValueOffset = 0x40;
  (this->BlendSpaceFilteredPositionY_Field).FieldDesc.ValueSize = 4;
  (this->BlendSpaceFilteredPositionY_Field).FieldDesc.NameSize = '\x1b';
  (this->BlendSpaceFilteredPositionY_Field).FieldDesc.TypeInfo = 'B';
  (this->BlendSpaceFilteredPositionY_Field).FieldDesc.Reference = 0;
  (this->FrameCounter_Field).FieldDesc.ValueOffset = 0x44;
  (this->FrameCounter_Field).FieldDesc.ValueSize = 2;
  (this->FrameCounter_Field).FieldDesc.NameSize = '\f';
  (this->FrameCounter_Field).FieldDesc.TypeInfo = '\x01';
  (this->FrameCounter_Field).FieldDesc.Reference = 0;
  (this->Looping_Field).FieldDesc.ValueOffset = 0x46;
  (this->Looping_Field).FieldDesc.ValueSize = 1;
  (this->Looping_Field).FieldDesc.NameSize = '\a';
  (this->Looping_Field).FieldDesc.TypeInfo = '\0';
  (this->Looping_Field).FieldDesc.Reference = 0;
  (this->IsBlendSpace_Field).FieldDesc.ValueOffset = 0x47;
  (this->IsBlendSpace_Field).FieldDesc.ValueSize = 1;
  (this->IsBlendSpace_Field).FieldDesc.NameSize = '\f';
  (this->IsBlendSpace_Field).FieldDesc.TypeInfo = '\0';
  (this->IsBlendSpace_Field).FieldDesc.Reference = 0;
  (this->DefinitionId_Field).FieldDesc.ValueOffset = 0x48;
  (this->DefinitionId_Field).FieldDesc.ValueSize = 0;
  (this->DefinitionId_Field).FieldDesc.Name = "";
  (this->DefinitionId_Field).FieldDesc.NameSize = '\0';
  (this->DefinitionId_Field).FieldDesc.TypeInfo = '\0';
  (this->DefinitionId_Field).FieldDesc.Reference = 0;
  this->EventProps_Private = (TField<16,72,UE::Trace::EventProps>)0x0;
  return this;
}

// Initialize @ 1475656d0

uint __cdecl FAnimationTickRecord2Fields::Initialize(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `public:_static_unsigned_int___cdecl_FAnimationTickRecord2Fields::Initialize(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FAnimationTickRecord2Fields::Initialize(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FAnimationTickRecord2Fields::Initialize(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationTickRecord2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationTickRecord2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationTickRecord2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          FAnimationTickRecord2Fields
                    (&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationTickRecord2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                      ::__l2::Fields);
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationTickRecord2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationTickRecord2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_1__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationTickRecord2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_1__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationTickRecord2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_1__ == -1) {
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationTickRecord2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Length = '\t';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationTickRecord2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Ptr = "Animation";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationTickRecord2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Length = '\v';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationTickRecord2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Ptr = "TickRecord2";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationTickRecord2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Fields =
               (FFieldDesc *)
               &`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationTickRecord2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::Fields;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationTickRecord2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.FieldCount = 0x10;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationTickRecord2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Flags = 0;
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationTickRecord2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_1__);
        }
      }
      `public:_static_unsigned_int___cdecl_FAnimationTickRecord2Fields::Initialize(void)'::__l2::
      Uid_ThreadSafeInit =
           UE::Trace::Private::FEventNode::Initialize
                     (AnimationTickRecord2Event,
                      &`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationTickRecord2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                       ::__l2::Info);
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FAnimationTickRecord2Fields::Initialize(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_FAnimationTickRecord2Fields::Initialize(void)'::__l2::
         Uid_ThreadSafeInit;
}

