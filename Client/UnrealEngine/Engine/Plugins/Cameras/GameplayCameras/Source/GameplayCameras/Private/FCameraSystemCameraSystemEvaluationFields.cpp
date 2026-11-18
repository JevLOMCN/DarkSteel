// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// FCameraSystemCameraSystemEvaluationFields @ 14d58e020

FCameraSystemCameraSystemEvaluationFields * __thiscall
UE::Cameras::FCameraSystemCameraSystemEvaluationFields::FCameraSystemCameraSystemEvaluationFields
          (FCameraSystemCameraSystemEvaluationFields *this)

{
  (this->Cycle_Field).FieldDesc.ValueOffset = 0;
  (this->Cycle_Field).FieldDesc.ValueSize = 8;
  (this->Cycle_Field).FieldDesc.NameSize = '\x05';
  (this->Cycle_Field).FieldDesc.TypeInfo = '\x03';
  (this->Cycle_Field).FieldDesc.Name = "Cycle";
  (this->RecordingTime_Field).FieldDesc.Name = "RecordingTime";
  (this->CameraSystemDebugID_Field).FieldDesc.Name = "CameraSystemDebugID";
  (this->EvaluatedLocationX_Field).FieldDesc.Name = "EvaluatedLocationX";
  (this->EvaluatedLocationY_Field).FieldDesc.Name = "EvaluatedLocationY";
  (this->EvaluatedLocationZ_Field).FieldDesc.Name = "EvaluatedLocationZ";
  (this->EvaluatedRotationPitch_Field).FieldDesc.Name = "EvaluatedRotationPitch";
  (this->EvaluatedRotationYaw_Field).FieldDesc.Name = "EvaluatedRotationYaw";
  (this->EvaluatedRotationRoll_Field).FieldDesc.Name = "EvaluatedRotationRoll";
  (this->EvaluatedFieldOfView_Field).FieldDesc.Name = "EvaluatedFieldOfView";
  (this->SerializedBlocks_Field).FieldDesc.Name = "SerializedBlocks";
  (this->DefinitionId_Field).FieldDesc.Name = "";
  (this->Cycle_Field).FieldDesc.Reference = 0;
  (this->RecordingTime_Field).FieldDesc.ValueOffset = 8;
  (this->RecordingTime_Field).FieldDesc.ValueSize = 8;
  (this->RecordingTime_Field).FieldDesc.NameSize = '\r';
  (this->RecordingTime_Field).FieldDesc.TypeInfo = 'C';
  (this->RecordingTime_Field).FieldDesc.Reference = 0;
  (this->CameraSystemDebugID_Field).FieldDesc.ValueOffset = 0x10;
  (this->CameraSystemDebugID_Field).FieldDesc.ValueSize = 4;
  (this->CameraSystemDebugID_Field).FieldDesc.NameSize = '\x13';
  (this->CameraSystemDebugID_Field).FieldDesc.TypeInfo = '\x12';
  (this->CameraSystemDebugID_Field).FieldDesc.Reference = 0;
  (this->EvaluatedLocationX_Field).FieldDesc.ValueOffset = 0x14;
  (this->EvaluatedLocationX_Field).FieldDesc.ValueSize = 8;
  (this->EvaluatedLocationX_Field).FieldDesc.NameSize = '\x12';
  (this->EvaluatedLocationX_Field).FieldDesc.TypeInfo = 'C';
  (this->EvaluatedLocationX_Field).FieldDesc.Reference = 0;
  (this->EvaluatedLocationY_Field).FieldDesc.ValueOffset = 0x1c;
  (this->EvaluatedLocationY_Field).FieldDesc.ValueSize = 8;
  (this->EvaluatedLocationY_Field).FieldDesc.NameSize = '\x12';
  (this->EvaluatedLocationY_Field).FieldDesc.TypeInfo = 'C';
  (this->EvaluatedLocationY_Field).FieldDesc.Reference = 0;
  (this->EvaluatedLocationZ_Field).FieldDesc.ValueOffset = 0x24;
  (this->EvaluatedLocationZ_Field).FieldDesc.ValueSize = 8;
  (this->EvaluatedLocationZ_Field).FieldDesc.NameSize = '\x12';
  (this->EvaluatedLocationZ_Field).FieldDesc.TypeInfo = 'C';
  (this->EvaluatedLocationZ_Field).FieldDesc.Reference = 0;
  (this->EvaluatedRotationPitch_Field).FieldDesc.ValueOffset = 0x2c;
  (this->EvaluatedRotationPitch_Field).FieldDesc.ValueSize = 8;
  (this->EvaluatedRotationPitch_Field).FieldDesc.NameSize = '\x16';
  (this->EvaluatedRotationPitch_Field).FieldDesc.TypeInfo = 'C';
  (this->EvaluatedRotationPitch_Field).FieldDesc.Reference = 0;
  (this->EvaluatedRotationYaw_Field).FieldDesc.ValueOffset = 0x34;
  (this->EvaluatedRotationYaw_Field).FieldDesc.ValueSize = 8;
  (this->EvaluatedRotationYaw_Field).FieldDesc.NameSize = '\x14';
  (this->EvaluatedRotationYaw_Field).FieldDesc.TypeInfo = 'C';
  (this->EvaluatedRotationYaw_Field).FieldDesc.Reference = 0;
  (this->EvaluatedRotationRoll_Field).FieldDesc.ValueOffset = 0x3c;
  (this->EvaluatedRotationRoll_Field).FieldDesc.ValueSize = 8;
  (this->EvaluatedRotationRoll_Field).FieldDesc.NameSize = '\x15';
  (this->EvaluatedRotationRoll_Field).FieldDesc.TypeInfo = 'C';
  (this->EvaluatedRotationRoll_Field).FieldDesc.Reference = 0;
  (this->EvaluatedFieldOfView_Field).FieldDesc.ValueOffset = 0x44;
  (this->EvaluatedFieldOfView_Field).FieldDesc.ValueSize = 4;
  (this->EvaluatedFieldOfView_Field).FieldDesc.NameSize = '\x14';
  (this->EvaluatedFieldOfView_Field).FieldDesc.TypeInfo = 'B';
  (this->EvaluatedFieldOfView_Field).FieldDesc.Reference = 0;
  (this->SerializedBlocks_Field).FieldDesc.ValueOffset = 0x48;
  (this->SerializedBlocks_Field).FieldDesc.ValueSize = 0;
  (this->SerializedBlocks_Field).FieldDesc.NameSize = '\x10';
  (this->SerializedBlocks_Field).FieldDesc.TypeInfo = 0x80;
  (this->SerializedBlocks_Field).FieldDesc.Reference = 0;
  (this->DefinitionId_Field).FieldDesc.ValueOffset = 0x48;
  (this->DefinitionId_Field).FieldDesc.ValueSize = 0;
  (this->DefinitionId_Field).FieldDesc.NameSize = '\0';
  (this->DefinitionId_Field).FieldDesc.TypeInfo = '\0';
  (this->DefinitionId_Field).FieldDesc.Reference = 0;
  this->EventProps_Private = (TField<267,72,UE::Trace::EventProps>)0x0;
  return this;
}

// Initialize @ 14d5ae540

uint __cdecl UE::Cameras::FCameraSystemCameraSystemEvaluationFields::Initialize(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `public:_static_unsigned_int___cdecl_UE::Cameras::FCameraSystemCameraSystemEvaluationFields::Initialize(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_UE::Cameras::FCameraSystemCameraSystemEvaluationFields::Initialize(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_UE::Cameras::FCameraSystemCameraSystemEvaluationFields::Initialize(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_UE::Cameras::FCameraSystemCameraSystemEvaluationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_UE::Cameras::FCameraSystemCameraSystemEvaluationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_UE::Cameras::FCameraSystemCameraSystemEvaluationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          FCameraSystemCameraSystemEvaluationFields
                    (&`public:___cdecl_`public:_static_unsigned_int___cdecl_UE::Cameras::FCameraSystemCameraSystemEvaluationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                      ::__l2::Fields);
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_UE::Cameras::FCameraSystemCameraSystemEvaluationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_UE::Cameras::FCameraSystemCameraSystemEvaluationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_1__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_UE::Cameras::FCameraSystemCameraSystemEvaluationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_1__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_UE::Cameras::FCameraSystemCameraSystemEvaluationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_1__ == -1) {
          `public:___cdecl_`public:_static_unsigned_int___cdecl_UE::Cameras::FCameraSystemCameraSystemEvaluationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Length = '\f';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_UE::Cameras::FCameraSystemCameraSystemEvaluationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Ptr = "CameraSystem";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_UE::Cameras::FCameraSystemCameraSystemEvaluationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Length = '\x16';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_UE::Cameras::FCameraSystemCameraSystemEvaluationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Ptr = "CameraSystemEvaluation";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_UE::Cameras::FCameraSystemCameraSystemEvaluationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Fields =
               (FFieldDesc *)
               &`public:___cdecl_`public:_static_unsigned_int___cdecl_UE::Cameras::FCameraSystemCameraSystemEvaluationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::Fields;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_UE::Cameras::FCameraSystemCameraSystemEvaluationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.FieldCount = 0xb;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_UE::Cameras::FCameraSystemCameraSystemEvaluationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Flags = 2;
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_UE::Cameras::FCameraSystemCameraSystemEvaluationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_1__);
        }
      }
      `public:_static_unsigned_int___cdecl_UE::Cameras::FCameraSystemCameraSystemEvaluationFields::Initialize(void)'
      ::__l2::Uid_ThreadSafeInit =
           Trace::Private::FEventNode::Initialize
                     (CameraSystemCameraSystemEvaluationEvent,
                      &`public:___cdecl_`public:_static_unsigned_int___cdecl_UE::Cameras::FCameraSystemCameraSystemEvaluationFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                       ::__l2::Info);
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_UE::Cameras::FCameraSystemCameraSystemEvaluationFields::Initialize(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_UE::Cameras::FCameraSystemCameraSystemEvaluationFields::Initialize(void)'
         ::__l2::Uid_ThreadSafeInit;
}

