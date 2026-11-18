// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FDiagnosticsSession2Fields @ 1419865a0

FDiagnosticsSession2Fields * __thiscall
FDiagnosticsSession2Fields::FDiagnosticsSession2Fields(FDiagnosticsSession2Fields *this)

{
  (this->Platform_Field).FieldDesc.NameSize = '\b';
  (this->Platform_Field).FieldDesc.TypeInfo = 0x88;
  (this->Platform_Field).FieldDesc.ValueOffset = 0;
  (this->Platform_Field).FieldDesc.ValueSize = 0;
  (this->Platform_Field).FieldDesc.Name = "Platform";
  (this->AppName_Field).FieldDesc.Name = "AppName";
  (this->ProjectName_Field).FieldDesc.Name = "ProjectName";
  (this->CommandLine_Field).FieldDesc.Name = "CommandLine";
  (this->Branch_Field).FieldDesc.Name = "Branch";
  (this->BuildVersion_Field).FieldDesc.Name = "BuildVersion";
  (this->Changelist_Field).FieldDesc.Name = "Changelist";
  (this->ConfigurationType_Field).FieldDesc.Name = "ConfigurationType";
  (this->TargetType_Field).FieldDesc.Name = "TargetType";
  (this->InstanceId_Field).FieldDesc.Name = "InstanceId";
  (this->VFSPaths_Field).FieldDesc.Name = "VFSPaths";
  (this->DefinitionId_Field).FieldDesc.Name = "";
  (this->Platform_Field).FieldDesc.Reference = 0;
  (this->AppName_Field).FieldDesc.ValueOffset = 0;
  (this->AppName_Field).FieldDesc.ValueSize = 0;
  (this->AppName_Field).FieldDesc.NameSize = '\a';
  (this->AppName_Field).FieldDesc.TypeInfo = 0x88;
  (this->AppName_Field).FieldDesc.Reference = 0;
  (this->ProjectName_Field).FieldDesc.ValueOffset = 0;
  (this->ProjectName_Field).FieldDesc.ValueSize = 0;
  (this->ProjectName_Field).FieldDesc.NameSize = '\v';
  (this->ProjectName_Field).FieldDesc.TypeInfo = 0x89;
  (this->ProjectName_Field).FieldDesc.Reference = 0;
  (this->CommandLine_Field).FieldDesc.ValueOffset = 0;
  (this->CommandLine_Field).FieldDesc.ValueSize = 0;
  (this->CommandLine_Field).FieldDesc.NameSize = '\v';
  (this->CommandLine_Field).FieldDesc.TypeInfo = 0x89;
  (this->CommandLine_Field).FieldDesc.Reference = 0;
  (this->Branch_Field).FieldDesc.ValueOffset = 0;
  (this->Branch_Field).FieldDesc.ValueSize = 0;
  (this->Branch_Field).FieldDesc.NameSize = '\x06';
  (this->Branch_Field).FieldDesc.TypeInfo = 0x89;
  (this->Branch_Field).FieldDesc.Reference = 0;
  (this->BuildVersion_Field).FieldDesc.ValueOffset = 0;
  (this->BuildVersion_Field).FieldDesc.ValueSize = 0;
  (this->BuildVersion_Field).FieldDesc.NameSize = '\f';
  (this->BuildVersion_Field).FieldDesc.TypeInfo = 0x89;
  (this->BuildVersion_Field).FieldDesc.Reference = 0;
  (this->Changelist_Field).FieldDesc.ValueOffset = 0;
  (this->Changelist_Field).FieldDesc.ValueSize = 4;
  (this->Changelist_Field).FieldDesc.NameSize = '\n';
  (this->Changelist_Field).FieldDesc.TypeInfo = '\x02';
  (this->Changelist_Field).FieldDesc.Reference = 0;
  (this->ConfigurationType_Field).FieldDesc.ValueOffset = 4;
  (this->ConfigurationType_Field).FieldDesc.ValueSize = 1;
  (this->ConfigurationType_Field).FieldDesc.NameSize = '\x11';
  (this->ConfigurationType_Field).FieldDesc.TypeInfo = '\0';
  (this->ConfigurationType_Field).FieldDesc.Reference = 0;
  (this->TargetType_Field).FieldDesc.ValueOffset = 5;
  (this->TargetType_Field).FieldDesc.ValueSize = 1;
  (this->TargetType_Field).FieldDesc.NameSize = '\n';
  (this->TargetType_Field).FieldDesc.TypeInfo = '\0';
  (this->TargetType_Field).FieldDesc.Reference = 0;
  (this->InstanceId_Field).FieldDesc.ValueOffset = 6;
  (this->InstanceId_Field).FieldDesc.ValueSize = 0;
  (this->InstanceId_Field).FieldDesc.NameSize = '\n';
  (this->InstanceId_Field).FieldDesc.TypeInfo = 0x82;
  (this->InstanceId_Field).FieldDesc.Reference = 0;
  (this->VFSPaths_Field).FieldDesc.ValueOffset = 6;
  (this->VFSPaths_Field).FieldDesc.ValueSize = 0;
  (this->VFSPaths_Field).FieldDesc.NameSize = '\b';
  (this->VFSPaths_Field).FieldDesc.TypeInfo = 0x88;
  (this->VFSPaths_Field).FieldDesc.Reference = 0;
  (this->DefinitionId_Field).FieldDesc.ValueOffset = 6;
  (this->DefinitionId_Field).FieldDesc.ValueSize = 0;
  (this->DefinitionId_Field).FieldDesc.NameSize = '\0';
  (this->DefinitionId_Field).FieldDesc.TypeInfo = '\0';
  (this->DefinitionId_Field).FieldDesc.Reference = 0;
  this->EventProps_Private = (TField<2059,6,UE::Trace::EventProps>)0x0;
  return this;
}

// Initialize @ 141999730

uint __cdecl FDiagnosticsSession2Fields::Initialize(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `public:_static_unsigned_int___cdecl_FDiagnosticsSession2Fields::Initialize(void)'::
                __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FDiagnosticsSession2Fields::Initialize(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FDiagnosticsSession2Fields::Initialize(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FDiagnosticsSession2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FDiagnosticsSession2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FDiagnosticsSession2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          FDiagnosticsSession2Fields
                    (&`public:___cdecl_`public:_static_unsigned_int___cdecl_FDiagnosticsSession2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                      ::__l2::Fields);
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FDiagnosticsSession2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FDiagnosticsSession2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_1__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FDiagnosticsSession2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_1__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FDiagnosticsSession2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_1__ == -1) {
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FDiagnosticsSession2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Length = '\v';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FDiagnosticsSession2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Ptr = "Diagnostics";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FDiagnosticsSession2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Length = '\b';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FDiagnosticsSession2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Ptr = "Session2";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FDiagnosticsSession2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Fields =
               (FFieldDesc *)
               &`public:___cdecl_`public:_static_unsigned_int___cdecl_FDiagnosticsSession2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::Fields;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FDiagnosticsSession2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.FieldCount = 0xb;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FDiagnosticsSession2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Flags = 7;
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FDiagnosticsSession2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_1__);
        }
      }
      `public:_static_unsigned_int___cdecl_FDiagnosticsSession2Fields::Initialize(void)'::__l2::
      Uid_ThreadSafeInit =
           UE::Trace::Private::FEventNode::Initialize
                     (DiagnosticsSession2Event,
                      &`public:___cdecl_`public:_static_unsigned_int___cdecl_FDiagnosticsSession2Fields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                       ::__l2::Info);
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FDiagnosticsSession2Fields::Initialize(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_FDiagnosticsSession2Fields::Initialize(void)'::__l2::
         Uid_ThreadSafeInit;
}

