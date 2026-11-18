// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 3

// ~FParallelExecutor @ 145b4cd20

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`ParallelForImpl::
ParallelForInternal<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext>'
::__l2::FParallelExecutor::~FParallelExecutor(void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)this != 0) && (*(char *)((longlong)this + 0xc) != '\0')) {
    LaunchTask(this,*(int *)((longlong)this + 8),true);
  }
  puVar3 = *(undefined8 **)this;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145b4cd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 145b551e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

bool __thiscall
`ParallelForImpl::
ParallelForInternal<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext>'
::__l2::FParallelExecutor::operator()(void *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  FTlsAutoCleanup *pFVar19;
  longlong lVar20;
  int iVar21;
  char *pcVar22;
  int iVar23;
  bool bVar24;
  longlong lVar25;
  longlong lVar26;
  int iVar27;
  longlong lVar28;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar29 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auStackY_188 [32];
  EShaderFrequency EVar31;
  int local_120;
  ulong64 local_118;
  undefined1 local_110 [4];
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  FMemMark local_f8;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>,int,int,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>(wchar_t_const_*,int,int,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>,int,int,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>_const_&)_::_2_::FParallelForData>
  local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong *local_b8;
  LARGE_INTEGER local_b0;
  longlong *local_a8;
  LARGE_INTEGER local_a0;
  code *local_98;
  undefined1 *local_90;
  FInheritedContextScope local_88;
  ulonglong local_68;
  undefined1 auVar30 [16];
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_b8 = this;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)(*(longlong *)this + 0x10),&local_88);
  puVar18 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_90 = local_110;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar19 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_98,puVar18);
  local_f8.Mem = (FMemStackBase *)(pFVar19 + 2);
  local_f8.Top = (local_f8.Mem)->Top;
  local_f8.SavedChunk = *(FTaggedMemory **)(pFVar19 + 4);
  local_f8.bPopped = false;
  local_f8.NextTopmostMark = *(FMemMark **)(pFVar19 + 5);
  pFVar19[5] = (FTlsAutoCleanup)&local_f8;
  *(int *)(pFVar19 + 6) = *(int *)(pFVar19 + 6) + 1;
  lVar4 = *(longlong *)this;
  if (param_1) {
    local_120 = *(int *)(lVar4 + 0x54);
    local_118 = 0xffffffffffffffff;
  }
  else {
    uVar17 = *(uint *)((longlong)this + 8);
    uVar16 = 0;
    if ((int)uVar17 < *(int *)(lVar4 + 0x80)) {
      uVar16 = ~uVar17 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar5 = (code *)swi(3);
      uVar14 = (*pcVar5)();
      return (bool)uVar14;
    }
    local_118 = *(ulong64 *)(*(longlong *)(lVar4 + 0x78) + 0x40 + (longlong)(int)uVar17 * 0x48);
    TaskTrace::Started(local_118);
    local_120 = *(int *)(*(longlong *)this + 0x54);
    if (*(int *)(*(longlong *)this + 0x40) + 2 <= local_120) {
      lVar4 = *(longlong *)this;
      LOCK();
      piVar1 = (int *)(lVar4 + 0x48);
      iVar23 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*(int *)(lVar4 + 0x80) <= iVar23) {
        iVar23 = -1;
      }
      if (iVar23 != -1) {
        local_d0.Reference = *(FParallelForData **)this;
        if (local_d0.Reference != (FParallelForData *)0x0) {
          LOCK();
          *(int *)&(local_d0.Reference)->field_0x8 = *(int *)&(local_d0.Reference)->field_0x8 + 1;
          UNLOCK();
        }
        LaunchTask(&local_d0,iVar23,true);
        if (local_d0.Reference != (FParallelForData *)0x0) {
          puVar2 = &(local_d0.Reference)->field_0x8;
          LOCK();
          iVar23 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (((iVar23 == 1) && (puVar2 != (undefined1 *)0x0)) &&
             (local_d0.Reference != (FParallelForData *)0x0)) {
            (*(code *)**(undefined8 **)local_d0.Reference)(local_d0.Reference,1);
          }
        }
      }
    }
  }
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)(*(longlong *)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x143);
  }
  dVar10 = __real_42e312d000000010;
  dVar9 = __real_416312d000000000;
  local_c8 = -0x8000000000000000;
  local_c0 = 0;
  if ((param_1) || (*(char *)(*(longlong *)this + 0x70) < '\x03')) {
    bVar24 = false;
  }
  else {
    bVar24 = true;
    QueryPerformanceCounter(&local_b0);
    auVar29._8_8_ = extraout_XMM0_Qb;
    auVar29._0_8_ = extraout_XMM0_Qa;
    uVar17 = GParallelForBackgroundYieldingTimeoutMs;
    if (GParallelForBackgroundYieldingTimeoutMs < 0) {
      uVar17 = 0;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (double)local_b0.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar9 +
                   dVar10;
    auVar29 = roundpd(auVar29,auVar6,1);
    local_c8 = (longlong)auVar29._0_8_;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (double)(int)uVar17 * __real_40c3880000000000 + __real_3fe0000000000000;
    auVar29 = roundpd(auVar29,auVar7,1);
    local_c0 = (longlong)auVar29._0_8_;
  }
  lVar4 = *(longlong *)this;
  local_a8 = *(longlong **)(lVar4 + 0x58);
  local_10c = *(int *)(lVar4 + 0x4c);
  local_108 = *(int *)(lVar4 + 0x50);
  lVar4 = *(longlong *)(lVar4 + 0x60);
  lVar25 = local_c8;
  lVar26 = local_c0;
  iVar23 = local_10c;
  iVar27 = local_108;
  do {
    do {
      plVar12 = local_a8;
      plVar11 = local_b8;
      LOCK();
      piVar1 = (int *)(*(longlong *)this + 0x40);
      iVar21 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (((local_120 < iVar23) && (local_120 + -1 <= iVar21)) &&
         (iVar21 = local_120 + -1, !param_1)) goto LAB_145b557af;
      local_104 = iVar21 * iVar27;
      local_100 = iVar23;
      if (local_104 + iVar27 < iVar23) {
        local_100 = local_104 + iVar27;
      }
      lVar20 = (longlong)local_104;
      if (lVar20 < local_100) {
        lVar28 = local_100 - lVar20;
        lVar20 = lVar20 * 0x38;
        do {
          uVar17 = *(uint *)(plVar11 + 1);
          uVar16 = 0;
          if ((int)uVar17 < (int)plVar12[1]) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar15)) {
            pcVar5 = (code *)swi(3);
            uVar14 = (*pcVar5)();
            return (bool)uVar14;
          }
          cVar3 = *(char *)(lVar4 + 0x20);
          lVar25 = *(longlong *)(lVar4 + 8);
          if (cVar3 == '\0') {
            if (*(char *)(lVar20 + lVar25) == '\x02') {
              if (*(char *)(*(longlong *)(lVar4 + 0x18) + 0x340) != '\0') {
                iVar23 = 0x891;
                pcVar22 = 
                "ShaderTable->GetInitializer().Lifetime == ERayTracingShaderBindingTableLifetime::Transient"
                ;
LAB_145b556bb:
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   (pcVar22,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                                    ,iVar23,L"");
                if (bVar15) {
                  pcVar5 = (code *)swi(3);
                  uVar14 = (*pcVar5)();
                  return (bool)uVar14;
                }
              }
            }
            else {
              SetRayTracingHitGroup
                        (*(FVulkanRayTracingShaderTable **)(lVar4 + 0x18),
                         *(uint *)(lVar20 + 0x14 + lVar25),
                         *(FVulkanRayTracingPipelineState **)(lVar4 + 0x10),
                         *(uint *)(lVar20 + 0x18 + lVar25),
                         *(FVulkanRayTracingGeometry **)(lVar20 + 8 + lVar25),
                         *(uint *)(lVar20 + 0x10 + lVar25),(uint)*(ushort *)(lVar20 + 0x20 + lVar25)
                         ,*(FRHIUniformBuffer ***)(lVar20 + 0x28 + lVar25),
                         (uint)*(ushort *)(lVar20 + 0x22 + lVar25),
                         *(void **)(lVar20 + 0x30 + lVar25),*(uint *)(lVar20 + 0x1c + lVar25),
                         *(uint *)(*plVar12 + (longlong)(int)uVar17 * 4));
            }
          }
          else {
            if (cVar3 == '\x01') {
              EVar31 = SF_RayCallable;
            }
            else {
              if (cVar3 != '\x02') {
                iVar23 = 0x8aa;
                pcVar22 = "!\"Enclosing block should never be called\"";
                goto LAB_145b556bb;
              }
              EVar31 = SF_RayMiss;
            }
            SetGenericSystemParameters
                      (*(FVulkanRayTracingShaderTable **)(lVar4 + 0x18),
                       *(uint *)(lVar20 + 0x14 + lVar25),
                       *(FRHIRayTracingPipelineState **)(lVar4 + 0x10),
                       *(uint *)(lVar20 + 0x18 + lVar25),(uint)*(ushort *)(lVar20 + 0x20 + lVar25),
                       *(FRHIUniformBuffer ***)(lVar20 + 0x28 + lVar25),
                       (uint)*(ushort *)(lVar20 + 0x22 + lVar25),*(void **)(lVar20 + 0x30 + lVar25),
                       *(uint *)(lVar20 + 0x1c + lVar25),EVar31);
          }
          lVar20 = lVar20 + 0x38;
          lVar28 = lVar28 + -1;
          lVar25 = local_c8;
          lVar26 = local_c0;
          this = local_b8;
          iVar23 = local_10c;
          iVar27 = local_108;
        } while (lVar28 != 0);
      }
      if (local_104 < iVar23) {
        LOCK();
        piVar1 = (int *)(*(longlong *)this + 0x44);
        iVar21 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar21 == 1) {
          if (!param_1) {
            (**(code **)(*(longlong *)**(undefined8 **)(*(longlong *)this + 0x68) + 0x10))();
          }
          bVar24 = true;
          goto LAB_145b557b9;
        }
      }
      if (iVar23 <= local_100) goto LAB_145b557af;
    } while (!bVar24);
    QueryPerformanceCounter(&local_a0);
    auVar30._8_8_ = extraout_XMM0_Qb_00;
    auVar30._0_8_ = extraout_XMM0_Qa_00;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (double)local_a0.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar9 +
                   dVar10;
    auVar29 = roundpd(auVar30,auVar8,1);
    iVar23 = local_10c;
    iVar27 = local_108;
  } while ((longlong)auVar29._0_8_ - lVar25 <= lVar26);
  *(undefined1 *)((longlong)this + 0xc) = 1;
LAB_145b557af:
  bVar24 = false;
LAB_145b557b9:
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!param_1) {
    TaskTrace::Completed(local_118);
  }
  if (local_f8.bPopped == false) {
    if (((local_f8.Mem)->TopMark != &local_f8) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar13)) {
      pcVar5 = (code *)swi(3);
      uVar14 = (*pcVar5)();
      return (bool)uVar14;
    }
    local_f8.bPopped = true;
    (local_f8.Mem)->NumMarks = (local_f8.Mem)->NumMarks + -1;
    if (local_f8.SavedChunk != (local_f8.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_f8.Mem,local_f8.SavedChunk);
    }
    (local_f8.Mem)->Top = local_f8.Top;
    (local_f8.Mem)->TopMark = local_f8.NextTopmostMark;
    local_f8.Top = (uchar *)0x0;
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_88.MetaScope);
  FMemScope::~FMemScope(&local_88.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_88,local_88.LLMScopes.LLMScopes.ArrayNum);
  return bVar24;
}

// LaunchTask @ 145b6d4e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __cdecl
`ParallelForImpl::
ParallelForInternal<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>,`ParallelForWithExistingTaskContext<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::__l2::FTaskContext>'
::__l2::FParallelExecutor::LaunchTask
          (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>,int,int,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>(wchar_t_const_*,int,int,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_>(wchar_t_const_*,TArrayView<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>,int,int,_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>_const_&)_::_2_::FParallelForData>
           *param_1,int param_2,bool param_3)

{
  undefined1 *puVar1;
  FTracedTask *pFVar2;
  FParallelForData *pFVar3;
  FTracedTask *pFVar4;
  wchar_t *pwVar5;
  code *pcVar6;
  bool bVar7;
  ETaskPriority EVar8;
  uint uVar9;
  atomic<unsigned___int64> aVar10;
  FTask *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  FParallelForData *local_38;
  int local_30;
  undefined1 local_2c;
  FParallelForData *local_28;
  int local_20;
  undefined1 local_1c;
  
  pFVar3 = param_1->Reference;
  uVar14 = 0;
  uVar9 = 0;
  if (param_2 < (pFVar3->Tasks).ArrayNum) {
    uVar9 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = (pFVar3->Tasks).AllocatorInstance.Data;
  pFVar2 = pFVar4 + param_2;
  if (pFVar4[param_2].TraceId != (atomic<unsigned___int64>)0xffffffffffffffff) {
    TaskTrace::Destroyed((ulong64)pFVar2->TraceId);
  }
  pwVar5 = param_1->Reference->DebugName;
  EVar8 = param_1->Reference->Priority;
  aVar10 = (atomic<unsigned___int64>)TaskTrace::GenerateTaskId();
  LOCK();
  pFVar2->TraceId = aVar10;
  UNLOCK();
  TaskTrace::Launched((ulong64)pFVar2->TraceId,pwVar5,false,AnyNormalThreadNormalTask,0);
  local_28 = param_1->Reference;
  param_1->Reference = (FParallelForData *)0x0;
  local_1c = 0;
  local_20 = param_2;
  if (((*(ulonglong *)&(pFVar2->Task).field_0x38 & 0x20) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d"), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_38 = local_28;
  local_30 = local_20;
  local_2c = local_1c;
  local_28 = (FParallelForData *)0x0;
  (**(code **)(*(longlong *)&(pFVar2->Task).field_0x28 + 0x18))(&(pFVar2->Task).field_0x28,pFVar2);
  *(undefined ***)&(pFVar2->Task).field_0x28 =
       &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
        TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::`2'::<lambda_1>,`ParallelForWithExistingTaskContext<`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::`2'::FTaskContext,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::`2'::<lambda_1>_>'::`2'::<lambda_1>,`FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable'::`2'::FTaskContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
        ::_vftable_;
  *(FParallelForData **)&pFVar2->Task = local_38;
  *(int *)&(pFVar2->Task).field_0x8 = local_30;
  (pFVar2->Task).field_0xc = local_2c;
  local_38 = (FParallelForData *)0x0;
  ~FParallelExecutor(&local_38);
  pFVar11 = LowLevelTasks::FTask::GetActiveTask();
  if (pFVar11 == (FTask *)0x0) {
    if (EVar8 == Inherit) {
      EVar8 = Default;
    }
  }
  else {
    if (EVar8 == Inherit) {
      EVar8 = (ETaskPriority)((ulonglong)*(undefined8 *)&pFVar11->field_0x38 >> 0x3b);
    }
    uVar14 = *(undefined8 *)&pFVar11->field_0x30;
  }
  *(undefined8 *)&(pFVar2->Task).field_0x30 = uVar14;
  *(ulonglong *)&(pFVar2->Task).field_0x38 =
       ((longlong)(char)EVar8 << 0x35 | (ulonglong)pwVar5 & 0x1fffffffffffff | 0xff00000000000000)
       << 6;
  ~FParallelExecutor(&local_28);
  uVar12 = *(ulonglong *)&(pFVar2->Task).field_0x38;
  do {
    puVar1 = &(pFVar2->Task).field_0x38;
    LOCK();
    uVar13 = *(ulonglong *)puVar1;
    bVar7 = uVar12 == uVar13;
    if (bVar7) {
      *(ulonglong *)puVar1 = uVar12 | 2;
      uVar13 = uVar12;
    }
    UNLOCK();
    uVar12 = uVar13;
  } while (!bVar7);
  if ((uVar13 & 2) == 0) {
    LowLevelTasks::FScheduler::LaunchInternal
              (&LowLevelTasks::FScheduler::Singleton,&pFVar2->Task,GlobalQueuePreference,param_3);
  }
  else {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("LowLevelTasks::TryLaunch(TracedTask.Task, LowLevelTasks::EQueuePreference::GlobalQueuePreference, bWakeUpWorker)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                       ,0x19d,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}

