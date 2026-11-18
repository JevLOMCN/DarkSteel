// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// FRDGTraceBufferMessageFields @ 145d8d2b0

FRDGTraceBufferMessageFields * __thiscall
FRDGTraceBufferMessageFields::FRDGTraceBufferMessageFields(FRDGTraceBufferMessageFields *this)

{
  (this->Name_Field).FieldDesc.NameSize = '\x04';
  (this->Name_Field).FieldDesc.TypeInfo = 0x89;
  (this->Name_Field).FieldDesc.ValueOffset = 0;
  (this->Name_Field).FieldDesc.ValueSize = 0;
  (this->Name_Field).FieldDesc.Name = "Name";
  (this->UsageFlags_Field).FieldDesc.Name = "UsageFlags";
  (this->BytesPerElement_Field).FieldDesc.Name = "BytesPerElement";
  (this->NumElements_Field).FieldDesc.Name = "NumElements";
  (this->Handle_Field).FieldDesc.Name = "Handle";
  (this->NextOwnerHandle_Field).FieldDesc.Name = "NextOwnerHandle";
  (this->Order_Field).FieldDesc.Name = "Order";
  (this->Passes_Field).FieldDesc.Name = "Passes";
  (this->TransientAllocationOffsetMins_Field).FieldDesc.Name = "TransientAllocationOffsetMins";
  (this->TransientAllocationOffsetMaxs_Field).FieldDesc.Name = "TransientAllocationOffsetMaxs";
  (this->TransientAllocationMemoryRanges_Field).FieldDesc.Name = "TransientAllocationMemoryRanges";
  (this->TransientAcquirePass_Field).FieldDesc.Name = "TransientAcquirePass";
  (this->TransientDiscardPass_Field).FieldDesc.Name = "TransientDiscardPass";
  (this->IsExternal_Field).FieldDesc.Name = "IsExternal";
  (this->IsExtracted_Field).FieldDesc.Name = "IsExtracted";
  (this->IsCulled_Field).FieldDesc.Name = "IsCulled";
  (this->Name_Field).FieldDesc.Reference = 0;
  (this->UsageFlags_Field).FieldDesc.ValueOffset = 0;
  (this->UsageFlags_Field).FieldDesc.ValueSize = 4;
  (this->UsageFlags_Field).FieldDesc.NameSize = '\n';
  (this->UsageFlags_Field).FieldDesc.TypeInfo = '\x02';
  (this->UsageFlags_Field).FieldDesc.Reference = 0;
  (this->BytesPerElement_Field).FieldDesc.ValueOffset = 4;
  (this->BytesPerElement_Field).FieldDesc.ValueSize = 4;
  (this->BytesPerElement_Field).FieldDesc.NameSize = '\x0f';
  (this->BytesPerElement_Field).FieldDesc.TypeInfo = '\x02';
  (this->BytesPerElement_Field).FieldDesc.Reference = 0;
  (this->NumElements_Field).FieldDesc.ValueOffset = 8;
  (this->NumElements_Field).FieldDesc.ValueSize = 4;
  (this->NumElements_Field).FieldDesc.NameSize = '\v';
  (this->NumElements_Field).FieldDesc.TypeInfo = '\x02';
  (this->NumElements_Field).FieldDesc.Reference = 0;
  (this->Handle_Field).FieldDesc.ValueOffset = 0xc;
  (this->Handle_Field).FieldDesc.ValueSize = 4;
  (this->Handle_Field).FieldDesc.NameSize = '\x06';
  (this->Handle_Field).FieldDesc.TypeInfo = '\x02';
  (this->Handle_Field).FieldDesc.Reference = 0;
  (this->NextOwnerHandle_Field).FieldDesc.ValueOffset = 0x10;
  (this->NextOwnerHandle_Field).FieldDesc.ValueSize = 4;
  (this->NextOwnerHandle_Field).FieldDesc.NameSize = '\x0f';
  (this->NextOwnerHandle_Field).FieldDesc.TypeInfo = '\x02';
  (this->NextOwnerHandle_Field).FieldDesc.Reference = 0;
  (this->Order_Field).FieldDesc.ValueOffset = 0x14;
  (this->Order_Field).FieldDesc.ValueSize = 4;
  (this->Order_Field).FieldDesc.NameSize = '\x05';
  (this->Order_Field).FieldDesc.TypeInfo = '\x02';
  (this->Order_Field).FieldDesc.Reference = 0;
  (this->Passes_Field).FieldDesc.ValueOffset = 0x18;
  (this->Passes_Field).FieldDesc.ValueSize = 0;
  (this->Passes_Field).FieldDesc.NameSize = '\x06';
  (this->Passes_Field).FieldDesc.TypeInfo = 0x82;
  (this->Passes_Field).FieldDesc.Reference = 0;
  (this->TransientAllocationOffsetMins_Field).FieldDesc.ValueOffset = 0x18;
  (this->TransientAllocationOffsetMins_Field).FieldDesc.ValueSize = 0;
  (this->TransientAllocationOffsetMins_Field).FieldDesc.NameSize = '\x1d';
  (this->TransientAllocationOffsetMins_Field).FieldDesc.TypeInfo = 0x83;
  (this->TransientAllocationOffsetMins_Field).FieldDesc.Reference = 0;
  (this->TransientAllocationOffsetMaxs_Field).FieldDesc.ValueOffset = 0x18;
  (this->TransientAllocationOffsetMaxs_Field).FieldDesc.ValueSize = 0;
  (this->TransientAllocationOffsetMaxs_Field).FieldDesc.NameSize = '\x1d';
  (this->TransientAllocationOffsetMaxs_Field).FieldDesc.TypeInfo = 0x83;
  (this->TransientAllocationOffsetMaxs_Field).FieldDesc.Reference = 0;
  (this->TransientAllocationMemoryRanges_Field).FieldDesc.ValueOffset = 0x18;
  (this->TransientAllocationMemoryRanges_Field).FieldDesc.ValueSize = 0;
  (this->TransientAllocationMemoryRanges_Field).FieldDesc.NameSize = '\x1f';
  (this->TransientAllocationMemoryRanges_Field).FieldDesc.TypeInfo = 0x81;
  (this->TransientAllocationMemoryRanges_Field).FieldDesc.Reference = 0;
  (this->TransientAcquirePass_Field).FieldDesc.ValueOffset = 0x18;
  (this->TransientAcquirePass_Field).FieldDesc.ValueSize = 4;
  (this->TransientAcquirePass_Field).FieldDesc.NameSize = '\x14';
  (this->TransientAcquirePass_Field).FieldDesc.TypeInfo = '\x02';
  (this->TransientAcquirePass_Field).FieldDesc.Reference = 0;
  (this->TransientDiscardPass_Field).FieldDesc.ValueOffset = 0x1c;
  (this->TransientDiscardPass_Field).FieldDesc.ValueSize = 4;
  (this->TransientDiscardPass_Field).FieldDesc.NameSize = '\x14';
  (this->TransientDiscardPass_Field).FieldDesc.TypeInfo = '\x02';
  (this->TransientDiscardPass_Field).FieldDesc.Reference = 0;
  (this->IsExternal_Field).FieldDesc.ValueOffset = 0x20;
  (this->IsExternal_Field).FieldDesc.ValueSize = 1;
  (this->IsExternal_Field).FieldDesc.NameSize = '\n';
  (this->IsExternal_Field).FieldDesc.TypeInfo = '\0';
  (this->IsExternal_Field).FieldDesc.Reference = 0;
  (this->IsExtracted_Field).FieldDesc.ValueOffset = 0x21;
  (this->IsExtracted_Field).FieldDesc.ValueSize = 1;
  (this->IsExtracted_Field).FieldDesc.NameSize = '\v';
  (this->IsExtracted_Field).FieldDesc.TypeInfo = '\0';
  (this->IsExtracted_Field).FieldDesc.Reference = 0;
  (this->IsCulled_Field).FieldDesc.ValueOffset = 0x22;
  (this->IsCulled_Field).FieldDesc.ValueSize = 1;
  (this->IsCulled_Field).FieldDesc.NameSize = '\b';
  (this->IsCulled_Field).FieldDesc.TypeInfo = '\0';
  (this->IsCulled_Field).FieldDesc.Reference = 0;
  (this->IsTrackingSkipped_Field).FieldDesc.ValueOffset = 0x23;
  (this->IsTrackingSkipped_Field).FieldDesc.ValueSize = 1;
  (this->IsTrackingSkipped_Field).FieldDesc.Name = "IsTrackingSkipped";
  (this->IsTransient_Field).FieldDesc.Name = "IsTransient";
  (this->IsTransientUntracked_Field).FieldDesc.Name = "IsTransientUntracked";
  (this->IsTransientCacheHit_Field).FieldDesc.Name = "IsTransientCacheHit";
  (this->IsHandleType32Bits_Field).FieldDesc.Name = "IsHandleType32Bits";
  (this->DefinitionId_Field).FieldDesc.Name = "";
  (this->IsTrackingSkipped_Field).FieldDesc.NameSize = '\x11';
  (this->IsTrackingSkipped_Field).FieldDesc.TypeInfo = '\0';
  (this->IsTrackingSkipped_Field).FieldDesc.Reference = 0;
  (this->IsTransient_Field).FieldDesc.ValueOffset = 0x24;
  (this->IsTransient_Field).FieldDesc.ValueSize = 1;
  (this->IsTransient_Field).FieldDesc.NameSize = '\v';
  (this->IsTransient_Field).FieldDesc.TypeInfo = '\0';
  (this->IsTransient_Field).FieldDesc.Reference = 0;
  (this->IsTransientUntracked_Field).FieldDesc.ValueOffset = 0x25;
  (this->IsTransientUntracked_Field).FieldDesc.ValueSize = 1;
  (this->IsTransientUntracked_Field).FieldDesc.NameSize = '\x14';
  (this->IsTransientUntracked_Field).FieldDesc.TypeInfo = '\0';
  (this->IsTransientUntracked_Field).FieldDesc.Reference = 0;
  (this->IsTransientCacheHit_Field).FieldDesc.ValueOffset = 0x26;
  (this->IsTransientCacheHit_Field).FieldDesc.ValueSize = 1;
  (this->IsTransientCacheHit_Field).FieldDesc.NameSize = '\x13';
  (this->IsTransientCacheHit_Field).FieldDesc.TypeInfo = '\0';
  (this->IsTransientCacheHit_Field).FieldDesc.Reference = 0;
  (this->IsHandleType32Bits_Field).FieldDesc.ValueOffset = 0x27;
  (this->IsHandleType32Bits_Field).FieldDesc.ValueSize = 1;
  (this->IsHandleType32Bits_Field).FieldDesc.NameSize = '\x12';
  (this->IsHandleType32Bits_Field).FieldDesc.TypeInfo = '\0';
  (this->IsHandleType32Bits_Field).FieldDesc.Reference = 0;
  (this->DefinitionId_Field).FieldDesc.ValueOffset = 0x28;
  (this->DefinitionId_Field).FieldDesc.ValueSize = 0;
  (this->DefinitionId_Field).FieldDesc.NameSize = '\0';
  (this->DefinitionId_Field).FieldDesc.TypeInfo = '\0';
  (this->DefinitionId_Field).FieldDesc.Reference = 0;
  this->EventProps_Private = (TField<1301,40,UE::Trace::EventProps>)0x0;
  return this;
}

// Initialize @ 145dbe030

uint __cdecl FRDGTraceBufferMessageFields::Initialize(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `public:_static_unsigned_int___cdecl_FRDGTraceBufferMessageFields::Initialize(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FRDGTraceBufferMessageFields::Initialize(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FRDGTraceBufferMessageFields::Initialize(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceBufferMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceBufferMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceBufferMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          FRDGTraceBufferMessageFields
                    (&`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceBufferMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                      ::__l2::Fields);
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceBufferMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceBufferMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_1__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceBufferMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_1__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceBufferMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_1__ == -1) {
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceBufferMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Length = '\b';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceBufferMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Ptr = "RDGTrace";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceBufferMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Length = '\r';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceBufferMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Ptr = "BufferMessage";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceBufferMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Fields =
               (FFieldDesc *)
               &`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceBufferMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::Fields;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceBufferMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.FieldCount = 0x15;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceBufferMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Flags = 2;
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceBufferMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_1__);
        }
      }
      `public:_static_unsigned_int___cdecl_FRDGTraceBufferMessageFields::Initialize(void)'::__l2::
      Uid_ThreadSafeInit =
           UE::Trace::Private::FEventNode::Initialize
                     (RDGTraceBufferMessageEvent,
                      &`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceBufferMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                       ::__l2::Info);
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FRDGTraceBufferMessageFields::Initialize(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_FRDGTraceBufferMessageFields::Initialize(void)'::__l2
         ::Uid_ThreadSafeInit;
}

