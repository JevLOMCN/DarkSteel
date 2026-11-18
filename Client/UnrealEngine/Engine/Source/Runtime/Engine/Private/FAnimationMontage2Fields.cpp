// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FAnimationMontage2Fields @ 14752f540

FAnimationMontage2Fields * __thiscall
FAnimationMontage2Fields::FAnimationMontage2Fields(FAnimationMontage2Fields *this)

{
  (this->Cycle_Field).FieldDesc.ValueOffset = 0;
  (this->Cycle_Field).FieldDesc.ValueSize = 8;
  (this->Cycle_Field).FieldDesc.NameSize = '\x05';
  (this->Cycle_Field).FieldDesc.TypeInfo = '\x03';
  (this->Cycle_Field).FieldDesc.Name = "Cycle";
  (this->RecordingTime_Field).FieldDesc.Name = "RecordingTime";
  (this->AnimInstanceId_Field).FieldDesc.Name = "AnimInstanceId";
  (this->MontageId_Field).FieldDesc.Name = "MontageId";
  (this->CurrentSectionNameId_Field).FieldDesc.Name = "CurrentSectionNameId";
  (this->NextSectionNameId_Field).FieldDesc.Name = "NextSectionNameId";
  (this->Weight_Field).FieldDesc.Name = "Weight";
  (this->DesiredWeight_Field).FieldDesc.Name = "DesiredWeight";
  (this->Position_Field).FieldDesc.Name = "Position";
  (this->FrameCounter_Field).FieldDesc.Name = "FrameCounter";
  (this->DefinitionId_Field).FieldDesc.Name = "";
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
  (this->MontageId_Field).FieldDesc.ValueOffset = 0x18;
  (this->MontageId_Field).FieldDesc.ValueSize = 8;
  (this->MontageId_Field).FieldDesc.NameSize = '\t';
  (this->MontageId_Field).FieldDesc.TypeInfo = '\x03';
  (this->MontageId_Field).FieldDesc.Reference = 0;
  (this->CurrentSectionNameId_Field).FieldDesc.ValueOffset = 0x20;
  (this->CurrentSectionNameId_Field).FieldDesc.ValueSize = 4;
  (this->CurrentSectionNameId_Field).FieldDesc.NameSize = '\x14';
  (this->CurrentSectionNameId_Field).FieldDesc.TypeInfo = '\x02';
  (this->CurrentSectionNameId_Field).FieldDesc.Reference = 0;
  (this->NextSectionNameId_Field).FieldDesc.ValueOffset = 0x24;
  (this->NextSectionNameId_Field).FieldDesc.ValueSize = 4;
  (this->NextSectionNameId_Field).FieldDesc.NameSize = '\x11';
  (this->NextSectionNameId_Field).FieldDesc.TypeInfo = '\x02';
  (this->NextSectionNameId_Field).FieldDesc.Reference = 0;
  (this->Weight_Field).FieldDesc.ValueOffset = 0x28;
  (this->Weight_Field).FieldDesc.ValueSize = 4;
  (this->Weight_Field).FieldDesc.NameSize = '\x06';
  (this->Weight_Field).FieldDesc.TypeInfo = 'B';
  (this->Weight_Field).FieldDesc.Reference = 0;
  (this->DesiredWeight_Field).FieldDesc.ValueOffset = 0x2c;
  (this->DesiredWeight_Field).FieldDesc.ValueSize = 4;
  (this->DesiredWeight_Field).FieldDesc.NameSize = '\r';
  (this->DesiredWeight_Field).FieldDesc.TypeInfo = 'B';
  (this->DesiredWeight_Field).FieldDesc.Reference = 0;
  (this->Position_Field).FieldDesc.ValueOffset = 0x30;
  (this->Position_Field).FieldDesc.ValueSize = 4;
  (this->Position_Field).FieldDesc.NameSize = '\b';
  (this->Position_Field).FieldDesc.TypeInfo = 'B';
  (this->Position_Field).FieldDesc.Reference = 0;
  (this->FrameCounter_Field).FieldDesc.ValueOffset = 0x34;
  (this->FrameCounter_Field).FieldDesc.ValueSize = 2;
  (this->FrameCounter_Field).FieldDesc.NameSize = '\f';
  (this->FrameCounter_Field).FieldDesc.TypeInfo = '\x01';
  (this->FrameCounter_Field).FieldDesc.Reference = 0;
  (this->DefinitionId_Field).FieldDesc.ValueOffset = 0x36;
  (this->DefinitionId_Field).FieldDesc.ValueSize = 0;
  (this->DefinitionId_Field).FieldDesc.NameSize = '\0';
  (this->DefinitionId_Field).FieldDesc.TypeInfo = '\0';
  (this->DefinitionId_Field).FieldDesc.Reference = 0;
  this->EventProps_Private = (TField<10,54,UE::Trace::EventProps>)0x0;
  return this;
}

// Initialize @ 147564930

uint __cdecl FAnimationMontage2Fields::Initialize(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `public:_static_unsigned_int___cdecl_FAnimationMontage2Fields::Initialize(void)'::
                __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FAnimationMontage2Fields::Initialize(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FAnimationMontage2Fields::Initialize(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationMontage2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationMontage2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationMontage2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          FAnimationMontage2Fields
                    (&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationMontage2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                      ::__l2::Fields);
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationMontage2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationMontage2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_1__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationMontage2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_1__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationMontage2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_1__ == -1) {
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationMontage2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Length = '\t';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationMontage2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Ptr = "Animation";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationMontage2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Length = '\b';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationMontage2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Ptr = "Montage2";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationMontage2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Fields =
               (FFieldDesc *)
               &`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationMontage2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::Fields;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationMontage2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.FieldCount = 10;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationMontage2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Flags = 0;
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationMontage2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_1__);
        }
      }
      `public:_static_unsigned_int___cdecl_FAnimationMontage2Fields::Initialize(void)'::__l2::
      Uid_ThreadSafeInit =
           UE::Trace::Private::FEventNode::Initialize
                     (AnimationMontage2Event,
                      &`public:___cdecl_`public:_static_unsigned_int___cdecl_FAnimationMontage2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                       ::__l2::Info);
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FAnimationMontage2Fields::Initialize(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_FAnimationMontage2Fields::Initialize(void)'::__l2::
         Uid_ThreadSafeInit;
}

