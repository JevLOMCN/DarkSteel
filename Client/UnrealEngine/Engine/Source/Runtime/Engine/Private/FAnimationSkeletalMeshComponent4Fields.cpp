// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FAnimationSkeletalMeshComponent4Fields @ 14752f8e0

FAnimationSkeletalMeshComponent4Fields * __thiscall
FAnimationSkeletalMeshComponent4Fields::FAnimationSkeletalMeshComponent4Fields
          (FAnimationSkeletalMeshComponent4Fields *this)

{
  (this->Cycle_Field).FieldDesc.ValueOffset = 0;
  (this->Cycle_Field).FieldDesc.ValueSize = 8;
  (this->Cycle_Field).FieldDesc.NameSize = '\x05';
  (this->Cycle_Field).FieldDesc.TypeInfo = '\x03';
  (this->Cycle_Field).FieldDesc.Name = "Cycle";
  (this->RecordingTime_Field).FieldDesc.Name = "RecordingTime";
  (this->ComponentId_Field).FieldDesc.Name = "ComponentId";
  (this->MeshId_Field).FieldDesc.Name = "MeshId";
  (this->IsVisible_Field).FieldDesc.Name = "IsVisible";
  (this->ComponentToWorld_Field).FieldDesc.Name = "ComponentToWorld";
  (this->Pose_Field).FieldDesc.Name = "Pose";
  (this->CurveIds_Field).FieldDesc.Name = "CurveIds";
  (this->CurveValues_Field).FieldDesc.Name = "CurveValues";
  (this->LodIndex_Field).FieldDesc.Name = "LodIndex";
  (this->FrameCounter_Field).FieldDesc.Name = "FrameCounter";
  (this->ExternalMorphSetWeights_Field).FieldDesc.Name = "ExternalMorphSetWeights";
  (this->ExternalMorphSetWeightCounts_Field).FieldDesc.Name = "ExternalMorphSetWeightCounts";
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
  (this->MeshId_Field).FieldDesc.ValueOffset = 0x18;
  (this->MeshId_Field).FieldDesc.ValueSize = 8;
  (this->MeshId_Field).FieldDesc.NameSize = '\x06';
  (this->MeshId_Field).FieldDesc.TypeInfo = '\x03';
  (this->MeshId_Field).FieldDesc.Reference = 0;
  (this->IsVisible_Field).FieldDesc.ValueOffset = 0x20;
  (this->IsVisible_Field).FieldDesc.ValueSize = 1;
  (this->IsVisible_Field).FieldDesc.NameSize = '\t';
  (this->IsVisible_Field).FieldDesc.TypeInfo = '\0';
  (this->IsVisible_Field).FieldDesc.Reference = 0;
  (this->ComponentToWorld_Field).FieldDesc.ValueOffset = 0x21;
  (this->ComponentToWorld_Field).FieldDesc.ValueSize = 0;
  (this->ComponentToWorld_Field).FieldDesc.NameSize = '\x10';
  (this->ComponentToWorld_Field).FieldDesc.TypeInfo = 0xc2;
  (this->ComponentToWorld_Field).FieldDesc.Reference = 0;
  (this->Pose_Field).FieldDesc.ValueOffset = 0x21;
  (this->Pose_Field).FieldDesc.ValueSize = 0;
  (this->Pose_Field).FieldDesc.NameSize = '\x04';
  (this->Pose_Field).FieldDesc.TypeInfo = 0xc2;
  (this->Pose_Field).FieldDesc.Reference = 0;
  (this->CurveIds_Field).FieldDesc.ValueOffset = 0x21;
  (this->CurveIds_Field).FieldDesc.ValueSize = 0;
  (this->CurveIds_Field).FieldDesc.NameSize = '\b';
  (this->CurveIds_Field).FieldDesc.TypeInfo = 0x82;
  (this->CurveIds_Field).FieldDesc.Reference = 0;
  (this->CurveValues_Field).FieldDesc.ValueOffset = 0x21;
  (this->CurveValues_Field).FieldDesc.ValueSize = 0;
  (this->CurveValues_Field).FieldDesc.NameSize = '\v';
  (this->CurveValues_Field).FieldDesc.TypeInfo = 0xc2;
  (this->CurveValues_Field).FieldDesc.Reference = 0;
  (this->LodIndex_Field).FieldDesc.ValueOffset = 0x21;
  (this->LodIndex_Field).FieldDesc.ValueSize = 2;
  (this->LodIndex_Field).FieldDesc.NameSize = '\b';
  (this->LodIndex_Field).FieldDesc.TypeInfo = '\x01';
  (this->LodIndex_Field).FieldDesc.Reference = 0;
  (this->FrameCounter_Field).FieldDesc.ValueOffset = 0x23;
  (this->FrameCounter_Field).FieldDesc.ValueSize = 2;
  (this->FrameCounter_Field).FieldDesc.NameSize = '\f';
  (this->FrameCounter_Field).FieldDesc.TypeInfo = '\x01';
  (this->FrameCounter_Field).FieldDesc.Reference = 0;
  (this->ExternalMorphSetWeights_Field).FieldDesc.ValueOffset = 0x25;
  (this->ExternalMorphSetWeights_Field).FieldDesc.ValueSize = 0;
  (this->ExternalMorphSetWeights_Field).FieldDesc.NameSize = '\x17';
  (this->ExternalMorphSetWeights_Field).FieldDesc.TypeInfo = 0xc2;
  (this->ExternalMorphSetWeights_Field).FieldDesc.Reference = 0;
  (this->ExternalMorphSetWeightCounts_Field).FieldDesc.ValueOffset = 0x25;
  (this->ExternalMorphSetWeightCounts_Field).FieldDesc.ValueSize = 0;
  (this->ExternalMorphSetWeightCounts_Field).FieldDesc.NameSize = '\x1c';
  (this->ExternalMorphSetWeightCounts_Field).FieldDesc.TypeInfo = 0x92;
  (this->ExternalMorphSetWeightCounts_Field).FieldDesc.Reference = 0;
  (this->DefinitionId_Field).FieldDesc.ValueOffset = 0x25;
  (this->DefinitionId_Field).FieldDesc.ValueSize = 0;
  (this->DefinitionId_Field).FieldDesc.NameSize = '\0';
  (this->DefinitionId_Field).FieldDesc.TypeInfo = '\0';
  (this->DefinitionId_Field).FieldDesc.Reference = 0;
  this->EventProps_Private = (TField<1549,37,UE::Trace::EventProps>)0x0;
  return this;
}

// Initialize @ 147564f60

uint __cdecl FAnimationSkeletalMeshComponent4Fields::Initialize(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `public:_static_unsigned_int___cdecl_FAnimationSkeletalMeshComponent4Fields::Initialize(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FAnimationSkeletalMeshComponent4Fields::Initialize(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FAnimationSkeletalMeshComponent4Fields::Initialize(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationSkeletalMeshComponent4Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationSkeletalMeshComponent4Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationSkeletalMeshComponent4Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          FAnimationSkeletalMeshComponent4Fields
                    (&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationSkeletalMeshComponent4Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                      ::__l2::Fields);
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationSkeletalMeshComponent4Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationSkeletalMeshComponent4Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_1__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationSkeletalMeshComponent4Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_1__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationSkeletalMeshComponent4Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_1__ == -1) {
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationSkeletalMeshComponent4Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Length = '\t';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationSkeletalMeshComponent4Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Ptr = "Animation";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationSkeletalMeshComponent4Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Length = '\x16';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationSkeletalMeshComponent4Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Ptr = "SkeletalMeshComponent4";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationSkeletalMeshComponent4Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Fields =
               (FFieldDesc *)
               &`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationSkeletalMeshComponent4Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::Fields;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationSkeletalMeshComponent4Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.FieldCount = 0xd;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationSkeletalMeshComponent4Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Flags = 2;
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationSkeletalMeshComponent4Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_1__);
        }
      }
      `public:_static_unsigned_int___cdecl_FAnimationSkeletalMeshComponent4Fields::Initialize(void)'
      ::__l2::Uid_ThreadSafeInit =
           UE::Trace::Private::FEventNode::Initialize
                     (AnimationSkeletalMeshComponent4Event,
                      &`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationSkeletalMeshComponent4Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                       ::__l2::Info);
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FAnimationSkeletalMeshComponent4Fields::Initialize(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_FAnimationSkeletalMeshComponent4Fields::Initialize(void)'
         ::__l2::Uid_ThreadSafeInit;
}

