// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// operator() @ 145d93a20

uint __thiscall `FRDGTraceGraphMessageFields::Initialize'::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Name_Field.FieldDesc.NameSize = '\x04';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Name_Field.FieldDesc.TypeInfo = 0x89;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Name_Field.FieldDesc.ValueOffset = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Name_Field.FieldDesc.ValueSize = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Name_Field.FieldDesc.Name = "Name";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.Name_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.StartCycles_Field.FieldDesc.Name = "StartCycles";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.EndCycles_Field.FieldDesc.Name = "EndCycles";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.PassCount_Field.FieldDesc.Name = "PassCount";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.TransientMemoryCommitSizes_Field.FieldDesc.Name = "TransientMemoryCommitSizes";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.TransientMemoryCapacities_Field.FieldDesc.Name = "TransientMemoryCapacities";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.TransientMemoryFlags_Field.FieldDesc.Name = "TransientMemoryFlags";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.Name = "";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.EventProps_Private = (TField<1031,20,UE::Trace::EventProps>)0x0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.StartCycles_Field.FieldDesc.ValueOffset = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.StartCycles_Field.FieldDesc.ValueSize = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.StartCycles_Field.FieldDesc.NameSize = '\v';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.StartCycles_Field.FieldDesc.TypeInfo = '\x03';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.StartCycles_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.EndCycles_Field.FieldDesc.ValueOffset = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.EndCycles_Field.FieldDesc.ValueSize = 8;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.EndCycles_Field.FieldDesc.NameSize = '\t';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.EndCycles_Field.FieldDesc.TypeInfo = '\x03';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.EndCycles_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.PassCount_Field.FieldDesc.ValueOffset = 0x10;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.PassCount_Field.FieldDesc.ValueSize = 4;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.PassCount_Field.FieldDesc.NameSize = '\t';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.PassCount_Field.FieldDesc.TypeInfo = '\x02';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.PassCount_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.TransientMemoryCommitSizes_Field.FieldDesc.ValueOffset = 0x14;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.TransientMemoryCommitSizes_Field.FieldDesc.ValueSize = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.TransientMemoryCommitSizes_Field.FieldDesc.NameSize = '\x1a';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.TransientMemoryCommitSizes_Field.FieldDesc.TypeInfo = 0x83;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.TransientMemoryCommitSizes_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.TransientMemoryCapacities_Field.FieldDesc.ValueOffset = 0x14;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.TransientMemoryCapacities_Field.FieldDesc.ValueSize = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.TransientMemoryCapacities_Field.FieldDesc.NameSize = '\x19';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.TransientMemoryCapacities_Field.FieldDesc.TypeInfo = 0x83;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.TransientMemoryCapacities_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.TransientMemoryFlags_Field.FieldDesc.ValueOffset = 0x14;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.TransientMemoryFlags_Field.FieldDesc.ValueSize = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.TransientMemoryFlags_Field.FieldDesc.NameSize = '\x14';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.TransientMemoryFlags_Field.FieldDesc.TypeInfo = 0x80;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.TransientMemoryFlags_Field.FieldDesc.Reference = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueOffset = 0x14;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueSize = 0;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.NameSize = '\0';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.TypeInfo = '\0';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Fields.DefinitionId_Field.FieldDesc.Reference = 0;
      _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar2 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.LoggerName.Length = '\b';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.LoggerName.Ptr = "RDGTrace";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.EventName.Length = '\f';
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.EventName.Ptr = "GraphMessage";
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.Fields =
           (FFieldDesc *)
           &`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::Fields;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.FieldCount = 7;
      `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
      ::__l2::Info.Flags = 2;
      _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  uVar1 = UE::Trace::Private::FEventNode::Initialize
                    (RDGTraceGraphMessageEvent,
                     &`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                      ::__l2::Info);
  return uVar1;
}

// Initialize @ 145dbe2b0

uint __cdecl FRDGTraceGraphMessageFields::Initialize(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::__l2::
      Uid_ThreadSafeInit =
           `FRDGTraceGraphMessageFields::Initialize'::__l2::<lambda_1>::operator()(local_res8);
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_FRDGTraceGraphMessageFields::Initialize(void)'::__l2::
         Uid_ThreadSafeInit;
}

