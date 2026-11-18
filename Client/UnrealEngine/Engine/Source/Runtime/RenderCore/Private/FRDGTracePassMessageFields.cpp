// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// FRDGTracePassMessageFields @ 145d8d600

FRDGTracePassMessageFields * __thiscall
FRDGTracePassMessageFields::FRDGTracePassMessageFields(FRDGTracePassMessageFields *this)

{
  (this->Name_Field).FieldDesc.NameSize = '\x04';
  (this->Name_Field).FieldDesc.TypeInfo = 0x89;
  (this->Name_Field).FieldDesc.ValueOffset = 0;
  (this->Name_Field).FieldDesc.ValueSize = 0;
  (this->Name_Field).FieldDesc.Name = "Name";
  (this->StartCycles_Field).FieldDesc.Name = "StartCycles";
  (this->EndCycles_Field).FieldDesc.Name = "EndCycles";
  (this->Handle_Field).FieldDesc.Name = "Handle";
  (this->GraphicsForkPass_Field).FieldDesc.Name = "GraphicsForkPass";
  (this->GraphicsJoinPass_Field).FieldDesc.Name = "GraphicsJoinPass";
  (this->Textures_Field).FieldDesc.Name = "Textures";
  (this->Buffers_Field).FieldDesc.Name = "Buffers";
  (this->Flags_Field).FieldDesc.Name = "Flags";
  (this->Pipeline_Field).FieldDesc.Name = "Pipeline";
  (this->IsCulled_Field).FieldDesc.Name = "IsCulled";
  (this->IsAsyncComputeBegin_Field).FieldDesc.Name = "IsAsyncComputeBegin";
  (this->IsAsyncComputeEnd_Field).FieldDesc.Name = "IsAsyncComputeEnd";
  (this->SkipRenderPassBegin_Field).FieldDesc.Name = "SkipRenderPassBegin";
  (this->SkipRenderPassEnd_Field).FieldDesc.Name = "SkipRenderPassEnd";
  (this->IsParallelExecuteBegin_Field).FieldDesc.Name = "IsParallelExecuteBegin";
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
  (this->GraphicsForkPass_Field).FieldDesc.ValueOffset = 0x14;
  (this->GraphicsForkPass_Field).FieldDesc.ValueSize = 4;
  (this->GraphicsForkPass_Field).FieldDesc.NameSize = '\x10';
  (this->GraphicsForkPass_Field).FieldDesc.TypeInfo = '\x02';
  (this->GraphicsForkPass_Field).FieldDesc.Reference = 0;
  (this->GraphicsJoinPass_Field).FieldDesc.ValueOffset = 0x18;
  (this->GraphicsJoinPass_Field).FieldDesc.ValueSize = 4;
  (this->GraphicsJoinPass_Field).FieldDesc.NameSize = '\x10';
  (this->GraphicsJoinPass_Field).FieldDesc.TypeInfo = '\x02';
  (this->GraphicsJoinPass_Field).FieldDesc.Reference = 0;
  (this->Textures_Field).FieldDesc.ValueOffset = 0x1c;
  (this->Textures_Field).FieldDesc.ValueSize = 0;
  (this->Textures_Field).FieldDesc.NameSize = '\b';
  (this->Textures_Field).FieldDesc.TypeInfo = 0x82;
  (this->Textures_Field).FieldDesc.Reference = 0;
  (this->Buffers_Field).FieldDesc.ValueOffset = 0x1c;
  (this->Buffers_Field).FieldDesc.ValueSize = 0;
  (this->Buffers_Field).FieldDesc.NameSize = '\a';
  (this->Buffers_Field).FieldDesc.TypeInfo = 0x82;
  (this->Buffers_Field).FieldDesc.Reference = 0;
  (this->Flags_Field).FieldDesc.ValueOffset = 0x1c;
  (this->Flags_Field).FieldDesc.ValueSize = 2;
  (this->Flags_Field).FieldDesc.NameSize = '\x05';
  (this->Flags_Field).FieldDesc.TypeInfo = '\x01';
  (this->Flags_Field).FieldDesc.Reference = 0;
  (this->Pipeline_Field).FieldDesc.ValueOffset = 0x1e;
  (this->Pipeline_Field).FieldDesc.ValueSize = 2;
  (this->Pipeline_Field).FieldDesc.NameSize = '\b';
  (this->Pipeline_Field).FieldDesc.TypeInfo = '\x01';
  (this->Pipeline_Field).FieldDesc.Reference = 0;
  (this->IsCulled_Field).FieldDesc.ValueOffset = 0x20;
  (this->IsCulled_Field).FieldDesc.ValueSize = 1;
  (this->IsCulled_Field).FieldDesc.NameSize = '\b';
  (this->IsCulled_Field).FieldDesc.TypeInfo = '\0';
  (this->IsCulled_Field).FieldDesc.Reference = 0;
  (this->IsAsyncComputeBegin_Field).FieldDesc.ValueOffset = 0x21;
  (this->IsAsyncComputeBegin_Field).FieldDesc.ValueSize = 1;
  (this->IsAsyncComputeBegin_Field).FieldDesc.NameSize = '\x13';
  (this->IsAsyncComputeBegin_Field).FieldDesc.TypeInfo = '\0';
  (this->IsAsyncComputeBegin_Field).FieldDesc.Reference = 0;
  (this->IsAsyncComputeEnd_Field).FieldDesc.ValueOffset = 0x22;
  (this->IsAsyncComputeEnd_Field).FieldDesc.ValueSize = 1;
  (this->IsAsyncComputeEnd_Field).FieldDesc.NameSize = '\x11';
  (this->IsAsyncComputeEnd_Field).FieldDesc.TypeInfo = '\0';
  (this->IsAsyncComputeEnd_Field).FieldDesc.Reference = 0;
  (this->SkipRenderPassBegin_Field).FieldDesc.ValueOffset = 0x23;
  (this->SkipRenderPassBegin_Field).FieldDesc.ValueSize = 1;
  (this->SkipRenderPassBegin_Field).FieldDesc.NameSize = '\x13';
  (this->SkipRenderPassBegin_Field).FieldDesc.TypeInfo = '\0';
  (this->SkipRenderPassBegin_Field).FieldDesc.Reference = 0;
  (this->SkipRenderPassEnd_Field).FieldDesc.ValueOffset = 0x24;
  (this->SkipRenderPassEnd_Field).FieldDesc.ValueSize = 1;
  (this->SkipRenderPassEnd_Field).FieldDesc.NameSize = '\x11';
  (this->SkipRenderPassEnd_Field).FieldDesc.TypeInfo = '\0';
  (this->SkipRenderPassEnd_Field).FieldDesc.Reference = 0;
  (this->IsParallelExecuteBegin_Field).FieldDesc.ValueOffset = 0x25;
  (this->IsParallelExecuteBegin_Field).FieldDesc.ValueSize = 1;
  (this->IsParallelExecuteBegin_Field).FieldDesc.NameSize = '\x16';
  (this->IsParallelExecuteBegin_Field).FieldDesc.TypeInfo = '\0';
  (this->IsParallelExecuteBegin_Field).FieldDesc.Reference = 0;
  (this->IsParallelExecuteEnd_Field).FieldDesc.ValueOffset = 0x26;
  (this->IsParallelExecuteEnd_Field).FieldDesc.ValueSize = 1;
  (this->IsParallelExecuteEnd_Field).FieldDesc.Name = "IsParallelExecuteEnd";
  (this->IsParallelExecute_Field).FieldDesc.Name = "IsParallelExecute";
  (this->IsParallelExecuteAllowed_Field).FieldDesc.Name = "IsParallelExecuteAllowed";
  (this->IsParallelExecuteAsyncAllowed_Field).FieldDesc.Name = "IsParallelExecuteAsyncAllowed";
  (this->IsHandleType32Bits_Field).FieldDesc.Name = "IsHandleType32Bits";
  (this->DefinitionId_Field).FieldDesc.Name = "";
  (this->IsParallelExecuteEnd_Field).FieldDesc.NameSize = '\x14';
  (this->IsParallelExecuteEnd_Field).FieldDesc.TypeInfo = '\0';
  (this->IsParallelExecuteEnd_Field).FieldDesc.Reference = 0;
  (this->IsParallelExecute_Field).FieldDesc.ValueOffset = 0x27;
  (this->IsParallelExecute_Field).FieldDesc.ValueSize = 1;
  (this->IsParallelExecute_Field).FieldDesc.NameSize = '\x11';
  (this->IsParallelExecute_Field).FieldDesc.TypeInfo = '\0';
  (this->IsParallelExecute_Field).FieldDesc.Reference = 0;
  (this->IsParallelExecuteAllowed_Field).FieldDesc.ValueOffset = 0x28;
  (this->IsParallelExecuteAllowed_Field).FieldDesc.ValueSize = 1;
  (this->IsParallelExecuteAllowed_Field).FieldDesc.NameSize = '\x18';
  (this->IsParallelExecuteAllowed_Field).FieldDesc.TypeInfo = '\0';
  (this->IsParallelExecuteAllowed_Field).FieldDesc.Reference = 0;
  (this->IsParallelExecuteAsyncAllowed_Field).FieldDesc.ValueOffset = 0x29;
  (this->IsParallelExecuteAsyncAllowed_Field).FieldDesc.ValueSize = 1;
  (this->IsParallelExecuteAsyncAllowed_Field).FieldDesc.NameSize = '\x1d';
  (this->IsParallelExecuteAsyncAllowed_Field).FieldDesc.TypeInfo = '\0';
  (this->IsParallelExecuteAsyncAllowed_Field).FieldDesc.Reference = 0;
  (this->IsHandleType32Bits_Field).FieldDesc.ValueOffset = 0x2a;
  (this->IsHandleType32Bits_Field).FieldDesc.ValueSize = 1;
  (this->IsHandleType32Bits_Field).FieldDesc.NameSize = '\x12';
  (this->IsHandleType32Bits_Field).FieldDesc.TypeInfo = '\0';
  (this->IsHandleType32Bits_Field).FieldDesc.Reference = 0;
  (this->DefinitionId_Field).FieldDesc.ValueOffset = 0x2b;
  (this->DefinitionId_Field).FieldDesc.ValueSize = 0;
  (this->DefinitionId_Field).FieldDesc.NameSize = '\0';
  (this->DefinitionId_Field).FieldDesc.TypeInfo = '\0';
  (this->DefinitionId_Field).FieldDesc.Reference = 0;
  this->EventProps_Private = (TField<789,43,UE::Trace::EventProps>)0x0;
  return this;
}

// Initialize @ 145dbe320

uint __cdecl FRDGTracePassMessageFields::Initialize(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `public:_static_unsigned_int___cdecl_FRDGTracePassMessageFields::Initialize(void)'::
                __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FRDGTracePassMessageFields::Initialize(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FRDGTracePassMessageFields::Initialize(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTracePassMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTracePassMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTracePassMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          FRDGTracePassMessageFields
                    (&`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTracePassMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                      ::__l2::Fields);
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTracePassMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      if (*piVar1 < `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTracePassMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                    ::__l2::_thread_safe_static_guard_1__) {
        _Init_thread_header(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTracePassMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_1__);
        if (`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTracePassMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
            ::__l2::_thread_safe_static_guard_1__ == -1) {
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTracePassMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Length = '\b';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTracePassMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.LoggerName.Ptr = "RDGTrace";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTracePassMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Length = '\v';
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTracePassMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.EventName.Ptr = "PassMessage";
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTracePassMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Fields =
               (FFieldDesc *)
               &`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTracePassMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::Fields;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTracePassMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.FieldCount = 0x15;
          `public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTracePassMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
          ::__l2::Info.Flags = 2;
          _Init_thread_footer(&`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTracePassMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_1__);
        }
      }
      `public:_static_unsigned_int___cdecl_FRDGTracePassMessageFields::Initialize(void)'::__l2::
      Uid_ThreadSafeInit =
           UE::Trace::Private::FEventNode::Initialize
                     (RDGTracePassMessageEvent,
                      &`public:___cdecl_`public:_static_unsigned_int___cdecl_FRDGTracePassMessageFields::Initialize(void)'::`2'::<lambda_1>::operator()(void)const___ptr64'
                       ::__l2::Info);
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FRDGTracePassMessageFields::Initialize(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_unsigned_int___cdecl_FRDGTracePassMessageFields::Initialize(void)'::__l2::
         Uid_ThreadSafeInit;
}

