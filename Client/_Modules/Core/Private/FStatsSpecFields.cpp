// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// operator() @ 141a73630

uint __thiscall `FStatsSpecFields::Initialize'::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Id_Field.FieldDesc.ValueOffset = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Id_Field.FieldDesc.ValueSize = 4;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Id_Field.FieldDesc.NameSize = '\x02';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Id_Field.FieldDesc.TypeInfo = '\x02';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Id_Field.FieldDesc.Name = "Id";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Id_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.IsFloatingPoint_Field.FieldDesc.Name = "IsFloatingPoint";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.IsMemory_Field.FieldDesc.Name = "IsMemory";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.ShouldClearEveryFrame_Field.FieldDesc.Name = "ShouldClearEveryFrame";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Name_Field.FieldDesc.Name = "Name";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Description_Field.FieldDesc.Name = "Description";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Group_Field.FieldDesc.Name = "Group";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.Name = "";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.EventProps_Private = (TField<775,7,UE::Trace::EventProps>)0x0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.IsFloatingPoint_Field.FieldDesc.ValueOffset = 4;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.IsFloatingPoint_Field.FieldDesc.ValueSize = 1;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.IsFloatingPoint_Field.FieldDesc.NameSize = '\x0f';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.IsFloatingPoint_Field.FieldDesc.TypeInfo = '\0';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.IsFloatingPoint_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.IsMemory_Field.FieldDesc.ValueOffset = 5;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.IsMemory_Field.FieldDesc.ValueSize = 1;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.IsMemory_Field.FieldDesc.NameSize = '\b';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.IsMemory_Field.FieldDesc.TypeInfo = '\0';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.IsMemory_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.ShouldClearEveryFrame_Field.FieldDesc.ValueOffset = 6;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.ShouldClearEveryFrame_Field.FieldDesc.ValueSize = 1;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.ShouldClearEveryFrame_Field.FieldDesc.NameSize = '\x15';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.ShouldClearEveryFrame_Field.FieldDesc.TypeInfo = '\0';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.ShouldClearEveryFrame_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Name_Field.FieldDesc.ValueOffset = 7;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Name_Field.FieldDesc.ValueSize = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Name_Field.FieldDesc.NameSize = '\x04';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Name_Field.FieldDesc.TypeInfo = 0x88;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Name_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Description_Field.FieldDesc.ValueOffset = 7;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Description_Field.FieldDesc.ValueSize = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Description_Field.FieldDesc.NameSize = '\v';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Description_Field.FieldDesc.TypeInfo = 0x88;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Description_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Group_Field.FieldDesc.ValueOffset = 7;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Group_Field.FieldDesc.ValueSize = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Group_Field.FieldDesc.NameSize = '\x05';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Group_Field.FieldDesc.TypeInfo = 0x88;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Group_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueOffset = 7;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueSize = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.NameSize = '\0';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.TypeInfo = '\0';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.Reference = 0;
      _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar2 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.LoggerName.Length = '\x05';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.LoggerName.Ptr = "Stats";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.EventName.Length = '\x04';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.EventName.Ptr = "Spec";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.Fields =
           (FFieldDesc *)
           &`public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::Fields;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.FieldCount = 7;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.Flags = 7;
      _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  uVar1 = UE::Trace::Private::FEventNode::Initialize
                    (StatsSpecEvent,
                     &`public:___cdecl_`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                      ::__l2::Info);
  return uVar1;
}

// Initialize @ 141a83660

uint __cdecl FStatsSpecFields::Initialize(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::
                         __l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::__l2::
      Uid_ThreadSafeInit = `FStatsSpecFields::Initialize'::__l2::<lambda_1>::operator()(local_res8);
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_FStatsSpecFields::Initialize(void)'::__l2::
         Uid_ThreadSafeInit;
}

