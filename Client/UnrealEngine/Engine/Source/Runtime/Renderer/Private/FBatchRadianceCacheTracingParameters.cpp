// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// FBatchRadianceCacheTracingParameters @ 144cacc60

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FBatchRadianceCacheTracingParameters * __thiscall
LumenRadianceCache::FBatchRadianceCacheTracingParameters::FBatchRadianceCacheTracingParameters
          (FBatchRadianceCacheTracingParameters *this)

{
  float *pfVar1;
  TStaticArray<LumenRadianceCache::FRadianceCacheTracingParameters,2,4294967295> *pTVar2;
  longlong lVar3;
  
  pTVar2 = &this->RadianceCache;
  lVar3 = 2;
  pfVar1 = &(this->RadianceCache).Elements[0].RadianceProbeSettings.Elements[0].field0_0x0._s_0.Z;
  do {
    ((TVector4<float>_u_0_s_0 *)(pfVar1 + -2))->X = 0.0;
    ((TVector4<float>_u_0_s_0 *)(pfVar1 + -2))->Y = 0.0;
    *pfVar1 = 0.0;
    *(undefined8 *)(pfVar1 + 1) = 0x3f800000;
    *(undefined8 *)(pfVar1 + 3) = 0;
    *(undefined8 *)(pfVar1 + 5) = 0x3f800000;
    *(undefined8 *)(pfVar1 + 7) = 0;
    *(undefined8 *)(pfVar1 + 9) = 0x3f800000;
    *(undefined8 *)(pfVar1 + 0xb) = 0;
    *(undefined8 *)(pfVar1 + 0xd) = 0x3f800000;
    *(undefined8 *)(pfVar1 + 0xf) = 0;
    *(undefined8 *)(pfVar1 + 0x11) = 0x3f800000;
    *(undefined8 *)(pfVar1 + 0x13) = 0;
    pfVar1[0x15] = 1.0;
    pTVar2->Elements[0].ProbeTraceData = (FRDGBufferSRV *)0x0;
    pTVar2 = (TStaticArray<LumenRadianceCache::FRadianceCacheTracingParameters,2,4294967295> *)
             (pTVar2->Elements + 1);
    *(undefined8 *)(pfVar1 + -8) = 0;
    *(undefined8 *)(pfVar1 + -6) = 0;
    *(undefined8 *)(pfVar1 + 0x1c) = 0;
    *(undefined8 *)(pfVar1 + 0x1e) = 0;
    pfVar1 = pfVar1 + 0x2c;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return this;
}

// zzAppendMemberGetPrev @ 144cf19b0

void * __cdecl
LumenRadianceCache::FBatchRadianceCacheTracingParameters::zzAppendMemberGetPrev
          (zzFirstMemberId param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  return (void *)0x0;
}

// zzAppendMemberGetPrev @ 144cf19c0

void * __cdecl
LumenRadianceCache::FBatchRadianceCacheTracingParameters::zzAppendMemberGetPrev
          (zzNextMemberIdIndirectTracingParameters param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined8 local_28;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined8 local_18;
  FShaderParametersMetadata *pFStack_10;
  
  pFStack_10 = FLumenIndirectTracingParameters::FTypeInfo::GetStructMetadata();
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_38 = L"IndirectTracingParameters";
  pwStack_30 = L"FLumenIndirectTracingParameters";
  local_28 = 0x5f;
  uStack_20 = 0x15;
  uStack_1c = 1;
  local_18 = 1;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_2->ArrayMax * 0x30)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  lVar6 = (longlong)iVar4;
  param_2->ArrayNum = iVar4 + 1;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30) = local_38;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30 + 8) = pwStack_30;
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x10) = local_28;
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10 + 8) =
       CONCAT44(uStack_1c,CONCAT22(uStack_1e,uStack_20));
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20) = local_18;
  *(FShaderParametersMetadata **)(pFVar1 + lVar6 * 0x30 + 0x20 + 8) = pFStack_10;
  return zzAppendMemberGetPrev;
}

// zzAppendMemberGetPrev @ 144cf1ae0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void * __cdecl
LumenRadianceCache::FBatchRadianceCacheTracingParameters::zzAppendMemberGetPrev
          (zzNextMemberIdRadianceCache param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  code *pcVar6;
  undefined1 local_res10;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_58;
  wchar_t *local_48;
  wchar_t *pwStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  FShaderParametersMetadata *pFStack_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_LumenRadianceCache::FRadianceCacheTracingParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_LumenRadianceCache::FRadianceCacheTracingParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_LumenRadianceCache::FRadianceCacheTracingParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar6 = FRadianceCacheTracingParameters::zzAppendMemberGetPrev;
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 0;
      do {
        pcVar6 = (code *)(*pcVar6)(local_res10,&local_58);
      } while (pcVar6 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_LumenRadianceCache::FRadianceCacheTracingParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FRadianceCacheTracingParameters",L"FRadianceCacheTracingParameters",
                 (wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenRadianceCacheHardwareRayTracing.cpp"
                 ,0x50,0xb0,&local_58,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_58.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      atexit(`LumenRadianceCache::FRadianceCacheTracingParameters::FTypeInfo::GetStructMetadata'::
             __l2::_dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_LumenRadianceCache::FRadianceCacheTracingParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_48 = L"RadianceCache";
  pwStack_40 = L"FRadianceCacheTracingParameters";
  pFStack_20 = &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_LumenRadianceCache::FRadianceCacheTracingParameters::FTypeInfo::GetStructMetadata(void)'
                ::__l2::StaticStructMetadata;
  local_38 = 0x60;
  uStack_34 = 0x40;
  uStack_30 = 0x14;
  uStack_2c = 1;
  local_28 = 1;
  uStack_24 = 2;
  if ((pFVar1 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 < pFVar1 + (longlong)param_2->ArrayMax * 0x30)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar6 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar6)();
      return pvVar4;
    }
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  lVar5 = (longlong)iVar3;
  param_2->ArrayNum = iVar3 + 1;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(wchar_t **)(pFVar1 + lVar5 * 0x30) = local_48;
  *(wchar_t **)(pFVar1 + lVar5 * 0x30 + 8) = pwStack_40;
  *(ulonglong *)(pFVar1 + lVar5 * 0x30 + 0x10) = CONCAT44(uStack_34,local_38);
  *(ulonglong *)(pFVar1 + lVar5 * 0x30 + 0x10 + 8) =
       CONCAT44(uStack_2c,CONCAT22(uStack_2e,uStack_30));
  *(ulonglong *)(pFVar1 + lVar5 * 0x30 + 0x20) = CONCAT44(uStack_24,local_28);
  *(FShaderParametersMetadata **)(pFVar1 + lVar5 * 0x30 + 0x20 + 8) = pFStack_20;
  return zzAppendMemberGetPrev;
}

// zzAppendMemberGetPrev @ 144cf1d40

void * __cdecl
LumenRadianceCache::FBatchRadianceCacheTracingParameters::zzAppendMemberGetPrev
          (zzNextMemberIdTempAtlasNumTraceTiles param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_38 = L"TempAtlasNumTraceTiles";
  pwStack_30 = L"";
  local_28 = 0x61;
  uStack_24 = 0x1a0;
  uStack_20 = 3;
  uStack_1c = 1;
  uStack_10 = 0;
  local_18 = 1;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_2->ArrayMax * 0x30)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  lVar6 = (longlong)iVar4;
  param_2->ArrayNum = iVar4 + 1;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30) = local_38;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30 + 8) = pwStack_30;
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10) = CONCAT44(uStack_24,local_28);
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10 + 8) =
       CONCAT44(uStack_1c,CONCAT22(uStack_1e,uStack_20));
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20) = local_18;
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20 + 8) = uStack_10;
  return zzAppendMemberGetPrev;
}

