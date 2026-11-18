// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Display<char_const_*,unsigned_int> @ 14197eb10

bool __thiscall
FMemoryTagSpecFields::Display<char_const_*,unsigned_int>
          (FMemoryTagSpecFields *this,char *param_1,uint param_2)

{
  char *pcVar1;
  int iVar3;
  size_t sVar2;
  longlong lVar4;
  
  if ((int)param_2 < 0) {
    sVar2 = strlen(param_1);
    param_2 = (uint)sVar2;
  }
  pcVar1 = (this->Tag_Field).FieldDesc.Name;
  iVar3._0_1_ = (this->Tag_Field).FieldDesc.NameSize;
  iVar3._1_1_ = (this->Tag_Field).FieldDesc.TypeInfo;
  iVar3._2_2_ = *(undefined2 *)&(this->Tag_Field).FieldDesc.field_0xe;
  lVar4 = (longlong)iVar3;
  *(uint *)(pcVar1 + lVar4) = param_2 << 0xd | 0x200;
  pcVar1[lVar4] = '\x01';
  memcpy(pcVar1 + lVar4 + 4,param_1,(longlong)(int)param_2);
  iVar3 = *(int *)&(this->Tag_Field).FieldDesc.NameSize + param_2;
  *(int *)&(this->Tag_Field).FieldDesc.NameSize = iVar3 + 4;
  (this->Tag_Field).FieldDesc.Name[(longlong)iVar3 + 4] = '\x03';
  return true;
}

// Initialize @ 14199c480

uint __cdecl FMemoryTagSpecFields::Initialize(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::__l2::
                _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Tag_Field.FieldDesc.ValueOffset = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Tag_Field.FieldDesc.ValueSize = 4;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Tag_Field.FieldDesc.NameSize = '\x03';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Tag_Field.FieldDesc.TypeInfo = '\x12';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Tag_Field.FieldDesc.Name = "Tag";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Tag_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Parent_Field.FieldDesc.Name = "Parent";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Display_Field.FieldDesc.Name = "Display";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.Name = "";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.EventProps_Private = (TField<259,8,UE::Trace::EventProps>)0x0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Parent_Field.FieldDesc.ValueOffset = 4;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Parent_Field.FieldDesc.ValueSize = 4;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Parent_Field.FieldDesc.NameSize = '\x06';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Parent_Field.FieldDesc.TypeInfo = '\x12';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Parent_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Display_Field.FieldDesc.ValueOffset = 8;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Display_Field.FieldDesc.ValueSize = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Display_Field.FieldDesc.NameSize = '\a';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Display_Field.FieldDesc.TypeInfo = 0x88;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Display_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueOffset = 8;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueSize = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.NameSize = '\0';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.TypeInfo = '\0';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.Reference = 0;
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_1__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_1__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_1__ == -1) {
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Length = '\x06';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Ptr = "Memory";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Length = '\a';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Ptr = "TagSpec";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Fields =
               (FFieldDesc *)
               &`public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::Fields;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.FieldCount = 3;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Flags = 7;
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_1__);
        }
      }
      `public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::__l2::
      Uid_ThreadSafeInit =
           UE::Trace::Private::FEventNode::Initialize
                     (MemoryTagSpecEvent,
                      &`public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                       ::__l2::Info);
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_FMemoryTagSpecFields::Initialize(void)'::__l2::
         Uid_ThreadSafeInit;
}

