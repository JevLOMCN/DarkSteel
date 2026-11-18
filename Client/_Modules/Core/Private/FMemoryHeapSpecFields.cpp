// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Name<wchar_t_const_*,unsigned_int> @ 141984aa0

bool __thiscall
FMemoryHeapSpecFields::Name<wchar_t_const_*,unsigned_int>
          (FMemoryHeapSpecFields *this,wchar_t *param_1,uint param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  int iVar3;
  uint *puVar4;
  
  if ((int)param_2 < 0) {
    param_2 = 0;
    wVar1 = *param_1;
    pwVar2 = param_1;
    while (wVar1 != L'\0') {
      pwVar2 = pwVar2 + 1;
      param_2 = param_2 + 1;
      wVar1 = *pwVar2;
    }
  }
  iVar3._0_1_ = (this->Id_Field).FieldDesc.NameSize;
  iVar3._1_1_ = (this->Id_Field).FieldDesc.TypeInfo;
  iVar3._2_2_ = *(undefined2 *)&(this->Id_Field).FieldDesc.field_0xe;
  puVar4 = (uint *)((this->Id_Field).FieldDesc.Name + iVar3);
  *puVar4 = param_2 << 0xe | 0x300;
  *(undefined1 *)puVar4 = 1;
  memcpy(puVar4 + 1,param_1,(ulonglong)(param_2 * 2));
  iVar3 = *(int *)&(this->Id_Field).FieldDesc.NameSize + param_2 * 2;
  *(int *)&(this->Id_Field).FieldDesc.NameSize = iVar3 + 4;
  (this->Id_Field).FieldDesc.Name[(longlong)iVar3 + 4] = '\x03';
  return true;
}

// Initialize @ 14199b060

uint __cdecl FMemoryHeapSpecFields::Initialize(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::__l2
                ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Id_Field.FieldDesc.ValueOffset = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Id_Field.FieldDesc.ValueSize = 4;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Id_Field.FieldDesc.NameSize = '\x02';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Id_Field.FieldDesc.TypeInfo = '\x02';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Id_Field.FieldDesc.Name = "Id";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Id_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.ParentId_Field.FieldDesc.Name = "ParentId";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Flags_Field.FieldDesc.Name = "Flags";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Name_Field.FieldDesc.Name = "Name";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.Name = "";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.EventProps_Private = (TField<260,10,UE::Trace::EventProps>)0x0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.ParentId_Field.FieldDesc.ValueOffset = 4;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.ParentId_Field.FieldDesc.ValueSize = 4;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.ParentId_Field.FieldDesc.NameSize = '\b';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.ParentId_Field.FieldDesc.TypeInfo = '\x02';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.ParentId_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Flags_Field.FieldDesc.ValueOffset = 8;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Flags_Field.FieldDesc.ValueSize = 2;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Flags_Field.FieldDesc.NameSize = '\x05';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Flags_Field.FieldDesc.TypeInfo = '\x01';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Flags_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Name_Field.FieldDesc.ValueOffset = 10;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Name_Field.FieldDesc.ValueSize = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Name_Field.FieldDesc.NameSize = '\x04';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Name_Field.FieldDesc.TypeInfo = 0x89;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Name_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueOffset = 10;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueSize = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.NameSize = '\0';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.TypeInfo = '\0';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.Reference = 0;
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_1__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_1__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_1__ == -1) {
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Length = '\x06';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Ptr = "Memory";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Length = '\b';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Ptr = "HeapSpec";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Fields =
               (FFieldDesc *)
               &`public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::Fields;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.FieldCount = 4;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Flags = 7;
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_1__);
        }
      }
      `public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::__l2::
      Uid_ThreadSafeInit =
           UE::Trace::Private::FEventNode::Initialize
                     (MemoryHeapSpecEvent,
                      &`public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                       ::__l2::Info);
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_FMemoryHeapSpecFields::Initialize(void)'::__l2::
         Uid_ThreadSafeInit;
}

