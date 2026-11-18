// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Initialize @ 14199bae0

uint __cdecl FMemoryMemorySwapOpFields::Initialize(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::
                __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Address_Field.FieldDesc.ValueOffset = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Address_Field.FieldDesc.ValueSize = 8;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Address_Field.FieldDesc.Name = "Address";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Address_Field.FieldDesc.NameSize = '\a';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Address_Field.FieldDesc.TypeInfo = '\x03';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.CallstackId_Field.FieldDesc.Name = "CallstackId";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.CompressedSize_Field.FieldDesc.Name = "CompressedSize";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.SwapOp_Field.FieldDesc.Name = "SwapOp";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.Name = "";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.EventProps_Private = (TField<4,17,UE::Trace::EventProps>)0x0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.Address_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.CallstackId_Field.FieldDesc.ValueOffset = 8;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.CallstackId_Field.FieldDesc.ValueSize = 4;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.CallstackId_Field.FieldDesc.NameSize = '\v';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.CallstackId_Field.FieldDesc.TypeInfo = '\x02';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.CallstackId_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.CompressedSize_Field.FieldDesc.ValueOffset = 0xc;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.CompressedSize_Field.FieldDesc.ValueSize = 4;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.CompressedSize_Field.FieldDesc.NameSize = '\x0e';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.CompressedSize_Field.FieldDesc.TypeInfo = '\x02';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.CompressedSize_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.SwapOp_Field.FieldDesc.ValueOffset = 0x10;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.SwapOp_Field.FieldDesc.ValueSize = 1;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.SwapOp_Field.FieldDesc.NameSize = '\x06';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.SwapOp_Field.FieldDesc.TypeInfo = '\0';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.SwapOp_Field.FieldDesc.Reference = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueOffset = 0x11;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.ValueSize = 0;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.NameSize = '\0';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.TypeInfo = '\0';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Fields.DefinitionId_Field.FieldDesc.Reference = 0;
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_1__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_1__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_1__ == -1) {
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Length = '\x06';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Ptr = "Memory";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Length = '\f';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Ptr = "MemorySwapOp";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Fields =
               (FFieldDesc *)
               &`public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::Fields;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.FieldCount = 4;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Flags = 0;
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_1__);
        }
      }
      `public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::__l2::
      Uid_ThreadSafeInit =
           UE::Trace::Private::FEventNode::Initialize
                     (MemoryMemorySwapOpEvent,
                      &`public:___cdecl_`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                       ::__l2::Info);
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_FMemoryMemorySwapOpFields::Initialize(void)'::__l2::
         Uid_ThreadSafeInit;
}

