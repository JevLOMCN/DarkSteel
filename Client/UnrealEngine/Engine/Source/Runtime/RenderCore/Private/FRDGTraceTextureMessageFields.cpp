// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// FRDGTraceTextureMessageFields @ 145d8d950

FRDGTraceTextureMessageFields * __thiscall
FRDGTraceTextureMessageFields::FRDGTraceTextureMessageFields(FRDGTraceTextureMessageFields *this)

{
  (this->Name_Field).FieldDesc.NameSize = '\x04';
  (this->Name_Field).FieldDesc.TypeInfo = 0x89;
  (this->Name_Field).FieldDesc.ValueOffset = 0;
  (this->Name_Field).FieldDesc.ValueSize = 0;
  (this->Name_Field).FieldDesc.Name = "Name";
  (this->StartCycles_Field).FieldDesc.Name = "StartCycles";
  (this->EndCycles_Field).FieldDesc.Name = "EndCycles";
  (this->Handle_Field).FieldDesc.Name = "Handle";
  (this->NextOwnerHandle_Field).FieldDesc.Name = "NextOwnerHandle";
  (this->Order_Field).FieldDesc.Name = "Order";
  (this->Passes_Field).FieldDesc.Name = "Passes";
  (this->TransientAllocationOffsetMins_Field).FieldDesc.Name = "TransientAllocationOffsetMins";
  (this->TransientAllocationOffsetMaxs_Field).FieldDesc.Name = "TransientAllocationOffsetMaxs";
  (this->TransientAllocationMemoryRanges_Field).FieldDesc.Name = "TransientAllocationMemoryRanges";
  (this->TransientAcquirePass_Field).FieldDesc.Name = "TransientAcquirePass";
  (this->TransientDiscardPass_Field).FieldDesc.Name = "TransientDiscardPass";
  (this->SizeInBytes_Field).FieldDesc.Name = "SizeInBytes";
  (this->CreateFlags_Field).FieldDesc.Name = "CreateFlags";
  (this->Dimension_Field).FieldDesc.Name = "Dimension";
  (this->Format_Field).FieldDesc.Name = "Format";
  (this->Name_Field).FieldDesc.Reference = 0;
  (this->StartCycles_Field).FieldDesc.ValueOffset = 0;
  (this->StartCycles_Field).FieldDesc.ValueSize = 8;
  (this->StartCycles_Field).FieldDesc.NameSize = '\v';
  (this->StartCycles_Field).FieldDesc.TypeInfo = '\x03';
  (this->StartCycles_Field).FieldDesc.Reference = 0;
  (this->EndCycles_Field).FieldDesc.ValueOffset = 8;
  (this->EndCycles_Field).FieldDesc.ValueSize = 8;
  (this->EndCycles_Field).FieldDesc.NameSize = '\t';
  (this->EndCycles_Field).FieldDesc.TypeInfo = '\x03';
  (this->EndCycles_Field).FieldDesc.Reference = 0;
  (this->Handle_Field).FieldDesc.ValueOffset = 0x10;
  (this->Handle_Field).FieldDesc.ValueSize = 4;
  (this->Handle_Field).FieldDesc.NameSize = '\x06';
  (this->Handle_Field).FieldDesc.TypeInfo = '\x02';
  (this->Handle_Field).FieldDesc.Reference = 0;
  (this->NextOwnerHandle_Field).FieldDesc.ValueOffset = 0x14;
  (this->NextOwnerHandle_Field).FieldDesc.ValueSize = 4;
  (this->NextOwnerHandle_Field).FieldDesc.NameSize = '\x0f';
  (this->NextOwnerHandle_Field).FieldDesc.TypeInfo = '\x02';
  (this->NextOwnerHandle_Field).FieldDesc.Reference = 0;
  (this->Order_Field).FieldDesc.ValueOffset = 0x18;
  (this->Order_Field).FieldDesc.ValueSize = 4;
  (this->Order_Field).FieldDesc.NameSize = '\x05';
  (this->Order_Field).FieldDesc.TypeInfo = '\x02';
  (this->Order_Field).FieldDesc.Reference = 0;
  (this->Passes_Field).FieldDesc.ValueOffset = 0x1c;
  (this->Passes_Field).FieldDesc.ValueSize = 0;
  (this->Passes_Field).FieldDesc.NameSize = '\x06';
  (this->Passes_Field).FieldDesc.TypeInfo = 0x82;
  (this->Passes_Field).FieldDesc.Reference = 0;
  (this->TransientAllocationOffsetMins_Field).FieldDesc.ValueOffset = 0x1c;
  (this->TransientAllocationOffsetMins_Field).FieldDesc.ValueSize = 0;
  (this->TransientAllocationOffsetMins_Field).FieldDesc.NameSize = '\x1d';
  (this->TransientAllocationOffsetMins_Field).FieldDesc.TypeInfo = 0x83;
  (this->TransientAllocationOffsetMins_Field).FieldDesc.Reference = 0;
  (this->TransientAllocationOffsetMaxs_Field).FieldDesc.ValueOffset = 0x1c;
  (this->TransientAllocationOffsetMaxs_Field).FieldDesc.ValueSize = 0;
  (this->TransientAllocationOffsetMaxs_Field).FieldDesc.NameSize = '\x1d';
  (this->TransientAllocationOffsetMaxs_Field).FieldDesc.TypeInfo = 0x83;
  (this->TransientAllocationOffsetMaxs_Field).FieldDesc.Reference = 0;
  (this->TransientAllocationMemoryRanges_Field).FieldDesc.ValueOffset = 0x1c;
  (this->TransientAllocationMemoryRanges_Field).FieldDesc.ValueSize = 0;
  (this->TransientAllocationMemoryRanges_Field).FieldDesc.NameSize = '\x1f';
  (this->TransientAllocationMemoryRanges_Field).FieldDesc.TypeInfo = 0x81;
  (this->TransientAllocationMemoryRanges_Field).FieldDesc.Reference = 0;
  (this->TransientAcquirePass_Field).FieldDesc.ValueOffset = 0x1c;
  (this->TransientAcquirePass_Field).FieldDesc.ValueSize = 4;
  (this->TransientAcquirePass_Field).FieldDesc.NameSize = '\x14';
  (this->TransientAcquirePass_Field).FieldDesc.TypeInfo = '\x02';
  (this->TransientAcquirePass_Field).FieldDesc.Reference = 0;
  (this->TransientDiscardPass_Field).FieldDesc.ValueOffset = 0x20;
  (this->TransientDiscardPass_Field).FieldDesc.ValueSize = 4;
  (this->TransientDiscardPass_Field).FieldDesc.NameSize = '\x14';
  (this->TransientDiscardPass_Field).FieldDesc.TypeInfo = '\x02';
  (this->TransientDiscardPass_Field).FieldDesc.Reference = 0;
  (this->SizeInBytes_Field).FieldDesc.ValueOffset = 0x24;
  (this->SizeInBytes_Field).FieldDesc.ValueSize = 8;
  (this->SizeInBytes_Field).FieldDesc.NameSize = '\v';
  (this->SizeInBytes_Field).FieldDesc.TypeInfo = '\x03';
  (this->SizeInBytes_Field).FieldDesc.Reference = 0;
  (this->CreateFlags_Field).FieldDesc.ValueOffset = 0x2c;
  (this->CreateFlags_Field).FieldDesc.ValueSize = 8;
  (this->CreateFlags_Field).FieldDesc.NameSize = '\v';
  (this->CreateFlags_Field).FieldDesc.TypeInfo = '\x03';
  (this->CreateFlags_Field).FieldDesc.Reference = 0;
  (this->Dimension_Field).FieldDesc.ValueOffset = 0x34;
  (this->Dimension_Field).FieldDesc.ValueSize = 4;
  (this->Dimension_Field).FieldDesc.NameSize = '\t';
  (this->Dimension_Field).FieldDesc.TypeInfo = '\x02';
  (this->Dimension_Field).FieldDesc.Reference = 0;
  (this->Format_Field).FieldDesc.ValueOffset = 0x38;
  (this->Format_Field).FieldDesc.ValueSize = 4;
  (this->Format_Field).FieldDesc.NameSize = '\x06';
  (this->Format_Field).FieldDesc.TypeInfo = '\x02';
  (this->Format_Field).FieldDesc.Reference = 0;
  (this->ExtentX_Field).FieldDesc.ValueOffset = 0x3c;
  (this->ExtentX_Field).FieldDesc.ValueSize = 4;
  (this->ExtentX_Field).FieldDesc.Name = "ExtentX";
  (this->ExtentY_Field).FieldDesc.Name = "ExtentY";
  (this->Depth_Field).FieldDesc.Name = "Depth";
  (this->ArraySize_Field).FieldDesc.Name = "ArraySize";
  (this->NumMips_Field).FieldDesc.Name = "NumMips";
  (this->NumSamples_Field).FieldDesc.Name = "NumSamples";
  (this->IsExternal_Field).FieldDesc.Name = "IsExternal";
  (this->IsExtracted_Field).FieldDesc.Name = "IsExtracted";
  (this->IsCulled_Field).FieldDesc.Name = "IsCulled";
  (this->IsTrackingSkipped_Field).FieldDesc.Name = "IsTrackingSkipped";
  (this->IsTransient_Field).FieldDesc.Name = "IsTransient";
  (this->IsTransientUntracked_Field).FieldDesc.Name = "IsTransientUntracked";
  (this->IsTransientCacheHit_Field).FieldDesc.Name = "IsTransientCacheHit";
  (this->IsHandleType32Bits_Field).FieldDesc.Name = "IsHandleType32Bits";
  (this->DefinitionId_Field).FieldDesc.Name = "";
  (this->ExtentX_Field).FieldDesc.NameSize = '\a';
  (this->ExtentX_Field).FieldDesc.TypeInfo = '\x02';
  (this->ExtentX_Field).FieldDesc.Reference = 0;
  (this->ExtentY_Field).FieldDesc.ValueOffset = 0x40;
  (this->ExtentY_Field).FieldDesc.ValueSize = 4;
  (this->ExtentY_Field).FieldDesc.NameSize = '\a';
  (this->ExtentY_Field).FieldDesc.TypeInfo = '\x02';
  (this->ExtentY_Field).FieldDesc.Reference = 0;
  (this->Depth_Field).FieldDesc.ValueOffset = 0x44;
  (this->Depth_Field).FieldDesc.ValueSize = 2;
  (this->Depth_Field).FieldDesc.NameSize = '\x05';
  (this->Depth_Field).FieldDesc.TypeInfo = '\x01';
  (this->Depth_Field).FieldDesc.Reference = 0;
  (this->ArraySize_Field).FieldDesc.ValueOffset = 0x46;
  (this->ArraySize_Field).FieldDesc.ValueSize = 2;
  (this->ArraySize_Field).FieldDesc.NameSize = '\t';
  (this->ArraySize_Field).FieldDesc.TypeInfo = '\x01';
  (this->ArraySize_Field).FieldDesc.Reference = 0;
  (this->NumMips_Field).FieldDesc.ValueOffset = 0x48;
  (this->NumMips_Field).FieldDesc.ValueSize = 1;
  (this->NumMips_Field).FieldDesc.NameSize = '\a';
  (this->NumMips_Field).FieldDesc.TypeInfo = '\0';
  (this->NumMips_Field).FieldDesc.Reference = 0;
  (this->NumSamples_Field).FieldDesc.ValueOffset = 0x49;
  (this->NumSamples_Field).FieldDesc.ValueSize = 1;
  (this->NumSamples_Field).FieldDesc.NameSize = '\n';
  (this->NumSamples_Field).FieldDesc.TypeInfo = '\0';
  (this->NumSamples_Field).FieldDesc.Reference = 0;
  (this->IsExternal_Field).FieldDesc.ValueOffset = 0x4a;
  (this->IsExternal_Field).FieldDesc.ValueSize = 1;
  (this->IsExternal_Field).FieldDesc.NameSize = '\n';
  (this->IsExternal_Field).FieldDesc.TypeInfo = '\0';
  (this->IsExternal_Field).FieldDesc.Reference = 0;
  (this->IsExtracted_Field).FieldDesc.ValueOffset = 0x4b;
  (this->IsExtracted_Field).FieldDesc.ValueSize = 1;
  (this->IsExtracted_Field).FieldDesc.NameSize = '\v';
  (this->IsExtracted_Field).FieldDesc.TypeInfo = '\0';
  (this->IsExtracted_Field).FieldDesc.Reference = 0;
  (this->IsCulled_Field).FieldDesc.ValueOffset = 0x4c;
  (this->IsCulled_Field).FieldDesc.ValueSize = 1;
  (this->IsCulled_Field).FieldDesc.NameSize = '\b';
  (this->IsCulled_Field).FieldDesc.TypeInfo = '\0';
  (this->IsCulled_Field).FieldDesc.Reference = 0;
  (this->IsTrackingSkipped_Field).FieldDesc.ValueOffset = 0x4d;
  (this->IsTrackingSkipped_Field).FieldDesc.ValueSize = 1;
  (this->IsTrackingSkipped_Field).FieldDesc.NameSize = '\x11';
  (this->IsTrackingSkipped_Field).FieldDesc.TypeInfo = '\0';
  (this->IsTrackingSkipped_Field).FieldDesc.Reference = 0;
  (this->IsTransient_Field).FieldDesc.ValueOffset = 0x4e;
  (this->IsTransient_Field).FieldDesc.ValueSize = 1;
  (this->IsTransient_Field).FieldDesc.NameSize = '\v';
  (this->IsTransient_Field).FieldDesc.TypeInfo = '\0';
  (this->IsTransient_Field).FieldDesc.Reference = 0;
  (this->IsTransientUntracked_Field).FieldDesc.ValueOffset = 0x4f;
  (this->IsTransientUntracked_Field).FieldDesc.ValueSize = 1;
  (this->IsTransientUntracked_Field).FieldDesc.NameSize = '\x14';
  (this->IsTransientUntracked_Field).FieldDesc.TypeInfo = '\0';
  (this->IsTransientUntracked_Field).FieldDesc.Reference = 0;
  (this->IsTransientCacheHit_Field).FieldDesc.ValueOffset = 0x50;
  (this->IsTransientCacheHit_Field).FieldDesc.ValueSize = 1;
  (this->IsTransientCacheHit_Field).FieldDesc.NameSize = '\x13';
  (this->IsTransientCacheHit_Field).FieldDesc.TypeInfo = '\0';
  (this->IsTransientCacheHit_Field).FieldDesc.Reference = 0;
  (this->IsHandleType32Bits_Field).FieldDesc.ValueOffset = 0x51;
  (this->IsHandleType32Bits_Field).FieldDesc.ValueSize = 1;
  (this->IsHandleType32Bits_Field).FieldDesc.NameSize = '\x12';
  (this->IsHandleType32Bits_Field).FieldDesc.TypeInfo = '\0';
  (this->IsHandleType32Bits_Field).FieldDesc.Reference = 0;
  (this->DefinitionId_Field).FieldDesc.ValueOffset = 0x52;
  (this->DefinitionId_Field).FieldDesc.ValueSize = 0;
  (this->DefinitionId_Field).FieldDesc.NameSize = '\0';
  (this->DefinitionId_Field).FieldDesc.TypeInfo = '\0';
  (this->DefinitionId_Field).FieldDesc.Reference = 0;
  this->EventProps_Private = (TField<1310,82,UE::Trace::EventProps>)0x0;
  return this;
}

// Initialize @ 145dbe670

uint __cdecl FRDGTraceTextureMessageFields::Initialize(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `public:_static_unsigned_int___cdecl_FRDGTraceTextureMessageFields::Initialize(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FRDGTraceTextureMessageFields::Initialize(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FRDGTraceTextureMessageFields::Initialize(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceTextureMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceTextureMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceTextureMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          FRDGTraceTextureMessageFields
                    (&`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceTextureMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                      ::__l2::Fields);
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceTextureMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceTextureMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_1__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceTextureMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_1__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceTextureMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_1__ == -1) {
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceTextureMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Length = '\b';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceTextureMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Ptr = "RDGTrace";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceTextureMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Length = '\x0e';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceTextureMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Ptr = "TextureMessage";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceTextureMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Fields =
               (FFieldDesc *)
               &`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceTextureMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::Fields;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceTextureMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.FieldCount = 0x1e;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceTextureMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Flags = 2;
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceTextureMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_1__);
        }
      }
      `public:_static_unsigned_int___cdecl_FRDGTraceTextureMessageFields::Initialize(void)'::__l2::
      Uid_ThreadSafeInit =
           UE::Trace::Private::FEventNode::Initialize
                     (RDGTraceTextureMessageEvent,
                      &`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTraceTextureMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                       ::__l2::Info);
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FRDGTraceTextureMessageFields::Initialize(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_FRDGTraceTextureMessageFields::Initialize(void)'::__l2
         ::Uid_ThreadSafeInit;
}

