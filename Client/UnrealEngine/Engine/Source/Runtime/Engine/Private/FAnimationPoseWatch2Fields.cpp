// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FAnimationPoseWatch2Fields @ 14752f6d0

FAnimationPoseWatch2Fields * __thiscall
FAnimationPoseWatch2Fields::FAnimationPoseWatch2Fields(FAnimationPoseWatch2Fields *this)

{
  (this->Cycle_Field).FieldDesc.ValueOffset = 0;
  (this->Cycle_Field).FieldDesc.ValueSize = 8;
  (this->Cycle_Field).FieldDesc.NameSize = '\x05';
  (this->Cycle_Field).FieldDesc.TypeInfo = '\x03';
  (this->Cycle_Field).FieldDesc.Name = "Cycle";
  (this->RecordingTime_Field).FieldDesc.Name = "RecordingTime";
  (this->ComponentId_Field).FieldDesc.Name = "ComponentId";
  (this->AnimInstanceId_Field).FieldDesc.Name = "AnimInstanceId";
  (this->PoseWatchId_Field).FieldDesc.Name = "PoseWatchId";
  (this->NameId_Field).FieldDesc.Name = "NameId";
  (this->Color_Field).FieldDesc.Name = "Color";
  (this->WorldTransform_Field).FieldDesc.Name = "WorldTransform";
  (this->BoneTransforms_Field).FieldDesc.Name = "BoneTransforms";
  (this->CurveValues_Field).FieldDesc.Name = "CurveValues";
  (this->CurveIds_Field).FieldDesc.Name = "CurveIds";
  (this->RequiredBones_Field).FieldDesc.Name = "RequiredBones";
  (this->bIsEnabled_Field).FieldDesc.Name = "bIsEnabled";
  (this->DefinitionId_Field).FieldDesc.Name = "";
  (this->Cycle_Field).FieldDesc.Reference = 0;
  (this->RecordingTime_Field).FieldDesc.ValueOffset = 8;
  (this->RecordingTime_Field).FieldDesc.ValueSize = 8;
  (this->RecordingTime_Field).FieldDesc.NameSize = '\r';
  (this->RecordingTime_Field).FieldDesc.TypeInfo = 'C';
  (this->RecordingTime_Field).FieldDesc.Reference = 0;
  (this->ComponentId_Field).FieldDesc.ValueOffset = 0x10;
  (this->ComponentId_Field).FieldDesc.ValueSize = 8;
  (this->ComponentId_Field).FieldDesc.NameSize = '\v';
  (this->ComponentId_Field).FieldDesc.TypeInfo = '\x03';
  (this->ComponentId_Field).FieldDesc.Reference = 0;
  (this->AnimInstanceId_Field).FieldDesc.ValueOffset = 0x18;
  (this->AnimInstanceId_Field).FieldDesc.ValueSize = 8;
  (this->AnimInstanceId_Field).FieldDesc.NameSize = '\x0e';
  (this->AnimInstanceId_Field).FieldDesc.TypeInfo = '\x03';
  (this->AnimInstanceId_Field).FieldDesc.Reference = 0;
  (this->PoseWatchId_Field).FieldDesc.ValueOffset = 0x20;
  (this->PoseWatchId_Field).FieldDesc.ValueSize = 8;
  (this->PoseWatchId_Field).FieldDesc.NameSize = '\v';
  (this->PoseWatchId_Field).FieldDesc.TypeInfo = '\x03';
  (this->PoseWatchId_Field).FieldDesc.Reference = 0;
  (this->NameId_Field).FieldDesc.ValueOffset = 0x28;
  (this->NameId_Field).FieldDesc.ValueSize = 4;
  (this->NameId_Field).FieldDesc.NameSize = '\x06';
  (this->NameId_Field).FieldDesc.TypeInfo = '\x02';
  (this->NameId_Field).FieldDesc.Reference = 0;
  (this->Color_Field).FieldDesc.ValueOffset = 0x2c;
  (this->Color_Field).FieldDesc.ValueSize = 4;
  (this->Color_Field).FieldDesc.NameSize = '\x05';
  (this->Color_Field).FieldDesc.TypeInfo = '\x02';
  (this->Color_Field).FieldDesc.Reference = 0;
  (this->WorldTransform_Field).FieldDesc.ValueOffset = 0x30;
  (this->WorldTransform_Field).FieldDesc.ValueSize = 0;
  (this->WorldTransform_Field).FieldDesc.NameSize = '\x0e';
  (this->WorldTransform_Field).FieldDesc.TypeInfo = 0xc2;
  (this->WorldTransform_Field).FieldDesc.Reference = 0;
  (this->BoneTransforms_Field).FieldDesc.ValueOffset = 0x30;
  (this->BoneTransforms_Field).FieldDesc.ValueSize = 0;
  (this->BoneTransforms_Field).FieldDesc.NameSize = '\x0e';
  (this->BoneTransforms_Field).FieldDesc.TypeInfo = 0xc2;
  (this->BoneTransforms_Field).FieldDesc.Reference = 0;
  (this->CurveValues_Field).FieldDesc.ValueOffset = 0x30;
  (this->CurveValues_Field).FieldDesc.ValueSize = 0;
  (this->CurveValues_Field).FieldDesc.NameSize = '\v';
  (this->CurveValues_Field).FieldDesc.TypeInfo = 0xc2;
  (this->CurveValues_Field).FieldDesc.Reference = 0;
  (this->CurveIds_Field).FieldDesc.ValueOffset = 0x30;
  (this->CurveIds_Field).FieldDesc.ValueSize = 0;
  (this->CurveIds_Field).FieldDesc.NameSize = '\b';
  (this->CurveIds_Field).FieldDesc.TypeInfo = 0x82;
  (this->CurveIds_Field).FieldDesc.Reference = 0;
  (this->RequiredBones_Field).FieldDesc.ValueOffset = 0x30;
  (this->RequiredBones_Field).FieldDesc.ValueSize = 0;
  (this->RequiredBones_Field).FieldDesc.NameSize = '\r';
  (this->RequiredBones_Field).FieldDesc.TypeInfo = 0x81;
  (this->RequiredBones_Field).FieldDesc.Reference = 0;
  (this->bIsEnabled_Field).FieldDesc.ValueOffset = 0x30;
  (this->bIsEnabled_Field).FieldDesc.ValueSize = 1;
  (this->bIsEnabled_Field).FieldDesc.NameSize = '\n';
  (this->bIsEnabled_Field).FieldDesc.TypeInfo = '\0';
  (this->bIsEnabled_Field).FieldDesc.Reference = 0;
  (this->DefinitionId_Field).FieldDesc.ValueOffset = 0x31;
  (this->DefinitionId_Field).FieldDesc.ValueSize = 0;
  (this->DefinitionId_Field).FieldDesc.NameSize = '\0';
  (this->DefinitionId_Field).FieldDesc.TypeInfo = '\0';
  (this->DefinitionId_Field).FieldDesc.Reference = 0;
  this->EventProps_Private = (TField<1293,49,UE::Trace::EventProps>)0x0;
  return this;
}

// Initialize @ 147564c70

uint __cdecl FAnimationPoseWatch2Fields::Initialize(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `public:_static_unsigned_int___cdecl_FAnimationPoseWatch2Fields::Initialize(void)'::
                __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FAnimationPoseWatch2Fields::Initialize(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FAnimationPoseWatch2Fields::Initialize(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationPoseWatch2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationPoseWatch2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationPoseWatch2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          FAnimationPoseWatch2Fields
                    (&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationPoseWatch2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                      ::__l2::Fields);
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationPoseWatch2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationPoseWatch2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_1__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationPoseWatch2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_1__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationPoseWatch2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_1__ == -1) {
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationPoseWatch2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Length = '\t';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationPoseWatch2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Ptr = "Animation";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationPoseWatch2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Length = '\n';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationPoseWatch2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Ptr = "PoseWatch2";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationPoseWatch2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Fields =
               (FFieldDesc *)
               &`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationPoseWatch2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::Fields;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationPoseWatch2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.FieldCount = 0xd;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationPoseWatch2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Flags = 2;
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationPoseWatch2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_1__);
        }
      }
      `public:_static_unsigned_int___cdecl_FAnimationPoseWatch2Fields::Initialize(void)'::__l2::
      Uid_ThreadSafeInit =
           UE::Trace::Private::FEventNode::Initialize
                     (AnimationPoseWatch2Event,
                      &`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationPoseWatch2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                       ::__l2::Info);
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FAnimationPoseWatch2Fields::Initialize(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_FAnimationPoseWatch2Fields::Initialize(void)'::__l2::
         Uid_ThreadSafeInit;
}

