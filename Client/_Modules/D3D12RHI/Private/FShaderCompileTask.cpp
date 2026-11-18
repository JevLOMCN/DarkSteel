// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// DoTask @ 145a125e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145a12bd2) */
/* WARNING: Removing unreachable block (ram,0x000145a12912) */
/* WARNING: Removing unreachable block (ram,0x000145a12e92) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingPipelineCache::FShaderCompileTask::DoTask
          (FShaderCompileTask *this,Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  int *piVar1;
  TTypeCompatibleBytes<FString> *pTVar2;
  ECollectionType EVar3;
  uint uVar4;
  FD3D12RayTracingShader *pFVar5;
  FEntry *pFVar6;
  ID3D12StateObject *pIVar7;
  code *pcVar8;
  ulong64 uVar9;
  ulong64 uVar10;
  ulong64 uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_RTPSO_CompileShader> FVar18;
  TRefCountPtr<ID3D12StateObject> TVar19;
  wchar_t *pwVar20;
  FD3D12ShaderIdentifier *pFVar21;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong lVar22;
  ForElementType<FString> FVar23;
  FName FVar24;
  TArray<FString,TFixedAllocator<4>_> *pTVar25;
  TRefCountPtr<ID3D12StateObject> *pTVar26;
  bool bVar27;
  undefined1 auStackY_388 [32];
  undefined8 in_stack_fffffffffffffca0;
  TArray<FString,TFixedAllocator<4>_> *pTVar28;
  undefined4 uVar29;
  FString local_318;
  FString local_308;
  FString local_2f8;
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  FColor_u_0 local_2a8;
  uint local_2a4;
  FName local_2a0;
  ulong64 local_298;
  FName local_290;
  ID3D12Device5 local_280;
  LARGE_INTEGER local_278;
  longlong local_270;
  LARGE_INTEGER local_268;
  LARGE_INTEGER local_260;
  ID3D12RootSignature *local_258;
  FDXILLibrary *local_250;
  TArrayView<ID3D12RootSignature_*,int> *local_248;
  FStatMessage local_240;
  wchar_t *local_230;
  undefined8 uStack_228;
  wchar_t *local_220;
  wchar_t *pwStack_218;
  wchar_t *local_210;
  undefined8 local_208;
  undefined4 local_200;
  TArrayView<D3D12_EXISTING_COLLECTION_DESC,int> local_1f8;
  TArrayView<unsigned_int,int> local_1e8;
  ID3D12RootSignature local_1d8;
  uint local_1d0;
  ForElementType<wchar_t_const_*> *local_1c8;
  int local_1c0;
  TArrayView<wchar_t_const_*,int> local_1b8;
  FName local_1a8;
  FD3D12ShaderIdentifier local_1a0;
  ForElementType<wchar_t_const_*> local_180;
  uint local_168;
  uint local_164;
  ForElementType<wchar_t_const_*> local_160;
  int local_148;
  int local_144;
  FDXILLibrary local_140;
  ulonglong local_48;
  
  uVar29 = (undefined4)((ulonglong)in_stack_fffffffffffffca0 >> 0x20);
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_388;
  FVar18 = StatPtr_STAT_RTPSO_CompileShader;
  if (StatPtr_STAT_RTPSO_CompileShader == (FThreadSafeStaticStat<FStat_STAT_RTPSO_CompileShader>)0x0
     ) {
    pFVar17 = ::FName::FName(&local_1a8,"STAT_RTPSO_CompileShader");
    uVar29 = 1;
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_RTPSO_CompileShader>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RTPSO_CompileShader,*pFVar17,
                        L"RTPSO Compile Shader","STATGROUP_D3D12RayTracing","STATCAT_Advanced",
                        L"D3D12RHI: Ray Tracing",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)FVar18;
  bVar12 = false;
  bVar14 = false;
  local_290.ComparisonIndex.Value = 0;
  local_290.Number = 0;
  if ((FVar24.ComparisonIndex.Value.Value != 0) || (FVar24.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2a8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2a8._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar12 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2a0.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
        local_2a0.Number = FVar24.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2a0,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                   ,0x419);
        bVar12 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar24,CycleScopeStart);
      bVar13 = true;
      goto LAB_145a1273b;
    }
  }
  bVar13 = false;
  FVar24 = local_290;
LAB_145a1273b:
  bVar27 = -1 < CpuChannel->Enabled;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FD3D12RayTracingPipelineCache::FShaderCompileTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1050,"ShaderCompileTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
               ,0x41a);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FD3D12RayTracingPipelineCache::FShaderCompileTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1050);
  }
  QueryPerformanceCounter(&local_260);
  EVar3 = this->CollectionType;
  local_270 = -local_260.QuadPart;
  local_298 = (this->CacheKey).ShaderHash;
  local_248 = (TArrayView<ID3D12RootSignature_*,int> *)(this->CacheKey).GlobalRootSignature;
  pFVar5 = (this->Entry->Shader).Reference;
  local_258 = (this->CacheKey).LocalRootSignature;
  uVar4 = (this->CacheKey).MaxAttributeSizeInBytes;
  local_2a4 = (this->CacheKey).MaxPayloadSizeInBytes;
  local_148 = 0;
  local_168 = 0;
  local_164 = 3;
  local_144 = 3;
  local_210 = (wchar_t *)0x0;
  local_230 = (wchar_t *)0x0;
  uStack_228 = 0;
  local_220 = (wchar_t *)0x0;
  pwStack_218 = (wchar_t *)0x0;
  if (EVar3 == HitGroup) {
    local_230 = FD3D12RayTracingPipelineCache::FEntry::GetPrimaryExportNameChars(this->Entry);
    pFVar6 = this->Entry;
    pTVar25 = &pFVar6->ExportNames;
    uStack_228 = CONCAT44(uStack_228._4_4_,
                          (uint)(1 < (pFVar5->IntersectionEntryPoint).Data.ArrayNum));
    ::FString::PrintfImpl(&local_318,L"%s_%016llx");
    if ((pTVar25 <= &local_318) &&
       (&local_318 < (pTVar25->AllocatorInstance).InlineData + (pFVar6->ExportNames).ArrayMax)) {
      pTVar28 = pTVar25;
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      uVar29 = (undefined4)((ulonglong)pTVar28 >> 0x20);
      if (bVar15) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar16 = (pFVar6->ExportNames).ArrayNum;
    piVar1 = &(pFVar6->ExportNames).ArrayMax;
    if (iVar16 == *piVar1) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FString>_>
                         (0x810,&pTVar25->AllocatorInstance,piVar1);
    }
    (pFVar6->ExportNames).ArrayNum = iVar16 + 1;
    pTVar2 = (pTVar25->AllocatorInstance).InlineData + iVar16;
    pTVar2->Pad[0] = '\0';
    pTVar2->Pad[1] = '\0';
    pTVar2->Pad[2] = '\0';
    pTVar2->Pad[3] = '\0';
    pTVar2->Pad[4] = '\0';
    pTVar2->Pad[5] = '\0';
    pTVar2->Pad[6] = '\0';
    pTVar2->Pad[7] = '\0';
    *(FScriptContainerElement **)(pTVar25->AllocatorInstance).InlineData[iVar16].Pad =
         local_318.Data.AllocatorInstance.Data;
    *(int *)((pFVar6->ExportNames).AllocatorInstance.InlineData[iVar16].Pad + 8) =
         local_318.Data.ArrayNum;
    *(int *)((pFVar6->ExportNames).AllocatorInstance.InlineData[iVar16].Pad + 0xc) =
         local_318.Data.ArrayMax;
    local_318.Data.ArrayNum = 0;
    local_318.Data.ArrayMax = 0;
    local_318.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (*(int *)((pFVar6->ExportNames).AllocatorInstance.InlineData[iVar16].Pad + 8) == 0) {
      pwStack_218 = L"";
    }
    else {
      pwStack_218 = *(wchar_t **)(pTVar25->AllocatorInstance).InlineData[iVar16].Pad;
    }
    if ((pFVar5->EntryPoint).Data.ArrayNum == 0) {
      local_2e8._0_8_ = L"";
    }
    else {
      local_2e8._0_8_ = (pFVar5->EntryPoint).Data.AllocatorInstance.Data;
    }
    if ((&local_180 <= (ForElementType<wchar_t_const_*> *)local_2e8) &&
       (local_2e8 < local_180.InlineData + (int)local_164)) {
      uVar29 = (undefined4)((ulonglong)&local_180 >> 0x20);
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar15) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (local_168 == local_164) {
      local_168 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<3>::ForElementType<wchar_t_const_*>_>
                            (0x808,&local_180,(int *)&local_164);
    }
    lVar22 = (longlong)(int)local_168;
    local_168 = local_168 + 1;
    *(undefined8 *)local_180.InlineData[lVar22].Pad = local_2e8._0_8_;
    if (*(int *)((pFVar6->ExportNames).AllocatorInstance.InlineData[iVar16].Pad + 8) == 0) {
      local_2e8._8_8_ = L"";
    }
    else {
      local_2e8._8_8_ = *(undefined8 *)(pTVar25->AllocatorInstance).InlineData[iVar16].Pad;
    }
    if ((&local_160 <= (ForElementType<wchar_t_const_*> *)(local_2e8 + 8)) &&
       (local_2e8 + 8 < local_160.InlineData + local_144)) {
      uVar29 = (undefined4)((ulonglong)&local_160 >> 0x20);
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar15) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (local_148 == local_144) {
      local_148 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<3>::ForElementType<wchar_t_const_*>_>
                            (0x808,&local_160,&local_144);
    }
    lVar22 = (longlong)local_148;
    local_148 = local_148 + 1;
    *(undefined8 *)local_160.InlineData[lVar22].Pad = local_2e8._8_8_;
    if (1 < (pFVar5->AnyHitEntryPoint).Data.ArrayNum) {
      pFVar6 = this->Entry;
      pTVar25 = &pFVar6->ExportNames;
      ::FString::PrintfImpl(&local_308,L"%s_%016llx");
      if ((pTVar25 <= &local_308) &&
         (&local_308 < (pTVar25->AllocatorInstance).InlineData + (pFVar6->ExportNames).ArrayMax)) {
        pTVar28 = pTVar25;
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        uVar29 = (undefined4)((ulonglong)pTVar28 >> 0x20);
        if (bVar15) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar16 = (pFVar6->ExportNames).ArrayNum;
      piVar1 = &(pFVar6->ExportNames).ArrayMax;
      if (iVar16 == *piVar1) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FString>_>
                           (0x810,&pTVar25->AllocatorInstance,piVar1);
      }
      (pFVar6->ExportNames).ArrayNum = iVar16 + 1;
      pTVar2 = (pTVar25->AllocatorInstance).InlineData + iVar16;
      pTVar2->Pad[0] = '\0';
      pTVar2->Pad[1] = '\0';
      pTVar2->Pad[2] = '\0';
      pTVar2->Pad[3] = '\0';
      pTVar2->Pad[4] = '\0';
      pTVar2->Pad[5] = '\0';
      pTVar2->Pad[6] = '\0';
      pTVar2->Pad[7] = '\0';
      *(FScriptContainerElement **)(pTVar25->AllocatorInstance).InlineData[iVar16].Pad =
           local_308.Data.AllocatorInstance.Data;
      *(int *)((pFVar6->ExportNames).AllocatorInstance.InlineData[iVar16].Pad + 8) =
           local_308.Data.ArrayNum;
      *(int *)((pFVar6->ExportNames).AllocatorInstance.InlineData[iVar16].Pad + 0xc) =
           local_308.Data.ArrayMax;
      local_308.Data.ArrayNum = 0;
      local_308.Data.ArrayMax = 0;
      local_308.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (*(int *)((pFVar6->ExportNames).AllocatorInstance.InlineData[iVar16].Pad + 8) == 0) {
        local_220 = L"";
      }
      else {
        local_220 = *(wchar_t **)(pTVar25->AllocatorInstance).InlineData[iVar16].Pad;
      }
      if ((pFVar5->AnyHitEntryPoint).Data.ArrayNum == 0) {
        local_2d8._0_8_ = L"";
      }
      else {
        local_2d8._0_8_ = (pFVar5->AnyHitEntryPoint).Data.AllocatorInstance.Data;
      }
      if ((&local_180 <= (ForElementType<wchar_t_const_*> *)local_2d8) &&
         (local_2d8 < local_180.InlineData + (int)local_164)) {
        uVar29 = (undefined4)((ulonglong)&local_180 >> 0x20);
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar15) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (local_168 == local_164) {
        local_168 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<3>::ForElementType<wchar_t_const_*>_>
                              (0x808,&local_180,(int *)&local_164);
      }
      lVar22 = (longlong)(int)local_168;
      local_168 = local_168 + 1;
      *(undefined8 *)local_180.InlineData[lVar22].Pad = local_2d8._0_8_;
      if (*(int *)((pFVar6->ExportNames).AllocatorInstance.InlineData[iVar16].Pad + 8) == 0) {
        local_2d8._8_8_ = L"";
      }
      else {
        local_2d8._8_8_ = *(undefined8 *)(pTVar25->AllocatorInstance).InlineData[iVar16].Pad;
      }
      if ((&local_160 <= (ForElementType<wchar_t_const_*> *)(local_2d8 + 8)) &&
         (local_2d8 + 8 < local_160.InlineData + local_144)) {
        uVar29 = (undefined4)((ulonglong)&local_160 >> 0x20);
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar15) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (local_148 == local_144) {
        local_148 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<3>::ForElementType<wchar_t_const_*>_>
                              (0x808,&local_160,&local_144);
      }
      lVar22 = (longlong)local_148;
      local_148 = local_148 + 1;
      *(undefined8 *)local_160.InlineData[lVar22].Pad = local_2d8._8_8_;
    }
    if (1 < (pFVar5->IntersectionEntryPoint).Data.ArrayNum) {
      pFVar6 = this->Entry;
      pTVar25 = &pFVar6->ExportNames;
      ::FString::PrintfImpl(&local_2f8,L"%s_%016llx");
      if ((pTVar25 <= &local_2f8) &&
         (&local_2f8 < (pTVar25->AllocatorInstance).InlineData + (pFVar6->ExportNames).ArrayMax)) {
        pTVar28 = pTVar25;
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        uVar29 = (undefined4)((ulonglong)pTVar28 >> 0x20);
        if (bVar15) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar16 = (pFVar6->ExportNames).ArrayNum;
      piVar1 = &(pFVar6->ExportNames).ArrayMax;
      if (iVar16 == *piVar1) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FString>_>
                           (0x810,&pTVar25->AllocatorInstance,piVar1);
      }
      (pFVar6->ExportNames).ArrayNum = iVar16 + 1;
      pTVar2 = (pTVar25->AllocatorInstance).InlineData + iVar16;
      pTVar2->Pad[0] = '\0';
      pTVar2->Pad[1] = '\0';
      pTVar2->Pad[2] = '\0';
      pTVar2->Pad[3] = '\0';
      pTVar2->Pad[4] = '\0';
      pTVar2->Pad[5] = '\0';
      pTVar2->Pad[6] = '\0';
      pTVar2->Pad[7] = '\0';
      *(FScriptContainerElement **)(pTVar25->AllocatorInstance).InlineData[iVar16].Pad =
           local_2f8.Data.AllocatorInstance.Data;
      *(int *)((pFVar6->ExportNames).AllocatorInstance.InlineData[iVar16].Pad + 8) =
           local_2f8.Data.ArrayNum;
      *(int *)((pFVar6->ExportNames).AllocatorInstance.InlineData[iVar16].Pad + 0xc) =
           local_2f8.Data.ArrayMax;
      local_2f8.Data.ArrayNum = 0;
      local_2f8.Data.ArrayMax = 0;
      local_2f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (*(int *)((pFVar6->ExportNames).AllocatorInstance.InlineData[iVar16].Pad + 8) == 0) {
        local_210 = L"";
      }
      else {
        local_210 = *(wchar_t **)(pTVar25->AllocatorInstance).InlineData[iVar16].Pad;
      }
      if ((pFVar5->IntersectionEntryPoint).Data.ArrayNum == 0) {
        local_2c8._0_8_ = L"";
      }
      else {
        local_2c8._0_8_ = (pFVar5->IntersectionEntryPoint).Data.AllocatorInstance.Data;
      }
      if ((&local_180 <= (ForElementType<wchar_t_const_*> *)local_2c8) &&
         (local_2c8 < local_180.InlineData + (int)local_164)) {
        uVar29 = (undefined4)((ulonglong)&local_180 >> 0x20);
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar15) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (local_168 == local_164) {
        local_168 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<3>::ForElementType<wchar_t_const_*>_>
                              (0x808,&local_180,(int *)&local_164);
      }
      lVar22 = (longlong)(int)local_168;
      local_168 = local_168 + 1;
      *(undefined8 *)local_180.InlineData[lVar22].Pad = local_2c8._0_8_;
      if (*(int *)((pFVar6->ExportNames).AllocatorInstance.InlineData[iVar16].Pad + 8) == 0) {
        local_2c8._8_8_ = L"";
      }
      else {
        local_2c8._8_8_ = *(undefined8 *)(pTVar25->AllocatorInstance).InlineData[iVar16].Pad;
      }
      if ((&local_160 <= (ForElementType<wchar_t_const_*> *)(local_2c8 + 8)) &&
         (local_2c8 + 8 < local_160.InlineData + local_144)) {
        uVar29 = (undefined4)((ulonglong)&local_160 >> 0x20);
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar15) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (local_148 == local_144) {
        local_148 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<3>::ForElementType<wchar_t_const_*>_>
                              (0x808,&local_160,&local_144);
      }
      lVar22 = (longlong)local_148;
      local_148 = local_148 + 1;
      *(undefined8 *)local_160.InlineData[lVar22].Pad = local_2c8._8_8_;
    }
  }
  else {
    if ((((EVar3 - RayGen & 0xfffffffc) != 0) || (EVar3 == HitGroup)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("CollectionType == ECollectionType::Miss || CollectionType == ECollectionType::RayGen || CollectionType == ECollectionType::Callable"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0x453,L"Unexpected RT shader collection type"), bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((pFVar5->EntryPoint).Data.ArrayNum == 0) {
      local_2b8._0_8_ = L"";
    }
    else {
      local_2b8._0_8_ = (pFVar5->EntryPoint).Data.AllocatorInstance.Data;
    }
    if ((&local_180 <= (ForElementType<wchar_t_const_*> *)local_2b8) &&
       (local_2b8 < local_180.InlineData + (int)local_164)) {
      uVar29 = (undefined4)((ulonglong)&local_180 >> 0x20);
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar15) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (local_168 == local_164) {
      local_168 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<3>::ForElementType<wchar_t_const_*>_>
                            (0x808,&local_180,(int *)&local_164);
    }
    lVar22 = (longlong)(int)local_168;
    local_168 = local_168 + 1;
    *(undefined8 *)local_180.InlineData[lVar22].Pad = local_2b8._0_8_;
    local_2b8._8_8_ = FD3D12RayTracingPipelineCache::FEntry::GetPrimaryExportNameChars(this->Entry);
    if ((&local_160 <= (ForElementType<wchar_t_const_*> *)(local_2b8 + 8)) &&
       (local_2b8 + 8 < local_160.InlineData + local_144)) {
      uVar29 = (undefined4)((ulonglong)&local_160 >> 0x20);
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar15) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (local_148 == local_144) {
      local_148 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<3>::ForElementType<wchar_t_const_*>_>
                            (0x808,&local_160,&local_144);
    }
    lVar22 = (longlong)local_148;
    local_148 = local_148 + 1;
    *(undefined8 *)local_160.InlineData[lVar22].Pad = local_2b8._8_8_;
  }
  if ((4 < (uint)(this->Entry->ExportNames).ArrayNum) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Entry.ExportNames.Num() <= Entry.MaxExports",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x45b,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_140.ExportDesc.AllocatorInstance.SecondaryData = (ForElementType<D3D12_EXPORT_DESC>)0x0;
  local_140.ExportDesc.ArrayNum = 0;
  local_140.EntryNames.AllocatorInstance.SecondaryData = (ForElementType<FString>)0x0;
  local_140.EntryNames.ArrayNum = 0;
  local_140.ExportNames.AllocatorInstance.SecondaryData = (ForElementType<FString>)0x0;
  local_140.ExportNames.ArrayNum = 0;
  local_140.Desc.DXILLibrary.pShaderBytecode = (void *)0x0;
  local_140.Desc.DXILLibrary.BytecodeLength = 0;
  local_140.ExportDesc.ArrayMax = 3;
  local_140.Desc.NumExports = 0;
  local_140.Desc._20_4_ = 0;
  local_140.Desc.pExports = (D3D12_EXPORT_DESC *)0x0;
  local_140.EntryNames.ArrayMax = 3;
  local_140.ExportNames.ArrayMax = 3;
  FDXILLibrary::InitFromDXIL
            (&local_140,(void *)pFVar5->_padding_,(uint)pFVar5->_padding_,(wchar_t **)&local_180,
             (wchar_t **)&local_160,local_168);
  local_1c0 = local_148;
  local_250 = &local_140;
  local_1e8.DataPtr = (uint *)&local_258;
  local_1d8 = (ID3D12RootSignature)&local_230;
  local_1c8 = &local_160;
  local_208 = 0;
  local_200 = 0;
  local_1f8.DataPtr = (D3D12_EXISTING_COLLECTION_DESC *)0x0;
  local_1f8.ArrayNum = 0;
  local_1e8.ArrayNum = 1;
  local_1d0 = (uint)(EVar3 == HitGroup);
  if ((local_148 < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_1b8.DataPtr = (wchar_t **)&local_250;
  local_1b8.ArrayNum = 1;
  TVar19 = CreateRayTracingStateObject
                     (&local_280,(TArrayView<FDXILLibrary_const_*,int> *)this->RayTracingDevice,
                      &local_1b8,(uint)&local_1c8,uVar4,
                      (TArrayView<D3D12_HIT_GROUP_DESC_const_,int> *)CONCAT44(uVar29,local_2a4),
                      &local_1d8,local_248,&local_1e8,&local_1f8,(D3D12_STATE_OBJECT_TYPE)&local_208
                     );
  pTVar26 = &this->Entry->StateObject;
  if ((ID3D12StateObject *)pTVar26 != TVar19.Reference) {
    pIVar7 = pTVar26->Reference;
    pTVar26->Reference = (ID3D12StateObject *)*TVar19.Reference;
    *TVar19.Reference = (ID3D12StateObject)0x0;
    if (pIVar7 != (ID3D12StateObject *)0x0) {
      (**(code **)((longlong)*pIVar7 + 0x10))();
    }
  }
  if (local_280 != (ID3D12Device5)0x0) {
    (**(code **)(*(longlong *)local_280 + 0x10))();
  }
  pIVar7 = (this->Entry->StateObject).Reference;
  if (pIVar7 == (ID3D12StateObject *)0x0) {
    if (this->bRequired != false) {
      UE::Logging::Private::BasicFatalLog
                (&`public:_void___cdecl_FD3D12RayTracingPipelineCache::FShaderCompileTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                  ::__l38::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
  }
  else {
    FD3D12Device::GetRayTracingPipelineInfo(this->Device,pIVar7,&this->Entry->PipelineInfo);
    pwVar20 = FD3D12RayTracingPipelineCache::FEntry::GetPrimaryExportNameChars(this->Entry);
    pFVar21 = GetShaderIdentifier(&local_1a0,(this->Entry->StateObject).Reference,pwVar20);
    uVar9 = pFVar21->Data[1];
    uVar10 = pFVar21->Data[2];
    uVar11 = pFVar21->Data[3];
    pFVar6 = this->Entry;
    (pFVar6->Identifier).Data[0] = pFVar21->Data[0];
    (pFVar6->Identifier).Data[1] = uVar9;
    (pFVar6->Identifier).Data[2] = uVar10;
    (pFVar6->Identifier).Data[3] = uVar11;
  }
  QueryPerformanceCounter(&local_278);
  this->Entry->CompileTimeMS =
       (float)((double)(ulonglong)(local_270 + local_278.QuadPart) *
               FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000);
  if ((__real_447a0000 <= this->Entry->CompileTimeMS) && (4 < (byte)LogD3D12RHI._0_1_)) {
    if (((int)local_168 < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    UE::Logging::Private::BasicLog<5>
              (&`public:_void___cdecl_FD3D12RayTracingPipelineCache::FShaderCompileTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                ::__l59::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  }
  FVar23 = (ForElementType<FString>)&local_140.ExportNames;
  if (local_140.ExportNames.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
    FVar23 = local_140.ExportNames.AllocatorInstance.SecondaryData;
  }
  DestructItems<FString,int>((FString *)FVar23,local_140.ExportNames.ArrayNum);
  if (local_140.ExportNames.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
    FMemory::Free((void *)local_140.ExportNames.AllocatorInstance.SecondaryData);
  }
  FVar23 = (ForElementType<FString>)&local_140.EntryNames;
  if (local_140.EntryNames.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
    FVar23 = local_140.EntryNames.AllocatorInstance.SecondaryData;
  }
  DestructItems<FString,int>((FString *)FVar23,local_140.EntryNames.ArrayNum);
  if (local_140.EntryNames.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
    FMemory::Free((void *)local_140.EntryNames.AllocatorInstance.SecondaryData);
  }
  if (local_140.ExportDesc.AllocatorInstance.SecondaryData != (ForElementType<D3D12_EXPORT_DESC>)0x0
     ) {
    FMemory::Free((void *)local_140.ExportDesc.AllocatorInstance.SecondaryData);
  }
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar13) && (FVar24 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_240.NameAndInfo.Index = FVar24.ComparisonIndex.Value;
      local_240.NameAndInfo.Number = FVar24.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_268);
      local_240.StatData.Pad[4] = '\0';
      local_240.StatData.Pad[5] = '\0';
      local_240.StatData.Pad[6] = '\0';
      local_240.StatData.Pad[7] = '\0';
      local_240.StatData.Pad[0] = local_268.s.LowPart._0_1_;
      local_240.StatData.Pad[1] = local_268.s.LowPart._1_1_;
      local_240.StatData.Pad[2] = local_268.s.LowPart._2_1_;
      local_240.StatData.Pad[3] = local_268.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_240);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

