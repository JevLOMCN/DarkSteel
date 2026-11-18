// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// Get @ 149754250

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:___cdecl_FPCGLandscapeResource::~FPCGLandscapeResource(void)_::_5_::TSTR_BeginDestroyCommand148>
* __cdecl TRenderCommandTag<`FPCGLandscapeResource::~FPCGLandscapeResource'::__l5::TSTR_BeginDestroyCommand148>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FPCGLandscapeResource::~FPCGLandscapeResource(void)_::_5_::TSTR_BeginDestroyCommand148>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FPCGLandscapeResource::~FPCGLandscapeResource(void)_::_5_::TSTR_BeginDestroyCommand148>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FPCGLandscapeResource::~FPCGLandscapeResource(void)_::_5_::TSTR_BeginDestroyCommand148>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FPCGLandscapeResource::~FPCGLandscapeResource(void)_::_5_::TSTR_BeginDestroyCommand148>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"BeginDestroyCommand");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"BeginDestroyCommand",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FPCGLandscapeResource::~FPCGLandscapeResource(void)_::_5_::TSTR_BeginDestroyCommand148>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FPCGLandscapeResource::~FPCGLandscapeResource(void)_::_5_::TSTR_BeginDestroyCommand148>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"BeginDestroyCommand");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:___cdecl_FPCGLandscapeResource::~FPCGLandscapeResource(void)_::_5_::TSTR_BeginDestroyCommand148>_const_&___cdecl_TRenderCommandTag<_public:___cdecl_FPCGLandscapeResource::~FPCGLandscapeResource(void)_::_5_::TSTR_BeginDestroyCommand148>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"BeginDestroyCommand",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_BeginDestroyCom;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 14980f420

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_public:_bool___cdecl_FPCGProxyForGPUDataCollection::GetCPUData(FPCGContext_*,int,FPCGTaggedData_&)_::_8_::TSTR_ReadbackDataCollection172>
* __cdecl TRenderCommandTag<`FPCGProxyForGPUDataCollection::GetCPUData'::__l8::TSTR_ReadbackDataCollection172>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_bool___cdecl_FPCGProxyForGPUDataCollection::GetCPUData(FPCGContext_*,int,FPCGTaggedData_&)_::_8_::TSTR_ReadbackDataCollection172>_const_&___cdecl_TRenderCommandTag<_public:_bool___cdecl_FPCGProxyForGPUDataCollection::GetCPUData(FPCGContext_*,int,FPCGTaggedData_&)_::_8_::TSTR_ReadbackDataCollection172>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_bool___cdecl_FPCGProxyForGPUDataCollection::GetCPUData(FPCGContext_*,int,FPCGTaggedData_&)_::_8_::TSTR_ReadbackDataCollection172>_const_&___cdecl_TRenderCommandTag<_public:_bool___cdecl_FPCGProxyForGPUDataCollection::GetCPUData(FPCGContext_*,int,FPCGTaggedData_&)_::_8_::TSTR_ReadbackDataCollection172>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ReadbackDataCollection");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ReadbackDataCollection",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_bool___cdecl_FPCGProxyForGPUDataCollection::GetCPUData(FPCGContext_*,int,FPCGTaggedData_&)_::_8_::TSTR_ReadbackDataCollection172>_const_&___cdecl_TRenderCommandTag<_public:_bool___cdecl_FPCGProxyForGPUDataCollection::GetCPUData(FPCGContext_*,int,FPCGTaggedData_&)_::_8_::TSTR_ReadbackDataCollection172>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"ReadbackDataCollection");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_public:_bool___cdecl_FPCGProxyForGPUDataCollection::GetCPUData(FPCGContext_*,int,FPCGTaggedData_&)_::_8_::TSTR_ReadbackDataCollection172>_const_&___cdecl_TRenderCommandTag<_public:_bool___cdecl_FPCGProxyForGPUDataCollection::GetCPUData(FPCGContext_*,int,FPCGTaggedData_&)_::_8_::TSTR_ReadbackDataCollection172>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"ReadbackDataCollection",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_ReadbackDataCol;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

// Get @ 149b8be30

/* WARNING: Enum "Type": Some values do not have unique names */

TRenderCommandTag<_protected:_virtual_bool___cdecl_FPCGGenerateLandscapeTexturesElement::ExecuteInternal(FPCGContext_*)const_::_200_::TSTR_GenerateGrassMaps560>
* __cdecl TRenderCommandTag<`FPCGGenerateLandscapeTexturesElement::ExecuteInternal'::__l200::TSTR_GenerateGrassMaps560>
          ::Get(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_bool___cdecl_FPCGGenerateLandscapeTexturesElement::ExecuteInternal(FPCGContext_*)const_::_200_::TSTR_GenerateGrassMaps560>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_bool___cdecl_FPCGGenerateLandscapeTexturesElement::ExecuteInternal(FPCGContext_*)const_::_200_::TSTR_GenerateGrassMaps560>::Get(void)_::_2_::FStatData>
  FVar2;
  int *piVar3;
  FName local_res8;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_bool___cdecl_FPCGGenerateLandscapeTexturesElement::ExecuteInternal(FPCGContext_*)const_::_200_::TSTR_GenerateGrassMaps560>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_bool___cdecl_FPCGGenerateLandscapeTexturesElement::ExecuteInternal(FPCGContext_*)const_::_200_::TSTR_GenerateGrassMaps560>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"GenerateGrassMaps");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"GenerateGrassMaps",
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
      if (::Stat == (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_bool___cdecl_FPCGGenerateLandscapeTexturesElement::ExecuteInternal(FPCGContext_*)const_::_200_::TSTR_GenerateGrassMaps560>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_bool___cdecl_FPCGGenerateLandscapeTexturesElement::ExecuteInternal(FPCGContext_*)const_::_200_::TSTR_GenerateGrassMaps560>::Get(void)_::_2_::FStatData>
                     )0x0) {
        pFVar1 = ::FName::FName(&local_res8,"GenerateGrassMaps");
        FVar2 = (FThreadSafeStaticStat<_public:_static_class_TRenderCommandTag<_protected:_virtual_bool___cdecl_FPCGGenerateLandscapeTexturesElement::ExecuteInternal(FPCGContext_*)const_::_200_::TSTR_GenerateGrassMaps560>_const_&___cdecl_TRenderCommandTag<_protected:_virtual_bool___cdecl_FPCGGenerateLandscapeTexturesElement::ExecuteInternal(FPCGContext_*)const_::_200_::TSTR_GenerateGrassMaps560>::Get(void)_::_2_::FStatData>
                 )FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&::Stat,*pFVar1,L"GenerateGrassMaps",
                             "STATGROUP_RenderThreadCommands","STATCAT_Advanced",
                             L"Render Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
      }
      ::Tag._0_8_ = u_GenerateGrassMa;
      ::Tag._8_8_ = FVar2;
      _Init_thread_footer(&::_TSS1);
    }
  }
  return &::Tag;
}

