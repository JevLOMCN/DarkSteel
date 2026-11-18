// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// Get @ 14e5f3ad0

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_static_void___cdecl_FGLTFBufferUtilities::ReadRHIBuffer(FRHIBuffer_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&)_::_2_::TSTR_ReadRHIBuffer94>
* __cdecl TRenderCommandTag<`FGLTFBufferUtilities::ReadRHIBuffer'::__l2::TSTR_ReadRHIBuffer94>::Get
                    (void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_static_void___cdecl_FGLTFBufferUtilities::ReadRHIBuffer(FRHIBuffer_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&)_::_2_::TSTR_ReadRHIBuffer94>_const_&___cdecl_TRenderCommandTag<_public:_static_void___cdecl_FGLTFBufferUtilities::ReadRHIBuffer(FRHIBuffer_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&)_::_2_::TSTR_ReadRHIBuffer94>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_static_void___cdecl_FGLTFBufferUtilities::ReadRHIBuffer(FRHIBuffer_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&)_::_2_::TSTR_ReadRHIBuffer94>_const_&___cdecl_TRenderCommandTag<_public:_static_void___cdecl_FGLTFBufferUtilities::ReadRHIBuffer(FRHIBuffer_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&)_::_2_::TSTR_ReadRHIBuffer94>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ReadRHIBuffer");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ReadRHIBuffer",
                   "STATGROUP_RenderThreadCommands","STATCAT_Advanced",L"Render Thread Commands",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar3 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      FVar2 = ::Stat;
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_static_void___cdecl_FGLTFBufferUtilities::ReadRHIBuffer(FRHIBuffer_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&)_::_2_::TSTR_ReadRHIBuffer94>_const_&___cdecl_TRenderCommandTag<_public:_static_void___cdecl_FGLTFBufferUtilities::ReadRHIBuffer(FRHIBuffer_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&)_::_2_::TSTR_ReadRHIBuffer94>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ReadRHIBuffer");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_static_void___cdecl_FGLTFBufferUtilities::ReadRHIBuffer(FRHIBuffer_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&)_::_2_::TSTR_ReadRHIBuffer94>_const_&___cdecl_TRenderCommandTag<_public:_static_void___cdecl_FGLTFBufferUtilities::ReadRHIBuffer(FRHIBuffer_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&)_::_2_::TSTR_ReadRHIBuffer94>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ReadRHIBuffer",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ReadRHIBuffer;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

